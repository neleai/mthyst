#@Or_AST and @Seq are necessary for collect
#CurrentParser[:implicit_variables]=true
CurrentParser[:memoize]=["argsOpt","name"]
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
def AmethystParser_Apply_lb__dq_c_5c74(bind)
Apply["clas",bind[0]]

end
def AmethystParser_Apply_lb__dq_m_cb65(bind)
Apply["member",bind[8].to_s]

end
def AmethystParser_Apply_lb__dq_r_1a54(bind)
Apply["regch","/["+bind[14]+"]/"]

end
def AmethystParser_Apply_lb__dq_s_22c0(bind)
Apply["seq"   ,quote(bind[7])]

end
def AmethystParser_Apply_lb__dq_t_3d7c(bind)
Apply["token" ,quote(bind[7])]

end
def AmethystParser_Apply_lb__lb_b_a4cc(bind)
Apply[[bind[0],bind[1]],bind[2]]

end
def AmethystParser_Apply_lb_bi_9146(bind)
Apply[bind[1],bind[2]]

end
def AmethystParser_Args_lb__le__co_a_34c4(bind)
Args[{:ary=>([bind[2]]+bind[9]+[bind[0]])}]

end
def AmethystParser_Args_lb__le__co_a_6fff(bind)
Args[{:ary=>([bind[9]]+bind[8]+[bind[10]])}]

end
def AmethystParser_Bind_lb_loc_eddf(bind)
Bind[local("_result"),bind[3]]
end
def AmethystParser_Comment_lb__1c29(bind)
Comment[bind[7]]

end
def AmethystParser_Enter_lb_Ap_7f5a(bind)
Enter[Apply["anything"],bind[11]]

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
def AmethystParser_Lambda_lb_B_4765(bind)
Lambda[Bind[local("_result"),bind[24]]]

end
def AmethystParser_Lookahea_b11c(bind)
Lookahead[bind[5],bind[3]=="~"]

end
def AmethystParser_Many_lb_bin_33ac(bind)
Many[bind[0],bind[1]=="+"]

end
def AmethystParser_Nested_lb_b_f1a4(bind)
Nested[bind[2]]

end
def AmethystParser_Or_AST_dot_c_163b(bind)
Or_AST.create( {:ary=>bind[6] })
end
def AmethystParser_Or_AST_lb_b_1d9d(bind)
Or_AST[bind[0],Apply["empty"]]

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
def AmethystParser_Seq_lb_Bind_50cd(bind)
Seq[Bind[local("it"),bind[0]] , Act[bind[5]] ]

end
def AmethystParser_Seq_lb_Cut_lb__3505(bind)
Seq[Cut[],Stop[]]

end
def AmethystParser_Strin_lb__lb__dq__bc99(bind)
Strin[["'"+bind[17]+"'"]]

end
def AmethystParser_Strin_lb__lb__qu__5f8f(bind)
Strin[['"']+bind[17]+['"']]

end
def AmethystParser__append_lp__0639(bind)
_append(bind[12],bind[15])
end
def AmethystParser__append_lp__088f(bind)
_append(bind[4],bind[5])
end
def AmethystParser__append_lp__132b(bind)
_append(bind[19],bind[21])
end
def AmethystParser__append_lp__1484(bind)
_append(bind[0],bind[18])
end
def AmethystParser__append_lp__29a3(bind)
_append(bind[0],bind[2])
end
def AmethystParser__append_lp__4548(bind)
_append(bind[19],bind[20])
end
def AmethystParser__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
def AmethystParser__append_lp__66a2(bind)
_append(bind[0],bind[12])
end
def AmethystParser__append_lp__6adb(bind)
_append(bind[3],bind[5])
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
def AmethystParser__append_lp__81ec(bind)
_append(bind[0],bind[5])
end
def AmethystParser__append_lp__984f(bind)
_append(bind[12],bind[14])
end
def AmethystParser__append_lp__9ca5(bind)
_append(bind[10],bind[11])
end
def AmethystParser__append_lp__9e15(bind)
_append(bind[2],bind[6])
end
def AmethystParser__append_lp__b2a5(bind)
_append(bind[0],bind[4])
end
def AmethystParser__append_lp__bab9(bind)
_append(bind[2],bind[5])
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
def AmethystParser__append_lp__dd73(bind)
_append(bind[3],bind[4])
end
def AmethystParser__append_lp__f8f8(bind)
_append(bind[0],bind[3])
end
def AmethystParser__at_appends_5d33(bind)
@appends<< local(bind[2]) if bind[3]; Bind[local(bind[2]),bind[0],bind[3]=='[]']

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
def AmethystParser__at_locals_eq__4fc1(bind)
@locals=[];@appends=[];@bnding=Bnding[]
end
def AmethystParser__at_tmp_lt__lt_bi_c4f3(bind)
@tmp<<bind[5]
end
def AmethystParser__dq__le__dq__pl_bind_567e(bind)
"{"+bind[1]+"}"
end
def AmethystParser__lb_bind_lb_24_09cc(bind)
[bind[24],'<<']

end
def AmethystParser__lp_bind_lb_0_rb__418b(bind)
(bind[0]==',') || FAIL
end
def AmethystParser_a_eq_autova_41ab(bind)
a=autovar; Seq[Or_AST[{:ary=>bind[9].ary.map{|ands| Seq[{:ary=>[Bind[a,Act["[]"]]]+ands.ary.map{|expr| Append[a,expr]}}]}}],a]

end
def AmethystParser_a_eq_autova_a27c(bind)
a=autovar; Seq[Or_AST[{:ary=>bind[0].ary.map{|ands| Seq[{:ary=>[Bind[a,Act["[]"]]]+ands.ary.map{|expr| Append[a,expr]}}]}}],a]

end
def AmethystParser_bind_lb_0_rb_(bind)
bind[0]

end
def AmethystParser_bind_lb_0_rb__dot__206f(bind)
bind[0].join

end
def AmethystParser_bind_lb_0_rb__dot__afad(bind)
bind[0].is_a?(String) ? (l=Local[bind[0],@bnding];@locals<<l;l) : bind[0]
end
def AmethystParser_bind_lb_10_rb__ed2a(bind)
bind[10].join

end
def AmethystParser_bind_lb_12_rb__b690(bind)
bind[12]

end
def AmethystParser_bind_lb_19_rb__7bbf(bind)
bind[19].join

end
def AmethystParser_bind_lb_2_rb_(bind)
bind[2]

end
def AmethystParser_bind_lb_3_rb__dot__e626(bind)
bind[3].join

end
def AmethystParser_bind_lb_3_rb__eq__bbe1(bind)
bind[3]=Seq[{:ary=>(@appends.uniq.map{|a| Bind[a,Act["[]"]]}+[bind[3]])}]; 
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
def AmethystParser_bind_lb_5_rb__dot__028b(bind)
bind[5].join
end
def AmethystParser_bind_lb_6_rb_(bind)
bind[6]

end
def AmethystParser_bind_lb_7_rb_(bind)
bind[7]

end
def AmethystParser_bind_lb_7_rb__dot__35cf(bind)
bind[7].join
end
def AmethystParser_local_lp_bi_4bf2(bind)
local(bind[4]) 
end

end


def parser_compiled_by
'fa5c5fa85ebaf89fb3c3a2ccdc088436'
end
def parser_source_hash
'6983ac61916c925faf70afbde6fa579d'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
'79bcf0059355dc834f95239d4f5a7169'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/parser_c"
