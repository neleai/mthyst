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

  def _lookahead(neg=false)
    oldInput = @input
    r = yield
    @input = oldInput
		r=(r==FAIL) ? true : FAIL	if neg
    r
  end

  def _or(*args)
    oldInput = @input
    args.each { |arg|
        @input = oldInput
        r= arg.call
				(@cut=nil;return r) unless r==FAIL
				(@cut=nil;return FAIL) if @cut
		}
		FAIL
	end

	def _pass(enter,expr)
		expr = [expr] unless enter
		oldSrc,oldInput=@src,@input
		@src,@input=expr,0
		r=yield
		r=FAIL if eof==FAIL
		@src,@input=oldSrc,oldInput
		r
	end
		
	def [](key)
		@src.send(key) 
	end

	def []=(key,value)
	 @src.send(key+"=",value)
	end

	def anything
		return FAIL unless @input<@src.size
		if @src.is_a? String
			i=@src[@input,1]
		else
			i=@src[@input]
		end
		@input+=1
		i
	end
	
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

  def seq(str)
		if str==@src[@input,str.size]
			@input+=str.size
			return str
		else
			return FAIL
		end
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
	end	

	def parse(rule,input)
		print self.class
		@src,@input=input,0
		time=Time.new
		r=self.apply(rule)
		puts "	#{Time.new-time}"
		
		r
	end
end
require 'c/Ame'

