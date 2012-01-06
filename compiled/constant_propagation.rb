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

class ConstantLattice
	attr_accessor :val
	def self.[](val)
		c=ConstantLattice.new
		c.val=val
		c.freeze
	end
	def +(a)
		return a if val==Bottom
		return self if a.val==Bottom
		return ConstantLattice[Top] if val==Top|| a.val==Top 
		if val==a.val
			return self
		else
			return ConstantLattice[Top]
		end		
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


class Constant_Propagator < Amethyst

def Constant_Propagator_Constant_19d1(bind)
ConstantLattice[bind[16]]
end
def Constant_Propagator_Constant_8840(bind)
ConstantLattice[src]
end
def Constant_Propagator_Constant_bf42(bind)
ConstantLattice[Top]
end
def Constant_Propagator__at_depend_eq__f9fc(bind)
@depend=bind[0]
end
def Constant_Propagator_a_eq_Consta_dc3b(bind)
a=ConstantLattice[Bottom]
        											depend.reverse.edges[bind[0]].each{|e| a=a+valof(e)}
															a
end
def Constant_Propagator_src_25d9(bind)
src
end

end


class Constant_Traverser < Traverser_Clone2

def Constant_Traverser_Bind_lb_src_41c9(bind)
Bind[src.name,bind[4]]
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
def Constant_Traverser__lp__at_consts_080b(bind)
(@consts[src.ssaname] && src[0]!="_result") ? @consts[src.ssaname] : src 
end
def Constant_Traverser__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Constant_Traverser__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Constant_Traverser_bind_lb_11_rb__6cc7(bind)
bind[11]<<bind[12]
end
def Constant_Traverser_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
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
'840f8325cdf4ee514610f606e51ad905'
end
def constant_propagation_source_hash
'0f3aae569bc723ebabe1a7d8141630cb'
end
def testversionconstant_propagation(r)
 raise "invalid version" if r!=constant_propagation_version
end
def constant_propagation_version
'9b92ca141207fd371f318c31e5739f14'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/constant_propagation_c"
