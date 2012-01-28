Amethyst_path=File.expand_path(File.dirname(__FILE__)+"/..")
$: << Amethyst_path
['graph','utils','ast'].each{|r|
	require Amethyst_path+"/lib/#{r}"
}

class AmethystLambda
	def initialize(call,parser,bind)
		@call,@parser,@bind=call,parser,bind
	end
	def call
		@parser.send(@call,@bind)
	end
end

class AmethystCore
	def apply(rule)
		if rule.is_a?(String) || rule.is_a?(Symbol)
			send(rule)
		else
			rule.call
		end
	end
	def self.parse(rule,input)
		self.class.new.parse(rule,input)
	end
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/Ame.so"

class Amethyst < AmethystCore	
	class Settings;
	end;	class <<Settings
		attr_accessor :profiling,:compile_for,:cflags,:debug
	end
end
require Amethyst_path+"/settings.rb"

GC_mark=[]#mark for gc
def gc_mark_var(var)
	"rb_ary_push(rb_const_get(rb_cObject,rb_intern(\"GC_mark\")),#{var});"
end
require 'lib/compiler'
