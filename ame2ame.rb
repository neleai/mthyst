$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
def a2ruby(s)
	p=AmethystParser.new
	o=AmethystOptimizer2.new
	c=Communize_Or.new
	t=AmethystTranslator.new
	i=Inliner.new
	par=p.parse(:igrammar,s)
#	par=o.parse(:itrans,par)
#	inl=i.parse(:inlineit,["spaces",inl])
#	inl=i.parse(:inlineit,["space",inl])
#	inl=i.parse(:inlineit,["char",inl])
#	inl=i.parse(:inlineit,["regch",inl])
#pp par
#pp inl
	par=Detect_Variables.new.parse(:itrans,par)
	par=Analyze_Variables.new.parse(:itrans,par)
#pp inl

par= Move_Assignments.new.parse(:itrans,par)
par=Dead_Code_Detector.new.parse(:itrans,par)
par=Dead_Code_Deleter.new.parse(:itrans,par)

#	opt=c.parse(:itrans,inl)
	par=o.parse(:itrans,par)
	ruby=t.parse(:itrans,par)
	ruby
end
o=File.open("bootstrap.rb","w")
["amethyst.ame","parser.ame","optimizer_null.ame","optimizer_and_or.ame","detect_variables.ame","dead_code_elimination.ame","inliner.ame","translator.ame"].each{|file|
puts file
o.puts a2ruby(File.new("amethyst/#{file}").read)
}
o.close
`cp bootstrap.rb lib/bootstrap.rb`

