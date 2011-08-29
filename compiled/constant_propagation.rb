class Constant_Traverser < Traverser
def self.switchcb_Constant_Traverser1(e)
return 0 if e<=Local
return 1 if e<=Bind
return 2 if e<=Act
return 3
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
def empty_Constant_Traversercb_1(bind)

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
def root_Constant_Traversercb_3(bind)
@src
end
def traverse_Constant_Traversercb_1(bind)
@src
end
def traverse_Constant_Traversercb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Constant_Traversercb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Constant_Traversercb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Constant_Traversercb_5(bind)
@src
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
@consts[@src.ssaname] ? @consts[@src.ssaname] : @src 
end
def visit_Constant_Traversercb_2(bind)
@src.expr
end
def visit_Constant_Traversercb_3(bind)
bind[4]=[bind[4]]
end
def visit_Constant_Traversercb_4(bind)
@src.expr=bind[5]
end
def visit_Constant_Traversercb_5(bind)
@src
end
def visit_Constant_Traversercb_6(bind)
@src
end

end


def testversion(r)
 raise "invalid version" if r!='8d4bd7b57291f89011f9f322b4aef93d'
end
  require 'compiled/constant_propagation_c'
