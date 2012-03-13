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


require 'compiled/Constant_Propagator.rb'

require 'compiled/Constant_Traverser.rb'

def constant_propagation_compiled_by
'6836af5fdb0d1e998e37f567683dec2f'
end
def constant_propagation_source_hash
'afbe0dd7e39b6a400ad015d1d943a0d8'
end
def testversionconstant_propagation(r)
 raise "invalid version" if r!=constant_propagation_version
end
def constant_propagation_version
'a95aaee92634aedfd4839546a1dac0e5'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/constant_propagation_c"
