# Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012

Top=Consts.new("Top")
Bottom=Consts.new("Bottom")

class ConstantLattice
  attr_accessor :val
  def self.[](val)
    c=ConstantLattice.new
    c.val=val
    c.freeze
  end
  def +(a)
    return    a if self.val==Bottom
    return self if    a.val==Bottom
    return ConstantLattice[Top] if val!=a.val || val==Top
    return self
  end
  def ==(a)
    return val==a.val
  end
end

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
    r={}
    @vals.each{|k,v|
        if v!=Top&&v!=Bottom
          r[k]=v
          r[k]=Act[v] if v.is_a?(Lambda)
        end
    }
    r
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


require File.expand_path(File.dirname(__FILE__))+'/Constant_Propagator.rb'

require File.expand_path(File.dirname(__FILE__))+'/Constant_Traverser.rb'

def constant_propagation_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def constant_propagation_source_hash
'e2dc7d3a95adf957a18c5ec288acc12c'
end
def testversionconstant_propagation(r)
 raise "invalid version" if r!=constant_propagation_version
end
def constant_propagation_version
''
end
