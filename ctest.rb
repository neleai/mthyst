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
		Dead_Code_Detector,Dead_Code_Deleter,
		AmethystOptimizer2].each{|p|
		opt=p.new.parse(:itrans,opt)
#		puts opt.inspect
	}
	opt
end
def compile_to_c(file)
	opt=a2ruby(File.new("amethyst/#{file}.ame").read)
	c,init,rb=AmethystCTranslator.new.parse(:itrans,opt)
	File.open("c/#{file}_c.c","w"){|f|
    f.puts "#include \"cthyst.h\""
    f.puts c
    f.puts "void Init_#{file}_c(){ #{init} }"
  }
  File.open("c/#{file}.rb","w"){|f| f.puts rb; f.puts "\n require 'c/#{file}_c'"}
	`cd c;gcc -I. -I/usr/lib/ruby/1.8/x86_64-linux -I/usr/lib/ruby/1.8/x86_64-linux -I.   -fPIC -fno-strict-aliasing -g -g $O  -fPIC   -c #{file}_c.c`
	`cd c;gcc -shared -o #{file}_c.so #{file}_c.o -L. -L/usr/lib -L.  -rdynamic -Wl,-export-dynamic -lruby1.8  -lpthread -lrt -ldl -lcrypt -lm   -lc`
end

["amethyst","parser","optimizer_null","optimizer_and_or","detect_variables2","traverser","dead_code_elimination","translator","ctranslator2"].each{|n|
	compile_to_c(n)
}
