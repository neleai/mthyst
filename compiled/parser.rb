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

def AmethystParser_Act_lb_Args_245f(bind)
Act[Args[{:ary=>bind[4]}]]
end
def AmethystParser_Act_lb_bind_3e5d(bind)
Act[bind[3]]
end
def AmethystParser_Apply_lb__dq_a_1437(bind)
Apply["anything"]

end
def AmethystParser_Apply_lb__dq_c_6e5e(bind)
Apply["clas",bind[3]]

end
def AmethystParser_Apply_lb__dq_m_2ae7(bind)
Apply["member",bind[3]]
end
def AmethystParser_Apply_lb__dq_r_7fae(bind)
Apply["regch","/["+bind[1].join+"]/"]

end
def AmethystParser_Apply_lb__dq_r_ee57(bind)
Apply["range_in",bind[7],bind[8]]
end
def AmethystParser_Apply_lb__dq_r_f71c(bind)
Apply["range_ex",bind[7],bind[8]]
end
def AmethystParser_Apply_lb__dq_s_59f4(bind)
Apply["seq"   ,quote(bind[0])]

end
def AmethystParser_Apply_lb__dq_t_bf73(bind)
Apply["token" ,quote(bind[0])]

end
def AmethystParser_Apply_lb__lb_b_9fd2(bind)
Apply[[bind[3],bind[4]],bind[5]]

end
def AmethystParser_Apply_lb_bi_999a(bind)
Apply[bind[4],bind[5]]

end
def AmethystParser_Args_lb__le__co_a_37e6(bind)
Args[{:ary=>([bind[3]]+bind[4]+[bind[2]])}]

end
def AmethystParser_Args_lb__le__co_a_cb1b(bind)
Args[{:ary=>([bind[1]]+bind[2]+[bind[0]])}]

end
def AmethystParser_Args_lb__le__co_a_f34c(bind)
Args[{:ary=>([bind[0]]+bind[2]+[bind[1]])}]

end
def AmethystParser_Comment_lb__7f66(bind)
Comment[bind[13]]

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
def AmethystParser_Lambda_lb___9c37(bind)
Lambda[_body(bind[20])]

end
def AmethystParser_Lookahea_0dfa(bind)
Lookahead[bind[5],bind[2]=="~"]

end
def AmethystParser_Many_lb_bin_919d(bind)
Many[bind[2],bind[5]=="+"]
end
def AmethystParser_Nested_lb_b_ffed(bind)
Nested[bind[14]]

end
def AmethystParser_Or_dot_creat_67f0(bind)
Or.create( {:ary=>bind[6] })
end
def AmethystParser_Or_lb_bind_lb__1576(bind)
Or[bind[2],Apply["empty"]]
end
def AmethystParser_Pass_lb_bin_a4b6(bind)
Pass[bind[2],bind[3]]
end
def AmethystParser_Pred_lb_bin_bcee(bind)
Pred[bind[3][0],bind[2]=="~"]

end
def AmethystParser_Result_lb__le__5876(bind)
Result[{:name=>bind[0],:vars=>Object.const_get(bind[0]).instance_variable_get(:@attrs)}]

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
def AmethystParser_Seq_lb__Bin_730c(bind)
Seq[_Bind("it",bind[2]) , Act[bind[8]] ]
end
def AmethystParser_Strin_lb_co_0638(bind)
Strin[connectstring(bind[0])]

end
def AmethystParser__Bind_lp_bi_7990(bind)
_Bind(bind[6],bind[2],bind[7]=='[]')
end
def AmethystParser__Local_lp_b_cc09(bind)
_Local(bind[4]) 
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
def AmethystParser__append_lp__1484(bind)
_append(bind[0],bind[18])
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
def AmethystParser__append_lp__be4f(bind)
_append(bind[1],bind[10])
end
def AmethystParser__append_lp__be78(bind)
_append(bind[11],bind[12])
end
def AmethystParser__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def AmethystParser__append_lp__d113(bind)
_append(bind[1],bind[2])
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
def AmethystParser__dq__bs__bs__sh__le_bin_f4bd(bind)
"\\#{bind[7]}"

end
def AmethystParser__dq__le__dq__pl_bind_eece(bind)
"{"+bind[2].join+"}"
end
def AmethystParser__dq__sh__dq__b65f(bind)
"#"
end
def AmethystParser__lb__rb_(bind)
[]

end
def AmethystParser__lp_bind_lb_0_rb__418b(bind)
(bind[0]==',') || FAIL
end
def AmethystParser__lp_bind_lb_5_rb__7170(bind)
(bind[5].is_a? String ) || FAIL
end
def AmethystParser__qu__sh__qu__pl__qu__le__qu__b26e(bind)
'#'+'{'
end
def AmethystParser_a_eq_autova_91af(bind)
a=autovar; Seq[Or[{:ary=>bind[0].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]

end
def AmethystParser_a_eq_autova_c9d1(bind)
a=autovar; Seq[Or[{:ary=>bind[21].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]

end
def AmethystParser_bind_lb_0_rb_(bind)
bind[0]

end
def AmethystParser_bind_lb_0_rb__sp__f854(bind)
bind[0] || []

end
def AmethystParser_bind_lb_1_rb__dot__e879(bind)
bind[1].join

end
def AmethystParser_bind_lb_1_rb__eq__4ab4(bind)
bind[1]="Amethyst"
end
def AmethystParser_bind_lb_2_rb_(bind)
bind[2]

end
def AmethystParser_bind_lb_2_rb__eq__7e98(bind)
bind[2]=Enter[bind[2],bind[3]]
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
def AmethystParser_bind_lb_6_rb_(bind)
bind[6]

end
def AmethystParser_bind_lb_7_rb_(bind)
bind[7]

end
def AmethystParser_bind_lb_9_rb__pl__82ef(bind)
bind[9]+[',']
end

end


def parser_compiled_by
'a091c6f25d8fd84e0bc81d20682c9fc9'
end
def parser_source_hash
'98ac0aaa38cc473b262b1f8f42892bf2'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
'f77a6e27c29c83ec638df9c44b6a45a0'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/parser_c"
