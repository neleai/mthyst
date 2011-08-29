
class Seq_Or_Optimizer < Traverser
def self.switchcb_Seq_Or_Optimizer1(e)
return 0 if e<=Or
return 1 if e<=Apply
return 2 if e<=Seq
return 3
end
@@switchhashSeq_Or_Optimizer1=Hash.new{|h,k| h[k]=switchcb_Seq_Or_Optimizer1(k)}
def switchcbSeq_Or_Optimizer1(e)
@@switchhashSeq_Or_Optimizer1[e.class]
end
def self.switchcb_Seq_Or_Optimizer2(e)
return 0 if e<=Grammar
return 1 if e<=Object
return 2
end
@@switchhashSeq_Or_Optimizer2=Hash.new{|h,k| h[k]=switchcb_Seq_Or_Optimizer2(k)}
def switchcbSeq_Or_Optimizer2(e)
@@switchhashSeq_Or_Optimizer2[e.class]
end
def self.switchcb_Seq_Or_Optimizer3(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashSeq_Or_Optimizer3=Hash.new{|h,k| h[k]=switchcb_Seq_Or_Optimizer3(k)}
def switchcbSeq_Or_Optimizer3(e)
@@switchhashSeq_Or_Optimizer3[e.class]
end
def clas_Seq_Or_Optimizercb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def empty_Seq_Or_Optimizercb_1(bind)

end
def fails_Seq_Or_Optimizercb_1(bind)
(false) || FAIL
end
def itrans_Seq_Or_Optimizercb_1(bind)
@src.rules
end
def itrans_Seq_Or_Optimizercb_2(bind)
bind[2]=[bind[2]]
end
def itrans_Seq_Or_Optimizercb_3(bind)
Rule
end
def itrans_Seq_Or_Optimizercb_4(bind)
_append(bind[4],bind[7])
end
def itrans_Seq_Or_Optimizercb_5(bind)
@src.rules=bind[8]
end
def itrans_Seq_Or_Optimizercb_6(bind)
@src
end
def itrans_Seq_Or_Optimizercb_7(bind)
_append(bind[0],bind[10])
end
def traverse_Seq_Or_Optimizercb_1(bind)
@src
end
def traverse_Seq_Or_Optimizercb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Seq_Or_Optimizercb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Seq_Or_Optimizercb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Seq_Or_Optimizercb_5(bind)
@src
end
def traverse_item_Seq_Or_Optimizercb_1(bind)
@changed=true
end
def traverse_item_Seq_Or_Optimizercb_2(bind)
bind[3]<<bind[4]
end
def traverse_item_Seq_Or_Optimizercb_3(bind)
@changed=true
end
def traverse_item_Seq_Or_Optimizercb_4(bind)
@changed=true
end
def visit_Seq_Or_Optimizercb_1(bind)
Or[{:ary=>@src.ary}]
end
def visit_Seq_Or_Optimizercb_2(bind)
(bind[4]=="apply") || FAIL
end
def visit_Seq_Or_Optimizercb_3(bind)
puts @src.inspect
end
def visit_Seq_Or_Optimizercb_4(bind)
(bind[5].is_a?(CAct)) || FAIL
end
def visit_Seq_Or_Optimizercb_5(bind)
Apply[bind[5][0][13...-2]]
end
def visit_Seq_Or_Optimizercb_6(bind)
(bind[4]=="apply") || FAIL
end
def visit_Seq_Or_Optimizercb_7(bind)
(bind[5].is_a?(Act) && bind[5][0].is_a?(Exp)) || FAIL
end
def visit_Seq_Or_Optimizercb_8(bind)
bind[5][0][0]
end
def visit_Seq_Or_Optimizercb_9(bind)
Seq[{:ary=>@src.ary}]
end

end


def testversion(r)
 raise "invalid version" if r!='e3c260ae410c6d6bc0f38687f4bf2d25'
end
  require 'compiled/optimizer_and_or_c'
