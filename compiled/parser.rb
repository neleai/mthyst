#@Or_AST and @Seq are necessary for collect
#CurrentParser[:implicit_variables]=true
CurrentParser[:memoize]=["argsOpt","name"]
class AmethystParser < Amethyst

def AmethystParser_Act_lb_Args_23b1(bind)
Act[Args[{:ary=>bind[1]}]]
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
def AmethystParser_Apply_lb__dq_m_2ec1(bind)
Apply["member",bind[1].to_s]

end
def AmethystParser_Apply_lb__dq_r_269c(bind)
Apply["regch","/["+bind[1]+"]/"]

end
def AmethystParser_Apply_lb__dq_s_9322(bind)
Apply["seq"   ,quote(bind[1])]

end
def AmethystParser_Apply_lb__dq_t_e958(bind)
Apply["token" ,quote(bind[1])]

end
def AmethystParser_Apply_lb__lb_b_099b(bind)
Apply[[bind[1],bind[2]],bind[3]]

end
def AmethystParser_Apply_lb_bi_9146(bind)
Apply[bind[1],bind[2]]

end
def AmethystParser_Args_lb__le__co_a_9abe(bind)
Args[{:ary=>([bind[1]]+bind[2]+[bind[3]])}]

end
def AmethystParser_Bind_lb_loc_37df(bind)
Bind[local("_result"),bind[1]]
end
def AmethystParser_Comment_lb__ed6f(bind)
Comment[bind[1]]

end
def AmethystParser_Contextu_32ad(bind)
Contextual_Return[bind[1]]

end
def AmethystParser_Contextu_4e8d(bind)
Contextual_Argument[bind[1]]

end
def AmethystParser_Enter_lb_Ap_7d1f(bind)
Enter[Apply["anything"],bind[1]]

end
def AmethystParser_Enter_lb_bi_9246(bind)
Enter[bind[1],bind[2]]

end
def AmethystParser_Global_lb_b_0216(bind)
Global[bind[1]]

end
def AmethystParser_Grammar_dot__a510(bind)
Grammar.create( {:name=>bind[1],:parent=>bind[2],:rules=>bind[3] })
end
def AmethystParser_Key_lb_bind_5e9f(bind)
Key[bind[1],bind[2]]

end
def AmethystParser_Lambda_lb_B_2c90(bind)
Lambda[Bind[local("_result"),bind[1]]]

end
def AmethystParser_Lookahea_0946(bind)
Lookahead[bind[1],bind[2]=="~"]

end
def AmethystParser_Many_lb_bin_14d1(bind)
Many[bind[1],bind[2]=="+"]

end
def AmethystParser_Nested_lb_b_1ac2(bind)
Nested[bind[1]]

end
def AmethystParser_Or_AST_dot_c_19e2(bind)
Or_AST.create( {:ary=>bind[1] })
end
def AmethystParser_Or_AST_lb_b_0657(bind)
Or_AST[bind[1],Apply["empty"]]

end
def AmethystParser_Parenthe_261b(bind)
Parenthesis[bind[1]]
end
def AmethystParser_Pass_lb_bin_2f93(bind)
Pass[bind[1],bind[2]] 

end
def AmethystParser_Pred_lb_bin_ae38(bind)
Pred[bind[1][0],bind[2]=="~"]

end
def AmethystParser_Result_lb__le__a3b4(bind)
Result[{:name=>bind[1]}]

end
def AmethystParser_Rule_dot_cre_3767(bind)
Rule.create( {:args=>bind[3],:bnding=>bind[1],:body=>bind[4],:locals=>bind[5],:name=>bind[2] })
end
def AmethystParser_Seq_dot_crea_bfbb(bind)
Seq.create( {:ary=>bind[1] })
end
def AmethystParser_Seq_lb_Bind_bbb6(bind)
Seq[Bind[local("it"),bind[1]] , Act[bind[2]] ]

end
def AmethystParser_Seq_lb_Cut_lb__3505(bind)
Seq[Cut[],Stop[]]

end
def AmethystParser_Strin_lb__lb__dq__b20e(bind)
Strin[["'"+bind[1]+"'"]]

end
def AmethystParser_Strin_lb__lb__qu__88c8(bind)
Strin[['"']+bind[1]+['"']]

end
def AmethystParser__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def AmethystParser__at_appends_975f(bind)
@appends<< local(bind[1]) if bind[2]; Bind[local(bind[1]),bind[3],bind[2]=='[]']

end
def AmethystParser__at_appends_9f26(bind)
@appends<< local(bind[1]); Append[local(bind[1]),bind[2]]

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
def AmethystParser__at_tmp_lt__lt_bi_b81c(bind)
@tmp<<bind[1]
end
def AmethystParser__dq__le__dq__pl_bind_567e(bind)
"{"+bind[1]+"}"
end
def AmethystParser__lb_bind_lb_1_rb__6281(bind)
[bind[1],'<<']

end
def AmethystParser__lp_bind_lb_1_rb__a724(bind)
(bind[1]==',') || FAIL
end
def AmethystParser_a_eq_autova_5b84(bind)
a=autovar; Seq[Or_AST[{:ary=>bind[1].ary.map{|ands| Seq[{:ary=>[Bind[a,Act["[]"]]]+ands.ary.map{|expr| Append[a,expr]}}]}}],a]

end
def AmethystParser_bind_lb_1_rb_(bind)
bind[1]

end
def AmethystParser_bind_lb_1_rb__dot__7b93(bind)
bind[1].join
end
def AmethystParser_bind_lb_1_rb__dot__e879(bind)
bind[1].join

end
def AmethystParser_bind_lb_1_rb__eq__f15c(bind)
bind[1]=Seq[{:ary=>(@appends.uniq.map{|a| Bind[a,Act["[]"]]}+[bind[1]])}]; 
end
def AmethystParser_bind_lb_1_rb__pl__b087(bind)
bind[1]+[',']
end
def AmethystParser_local_lp_bi_196b(bind)
local(bind[1]) 
end

end


class AmethystParser < Amethyst
	def local(x)
		x.is_a?(String) ? (l=Local[x,@bnding];@locals<<l;l) : x
	end
end

def parser_compiled_by
'e704edc5829b48aa46ed13ccf6f5d04e'
end
def parser_source_hash
'49570d883349a40ce30e0fbdeec5f117'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
'1425781982bade7ce38f493c2712b29f'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/parser_c"
