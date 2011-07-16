$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
def a2ruby(s)
	p=AmethystParser.new
	o=AmethystOptimizer2.new
	t=AmethystTranslator.new
	a=Analyze_Variables2.new
	par=p.parse(:igrammar,s)
	opt=o.parse(:itrans,par)
#	opt=d.parse(:itrans,opt)
	opt=a.parse(:itrans,opt)
	
	ruby=t.parse(:itrans,opt)
end
def a2ruby(s)
	par=AmethystParser.new.parse(:igrammar,s)
	par=AmethystOptimizer2.new.parse(:itrans,par)

	par=Analyze_Variables2.new.parse(:itrans,par)
	par= Move_Assignments.new.parse(:itrans,par)
	par=Dead_Code_Detector.new.parse(:itrans,par)
	par=Dead_Code_Deleter.new.parse(:itrans,par)
	par=AmethystOptimizer2.new.parse(:itrans,par)
	ruby=AmethystTranslator.new.parse(:itrans,par)
	ruby
end

o=File.open("inliner.rb","w")
p=AmethystParser.new
r=p.parse(:igrammar,"amethyst Foo{ a = ~b a:vars @Result } foo bla")
puts Analyze_Variables2.new.parse(:itrans,r).inspect
#o.puts a2ruby(File.new("amethyst/detect_variables.ame").read)
o.puts a2ruby(File.new("amethyst/traverser.ame").read)
o.puts a2ruby(File.new("amethyst/dead_code_elimination2.ame").read)
o.puts a2ruby(File.new("amethyst/detect_variables2.ame").read)
o.puts a2ruby(File.new("amethyst/inliner2.ame").read)

o.close
require 'inliner.rb'
t = And[And[Act["aaa"],Act["bbb"],And[Act["ccc"],Or[Or[And[And[[Act['a']]]]]]]]]
pp t
res= AmethystTranslator.new.parse(:itrans,t)
pp res
