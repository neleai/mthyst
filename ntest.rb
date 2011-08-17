$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'compiler'
require 'c/inliner2'
require 'c/dead_code_elimination2'
require 'c/dataflow_ssa'
class Array
	def self
		self
	end
end

["amethyst","parser","traverser"].each{|f|
puts f
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)
}
#pp Compiler.grammars["AmethystParser"]
