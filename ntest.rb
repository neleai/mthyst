$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'compiler'
require 'compiled/inliner2'
require 'compiled/dead_code_elimination2'
require 'compiled/dataflow_ssa'
class Array
	def self
		self
	end
end

["amethyst","parser",
"traverser","detect_variables2",
"optimizer_null","optimizer_and_or",
"dead_code_elimination2","inliner2","dataflow_ssa",
"ctranslator2"].each{|f|
puts f
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)
}
#pp Compiler.grammars["AmethystParser"]
