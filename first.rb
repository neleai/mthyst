$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'

class First
	attr_accessor :vals,:active,:activea,:depend
	def initialize(exp)
		@depend=Oriented_Graph.new
		@vals={}
		@active={}
		@activea=[]
		@rules={}
		init(exp,nil)
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
			val=step(e).sort
			if val!=vals[e]
				vals[e]=val
				depend.edges[e].each{|d| addactive(d)}
			end
		end
	end
	def init(exp,dep)
		depend.add(exp,dep) if dep
		addactive(exp)
		vals[exp]=["empty"]
		case exp
			when Seq
				exp.ary.each{|e| init(e,exp)}
			when Or
				exp.ary.each{|e| init(e,exp)}
			when Many
				exp.ary.each{|e| init(e,exp)}
			when Bind
				init(exp.expr,exp)
			when Grammar
				exp.rules.each{|r| @rules[r.name]=r}
				exp.rules.each{|e| init(e,exp)}
			when Rule
				init(exp.body,exp)
			when Apply
				depend.add(@rules[exp[0]],exp) if @rules[exp[0]] 
		end
	end
	def step(el)
		case el
			when Seq
				a=[]
				el.ary.each{|e|
					a=(a+vals[e]).uniq
					return a-["empty"] if !vals[e].include?("empty")
				}
				return a
			when Or
				a=[]
				el.ary.each{|e| a=(a+vals[e]).uniq}
				return a
			when Apply
				case el[0]
					when "seq"
						return [el[1][0,1]] 
					else
						return vals[@rules[el[0]]]
				end
			when Many
				return (vals[el[0]]+["empty"]).uniq
			when Bind
				return vals[el.expr]
			when Act
				return ["empty"]
			when Grammar
				return ["empty"]
			when Rule
				return vals[el.body]
		end 
	end
end
t=Or[Apply["seq","aba"],Seq[Many[Apply["seq","c"]],Apply["seq","d"]]]
f=First.new(t)
f.analyze
puts f.inspect
t=Grammar[{:rules=>[Rule[{:name=>"a",:body=>Seq[Apply["a"],Apply["seq","a"]]}],Rule[{:name=>"b",:body=>Or[Apply["a"],Apply["b"],Apply["seq","c"]]}]]}]
f=First.new(t)
f.analyze
puts f.inspect
