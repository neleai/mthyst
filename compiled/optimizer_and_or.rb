
class Seq_Or_Optimizer < Traverser_Clone2
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
@changed
end
def traverse_Seq_Or_Optimizercb_2(bind)
@src
end
def traverse_Seq_Or_Optimizercb_3(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Seq_Or_Optimizercb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Seq_Or_Optimizercb_5(bind)
@changed=false
end
def traverse_Seq_Or_Optimizercb_6(bind)
(bind[2]||=bind[1].clone;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Seq_Or_Optimizercb_7(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
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
(bind[6]=="apply") || FAIL
end
def visit_Seq_Or_Optimizercb_3(bind)
puts @src.inspect
end
def visit_Seq_Or_Optimizercb_4(bind)
(bind[7].is_a?(CAct)) || FAIL
end
def visit_Seq_Or_Optimizercb_5(bind)
Apply[bind[7][0][13...-2]]
end
def visit_Seq_Or_Optimizercb_6(bind)
(bind[6]=="apply") || FAIL
end
def visit_Seq_Or_Optimizercb_7(bind)
(bind[7].is_a?(Act) && bind[7][0].is_a?(Exp)) || FAIL
end
def visit_Seq_Or_Optimizercb_8(bind)
bind[7][0][0]
end
def visit_Seq_Or_Optimizercb_9(bind)
Seq[{:ary=>@src.ary}]
end

end


def optimizer_and_or_compiled_by
'4540d014da314655aee3c5544e8d25f8'
end
def optimizer_and_or_source_hash
'd6491f906a16d895f1e205ab13f509ee'
end
def testversionoptimizer_and_or(r)
 raise "invalid version" if r!=optimizer_and_or_version
end
def optimizer_and_or_version
'698e6e511cb4ee2e561e1de1e4ad9129'
end
  require 'compiled/optimizer_and_or_c'
