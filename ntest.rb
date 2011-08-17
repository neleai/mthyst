$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'compiler'
require 'c/inliner2'
require 'compiled/dead_code_elimination2'
require 'compiled/dataflow_ssa'
class Array
	def self
		self
	end
end

["amethyst","parser",
"traverser","detect_variables2",
"dead_code_elimination2",
"ctranslator2","dataflow_ssa"].each{|f|
puts f
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)
}
#pp Compiler.grammars["AmethystParser"]
