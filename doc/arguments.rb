require '../lib/amethyst'
#Amethyst::Settings.debug=2
Compiler::compile("arguments.ame")
puts Arguments_test.rule2([],2,2).inspect
puts Arguments_test.rule3([],2).inspect
puts Arguments_test.rule3([],2,4).inspect
puts Arguments_test.rule4([],2,3,4).inspect
puts Arguments_test.rule5([],[2,3],4).inspect
