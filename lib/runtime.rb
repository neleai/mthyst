EOS=Object.new
FAIL=Object.new
def EOS.inspect
	"EOS"
end
def FAIL.inspect
	"FAIL"
end
class Stream
	def self.create(src)
		if src.size==0
			return StreamEnd.new(src,0)
		elsif src.is_a? String
			return StringStream.new(src,0)
		else
			return Stream.new(src,0)
		end
	end
	attr_reader :src,:pos
	def initialize(src,ps)
		@src,@pos=src,ps
	end	
	def item
		@src[@pos]
	end
	def child
		return @child if @child
		@child=Stream::create(item)
	end
	def succ
		return @next if @next
		if src.size>pos+1
			@next=self.class.new(src,pos+1)
		else
			@next=StreamEnd.new(src,pos+1)	
		end
		@next
	end	
end
class StringStream < Stream
	def item
		@src[@pos].chr
	end
end
class StreamEnd < Stream
	def item
		FAIL
	end
	def child
		FAIL
	end
end

class AmethystCore
	def cachestream(enter,obj)
		enter ? @cachestream_enter[obj] : @cachestream[obj]
	end
  def _pred()
		b=yield
    if (b)
      return true
    else
    	return FAIL
		end
  end

  def _not
    oldInput = @input
		r=yield
    @input = oldInput
		(r==FAIL) ? true : FAIL
  end

  def _lookahead
    oldInput = @input
    r = yield
    @input = oldInput
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
		oldInput=@input
    @input=cachestream(enter,expr)
		r=yield
		return FAIL if eof==FAIL
		@input=oldInput
		r
	end
		


	def _key(key,&block)
		src=@input.src
    v=src.instance_variable_get("@#{key}")
    v||=src.send(key) if src.respond_to? key
	 	v   
  end

	
	def anything
		i=@input.item
		@input=@input.succ
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
		#TODO use same grammar even in cyclic invocation
		@grammars||={}
		g=@grammars[grammar]||=grammar.new
		g.input=@input
		r=g.call(rule,*args)
		@input=r.input
		return r
	end

  def seq(str)
		if @input.is_a? StringStream
			if str==@input.src[@input.pos,str.size] 
				str.size.times{@input=@input.succ}
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

	def initialize( mems=Hash.new{|h,k| h[k]={}},mema=Hash.new{|h,k| h[k]={}})
		@memos=mems
		@memoa=mema
		@cachestream=Hash.new{|h,k| h[k]=Stream.create([k])}
		@cachestream_enter=Hash.new{|h,k| h[k]=Stream.create(k)}
	end	

	def parse(rule,input)
		time=Time.new
		print self.class
		@input=Stream::create(input)
		r=self.apply(rule)
		puts "	#{Time.new-time}"
		r
	end
end

require 'utils'

