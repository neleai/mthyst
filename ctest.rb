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
	$opt=opt
	ruby=t.parse(:itrans,opt)
end


o=File.open("ctranslator.rb","w")
o.puts a2ruby(File.new("amethyst/detect_variables.ame").read)
o.puts a2ruby(File.new("amethyst/traverser.ame").read)
o.puts a2ruby(File.new("amethyst/detect_variables2.ame").read)
o.puts a2ruby(File.new("amethyst/dead_code_elimination2.ame").read)
o.puts a2ruby(File.new("amethyst/ctranslator.ame").read)

o.close
#puts $opt.inspect
require 'ctranslator.rb'
#t = Seq[Seq[Act["aaa"],Act["bbb"],Seq[Act["ccc"],Or[Or[Seq[Seq[[Act['a']]]]]]]]]
#t= [Grammar[{:rules=>Rule[{:name=>"ada",:body=>Seq[Act["aaa"],Act[{:ary=>["bbb"],:pred=>true}],Or[Act["a"],Act[{:ary=>["bbb"],:pred=>true}]],Many[Act[{:ary=>["bbb"],:pred=>true}]] ]  }]}]]
#t=[Grammar[{:name=>"Test", :rules=>[Rule[{:name=>"ada",:args=>[],:locals=>[],:body=>Seq[Apply['ee',Act["44"]],Char["a"],Or[Seq[Char["b"],Act["puts 42"]],Seq[Char["c"],Act["puts 43"]]]]  }],
#Rule[{:name=>"ee",:args=>["a"],:locals=>["a","b"],:body=>Seq[Set[{ :name=>Local[0],:expr=>Act["4"] }],Char["f"],Act[Args["puts ",Local[0]]],Many[Or[Char['s'],Stop[]]]]}]]
#}]]

par= AmethystParser.new.parse(:igrammar, File.new("amethyst/amethyst.ame").read)
	o=AmethystOptimizer2.new
	t=AmethystTranslator.new
	a=Analyze_Variables2.new
	opt=o.parse(:itrans,par)
	opt[0].rules=opt[0].rules[18,1]
#	opt[0].rules[0].body=opt[0].rules[0].body[0]
pp opt
	opt[0].rules=opt[0].rules.map{|r| a.parse(:root,r)}

#	opt[0].rules[0].body=opt[0].rules[0].body[4][0].expr
t=opt
pp t
t= AmethystRBTranslator.new.parse(:root,t)
File.open("cthyst/test.rb","w"){|f|
puts t.rbcode
	f.puts t.rbcode
}
res= AmethystCTranslator.new.parse(:trans,[t])
File.open("cthyst/test.c","w"){|f|
puts res
f.puts res
}
