require 'lib/amethyst'

COMPILED.each{|f|
puts f
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)
}
totaltime
#pp Compiler.grammars["AmethystParser"]
