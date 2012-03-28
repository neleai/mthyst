require './lib/amethyst'
#Amethyst::Settings.debug=2
Compiler::compile("amethyst/position.ame")
puts Position_value_numbering.value([Seq[Or[Apply['anything'],Apply['anything']],Apply['anythig'],Apply['anything']]],[0]).inspect
