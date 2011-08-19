class Dead_Code_Detector < AmethystOptimizer
def trans_Dead_Code_Detectorcb_1(bind)
Rule
end
def trans_Dead_Code_Detectorcb_10(bind)
@src.locals
end
def trans_Dead_Code_Detectorcb_11(bind)
@edges.reachable(@marked)
end
def trans_Dead_Code_Detectorcb_12(bind)
Rule.create( {:args=>bind[:args_1],:body=>bind[:body_1],:locals=>bind[:locals_1],:name=>bind[:name_1],:reachable=>bind[:reachable_1] })
end
def trans_Dead_Code_Detectorcb_13(bind)
Apply
end
def trans_Dead_Code_Detectorcb_14(bind)

end
def trans_Dead_Code_Detectorcb_15(bind)
@marked+=bind[:var_1]
end
def trans_Dead_Code_Detectorcb_16(bind)
Pass
end
def trans_Dead_Code_Detectorcb_17(bind)

end
def trans_Dead_Code_Detectorcb_18(bind)
@src.var
end
def trans_Dead_Code_Detectorcb_19(bind)
bind[:autovar_6]=[bind[:autovar_6]]
end
def trans_Dead_Code_Detectorcb_2(bind)

end
def trans_Dead_Code_Detectorcb_20(bind)
@marked+=bind[:var_1]
end
def trans_Dead_Code_Detectorcb_21(bind)
@src.to
end
def trans_Dead_Code_Detectorcb_22(bind)
bind[:autovar_7]=[bind[:autovar_7]]
end
def trans_Dead_Code_Detectorcb_23(bind)
Act
end
def trans_Dead_Code_Detectorcb_24(bind)

end
def trans_Dead_Code_Detectorcb_25(bind)
@src.self
end
def trans_Dead_Code_Detectorcb_26(bind)
@marked<<bind[:this_1] if @src.pred || !@src.pure
end
def trans_Dead_Code_Detectorcb_27(bind)
bind[:var_1].each{|w| @edges.add(w,bind[:this_1]); @edges.add(bind[:this_1],w)}
end
def trans_Dead_Code_Detectorcb_28(bind)
Bind
end
def trans_Dead_Code_Detectorcb_29(bind)

end
def trans_Dead_Code_Detectorcb_3(bind)
@src.name
end
def trans_Dead_Code_Detectorcb_30(bind)
@src.name
end
def trans_Dead_Code_Detectorcb_31(bind)
bind[:autovar_10]=[bind[:autovar_10]]
end
def trans_Dead_Code_Detectorcb_32(bind)
bind[:v_1]=bind[:v_1][0]
end
def trans_Dead_Code_Detectorcb_33(bind)
@src.expr
end
def trans_Dead_Code_Detectorcb_34(bind)
bind[:autovar_11]=[bind[:autovar_11]]
end
def trans_Dead_Code_Detectorcb_35(bind)
@src.expr
end
def trans_Dead_Code_Detectorcb_36(bind)
bind[:autovar_12]=[bind[:autovar_12]]
end
def trans_Dead_Code_Detectorcb_37(bind)
bind[:var_1].each{|w| @edges.add(bind[:v_1],w)}
end
def trans_Dead_Code_Detectorcb_38(bind)
Result
end
def trans_Dead_Code_Detectorcb_39(bind)

end
def trans_Dead_Code_Detectorcb_4(bind)
@edges=Oriented_Graph.new ; @marked=[]
end
def trans_Dead_Code_Detectorcb_40(bind)
@src.vars
end
def trans_Dead_Code_Detectorcb_41(bind)
bind[:autovar_14]=[bind[:autovar_14]]
end
def trans_Dead_Code_Detectorcb_42(bind)

end
def trans_Dead_Code_Detectorcb_43(bind)
@src.self
end
def trans_Dead_Code_Detectorcb_44(bind)
bind[:var_1].each{|w| @edges.add(bind[:v_1],w) }
end
def trans_Dead_Code_Detectorcb_5(bind)
@src.args
end
def trans_Dead_Code_Detectorcb_6(bind)
bind[:autovar_2]=[bind[:autovar_2]]
end
def trans_Dead_Code_Detectorcb_7(bind)
@src.body
end
def trans_Dead_Code_Detectorcb_8(bind)
bind[:autovar_3]=[bind[:autovar_3]]
end
def trans_Dead_Code_Detectorcb_9(bind)
@src.body
end
def vars_in_Dead_Code_Detectorcb_1(bind)
[]
end
def vars_in_Dead_Code_Detectorcb_10(bind)
@src.self
end
def vars_in_Dead_Code_Detectorcb_11(bind)
_append(bind[:ary_1],bind[:autovar_6])
end
def vars_in_Dead_Code_Detectorcb_12(bind)
@marked<<@src.self
end
def vars_in_Dead_Code_Detectorcb_13(bind)
[]
end
def vars_in_Dead_Code_Detectorcb_14(bind)
_append(bind[:autovar_1],bind[:autovar_7])
end
def vars_in_Dead_Code_Detectorcb_15(bind)
Act
end
def vars_in_Dead_Code_Detectorcb_16(bind)

end
def vars_in_Dead_Code_Detectorcb_17(bind)
@src.self
end
def vars_in_Dead_Code_Detectorcb_18(bind)
_append(bind[:ary_1],bind[:autovar_9])
end
def vars_in_Dead_Code_Detectorcb_19(bind)
[]
end
def vars_in_Dead_Code_Detectorcb_2(bind)
[]
end
def vars_in_Dead_Code_Detectorcb_20(bind)
_append(bind[:autovar_2],bind[:autovar_10])
end
def vars_in_Dead_Code_Detectorcb_21(bind)
Key
end
def vars_in_Dead_Code_Detectorcb_22(bind)

end
def vars_in_Dead_Code_Detectorcb_23(bind)
@src.self
end
def vars_in_Dead_Code_Detectorcb_24(bind)
_append(bind[:ary_1],bind[:autovar_12])
end
def vars_in_Dead_Code_Detectorcb_25(bind)
@marked<<@src.self
end
def vars_in_Dead_Code_Detectorcb_26(bind)
[]
end
def vars_in_Dead_Code_Detectorcb_27(bind)
_append(bind[:autovar_3],bind[:autovar_13])
end
def vars_in_Dead_Code_Detectorcb_28(bind)
Exp
end
def vars_in_Dead_Code_Detectorcb_29(bind)

end
def vars_in_Dead_Code_Detectorcb_3(bind)
[]
end
def vars_in_Dead_Code_Detectorcb_30(bind)
Result
end
def vars_in_Dead_Code_Detectorcb_31(bind)

end
def vars_in_Dead_Code_Detectorcb_32(bind)
@src.self
end
def vars_in_Dead_Code_Detectorcb_33(bind)
_append(bind[:ary_1],bind[:autovar_16])
end
def vars_in_Dead_Code_Detectorcb_34(bind)
Strin
end
def vars_in_Dead_Code_Detectorcb_35(bind)

end
def vars_in_Dead_Code_Detectorcb_36(bind)
_append(bind[:ary_1],bind[:autovar_18])
end
def vars_in_Dead_Code_Detectorcb_37(bind)
Args
end
def vars_in_Dead_Code_Detectorcb_38(bind)

end
def vars_in_Dead_Code_Detectorcb_39(bind)
_append(bind[:ary_1],bind[:autovar_20])
end
def vars_in_Dead_Code_Detectorcb_4(bind)
[]
end
def vars_in_Dead_Code_Detectorcb_40(bind)
Bind
end
def vars_in_Dead_Code_Detectorcb_41(bind)

end
def vars_in_Dead_Code_Detectorcb_42(bind)
@src.name
end
def vars_in_Dead_Code_Detectorcb_43(bind)
bind[:autovar_22]=[bind[:autovar_22]]
end
def vars_in_Dead_Code_Detectorcb_44(bind)
_append(bind[:ary_1],bind[:autovar_23])
end
def vars_in_Dead_Code_Detectorcb_45(bind)
Local
end
def vars_in_Dead_Code_Detectorcb_46(bind)

end
def vars_in_Dead_Code_Detectorcb_47(bind)
@marked<<@src.self if bind[:name_1]=="_result"
end
def vars_in_Dead_Code_Detectorcb_48(bind)
@src.self
end
def vars_in_Dead_Code_Detectorcb_49(bind)
_append(bind[:ary_1],bind[:autovar_25])
end
def vars_in_Dead_Code_Detectorcb_5(bind)
[]
end
def vars_in_Dead_Code_Detectorcb_50(bind)
_append(bind[:autovar_4],bind[:autovar_26])
end
def vars_in_Dead_Code_Detectorcb_6(bind)
bind[:ary_1]=[]
end
def vars_in_Dead_Code_Detectorcb_7(bind)
[]
end
def vars_in_Dead_Code_Detectorcb_8(bind)
Global
end
def vars_in_Dead_Code_Detectorcb_9(bind)

end

end


class Dead_Code_Deleter < AmethystOptimizer
def trans_Dead_Code_Deletercb_1(bind)
[]
end
def trans_Dead_Code_Deletercb_10(bind)
@src.body
end
def trans_Dead_Code_Deletercb_11(bind)
bind[:autovar_5]=[bind[:autovar_5]]
end
def trans_Dead_Code_Deletercb_12(bind)
@src.locals
end
def trans_Dead_Code_Deletercb_13(bind)
Rule.create( {:args=>bind[:args_1],:body=>bind[:body_1],:locals=>bind[:locals_1],:name=>bind[:name_1] })
end
def trans_Dead_Code_Deletercb_14(bind)
Act
end
def trans_Dead_Code_Deletercb_15(bind)

end
def trans_Dead_Code_Deletercb_16(bind)
@src.self
end
def trans_Dead_Code_Deletercb_17(bind)
[]
end
def trans_Dead_Code_Deletercb_18(bind)
_append(bind[:autovar_1],bind[:autovar_7])
end
def trans_Dead_Code_Deletercb_19(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : Act[]
end
def trans_Dead_Code_Deletercb_2(bind)
[]
end
def trans_Dead_Code_Deletercb_20(bind)
Bind
end
def trans_Dead_Code_Deletercb_21(bind)

end
def trans_Dead_Code_Deletercb_22(bind)
@src.name
end
def trans_Dead_Code_Deletercb_23(bind)
@src.expr
end
def trans_Dead_Code_Deletercb_24(bind)
bind[:autovar_9]=[bind[:autovar_9]]
end
def trans_Dead_Code_Deletercb_25(bind)
@reachable[bind[:name_1]] ? _Bind(bind[:name_1],bind[:expr_1]) : bind[:expr_1]
end
def trans_Dead_Code_Deletercb_26(bind)
Result
end
def trans_Dead_Code_Deletercb_27(bind)

end
def trans_Dead_Code_Deletercb_28(bind)
@src.self
end
def trans_Dead_Code_Deletercb_29(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : Act[]
end
def trans_Dead_Code_Deletercb_3(bind)
Rule
end
def trans_Dead_Code_Deletercb_30(bind)
Local
end
def trans_Dead_Code_Deletercb_31(bind)

end
def trans_Dead_Code_Deletercb_32(bind)
[]
end
def trans_Dead_Code_Deletercb_33(bind)
_append(bind[:autovar_2],bind[:autovar_12])
end
def trans_Dead_Code_Deletercb_34(bind)
@src.self
end
def trans_Dead_Code_Deletercb_35(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : Act[]
end
def trans_Dead_Code_Deletercb_4(bind)

end
def trans_Dead_Code_Deletercb_5(bind)
@src.name
end
def trans_Dead_Code_Deletercb_6(bind)
@src.reachable
end
def trans_Dead_Code_Deletercb_7(bind)
@reachable=bind[:it_1]
end
def trans_Dead_Code_Deletercb_8(bind)
@src.args
end
def trans_Dead_Code_Deletercb_9(bind)
bind[:autovar_4]=[bind[:autovar_4]]
end

end



class Communize_Or < AmethystOptimizer
def trans_Communize_Orcb_1(bind)
[]
end
def trans_Communize_Orcb_10(bind)
_append(bind[:autovar_1],bind[:autovar_6])
end
def trans_Communize_Orcb_11(bind)
[]
end
def trans_Communize_Orcb_12(bind)
Seq
end
def trans_Communize_Orcb_13(bind)

end
def trans_Communize_Orcb_14(bind)
(bind[:first_1].isomorphic(bind[:fst_1])) || FAIL
end
def trans_Communize_Orcb_15(bind)
[]
end
def trans_Communize_Orcb_16(bind)
_append(bind[:autovar_2],bind[:autovar_8])
end
def trans_Communize_Orcb_17(bind)
Seq[{:ary=>bind[:rest_1]}]
end
def trans_Communize_Orcb_18(bind)
_append(bind[:ary_1],bind[:autovar_9])
end
def trans_Communize_Orcb_19(bind)
_append(bind[:autovar_3],bind[:autovar_10])
end
def trans_Communize_Orcb_2(bind)
[]
end
def trans_Communize_Orcb_20(bind)
Seq[bind[:first_1] ,Or[{:ary=>bind[:ary_1]}] ]
end
def trans_Communize_Orcb_3(bind)
[]
end
def trans_Communize_Orcb_4(bind)
[]
end
def trans_Communize_Orcb_5(bind)
Or
end
def trans_Communize_Orcb_6(bind)

end
def trans_Communize_Orcb_7(bind)
Seq
end
def trans_Communize_Orcb_8(bind)

end
def trans_Communize_Orcb_9(bind)
[]
end

end


class Move_Assignments < AmethystOptimizer
def move_Move_Assignmentscb_1(bind)
[]
end
def move_Move_Assignmentscb_10(bind)

end
def move_Move_Assignmentscb_11(bind)
[]
end
def move_Move_Assignmentscb_12(bind)
_append(bind[:autovar_2],bind[:autovar_6])
end
def move_Move_Assignmentscb_13(bind)
bind[:ary_1][-1]
end
def move_Move_Assignmentscb_14(bind)
bind[:autovar_7]=[bind[:autovar_7]]
end
def move_Move_Assignmentscb_15(bind)
bind[:name_1]
end
def move_Move_Assignmentscb_16(bind)
bind[:ary_1][-1]=bind[:moved_1]
end
def move_Move_Assignmentscb_17(bind)
Seq.create( {:ary=>bind[:ary_1] })
end
def move_Move_Assignmentscb_18(bind)
Pass
end
def move_Move_Assignmentscb_19(bind)

end
def move_Move_Assignmentscb_2(bind)
[]
end
def move_Move_Assignmentscb_20(bind)
@src.var
end
def move_Move_Assignmentscb_21(bind)
@src.to
end
def move_Move_Assignmentscb_22(bind)
bind[:autovar_9]=[bind[:autovar_9]]
end
def move_Move_Assignmentscb_23(bind)
bind[:name_1]
end
def move_Move_Assignmentscb_24(bind)
Pass.create( {:ary=>bind[:ary_1],:to=>bind[:to_1],:var=>bind[:var_1] })
end
def move_Move_Assignmentscb_25(bind)
_Bind(bind[:name_1],bind[:it_1])
end
def move_Move_Assignmentscb_3(bind)
Or
end
def move_Move_Assignmentscb_4(bind)

end
def move_Move_Assignmentscb_5(bind)
[]
end
def move_Move_Assignmentscb_6(bind)
bind[:name_1]
end
def move_Move_Assignmentscb_7(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def move_Move_Assignmentscb_8(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def move_Move_Assignmentscb_9(bind)
Seq
end
def trans_Move_Assignmentscb_1(bind)
Bind
end
def trans_Move_Assignmentscb_2(bind)

end
def trans_Move_Assignmentscb_3(bind)
@src.name
end
def trans_Move_Assignmentscb_4(bind)
@src.expr
end
def trans_Move_Assignmentscb_5(bind)
bind[:autovar_2]=[bind[:autovar_2]]
end
def trans_Move_Assignmentscb_6(bind)
bind[:autovar_3]=[bind[:autovar_3]]
end
def trans_Move_Assignmentscb_7(bind)
bind[:name_1]
end

end


 require 'c/dead_code_elimination_c'
