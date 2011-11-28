require './lib/amethyst'

$profiling=false
$OPT="-O1 -march=core2"
$debug=1

COMPILED.each{|f|
puts f
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)
}
totaltime
r=Rule[{:name=>"foo",:body=>Or[Seq[Apply["foo"],Act[42]],Act[22],Seq[Apply["bar"],Act[21]]]}]
puts Remove_Left_Recursion.new.parse(:root,[r]).inspect
#pp Compiler.grammars["AmethystParser"]
