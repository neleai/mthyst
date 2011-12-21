require './lib/amethyst'

$profiling=false
$OPT=" -march=core2"
$debug=1
$compile_1_8_7=true
$compile_1_9_3=true

COMPILED.each{|f|
puts f
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)
}
totaltime
r=Rule[{:name=>"foo",:body=>Seq[Act[42],Or[Seq[Apply["foo"],Act[42]],Act[22],Seq[Apply["bar"],Act[21]]],Act[222],Act[333],_Local("_result")]}]
puts Remove_Left_Recursion.new.parse(:root,[r]).inspect
#pp Compiler.grammars["AmethystParser"]
