def connectstring(ary)
	r=[]
	s=nil
	ary.each{|a|
		if a.is_a? String
			s||=""
			s+=a
		else
			r<<s if s
			s=nil
			r<<a
		end
	}
	r<<s if s
	r
end

#@Or and @Seq are necessary for collect

class AmethystParser < Amethyst

def AmethystParser_Act_lb_Args_140b(bind)
Act[Args[bind[7]]]
end
def AmethystParser_Act_lb_bind_3e5d(bind)
Act[bind[3]]
end
def AmethystParser_Apply_lb__dq_a_eeac(bind)
Apply["anything"]
end
def AmethystParser_Apply_lb__dq_c_efc7(bind)
Apply["clas",bind[4]]
end
def AmethystParser_Apply_lb__dq_e_84a7(bind)
Apply["exactly",bind[7]]
end
def AmethystParser_Apply_lb__dq_r_7dcf(bind)
Apply["regch","/[#{bind[3]*""}]/"]
end
def AmethystParser_Apply_lb__dq_r_8a32(bind)
Apply["range_in",bind[12],bind[13]]
end
def AmethystParser_Apply_lb__dq_r_9307(bind)
Apply["range_ex",bind[12],bind[13]]
end
def AmethystParser_Apply_lb__dq_s_e377(bind)
Apply["seq"   ,quote(bind[0])]
end
def AmethystParser_Apply_lb__dq_t_f6cb(bind)
Apply["token" ,quote(bind[0])]
end
def AmethystParser_Apply_lb_bi_9e40(bind)
Apply[bind[4],bind[16]]
end
def AmethystParser_Args_lb__le__co_a_727b(bind)
Args[{:ary=>([bind[3]]+bind[4]+[bind[2]])}]
end
def AmethystParser_Args_lb__le__co_a_8e59(bind)
Args[{:ary=>([bind[1]]+bind[2]+[bind[0]])}]
end
def AmethystParser_Args_lb__le__co_a_8ff0(bind)
Args[{:ary=>([bind[0]]+bind[2]+[bind[1]])}]
end
def AmethystParser_Comment_lb__ff7a(bind)
Comment[bind[5]]
end
def AmethystParser_Exp_lb__bod_727d(bind)
Exp[_body(bind[20])]
end
def AmethystParser_Global_lb_b_5e6a(bind)
Global[bind[0]]
end
def AmethystParser_Grammar_dot__80c6(bind)
Grammar.create( {:name=>bind[0],:parent=>bind[1],:rules=>bind[4] })
end
def AmethystParser_Key_lb_bind_41d1(bind)
Key[bind[0]]
end
def AmethystParser_Lookahea_8dff(bind)
Lookahead[bind[5],bind[4]=="~"]
end
def AmethystParser_Many_lb_bin_8cb5(bind)
Many[bind[6],bind[8]=="+"]
end
def AmethystParser_Nested_lb_b_be01(bind)
Nested[bind[6]]
end
def AmethystParser_Or_dot_creat_67f0(bind)
Or.create( {:ary=>bind[6] })
end
def AmethystParser_Or_lb_bind_lb__b09f(bind)
Or[bind[6],Apply["empty"]]
end
def AmethystParser_Pass_lb_bin_5be3(bind)
Pass[bind[6],bind[13]]
end
def AmethystParser_Pred_lb_bin_c1a5(bind)
Pred[bind[0]]
end
def AmethystParser_Result_lb__le__834d(bind)
Result[{:name=>bind[0],:vars=>Object.const_get(bind[0]).instance_variable_get(:@attrs)}]
end
def AmethystParser_Rule_dot_cre_e3af(bind)
Rule.create( {:args=>bind[2],:bnding=>bind[0],:body=>bind[3],:locals=>bind[4],:name=>bind[1] })
end
def AmethystParser_Seq_dot_crea_abce(bind)
Seq.create( {:ary=>bind[2] })
end
def AmethystParser_Seq_lb_Cut_lb__44e6(bind)
Seq[Cut[],Stop[]]
end
def AmethystParser_Seq_lb__Bin_9066(bind)
Seq[_Bind("it",bind[6]) , Act[bind[12]] ]
end
def AmethystParser_Strin_lb_co_86e5(bind)
Strin[connectstring(bind[0])]
end
def AmethystParser__Bind_lp_bi_186a(bind)
_Bind(bind[10],bind[6],bind[11]=='[]')
end
def AmethystParser__Local_lp_b_a39a(bind)
_Local(bind[3]) 
end
def AmethystParser__append_lp__01d0(bind)
_append(bind[1],bind[9])
end
def AmethystParser__append_lp__0605(bind)
_append(bind[0],bind[16])
end
def AmethystParser__append_lp__0e08(bind)
_append(bind[0],bind[19])
end
def AmethystParser__append_lp__0eeb(bind)
_append(bind[0],bind[8])
end
def AmethystParser__append_lp__1023(bind)
_append(bind[1],bind[6])
end
def AmethystParser__append_lp__29a3(bind)
_append(bind[0],bind[2])
end
def AmethystParser__append_lp__2bd5(bind)
_append(bind[3],bind[18])
end
def AmethystParser__append_lp__40ba(bind)
_append(bind[1],bind[11])
end
def AmethystParser__append_lp__473a(bind)
_append(bind[13],bind[14])
end
def AmethystParser__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
def AmethystParser__append_lp__4f82(bind)
_append(bind[7],bind[9])
end
def AmethystParser__append_lp__54e8(bind)
_append(bind[16],bind[17])
end
def AmethystParser__append_lp__66a2(bind)
_append(bind[0],bind[12])
end
def AmethystParser__append_lp__6f56(bind)
_append(bind[5],bind[6])
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
def AmethystParser__append_lp__835a(bind)
_append(bind[17],bind[18])
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
def AmethystParser__append_lp__be4f(bind)
_append(bind[1],bind[10])
end
def AmethystParser__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def AmethystParser__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def AmethystParser__append_lp__d472(bind)
_append(bind[6],bind[7])
end
def AmethystParser__append_lp__dd73(bind)
_append(bind[3],bind[4])
end
def AmethystParser__append_lp__f46e(bind)
_append(bind[2],bind[11])
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
def AmethystParser__at_tmp_lt__lt_bi_2afb(bind)
@tmp<<bind[6]
end
def AmethystParser__body_lp_bi_152d(bind)
_body(bind[3])
end
def AmethystParser__di__lb_(bind)
/[^`{}()'"\[\]]/
end
def AmethystParser__di__lb_A_mi_Z_rb__di__05b6(bind)
/[A-Z]/
end
def AmethystParser__di__lb__a_mi_zA_mi__6e11(bind)
/[_a-zA-Z0-9]/
end
def AmethystParser__di__lb__a_mi_zA_mi__d9bf(bind)
/[_a-zA-Z]/
end
def AmethystParser__di__lb__do__dot__co__rb__di__68eb(bind)
/[$.:]/
end
def AmethystParser__di__lb__dot__co__bs__lb__rb__di__d117(bind)
/[.:\[]/
end
def AmethystParser__dq__bs__bs__sh__le_bin_d412(bind)
"\\#{bind[7]}"
end
def AmethystParser__dq__le__sh__le_bind_8330(bind)
"{#{bind[2]*""}}"
end
def AmethystParser__dq__sh__dq__b65f(bind)
"#"
end
def AmethystParser__lb_Args_lb__le__co__7a9f(bind)
[Args[{:ary=>bind[4]}]]
end
def AmethystParser__lb_bind_lb_3_rb__d9c4(bind)
[bind[3],bind[4]]
end
def AmethystParser__lp_bind_lb_1_rb__a724(bind)
(bind[1]==',') || FAIL
end
def AmethystParser__lp_bind_lb_5_rb__7170(bind)
(bind[5].is_a? String ) || FAIL
end
def AmethystParser__qu__sh__qu__pl__qu__le__qu__b26e(bind)
'#'+'{'
end
def AmethystParser_a_eq_autova_a420(bind)
a=autovar.normalize; Seq[Or[{:ary=>bind[19].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]
end
def AmethystParser_a_eq_autova_ae6e(bind)
a=autovar.normalize; Seq[Or[{:ary=>bind[0].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]
end
def AmethystParser_bind_lb_0_rb__sp__f8b9(bind)
bind[0] || []
end
def AmethystParser_bind_lb_10_rb__6884(bind)
bind[10]+[',']
end
def AmethystParser_bind_lb_11_rb__37a8(bind)
bind[11]+[',']
end
def AmethystParser_bind_lb_1_rb__eq__4ab4(bind)
bind[1]="Amethyst"
end
def AmethystParser_bind_lb_1_rb__ti__cfcb(bind)
bind[1]*""
end
def AmethystParser_bind_lb_3_rb__eq__507c(bind)
bind[3]=Seq[{:ary=>($appends.uniq.map{|a| _Bind(a,Act["[]"])}+[bind[3]])}]; 
end
def AmethystParser_bind_lb_4_rb__pl__13b0(bind)
bind[4]+[',']
end
def AmethystParser_bind_lb_4_rb__ti__18da(bind)
bind[4]*""
end
def AmethystParser_bind_lb_5_rb__pl__5627(bind)
bind[5]+[',']
end
def AmethystParser_bind_lb_5_rb__ti__66be(bind)
bind[5]*""
end
def AmethystParser_bind_lb_6_rb__eq__9525(bind)
bind[6]=Enter[bind[6],bind[13]]
end
def AmethystParser_bind_lb_9_rb__pl__82ef(bind)
bind[9]+[',']
end

end


def parser_compiled_by
'a88b0f0806a006c35cbab57e40d9dc96'
end
def parser_source_hash
'f238318b60ab5954d743395b0cab9ad9'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
'887eb516366494682b9e2c332dce8595'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/parser_c"
