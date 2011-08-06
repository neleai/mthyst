class AmethystTranslator < Amethyst
def arg_AmethystTranslatorcb_1(bind)
[]
end
def arg_AmethystTranslatorcb_10(bind)
bind[:a_1]*""
end
def arg_AmethystTranslatorcb_11(bind)
Exp
end
def arg_AmethystTranslatorcb_12(bind)
Key
end
def arg_AmethystTranslatorcb_13(bind)
@src.name
end
def arg_AmethystTranslatorcb_14(bind)
"@src.#{bind[:name_1]}"
end
def arg_AmethystTranslatorcb_15(bind)
Local
end
def arg_AmethystTranslatorcb_16(bind)
"bind[:#{@src.desc}]"
end
def arg_AmethystTranslatorcb_17(bind)
Global
end
def arg_AmethystTranslatorcb_18(bind)
"@#{bind[:name_1]}"
end
def arg_AmethystTranslatorcb_2(bind)
[]
end
def arg_AmethystTranslatorcb_3(bind)
Args
end
def arg_AmethystTranslatorcb_4(bind)
[]
end
def arg_AmethystTranslatorcb_5(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def arg_AmethystTranslatorcb_6(bind)
bind[:a_1]*""
end
def arg_AmethystTranslatorcb_7(bind)
Strin
end
def arg_AmethystTranslatorcb_8(bind)
[]
end
def arg_AmethystTranslatorcb_9(bind)
_append(bind[:autovar_2],bind[:autovar_6])
end
def args_AmethystTranslatorcb_1(bind)
[]
end
def args_AmethystTranslatorcb_2(bind)
[]
end
def args_AmethystTranslatorcb_3(bind)
Array
end
def args_AmethystTranslatorcb_4(bind)
[]
end
def args_AmethystTranslatorcb_5(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def args_AmethystTranslatorcb_6(bind)
bind[:a_1]*","
end
def args_AmethystTranslatorcb_7(bind)
[]
end
def args_AmethystTranslatorcb_8(bind)
_append(bind[:autovar_2],bind[:autovar_5])
end
def args_AmethystTranslatorcb_9(bind)
bind[:a_1]*","
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
'return'
end
def trans_AmethystTranslatorcb_11(bind)
@src.name
end
def trans_AmethystTranslatorcb_12(bind)
@src.body
end
def trans_AmethystTranslatorcb_13(bind)
AmethystLambda.new(:AmethystTranslator_trans_lambda1,self,bind)
end
def trans_AmethystTranslatorcb_14(bind)
"def #{bind[:name_1]}(#{map_index(@src.args){|i| "a#{i}"}*","})\nbind={}; #{@src.args.size.times.map{|i| "bind[:#{@src.args[i].desc}]=a#{i}"}*";"}\n  it=nil\n\n#{bind[:body_1]} \nend\n"
end
def trans_AmethystTranslatorcb_15(bind)
Or
end
def trans_AmethystTranslatorcb_16(bind)
'next'
end
def trans_AmethystTranslatorcb_17(bind)
[]
end
def trans_AmethystTranslatorcb_18(bind)
_append(bind[:autovar_1],bind[:autovar_8])
end
def trans_AmethystTranslatorcb_19(bind)
 AmethystLambda.new(:AmethystTranslator_trans_lambda2,self,bind)
end
def trans_AmethystTranslatorcb_2(bind)
[]
end
def trans_AmethystTranslatorcb_20(bind)
"it=_or(#{bind[:ors_1]*","})"
end
def trans_AmethystTranslatorcb_21(bind)
Seq
end
def trans_AmethystTranslatorcb_22(bind)
[]
end
def trans_AmethystTranslatorcb_23(bind)
_append(bind[:autovar_2],bind[:autovar_10])
end
def trans_AmethystTranslatorcb_24(bind)
"#{bind[:t_1]*"\n"} "
end
def trans_AmethystTranslatorcb_25(bind)
Act
end
def trans_AmethystTranslatorcb_26(bind)
@src.pred
end
def trans_AmethystTranslatorcb_27(bind)
bind[:pred_1] ?  failwrap("it=(#{bind[:t_1]})||FAIL") : "it=(#{bind[:t_1]})"
end
def trans_AmethystTranslatorcb_28(bind)
Lookahead
end
def trans_AmethystTranslatorcb_29(bind)
@src.neg
end
def trans_AmethystTranslatorcb_3(bind)
Grammar
end
def trans_AmethystTranslatorcb_30(bind)
'next'
end
def trans_AmethystTranslatorcb_31(bind)
AmethystLambda.new(:AmethystTranslator_trans_lambda3,self,bind)
end
def trans_AmethystTranslatorcb_32(bind)
"it=_lookahead(#{!!bind[:neg_1]}){#{bind[:t_1]}}"
end
def trans_AmethystTranslatorcb_33(bind)
Comment
end
def trans_AmethystTranslatorcb_34(bind)
""
end
def trans_AmethystTranslatorcb_35(bind)
Many
end
def trans_AmethystTranslatorcb_36(bind)
'break'
end
def trans_AmethystTranslatorcb_37(bind)
 AmethystLambda.new(:AmethystTranslator_trans_lambda4,self,bind) 
end
def trans_AmethystTranslatorcb_38(bind)
@src.o
end
def trans_AmethystTranslatorcb_39(bind)
"while true\n#{bind[:o_1]}=@input;r=#{bind[:t_1]}\n break FAIL if r==FAIL\n (#{bind[:o_1]}=@input;@stop=nil;break FAIL) if @stop==true\nend;@input=#{bind[:o_1]}"
end
def trans_AmethystTranslatorcb_4(bind)
@src.name
end
def trans_AmethystTranslatorcb_40(bind)
Apply
end
def trans_AmethystTranslatorcb_41(bind)
Array
end
def trans_AmethystTranslatorcb_42(bind)
"it=_foreign(:#{bind[:name_1] } #{bind[:argss_1]!=[] ? ",#{bind[:argss_1]}" : "" })"
end
def trans_AmethystTranslatorcb_43(bind)
Apply
end
def trans_AmethystTranslatorcb_44(bind)
"it=#{bind[:name_1]}(#{bind[:argss_1]})"
end
def trans_AmethystTranslatorcb_45(bind)
Set
end
def trans_AmethystTranslatorcb_46(bind)
@src.name
end
def trans_AmethystTranslatorcb_47(bind)
@src.expr
end
def trans_AmethystTranslatorcb_48(bind)
@src.append
end
def trans_AmethystTranslatorcb_49(bind)
"#{bind[:expr_1]}\n" + (bind[:append_1] ? "#{bind[:name_1]}||=[];_append(#{bind[:name_1]},it)" : "#{bind[:name_1]} = it")
end
def trans_AmethystTranslatorcb_5(bind)
@src.parent
end
def trans_AmethystTranslatorcb_50(bind)
Result
end
def trans_AmethystTranslatorcb_51(bind)
@src.name
end
def trans_AmethystTranslatorcb_52(bind)
@src.args
end
def trans_AmethystTranslatorcb_53(bind)
@src.vars
end
def trans_AmethystTranslatorcb_54(bind)
"it=#{bind[:name_1]}.create(#{bind[:argss_1]} {#{bind[:vars_1].map{|l| ":#{l[0]}=>bind[:#{l.desc}]" }.sort*","} })"
end
def trans_AmethystTranslatorcb_55(bind)
Local
end
def trans_AmethystTranslatorcb_56(bind)
"it=bind[:#{@src.desc}]"
end
def trans_AmethystTranslatorcb_57(bind)
Pass
end
def trans_AmethystTranslatorcb_58(bind)
'next'
end
def trans_AmethystTranslatorcb_59(bind)
@src.to
end
def trans_AmethystTranslatorcb_6(bind)
@src.rules
end
def trans_AmethystTranslatorcb_60(bind)
@src.var
end
def trans_AmethystTranslatorcb_61(bind)
@src.enter
end
def trans_AmethystTranslatorcb_62(bind)
AmethystLambda.new(:AmethystTranslator_trans_lambda5,self,bind)
end
def trans_AmethystTranslatorcb_63(bind)
"it=_pass(#{!!bind[:enter_1]},#{bind[:var_1]}){#{bind[:to_1]}}"
end
def trans_AmethystTranslatorcb_64(bind)
Cut
end
def trans_AmethystTranslatorcb_65(bind)
"@cut=true;it"
end
def trans_AmethystTranslatorcb_66(bind)
Stop
end
def trans_AmethystTranslatorcb_67(bind)
"@stop=true;it"
end
def trans_AmethystTranslatorcb_7(bind)
"class #{bind[:name_1]} < #{bind[:parent_1]}\n#{bind[:body_1].sort}\nend\n"
end
def trans_AmethystTranslatorcb_8(bind)
Rule
end
def trans_AmethystTranslatorcb_9(bind)
@x; Local.resetnumbering  
end
def transfn_AmethystTranslatorcb_1(bind)
"proc{#{bind[:t_1]}}" 
end
def transs_AmethystTranslatorcb_1(bind)
[]
end
def transs_AmethystTranslatorcb_2(bind)
[]
end
def transs_AmethystTranslatorcb_3(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end

end


 require 'c/translator_c'
