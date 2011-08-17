class AmethystOptimizer2 < AmethystOptimizer
def trans_AmethystOptimizer2cb_1(bind)
Or
end
def trans_AmethystOptimizer2cb_10(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizer2cb_11(bind)
[]
end
def trans_AmethystOptimizer2cb_12(bind)
_append(bind[:autovar_5],bind[:autovar_6])
end
def trans_AmethystOptimizer2cb_13(bind)
bind[:ary_1]=bind[:ary_1].map{|a| (a.is_a?(Seq)) ? a.ary : a}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)}
end
def trans_AmethystOptimizer2cb_14(bind)
(bind[:ary_1].size==1) || FAIL
end
def trans_AmethystOptimizer2cb_15(bind)
bind[:ary_1][0]
end
def trans_AmethystOptimizer2cb_16(bind)
Seq.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizer2cb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizer2cb_3(bind)
[]
end
def trans_AmethystOptimizer2cb_4(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def trans_AmethystOptimizer2cb_5(bind)
bind[:ary_1]=bind[:ary_1].map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)}
end
def trans_AmethystOptimizer2cb_6(bind)
(bind[:ary_1].size==1) || FAIL
end
def trans_AmethystOptimizer2cb_7(bind)
bind[:ary_1][0]
end
def trans_AmethystOptimizer2cb_8(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizer2cb_9(bind)
Seq
end

end





class Seq_Or_Optimizer < Traverser
def visit_Seq_Or_Optimizercb_1(bind)
Seq
end
def visit_Seq_Or_Optimizercb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Seq_Or_Optimizercb_3(bind)
@src.self.ary=@src.ary.map{|i| (i.is_a?(Seq)) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)}
end
def visit_Seq_Or_Optimizercb_4(bind)
(@src.ary.size==1) ? @src.ary[0] : @src.self
end
def visit_Seq_Or_Optimizercb_5(bind)
Or
end
def visit_Seq_Or_Optimizercb_6(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Seq_Or_Optimizercb_7(bind)
@src.self.ary=@src.ary.map{|i| (i.is_a?(Or )) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)}
end
def visit_Seq_Or_Optimizercb_8(bind)
(@src.ary.size==1) ? @src.ary[0] : @src.self
end

end


 require 'compiled/optimizer_and_or_c'
