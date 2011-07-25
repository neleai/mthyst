$:.unshift '..'
$:.unshift '../lib'
require 'graph'
require 'pp'
require 'amethyst'

class Dataflow_SSA
	attr_accessor :depend,:ssanums,:oldssanums
	def initialize(exp)
		@depend=Oriented_Graph.new
		@ssanums=Hash.new(0)
		@oldssanums=Hash.new(0)
		init(exp)
	end	
	def ssanum(var)
		[var[0],oldssanums[var]]
	end
	def newssanum(var)
		ssanums[var]+=1
		oldssanums[var]=ssanums[var]
		ssanum(var)
	end
	def init(exp)
		case exp
			when Seq
				exp.ary.each{|a| init(a)}
			when Or
				join=[]
				old=oldssanums.clone
				exp.ary.each{|a| 
					@oldssanums=old.clone
					init(a)
					join<<oldssanums.clone
				}
				puts join.inspect
				ssanums.clone.each{|k,v|
					u=[]
					join.each{|s| u<<s[k]}
					u=u.uniq
					if u.size>1
						 n=newssanum(k)
						 u.each{|v| depend.add([k[0],v],n)}
					end
				}
			when Many
				prev=ssanums.clone
				exp.ary.each{|a| init(a)}
				ssanums.each{|var,num|
					if prev[var]!=num
						depend.add([var[0],ssanums[var]],[var[0],prev[var]] )
					end
				}
			when Act
			when Set
				init(exp.expr)
				if exp.expr.is_a? Local
					o=ssanum(exp.expr)
					n=newssanum(exp.expr)
					depend.add(o,n)
				else
					n=newssanum(exp.name)
					depend.add(exp.expr,exp)
					depend.add(exp,n)
				end
		end
	end
end

l=Local["a"]
t=Or[Set[{:name=>l,:expr=>Act["foo"] }],Set[{:name=>l,:expr=>Act["bar"] }],Act["foo"],Set[{:name=>l,:expr=>l}] ]
f=Dataflow_SSA.new(t)
#f.analyze
puts f.inspect

