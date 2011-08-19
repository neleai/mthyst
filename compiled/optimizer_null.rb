class AmethystOptimizer < Amethyst
def arg_AmethystOptimizercb_1(bind)
Args
end
def arg_AmethystOptimizercb_10(bind)
Exp.create( {:ary=>bind[:ary_1] })
end
def arg_AmethystOptimizercb_11(bind)
Result
end
def arg_AmethystOptimizercb_12(bind)
@src.name
end
def arg_AmethystOptimizercb_13(bind)
@src.args
end
def arg_AmethystOptimizercb_14(bind)
bind[:autovar_10]=[bind[:autovar_10]]
end
def arg_AmethystOptimizercb_15(bind)
@src.vars
end
def arg_AmethystOptimizercb_16(bind)
bind[:autovar_11]=[bind[:autovar_11]]
end
def arg_AmethystOptimizercb_17(bind)
Result.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
end
def arg_AmethystOptimizercb_2(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def arg_AmethystOptimizercb_3(bind)
Args.create( {:ary=>bind[:ary_1] })
end
def arg_AmethystOptimizercb_4(bind)
Strin
end
def arg_AmethystOptimizercb_5(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def arg_AmethystOptimizercb_6(bind)
_append(bind[:autovar_5],bind[:autovar_6])
end
def arg_AmethystOptimizercb_7(bind)
Strin.create( {:ary=>bind[:ary_1] })
end
def arg_AmethystOptimizercb_8(bind)
Exp
end
def arg_AmethystOptimizercb_9(bind)
_append(bind[:ary_1],bind[:autovar_8])
end
def args_AmethystOptimizercb_1(bind)
Array
end
def args_AmethystOptimizercb_2(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def args_AmethystOptimizercb_3(bind)
_append(bind[:autovar_4],bind[:autovar_5])
end
def char_AmethystOptimizercb_1(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def clas_AmethystOptimizercb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def itrans_AmethystOptimizercb_1(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def trans_AmethystOptimizercb_1(bind)
Grammar
end
def trans_AmethystOptimizercb_10(bind)
@src.name
end
def trans_AmethystOptimizercb_11(bind)
@src.args
end
def trans_AmethystOptimizercb_12(bind)
bind[:autovar_4]=[bind[:autovar_4]]
end
def trans_AmethystOptimizercb_13(bind)
@src.body
end
def trans_AmethystOptimizercb_14(bind)
bind[:autovar_5]=[bind[:autovar_5]]
end
def trans_AmethystOptimizercb_15(bind)
@src.bnding
end
def trans_AmethystOptimizercb_16(bind)
@src.locals
end
def trans_AmethystOptimizercb_17(bind)
Rule.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:bnding=>bind[:bnding_1],:body=>bind[:body_1],:locals=>bind[:locals_1],:name=>bind[:name_1] })
end
def trans_AmethystOptimizercb_18(bind)
Or
end
def trans_AmethystOptimizercb_19(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_20(bind)
_append(bind[:autovar_7],bind[:autovar_8])
end
def trans_AmethystOptimizercb_21(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_22(bind)
Seq
end
def trans_AmethystOptimizercb_23(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_24(bind)
_append(bind[:autovar_10],bind[:autovar_11])
end
def trans_AmethystOptimizercb_25(bind)
Seq.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_26(bind)
Lookahead
end
def trans_AmethystOptimizercb_27(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_28(bind)
_append(bind[:ary_1],bind[:autovar_13])
end
def trans_AmethystOptimizercb_29(bind)
@src.neg
end
def trans_AmethystOptimizercb_3(bind)
@src.name
end
def trans_AmethystOptimizercb_30(bind)
Lookahead.create( {:ary=>bind[:ary_1],:neg=>bind[:neg_1] })
end
def trans_AmethystOptimizercb_31(bind)
Comment
end
def trans_AmethystOptimizercb_32(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_33(bind)
_append(bind[:autovar_15],bind[:autovar_16])
end
def trans_AmethystOptimizercb_34(bind)
Comment.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_35(bind)
Many
end
def trans_AmethystOptimizercb_36(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_37(bind)
_append(bind[:ary_1],bind[:autovar_18])
end
def trans_AmethystOptimizercb_38(bind)
@src.o
end
def trans_AmethystOptimizercb_39(bind)
Many.create( {:ary=>bind[:ary_1],:o=>bind[:o_1] })
end
def trans_AmethystOptimizercb_4(bind)
@src.parent
end
def trans_AmethystOptimizercb_40(bind)
Apply
end
def trans_AmethystOptimizercb_41(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_42(bind)
_append(bind[:ary_1],bind[:autovar_20])
end
def trans_AmethystOptimizercb_43(bind)
_append(bind[:ary_1],bind[:autovar_21])
end
def trans_AmethystOptimizercb_44(bind)
Apply.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_45(bind)
Bind
end
def trans_AmethystOptimizercb_46(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_47(bind)
@src.name
end
def trans_AmethystOptimizercb_48(bind)
bind[:autovar_23]=[bind[:autovar_23]]
end
def trans_AmethystOptimizercb_49(bind)
@src.expr
end
def trans_AmethystOptimizercb_5(bind)
@src.rules
end
def trans_AmethystOptimizercb_50(bind)
bind[:autovar_24]=[bind[:autovar_24]]
end
def trans_AmethystOptimizercb_51(bind)
Bind.create( {:ary=>bind[:ary_1],:expr=>bind[:expr_1],:name=>bind[:name_1] })
end
def trans_AmethystOptimizercb_52(bind)
Act
end
def trans_AmethystOptimizercb_53(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_54(bind)
@src.pred
end
def trans_AmethystOptimizercb_55(bind)
@src.pure
end
def trans_AmethystOptimizercb_56(bind)
Act.create( {:ary=>bind[:ary_1],:pred=>bind[:pred_1],:pure=>bind[:pure_1] })
end
def trans_AmethystOptimizercb_57(bind)
Result
end
def trans_AmethystOptimizercb_58(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_59(bind)
@src.name
end
def trans_AmethystOptimizercb_6(bind)
bind[:autovar_2]=[bind[:autovar_2]]
end
def trans_AmethystOptimizercb_60(bind)
@src.args
end
def trans_AmethystOptimizercb_61(bind)
bind[:autovar_27]=[bind[:autovar_27]]
end
def trans_AmethystOptimizercb_62(bind)
@src.vars
end
def trans_AmethystOptimizercb_63(bind)
bind[:autovar_28]=[bind[:autovar_28]]
end
def trans_AmethystOptimizercb_64(bind)
Result.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:expr=>bind[:expr_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
end
def trans_AmethystOptimizercb_65(bind)
Args
end
def trans_AmethystOptimizercb_66(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_67(bind)
_append(bind[:autovar_30],bind[:autovar_31])
end
def trans_AmethystOptimizercb_68(bind)
Args.create( {:ary=>bind[:ary_1],:o=>bind[:o_1] })
end
def trans_AmethystOptimizercb_69(bind)
Pass
end
def trans_AmethystOptimizercb_7(bind)
Grammar.create( {:ary=>bind[:ary_1],:name=>bind[:name_1],:parent=>bind[:parent_1],:rules=>bind[:rules_1] })
end
def trans_AmethystOptimizercb_70(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_71(bind)
@src.to
end
def trans_AmethystOptimizercb_72(bind)
bind[:autovar_33]=[bind[:autovar_33]]
end
def trans_AmethystOptimizercb_73(bind)
@src.var
end
def trans_AmethystOptimizercb_74(bind)
bind[:autovar_34]=[bind[:autovar_34]]
end
def trans_AmethystOptimizercb_75(bind)
Pass.create( {:ary=>bind[:ary_1],:to=>bind[:to_1],:var=>bind[:var_1] })
end
def trans_AmethystOptimizercb_76(bind)
Cut
end
def trans_AmethystOptimizercb_77(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_78(bind)
Cut.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_79(bind)
Stop
end
def trans_AmethystOptimizercb_8(bind)
Rule
end
def trans_AmethystOptimizercb_80(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_81(bind)
Stop.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_82(bind)
Local
end
def trans_AmethystOptimizercb_83(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def trans_AmethystOptimizercb_84(bind)
@src.self
end
def trans_AmethystOptimizercb_9(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def transs_AmethystOptimizercb_1(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end

end




 require 'compiled/optimizer_null_c'
