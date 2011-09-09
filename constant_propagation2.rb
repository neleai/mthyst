$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'compiler'
require 'compiled/constant_propagation'

#t=translate("amethyst Foo { bar = {1}:x ({x}:y {y}:x)* }")
#nspect
#r=t[0].rules[0]
#r=Dataflow.new.parse(:root,r)
class Constant_Propagator < Amethyst
  attr_accessor :vals,:active,:activea,:depend
	def initialize()
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
		@vals.clone.each{|k,v| @vals[k]=v.val}
  end
  def addactive(e)
    if !@active[e]
      @active[e]=true
      @activea<<e
    end
  end

	def analyze2
		@depend.topo_order.each{|e| addactive(e);@vals[e]=ConstantLattice[Bottom]}
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
end

def propagate_consts(r)
[Dataflow].each{|p| r=p.new.parse(:root,r)
#puts r.inspect
}
withtime("Constant_Propagator"){
c=Constant_Propagator.new
c.parse(:root,[r.cfg])
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
puts r.inspect if $debug>1
r=Constant_Traverser.new.parse(:root,r)
puts r.inspect if $debug>1
r
end
if false
["amethyst","parser"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/a.rb","#{f}2")
}
end
