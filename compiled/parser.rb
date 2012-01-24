#@Or and @Seq are necessary for collect
#CurrentParser[:implicit_variables]=true

class AmethystParser < Amethyst

def AmethystParser_Act_lb_Args_245f(bind)
Act[Args[{:ary=>bind[4]}]]
end
def AmethystParser_Act_lb_bind_3e5d(bind)
Act[bind[3]]
end
def AmethystParser_Apply_lb__dq_a_1437(bind)
Apply["anything"]

end
def AmethystParser_Apply_lb__dq_c_5c74(bind)
Apply["clas",bind[0]]

end
def AmethystParser_Apply_lb__dq_m_daa5(bind)
Apply["member",bind[4].join]

end
def AmethystParser_Apply_lb__dq_r_1a1d(bind)
Apply["regch","/["+bind[11]+"]/"]

end
def AmethystParser_Apply_lb__dq_s_e39b(bind)
Apply["seq"   ,quote(bind[9])]

end
def AmethystParser_Apply_lb__dq_t_6e68(bind)
Apply["token" ,quote(bind[9])]

end
def AmethystParser_Apply_lb__lb_b_a4cc(bind)
Apply[[bind[0],bind[1]],bind[2]]

end
def AmethystParser_Apply_lb_bi_9146(bind)
Apply[bind[1],bind[2]]

end
def AmethystParser_Args_lb__le__co_a_defb(bind)
Args[{:ary=>([bind[4]]+bind[5]+[bind[3]])}]

end
def AmethystParser_Args_lb__le__co_a_f34c(bind)
Args[{:ary=>([bind[0]]+bind[2]+[bind[1]])}]

end
def AmethystParser_Comment_lb__3377(bind)
Comment[bind[9]]

end
def AmethystParser_Enter_lb_Ap_3fc4(bind)
Enter[Apply["anything"],bind[2]]

end
def AmethystParser_Enter_lb_bi_1b7a(bind)
Enter[bind[0],bind[1]]

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
def AmethystParser_Lambda_lb___a752(bind)
Lambda[_body(bind[1])]

end
def AmethystParser_Lookahea_b36e(bind)
Lookahead[bind[4],bind[1]=="~"]

end
def AmethystParser_Many_lb_bin_15c0(bind)
Many[bind[0],bind[2]=="+"]

end
def AmethystParser_Nested_lb_b_7d5e(bind)
Nested[bind[0]]

end
def AmethystParser_Or_dot_creat_845c(bind)
Or.create( {:ary=>bind[7] })
end
def AmethystParser_Or_lb_bind_lb__cb4a(bind)
Or[bind[0],Apply["empty"]]

end
def AmethystParser_Pass_lb_bin_562a(bind)
Pass[bind[0],bind[1]] 

end
def AmethystParser_Pred_lb_bin_336a(bind)
Pred[bind[2][0],bind[1]=="~"]

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
def AmethystParser_Seq_lb__Bin_1c84(bind)
Seq[_Bind("it",bind[0]) , Act[bind[1]] ]

end
def AmethystParser_Strin_lb__lb__dq__66fc(bind)
Strin[["'"+bind[13]+"'"]]

end
def AmethystParser_Strin_lb__lb__qu__15ed(bind)
Strin[['"']+bind[13]+['"']]

end
def AmethystParser__Bind_lp_bi_00ea(bind)
_Bind(bind[3],bind[0],bind[5]=='[]')

end
def AmethystParser__Local_lp_b_cc09(bind)
_Local(bind[4]) 
end
def AmethystParser__append_lp__0e08(bind)
_append(bind[0],bind[19])
end
def AmethystParser__append_lp__1c46(bind)
_append(bind[7],bind[10])
end
def AmethystParser__append_lp__29a3(bind)
_append(bind[0],bind[2])
end
def AmethystParser__append_lp__2bc4(bind)
_append(bind[0],bind[21])
end
def AmethystParser__append_lp__37c5(bind)
_append(bind[6],bind[8])
end
def AmethystParser__append_lp__4584(bind)
_append(bind[7],bind[11])
end
def AmethystParser__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
def AmethystParser__append_lp__50ed(bind)
_append(bind[14],bind[16])
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
def AmethystParser__append_lp__9e15(bind)
_append(bind[2],bind[6])
end
def AmethystParser__append_lp__a474(bind)
_append(bind[14],bind[15])
end
def AmethystParser__append_lp__b2a5(bind)
_append(bind[0],bind[4])
end
def AmethystParser__append_lp__b494(bind)
_append(bind[0],bind[10])
end
def AmethystParser__append_lp__b6c7(bind)
_append(bind[7],bind[8])
end
def AmethystParser__append_lp__b7de(bind)
_append(bind[6],bind[9])
end
def AmethystParser__append_lp__b9cb(bind)
_append(bind[4],bind[6])
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
def AmethystParser__lb_bind_lb_1_rb__6281(bind)
[bind[1],'<<']

end
def AmethystParser__lp_bind_lb_0_rb__418b(bind)
(bind[0]==',') || FAIL
end
def AmethystParser__qu__sh__le__qu__9722(bind)
'#{'
end
def AmethystParser_a_eq_autova_7ead(bind)
a=autovar; Seq[Or[{:ary=>bind[12].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]

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
def AmethystParser_bind_lb_14_rb__88ad(bind)
bind[14].join

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
def AmethystParser_bind_lb_6_rb__dot__7ac7(bind)
bind[6].join

end
def AmethystParser_bind_lb_7_rb_(bind)
bind[7]

end

end


def parser_compiled_by
'73930f7e66924ef44a2d95b23429401c'
end
def parser_source_hash
'26066aa8bfcbc2bed77ea540e666faf6'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
'cfebbc0259ac269331f387cf9947a5f3'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/parser_c"
