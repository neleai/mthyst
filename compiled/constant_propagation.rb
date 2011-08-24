class Constant_Traverser < Traverser
def clas_Constant_Traversercb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def root_Constant_Traversercb_1(bind)
@consts=@src.consts
end
def root_Constant_Traversercb_2(bind)
@src.cfg=nil;@src.reachable=nil;@src.consts=nil
end
def root_Constant_Traversercb_3(bind)
@src.self
end
def traverse_Constant_Traversercb_1(bind)
@src.self
end
def traverse_Constant_Traversercb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Constant_Traversercb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Constant_Traversercb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Constant_Traversercb_5(bind)
@src.self
end
def traverse_item_Constant_Traversercb_1(bind)
@changed=true
end
def traverse_item_Constant_Traversercb_2(bind)
Array
end
def traverse_item_Constant_Traversercb_3(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def traverse_item_Constant_Traversercb_4(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def traverse_item_Constant_Traversercb_5(bind)
AmethystAST
end
def traverse_item_Constant_Traversercb_6(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Constant_Traversercb_1(bind)
Bind
end
def visit_Constant_Traversercb_10(bind)
Local
end
def visit_Constant_Traversercb_11(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Constant_Traversercb_12(bind)
@consts[@src.self.ssaname] ? @consts[@src.self.ssaname] : @src.self 
end
def visit_Constant_Traversercb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Constant_Traversercb_3(bind)
@src.expr
end
def visit_Constant_Traversercb_4(bind)
bind[:autovar_2]=[bind[:autovar_2]]
end
def visit_Constant_Traversercb_5(bind)
@src.expr=bind[:expr_1]
end
def visit_Constant_Traversercb_6(bind)
@src.self
end
def visit_Constant_Traversercb_7(bind)
Act
end
def visit_Constant_Traversercb_8(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Constant_Traversercb_9(bind)
@src.self
end

end


def testversion(r)
 raise "invalid version" if r!='fbcd8f7da4bb4409a6a87b1b5e8c9c40'
end
  require 'compiled/constant_propagation_c'
