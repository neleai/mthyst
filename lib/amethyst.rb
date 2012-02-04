Amethyst_path=File.expand_path(File.dirname(__FILE__)+"/..")
$: << Amethyst_path
['graph','utils','flatarray','ast'].each{|r|
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

require 'lib/compiler'
