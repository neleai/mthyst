require 'yaml'
def leterize(s)
	trans={"."=>"_dot_","_"=>"_","-"=>"_minus_","="=>"_equal_","<" => "_less_",">"=>"_greater_","$"=>"_dollar_"}
	s2=""
	s=s.split("")
	s.each{|e|s2+=trans[e]?trans[e]:e }
	s2
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

module AmethystAST
	def size
		ary.size
	end
	def [](a)
		ary[a]
	end
	def self
		self
	end
	def isomorphic(that)
		this.to_yaml==that.to_yaml
	end
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
						include AmethystAST
						extend Populate
					end"
	}

end
