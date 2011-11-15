FAIL=Object.new
class << FAIL
	def inspect
		"FAIL"
	end
	alias_method :to_s,:inspect
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
require 'lib/c/Ame'

