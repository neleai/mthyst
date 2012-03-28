amethyst_path=File.expand_path(File.dirname(__FILE__)+"/..")
require amethyst_path+"/settings.rb"
$: << Amethyst_path
['graph','utils','flatarray','ast'].each{|r|
	require Amethyst_path+"/lib/#{r}"
}



def ame_lambda(cls,bind)#represented as annonymous grammar
  c=cls.new  #TODO anonymous class to construct ordinary lambda.
  c.parse(:init,[bind])
  c
end

class AmethystLambda
	def initialize(call,parser,bind)
		@call,@parser,@bind=call,parser,bind
	end
	def call(*args)
		@parser.send(@call,@bind,args)
	end
end

class AmethystCore
	def apply(rule,*args)
		if rule.is_a?(String) || rule.is_a?(Symbol)
			send(rule.to_s,*args)
		elsif rule.is_a?(Amethyst)
      #TODO setsrc initialization
      rule.src=src;rule.pos=pos;
      r=rule.expr
      self.pos=rule.pos
      r
    else
			rule.call(*args)
		end
	end
	def self.parse(rule,input)
		self.new.parse(rule,input)
	end
  
  def match(t);    parse(:expr,t);  end
  alias_method :=~,:match

  def string_from_to(oldpos,newpos)
    src[oldpos...newpos]
  end
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/Ame.so"

require 'lib/compiler'
