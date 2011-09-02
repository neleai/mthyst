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
@src
end
def traverse_Constant_Traversercb_3(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Constant_Traversercb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Constant_Traversercb_5(bind)
@changed=false
end
def traverse_Constant_Traversercb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Constant_Traversercb_7(bind)
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
def traverse_item_Constant_Traversercb_3(bind)
@changed=true
end
def traverse_item_Constant_Traversercb_4(bind)
@changed=true
end
def visit_Constant_Traversercb_1(bind)
@src.expr
end
def visit_Constant_Traversercb_2(bind)
bind[1]=[bind[1]]
end
def visit_Constant_Traversercb_3(bind)
@src.expr=bind[2]
end
def visit_Constant_Traversercb_4(bind)
@src
end
def visit_Constant_Traversercb_5(bind)
@src
end
def visit_Constant_Traversercb_6(bind)
@consts[@src.ssaname] ? @consts[@src.ssaname] : @src 
end

end


def constant_propagation_compiled_by
'e9c665938847210f7e5f38291e3db1f5'
end
def constant_propagation_source_hash
'd8faaf3573d0a7f4bb79bbe4c1e9164d'
end
def testversionconstant_propagation(r)
 raise "invalid version" if r!=constant_propagation_version
end
def constant_propagation_version
'abd9ee13325848ab867d53a1d4d4041c'
end
  require 'compiled/constant_propagation_c'
