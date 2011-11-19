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

def AmethystParser_(bind)
"#"
end
def AmethystParser_2(bind)
'#'+'{'
end
def AmethystParser_3(bind)
"\\#{bind[7]}"
end
def AmethystParser_4(bind)
"{#{bind[2]*""}}"
end
def AmethystParser_Act_lb_Args(bind)
Act[Args[bind[7]]]
end
def AmethystParser_Act_lb_bind(bind)
Act[bind[3]]
end
def AmethystParser_Apply_lb_(bind)
Apply["anything"]
end
def AmethystParser_Apply_lb_2(bind)
Apply["clas",bind[4]]
end
def AmethystParser_Apply_lb_3(bind)
Apply["token" ,quote(bind[0])]
end
def AmethystParser_Apply_lb_4(bind)
Apply["seq"   ,quote(bind[0])]
end
def AmethystParser_Apply_lb_5(bind)
Apply["exactly",bind[7]]
end
def AmethystParser_Apply_lb_6(bind)
Apply["regch","/[#{bind[3]*""}]/"]
end
def AmethystParser_Apply_lb_bi(bind)
Apply[bind[4],bind[16]]
end
def AmethystParser_Args_lb_(bind)
Args[{:ary=>([bind[1]]+bind[2]+[bind[0]])}]
end
def AmethystParser_Args_lb_2(bind)
Args[{:ary=>([bind[0]]+bind[2]+[bind[1]])}]
end
def AmethystParser_Args_lb_3(bind)
Args[{:ary=>([bind[3]]+bind[4]+[bind[2]])}]
end
def AmethystParser_Comment_lb_(bind)
Comment[bind[5]]
end
def AmethystParser_Exp_lb__bod(bind)
Exp[_body(bind[20])]
end
def AmethystParser_Global_lb_b(bind)
Global[bind[0]]
end
def AmethystParser_Grammar_dot_(bind)
Grammar.create( {:name=>bind[0],:parent=>bind[1],:rules=>bind[4] })
end
def AmethystParser_Key_lb_bind(bind)
Key[bind[0]]
end
def AmethystParser_Lookahea(bind)
Lookahead[bind[5],bind[4]=="~"]
end
def AmethystParser_Many_lb_bin(bind)
Many[bind[6],bind[8]=="+"]
end
def AmethystParser_Nested_lb_b(bind)
Nested[bind[6]]
end
def AmethystParser_Object_dot_c(bind)
Object.const_get(bind[0]).instance_variable_get(:@attrs)
end
def AmethystParser_Or_dot_creat(bind)
Or.create( {:ary=>bind[6] })
end
def AmethystParser_Or_lb_bind_lb_(bind)
Or[bind[6],Apply["empty"]]
end
def AmethystParser_Pass_lb_bin(bind)
Pass[bind[6],bind[13]]
end
def AmethystParser_Pred_lb_bin(bind)
Pred[bind[0]]
end
def AmethystParser_Result_lb_(bind)
Result[{:name=>bind[0],:vars=>bind[1]}]
end
def AmethystParser_Rule_dot_cre(bind)
Rule.create( {:args=>bind[2],:bnding=>bind[0],:body=>bind[3],:locals=>bind[4],:name=>bind[1] })
end
def AmethystParser_Seq_dot_crea(bind)
Seq.create( {:ary=>bind[2] })
end
def AmethystParser_Seq_lb_Cut_lb_(bind)
Seq[Cut[],Stop[]]
end
def AmethystParser_Seq_lb__Bin(bind)
Seq[_Bind("it",bind[6]) , Act[bind[12]] ]
end
def AmethystParser_Strin_lb_co(bind)
Strin[connectstring(bind[0])]
end
def AmethystParser__Bind_lp_bi(bind)
_Bind(bind[10],bind[6],bind[11]=='[]')
end
def AmethystParser__Local_lp_b(bind)
_Local(bind[3]) 
end
def AmethystParser__append_lp_(bind)
_append(bind[1],bind[2])
end
def AmethystParser__append_lp_10(bind)
_append(bind[1],bind[9])
end
def AmethystParser__append_lp_11(bind)
_append(bind[0],bind[10])
end
def AmethystParser__append_lp_12(bind)
_append(bind[2],bind[11])
end
def AmethystParser__append_lp_13(bind)
_append(bind[3],bind[16])
end
def AmethystParser__append_lp_14(bind)
_append(bind[14],bind[15])
end
def AmethystParser__append_lp_15(bind)
_append(bind[6],bind[7])
end
def AmethystParser__append_lp_16(bind)
_append(bind[1],bind[6])
end
def AmethystParser__append_lp_17(bind)
_append(bind[7],bind[8])
end
def AmethystParser__append_lp_18(bind)
_append(bind[5],bind[6])
end
def AmethystParser__append_lp_19(bind)
_append(bind[1],bind[10])
end
def AmethystParser__append_lp_2(bind)
_append(bind[1],bind[3])
end
def AmethystParser__append_lp_20(bind)
_append(bind[1],bind[11])
end
def AmethystParser__append_lp_21(bind)
_append(bind[0],bind[12])
end
def AmethystParser__append_lp_22(bind)
_append(bind[13],bind[14])
end
def AmethystParser__append_lp_23(bind)
_append(bind[0],bind[15])
end
def AmethystParser__append_lp_24(bind)
_append(bind[0],bind[16])
end
def AmethystParser__append_lp_25(bind)
_append(bind[17],bind[18])
end
def AmethystParser__append_lp_26(bind)
_append(bind[0],bind[19])
end
def AmethystParser__append_lp_27(bind)
_append(bind[0],bind[2])
end
def AmethystParser__append_lp_3(bind)
_append(bind[0],bind[5])
end
def AmethystParser__append_lp_4(bind)
_append(bind[2],bind[3])
end
def AmethystParser__append_lp_5(bind)
_append(bind[0],bind[1])
end
def AmethystParser__append_lp_6(bind)
_append(bind[0],bind[4])
end
def AmethystParser__append_lp_7(bind)
_append(bind[7],bind[9])
end
def AmethystParser__append_lp_8(bind)
_append(bind[3],bind[4])
end
def AmethystParser__append_lp_9(bind)
_append(bind[0],bind[8])
end
def AmethystParser__at_ary(bind)
@ary
end
def AmethystParser__at_ary_eq__lb__rb_(bind)
@ary=[];@tmp=[]
end
def AmethystParser__at_ary_lt__lt_Ar(bind)
@ary<<Args[{:ary=>@tmp}];@tmp=[]
end
def AmethystParser__at_bnding(bind)
@bnding
end
def AmethystParser__at_locals_dot_(bind)
@locals.uniq
end
def AmethystParser__at_locals_eq_(bind)
@locals=[];$appends=[];@bnding=Bnding[]
end
def AmethystParser__at_tmp_lt__lt_bi(bind)
@tmp<<bind[6]
end
def AmethystParser__body_lp_bi(bind)
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
def AmethystParser__lb_bind_lb_3_rb_(bind)
[bind[3],bind[4]]
end
def AmethystParser__lp_bind_lb_1_rb_(bind)
(bind[1]==',') || FAIL
end
def AmethystParser__lp_bind_lb_5_rb_(bind)
(bind[5].is_a? String ) || FAIL
end
def AmethystParser_a_eq_autova(bind)
a=autovar.normalize; Seq[Or[{:ary=>bind[17].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]
end
def AmethystParser_a_eq_autova2(bind)
a=autovar.normalize; Seq[Or[{:ary=>bind[0].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]
end
def AmethystParser_bind_lb_0_rb__sp_(bind)
bind[0] || []
end
def AmethystParser_bind_lb_10_rb_(bind)
bind[10]+[',']
end
def AmethystParser_bind_lb_10_rb_2(bind)
bind[10]=[bind[10]]
end
def AmethystParser_bind_lb_11_rb_(bind)
bind[11]=[bind[11]]
end
def AmethystParser_bind_lb_11_rb_2(bind)
bind[11]+[',']
end
def AmethystParser_bind_lb_12_rb_(bind)
bind[12]=[bind[12]]
end
def AmethystParser_bind_lb_1_rb__eq_(bind)
bind[1]="Amethyst"
end
def AmethystParser_bind_lb_1_rb__ti_(bind)
bind[1]*""
end
def AmethystParser_bind_lb_3_rb__eq_(bind)
bind[3]=Seq[{:ary=>($appends.uniq.map{|a| _Bind(a,Act["[]"])}+[bind[3]])}]; 
end
def AmethystParser_bind_lb_3_rb__eq_2(bind)
bind[3]=[bind[3]]
end
def AmethystParser_bind_lb_4_rb__pl_(bind)
bind[4]+[',']
end
def AmethystParser_bind_lb_4_rb__ti_(bind)
bind[4]*""
end
def AmethystParser_bind_lb_5_rb__eq_(bind)
bind[5]=[bind[5]]
end
def AmethystParser_bind_lb_5_rb__pl_(bind)
bind[5]+[',']
end
def AmethystParser_bind_lb_6_rb__eq_(bind)
bind[6]=Enter[bind[6],bind[13]]
end
def AmethystParser_bind_lb_6_rb__eq_2(bind)
bind[6]=[bind[6]]
end
def AmethystParser_bind_lb_9_rb__pl_(bind)
bind[9]+[',']
end
def AmethystParser_leterize(bind)
leterize(bind[5]*"")
end

end


def parser_compiled_by
'ddbd2ab2d5ab620699c741fb90acd2cb'
end
def parser_source_hash
'4dae726aff094ea1fab5dce8e1dbffd6'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
'9968ba705a27e661bfacd070eb3de41d'
end
  require 'compiled/parser_c'
