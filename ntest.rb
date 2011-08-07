$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'compiler'
require 'inliner'
require 'dataflow_ssa'

require 'c/amethyst'
require 'c/parser'
require 'c/optimizer_null'
require 'c/optimizer_and_or'
require 'c/detect_variables2'
require 'c/dead_code_elimination'
require 'c/traverser'
require 'c/translator'
class Array
	def self
		self
	end
end

["amethyst","parser"].each{|f|
puts f
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb")
}
#pp Compiler.grammars["AmethystParser"]
