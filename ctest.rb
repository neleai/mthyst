$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'compiler'
["amethyst","parser","optimizer_null","optimizer_and_or","detect_variables2","traverser","dead_code_elimination","translator","ctranslator2"].each{|n|
	compile_to_c(n)
}
