$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'ast'
require 'compiler'

COMPILED.each{|f|
puts f
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)
}
totaltime
#pp Compiler.grammars["AmethystParser"]
