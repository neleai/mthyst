$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'compiler'
require 'compiled/constant_propagation'
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



#t=translate("amethyst Foo { bar = {1}:x ({x}:y {y}:x)* }")
#puts t.inspect
#r=t[0].rules[0]
#r=Dataflow.new.parse(:root,r)
class Constant_Propagator
  attr_accessor :vals,:active,:activea,:depend
	def initialize(depend)
		@depend=depend
		@vals={}
    @active={}
    @activea=[]

	end
	
	def analyze
    while e=activea.pop
      active.delete(e)
      val=step(e)
      if val!=valof(e)
        setval(e,val)
        depend.edges[e].each{|d| addactive(d)}
      end
    end
  end
  def addactive(e)
    if !@active[e]
      @active[e]=true
      @activea<<e
    end
  end

	def analyze2
		@depend.topo_order.each{|e| addactive(e);@vals[e]=Bottom}
		analyze
		@vals
	end
	def setval(e,x)
		return vals[e.ssaname]=x if e.is_a?(Local)
    return vals[e]=x
	end
	def valof(e)
		return vals[e.ssaname] if e.is_a?(Local)
		return vals[e]
	end
 	def step(el)
    case el
      when Array
        a=Bottom
        depend.reverse.edges[el].each{|e|
					if valof(e)!=Bottom
          	a=valof(e) if a==Bottom
          	a=Top if a!=valof(e)
					end
        }
        return a
      when Bind
 	      return valof(el.expr)
			when Act
				return valof(el[0]) if el[0].is_a? Local
				return el[0] if el[0].is_a?(Exp)
				return Top
			when CAct
				return el[0]
    end
		return Top
  end
	
end
def propagate_consts(r)
[ Remap_Acts,Dataflow].each{|p| r=p.new.parse(:root,r)
#puts r.inspect
}
withtime("Constant_Propagator"){
c=Constant_Propagator.new(r.cfg)
#puts c.inspect
r.consts={}
c.analyze2.each{|k,v| 
	if v!=Top&&v!=Bottom  
		r.consts[k]=v 
		r.consts[k]=CAct[v] if v.is_a?(String)
		r.consts[k]=Act[v] if v.is_a?(Exp)
	end
}
}
#puts r.inspect
r=Constant_Traverser.new.parse(:root,r)
#puts r.inspect
r
end
if false
["amethyst","parser"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/a.rb","#{f}2")
}
end
