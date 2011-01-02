class Gram
	def initialize(grammar)
		@name,@parent=grammar.name,grammar.parent
		@rules={}
		grammar.rules.each{|r| 
			r=And_Or_Optimizer.new.parse(:root,r)
			r=Move_Assignments2.new.parse(:root,r)
			r=And_Or_Optimizer.new.parse(:root,r)
			r=Communize_Or2.new.parse(:root,r)
			r=And_Or_Optimizer.new.parse(:root,r)
			r=Dead_Code_Detector2.new.parse(:root,r)
#			r=Dead_Code_Deleter2.new.parse(:root,r)

#			r=.new.parse(:root,r)
			@rules[r.name]=r
		}
	end
	def inline(from,to)
		fromrule,nm=@name,self
		begin
			raise "cant find #{from} to inline" if nm=="AmethystCore"
			fromrule= Compiler.grammars[nm].rules[from]
			nm=Compiler.grammars[nm].parent
		end until fromrule
		@rules[to]=Inliner2.new.parse(:opt,@rules[to])
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

