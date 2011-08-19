class AmethystTranslator < Amethyst
def arg_AmethystTranslatorcb_1(bind)
[]
end
def arg_AmethystTranslatorcb_10(bind)

end
def arg_AmethystTranslatorcb_11(bind)
[]
end
def arg_AmethystTranslatorcb_12(bind)
_append(bind[:autovar_2],bind[:autovar_7])
end
def arg_AmethystTranslatorcb_13(bind)
bind[:a_1]*""
end
def arg_AmethystTranslatorcb_14(bind)
Exp
end
def arg_AmethystTranslatorcb_15(bind)

end
def arg_AmethystTranslatorcb_16(bind)
Key
end
def arg_AmethystTranslatorcb_17(bind)

end
def arg_AmethystTranslatorcb_18(bind)
@src.name
end
def arg_AmethystTranslatorcb_19(bind)
"@src.#{bind[:name_1]}"
end
def arg_AmethystTranslatorcb_2(bind)
[]
end
def arg_AmethystTranslatorcb_20(bind)
Local
end
def arg_AmethystTranslatorcb_21(bind)

end
def arg_AmethystTranslatorcb_22(bind)
[]
end
def arg_AmethystTranslatorcb_23(bind)
_append(bind[:autovar_3],bind[:autovar_11])
end
def arg_AmethystTranslatorcb_24(bind)
"bind[:#{@src.desc}]"
end
def arg_AmethystTranslatorcb_25(bind)
Global
end
def arg_AmethystTranslatorcb_26(bind)

end
def arg_AmethystTranslatorcb_27(bind)
"@#{bind[:name_1]}"
end
def arg_AmethystTranslatorcb_3(bind)
[]
end
def arg_AmethystTranslatorcb_4(bind)
Args
end
def arg_AmethystTranslatorcb_5(bind)

end
def arg_AmethystTranslatorcb_6(bind)
[]
end
def arg_AmethystTranslatorcb_7(bind)
_append(bind[:autovar_1],bind[:autovar_5])
end
def arg_AmethystTranslatorcb_8(bind)
bind[:a_1]*""
end
def arg_AmethystTranslatorcb_9(bind)
Strin
end
def args_AmethystTranslatorcb_1(bind)
[]
end
def args_AmethystTranslatorcb_10(bind)
bind[:a_1]*","
end
def args_AmethystTranslatorcb_2(bind)
[]
end
def args_AmethystTranslatorcb_3(bind)
Array
end
def args_AmethystTranslatorcb_4(bind)

end
def args_AmethystTranslatorcb_5(bind)
[]
end
def args_AmethystTranslatorcb_6(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def args_AmethystTranslatorcb_7(bind)
bind[:a_1]*","
end
def args_AmethystTranslatorcb_8(bind)
[]
end
def args_AmethystTranslatorcb_9(bind)
_append(bind[:autovar_2],bind[:autovar_5])
end
def failwrap_AmethystTranslatorcb_1(bind)
"#{bind[:s_1]};#{@returnword} FAIL if it==FAIL" 
end
def itrans_AmethystTranslatorcb_1(bind)
[]
end
def itrans_AmethystTranslatorcb_2(bind)
[]
end
def itrans_AmethystTranslatorcb_3(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def itrans_AmethystTranslatorcb_4(bind)
bind[:r_1]*""
end
def rw_AmethystTranslatorcb_1(bind)
@returnword
end
def rw_AmethystTranslatorcb_2(bind)
@returnword=bind[:word_1]
end
def rw_AmethystTranslatorcb_3(bind)
bind[:prc_1]
end
def rw_AmethystTranslatorcb_4(bind)
@returnword=bind[:rwo_1];bind[:x_1]
end
def trans_AmethystTranslatorcb_1(bind)
[]
end
def trans_AmethystTranslatorcb_10(bind)
bind[:autovar_6]=[bind[:autovar_6]]
end
def trans_AmethystTranslatorcb_11(bind)
"class #{bind[:name_1]} < #{bind[:parent_1]}\n#{bind[:body_1].sort}\nend\n"
end
def trans_AmethystTranslatorcb_12(bind)
Rule
end
def trans_AmethystTranslatorcb_13(bind)

end
def trans_AmethystTranslatorcb_14(bind)
Local.resetnumbering  
end
def trans_AmethystTranslatorcb_15(bind)
'return'
end
def trans_AmethystTranslatorcb_16(bind)
@src.name
end
def trans_AmethystTranslatorcb_17(bind)
@src.body
end
def trans_AmethystTranslatorcb_18(bind)
bind[:autovar_8]=[bind[:autovar_8]]
end
def trans_AmethystTranslatorcb_19(bind)
AmethystLambda.new(:AmethystTranslator_trans_lambda1,self,bind)
end
def trans_AmethystTranslatorcb_2(bind)
[]
end
def trans_AmethystTranslatorcb_20(bind)
"def #{bind[:name_1]}(#{map_index(@src.args){|i| "a#{i}"}*","})\nbind={}; #{@src.args.size.times.map{|i| "bind[:#{@src.args[i].desc}]=a#{i}"}*";"}\n  it=nil\n\n#{bind[:body_1]} \nend\n"
end
def trans_AmethystTranslatorcb_21(bind)
Or
end
def trans_AmethystTranslatorcb_22(bind)

end
def trans_AmethystTranslatorcb_23(bind)
'next'
end
def trans_AmethystTranslatorcb_24(bind)
[]
end
def trans_AmethystTranslatorcb_25(bind)
_append(bind[:autovar_2],bind[:autovar_10])
end
def trans_AmethystTranslatorcb_26(bind)
 AmethystLambda.new(:AmethystTranslator_trans_lambda2,self,bind)
end
def trans_AmethystTranslatorcb_27(bind)
"it=_or(#{bind[:ors_1]*","})"
end
def trans_AmethystTranslatorcb_28(bind)
Seq
end
def trans_AmethystTranslatorcb_29(bind)

end
def trans_AmethystTranslatorcb_3(bind)
[]
end
def trans_AmethystTranslatorcb_30(bind)
[]
end
def trans_AmethystTranslatorcb_31(bind)
_append(bind[:autovar_3],bind[:autovar_12])
end
def trans_AmethystTranslatorcb_32(bind)
"#{bind[:t_1]*"\n"} "
end
def trans_AmethystTranslatorcb_33(bind)
Act
end
def trans_AmethystTranslatorcb_34(bind)

end
def trans_AmethystTranslatorcb_35(bind)
@src.pred
end
def trans_AmethystTranslatorcb_36(bind)
bind[:pred_1] ?  failwrap("it=(#{bind[:t_1]})||FAIL") : "it=(#{bind[:t_1]})"
end
def trans_AmethystTranslatorcb_37(bind)
Lookahead
end
def trans_AmethystTranslatorcb_38(bind)

end
def trans_AmethystTranslatorcb_39(bind)
@src.neg
end
def trans_AmethystTranslatorcb_4(bind)
[]
end
def trans_AmethystTranslatorcb_40(bind)
'next'
end
def trans_AmethystTranslatorcb_41(bind)
AmethystLambda.new(:AmethystTranslator_trans_lambda3,self,bind)
end
def trans_AmethystTranslatorcb_42(bind)
"it=_lookahead(#{!!bind[:neg_1]}){#{bind[:t_1]}}"
end
def trans_AmethystTranslatorcb_43(bind)
Comment
end
def trans_AmethystTranslatorcb_44(bind)

end
def trans_AmethystTranslatorcb_45(bind)
""
end
def trans_AmethystTranslatorcb_46(bind)
Many
end
def trans_AmethystTranslatorcb_47(bind)

end
def trans_AmethystTranslatorcb_48(bind)
'break'
end
def trans_AmethystTranslatorcb_49(bind)
 AmethystLambda.new(:AmethystTranslator_trans_lambda4,self,bind) 
end
def trans_AmethystTranslatorcb_5(bind)
Grammar
end
def trans_AmethystTranslatorcb_50(bind)
autovar
end
def trans_AmethystTranslatorcb_51(bind)
bind[:autovar_17]=[bind[:autovar_17]]
end
def trans_AmethystTranslatorcb_52(bind)
"while true\n#{bind[:o_1]}=@input;r=#{bind[:t_1]}\n break FAIL if r==FAIL\n (#{bind[:o_1]}=@input;@stop=nil;break FAIL) if @stop==true\nend;@input=#{bind[:o_1]}"
end
def trans_AmethystTranslatorcb_53(bind)
Apply
end
def trans_AmethystTranslatorcb_54(bind)

end
def trans_AmethystTranslatorcb_55(bind)
Array
end
def trans_AmethystTranslatorcb_56(bind)

end
def trans_AmethystTranslatorcb_57(bind)
"it=_foreign(:#{bind[:name_1] } #{bind[:argss_1]!=[] ? ",#{bind[:argss_1]}" : "" })"
end
def trans_AmethystTranslatorcb_58(bind)
Apply
end
def trans_AmethystTranslatorcb_59(bind)

end
def trans_AmethystTranslatorcb_6(bind)

end
def trans_AmethystTranslatorcb_60(bind)
"it=#{bind[:name_1]}(#{bind[:argss_1]})"
end
def trans_AmethystTranslatorcb_61(bind)
Bind
end
def trans_AmethystTranslatorcb_62(bind)

end
def trans_AmethystTranslatorcb_63(bind)
@src.name
end
def trans_AmethystTranslatorcb_64(bind)
bind[:autovar_22]=[bind[:autovar_22]]
end
def trans_AmethystTranslatorcb_65(bind)
@src.expr
end
def trans_AmethystTranslatorcb_66(bind)
bind[:autovar_23]=[bind[:autovar_23]]
end
def trans_AmethystTranslatorcb_67(bind)
"#{bind[:expr_1]}\n#{bind[:name_1]} = it"
end
def trans_AmethystTranslatorcb_68(bind)
Result
end
def trans_AmethystTranslatorcb_69(bind)

end
def trans_AmethystTranslatorcb_7(bind)
@src.name
end
def trans_AmethystTranslatorcb_70(bind)
@src.name
end
def trans_AmethystTranslatorcb_71(bind)
@src.args
end
def trans_AmethystTranslatorcb_72(bind)
bind[:autovar_25]=[bind[:autovar_25]]
end
def trans_AmethystTranslatorcb_73(bind)
@src.vars
end
def trans_AmethystTranslatorcb_74(bind)
"it=#{bind[:name_1]}.create(#{bind[:argss_1]} {#{bind[:vars_1].map{|l| ":#{l[0]}=>bind[:#{l.desc}]" }.sort*","} })"
end
def trans_AmethystTranslatorcb_75(bind)
Local
end
def trans_AmethystTranslatorcb_76(bind)

end
def trans_AmethystTranslatorcb_77(bind)
[]
end
def trans_AmethystTranslatorcb_78(bind)
_append(bind[:autovar_4],bind[:autovar_27])
end
def trans_AmethystTranslatorcb_79(bind)
"it=bind[:#{@src.desc}]"
end
def trans_AmethystTranslatorcb_8(bind)
@src.parent
end
def trans_AmethystTranslatorcb_80(bind)
Pass
end
def trans_AmethystTranslatorcb_81(bind)

end
def trans_AmethystTranslatorcb_82(bind)
'next'
end
def trans_AmethystTranslatorcb_83(bind)
@src.to
end
def trans_AmethystTranslatorcb_84(bind)
bind[:autovar_29]=[bind[:autovar_29]]
end
def trans_AmethystTranslatorcb_85(bind)
@src.var
end
def trans_AmethystTranslatorcb_86(bind)
bind[:autovar_30]=[bind[:autovar_30]]
end
def trans_AmethystTranslatorcb_87(bind)
AmethystLambda.new(:AmethystTranslator_trans_lambda5,self,bind)
end
def trans_AmethystTranslatorcb_88(bind)
"it=_pass(true,#{bind[:var_1]}){#{bind[:to_1]}}"
end
def trans_AmethystTranslatorcb_89(bind)
Cut
end
def trans_AmethystTranslatorcb_9(bind)
@src.rules
end
def trans_AmethystTranslatorcb_90(bind)

end
def trans_AmethystTranslatorcb_91(bind)
"@cut=true;it"
end
def trans_AmethystTranslatorcb_92(bind)
Stop
end
def trans_AmethystTranslatorcb_93(bind)

end
def trans_AmethystTranslatorcb_94(bind)
"@stop=true;it"
end
def transfn_AmethystTranslatorcb_1(bind)
"proc{#{bind[:t_1]}}" 
end
def transs_AmethystTranslatorcb_1(bind)
[]
end
def transs_AmethystTranslatorcb_2(bind)

end
def transs_AmethystTranslatorcb_3(bind)
[]
end
def transs_AmethystTranslatorcb_4(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end

end


 require 'c/translator_c'
