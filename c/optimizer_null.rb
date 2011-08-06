class AmethystOptimizer < Amethyst
def arg_AmethystOptimizercb_1(bind)
[]
end
def arg_AmethystOptimizercb_10(bind)
_append(bind[:autovar_2],bind[:autovar_6])
end
def arg_AmethystOptimizercb_11(bind)
Strin.create( {:ary=>bind[:ary_1] })
end
def arg_AmethystOptimizercb_12(bind)
Exp
end
def arg_AmethystOptimizercb_13(bind)
_append(bind[:ary_1],bind[:autovar_8])
end
def arg_AmethystOptimizercb_14(bind)
Exp.create( {:ary=>bind[:ary_1] })
end
def arg_AmethystOptimizercb_15(bind)
Result
end
def arg_AmethystOptimizercb_16(bind)
@src.name
end
def arg_AmethystOptimizercb_17(bind)
@src.args
end
def arg_AmethystOptimizercb_18(bind)
@src.vars
end
def arg_AmethystOptimizercb_19(bind)
Result.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
end
def arg_AmethystOptimizercb_2(bind)
[]
end
def arg_AmethystOptimizercb_3(bind)
[]
end
def arg_AmethystOptimizercb_4(bind)
Args
end
def arg_AmethystOptimizercb_5(bind)
[]
end
def arg_AmethystOptimizercb_6(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def arg_AmethystOptimizercb_7(bind)
Args.create( {:ary=>bind[:ary_1] })
end
def arg_AmethystOptimizercb_8(bind)
Strin
end
def arg_AmethystOptimizercb_9(bind)
[]
end
def args_AmethystOptimizercb_1(bind)
[]
end
def args_AmethystOptimizercb_2(bind)
[]
end
def args_AmethystOptimizercb_3(bind)
Array
end
def args_AmethystOptimizercb_4(bind)
[]
end
def args_AmethystOptimizercb_5(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def args_AmethystOptimizercb_6(bind)
[]
end
def args_AmethystOptimizercb_7(bind)
_append(bind[:autovar_2],bind[:autovar_5])
end
def itrans_AmethystOptimizercb_1(bind)
[]
end
def itrans_AmethystOptimizercb_2(bind)
[]
end
def itrans_AmethystOptimizercb_3(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def trans_AmethystOptimizercb_1(bind)
[]
end
def trans_AmethystOptimizercb_10(bind)
@src.name
end
def trans_AmethystOptimizercb_11(bind)
@src.parent
end
def trans_AmethystOptimizercb_12(bind)
@src.rules
end
def trans_AmethystOptimizercb_13(bind)
Grammar.create( {:ary=>bind[:ary_1],:name=>bind[:name_1],:parent=>bind[:parent_1],:rules=>bind[:rules_1] })
end
def trans_AmethystOptimizercb_14(bind)
Rule
end
def trans_AmethystOptimizercb_15(bind)
@src.name
end
def trans_AmethystOptimizercb_16(bind)
@src.args
end
def trans_AmethystOptimizercb_17(bind)
@src.body
end
def trans_AmethystOptimizercb_18(bind)
@src.bnding
end
def trans_AmethystOptimizercb_19(bind)
@src.locals
end
def trans_AmethystOptimizercb_2(bind)
[]
end
def trans_AmethystOptimizercb_20(bind)
Rule.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:bnding=>bind[:bnding_1],:body=>bind[:body_1],:locals=>bind[:locals_1],:name=>bind[:name_1] })
end
def trans_AmethystOptimizercb_21(bind)
Or
end
def trans_AmethystOptimizercb_22(bind)
[]
end
def trans_AmethystOptimizercb_23(bind)
_append(bind[:autovar_1],bind[:autovar_11])
end
def trans_AmethystOptimizercb_24(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_25(bind)
Seq
end
def trans_AmethystOptimizercb_26(bind)
[]
end
def trans_AmethystOptimizercb_27(bind)
_append(bind[:autovar_2],bind[:autovar_13])
end
def trans_AmethystOptimizercb_28(bind)
Seq.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_29(bind)
Lookahead
end
def trans_AmethystOptimizercb_3(bind)
[]
end
def trans_AmethystOptimizercb_30(bind)
_append(bind[:ary_1],bind[:autovar_15])
end
def trans_AmethystOptimizercb_31(bind)
@src.neg
end
def trans_AmethystOptimizercb_32(bind)
Lookahead.create( {:ary=>bind[:ary_1],:neg=>bind[:neg_1] })
end
def trans_AmethystOptimizercb_33(bind)
Comment
end
def trans_AmethystOptimizercb_34(bind)
[]
end
def trans_AmethystOptimizercb_35(bind)
_append(bind[:autovar_3],bind[:autovar_17])
end
def trans_AmethystOptimizercb_36(bind)
Comment.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_37(bind)
Many
end
def trans_AmethystOptimizercb_38(bind)
_append(bind[:ary_1],bind[:autovar_19])
end
def trans_AmethystOptimizercb_39(bind)
@src.o
end
def trans_AmethystOptimizercb_4(bind)
[]
end
def trans_AmethystOptimizercb_40(bind)
Many.create( {:ary=>bind[:ary_1],:o=>bind[:o_1] })
end
def trans_AmethystOptimizercb_41(bind)
Apply
end
def trans_AmethystOptimizercb_42(bind)
_append(bind[:ary_1],bind[:autovar_21])
end
def trans_AmethystOptimizercb_43(bind)
_append(bind[:ary_1],bind[:autovar_22])
end
def trans_AmethystOptimizercb_44(bind)
Apply.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_45(bind)
Set
end
def trans_AmethystOptimizercb_46(bind)
@src.name
end
def trans_AmethystOptimizercb_47(bind)
@src.expr
end
def trans_AmethystOptimizercb_48(bind)
@src.append
end
def trans_AmethystOptimizercb_49(bind)
Set.create( {:append=>bind[:append_1],:ary=>bind[:ary_1],:expr=>bind[:expr_1],:name=>bind[:name_1] })
end
def trans_AmethystOptimizercb_5(bind)
[]
end
def trans_AmethystOptimizercb_50(bind)
Act
end
def trans_AmethystOptimizercb_51(bind)
@src.pred
end
def trans_AmethystOptimizercb_52(bind)
Act.create( {:ary=>bind[:ary_1],:pred=>bind[:pred_1] })
end
def trans_AmethystOptimizercb_53(bind)
Result
end
def trans_AmethystOptimizercb_54(bind)
@src.name
end
def trans_AmethystOptimizercb_55(bind)
@src.args
end
def trans_AmethystOptimizercb_56(bind)
@src.vars
end
def trans_AmethystOptimizercb_57(bind)
Result.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:expr=>bind[:expr_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
end
def trans_AmethystOptimizercb_58(bind)
Args
end
def trans_AmethystOptimizercb_59(bind)
[]
end
def trans_AmethystOptimizercb_6(bind)
[]
end
def trans_AmethystOptimizercb_60(bind)
_append(bind[:autovar_4],bind[:autovar_31])
end
def trans_AmethystOptimizercb_61(bind)
Args.create( {:ary=>bind[:ary_1],:o=>bind[:o_1] })
end
def trans_AmethystOptimizercb_62(bind)
Pass
end
def trans_AmethystOptimizercb_63(bind)
@src.to
end
def trans_AmethystOptimizercb_64(bind)
@src.var
end
def trans_AmethystOptimizercb_65(bind)
@src.enter
end
def trans_AmethystOptimizercb_66(bind)
Pass.create( {:ary=>bind[:ary_1],:enter=>bind[:enter_1],:to=>bind[:to_1],:var=>bind[:var_1] })
end
def trans_AmethystOptimizercb_67(bind)
Cut
end
def trans_AmethystOptimizercb_68(bind)
Cut.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_69(bind)
Stop
end
def trans_AmethystOptimizercb_7(bind)
[]
end
def trans_AmethystOptimizercb_70(bind)
Stop.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_71(bind)
Local
end
def trans_AmethystOptimizercb_72(bind)
@src.self
end
def trans_AmethystOptimizercb_8(bind)
[]
end
def trans_AmethystOptimizercb_9(bind)
Grammar
end
def transs_AmethystOptimizercb_1(bind)
[]
end
def transs_AmethystOptimizercb_2(bind)
[]
end
def transs_AmethystOptimizercb_3(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end

end




 require 'c/optimizer_null_c'
