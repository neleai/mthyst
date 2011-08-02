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
	$opt=opt
	ruby=t.parse(:itrans,opt)
end

if true
o=File.open("ctranslator2.rb","w")
o.puts a2ruby(File.new("amethyst/ctranslator2.ame").read)
o.close
end
require 'ctranslator2.rb'
g=[Grammar[{:name=>"Foo",:parent=>"Amethyst",:rules=>[Rule[{:name=>"foo",:args=>[],:body=>Seq[Lookahead[Apply["bar"]],Pass[Apply["a"],Apply["b"]],Apply["x"],Set[{:name=>Local["result"],:expr=>Act["42"]}]]}],Rule[{:name=>"a",:args=>[],:body=>Seq[Act[Args["u=",Local["a"]]]]}], Rule[{:name=>"t",:args=>[],:body=>Seq[Or[Apply["spaces"],Apply["seq",Args["'x'"]]]]}] ]}]]
["amethyst","optimizer_and_or","traverser"].each{|n|
puts AmethystCTranslator.new.parse(:trans,g)
a2ruby(File.new("amethyst/#{n}.ame").read)
	puts $opt.inspect
	s=AmethystCTranslator.new.parse(:trans,$opt)
	puts s

	File.open("c/#{n}.c","w"){|f| f.puts s}
}
