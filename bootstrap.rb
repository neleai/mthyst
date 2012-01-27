require './lib/amethyst'
#Amethyst::Settings.compile_for=["1_8_7","1_9_3"]
#Amethyst::Settings.debug=2
#Amethyst::Settings.profiling=true
#Amethyst::Settings.cflags="-march=core2 -O3" #slower as gcc is limiting factor

COMPILED.each{|f|
puts f
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)
}
totaltime
r=Rule[{:name=>"foo",:body=>Seq[Act[42],Or[Seq[Apply["foo"],Act[42]],Act[22],Seq[Apply["bar"],Act[21]]],Act[222],Act[333],_Local("_result")]}]
puts Remove_Left_Recursion.new.parse(:root,[r]).inspect
#pp Compiler.grammars["AmethystParser"]
