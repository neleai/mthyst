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
def self.switchcb_Constant_Propagator2(e)
return 0 if e<=Act
return 1 if e<=Bind
return 2 if e<=CAct
return 3 if e<=Local
return 4 if e<=Object
end
@@switchhashConstant_Propagator2=Hash.new{|h,k| h[k]=switchcb_Constant_Propagator2(k)}
def switchcbConstant_Propagator2(e)
@@switchhashConstant_Propagator2[e.class]
end
def self.switchcb_Constant_Propagator1(e)
return 0 if e<=Exp
return 1 if e<=Local
return 2 if e<=Object
end
@@switchhashConstant_Propagator1=Hash.new{|h,k| h[k]=switchcb_Constant_Propagator1(k)}
def switchcbConstant_Propagator1(e)
@@switchhashConstant_Propagator1[e.class]
end
def clas_Constant_Propagatorcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Constant_Propagatorcb_1(bind)
(false) || FAIL
end
def root_Constant_Propagatorcb_1(bind)
@depend=bind[0]
end
def step_Constant_Propagatorcb_1(bind)
bind[1]=[bind[1]]
end
def step_Constant_Propagatorcb_2(bind)
ConstantLattice[@src]
end
def step_Constant_Propagatorcb_3(bind)
@src
end
def step_Constant_Propagatorcb_4(bind)
ConstantLattice[Top]
end
def step_Constant_Propagatorcb_5(bind)
@src.expr
end
def step_Constant_Propagatorcb_6(bind)
ConstantLattice[bind[12]]
end
def step_Constant_Propagatorcb_7(bind)
a=ConstantLattice[Bottom]
        											depend.reverse.edges[bind[0]].each{|e| a=a+valof(e)}
															a
end

end


class Constant_Traverser < Traverser_Clone2
def self.switchcb_Constant_Traverser3(e)
return 0 if e<=Act
return 1 if e<=Bind
return 2 if e<=Local
return 3 if e<=Object
end
@@switchhashConstant_Traverser3=Hash.new{|h,k| h[k]=switchcb_Constant_Traverser3(k)}
def switchcbConstant_Traverser3(e)
@@switchhashConstant_Traverser3[e.class]
end
def self.switchcb_Constant_Traverser4(e)
return 0 if e<=AmethystAST
return 1 if e<=Array
return 2 if e<=Object
end
@@switchhashConstant_Traverser4=Hash.new{|h,k| h[k]=switchcb_Constant_Traverser4(k)}
def switchcbConstant_Traverser4(e)
@@switchhashConstant_Traverser4[e.class]
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
@changed=false
end
def traverse_Constant_Traversercb_4(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Constant_Traversercb_5(bind)
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
bind[5]<<bind[6]
end
def visit_Constant_Traversercb_1(bind)
@src
end
def visit_Constant_Traversercb_2(bind)
@src.expr
end
def visit_Constant_Traversercb_3(bind)
bind[4]=[bind[4]]
end
def visit_Constant_Traversercb_4(bind)
_Bind(@src.name,bind[5])
end
def visit_Constant_Traversercb_5(bind)
@consts[@src.ssaname] ? @consts[@src.ssaname] : @src 
end

end


def constant_propagation_compiled_by
'4e90157197522699e9dd323ed74e188e'
end
def constant_propagation_source_hash
'4a7badb332b849d427161a22fcb99ead'
end
def testversionconstant_propagation(r)
 raise "invalid version" if r!=constant_propagation_version
end
def constant_propagation_version
'318d9007b0c520af20e5ae8c11afbf51'
end
  require 'compiled/constant_propagation_c'
