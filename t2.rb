$:.unshift 'lib'
require 'amethyst'

p=AmethystParser.new
puts p.parse("igrammar","amethyst Ame {aoe = a  b = b c = c }").inspect


