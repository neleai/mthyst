#@Or and @Seq are necessary for collect
#CurrentParser[:implicit_variables]=true

class AmethystParser < Amethyst

def AmethystParser_Act_lb_Args_245f(bind)
Act[Args[{:ary=>bind[4]}]]
end
def AmethystParser_Act_lb_bind_23ab(bind)
Act[bind[12]]
end
def AmethystParser_Apply_lb__dq_a_1437(bind)
Apply["anything"]

end
def AmethystParser_Apply_lb__dq_c_c518(bind)
Apply["clas",bind[17]]

end
def AmethystParser_Apply_lb__dq_m_d362(bind)
Apply["member",bind[16].to_s]

end
def AmethystParser_Apply_lb__dq_r_6064(bind)
Apply["regch","/["+bind[6]+"]/"]

end
def AmethystParser_Apply_lb__dq_s_319b(bind)
Apply["seq"   ,quote(bind[2])]

end
def AmethystParser_Apply_lb__dq_t_c68e(bind)
Apply["token" ,quote(bind[2])]

end
def AmethystParser_Apply_lb__lb_b_a4cc(bind)
Apply[[bind[0],bind[1]],bind[2]]

end
def AmethystParser_Apply_lb_bi_9146(bind)
Apply[bind[1],bind[2]]

end
def AmethystParser_Args_lb__le__co_a_4968(bind)
Args[{:ary=>([bind[2]]+bind[3]+[bind[1]])}]

end
def AmethystParser_Args_lb__le__co_a_defb(bind)
Args[{:ary=>([bind[4]]+bind[5]+[bind[3]])}]

end
def AmethystParser_Args_lb__le__co_a_f34c(bind)
Args[{:ary=>([bind[0]]+bind[2]+[bind[1]])}]

end
def AmethystParser_Comment_lb__b447(bind)
Comment[bind[2]]

end
def AmethystParser_Enter_lb_Ap_57b6(bind)
Enter[Apply["anything"],bind[13]]

end
def AmethystParser_Enter_lb_bi_822a(bind)
Enter[bind[0],bind[2]]

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
def AmethystParser_Lambda_lb___012f(bind)
Lambda[_body(bind[21])]

end
def AmethystParser_Lookahea_b11c(bind)
Lookahead[bind[5],bind[3]=="~"]

end
def AmethystParser_Many_lb_bin_33ac(bind)
Many[bind[0],bind[1]=="+"]

end
def AmethystParser_Nested_lb_b_e419(bind)
Nested[bind[3]]

end
def AmethystParser_Or_dot_creat_67f0(bind)
Or.create( {:ary=>bind[6] })
end
def AmethystParser_Or_lb_bind_lb__cb4a(bind)
Or[bind[0],Apply["empty"]]

end
def AmethystParser_Pass_lb_bin_6bdb(bind)
Pass[bind[0],bind[2]] 

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
def AmethystParser_Seq_lb__Bin_7997(bind)
Seq[_Bind("it",bind[0]) , Act[bind[2]] ]

end
def AmethystParser_Strin_lb__lb__dq__b2a2(bind)
Strin[["'"+bind[15]+"'"]]

end
def AmethystParser_Strin_lb__lb__qu__e4e6(bind)
Strin[['"']+bind[15]+['"']]

end
def AmethystParser__Bind_lp_bi_2082(bind)
_Bind(bind[3],bind[0],bind[4]=='[]')

end
def AmethystParser__Local_lp_b_cc09(bind)
_Local(bind[4]) 
end
def AmethystParser__append_lp__0605(bind)
_append(bind[0],bind[16])
end
def AmethystParser__append_lp__088f(bind)
_append(bind[4],bind[5])
end
def AmethystParser__append_lp__0d6a(bind)
_append(bind[1],bind[4])
end
def AmethystParser__append_lp__0eeb(bind)
_append(bind[0],bind[8])
end
def AmethystParser__append_lp__283c(bind)
_append(bind[10],bind[13])
end
def AmethystParser__append_lp__324d(bind)
_append(bind[8],bind[13])
end
def AmethystParser__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
def AmethystParser__append_lp__595b(bind)
_append(bind[17],bind[19])
end
def AmethystParser__append_lp__653e(bind)
_append(bind[0],bind[9])
end
def AmethystParser__append_lp__6ac6(bind)
_append(bind[0],bind[7])
end
def AmethystParser__append_lp__7352(bind)
_append(bind[4],bind[7])
end
def AmethystParser__append_lp__8061(bind)
_append(bind[1],bind[3])
end
def AmethystParser__append_lp__81ec(bind)
_append(bind[0],bind[5])
end
def AmethystParser__append_lp__835a(bind)
_append(bind[17],bind[18])
end
def AmethystParser__append_lp__9707(bind)
_append(bind[8],bind[12])
end
def AmethystParser__append_lp__9ca5(bind)
_append(bind[10],bind[11])
end
def AmethystParser__append_lp__9e15(bind)
_append(bind[2],bind[6])
end
def AmethystParser__append_lp__b0ba(bind)
_append(bind[8],bind[14])
end
def AmethystParser__append_lp__b2a5(bind)
_append(bind[0],bind[4])
end
def AmethystParser__append_lp__b494(bind)
_append(bind[0],bind[10])
end
def AmethystParser__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def AmethystParser__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def AmethystParser__append_lp__d43a(bind)
_append(bind[10],bind[12])
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
def AmethystParser__lb_bind_lb_21_9dcf(bind)
[bind[21],'<<']

end
def AmethystParser__lp_bind_lb_0_rb__418b(bind)
(bind[0]==',') || FAIL
end
def AmethystParser__qu__sh__le__qu__9722(bind)
'#{'
end
def AmethystParser_a_eq_autova_8222(bind)
a=autovar; Seq[Or[{:ary=>bind[10].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]

end
def AmethystParser_a_eq_autova_91af(bind)
a=autovar; Seq[Or[{:ary=>bind[0].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]

end
def AmethystParser_bind_lb_0_rb_(bind)
bind[0]

end
def AmethystParser_bind_lb_0_rb__dot__206f(bind)
bind[0].join

end
def AmethystParser_bind_lb_10_rb__ff8c(bind)
bind[10]

end
def AmethystParser_bind_lb_15_rb__9e16(bind)
bind[15].join
end
def AmethystParser_bind_lb_17_rb__8424(bind)
bind[17].join

end
def AmethystParser_bind_lb_1_rb__dot__e879(bind)
bind[1].join

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
def AmethystParser_bind_lb_4_rb__dot__1e8d(bind)
bind[4].join

end
def AmethystParser_bind_lb_4_rb__dot__e4b4(bind)
bind[4].join
end
def AmethystParser_bind_lb_4_rb__pl__13b0(bind)
bind[4]+[',']
end
def AmethystParser_bind_lb_5_rb__dot__028b(bind)
bind[5].join
end

end


def parser_compiled_by
'6aade4b84662abe83e3e537e6d8b7487'
end
def parser_source_hash
'a0cdb248b8cbeb5e29087e288a27e49c'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
'834882d7fc629a7bacb3fca23a5bd314'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/parser_c"
