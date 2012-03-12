#@Or_AST and @Seq_AST are necessary for collect
$agram=0
class AmethystParser < Amethyst
  memoize "name","argsOpt"
  #use_implicit_variables
end
class AmethystParser < Amethyst
def self._args(*args);self.new.parse(:_args,*args);end
def self.args(*args);self.new.parse(:args,*args);end
def self.argsOpt(*args);self.new.parse(:argsOpt,*args);end
def self.call(*args);self.new.parse(:call,*args);end
def self.cases(*args);self.new.parse(:cases,*args);end
def self.className(*args);self.new.parse(:className,*args);end
def self.collect(*args);self.new.parse(:collect,*args);end
def self.expression(*args);self.new.parse(:expression,*args);end
def self.file(*args);self.new.parse(:file,*args);end
def self.grammar(*args);self.new.parse(:grammar,*args);end
def self.host_expr(*args);self.new.parse(:host_expr,*args);end
def self.inline_host_expr(*args);self.new.parse(:inline_host_expr,*args);end
def self.interpolated(*args);self.new.parse(:interpolated,*args);end
def self.key(*args);self.new.parse(:key,*args);end
def self.lambda(*args);self.new.parse(:lambda,*args);end
def self.name(*args);self.new.parse(:name,*args);end
def self.nr(*args);self.new.parse(:nr,*args);end
def self.postfixed(*args);self.new.parse(:postfixed,*args);end
def self.prefixed(*args);self.new.parse(:prefixed,*args);end
def self.procargs(*args);self.new.parse(:procargs,*args);end
def self.procargs2(*args);self.new.parse(:procargs2,*args);end
def self.rubyarg(*args);self.new.parse(:rubyarg,*args);end
def self.rule(*args);self.new.parse(:rule,*args);end
def self.ruleargs(*args);self.new.parse(:ruleargs,*args);end
def self.sequence(*args);self.new.parse(:sequence,*args);end
def self.string_like(*args);self.new.parse(:string_like,*args);end
def self.term(*args);self.new.parse(:term,*args);end
def _Act_lb_Args_23b1(bind)
Act[Args[{:ary=>bind[1]}]]
end
def _Act_lb_bind_7d0b(bind)
Act[bind[1]]
end
def _Apply_lb__dq_a_1437(bind)
Apply["anything"]

end
def _Apply_lb__dq_c_a8b6(bind)
Apply["clas",bind[1]]

end
def _Apply_lb__dq_m_2ec1(bind)
Apply["member",bind[1].to_s]

end
def _Apply_lb__dq_r_269c(bind)
Apply["regch","/["+bind[1]+"]/"]

end
def _Apply_lb__dq_s_9322(bind)
Apply["seq"   ,quote(bind[1])]

end
def _Apply_lb__dq_t_e958(bind)
Apply["token" ,quote(bind[1])]

end
def _Apply_lb__lb_b_099b(bind)
Apply[[bind[1],bind[2]],bind[3]]

end
def _Apply_lb_bi_9146(bind)
Apply[bind[1],bind[2]]

end
def _Args_lb__le__co_a_9abe(bind)
Args[{:ary=>([bind[1]]+bind[2]+[bind[3]])}]

end
def _Bind_lb_loc_37df(bind)
Bind[local("_result"),bind[1]]
end
def _Comment_lb__ed6f(bind)
Comment[bind[1]]

end
def _Contextu_32ad(bind)
Contextual_Return[bind[1]]

end
def _Contextu_4e8d(bind)
Contextual_Argument[bind[1]]

end
def _Enter_AS_06e8(bind)
Enter_AST[Apply["anything"],bind[1]]

end
def _Enter_AS_3242(bind)
Enter_AST[bind[1],bind[2]]

end
def _Global_lb_b_0216(bind)
Global[bind[1]]

end
def _Grammar_dot__a510(bind)
Grammar.create( {:name=>bind[1],:parent=>bind[2],:rules=>bind[3] })
end
def _Key_lb_bind_5e9f(bind)
Key[bind[1],bind[2]]

end
def _Lambda_lb_B_2c90(bind)
Lambda[Bind[local("_result"),bind[1]]]

end
def _Lookahea_0946(bind)
Lookahead[bind[1],bind[2]=="~"]

end
def _Many_lb_bin_14d1(bind)
Many[bind[1],bind[2]=="+"]

end
def _Or_AST_dot_c_19e2(bind)
Or_AST.create( {:ary=>bind[1] })
end
def _Or_AST_lb_b_0657(bind)
Or_AST[bind[1],Apply["empty"]]

end
def _Parenthe_261b(bind)
Parenthesis[bind[1]]
end
def _Pass_AST_6bd0(bind)
Pass_AST[bind[1],bind[2]] 

end
def _Pred_lb_bin_ae38(bind)
Pred[bind[1][0],bind[2]=="~"]

end
def _Result_lb__le__a3b4(bind)
Result[{:name=>bind[1]}]

end
def _Rule_dot_cre_3767(bind)
Rule.create( {:args=>bind[3],:bnding=>bind[1],:body=>bind[4],:locals=>bind[5],:name=>bind[2] })
end
def _Seq_AST_dot__a126(bind)
Seq_AST.create( {:ary=>bind[1] })
end
def _Seq_AST_lb__1817(bind)
Seq_AST[Cut[],Stop[]]

end
def _Seq_AST_lb__66a7(bind)
Seq_AST[Bind[local("it"),bind[1]] , Act[bind[2]] ]

end
def _Strin_lb__lb__dq__b20e(bind)
Strin[["'"+bind[1]+"'"]]

end
def _Strin_lb__lb__qu__88c8(bind)
Strin[['"']+bind[1]+['"']]

end
def __at_appends_2058(bind)
@appends<< local(bind[1]) if bind[2]; bind[2]=='[]' ? Append_AST[bind[1],bind[3]] : Bind[local(bind[1]),bind[3]]

end
def __at_appends_bfac(bind)
@appends<< local(bind[1]); Append_AST[local(bind[1]),bind[2]]

end
def __at_ary_eq__lb__rb_(bind)
@ary=[];@tmp=[]
end
def __at_ary_ff69(bind)
@ary
end
def __at_ary_lt__lt_Ar_59e3(bind)
@ary<<Args[{:ary=>@tmp}];@tmp=[]
end
def __at_bnding_7d3c(bind)
@bnding
end
def __at_locals_dot__bdc6(bind)
@locals.uniq
end
def __at_locals_eq__4fc1(bind)
@locals=[];@appends=[];@bnding=Bnding[]
end
def __at_tmp_lt__lt_bi_b81c(bind)
@tmp<<bind[1]
end
def __dq__le__dq__pl_bind_567e(bind)
"{"+bind[1]+"}"
end
def __lb__dq__lp__dq_(bind)
["(",bind[1],";class #{bind[1].name};end;ame_lambda(#{bind[1].name},binding))"]

end
def __lb_bind_lb_1_rb__6281(bind)
[bind[1],'<<']

end
def __lp_bind_lb_1_rb__a724(bind)
(bind[1]==',') || FAIL
end
def _a_eq_autova_57aa(bind)
a=autovar; Seq_AST[Or_AST[{:ary=>bind[1].ary.map{|ands| Seq_AST[{:ary=>[Bind[a,Act["[]"]]]+ands.ary.map{|expr| Append_AST[a,expr]}}]}}],a]

end
def _bind_lb_1_rb_(bind)
bind[1]

end
def _bind_lb_1_rb__dot__7b93(bind)
bind[1].join
end
def _bind_lb_1_rb__dot__a01f(bind)
bind[1].rules[0].body=Seq_AST[Act[bind[1].rules[0].locals.map{|el| [el,"=eval(\"#{el[0]}=#{el[0]}\",@bind)"] }],bind[1].rules[0].body,Act[bind[1].rules[0].locals.map{|el| ["$passit=",el,";eval(\"#{el[0]}=$passit\",@bind)"] }]]
end
def _bind_lb_1_rb__dot__e879(bind)
bind[1].join

end
def _bind_lb_1_rb__eq__e198(bind)
bind[1]=Seq_AST[{:ary=>(@appends.uniq.map{|a| Bind[a,Act["[]"]]}+[bind[1]])}]; 
end
def _bind_lb_1_rb__pl__b087(bind)
bind[1]+[',']
end
def _local_lp_bi_196b(bind)
local(bind[1]) 
end
def _pos_5e0b(bind)
pos
end
def _x_eq__dq_ameth_1b26(bind)
x="amethyst Anon#{$agram+=1} { expr=#{src[(bind[1]+2)..(pos-3)]} }";puts x.inspect;x
end

end

class AmethystParser < Amethyst
	def local(x)
		x.is_a?(String) ? (l=Local[x,@bnding];@locals<<l;l) : x
	end
end

def parser_compiled_by
'198c36d34da4d34a36f909d90bfa66b9'
end
def parser_source_hash
'f37309102c2f863288fd939cf1595543'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
'a565f26ed60667fe7fcee46cd4027fa7'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/parser_c"
