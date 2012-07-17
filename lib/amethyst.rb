amethyst_path=File.expand_path(File.dirname(__FILE__)+"/..")
require amethyst_path+"/settings.rb"
require Amethyst_path+"/compiled/#{RUBY_VERSION}/cflags.rb"

$: << Amethyst_path
['graph','utils','flatarray','ast','repair_errors'].each{|r|
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
AmethystCore.__init_interpreter
require 'lib/compiler'

require 'rubygems'
require 'gpgme'
#TODO verify signatures.
require 'net/http'
class << Amethyst
  def pull(name)
    project,version=name.split(":")
    #  TODO create repository 
    localfn= Amethyst_path+"/repository/#{name}.ame"
    if !File.exists?(localfn)
      repository_server= "kam.mff.cuni.cz"
      repository_path  = "/~ondra/amethyst_repository/#{project}/#{version}.ame"
      Net::HTTP.start(repository_server) { |http|
        resp = http.get(repository_path)
        f=File.new(localfn)
        f.print resp.body
      }
    end
    Compiler::compile(localfn)
  end
  def file(name)
    Compiler::compile(name)
  end
end
