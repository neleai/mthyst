require '../lib/amethyst'
ame='./'+ File.basename(__FILE__)[0..-4]+".ame"
Compiler::compile(ame)
