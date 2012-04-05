require '../lib/amethyst'
#Amethyst::Settings.debug=2
makeclasses(AmethystAST,
  :RegOr,
  :RegSeq,
  :RegModifier,
  :RegChars 
)
ame= File.basename(__FILE__)[0..-4]+".ame"
#Compiler::compile("../amethyst/amethyst.ame")
Compiler::compile(ame)

puts Regexp2Amethyst.root("abc|de(fg)*[hi]+").inspect
