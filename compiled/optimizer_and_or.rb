
class Seq_Or_Optimizer < Traverser
def switchcb1(e)
return 0 if e.is_a?(Apply)
return 1 if e.is_a?(Or)
return 2 if e.is_a?(Seq)
return 3
end
def switchcb2(e)
return 0 if e.is_a?(Grammar)
return 1 if e.is_a?(Object)
return 2
end
def clas_Seq_Or_Optimizercb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def itrans_Seq_Or_Optimizercb_1(bind)
Grammar
end
def itrans_Seq_Or_Optimizercb_10(bind)
bind[:autovar_3]=[bind[:autovar_3]]
end
def itrans_Seq_Or_Optimizercb_11(bind)
Rule
end
def itrans_Seq_Or_Optimizercb_12(bind)
_append(bind[:autovar_5],bind[:autovar_7])
end
def itrans_Seq_Or_Optimizercb_13(bind)
@src.rules=bind[:rules_1]
end
def itrans_Seq_Or_Optimizercb_14(bind)
@src.self
end
def itrans_Seq_Or_Optimizercb_15(bind)
_append(bind[:autovar_1],bind[:autovar_8])
end
def itrans_Seq_Or_Optimizercb_2(bind)
@src.rules
end
def itrans_Seq_Or_Optimizercb_3(bind)
bind[:autovar_3]=[bind[:autovar_3]]
end
def itrans_Seq_Or_Optimizercb_4(bind)
Rule
end
def itrans_Seq_Or_Optimizercb_5(bind)
_append(bind[:autovar_5],bind[:autovar_7])
end
def itrans_Seq_Or_Optimizercb_6(bind)
@src.rules=bind[:rules_1]
end
def itrans_Seq_Or_Optimizercb_7(bind)
@src.self
end
def itrans_Seq_Or_Optimizercb_8(bind)
Grammar
end
def itrans_Seq_Or_Optimizercb_9(bind)
@src.rules
end
def traverse_Seq_Or_Optimizercb_1(bind)
@src.self
end
def traverse_Seq_Or_Optimizercb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Seq_Or_Optimizercb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Seq_Or_Optimizercb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Seq_Or_Optimizercb_5(bind)
@src.self
end
def traverse_item_Seq_Or_Optimizercb_1(bind)
@changed=true
end
def traverse_item_Seq_Or_Optimizercb_2(bind)
Array
end
def traverse_item_Seq_Or_Optimizercb_3(bind)
bind[:ar_1]<<bind[:it_1]
end
def traverse_item_Seq_Or_Optimizercb_4(bind)
AmethystAST
end
def visit_Seq_Or_Optimizercb_1(bind)
Apply
end
def visit_Seq_Or_Optimizercb_10(bind)
Or
end
def visit_Seq_Or_Optimizercb_11(bind)
@src.self.ary=@src.ary.map{|i| (i.is_a?(Or )) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)}
end
def visit_Seq_Or_Optimizercb_12(bind)
(@src.ary.size==1) ? @src.ary[0] : @src.self
end
def visit_Seq_Or_Optimizercb_13(bind)
Seq
end
def visit_Seq_Or_Optimizercb_14(bind)
@src.self.ary=@src.ary.map{|i| (i.is_a?(Seq)) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)}
end
def visit_Seq_Or_Optimizercb_15(bind)
(@src.ary.size==1) ? @src.ary[0] : @src.self
end
def visit_Seq_Or_Optimizercb_2(bind)
(bind[:name_1]=="apply") || FAIL
end
def visit_Seq_Or_Optimizercb_3(bind)
puts @src.self.inspect
end
def visit_Seq_Or_Optimizercb_4(bind)
(bind[:arg_1].is_a?(CAct)) || FAIL
end
def visit_Seq_Or_Optimizercb_5(bind)
Apply[bind[:arg_1][0][13...-2]]
end
def visit_Seq_Or_Optimizercb_6(bind)
Apply
end
def visit_Seq_Or_Optimizercb_7(bind)
(bind[:name_1]=="apply") || FAIL
end
def visit_Seq_Or_Optimizercb_8(bind)
(bind[:arg_1].is_a?(Act) && bind[:arg_1][0].is_a?(Exp)) || FAIL
end
def visit_Seq_Or_Optimizercb_9(bind)
bind[:arg_1][0][0]
end

end


def testversion(r)
 raise "invalid version" if r!='1849760e8901cb0d5f128c760e7819fb'
end
  require 'compiled/optimizer_and_or_c'
