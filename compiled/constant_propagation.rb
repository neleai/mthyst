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

def _Constant_8840(bind)
ConstantLattice[src]
end
def _Constant_bf42(bind)
ConstantLattice[Top]
end
def _Constant_db03(bind)
ConstantLattice[bind[1]]
end
def __at_depend_eq__07a9(bind)
@depend=bind[1]
end
def _a_eq_Consta_2e1d(bind)
a=ConstantLattice[Bottom]
                               depend.reverse.edges[bind[1]].each{|e| a=a+valof(e)}
                               a
end
def _src_25d9(bind)
src
end

end


class Constant_Traverser < Traverser_Clone2

def _Bind_lb_src_66c4(bind)
Bind[src.name,bind[1]]
end
def _Bind_lb_src_91ed(bind)
Bind[src,bind[1][:consts][src.ssaname]]
end
def _Seq_lb_bind_95dc(bind)
Seq[bind[1],src]
end
def __at__contex_160a(bind)
@_context_arguments||={};bind[1]=@_context_arguments.dup
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __lp__lp_bind_lb_1_1e7f(bind)
((bind[1][:consts][src.ssaname] && !(bind[1][:consts][src.ssaname].is_a?(CAct)&&bind[1][:consts][src.ssaname][0]==[]) &&src[0]!="_result") ) || FAIL
end
def __lp__lp_bind_lb_1_42f7(bind)
((bind[1][:consts][src.ssaname] && src[0]!="_result") ) || FAIL
end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__dot__f702(bind)
bind[1].freeze
end
def _bind_lb_1_rb__lb__a394(bind)
bind[1][:consts][src.ssaname]
end
def _bind_lb_1_rb__lb__cf87(bind)
bind[1][:consts]=src.consts;
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def _src_25d9(bind)
src
end
def _src_dot_cfg_eq__15aa(bind)
src.cfg=nil;src.reachable=nil;src.consts=nil
end
def _src_dot_dup_d768(bind)
src.dup
end

end


def constant_propagation_compiled_by
'a80fd52dfb569af81f2c7a8d6864093a'
end
def constant_propagation_source_hash
'afbe0dd7e39b6a400ad015d1d943a0d8'
end
def testversionconstant_propagation(r)
 raise "invalid version" if r!=constant_propagation_version
end
def constant_propagation_version
'848d376a3a6ad66feb38d724271a8c55'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/constant_propagation_c"
