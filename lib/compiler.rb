class Gram
	def initialize(grammar)
		@name,@parent=grammar.name,grammar.parent
		@rules={}
		grammar.rules.each{|r| 
			r=And_Or_Optimizer.new.parse(:opt,r)
			@rules[r.name]=r
		}
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
	end
	def compile(file)
		source=File.new(file).read
		tree=AmethystParser.new.parse(:igrammar,source)
		tree.each{|a|	
			if a.is_a? Grammar
				add_grammar(a)
			else
				print a
			end
		}
	end
end	
Compiler::init

