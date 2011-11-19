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

def Constant_Propagator_Constant1(bind)
ConstantLattice[src]
end
def Constant_Propagator_Constant2(bind)
ConstantLattice[Top]
end
def Constant_Propagator_Constant3(bind)
ConstantLattice[bind[22]]
end
def Constant_Propagator__append_lp_1(bind)
_append(bind[5],bind[6])
end
def Constant_Propagator__append_lp_2(bind)
_append(bind[10],bind[11])
end
def Constant_Propagator__append_lp_3(bind)
_append(bind[20],bind[21])
end
def Constant_Propagator__append_lp_4(bind)
_append(bind[26],bind[27])
end
def Constant_Propagator__at_depend_eq_1(bind)
@depend=bind[0]
end
def Constant_Propagator_a_eq_Consta1(bind)
a=ConstantLattice[Bottom]
        											depend.reverse.edges[bind[0]].each{|e| a=a+valof(e)}
															a
end
def Constant_Propagator_bind_lb_1_rb__eq_1(bind)
bind[1]=[bind[1]]
end
def Constant_Propagator_src1(bind)
src
end

end


class Constant_Traverser < Traverser_Clone2

def Constant_Traverser_Bind_lb_src1(bind)
Bind[src.name,bind[6]]
end
def Constant_Traverser__append_lp_1(bind)
_append(bind[1],bind[2])
end
def Constant_Traverser__append_lp_2(bind)
_append(bind[9],bind[10])
end
def Constant_Traverser__append_lp_3(bind)
_append(bind[13],bind[14])
end
def Constant_Traverser__append_lp_4(bind)
_append(bind[6],bind[8])
end
def Constant_Traverser__append_lp_5(bind)
_append(bind[0],bind[1])
end
def Constant_Traverser__append_lp_6(bind)
_append(bind[8],bind[13])
end
def Constant_Traverser__at_changed1(bind)
@changed=true
end
def Constant_Traverser__at_changed2(bind)
@changed
end
def Constant_Traverser__at_changed3(bind)
@changed=false
end
def Constant_Traverser__at_consts_eq_1(bind)
@consts=src.consts
end
def Constant_Traverser__lp__at_consts1(bind)
(@consts[src.ssaname] && src[0]!="_result") ? @consts[src.ssaname] : src 
end
def Constant_Traverser__lp_bind_lb_4_rb_1(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Constant_Traverser__lp_src_dot_ins1(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Constant_Traverser_bind_lb_5_rb__lt_1(bind)
bind[5]<<bind[7]
end
def Constant_Traverser_bind_lb_6_rb__eq_1(bind)
bind[6]=[bind[6]]
end
def Constant_Traverser_if1(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Constant_Traverser_src1(bind)
src
end
def Constant_Traverser_src_dot_cfg_eq_1(bind)
src.cfg=nil;src.reachable=nil;src.consts=nil
end

end


def constant_propagation_compiled_by
'bc2798735c434f68a74de54cbaba3fb9'
end
def constant_propagation_source_hash
'b507d97e60e0e88d6bb37c3125ee8745'
end
def testversionconstant_propagation(r)
 raise "invalid version" if r!=constant_propagation_version
end
def constant_propagation_version
'2ce2d8fc41ad26dc08ff07ae1a8a193b'
end
  require 'compiled/constant_propagation_c'
