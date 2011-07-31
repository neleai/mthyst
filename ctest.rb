$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
def a2ruby(s)
	par=AmethystParser.new
	t=AmethystTranslator.new
	opt=par.parse(:igrammar,s)
	[AmethystOptimizer2,Analyze_Variables2,Move_Assignments,AmethystOptimizer2].each{|p|
		opt=p.new.parse(:itrans,opt)
	}
	ruby=t.parse(:itrans,opt)
end

if true
o=File.open("ctranslator2.rb","w")
o.puts a2ruby(File.new("amethyst/ctranslator2.ame").read)
o.close
end
require 'ctranslator2.rb'
g=[Grammar[{:name=>"Foo",:rules=>[Rule[{:name=>"foo",:args=>[],:body=>Seq[Apply["bar"],Apply["x"],Set[{:name=>"result",:expr=>Act["42"]}]]}],Rule[{:name=>"a",:args=>[],:body=>Seq[Act[Args["u=",Local["a"]]]]}]]}]]
s=AmethystCTranslator.new.parse(:trans,g)
puts s
File.open("c/foo.c","w"){|f| f.puts s}
