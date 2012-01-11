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
	class Settings
		def self.profiling=(a)
			@profiling=a
		end
		def self.profiling
			@profiling
		end
		def self.compile_for=(a)
			@compile_for=a
		end
		def self.compile_for
			@compile_for
		end
		def self.cflags=(a)
			@cflags=a
		end
		def self.cflags
			@cflags
		end
		def self.debug=(a)
			@debug=a
		end
		def self.debug
			@debug
		end
	end
end
Amethyst::Settings.profiling=false
Amethyst::Settings.compile_for=["1_9_3"]
Amethyst::Settings.cflags="-march=core2"
Amethyst::Settings.debug=1
require 'lib/compiler'
