require 'utils'
FAIL=Object.new
def FAIL.inspect
	"FAIL"
end

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
	
	def foreign(grammar,rule,*args)
		#share @grammars in case of multiple indirect invocations
		g=@grammars[grammar]||=grammar.new(@grammars)
		g.src=@src
		g.input=@input
		r=g.call(rule,*args)
		@input=g.input
		return r
	end

  def _append(ar,it)
    if it.is_a? Array
      ar.concat(it)
    else
      ar << it
    end
  end

	def initialize(grammars={})
		@grammars=grammars
		@parents=[]
	end	

end
class <<AmethystCore
	def parse(rule,input)
		self.class.new.parse(rule,input)
	end
end
require 'c/Ame'

