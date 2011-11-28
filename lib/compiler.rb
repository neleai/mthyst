$debug||=1
$profiling||=false
$OPT||="-O1"
$implicit_variables=false
$persistent=false
require 'digest'
require 'set'
COMPILED=["amethyst","traverser","tests","detect_variables2","parser","dataflow_ssa","inliner2",
"detect_switch","left_factor","constant_propagation","ctranslator2","implicit_variables","remove_left_rigth_recursion"]
class Gram
	attr_accessor :name,:parent,:rules,:calls,:callgraph
	def initialize(grammar)
		@name,@parent=grammar.name,grammar.parent
		@rules={}
		@calls={}
		grammar.rules.each{|r| 
			@rules[r.name]=r
		}
	end
	def opt(r)
	    puts r.inspect if $debug>1

		dce=[ Dataflow, Dead_Code_Deleter3,Forget_SSA]
		[dce].flatten.each{|o|
     	r=o.new.parse(:root,r)
	    puts r.inspect if $debug>1
		}
		
		[Dataflow].each{|p| r=p.new.parse(:root,r)}
		withtime(Constant_Propagator){
			c=Constant_Propagator.new
			c.parse(:root,[r.cfg])
			r.consts={}
			c.analyze2.each{|k,v|
			  if v!=Top&&v!=Bottom
			    r.consts[k]=v
			    r.consts[k]=Act[v] if v.is_a?(Exp)
			  end
			}
			puts r.inspect if $debug>1
		}
		[Constant_Traverser].each{|p| 
			r=p.new.parse(:root,r)
			puts r.inspect if $debug>1
		}
		
 		[ dce,	 Left_Factor,	 dce].flatten.each{|o|
			r=o.new.parse(:root,r)
			puts r.inspect if $debug>1
		}
    @rules[r.name]=r 
	end
	def getrule(name)
		grammar=resolvegrammar(self.name,name)
		return nil if grammar=="AmethystCore"
		return Compiler.grammars[grammar].rules[name] if grammar
		return nil
	end
	def inline(from,to)
		puts from
		@rules[to]=Inliner2.new.parse(:root,[getrule(from), @rules[to]])
	end
end
def resolvegrammar(grammar,name)
	#TODO add header
	return "AmethystCore" if name=="anything" || name=="_seq"
	while true
		return nil if !Compiler.grammars[grammar]
		return grammar if Compiler.grammars[grammar].rules[name]
		grammar=Compiler.grammars[grammar].parent
	end
end
class Compiler
end
class <<Compiler
	attr_accessor :grammars
	def init
		@grammars={}
	end
	def add_grammar(grammar)
		ds=Detect_Switch.new;ds.instance_variable_set(:@name,grammar.name)
		dc=Detect_ClasSwitch.new;dc.instance_variable_set(:@name,grammar.name)
		g=@grammars[grammar.name]=Gram.new(grammar)
		g.callgraph=callg=Oriented_Graph.new
		g.callgraph=callg=@grammars[grammar.parent].callgraph.clone if @grammars[grammar.parent]
		names=g.rules.map{|name,code| name}
		names.dup.each{|nam|#resolve super
			g.calls[nam]=DetectCalls.new.parse(:root,[g.getrule(nam)])
			if g.calls[nam].include? "super"
          super_name="#{nam}_#{grammar.name}"
					names<<super_name
          g.rules[super_name]=deep_clone(@grammars[grammar.parent].getrule(nam))
          g.rules[super_name].name=super_name
          g.rules[nam]=Replace_Super.new.parse(:root,[super_name,g.rules[nam]])
      end
		}
		names.dup.each{|nam| #update callgraph
			g.calls[nam]=DetectCalls.new.parse(:root,[g.getrule(nam)])
			g.calls[nam].each{|c,t| callg.add(nam,c)}
		}
		topo= callg.topo_order
		called=callg.reverse.reachable(names)
		called.each{|k,v| g.rules[k]=g.getrule(k)}
		puts called.inspect;puts topo.inspect
		topo.each{|name|if g.rules[name] && called[name]
				if $implicit_variables
					freq=Detect_Implicit_Variables.new.parse(:root,g.rules[name])
					g.rules[name]=Add_Implicit_Variables.new.parse(:root,[freq,g.rules[name]])
				end
				g.opt(g.rules[name])
				inlined=false
				callg[name].each{|nm,v|
					r=g.getrule(nm)
					if r && topo.index(nm)<topo.index(name) 
						if r.args.size>0  && (! ["regch","clas"].include?(r.name)) || ["char","space"].include?(r.name)
							g.inline(nm,name) 
							inlined=true
						end
					end
				}
				g.opt(g.rules[name]) if inlined
		    [ds,dc].each{|o| g.rules[name]=o.parse(:root,g.rules[name])}
				g.opt(g.rules[name])	
		end}
	end
	def compile(file,out,file2)
		source=File.new(file).read
		source_hash=Digest::MD5.hexdigest(source)
		if Dir[Amethyst_path+ "/compiled/#{file2}.rb"]!=[] && eval("#{file2}_compiled_by")==$compiled_by && eval("#{file2}_source_hash")==source_hash && $debug<1
			return unless ["amethyst","traverser"].include? file2 #inheritance
		end
		tree=AmethystParser.new.parse(:igrammar,source)
		tree=Analyze_Variables2.new.parse(:itrans,tree)
		tree.each{|a|	
			if a.is_a? Grammar
				add_grammar(a)
				a.rules=@grammars[a.name].rules.map{|h,k| k}
			else
			end
		}
		puts tree.inspect if $debug >1
			c,init,rb= AmethystCTranslator.new.parse(:itrans,tree)
		c=c*""
		r=Digest::MD5.hexdigest(c)

		File.open("compiled/#{file2}_c.c","w"){|f|
    f.puts "#include \"cthyst.h\""
    f.puts c
    f.puts "void Init_#{file2}_c(){ #{init*""} rb_eval_string(\"testversion#{file2}('#{r}')\");}"
    }
    File.open("compiled/#{file2}.rb","w"){|f| f.puts rb; f.puts "\ndef #{file2}_compiled_by\n'#{$compiled_by}'\nend\ndef #{file2}_source_hash\n'#{source_hash}'\nend\ndef testversion#{file2}(r)\n raise \"invalid version\" if r!=#{file2}_version\nend\ndef #{file2}_version\n'#{r}'\nend\n  require 'compiled/#{file2}_c'"}
	  withtime("c"){ #todo get flags portable not just 1.8 on x64
		if !$profiling
			if true
				`cd compiled;gcc -I. -I/usr/include/ruby-1.9.1/x86_64-linux -I/usr/include/ruby-1.9.1/ruby/backward -I/usr/include/ruby-1.9.1 -I. -fPIC -fno-strict-aliasing -g -g #{$OPT} -fPIC -c #{file2}_c.c -o #{file2}_c.o`
				`cd compiled;gcc -shared -o #{file2}_c.so #{file2}_c.o -L. -L/usr/lib -L. -rdynamic -Wl,-export-dynamic -lruby-1.9.1 -lpthread -lrt -ldl -lcrypt -lm -lc`

	    else
		    `cd compiled;gcc -I. -I/usr/lib/ruby/1.8/x86_64-linux -I/usr/lib/ruby/1.8/x86_64-linux -I.   -fPIC -fno-strict-aliasing -g -g #$OPT  -fPIC   -c #{file2}_c.c`
		    `cd compiled;gcc -shared -o #{file2}_c.so #{file2}_c.o -L. -L/usr/lib -L.  -rdynamic -Wl,-export-dynamic -lruby1.8  -lpthread -lrt -ldl -lcrypt -lm   -lc`
			end
		end
  	}

	end
end	
Compiler::init
$compiled_by=""
COMPILED.each{|opt|
if Dir[Amethyst_path+"/compiled/#{opt}.rb"]!=[] #new grammars
	require Amethyst_path+"/compiled/#{opt}"
	$compiled_by<< eval("#{opt}_version")
end
}
$compiled_by=Digest::MD5.hexdigest($compiled_by)


class Amethyst
	alias_method :parse2,:parse
	def parse(rule,obj)
		withtime(self.class){	parse2(rule,obj) }
	end
end

