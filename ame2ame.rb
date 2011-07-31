$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'compiled/amethyst'
require 'compiled/parser'
require 'compiled/optimizer_null'
require 'compiled/optimizer_and_or'

def a2ruby(s)
	par=AmethystParser.new.parse(:igrammar,s)
	par=AmethystOptimizer2.new.parse(:itrans,par)

#	par=Detect_Variables.new.parse(:itrans,par)
	#puts par.inspect
	par=Analyze_Variables2.new.parse(:itrans,par)
	#puts par.inspect

#pp inl
#puts par.inspect
par= Move_Assignments.new.parse(:itrans,par)
#puts par.inspect
par=Dead_Code_Detector.new.parse(:itrans,par)
#puts par.inspect
par=Dead_Code_Deleter.new.parse(:itrans,par)
#puts par.inspect
#par= Move_Assignments.new.parse(:itrans,par)
#	par=Dead_Code_Detector.new.parse(:itrans,par)
#	par=Dead_Code_Deleter.new.parse(:itrans,par)
#	opt=c.parse(:itrans,inl)
	par=AmethystOptimizer2.new.parse(:itrans,par)
#puts par.inspect
	ruby=AmethystTranslator.new.parse(:itrans,par)
	ruby
end
o=File.open("bootstrap.rb","w")
["amethyst.ame","parser.ame","optimizer_null.ame","optimizer_and_or.ame","traverser.ame","detect_variables2.ame","dead_code_elimination.ame","translator.ame"].each{|file|
puts file
o.puts a2ruby(File.new("amethyst/#{file}").read)
}
o.close
`cp bootstrap.rb lib/bootstrap.rb`

