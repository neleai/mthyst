require 'runtime'
GC_mark=[]#mark for gc
class Amethyst < AmethystCore	
	def self::load(g)
    evalgrammar(grammar(filename))	
	end
	def self::grammar(g)
	end
	def self::evalgrammar(g)
	end
end
