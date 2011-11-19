require 'lib/compatibility'
def leterize(s)
	trans={"."=>"dot","_"=>"","+"=>"pl","-"=>"mi","*"=>"ti","/"=>"di","="=>"eq","<" => "lt",">"=>"gt","$"=>"do","@"=>"at","("=>"lp",")"=>"rp","["=>"lb","]"=>"rb"}
	s2=""
	s=s.split("")
	s.each{|e|s2+=trans[e]?"_#{trans[e]}_" : e }
	s2
end
def signature(s)
	s=leterize(s[0,8])
	r=""
	s.each_char{|c|
		return r unless c=="-" || ("a"<=c && c<="z") || ("A"<=c && c<="Z")
		r<<c
	}
	r
end
module Populate
	def [](*args)
		s=self.new
		hsh=args[-1]
		if hsh.is_a? Hash
			args.pop	
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
class Object
 def self
    self
  end
end
def deep_clone(o)
	if o.is_a? Array
		o.map{|a| deep_clone(a)}
	elsif o.is_a? AmethystAST
		raise "unfrozen #{ o.inspect}" unless o.frozen? || o.is_a?(Grammar) || o.is_a?(Rule)
		n=o.class.new
		o.instance_variables.each{|v| n.instance_variable_set(v,deep_clone(o.instance_variable_get(v)))}
		n.normalize
	else
		o
	end
end

class AmethystAST
	def size
		ary.size
	end
#	def [](*a)
#		ary[*a]
#	end
	def inspect
		attrs=self.class.instance_variable_get(:@attrs)-[:ary]
		"#{self.class}[#{(ary.map{|a| a.inspect}+(attrs.select{|v| send(v)!=nil}.size>0 ? ["{#{(attrs).select{|v| send(v)!=nil}.map{|v| ":#{v}=>#{send(v).inspect}" }*', '}}"]:[]) )*"," }]"
	end
end
def makeclasses(parent,*ary)
	ary.each{|a| 
		a=[a] unless a.is_a? Array
		eval " class #{a[0]} < #{parent}
						@attrs=#{(a[1..-1]+[:ary]).inspect}
						attr_accessor *@attrs
						extend Populate
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
