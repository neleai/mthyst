require '../lib/amethyst'
#Amethyst::Settings.debug=2
makeclasses(AmethystAST,
  :RegOr,
  :RegSeq,
  :RegModifier,
  :RegChars 
)
ame='./'+File.basename(__FILE__)[0..-4]+".ame"
#Amethyst::file("../amethyst/amethyst.ame")
Amethyst::file('regexp.ame')
Amethyst::file(ame)

r=Regexp2Amethyst.root("abc|de(f|g)*[hi]+")

puts r.inspect
puts Trigrams.root([r]).inspect
