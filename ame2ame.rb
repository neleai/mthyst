$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
#require 'compiled/amethyst'
#require 'compiled/parser'
def a2ruby(s)
	par=AmethystParser.new.parse(:igrammar,s)
	par=AmethystOptimizer2.new.parse(:itrans,par)

#	par=Detect_Variables.new.parse(:itrans,par)
	puts par.inspect
	par=Analyze_Variables2.new.parse(:itrans,par)
	puts par.inspect

#pp inl
puts par.inspect
par= Move_Assignments.new.parse(:itrans,par)
puts par.inspect
par=Dead_Code_Detector.new.parse(:itrans,par)
puts par.inspect
par=Dead_Code_Deleter.new.parse(:itrans,par)
puts par.inspect
inl = par
#	inl=i.parse(:inlineit,["spaces",inl])
#	inl=i.parse(:inlineit,["space",inl])
#	inl=i.parse(:inlineit,["char",inl])
#	inl=i.parse(:inlineit,["regch",inl])
if inl!=FAIL
	par =inl
#par= Move_Assignments.new.parse(:itrans,par)
#	par=Dead_Code_Detector.new.parse(:itrans,par)
#	par=Dead_Code_Deleter.new.parse(:itrans,par)
end
#	opt=c.parse(:itrans,inl)
	par=AmethystOptimizer2.new.parse(:itrans,par)
puts par.inspect
	ruby=AmethystTranslator.new.parse(:itrans,par)
	ruby
end
o=File.open("bootstrap.rb","w")
["amethyst.ame","parser.ame","optimizer_null.ame","optimizer_and_or.ame","traverser.ame","detect_variables2.ame","dead_code_elimination.ame","inliner.ame","translator.ame"].each{|file|
puts file
o.puts a2ruby(File.new("amethyst/#{file}").read)
}
o.close
`cp bootstrap.rb lib/bootstrap.rb`

