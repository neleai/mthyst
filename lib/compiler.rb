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
			pipeline=[Seq_Or_Optimizer,Move_Assignments2,Seq_Or_Optimizer,
			Communize_Or3,Seq_Or_Optimizer,
			Dead_Code_Detector2,Dead_Code_Deleter2,Seq_Or_Optimizer]
			pipeline.each{|o|
	      puts r.inspect if debug
      	r=o.new.parse(:root,r)
			}
		puts r.inspect
		puts r=CloneLocals.new.parse(:root,r)
		puts r=Dataflow.new.parse(:root,r)
		puts r.inspect
    @rules[r.name]=r 
	end
	def getrule(from)
		fromrule,nm=nil,self.name
    begin
     	return nil if nm=="AmethystCore"
      fromrule= Compiler.grammars[nm].rules[from]
      nm=Compiler.grammars[nm].parent
    end until fromrule
		fromrule
	end
	def inline(from,to)
		puts from
		@rules[to]=Inliner2.new.parse(:root,[getrule(from), @rules[to]])
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
		@grammars[grammar.name]=Gram.new(grammar)

		callg=Oriented_Graph.new
		@grammars[grammar.name].rules.each{|name,code|
			calls= DetectCalls.new.parse(:root,[@grammars[grammar.name].rules[name]])
			calls.each{|c,t|callg.add(name,c)}
		}
		topo= callg.topo_order
		puts callg.inspect
		puts topo.inspect
		topo.each{|name|if @grammars[grammar.name].rules[name]
				@grammars[grammar.name].opt(@grammars[grammar.name].rules[name])
if true
				calls= DetectCalls.new.parse(:root,[@grammars[grammar.name].rules[name]])
				calls.each{|nm,v|
					r=@grammars[grammar.name].getrule(nm)
					@grammars[grammar.name].inline(nm,name) if r && r.args.size>0 && !(/arg/=~r.name)
					@grammars[grammar.name].inline(nm,name) if r && ["char","space"].include?(r.name)
				}
end
				@grammars[grammar.name].opt(@grammars[grammar.name].rules[name])

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
    `cd compiled;gcc -I. -I/usr/lib/ruby/1.8/x86_64-linux -I/usr/lib/ruby/1.8/x86_64-linux -I.   -fPIC -fno-strict-aliasing -g -g $O  -fPIC   -c #{file2}_c.c`
    `cd compiled;gcc -shared -o #{file2}_c.so #{file2}_c.o -L. -L/usr/lib -L.  -rdynamic -Wl,-export-dynamic -lruby1.8  -lpthread -lrt -ldl -lcrypt -lm   -lc`
  	}

	end
end	
Compiler::init
if true
require 'compiled/amethyst'
require 'compiled/parser'
else
require 'c/amethyst'
require 'c/parser'
end
["optimizer_null","optimizer_and_or","detect_variables2","dead_code_elimination","traverser","ctranslator2"].each{|opt|
	require "c/#{opt}"
}

def translate(s)
  par=AmethystParser.new
  opt=par.parse(:igrammar,s)
  [AmethystOptimizer2,Analyze_Variables2,Move_Assignments,
    Dead_Code_Detector,Dead_Code_Deleter,
    AmethystOptimizer2].each{|p|
    opt=p.new.parse(:itrans,opt)
  }
  opt
end
def compile_to_c(file)
  opt=translate(File.new("amethyst/#{file}.ame").read)
  c,init,rb=AmethystCTranslator.new.parse(:itrans,opt)
  File.open("c/#{file}_c.c","w"){|f|
    f.puts "#include \"cthyst.h\""
    f.puts c
    f.puts "void Init_#{file}_c(){ #{init} }"
  }
  File.open("c/#{file}.rb","w"){|f| f.puts rb; f.puts "\n require 'c/#{file}_c'"}
	withtime("c"){
  	`cd c;gcc -I. -I/usr/lib/ruby/1.8/x86_64-linux -I/usr/lib/ruby/1.8/x86_64-linux -I.   -fPIC -fno-strict-aliasing -g -g $O  -fPIC   -c #{file}_c.c`
  	`cd c;gcc -shared -o #{file}_c.so #{file}_c.o -L. -L/usr/lib -L.  -rdynamic -Wl,-export-dynamic -lruby1.8  -lpthread -lrt -ldl -lcrypt -lm   -lc`
	}
end
