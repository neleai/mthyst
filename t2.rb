$:.unshift 'lib'
require 'pp'
require 'amethyst'
def a2ruby(s)
	p=AmethystParser.new
	o=AmethystOptimizer2.new
	t=AmethystTranslator.new
	par=p.parse(:igrammar,s)
pp par
	opt=o.parse(:itrans,[par])
pp opt
	ruby=t.parse(:itrans,[opt])
end
code="amethyst Ame {aoe = a  b = b(e) c = c:x }"
puts a2ruby(code)
