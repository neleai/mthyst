
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
			hsh.each{|k,v| s.instance_variable_set("@"+k.to_s,v) if v} 
		end
		s.instance_variable_set(:@ary,args)
		s
	end
end
module Result
	attr_accessor :ary
	def size
		ary.size
	end
	def [](a)
		ary[a]
	end
end
def makeclasses(parent,*ary)
	ary.each{|a| 
		a=[a] unless a.is_a? Array
		eval " class #{a[0]} < #{parent}
						attr_accessor *#{a[1..-1].inspect}
						include Result
						extend Populate
					end"
	}
end
def br #you cant break from begin end block
	yield
end
