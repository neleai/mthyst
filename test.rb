$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
def a2ruby(s)
	p=AmethystParser.new
	o=AmethystOptimizer2.new
	t=AmethystTranslator.new
	d=Detect_Variables.new
	a=Analyze_Variables.new
	par=p.parse(:igrammar,s)
	opt=o.parse(:itrans,par)
	opt=d.parse(:itrans,opt)
	opt=a.parse(:itrans,opt)
	ruby=t.parse(:itrans,opt)
end
o=File.open("inliner.rb","w")
#o.puts a2ruby(File.new("amethyst/detect_variables.ame").read)
#o.puts a2ruby(File.new("amethyst/dead_code_elimination.ame").read)
o.puts a2ruby(File.new("amethyst/traverser.ame").read)

o.close
require 'inliner.rb'
p=AmethystParser.new

#g=p.parse(:igrammar,File.new("translator.ame").read)
pp g.inspect
#g=p.parse(:igrammar,"amethyst A { a= (a b | c):x }")
o=AmethystOptimizer2.new
i=Detect_Variables.new
par= i.parse(:itrans,g)
pp par
par=Analyze_Variables.new.parse(:itrans,par)
par=o.parse(:itrans,par)
j=Move_Assignments.new
par= j.parse(:itrans,par)
pp par
#par=Communize_Or.new.parse(:itrans,par)
#par=Dead_Code_Detector.new.parse(:itrans,par)
#par=Dead_Code_Deleter.new.parse(:itrans,par)
#par=Inliner.new.parse(:inlineit,["_dot_",par])
#par=Inliner.new.parse(:inlineit,["char",par])
#par=Inliner.new.parse(:inlineit,["regch",par])
#par=Inliner.new.parse(:inlineit,["space",par])
#par=Inliner.new.parse(:inlineit,["spaces",par])
#par = g
t=AmethystTranslator.new
ruby=t.parse(:itrans,par)
puts ruby
