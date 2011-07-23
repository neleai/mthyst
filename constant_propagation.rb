$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
Top=Object.new
Bottom=Object.new
class <<Top
	def inspect 
		"Top"
	end
end
class <<Bottom
	def inspect 
		"Bottom"
	end
end
class Constant_Propagator
	attr_accessor :vals,:active,:activea,:depend
	def initialize(exp)
		@depend=Oriented_Graph.new
		@vals={}
		@active={}
		@activea=[]
		@rules={}
		init(exp)
	end
	def addactive(e)
		if !@active[e]
			@active[e]=true
			@activea<<e
		end
	end
	def analyze 
		while e=activea.pop
			active.delete(e)
			val=step(e)
			if val!=vals[e]
				vals[e]=val
				depend.edges[e].each{|d| addactive(d)}
			end
		end
	end
	def init(exp)
		addactive(exp)
		vals[exp]=Bottom
		case exp
			when Seq
				exp.ary.each{|e| init(e)}
			when Local
				nil
			when Act
				nil
			when Set
				depend.add(exp.expr,exp)
				depend.add(exp,exp.name)
				init(exp.expr)
		end
	end
	def step(el)
		case el
			when Local
				a=Bottom
				puts depend.reverse.edges[el].inspect	
				depend.reverse.edges[el].each{|e|
					a=vals[e] if a==Bottom&&vals[e]!=Bottom
					a=Top if a!=Bottom && a!=vals[e]
				}
				return a
			when Set
				return Top if el.append
				return vals[el.expr]
			when Seq
				return el
			when Act
				return el
		end 
	end
end
l=Local["a"]
t=Seq[Set[{:name=>l,:expr=>Act["foo"] }],Set[{:name=>l,:expr=>Act["bar"] }] ]
f=Constant_Propagator.new(t)
f.analyze
puts f.inspect
t=Grammar[{:rules=>[Rule[{:name=>"a",:body=>Seq[Apply["a"],Apply["seq","a"]]}],Rule[{:name=>"b",:body=>Or[Apply["a"],Apply["b"],Apply["seq","c"]]}]]}]
f=First.new(t)
f.analyze
puts f.inspect
