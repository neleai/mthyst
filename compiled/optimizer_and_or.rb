
class Seq_Or_Optimizer < Traverser
def self.switchcb_1(e)
return 0 if e<=Or
return 1 if e<=Apply
return 2 if e<=Seq
return 3
end
@@switchhash1=Hash.new{|h,k| h[k]=switchcb_1(k)}
def switchcb1(e)
@@switchhash1[e.class]
end
def self.switchcb_2(e)
return 0 if e<=Grammar
return 1 if e<=Object
return 2
end
@@switchhash2=Hash.new{|h,k| h[k]=switchcb_2(k)}
def switchcb2(e)
@@switchhash2[e.class]
end
def clas_Seq_Or_Optimizercb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def itrans_Seq_Or_Optimizercb_1(bind)
Grammar
end
def itrans_Seq_Or_Optimizercb_2(bind)
@src.rules
end
def itrans_Seq_Or_Optimizercb_3(bind)
bind[2]=[bind[2]]
end
def itrans_Seq_Or_Optimizercb_4(bind)
Rule
end
def itrans_Seq_Or_Optimizercb_5(bind)
_append(bind[4],bind[6])
end
def itrans_Seq_Or_Optimizercb_6(bind)
@src.rules=bind[7]
end
def itrans_Seq_Or_Optimizercb_7(bind)
@src.self
end
def itrans_Seq_Or_Optimizercb_8(bind)
_append(bind[0],bind[8])
end
def traverse_Seq_Or_Optimizercb_1(bind)
@src.self
end
def traverse_Seq_Or_Optimizercb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Seq_Or_Optimizercb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Seq_Or_Optimizercb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
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
bind[3]<<bind[4]
end
def traverse_item_Seq_Or_Optimizercb_4(bind)
AmethystAST
end
def visit_Seq_Or_Optimizercb_1(bind)
Or
end
def visit_Seq_Or_Optimizercb_10(bind)
(bind[3]=="apply") || FAIL
end
def visit_Seq_Or_Optimizercb_11(bind)
(bind[4].is_a?(Act) && bind[4][0].is_a?(Exp)) || FAIL
end
def visit_Seq_Or_Optimizercb_12(bind)
bind[4][0][0]
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
@src.self.ary=@src.ary.map{|i| (i.is_a?(Or )) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)}
end
def visit_Seq_Or_Optimizercb_3(bind)
(@src.ary.size==1) ? @src.ary[0] : @src.self
end
def visit_Seq_Or_Optimizercb_4(bind)
Apply
end
def visit_Seq_Or_Optimizercb_5(bind)
(bind[3]=="apply") || FAIL
end
def visit_Seq_Or_Optimizercb_6(bind)
puts @src.self.inspect
end
def visit_Seq_Or_Optimizercb_7(bind)
(bind[4].is_a?(CAct)) || FAIL
end
def visit_Seq_Or_Optimizercb_8(bind)
Apply[bind[4][0][13...-2]]
end
def visit_Seq_Or_Optimizercb_9(bind)
Apply
end

end


def testversion(r)
 raise "invalid version" if r!='f6dc2ec312c1ffe5a09c88e4582539b7'
end
  require 'compiled/optimizer_and_or_c'
