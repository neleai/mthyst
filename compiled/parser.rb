#@Or and @Seq are necessary for collect
#CurrentParser[:implicit_variables]=true

class AmethystParser < Amethyst

def AmethystParser_Act_lb_Args_245f(bind)
Act[Args[{:ary=>bind[4]}]]
end
def AmethystParser_Act_lb_bind_7d0b(bind)
Act[bind[1]]
end
def AmethystParser_Apply_lb__dq_a_1437(bind)
Apply["anything"]

end
def AmethystParser_Apply_lb__dq_c_a8b6(bind)
Apply["clas",bind[1]]

end
def AmethystParser_Apply_lb__dq_m_fa7a(bind)
Apply["member",bind[7].to_s]

end
def AmethystParser_Apply_lb__dq_r_1507(bind)
Apply["regch","/["+bind[18]+"]/"]

end
def AmethystParser_Apply_lb__dq_s_7f45(bind)
Apply["seq"   ,quote(bind[3])]

end
def AmethystParser_Apply_lb__dq_t_b788(bind)
Apply["token" ,quote(bind[3])]

end
def AmethystParser_Apply_lb__lb_b_a4cc(bind)
Apply[[bind[0],bind[1]],bind[2]]

end
def AmethystParser_Apply_lb_bi_9146(bind)
Apply[bind[1],bind[2]]

end
def AmethystParser_Args_lb__le__co_a_189a(bind)
Args[{:ary=>([bind[2]]+bind[7]+[bind[1]])}]

end
def AmethystParser_Args_lb__le__co_a_ef61(bind)
Args[{:ary=>([bind[4]]+bind[10]+[bind[3]])}]

end
def AmethystParser_Args_lb__le__co_a_fc0c(bind)
Args[{:ary=>([bind[2]]+bind[8]+[bind[0]])}]

end
def AmethystParser_Comment_lb__f189(bind)
Comment[bind[3]]

end
def AmethystParser_Enter_lb_Ap_57b6(bind)
Enter[Apply["anything"],bind[13]]

end
def AmethystParser_Enter_lb_bi_68d7(bind)
Enter[bind[0],bind[5]]

end
def AmethystParser_Global_lb_b_8edb(bind)
Global[bind[0]]

end
def AmethystParser_Grammar_dot__80c6(bind)
Grammar.create( {:name=>bind[0],:parent=>bind[1],:rules=>bind[4] })
end
def AmethystParser_Key_lb_bind_20b7(bind)
Key[bind[0],bind[2]]

end
def AmethystParser_Lambda_lb___e59d(bind)
Lambda[_body(bind[27])]

end
def AmethystParser_Lookahea_b11c(bind)
Lookahead[bind[5],bind[3]=="~"]

end
def AmethystParser_Many_lb_bin_33ac(bind)
Many[bind[0],bind[1]=="+"]

end
def AmethystParser_Nested_lb_b_ab2c(bind)
Nested[bind[4]]

end
def AmethystParser_Or_dot_creat_67f0(bind)
Or.create( {:ary=>bind[6] })
end
def AmethystParser_Or_lb_bind_lb__cb4a(bind)
Or[bind[0],Apply["empty"]]

end
def AmethystParser_Pass_lb_bin_9af8(bind)
Pass[bind[0],bind[5]] 

end
def AmethystParser_Pred_lb_bin_4918(bind)
Pred[bind[4][0],bind[3]=="~"]

end
def AmethystParser_Result_lb__le__ae0e(bind)
Result[{:name=>bind[0]}]

end
def AmethystParser_Rule_dot_cre_e3af(bind)
Rule.create( {:args=>bind[2],:bnding=>bind[0],:body=>bind[3],:locals=>bind[4],:name=>bind[1] })
end
def AmethystParser_Seq_dot_crea_abce(bind)
Seq.create( {:ary=>bind[2] })
end
def AmethystParser_Seq_lb_Cut_lb__3505(bind)
Seq[Cut[],Stop[]]

end
def AmethystParser_Seq_lb__Bin_6d20(bind)
Seq[_Bind("it",bind[0]) , Act[bind[5]] ]

end
def AmethystParser_Strin_lb__lb__dq__41d8(bind)
Strin[["'"+bind[18]+"'"]]

end
def AmethystParser_Strin_lb__lb__qu__b1e7(bind)
Strin[['"']+bind[18]+['"']]

end
def AmethystParser__Bind_lp_bi_3fe9(bind)
_Bind(bind[2],bind[0],bind[3]=='[]')

end
def AmethystParser__Local_lp_b_cc09(bind)
_Local(bind[4]) 
end
def AmethystParser__append_lp__088f(bind)
_append(bind[4],bind[5])
end
def AmethystParser__append_lp__2bc4(bind)
_append(bind[0],bind[21])
end
def AmethystParser__append_lp__2d45(bind)
_append(bind[5],bind[8])
end
def AmethystParser__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def AmethystParser__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
def AmethystParser__append_lp__50ed(bind)
_append(bind[14],bind[16])
end
def AmethystParser__append_lp__66a2(bind)
_append(bind[0],bind[12])
end
def AmethystParser__append_lp__6f56(bind)
_append(bind[5],bind[6])
end
def AmethystParser__append_lp__7140(bind)
_append(bind[12],bind[13])
end
def AmethystParser__append_lp__73f1(bind)
_append(bind[0],bind[13])
end
def AmethystParser__append_lp__8061(bind)
_append(bind[1],bind[3])
end
def AmethystParser__append_lp__80de(bind)
_append(bind[0],bind[15])
end
def AmethystParser__append_lp__81ec(bind)
_append(bind[0],bind[5])
end
def AmethystParser__append_lp__89bf(bind)
_append(bind[23],bind[24])
end
def AmethystParser__append_lp__984f(bind)
_append(bind[12],bind[14])
end
def AmethystParser__append_lp__9e15(bind)
_append(bind[2],bind[6])
end
def AmethystParser__append_lp__a273(bind)
_append(bind[0],bind[22])
end
def AmethystParser__append_lp__a2a3(bind)
_append(bind[12],bind[16])
end
def AmethystParser__append_lp__a474(bind)
_append(bind[14],bind[15])
end
def AmethystParser__append_lp__b24c(bind)
_append(bind[23],bind[25])
end
def AmethystParser__append_lp__b2a5(bind)
_append(bind[0],bind[4])
end
def AmethystParser__append_lp__b494(bind)
_append(bind[0],bind[10])
end
def AmethystParser__append_lp__bc95(bind)
_append(bind[0],bind[11])
end
def AmethystParser__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def AmethystParser__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def AmethystParser__append_lp__d1e3(bind)
_append(bind[0],bind[20])
end
def AmethystParser__append_lp__d472(bind)
_append(bind[6],bind[7])
end
def AmethystParser__append_lp__dd73(bind)
_append(bind[3],bind[4])
end
def AmethystParser__at_ary_eq__lb__rb_(bind)
@ary=[];@tmp=[]
end
def AmethystParser__at_ary_ff69(bind)
@ary
end
def AmethystParser__at_ary_lt__lt_Ar_59e3(bind)
@ary<<Args[{:ary=>@tmp}];@tmp=[]
end
def AmethystParser__at_bnding_7d3c(bind)
@bnding
end
def AmethystParser__at_locals_dot__bdc6(bind)
@locals.uniq
end
def AmethystParser__at_locals_eq__94df(bind)
@locals=[];$appends=[];@bnding=Bnding[]
end
def AmethystParser__at_tmp_lt__lt_bi_c4f3(bind)
@tmp<<bind[5]
end
def AmethystParser__body_lp_bi_152d(bind)
_body(bind[3])
end
def AmethystParser__dq__le__dq__pl_bind_567e(bind)
"{"+bind[1]+"}"
end
def AmethystParser__dq__sh__dq__b65f(bind)
"#"
end
def AmethystParser__lb_bind_lb_27_275f(bind)
[bind[27],'<<']

end
def AmethystParser__lp_bind_lb_0_rb__418b(bind)
(bind[0]==',') || FAIL
end
def AmethystParser__qu__sh__le__qu__9722(bind)
'#{'
end
def AmethystParser_a_eq_autova_91af(bind)
a=autovar; Seq[Or[{:ary=>bind[0].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]

end
def AmethystParser_a_eq_autova_bae6(bind)
a=autovar; Seq[Or[{:ary=>bind[11].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]

end
def AmethystParser_bind_lb_0_rb_(bind)
bind[0]

end
def AmethystParser_bind_lb_0_rb__dot__206f(bind)
bind[0].join

end
def AmethystParser_bind_lb_12_rb__a8c2(bind)
bind[12].join
end
def AmethystParser_bind_lb_12_rb__b690(bind)
bind[12]

end
def AmethystParser_bind_lb_14_rb__88ad(bind)
bind[14].join

end
def AmethystParser_bind_lb_23_rb__7c7a(bind)
bind[23].join

end
def AmethystParser_bind_lb_2_rb_(bind)
bind[2]

end
def AmethystParser_bind_lb_3_rb__eq__507c(bind)
bind[3]=Seq[{:ary=>($appends.uniq.map{|a| _Bind(a,Act["[]"])}+[bind[3]])}]; 
end
def AmethystParser_bind_lb_4_rb_(bind)
bind[4]

end
def AmethystParser_bind_lb_4_rb__dot__e4b4(bind)
bind[4].join
end
def AmethystParser_bind_lb_4_rb__pl__13b0(bind)
bind[4]+[',']
end
def AmethystParser_bind_lb_5_rb_(bind)
bind[5]

end
def AmethystParser_bind_lb_5_rb__dot__028b(bind)
bind[5].join
end
def AmethystParser_bind_lb_5_rb__dot__bb1e(bind)
bind[5].join

end
def AmethystParser_bind_lb_6_rb_(bind)
bind[6]

end
def AmethystParser_bind_lb_8_rb_(bind)
bind[8]

end

end


def parser_compiled_by
'ca192381fe63462b460f447d35ad9f21'
end
def parser_source_hash
'054aa997ee4218b34b41be9004fe8d16'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
'260f332c306ada057decd2b6b7a4e951'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/parser_c"
