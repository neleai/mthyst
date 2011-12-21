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

def AmethystParser_Act_lb_Args_lb_bin(bind)
Act[Args[bind[7]]]
end
def AmethystParser_Act_lb_bind_lb_3_rb__rb_(bind)
Act[bind[3]]
end
def AmethystParser_Apply_lb__dq_anyth(bind)
Apply["anything"]
end
def AmethystParser_Apply_lb__dq_clas_dq_(bind)
Apply["clas",bind[4]]
end
def AmethystParser_Apply_lb__dq_exact(bind)
Apply["exactly",bind[7]]
end
def AmethystParser_Apply_lb__dq_range(bind)
Apply["range_ex",bind[12],bind[13]]
end
def AmethystParser_Apply_lb__dq_range2(bind)
Apply["range_in",bind[12],bind[13]]
end
def AmethystParser_Apply_lb__dq_regch(bind)
Apply["regch","/[#{bind[3]*""}]/"]
end
def AmethystParser_Apply_lb__dq_seq_dq__sp_(bind)
Apply["seq"   ,quote(bind[0])]
end
def AmethystParser_Apply_lb__dq_token(bind)
Apply["token" ,quote(bind[0])]
end
def AmethystParser_Apply_lb_bind_lb_4(bind)
Apply[bind[4],bind[16]]
end
def AmethystParser_Args_lb__le__co_ary_eq__gt_(bind)
Args[{:ary=>([bind[1]]+bind[2]+[bind[0]])}]
end
def AmethystParser_Args_lb__le__co_ary_eq__gt_2(bind)
Args[{:ary=>([bind[0]]+bind[2]+[bind[1]])}]
end
def AmethystParser_Args_lb__le__co_ary_eq__gt_3(bind)
Args[{:ary=>([bind[3]]+bind[4]+[bind[2]])}]
end
def AmethystParser_Comment_lb_bind(bind)
Comment[bind[5]]
end
def AmethystParser_Exp_lb__body_lp_bi(bind)
Exp[_body(bind[20])]
end
def AmethystParser_Global_lb_bind_lb_(bind)
Global[bind[0]]
end
def AmethystParser_Grammar_dot_crea(bind)
Grammar.create( {:name=>bind[0],:parent=>bind[1],:rules=>bind[4] })
end
def AmethystParser_Key_lb_bind_lb_0_rb__rb_(bind)
Key[bind[0]]
end
def AmethystParser_Lookahead_lb_bi(bind)
Lookahead[bind[5],bind[4]=="~"]
end
def AmethystParser_Many_lb_bind_lb_6_rb_(bind)
Many[bind[6],bind[8]=="+"]
end
def AmethystParser_Nested_lb_bind_lb_(bind)
Nested[bind[6]]
end
def AmethystParser_Or_dot_create_lp__sp__le_(bind)
Or.create( {:ary=>bind[6] })
end
def AmethystParser_Or_lb_bind_lb_6_rb_(bind)
Or[bind[6],Apply["empty"]]
end
def AmethystParser_Pass_lb_bind_lb_6_rb_(bind)
Pass[bind[6],bind[13]]
end
def AmethystParser_Pred_lb_bind_lb_0_rb_(bind)
Pred[bind[0]]
end
def AmethystParser_Result_lb__le__co_nam(bind)
Result[{:name=>bind[0],:vars=>Object.const_get(bind[0]).instance_variable_get(:@attrs)}]
end
def AmethystParser_Rule_dot_create_lp_(bind)
Rule.create( {:args=>bind[2],:bnding=>bind[0],:body=>bind[3],:locals=>bind[4],:name=>bind[1] })
end
def AmethystParser_Seq_dot_create_lp__sp_(bind)
Seq.create( {:ary=>bind[2] })
end
def AmethystParser_Seq_lb_Cut_lb__rb_(bind)
Seq[Cut[],Stop[]]
end
def AmethystParser_Seq_lb__Bind_lp__dq_i(bind)
Seq[_Bind("it",bind[6]) , Act[bind[12]] ]
end
def AmethystParser_Strin_lb_connec(bind)
Strin[connectstring(bind[0])]
end
def AmethystParser__Bind_lp_bind_lb_1(bind)
_Bind(bind[10],bind[6],bind[11]=='[]')
end
def AmethystParser__Local_lp_bind_lb_(bind)
_Local(bind[3]) 
end
def AmethystParser__append_lp_bind(bind)
_append(bind[1],bind[2])
end
def AmethystParser__append_lp_bind10(bind)
_append(bind[1],bind[9])
end
def AmethystParser__append_lp_bind11(bind)
_append(bind[0],bind[10])
end
def AmethystParser__append_lp_bind12(bind)
_append(bind[2],bind[11])
end
def AmethystParser__append_lp_bind13(bind)
_append(bind[3],bind[18])
end
def AmethystParser__append_lp_bind14(bind)
_append(bind[16],bind[17])
end
def AmethystParser__append_lp_bind15(bind)
_append(bind[6],bind[7])
end
def AmethystParser__append_lp_bind16(bind)
_append(bind[1],bind[6])
end
def AmethystParser__append_lp_bind17(bind)
_append(bind[7],bind[8])
end
def AmethystParser__append_lp_bind18(bind)
_append(bind[5],bind[6])
end
def AmethystParser__append_lp_bind19(bind)
_append(bind[1],bind[10])
end
def AmethystParser__append_lp_bind2(bind)
_append(bind[1],bind[3])
end
def AmethystParser__append_lp_bind20(bind)
_append(bind[1],bind[11])
end
def AmethystParser__append_lp_bind21(bind)
_append(bind[0],bind[12])
end
def AmethystParser__append_lp_bind22(bind)
_append(bind[13],bind[14])
end
def AmethystParser__append_lp_bind23(bind)
_append(bind[0],bind[15])
end
def AmethystParser__append_lp_bind24(bind)
_append(bind[0],bind[16])
end
def AmethystParser__append_lp_bind25(bind)
_append(bind[17],bind[18])
end
def AmethystParser__append_lp_bind26(bind)
_append(bind[0],bind[19])
end
def AmethystParser__append_lp_bind27(bind)
_append(bind[0],bind[2])
end
def AmethystParser__append_lp_bind3(bind)
_append(bind[0],bind[5])
end
def AmethystParser__append_lp_bind4(bind)
_append(bind[2],bind[3])
end
def AmethystParser__append_lp_bind5(bind)
_append(bind[0],bind[1])
end
def AmethystParser__append_lp_bind6(bind)
_append(bind[0],bind[4])
end
def AmethystParser__append_lp_bind7(bind)
_append(bind[7],bind[9])
end
def AmethystParser__append_lp_bind8(bind)
_append(bind[3],bind[4])
end
def AmethystParser__append_lp_bind9(bind)
_append(bind[0],bind[8])
end
def AmethystParser__at_ary(bind)
@ary
end
def AmethystParser__at_ary_eq__lb__rb_(bind)
@ary=[];@tmp=[]
end
def AmethystParser__at_ary_lt__lt_Args_lb__le_(bind)
@ary<<Args[{:ary=>@tmp}];@tmp=[]
end
def AmethystParser__at_bnding(bind)
@bnding
end
def AmethystParser__at_locals_dot_uniq(bind)
@locals.uniq
end
def AmethystParser__at_locals_eq__lb__rb_(bind)
@locals=[];$appends=[];@bnding=Bnding[]
end
def AmethystParser__at_tmp_lt__lt_bind_lb_6(bind)
@tmp<<bind[6]
end
def AmethystParser__body_lp_bind_lb_3(bind)
_body(bind[3])
end
def AmethystParser__di__lb_(bind)
/[^`{}()'"\[\]]/
end
def AmethystParser__di__lb__do__dot__co__rb__di_(bind)
/[$.:]/
end
def AmethystParser__di__lb__dot__co__bs__lb__rb__di_(bind)
/[.:\[]/
end
def AmethystParser__dq__bs__bs__sh__le_bind_lb_7_rb_(bind)
"\\#{bind[7]}"
end
def AmethystParser__dq__le__sh__le_bind_lb_2_rb__ti_(bind)
"{#{bind[2]*""}}"
end
def AmethystParser__dq__sh__dq_(bind)
"#"
end
def AmethystParser__lb_Args_lb__le__co_ary_eq_(bind)
[Args[{:ary=>bind[4]}]]
end
def AmethystParser__lb_bind_lb_3_rb_(bind)
[bind[3],bind[4]]
end
def AmethystParser__lp_bind_lb_1_rb__eq__eq__qu_(bind)
(bind[1]==',') || FAIL
end
def AmethystParser__lp_bind_lb_5_rb__dot_is_(bind)
(bind[5].is_a? String ) || FAIL
end
def AmethystParser__qu__sh__qu__pl__qu__le__qu_(bind)
'#'+'{'
end
def AmethystParser_a_eq_autovar_dot_no(bind)
a=autovar.normalize; Seq[Or[{:ary=>bind[19].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]
end
def AmethystParser_a_eq_autovar_dot_no2(bind)
a=autovar.normalize; Seq[Or[{:ary=>bind[0].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]
end
def AmethystParser_bind_lb_0_rb__sp_(bind)
bind[0] || []
end
def AmethystParser_bind_lb_10_rb__pl__lb__qu_(bind)
bind[10]+[',']
end
def AmethystParser_bind_lb_11_rb__pl__lb__qu_(bind)
bind[11]+[',']
end
def AmethystParser_bind_lb_1_rb__eq__dq_Ame(bind)
bind[1]="Amethyst"
end
def AmethystParser_bind_lb_1_rb__ti__dq__dq_(bind)
bind[1]*""
end
def AmethystParser_bind_lb_3_rb__eq_Seq_lb_(bind)
bind[3]=Seq[{:ary=>($appends.uniq.map{|a| _Bind(a,Act["[]"])}+[bind[3]])}]; 
end
def AmethystParser_bind_lb_4_rb__pl__lb__qu_(bind)
bind[4]+[',']
end
def AmethystParser_bind_lb_4_rb__ti__dq__dq_(bind)
bind[4]*""
end
def AmethystParser_bind_lb_5_rb__pl__lb__qu_(bind)
bind[5]+[',']
end
def AmethystParser_bind_lb_6_rb__eq_Ente(bind)
bind[6]=Enter[bind[6],bind[13]]
end
def AmethystParser_bind_lb_9_rb__pl__lb__qu_(bind)
bind[9]+[',']
end
def AmethystParser_leterize_lp_bin(bind)
leterize(bind[5]*"")
end

end


def parser_compiled_by
'472138cdffc8d639efb367af8b54ad09'
end
def parser_source_hash
'd42fe4aa3225aa96c76be80299bbcc6b'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
'05882d77c7d379b3fa7f707342f644a9'
end
  require 'compiled/parser_c'
