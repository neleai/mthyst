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
      puts r.inspect if debug
      r=Seq_Or_Optimizer.new.parse(:root,r)
      puts r.inspect if debug
      r=Move_Assignments2.new.parse(:root,r)
      puts r.inspect if debug
      r=Seq_Or_Optimizer.new.parse(:root,r)
      puts r.inspect if debug
      r=Communize_Or2.new.parse(:root,r)
      puts r.inspect if debug
      r=Seq_Or_Optimizer.new.parse(:root,r)
      puts r.inspect if debug
      r=Dead_Code_Detector2.new.parse(:root,r)
      puts r.inspect if debug
      r=Dead_Code_Deleter2.new.parse(:root,r)
      puts r.inspect if debug
      r=Seq_Or_Optimizer.new.parse(:root,r)
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
	def add_grammar(grammar,outs)
		@grammars[grammar.name]=Gram.new(grammar)
		outs.puts "class #{grammar.name}"+ (grammar.parent ? " < #{grammar.parent}" : "")

		callg=Oriented_Graph.new
		@grammars[grammar.name].rules.each{|name,code|
			calls= DetectCalls.new.parse(:root,[@grammars[grammar.name].rules[name]])
			calls.each{|c,t|callg.add(name,c)}
		}
		topo= callg.topo_order
		puts callg.inspect
		puts topo.inspect
		topo.each{|name|if @grammars[grammar.name].rules[name]
#			puts @grammars[grammar.name].rules[name].inspect
				@grammars[grammar.name].opt(@grammars[grammar.name].rules[name])
#				puts @grammars[grammar.name].rules[name].inspect
				calls= DetectCalls.new.parse(:root,[@grammars[grammar.name].rules[name]])
				calls.each{|nm,v|
					r=@grammars[grammar.name].getrule(nm)
					@grammars[grammar.name].inline(nm,name) if r && r.args.size>0 && !(/arg/=~r.name)
				}
				@grammars[grammar.name].inline("char" ,name)
				@grammars[grammar.name].inline("space" ,name)

#				puts @grammars[grammar.name].rules[name].inspect
				@grammars[grammar.name].opt(@grammars[grammar.name].rules[name])
#				puts @grammars[grammar.name].rules[name].inspect
#

#		puts AmethystTranslator.new.parse(:itrans,[@grammars[grammar.name].rules[name]]).inspect

			outs.puts AmethystTranslator.new.parse(:itrans,[@grammars[grammar.name].rules[name]])
		end}
		outs.puts "end"
	end
	def compile(file,out)
		outs=File.new(out,"w")
		source=File.new(file).read
		tree=AmethystParser.new.parse(:igrammar,source)
		tree=Analyze_Variables2.new.parse(:itrans,tree)
		tree.each{|a|	
			if a.is_a? Grammar
				add_grammar(a,outs)
			else
				outs.print a
			end
		}
	end
end	
Compiler::init

