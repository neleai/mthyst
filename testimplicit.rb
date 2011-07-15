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
	opt=o.parse(:itrans,opt)

puts opt.inspect
	opt=Move_Assignments.new.parse(:itrans,opt)	
puts opt.inspect
	ruby=t.parse(:itrans,opt)
end
f=true
if f
o=File.open("implicit_variables.rb","w")
#o.puts a2ruby(File.new("amethyst/detect_variables.ame").read)
o.puts a2ruby(File.new("amethyst/implicit_variables.ame").read)

o.close
end
require 'implicit_variables.rb'
#t = And[And[Act["aaa"],Act["bbb"],And[Act["ccc"],Or[Or[And[And[[Act['a']]]]]]]]]
t=Rule[{:body=>Seq[Apply["foo"],Apply["foo","bar"]]}]
pp t
res= Add_Implicit_Variables.new.parse(:root,[{"foo"=>"foo"},{},t])
pp res
