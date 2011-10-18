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

def root_Constant_Propagatorcb_1(bind)
@depend=bind[0]
end
def step_Constant_Propagatorcb_1(bind)
bind[1]=[bind[1]]
end
def step_Constant_Propagatorcb_2(bind)
ConstantLattice[src]
end
def step_Constant_Propagatorcb_3(bind)
src
end
def step_Constant_Propagatorcb_4(bind)
ConstantLattice[Top]
end
def step_Constant_Propagatorcb_5(bind)
ConstantLattice[bind[13]]
end
def step_Constant_Propagatorcb_6(bind)
a=ConstantLattice[Bottom]
        											depend.reverse.edges[bind[0]].each{|e| a=a+valof(e)}
															a
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
@changed
end
def traverse_Constant_Traversercb_2(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Constant_Traversercb_3(bind)
bind[4]=[bind[4]]
end
def traverse_Constant_Traversercb_4(bind)
@changed=false
end
def traverse_Constant_Traversercb_5(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def traverse_Constant_Traversercb_6(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def traverse_item_Constant_Traversercb_1(bind)
@changed=true
end
def traverse_item_Constant_Traversercb_2(bind)
bind[5]<<bind[6]
end
def visit_Constant_Traversercb_1(bind)
src
end
def visit_Constant_Traversercb_2(bind)
_Bind(src.name,bind[4])
end
def visit_Constant_Traversercb_3(bind)
(@consts[src.ssaname] && src[0]!="_result") ? @consts[src.ssaname] : src 
end

end


def constant_propagation_compiled_by
'46d12497faafe574a40390f3bb9e7223'
end
def constant_propagation_source_hash
'78abe3f9cc5549ee6b73dd3c3ed1744f'
end
def testversionconstant_propagation(r)
 raise "invalid version" if r!=constant_propagation_version
end
def constant_propagation_version
'7cbdf0555f40db60552f1014cd05d7fc'
end
  require 'compiled/constant_propagation_c'
