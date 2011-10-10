require 'digest'
require 'set'
$OPT=""
$debug=1
COMPILED=["amethyst","traverser","tests","detect_variables2","parser","dataflow_ssa","inliner2",
"detect_switch","left_factor","constant_propagation","ctranslator2"]
class Gram
	attr_accessor :name,:parent,:rules,:calls
	def initialize(grammar)
		@name,@parent=grammar.name,grammar.parent
		@rules={}
		@calls={}
		grammar.rules.each{|r| 
			@rules[r.name]=r
		}
	end
	def opt(r)
		dce=[ Dataflow, Dead_Code_Deleter3,Forget_SSA]
		[dce].flatten.each{|o|
	    puts r.inspect if $debug>1
     	r=o.new.parse(:root,r)
		}
		r=propagate_consts(r)
 		[ dce,	 Left_Factor,	 dce].flatten.each{|o|
			r=o.new.parse(:root,r)
			puts r.inspect if $debug>1
		}
    @rules[r.name]=r 
	end
	def getrule(name)
		fromrule,nm=nil,self.name
    begin
     	return nil if nm=="AmethystCore"
      fromrule= Compiler.grammars[nm].rules[name]
      nm=Compiler.grammars[nm].parent
    end until fromrule
		fromrule
	end
	def inline(from,to)
		puts from
		@rules[to]=Inliner2.new.parse(:root,[getrule(from), @rules[to]])
	end
end
def resolvegrammar(grammar,name)
	return "AmethystCore" if name=="anything" || name=="_seq"
	return nil if !Compiler.grammars[grammar]
	return grammar if Compiler.grammars[grammar].rules[name]
	return nil
end
class Compiler
end
class <<Compiler
	attr_accessor :grammars
	def init
		@grammars={}
	end
	def resolve
		#resolve super 
		#clone all rules that use rule defined in this grammar
	end
	def add_grammar(grammar)
		g=@grammars[grammar.name]=Gram.new(grammar)
		callg=Oriented_Graph.new
		names=g.rules.map{|name,code| name}
		names2=names.dup
		i=0
		while i<names.size
			g.calls[names[i]]=DetectCalls.new.parse(:root,[g.getrule(names[i])])
			if g.calls[names[i]].include? "super"
					super_name="#{names[i]}_#{grammar.name}"
					g.rules[super_name]=deep_clone(@grammars[grammar.parent].getrule(names[i]))
					g.rules[super_name].name=super_name
					g.rules[names[i]]=Replace_Super.new.parse(:root,[super_name,g.rules[names[i]]])
			end
			g.calls[names[i]].each{|c,t|
      	if !g.rules[c]
					if r=g.getrule(c)
						g.rules[c]=r
						names<<c
					end
				end
			  callg.add(names[i],c)
			}
			i+=1
		end
		topo= callg.topo_order
		called=callg.reverse.reachable(names2)
		puts called.inspect
		puts callg.inspect
		puts topo.inspect
		topo.each{|name|if g.rules[name] && called[name]
				g.opt(g.rules[name])
				
if true
				inlined=false
				g.calls[name].each{|nm,v|
					r=g.getrule(nm)
					if r && topo.index(nm)<topo.index(name) 
						if r.args.size>0  && (! ["regch","clas"].include?(r.name)) || ["char","space"].include?(r.name)
							g.inline(nm,name) 
							inlined=true
						end
					end
				}
				g.opt(g.rules[name]) if inlined
end

		end}
	end
	def compile(file,out,file2)
		source=File.new(file).read
		source_hash=Digest::MD5.hexdigest(source)
		if Dir["compiled/#{file2}.rb"]!=[] && eval("#{file2}_compiled_by")==$compiled_by && eval("#{file2}_source_hash")==source_hash && $debug<1
			return unless ["amethyst","traverser"].include? file2 #inheritance
		end
		tree=AmethystParser.new.parse(:igrammar,source)
		tree=Analyze_Variables2.new.parse(:itrans,tree)
		deep_clone(tree)
		tree.each{|a|	
			if a.is_a? Grammar
				add_grammar(a)
				a.rules=@grammars[a.name].rules.map{|h,k| k}
			else
			end
		}
		[Detect_Switch,Detect_ClasSwitch].each{|o|
			tree=o.new.parse(:itrans,tree)
			puts tree.inspect if $debug>1
		}

		c,init,rb= AmethystCTranslator.new.parse(:itrans,tree)
		c=c*""
		r=Digest::MD5.hexdigest(c)

		File.open("compiled/#{file2}_c.c","w"){|f|
    f.puts "#include \"cthyst.h\""
    f.puts c
    f.puts "void Init_#{file2}_c(){ #{init} rb_eval_string(\"testversion#{file2}('#{r}')\");}"
    }
    File.open("compiled/#{file2}.rb","w"){|f| f.puts rb; f.puts "\ndef #{file2}_compiled_by\n'#{$compiled_by}'\nend\ndef #{file2}_source_hash\n'#{source_hash}'\nend\ndef testversion#{file2}(r)\n raise \"invalid version\" if r!=#{file2}_version\nend\ndef #{file2}_version\n'#{r}'\nend\n  require 'compiled/#{file2}_c'"}
	  withtime("c"){ #todo get flags portable not just 1.8 on x64
    `cd compiled;gcc -I. -I/usr/lib/ruby/1.8/x86_64-linux -I/usr/lib/ruby/1.8/x86_64-linux -I.   -fPIC -fno-strict-aliasing -g -g #$OPT  -fPIC   -c #{file2}_c.c`
    `cd compiled;gcc -shared -o #{file2}_c.so #{file2}_c.o -L. -L/usr/lib -L.  -rdynamic -Wl,-export-dynamic -lruby1.8  -lpthread -lrt -ldl -lcrypt -lm   -lc`
  	}

	end
end	
Compiler::init
$compiled_by=""
COMPILED.each{|opt|
if Dir["compiled/#{opt}.rb"]!=[] #new grammars
	require "compiled/#{opt}"
	$compiled_by<< eval("#{opt}_version")
end
}
$compiled_by=Digest::MD5.hexdigest($compiled_by)

require 'constant_propagation2'

