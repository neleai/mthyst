class AmethystOptimizer2 < AmethystOptimizer
def trans_AmethystOptimizer2cb_1(bind)
Or
end
def trans_AmethystOptimizer2cb_10(bind)
bind[:autovar_5]||=[];_append(bind[:autovar_5],bind[:autovar_6])
end
def trans_AmethystOptimizer2cb_11(bind)
bind[:ary_1]=bind[:ary_1].map{|a| (a.is_a?(Seq)) ? a.ary : a}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)}
end
def trans_AmethystOptimizer2cb_12(bind)
(bind[:ary_1].size==1) || FAIL
end
def trans_AmethystOptimizer2cb_13(bind)
bind[:ary_1][0]
end
def trans_AmethystOptimizer2cb_14(bind)
Seq.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizer2cb_2(bind)
[]
end
def trans_AmethystOptimizer2cb_3(bind)
bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])
end
def trans_AmethystOptimizer2cb_4(bind)
bind[:ary_1]=bind[:ary_1].map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)}
end
def trans_AmethystOptimizer2cb_5(bind)
(bind[:ary_1].size==1) || FAIL
end
def trans_AmethystOptimizer2cb_6(bind)
bind[:ary_1][0]
end
def trans_AmethystOptimizer2cb_7(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizer2cb_8(bind)
Seq
end
def trans_AmethystOptimizer2cb_9(bind)
[]
end

end
 require 'c/optimizer_and_or_c'
