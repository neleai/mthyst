class AmethystOptimizer < Amethyst
def arg_AmethystOptimizercb_1(bind)
Args
end
def arg_AmethystOptimizercb_10(bind)
bind[:ary_1]||=[];_append(bind[:ary_1],bind[:autovar_8])
end
def arg_AmethystOptimizercb_11(bind)
Exp.create( {:ary=>bind[:ary_1] })
end
def arg_AmethystOptimizercb_12(bind)
Result
end
def arg_AmethystOptimizercb_13(bind)
@src.name
end
def arg_AmethystOptimizercb_14(bind)
@src.args
end
def arg_AmethystOptimizercb_15(bind)
@src.vars
end
def arg_AmethystOptimizercb_16(bind)
Result.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
end
def arg_AmethystOptimizercb_2(bind)
[]
end
def arg_AmethystOptimizercb_3(bind)
bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])
end
def arg_AmethystOptimizercb_4(bind)
Args.create( {:ary=>bind[:ary_1] })
end
def arg_AmethystOptimizercb_5(bind)
Strin
end
def arg_AmethystOptimizercb_6(bind)
[]
end
def arg_AmethystOptimizercb_7(bind)
bind[:autovar_5]||=[];_append(bind[:autovar_5],bind[:autovar_6])
end
def arg_AmethystOptimizercb_8(bind)
Strin.create( {:ary=>bind[:ary_1] })
end
def arg_AmethystOptimizercb_9(bind)
Exp
end
def args_AmethystOptimizercb_1(bind)
Array
end
def args_AmethystOptimizercb_2(bind)
[]
end
def args_AmethystOptimizercb_3(bind)
bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])
end
def args_AmethystOptimizercb_4(bind)
[]
end
def args_AmethystOptimizercb_5(bind)
bind[:autovar_4]||=[];_append(bind[:autovar_4],bind[:autovar_5])
end
def itrans_AmethystOptimizercb_1(bind)
[]
end
def itrans_AmethystOptimizercb_2(bind)
bind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_2])
end
def trans_AmethystOptimizercb_1(bind)
Grammar
end
def trans_AmethystOptimizercb_10(bind)
@src.bnding
end
def trans_AmethystOptimizercb_11(bind)
@src.locals
end
def trans_AmethystOptimizercb_12(bind)
Rule.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:bnding=>bind[:bnding_1],:body=>bind[:body_1],:locals=>bind[:locals_1],:name=>bind[:name_1] })
end
def trans_AmethystOptimizercb_13(bind)
Or
end
def trans_AmethystOptimizercb_14(bind)
[]
end
def trans_AmethystOptimizercb_15(bind)
bind[:autovar_7]||=[];_append(bind[:autovar_7],bind[:autovar_8])
end
def trans_AmethystOptimizercb_16(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_17(bind)
Seq
end
def trans_AmethystOptimizercb_18(bind)
[]
end
def trans_AmethystOptimizercb_19(bind)
bind[:autovar_10]||=[];_append(bind[:autovar_10],bind[:autovar_11])
end
def trans_AmethystOptimizercb_2(bind)
@src.name
end
def trans_AmethystOptimizercb_20(bind)
Seq.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_21(bind)
Lookahead
end
def trans_AmethystOptimizercb_22(bind)
bind[:ary_1]||=[];_append(bind[:ary_1],bind[:autovar_13])
end
def trans_AmethystOptimizercb_23(bind)
@src.neg
end
def trans_AmethystOptimizercb_24(bind)
Lookahead.create( {:ary=>bind[:ary_1],:neg=>bind[:neg_1] })
end
def trans_AmethystOptimizercb_25(bind)
Comment
end
def trans_AmethystOptimizercb_26(bind)
[]
end
def trans_AmethystOptimizercb_27(bind)
bind[:autovar_15]||=[];_append(bind[:autovar_15],bind[:autovar_16])
end
def trans_AmethystOptimizercb_28(bind)
Comment.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_29(bind)
Many
end
def trans_AmethystOptimizercb_3(bind)
@src.parent
end
def trans_AmethystOptimizercb_30(bind)
bind[:ary_1]||=[];_append(bind[:ary_1],bind[:autovar_18])
end
def trans_AmethystOptimizercb_31(bind)
@src.o
end
def trans_AmethystOptimizercb_32(bind)
Many.create( {:ary=>bind[:ary_1],:o=>bind[:o_1] })
end
def trans_AmethystOptimizercb_33(bind)
Apply
end
def trans_AmethystOptimizercb_34(bind)
bind[:ary_1]||=[];_append(bind[:ary_1],bind[:autovar_20])
end
def trans_AmethystOptimizercb_35(bind)
bind[:ary_1]||=[];_append(bind[:ary_1],bind[:autovar_21])
end
def trans_AmethystOptimizercb_36(bind)
Apply.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_37(bind)
Set
end
def trans_AmethystOptimizercb_38(bind)
@src.name
end
def trans_AmethystOptimizercb_39(bind)
@src.expr
end
def trans_AmethystOptimizercb_4(bind)
@src.rules
end
def trans_AmethystOptimizercb_40(bind)
@src.append
end
def trans_AmethystOptimizercb_41(bind)
Set.create( {:append=>bind[:append_1],:ary=>bind[:ary_1],:expr=>bind[:expr_1],:name=>bind[:name_1] })
end
def trans_AmethystOptimizercb_42(bind)
Act
end
def trans_AmethystOptimizercb_43(bind)
@src.pred
end
def trans_AmethystOptimizercb_44(bind)
Act.create( {:ary=>bind[:ary_1],:pred=>bind[:pred_1] })
end
def trans_AmethystOptimizercb_45(bind)
Result
end
def trans_AmethystOptimizercb_46(bind)
@src.name
end
def trans_AmethystOptimizercb_47(bind)
@src.args
end
def trans_AmethystOptimizercb_48(bind)
@src.vars
end
def trans_AmethystOptimizercb_49(bind)
Result.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:expr=>bind[:expr_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
end
def trans_AmethystOptimizercb_5(bind)
Grammar.create( {:ary=>bind[:ary_1],:name=>bind[:name_1],:parent=>bind[:parent_1],:rules=>bind[:rules_1] })
end
def trans_AmethystOptimizercb_50(bind)
Args
end
def trans_AmethystOptimizercb_51(bind)
[]
end
def trans_AmethystOptimizercb_52(bind)
bind[:autovar_30]||=[];_append(bind[:autovar_30],bind[:autovar_31])
end
def trans_AmethystOptimizercb_53(bind)
Args.create( {:ary=>bind[:ary_1],:o=>bind[:o_1] })
end
def trans_AmethystOptimizercb_54(bind)
Pass
end
def trans_AmethystOptimizercb_55(bind)
@src.to
end
def trans_AmethystOptimizercb_56(bind)
@src.var
end
def trans_AmethystOptimizercb_57(bind)
@src.enter
end
def trans_AmethystOptimizercb_58(bind)
Pass.create( {:ary=>bind[:ary_1],:enter=>bind[:enter_1],:to=>bind[:to_1],:var=>bind[:var_1] })
end
def trans_AmethystOptimizercb_59(bind)
Cut
end
def trans_AmethystOptimizercb_6(bind)
Rule
end
def trans_AmethystOptimizercb_60(bind)
Cut.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_61(bind)
Stop
end
def trans_AmethystOptimizercb_62(bind)
Stop.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_63(bind)
Local
end
def trans_AmethystOptimizercb_64(bind)
[]
end
def trans_AmethystOptimizercb_65(bind)
bind[:autovar_38]||=[];_append(bind[:autovar_38],bind[:autovar_39])
end
def trans_AmethystOptimizercb_66(bind)
@src.self
end
def trans_AmethystOptimizercb_7(bind)
@src.name
end
def trans_AmethystOptimizercb_8(bind)
@src.args
end
def trans_AmethystOptimizercb_9(bind)
@src.body
end
def transs_AmethystOptimizercb_1(bind)
[]
end
def transs_AmethystOptimizercb_2(bind)
bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])
end

end




 require 'c/optimizer_null_c'
