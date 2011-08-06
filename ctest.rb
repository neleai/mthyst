$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'c/amethyst'
require 'c/parser'
require 'c/optimizer_null'
require 'c/optimizer_and_or'
require 'c/detect_variables2'
require 'c/dead_code_elimination'
require 'c/traverser'
require 'c/translator'
require 'c/ctranslator2'
def a2ruby(s)
	par=AmethystParser.new
	t=AmethystTranslator.new
	opt=par.parse(:igrammar,s)
	[AmethystOptimizer2,Analyze_Variables2,Move_Assignments,
#		Dead_Code_Detector,Dead_Code_Deleter,
		AmethystOptimizer2].each{|p|
		opt=p.new.parse(:itrans,opt)
		puts opt.inspect
	}
	$opt=opt
	ruby=t.parse(:itrans,opt)
end

if false
o=File.open("ctranslator2.rb","w")
o.puts a2ruby(File.new("amethyst/ctranslator2.ame").read)
o.close
end
#require 'ctranslator2.rb'
g=[Grammar[{:name=>"Foo",:parent=>"Amethyst",:rules=>[Rule[{:name=>"foo",:args=>[],:body=>Seq[Lookahead[Apply["bar"]],Pass[Apply["a"],Apply["b"]],Apply["x"],Set[{:name=>Local["result"],:expr=>Act["42"]}]]}],Rule[{:name=>"a",:args=>[],:body=>Seq[Act[Args["u=",Local["a"]]]]}], Rule[{:name=>"t",:args=>[],:body=>Seq[Or[Apply["spaces"],Apply["seq",Args["'x'"]]]]}] ]}]]
["amethyst","parser","optimizer_null","optimizer_and_or","detect_variables2","traverser","dead_code_elimination","translator","ctranslator2"].each{|n|
puts AmethystCTranslator.new.parse(:itrans,g)
a2ruby(File.new("amethyst/#{n}.ame").read)
	puts $opt.inspect
	c,init,rb=AmethystCTranslator.new.parse(:itrans,$opt)
	puts c
	puts init
	puts rb.inspect
	File.open("c/#{n}_c.c","w"){|f| 
		f.puts "#include \"cthyst.h\""
		f.puts c
		f.puts "void Init_#{n}_c(){ #{init} }"
	}
	File.open("c/#{n}.rb","w"){|f| f.puts rb; f.puts "\n require 'c/#{n}_c'"}

}
`cd c;./comp`
