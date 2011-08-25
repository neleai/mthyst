class Constant_Traverser < Traverser
def self.switchcb_1(e)
return 0 if e<=Local
return 1 if e<=Bind
return 2 if e<=Act
return 3
end
@@switchhash1=Hash.new{|h,k| h[k]=switchcb_1(k)}
def switchcb1(e)
@@switchhash1[e.class]
end
def clas_Constant_Traversercb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
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
bind[1]=[bind[1]]
end
def traverse_Constant_Traversercb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
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
bind[3]<<bind[4]
end
def traverse_item_Constant_Traversercb_4(bind)
AmethystAST
end
def visit_Constant_Traversercb_1(bind)
Local
end
def visit_Constant_Traversercb_2(bind)
@consts[@src.self.ssaname] ? @consts[@src.self.ssaname] : @src.self 
end
def visit_Constant_Traversercb_3(bind)
Bind
end
def visit_Constant_Traversercb_4(bind)
@src.expr
end
def visit_Constant_Traversercb_5(bind)
bind[3]=[bind[3]]
end
def visit_Constant_Traversercb_6(bind)
@src.expr=bind[4]
end
def visit_Constant_Traversercb_7(bind)
@src.self
end
def visit_Constant_Traversercb_8(bind)
Act
end
def visit_Constant_Traversercb_9(bind)
@src.self
end

end


def testversion(r)
 raise "invalid version" if r!='ea050d870ab5d644645995925919fcb4'
end
  require 'compiled/constant_propagation_c'
