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

def root_Constant_Propagatorcb_1(bind)
@depend=bind[0]
end
def step_Constant_Propagatorcb_1(bind)
bind[1]=[bind[1]]
end
def step_Constant_Propagatorcb_10(bind)
ConstantLattice[Top]
end
def step_Constant_Propagatorcb_2(bind)
_append(bind[3],bind[4])
end
def step_Constant_Propagatorcb_3(bind)
a=ConstantLattice[Bottom]
        											depend.reverse.edges[bind[0]].each{|e| a=a+valof(e)}
															a
end
def step_Constant_Propagatorcb_4(bind)
_append(bind[12],bind[13])
end
def step_Constant_Propagatorcb_5(bind)
src
end
def step_Constant_Propagatorcb_6(bind)
_append(bind[17],bind[18])
end
def step_Constant_Propagatorcb_7(bind)
ConstantLattice[src]
end
def step_Constant_Propagatorcb_8(bind)
_append(bind[21],bind[22])
end
def step_Constant_Propagatorcb_9(bind)
ConstantLattice[bind[23]]
end

end


class Constant_Traverser < Traverser_Clone2

def root_Constant_Traversercb_1(bind)
@consts=src.consts
end
def root_Constant_Traversercb_2(bind)
src.cfg=nil;src.reachable=nil;src.consts=nil
end
def traverse_Constant_Traversercb_1(bind)
_append(bind[0],bind[1])
end
def traverse_Constant_Traversercb_2(bind)
@changed
end
def traverse_Constant_Traversercb_3(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Constant_Traversercb_4(bind)
bind[6]=[bind[6]]
end
def traverse_Constant_Traversercb_5(bind)
@changed=false
end
def traverse_Constant_Traversercb_6(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def traverse_Constant_Traversercb_7(bind)
_append(bind[8],bind[13])
end
def traverse_Constant_Traversercb_8(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def traverse_item_Constant_Traversercb_1(bind)
@changed=true
end
def traverse_item_Constant_Traversercb_2(bind)
bind[3]<<bind[5]
end
def traverse_item_Constant_Traversercb_3(bind)
_append(bind[4],bind[6])
end
def visit_Constant_Traversercb_1(bind)
_Bind(src.name,bind[1])
end
def visit_Constant_Traversercb_2(bind)
_append(bind[5],bind[6])
end
def visit_Constant_Traversercb_3(bind)
src
end
def visit_Constant_Traversercb_4(bind)
_append(bind[9],bind[10])
end
def visit_Constant_Traversercb_5(bind)
_append(bind[13],bind[14])
end
def visit_Constant_Traversercb_6(bind)
(@consts[src.ssaname] && src[0]!="_result") ? @consts[src.ssaname] : src 
end

end


def constant_propagation_compiled_by
'ea067fdfa12d41c5b58f6a4e0cd87f03'
end
def constant_propagation_source_hash
'b3213c6e35e227b2b1fc4eb983600f9f'
end
def testversionconstant_propagation(r)
 raise "invalid version" if r!=constant_propagation_version
end
def constant_propagation_version
'c009af3a44fc9383bd1e15b2e8f7bf1e'
end
  require 'compiled/constant_propagation_c'
