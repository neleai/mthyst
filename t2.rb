$:.unshift 'lib'
require 'amethyst'

p=AmethystParser.new
par=p.parse("igrammar","amethyst Ame {aoe = a  b = b(e) c = c }")
puts par.inspect
o=AmethystOptimizer.new
opt=o.parse("trans",par)
puts opt.inspect
