# Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012 

def leterize(s)
	trans={"."=>"dot","+"=>"pl","-"=>"mi","*"=>"ti","/"=>"di","="=>"eq","<" => "lt",">"=>"gt","$"=>"do","@"=>"at","("=>"lp",")"=>"rp","["=>"lb","]"=>"rb",":"=>"co","\\"=>"bs"," "=>"sp","`"=>"bq","{"=>"le","}"=>"re","~"=>"td","'"=>"qu","\""=>"dq","#"=>"sh"}
	s2=""
	s=s.split("")
	s.each{|e|s2+=trans[e]?"_#{trans[e]}_" : e }
	s2
end
def signature(s2)
	s=leterize(s2[0,8])
	r=""
	s.each_char{|c|
		return r unless c=="_" || ("a"<=c && c<="z") || ("A"<=c && c<="Z") || ("0"<=c && c<="9")
		r<<c
	}
	r+"_"+Digest::MD5.hexdigest(s2)[0,4]
end
module Populate
	def [](*args)
		s=self.new
		hsh=args[-1]
		if hsh.is_a? Hash
			args.pop	
      hsh[:ary]=[hsh[:ary]] if hsh[:ary].is_a?(Fixnum) #Bnding needs this now
			args=hsh[:ary] + args if hsh[:ary]
			hsh.each{|k,v| s.instance_variable_set("@"+k.to_s,v) if v!=nil} 
		end
		s.instance_variable_set(:@ary,args)
		s
	end
	def intersect ary
		ary.reject{|a| !@attrs.include? a[0].to_sym}
	end
	alias_method :create,:[]
end
def deep_clone(o)
	if o.is_a? Array
		o.map{|a| deep_clone(a)}
	elsif o.is_a? AmethystAST
		n=o.class.new
		o.instance_variables.each{|v| n.instance_variable_set(v,deep_clone(o.instance_variable_get(v)))}
		n.normalize
	else
		o
	end
end

class AmethystAST
	def to_a
		@ary
	end
	def size
		ary.size
	end
	def inspect
		attrs=self.class.attributes-[:ary]
		"#{self.class}[#{(ary.map{|a| a.inspect}+(attrs.select{|v| send(v)!=nil}.size>0 ? ["{#{(attrs).select{|v| send(v)!=nil}.map{|v| ":#{v}=>#{send(v).inspect}" }*', '}}"]:[]) )*"," }]"
	end
end
def makeclasses(parent,*ary)
	ary.each{|a| 
		a=[a] unless a.is_a? Array
		args=a[1..-1]+[:ary]
		eval " class #{a[0]} < #{parent}
						@attrs=#{args.inspect}
            def self.attributes
              @attrs
            end 
						attr_accessor *@attrs
						extend Populate
						def self.create2(#{args*","})
							#{a[0]}.create({#{args.map{|ar| ":#{ar}=>#{ar}"}*","}})
						end
					end"
	}

end

#shortcut for foo.size.times.map
def map_index(s)
	s.size.times.map{|a| yield(a)}
end
$glob=Hash.new(0.0)
def withtime(s)
	t=Time.new
	#print "%20s" % s;	STDOUT.flush
	r=yield
	#puts " %0.6f" % (Time.new-t)
	$glob[s]+=Time.new-t
	r
end
def totaltime
	tot=0
	puts
	$glob.to_a.sort_by{|a,b|-b}.each{|s,t|
		print "%20s" % s; STDOUT.flush
	  puts " %0.6f" % t
		tot+=t
	}
	puts "total #{tot}"
end
class Array
	def uniq_by
		h={}
		r=[]
		each{|e|
			by=yield(e)
			r<<e if !h[by]
			h[by]=true
		}
		r
	end
end

class Consts
	def initialize(s);@s=s;end
	def inspect   	 ;@s	;end
	def to_s				 ;@s  ;end
end

class Integer#compatibility with 1.8
	def bytes
		[self]
	end
end
class String
#	def chr
#		self
#	end
#	def ord
#		self[0]
#	end
end

def true.dup;true;end
def false.dup;false;end
def nil.dup;nil;end
class Fixnum;def dup;self;end;end
