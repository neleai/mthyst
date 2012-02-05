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


class Constant_Propagator < Amethyst

def Constant_Propagator_Constant_8840(bind)
ConstantLattice[src]
end
def Constant_Propagator_Constant_bf42(bind)
ConstantLattice[Top]
end
def Constant_Propagator_Constant_db03(bind)
ConstantLattice[bind[1]]
end
def Constant_Propagator__at_depend_eq__07a9(bind)
@depend=bind[1]
end
def Constant_Propagator_a_eq_Consta_2e1d(bind)
a=ConstantLattice[Bottom]
                               depend.reverse.edges[bind[1]].each{|e| a=a+valof(e)}
                               a
end
def Constant_Propagator_src_25d9(bind)
src
end

end


class Constant_Traverser < Traverser_Clone2

def Constant_Traverser_Bind_lb_src_66c4(bind)
Bind[src.name,bind[1]]
end
def Constant_Traverser_Bind_lb_src_9cb6(bind)
Bind[src,@consts[src.ssaname]]
end
def Constant_Traverser_Seq_lb_bind_95dc(bind)
Seq[bind[1],src]
end
def Constant_Traverser__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def Constant_Traverser__at_changed_5352(bind)
@changed=true
end
def Constant_Traverser__at_changed_b885(bind)
@changed=false
end
def Constant_Traverser__at_changed_c681(bind)
@changed
end
def Constant_Traverser__at_consts_eq__b621(bind)
@consts=src.consts
end
def Constant_Traverser__at_consts_lb__abf4(bind)
@consts[src.ssaname]
end
def Constant_Traverser__lp__lp__at_const_463e(bind)
((@consts[src.ssaname] && !(@consts[src.ssaname].is_a?(CAct)&&@consts[src.ssaname][0]==[]) &&src[0]!="_result") ) || FAIL
end
def Constant_Traverser__lp__lp__at_const_5d8f(bind)
((@consts[src.ssaname] && src[0]!="_result") ) || FAIL
end
def Constant_Traverser__lp_bind_lb_1_rb__ee3d(bind)
(bind[1]||=bind[2].dup;bind[3]=true;bind[1].instance_variable_set(bind[4],bind[5])) if @changed && bind[5]!=instance_variable_get(bind[4])
end
def Constant_Traverser__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Constant_Traverser_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Constant_Traverser_if_sp_bind_lb__8e0b(bind)
if bind[1]
             @changed=true;bind[2].normalize
           else
            @changed=bind[3]
            src
          end
end
def Constant_Traverser_src_25d9(bind)
src
end
def Constant_Traverser_src_dot_cfg_eq__15aa(bind)
src.cfg=nil;src.reachable=nil;src.consts=nil
end

end


def constant_propagation_compiled_by
'a5d98894adfc37b50290755e8557967d'
end
def constant_propagation_source_hash
'bcca214b59974f470c5395adafe72fab'
end
def testversionconstant_propagation(r)
 raise "invalid version" if r!=constant_propagation_version
end
def constant_propagation_version
'8e6ed87e4b4eac34c7b8f62e43acf461'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/constant_propagation_c"
