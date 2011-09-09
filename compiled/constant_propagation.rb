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

end


class Constant_Traverser < Traverser_Clone2
def self.switchcb_Constant_Traverser1(e)
return 0 if e<=Bind
return 1 if e<=Act
return 2 if e<=Local
return 3 if e<=Object
return 4
end
@@switchhashConstant_Traverser1=Hash.new{|h,k| h[k]=switchcb_Constant_Traverser1(k)}
def switchcbConstant_Traverser1(e)
@@switchhashConstant_Traverser1[e.class]
end
def self.switchcb_Constant_Traverser2(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashConstant_Traverser2=Hash.new{|h,k| h[k]=switchcb_Constant_Traverser2(k)}
def switchcbConstant_Traverser2(e)
@@switchhashConstant_Traverser2[e.class]
end
def clas_Constant_Traversercb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Constant_Traversercb_1(bind)
(false) || FAIL
end
def root_Constant_Traversercb_1(bind)
@consts=@src.consts
end
def root_Constant_Traversercb_2(bind)
@src.cfg=nil;@src.reachable=nil;@src.consts=nil
end
def traverse_Constant_Traversercb_1(bind)
@changed
end
def traverse_Constant_Traversercb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Constant_Traversercb_3(bind)
bind[4]=[bind[4]]
end
def traverse_Constant_Traversercb_4(bind)
@changed=false
end
def traverse_Constant_Traversercb_5(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Constant_Traversercb_6(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
end
def traverse_item_Constant_Traversercb_1(bind)
@changed=true
end
def traverse_item_Constant_Traversercb_2(bind)
bind[3]<<bind[4]
end
def visit_Constant_Traversercb_1(bind)
@src.expr
end
def visit_Constant_Traversercb_2(bind)
bind[1]=[bind[1]]
end
def visit_Constant_Traversercb_3(bind)
_Bind(@src.name,bind[2])
end
def visit_Constant_Traversercb_4(bind)
@src
end
def visit_Constant_Traversercb_5(bind)
@consts[@src.ssaname] ? @consts[@src.ssaname] : @src 
end

end


def constant_propagation_compiled_by
'4217ca4d937940a3d2b0e05391d418c5'
end
def constant_propagation_source_hash
'ff47971d3291d0d6fd7a3cb356ced265'
end
def testversionconstant_propagation(r)
 raise "invalid version" if r!=constant_propagation_version
end
def constant_propagation_version
'f726c663a273759655648696d2ee97b5'
end
  require 'compiled/constant_propagation_c'
