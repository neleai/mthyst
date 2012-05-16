require '../lib/amethyst'
#Amethyst::Settings.debug=2
ame='./'+ File.basename(__FILE__)[0..-4]+".ame"
Compiler::compile(ame)
