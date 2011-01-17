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
#t = Seq[Seq[Act["aaa"],Act["bbb"],Seq[Act["ccc"],Or[Or[Seq[Seq[[Act['a']]]]]]]]]
#t= [Grammar[{:rules=>Rule[{:name=>"ada",:body=>Seq[Act["aaa"],Act[{:ary=>["bbb"],:pred=>true}],Or[Act["a"],Act[{:ary=>["bbb"],:pred=>true}]],Many[Act[{:ary=>["bbb"],:pred=>true}]] ]  }]}]]
t=[Grammar[{:name=>"Test", :rules=>[Rule[{:name=>"ada",:body=>Seq[Apply['ee'],Char["a"],Or[Seq[Char["b"],Act["puts 42"]],Seq[Char["c"],Act["puts 43"]]]]  }],
Rule[{:name=>"ee",:body=>Seq[Char["f"],Act["puts 23"],Many[Or[Char['s'],Stop[]]]]}]]}],

]
t= AmethystRBTranslator.new.parse(:root,t)
File.open("cthyst/test.rb","w"){|f|
	f.puts t.rbcode
}
res= AmethystCTranslator.new.parse(:trans,[t])
File.open("cthyst/test.c","w"){|f|
f.puts res
}
