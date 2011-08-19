class AmethystOptimizer < Amethyst
def arg_AmethystOptimizercb_1(bind)
[]
end
def arg_AmethystOptimizercb_10(bind)

end
def arg_AmethystOptimizercb_11(bind)
[]
end
def arg_AmethystOptimizercb_12(bind)
_append(bind[:autovar_2],bind[:autovar_6])
end
def arg_AmethystOptimizercb_13(bind)
Strin.create( {:ary=>bind[:ary_1] })
end
def arg_AmethystOptimizercb_14(bind)
Exp
end
def arg_AmethystOptimizercb_15(bind)

end
def arg_AmethystOptimizercb_16(bind)
_append(bind[:ary_1],bind[:autovar_8])
end
def arg_AmethystOptimizercb_17(bind)
Exp.create( {:ary=>bind[:ary_1] })
end
def arg_AmethystOptimizercb_18(bind)
Result
end
def arg_AmethystOptimizercb_19(bind)

end
def arg_AmethystOptimizercb_2(bind)
[]
end
def arg_AmethystOptimizercb_20(bind)
@src.name
end
def arg_AmethystOptimizercb_21(bind)
@src.args
end
def arg_AmethystOptimizercb_22(bind)
bind[:autovar_10]=[bind[:autovar_10]]
end
def arg_AmethystOptimizercb_23(bind)
@src.vars
end
def arg_AmethystOptimizercb_24(bind)
bind[:autovar_11]=[bind[:autovar_11]]
end
def arg_AmethystOptimizercb_25(bind)
Result.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
end
def arg_AmethystOptimizercb_3(bind)
[]
end
def arg_AmethystOptimizercb_4(bind)
Args
end
def arg_AmethystOptimizercb_5(bind)

end
def arg_AmethystOptimizercb_6(bind)
[]
end
def arg_AmethystOptimizercb_7(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def arg_AmethystOptimizercb_8(bind)
Args.create( {:ary=>bind[:ary_1] })
end
def arg_AmethystOptimizercb_9(bind)
Strin
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

end
def args_AmethystOptimizercb_5(bind)
[]
end
def args_AmethystOptimizercb_6(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def args_AmethystOptimizercb_7(bind)
[]
end
def args_AmethystOptimizercb_8(bind)
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
@src.parent
end
def trans_AmethystOptimizercb_11(bind)
@src.rules
end
def trans_AmethystOptimizercb_12(bind)
bind[:autovar_7]=[bind[:autovar_7]]
end
def trans_AmethystOptimizercb_13(bind)
Grammar.create( {:ary=>bind[:ary_1],:name=>bind[:name_1],:parent=>bind[:parent_1],:rules=>bind[:rules_1] })
end
def trans_AmethystOptimizercb_14(bind)
Rule
end
def trans_AmethystOptimizercb_15(bind)

end
def trans_AmethystOptimizercb_16(bind)
@src.name
end
def trans_AmethystOptimizercb_17(bind)
@src.args
end
def trans_AmethystOptimizercb_18(bind)
bind[:autovar_9]=[bind[:autovar_9]]
end
def trans_AmethystOptimizercb_19(bind)
@src.body
end
def trans_AmethystOptimizercb_2(bind)
[]
end
def trans_AmethystOptimizercb_20(bind)
bind[:autovar_10]=[bind[:autovar_10]]
end
def trans_AmethystOptimizercb_21(bind)
@src.bnding
end
def trans_AmethystOptimizercb_22(bind)
@src.locals
end
def trans_AmethystOptimizercb_23(bind)
Rule.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:bnding=>bind[:bnding_1],:body=>bind[:body_1],:locals=>bind[:locals_1],:name=>bind[:name_1] })
end
def trans_AmethystOptimizercb_24(bind)
Or
end
def trans_AmethystOptimizercb_25(bind)

end
def trans_AmethystOptimizercb_26(bind)
[]
end
def trans_AmethystOptimizercb_27(bind)
_append(bind[:autovar_1],bind[:autovar_12])
end
def trans_AmethystOptimizercb_28(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_29(bind)
Seq
end
def trans_AmethystOptimizercb_3(bind)
[]
end
def trans_AmethystOptimizercb_30(bind)

end
def trans_AmethystOptimizercb_31(bind)
[]
end
def trans_AmethystOptimizercb_32(bind)
_append(bind[:autovar_2],bind[:autovar_14])
end
def trans_AmethystOptimizercb_33(bind)
Seq.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_34(bind)
Lookahead
end
def trans_AmethystOptimizercb_35(bind)

end
def trans_AmethystOptimizercb_36(bind)
_append(bind[:ary_1],bind[:autovar_16])
end
def trans_AmethystOptimizercb_37(bind)
@src.neg
end
def trans_AmethystOptimizercb_38(bind)
Lookahead.create( {:ary=>bind[:ary_1],:neg=>bind[:neg_1] })
end
def trans_AmethystOptimizercb_39(bind)
Comment
end
def trans_AmethystOptimizercb_4(bind)
[]
end
def trans_AmethystOptimizercb_40(bind)

end
def trans_AmethystOptimizercb_41(bind)
[]
end
def trans_AmethystOptimizercb_42(bind)
_append(bind[:autovar_3],bind[:autovar_18])
end
def trans_AmethystOptimizercb_43(bind)
Comment.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_44(bind)
Many
end
def trans_AmethystOptimizercb_45(bind)

end
def trans_AmethystOptimizercb_46(bind)
_append(bind[:ary_1],bind[:autovar_20])
end
def trans_AmethystOptimizercb_47(bind)
@src.o
end
def trans_AmethystOptimizercb_48(bind)
Many.create( {:ary=>bind[:ary_1],:o=>bind[:o_1] })
end
def trans_AmethystOptimizercb_49(bind)
Apply
end
def trans_AmethystOptimizercb_5(bind)
[]
end
def trans_AmethystOptimizercb_50(bind)

end
def trans_AmethystOptimizercb_51(bind)
_append(bind[:ary_1],bind[:autovar_22])
end
def trans_AmethystOptimizercb_52(bind)
_append(bind[:ary_1],bind[:autovar_23])
end
def trans_AmethystOptimizercb_53(bind)
Apply.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_54(bind)
Bind
end
def trans_AmethystOptimizercb_55(bind)

end
def trans_AmethystOptimizercb_56(bind)
@src.name
end
def trans_AmethystOptimizercb_57(bind)
bind[:autovar_25]=[bind[:autovar_25]]
end
def trans_AmethystOptimizercb_58(bind)
@src.expr
end
def trans_AmethystOptimizercb_59(bind)
bind[:autovar_26]=[bind[:autovar_26]]
end
def trans_AmethystOptimizercb_6(bind)
[]
end
def trans_AmethystOptimizercb_60(bind)
Bind.create( {:ary=>bind[:ary_1],:expr=>bind[:expr_1],:name=>bind[:name_1] })
end
def trans_AmethystOptimizercb_61(bind)
Act
end
def trans_AmethystOptimizercb_62(bind)

end
def trans_AmethystOptimizercb_63(bind)
@src.pred
end
def trans_AmethystOptimizercb_64(bind)
@src.pure
end
def trans_AmethystOptimizercb_65(bind)
Act.create( {:ary=>bind[:ary_1],:pred=>bind[:pred_1],:pure=>bind[:pure_1] })
end
def trans_AmethystOptimizercb_66(bind)
Result
end
def trans_AmethystOptimizercb_67(bind)

end
def trans_AmethystOptimizercb_68(bind)
@src.name
end
def trans_AmethystOptimizercb_69(bind)
@src.args
end
def trans_AmethystOptimizercb_7(bind)
Grammar
end
def trans_AmethystOptimizercb_70(bind)
bind[:autovar_29]=[bind[:autovar_29]]
end
def trans_AmethystOptimizercb_71(bind)
@src.vars
end
def trans_AmethystOptimizercb_72(bind)
bind[:autovar_30]=[bind[:autovar_30]]
end
def trans_AmethystOptimizercb_73(bind)
Result.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:expr=>bind[:expr_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
end
def trans_AmethystOptimizercb_74(bind)
Args
end
def trans_AmethystOptimizercb_75(bind)

end
def trans_AmethystOptimizercb_76(bind)
[]
end
def trans_AmethystOptimizercb_77(bind)
_append(bind[:autovar_4],bind[:autovar_32])
end
def trans_AmethystOptimizercb_78(bind)
Args.create( {:ary=>bind[:ary_1],:o=>bind[:o_1] })
end
def trans_AmethystOptimizercb_79(bind)
Pass
end
def trans_AmethystOptimizercb_8(bind)

end
def trans_AmethystOptimizercb_80(bind)

end
def trans_AmethystOptimizercb_81(bind)
@src.to
end
def trans_AmethystOptimizercb_82(bind)
bind[:autovar_34]=[bind[:autovar_34]]
end
def trans_AmethystOptimizercb_83(bind)
@src.var
end
def trans_AmethystOptimizercb_84(bind)
bind[:autovar_35]=[bind[:autovar_35]]
end
def trans_AmethystOptimizercb_85(bind)
Pass.create( {:ary=>bind[:ary_1],:to=>bind[:to_1],:var=>bind[:var_1] })
end
def trans_AmethystOptimizercb_86(bind)
Cut
end
def trans_AmethystOptimizercb_87(bind)

end
def trans_AmethystOptimizercb_88(bind)
Cut.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_89(bind)
Stop
end
def trans_AmethystOptimizercb_9(bind)
@src.name
end
def trans_AmethystOptimizercb_90(bind)

end
def trans_AmethystOptimizercb_91(bind)
Stop.create( {:ary=>bind[:ary_1] })
end
def trans_AmethystOptimizercb_92(bind)
Local
end
def trans_AmethystOptimizercb_93(bind)

end
def trans_AmethystOptimizercb_94(bind)
[]
end
def trans_AmethystOptimizercb_95(bind)
_append(bind[:autovar_5],bind[:autovar_39])
end
def trans_AmethystOptimizercb_96(bind)
@src.self
end
def transs_AmethystOptimizercb_1(bind)
[]
end
def transs_AmethystOptimizercb_2(bind)

end
def transs_AmethystOptimizercb_3(bind)
[]
end
def transs_AmethystOptimizercb_4(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end

end




 require 'c/optimizer_null_c'
