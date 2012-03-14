CurrentParser={}
require 'digest'
require 'set'
COMPILED=["amethyst","tests","traverser","detect_variables2","parser","dataflow_ssa","inliner2","normalize",
"detect_switch","left_factor","constant_propagation","ctranslator2","implicit_variables","remove_left_rigth_recursion","contextual_argument_return"]
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
     	r=o.root(r)
			debug_print(r)
		}
		
		[Dataflow].each{|p| r=p.root(r)}
		withtime(Constant_Propagator){
      r=r.dup
			c=Constant_Propagator.new
			c.parse(:root,[r.cfg])
			r.consts=c.analyze2
      r.freeze
      debug_print(r)
		}
		[Constant_Traverser,Forget_SSA].each{|p| 
			r=p.root(r)
			debug_print(r)			
		}
		
 		[ dce,	 Left_Factor,	 dce].flatten.each{|o|
			r=o.root(r)
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
        freq=Detect_Implicit_Variables.root(g.rules[name])
        g.rules[name]=Add_Implicit_Variables.root([freq,g.rules[name]])
      end
      g.rules[name]=Analyze_Variables2.root(g.rules[name])
	  	g.rules[name]=Resolve_Calls.root([g,g.rules[name]])
		}
		names.dup.each{|name| #update callgraph
			g.calls[name]=DetectCalls.root([g.getrule(name)])
			g.calls[name].each{|c,t| callg.add(name,c)}
		}
#    c=Context_Graph.new
    cargs=[]
    names.dup.each{|name| 
     cargs<<name if Detect_Contextual_Arguments.root(g.rules[name])!=[]
    }
    names.each{|name|
      aca=Add_Contextual_Arguments.new
      aca.instance_variable_set(:@cargs, callg.reverse.reachable(cargs))
      g.rules[name]=aca.parse(:root,g.rules[name])
      g.rules[name]=Add_Contextual_Returns.root(g.rules[name]) if CurrentParser[:contextual_returns]
    }

		topo= callg.topo_order
		#TODO resolve name clashes
		called=callg.reverse.reachable(names)
		called.each{|name,v| g.rules[name]=g.getrule(name)}
    called.each{|name,v| g.rules[name]=Resolve_Calls.root([g,g.rules[name]])}
		puts called.inspect;
		
		ds=Detect_Switch_Char.new;ds.instance_variable_set(:@name,grammar.name)
		dc=Detect_Switch_Clas.new;dc.instance_variable_set(:@name,grammar.name)
		$rules=g.rules
		topo.each{|name|if g.rules[name] && called[name]
				if g.calls[name] && g.calls[name].include?(name)
					g.rules[name]=Remove_Left_Recursion.root([g.rules[name]])
				end
				g.opt(g.rules[name])
		end}
		topo.each{|name|if g.rules[name] && called[name]
        repeat=true
        while repeat
				  inlined=false
          g.calls[name]=DetectCalls.root([g.getrule(name)])
			  	g.calls[name].each{|nm,v|
				  	r=g.getrule(nm)
			  		if r && nm!=name
					  	if complexity(r)>10
                puts "inlined #{nm} in #{name}"
		            g.rules[name]=Inliner2.root([g.getrule(nm), g.rules[name]])
			  				inlined=true
		  				end
	  				end
  				}
				  g.opt(g.rules[name]) if inlined
          repeat=false if !inlined || (!["Lam","AmethystParser_Highligth"].include?(g.name))#we want turn it to on where we can resolve lambdas.
        end
				DetectCalls.root([g.getrule(name)]).each{|nm,t| r=g.getrule(nm)
					 if r && (nm=="seq" || nm=="token")
            g.rules[name]=Inliner2.root([g.getrule(nm), g.rules[name]])
           end
				}
		end}
		topo.each{|name|if g.rules[name] && called[name]
				#TODO separately as in inherited it dont have to be true
		    [ds,dc].each{|o| g.rules[name]=o.parse(:root,g.rules[name])}
				g.opt(g.rules[name])	
		end}
    grammar.rules=g.rules.map{|h,k| k}
    c,init,rb=AmethystCTranslator.new.parse(:itrans,[grammar])
    hex_digest=Digest::MD5.hexdigest(c*"")
    File.open("compiled/#{g.name}.rb" ,"w"){|f| 
      f.puts rb
      f.puts "require File.expand_path(File.dirname(__FILE__))+\"/\#{RUBY_VERSION}/#{g.name}_c\""
    }
    File.open("compiled/#{g.name}_c.c","w"){|f| 
      f.puts "#include \"cthyst.h\""
      f.puts "#include \"memo.c\""
      f.puts c
      f.puts "void Init_#{g.name}_c(){ #{init*""} }" #rb_eval_string(\"testversion#{file2}('#{hex_digest}')\");}"
    }

		if !Amethyst::Settings.profiling #oprofile does not like changing binaries
	  withtime("c"){ #todo get flags portable not just 1.9.1 on x64
      `astyle compiled/#{g.name}_c.c`
	  	`cd compiled;gcc -I. -I/usr/include/ruby-1.9.1/x86_64-linux -I/usr/include/ruby-1.9.1/ruby/backward -I/usr/include/ruby-1.9.1 -I. -fPIC -fno-strict-aliasing -g -g #{Amethyst::Settings.cflags} -fPIC -c #{g.name}_c.c -o #{g.name}_c.o`
		  `cd compiled;gcc -shared -o 1.9.3/#{g.name}_c.so #{g.name}_c.o -L. -L/usr/lib -L. -rdynamic -Wl,-export-dynamic -lruby-1.9.1 -lpthread -lrt -ldl -lcrypt -lm -lc`
 			`rm compiled/#{g.name}_c.o` 
    }
    end
    if !$bootstrapping_amethyst
      require "compiled/#{g.name}.rb" 
    end
    CurrentParser.clear
	end
	def compile(file,out,file2)
    GC::disable
		source=File.new(file).read
		source_hash=Digest::MD5.hexdigest(source)
		if !$bootstrapping_amethyst #at bootstrap we compare if compilation by new and old compiler give same result. 
      if file2!="amethyst" && file2!="traverser"
      #TODO we need ast of parent grammars. 
      #Saving by YAML is to slow so for now we use this hack
        if Dir["compiled/#{file2}.rb"]!=[]
          fil=File.new("compiled/#{file2}.rb").read
          compiled_by=/compiled_by\n.*'([0-9a-f]*)'/.match(fil)[1]
          shash=/source_hash\n.*'([0-9a-f]*)'/.match(fil)[1]
          if compiled_by==$compiled_by && shash==source_hash
            return
          end
        end
      end
 		end
		p=AmethystParser.new
		tree=p.parse(:file,source)
		CurrentParser.clear

		$gr={}
		pre =tree.map{|e| #TODO When not bootstraping we want this be rb file we output
		if e.is_a? Grammar
			$gr[e.name]=e
			"Compiler.add_grammar($gr[#{e.name.inspect}])\n"
		else
		e
		end}.join
    puts pre.inspect
    pre="module Foo\n#{pre}\nend" if $bootstrapping_amethyst
		eval(pre) 

		debug_print tree
    c,init,rb=[],[],[]
    tree.map{|e|
      if e.is_a? Grammar
        rb<<"require 'compiled/#{e.name}.rb'"
      else
        rb<< e
      end
    }
    rb=rb*""
    GC::enable
		hex_digest=""#Digest::MD5.hexdigest(c)
    File.open("compiled/#{file2}.rb","w"){|f| f.puts rb; 
      f.puts "\ndef #{file2}_compiled_by\n'#{$compiled_by}'\nend\ndef #{file2}_source_hash\n'#{source_hash}'\nend\ndef testversion#{file2}(r)\n raise \"invalid version\" if r!=#{file2}_version\nend\ndef #{file2}_version\n'#{hex_digest}'\nend"}
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
