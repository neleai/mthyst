$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'compiler'
require 'c/amethyst'
require 'c/parser'
require 'c/optimizer_null'
require 'c/optimizer_and_or'
require 'c/detect_variables2'
require 'c/dead_code_elimination'
require 'c/traverser'
require 'c/translator'
require 'c/ctranslator2'

["amethyst","parser","optimizer_null","optimizer_and_or","detect_variables2","traverser","dead_code_elimination","translator","ctranslator2"].each{|n|
	compile_to_c(n)
}
