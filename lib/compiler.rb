CurrentParser={}
require 'digest'
require 'set'
COMPILED=["tests","amethyst","traverser","detect_variables2","parser","dataflow_ssa","inliner2","normalize",
"detect_switch","left_factor","constant_propagation","ctranslator2","implicit_variables","remove_left_rigth_recursion"]
def debug_print(t)
	puts t.inspect if Amethyst::Settings.debug>1
end
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
		debug_print(r)
		dce=[ Dataflow, Dead_Code_Deleter3,Forget_SSA]
		[dce].flatten.each{|o|
     	r=o.new.parse(:root,r)
			debug_print(r)
		}
		
		[Dataflow].each{|p| r=p.new.parse(:root,r)}
		withtime(Constant_Propagator){
			c=Constant_Propagator.new
			c.parse(:root,[r.cfg])
			r.consts=c.analyze2
      debug_print(r)
		}
		[Constant_Traverser,Forget_SSA].each{|p| 
			r=p.new.parse(:root,r)
			debug_print(r)			
		}
		
 		[ dce,	 Left_Factor,	 dce].flatten.each{|o|
			r=o.new.parse(:root,r)
			debug_print(r)
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
	def complexity(r) # todo compute
		return 1000000 if r.args.size>0  && (! ["regch","clas"].include?(r.name))
		return 100 if  ["char","space"].include?(r.name)
		return 0
	end
	def add_grammar(grammar)
		$current_grammar_name=grammar.name #TODO hack for resolving apply. think of better way of supplying context
		g=@grammars[grammar.name]=Gram.new(grammar)
		g.callgraph=callg=Oriented_Graph.new
		g.callgraph=callg=@grammars[grammar.parent].callgraph.clone if @grammars[grammar.parent]
		names=g.rules.map{|name,code| name}
		names.each{|name|
			if CurrentParser[:implicit_variables]
        freq=Detect_Implicit_Variables.new.parse(:root,g.rules[name])
        g.rules[name]=Add_Implicit_Variables.new.parse(:root,[freq,g.rules[name]])
      end
      g.rules[name]=Analyze_Variables2.new.parse(:root,g.rules[name])
	  	g.rules[name]=Resolve_Calls.new.parse(:root,[g,g.rules[name]])
		}
		names.dup.each{|name| #update callgraph
			g.calls[name]=DetectCalls.new.parse(:root,[g.getrule(name)])
			g.calls[name].each{|c,t| callg.add(name,c)}
		}
		topo= callg.topo_order
		#TODO resolve name clashes
		called=callg.reverse.reachable(names)
		called.each{|k,v| g.rules[k]=g.getrule(k)}
		puts called.inspect;puts topo.inspect
		
		ds=Detect_Switch_Char.new;ds.instance_variable_set(:@name,grammar.name)
		dc=Detect_Switch_Clas.new;dc.instance_variable_set(:@name,grammar.name)
		$rules=g.rules
		topo.each{|name|if g.rules[name] && called[name]
				if g.calls[name] && g.calls[name].include?(name)
					g.rules[name]=Remove_Left_Recursion.new.parse(:root,[g.rules[name]])
				end
				g.opt(g.rules[name])
		end}
		topo.each{|name|if g.rules[name] && called[name]
				inlined=false
				callg[name].each{|nm,v|
					r=g.getrule(nm)
					if r && nm!=name
						if complexity(r)>10
							g.inline(nm,name) 
							inlined=true
						end
					end
				}
				DetectCalls.new.parse(:root,[g.getrule(name)]).each{|nm,t| r=g.getrule(nm)
					 g.inline(nm,name) if r && (nm=="seq" || nm=="token")
				}
				g.opt(g.rules[name]) if inlined
		end}
		topo.each{|name|if g.rules[name] && called[name]
				#TODO separately as in inherited it dont have to be true
		    [ds,dc].each{|o| g.rules[name]=o.parse(:root,g.rules[name])}
				g.opt(g.rules[name])	
		end}
	end
	def compile(file,out,file2)
		source=File.new(file).read
		source_hash=Digest::MD5.hexdigest(source)
		if Dir[Amethyst_path+ "/compiled/#{file2}.rb"]!=[] && eval("#{file2}_compiled_by")==$compiled_by && eval("#{file2}_source_hash")==source_hash && Amethyst::Settings.debug<1
			return unless ["amethyst","traverser"].include? file2 #inheritance
		end
		p=AmethystParser.new
		tree=p.parse(:igrammar,source)
		p.profile_report
		CurrentParser.clear

		#todo write this with less ugly code
		gno=0
		$gr=[]
		$compiler=self
		$grammars=@grammars
		pre =tree.map{|e|
		if e.is_a? Grammar
			gno+=1
			$gr[gno]=e
			"$compiler.add_grammar($gr[#{gno}])\n$gr[#{gno}].rules=$grammars[$gr[#{gno}].name].rules.map{|h,k| k}\n"
		else
		e
		end}.join
		eval("module Foo\n#{pre}\nend") 

		debug_print tree
		puts tree.inspect
		c,init,rb= AmethystCTranslator.new.parse(:itrans,tree)
		c=c*""
		if !Amethyst::Settings.profiling #oprofile does not like changing binaries
		hex_digest=Digest::MD5.hexdigest(c)
		File.open("compiled/#{file2}_c.c","w"){|f|
    f.puts "#include \"cthyst.h\""
    f.puts c
    f.puts "void Init_#{file2}_c(){ #{init*""} rb_eval_string(\"testversion#{file2}('#{hex_digest}')\");}"
    }
    File.open("compiled/#{file2}.rb","w"){|f| f.puts rb; 
      f.puts "\ndef #{file2}_compiled_by\n'#{$compiled_by}'\nend\ndef #{file2}_source_hash\n'#{source_hash}'\nend\ndef testversion#{file2}(r)\n raise \"invalid version\" if r!=#{file2}_version\nend\ndef #{file2}_version\n'#{hex_digest}'\nend
require File.expand_path(File.dirname(__FILE__))+\"/\#{RUBY_VERSION}/#{file2}_c\""}
		#fork{#makes time measurement more difficult disabled for now
	  withtime("c"){ #todo get flags portable not just 1.8 on x64
			if Amethyst::Settings.compile_for.include?("1_9_3")
				`cd compiled;gcc -I. -I/usr/include/ruby-1.9.1/x86_64-linux -I/usr/include/ruby-1.9.1/ruby/backward -I/usr/include/ruby-1.9.1 -I. -fPIC -fno-strict-aliasing -g -g #{Amethyst::Settings.cflags} -fPIC -c #{file2}_c.c -o #{file2}_c.o`
				`cd compiled;gcc -shared -o 1.9.3/#{file2}_c.so #{file2}_c.o -L. -L/usr/lib -L. -rdynamic -Wl,-export-dynamic -lruby-1.9.1 -lpthread -lrt -ldl -lcrypt -lm -lc`
			end
			if Amethyst::Settings.compile_for.include?("1_8_7")
		    `cd compiled;gcc -I. -I/usr/lib/ruby/1.8/x86_64-linux -I/usr/lib/ruby/1.8/x86_64-linux -I.   -fPIC -fno-strict-aliasing -g -g #{Amethyst::Settings.cflags}  -fPIC   -c #{file2}_c.c`
		    `cd compiled;gcc -shared -o 1.8.7/#{file2}_c.so #{file2}_c.o -L. -L/usr/lib -L.  -rdynamic -Wl,-export-dynamic -lruby1.8  -lpthread -lrt -ldl -lcrypt -lm   -lc`
			end
  	}#}
		end
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
$normalize=Normalize.new;

class Amethyst
	alias_method :parse2,:parse
	def parse(rule,obj)
		withtime(self.class){	parse2(rule,obj) }
	end
end
d=Detect_Switch_Char.new
