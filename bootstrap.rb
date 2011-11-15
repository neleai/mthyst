require './lib/amethyst'

$profiling=false
$OPT="-O1 -march=core2"
$debug=1

COMPILED.each{|f|
puts f
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)
}
totaltime
#pp Compiler.grammars["AmethystParser"]
