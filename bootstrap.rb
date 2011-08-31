$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'compiler'
require 'compiled/inliner2'
require 'compiled/dead_code_elimination2'
require 'compiled/dataflow_ssa'

COMPILED.each{|f|
puts f
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)
}
totaltime
save_grammars
#pp Compiler.grammars["AmethystParser"]
