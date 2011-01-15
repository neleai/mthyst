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
#	opt=d.parse(:itrans,opt)
	opt=a.parse(:itrans,opt)
	
	ruby=t.parse(:itrans,opt)
end
o=File.open("ctranslator.rb","w")
o.puts a2ruby(File.new("amethyst/detect_variables.ame").read)
o.puts a2ruby(File.new("amethyst/traverser.ame").read)
o.puts a2ruby(File.new("amethyst/dead_code_elimination2.ame").read)
o.puts a2ruby(File.new("amethyst/ctranslator.ame").read)

o.close
require 'ctranslator.rb'
#t = And[And[Act["aaa"],Act["bbb"],And[Act["ccc"],Or[Or[And[And[[Act['a']]]]]]]]]
t= [Grammar[{:rules=>Rule[{:name=>"ada",:body=>And[Act["aaa"],Act[{:ary=>["bbb"],:pred=>true}],Or[Act["a"],Act[{:ary=>["bbb"],:pred=>true}]],Many[Act[{:ary=>["bbb"],:pred=>true}]] ]  }]}]]
t= AmethystRBTranslator.new.parse(:root,t)
puts t.rbcode
res= AmethystCTranslator.new.parse(:trans,[t])
puts res.inspect
puts res
