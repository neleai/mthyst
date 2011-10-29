Amethyst_path=File.expand_path(File.dirname(__FILE__)+"/..")
$: << Amethyst_path
['graph','utils','ast','runtime'].each{|r|
	require Amethyst_path+"/lib/#{r}"
}
GC_mark=[]#mark for gc
def gc_mark_var(var)
	"rb_ary_push(rb_const_get(rb_cObject,rb_intern(\"GC_mark\")),#{var});"
end
class Amethyst < AmethystCore	
	def self::load(g)
    evalgrammar(grammar(filename))	
	end
	def self::grammar(g)
	end
	def self::evalgrammar(g)
	end
end
require 'lib/compiler'
