FAIL=Object.new
def FAIL.inspect
	"FAIL"
end
class AmethystCore
	def cachestream(obj)
		@src=obj
		@input=0
	end

  def _not(&p)
		_lookahead(true,&p)
  end

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
				return r unless r==FAIL
		}
		FAIL
	end

	def _pass(enter,expr)
		expr = [expr] unless enter
		oldSrc,oldInput=@src,@input
    cachestream(expr)
		r=yield
		if eof==FAIL
			@src,@input=oldSrc,oldInput
			return FAIL 
		end
		@src,@input=oldSrc,oldInput
		r
	end
		
	def [](key)
		@src.send(key) if @src.respond_to? key
	end

	def []=(key,value)
	 @src.send(key+"=",value)
	end

	def item
		return FAIL unless @src.respond_to?(:size) && @input<@src.size
		if @src.is_a? String
			@src[@input,1]
		else
			@src[@input]
		end
	end
	
	def anything
		i=item
		@input+=1
		i
	end
	
	def apply(rule)
		if rule.is_a? Proc
			rule.call
		else
			send(rule)
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
		if @src.is_a? String
			if str==@src[@input,str.size]
				@input+=str.size
				return str
			else
				return FAIL
			end
		else
			s=anything
			return s==str ? str : FAIL
		end
  end

  def _append(ar,it)
    if ar.is_a? String
      ar.concat(it.to_s)
    else
      if it.is_a? Array
        ar.concat(it)
      else
        ar << it
      end
    end
  end

	def initialize(grammars={})
		@rammars=grammars
	end	

	def parse(rule,input)
		print self.class
		cachestream(input)	
		time=Time.new
		r=self.apply(rule)
		puts "	#{Time.new-time}"
		
		r
	end
end

require 'utils'

