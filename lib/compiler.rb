$OPT="-O2"
require 'constant_propagation2'
class Gram
	attr_accessor :name,:parent,:rules
	def initialize(grammar)
		@name,@parent=grammar.name,grammar.parent
		@rules={}
		grammar.rules.each{|r| 
			@rules[r.name]=r
		}
	end
	def opt(r)
      debug=false
			[Seq_Or_Optimizer,Move_Assignments2,Seq_Or_Optimizer,
			].each{|o|
	      puts r.inspect if debug
      	r=o.new.parse(:root,r)
			}
		 r=deep_clone(r)
		 [ Dataflow, 
			Dead_Code_Deleter3,Seq_Or_Optimizer
].each{|o|
			r=o.new.parse(:root,r)
			puts r.inspect if debug
		}
		r=propagate_consts(r)
	r=deep_clone(r)
 [ Dataflow, 
			Dead_Code_Deleter3,Seq_Or_Optimizer,
			Communize_Or3,Seq_Or_Optimizer
].each{|o|
			r=o.new.parse(:root,r)
			puts r.inspect if debug
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
	return "AmethystCore" if name=="anything" || name=="seq"
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
	def add_grammar(grammar)
		@grammars[grammar.name]=Gram.new(grammar)

		callg=Oriented_Graph.new
		names=@grammars[grammar.name].rules.map{|name,code| name}
		i=0
		while i<names.size
			calls=DetectCalls.new.parse(:root,[@grammars[grammar.name].getrule(names[i])])
			calls.each{|c,t|
      	if !@grammars[grammar.name].rules[c]
					if r=@grammars[grammar.name].getrule(c)
						@grammars[grammar.name].rules[c]=r
						names<<c
					end
				end
			  callg.add(names[i],c)
			}
			i+=1
		end
		topo= callg.topo_order
		puts callg.inspect
		puts topo.inspect
		topo.each{|name|if @grammars[grammar.name].rules[name]
				@grammars[grammar.name].opt(@grammars[grammar.name].rules[name])
				
if true
				inlined=false
				calls= DetectCalls.new.parse(:root,[@grammars[grammar.name].rules[name]])
				calls.each{|nm,v|
					r=@grammars[grammar.name].getrule(nm)
					if r && topo.index(nm)<topo.index(name) 
						if r.args.size>0   || ["char","space"].include?(r.name)
							@grammars[grammar.name].inline(nm,name) 
							inlined=true
						end
					end
				}
				@grammars[grammar.name].opt(@grammars[grammar.name].rules[name]) if inlined
end

		end}
	end
	def compile(file,out,file2)
		source=File.new(file).read
		tree=AmethystParser.new.parse(:igrammar,source)
		tree=Analyze_Variables2.new.parse(:itrans,tree)
		tree.each{|a|	
			if a.is_a? Grammar
				add_grammar(a)
				a.rules=@grammars[a.name].rules.map{|h,k| k}
			else
			end
		}
		c,init,rb= AmethystCTranslator.new.parse(:itrans,tree)
		File.open("compiled/#{file2}_c.c","w"){|f|
    f.puts "#include \"cthyst.h\""
    f.puts c
    f.puts "void Init_#{file2}_c(){ #{init} }"
    }
    File.open("compiled/#{file2}.rb","w"){|f| f.puts rb; f.puts "\n require 'compiled/#{file2}_c'"}
	  withtime("c"){
    `cd compiled;gcc -I. -I/usr/lib/ruby/1.8/x86_64-linux -I/usr/lib/ruby/1.8/x86_64-linux -I.   -fPIC -fno-strict-aliasing -g -g #$OPT  -fPIC   -c #{file2}_c.c`
    `cd compiled;gcc -shared -o #{file2}_c.so #{file2}_c.o -L. -L/usr/lib -L.  -rdynamic -Wl,-export-dynamic -lruby1.8  -lpthread -lrt -ldl -lcrypt -lm   -lc`
  	}

	end
end	
Compiler::init
["amethyst","traverser","detect_variables2","ctranslator2","parser","optimizer_null","optimizer_and_or","dead_code_elimination2","dataflow_ssa","inliner2"
].each{|opt|
require "compiled/#{opt}"
}


def translate(s)
  par=AmethystParser.new
  opt=par.parse(:igrammar,s)
  [Seq_Or_Optimizer,Analyze_Variables2,Move_Assignments2,
    Seq_Or_Optimizer,Seq_Or_Optimizer].each{|p|
		puts opt.inspect
    opt=p.new.parse(:itrans,opt)
  }

  opt
end

def a2ruby(s)
	AmethystTranslator.new.parse(:itrans,translate(s))
end
def compile_to_c(file)
  opt=translate(File.new("amethyst/#{file}.ame").read)
  c,init,rb=AmethystCTranslator.new.parse(:itrans,opt)
  File.open("compiled/#{file}_c.c","w"){|f|
    f.puts "#include \"cthyst.h\""
    f.puts c
    f.puts "void Init_#{file}_c(){ #{init} }"
  }
  File.open("compiled/#{file}.rb","w"){|f| f.puts rb; f.puts "\n require 'compiled/#{file}_c'"}
	withtime("c"){
  	`cd compiled;gcc -I. -I/usr/lib/ruby/1.8/x86_64-linux -I/usr/lib/ruby/1.8/x86_64-linux -I.   -fPIC -fno-strict-aliasing -g -g   -fPIC #$OPT  -c #{file}_c.c`
  	`cd compiled;gcc -shared -o #{file}_c.so #{file}_c.o -L. -L/usr/lib -L.  -rdynamic -Wl,-export-dynamic -lruby1.8  -lpthread -lrt -ldl -lcrypt -lm   -lc`
	}
end
