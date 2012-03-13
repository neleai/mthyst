#@Or_AST and @Seq are necessary for collect
#
class AmethystParser_Highligth < Amethyst
	def local(x)
		x.is_a?(String) ? (l=Local[x,@bnding];@locals<<l;l) : x
	end
end
$gno=0
def group_new
  $gno+=1
end

def map_colors(str,src,offset)
  $colors[str].each_with_index{|v,i| $colors[src][i+offset]=v}
  $group_mark[str].each_with_index{|v,i| $group_mark[src][i+offset]=v}
  $group_start[str].each{|i,a| $group_start[src][i+offset]+= a}
  $group_end[str].each{|i,a| $group_end[src][i+offset]+=a}
end

class AmethystParser_Highligth < Amethyst
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
def self.group_hl(*args);self.new.parse(:group_hl,*args);end
def self.group_mark(*args);self.new.parse(:group_mark,*args);end
def self.host_expr(*args);self.new.parse(:host_expr,*args);end
def self.inline_host_expr(*args);self.new.parse(:inline_host_expr,*args);end
def self.interpolated(*args);self.new.parse(:interpolated,*args);end
def self.key(*args);self.new.parse(:key,*args);end
def self.key2(*args);self.new.parse(:key2,*args);end
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
def self.term(*args);self.new.parse(:term,*args);end
def self.withcolor(*args);self.new.parse(:withcolor,*args);end
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
def _Contextu_4e8d(bind)
Contextual_Argument[bind[1]]

end
def _Contextu_6782(bind)
Contextual_Return[bind[1]] 

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
def _Nested_lb_b_1ac2(bind)
Nested[bind[1]]

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
def _Seq_dot_crea_bfbb(bind)
Seq.create( {:ary=>bind[1] })
end
def _Seq_lb_Bind_bbb6(bind)
Seq[Bind[local("it"),bind[1]] , Act[bind[2]] ]

end
def _Seq_lb_Cut_lb__3505(bind)
Seq[Cut[],Stop[]]

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
def __at_locals_eq__bc08(bind)
@locals=[];@append=[];@bnding=2
end
def __at_tmp_lt__lt_bi_b81c(bind)
@tmp<<bind[1]
end
def __do_colors_lb__54a6(bind)
$colors[src][pos-1]="yellow"
end
def __do_colors_lb__56e9(bind)
$colors[src][pos]="yellow"
end
def __do_group_s_1756(bind)
$group_start[src][bind[1]]<<bind[2];$group_end[src][pos]<<bind[2];bind[3]
end
def __lb_bind_lb_1_rb__6281(bind)
[bind[1],'<<']

end
def __lp_bind_lb_1_rb__a724(bind)
(bind[1]==',') || FAIL
end
def _a_eq_autova_7fca(bind)
a=autovar; Seq[Or_AST[{:ary=>bind[1].ary.map{|ands| Seq[{:ary=>[Bind[a,Act["[]"]]]+ands.ary.map{|expr| Append_AST[a,expr]}}]}}],a]

end
def _bind_lb_1_rb_(bind)
bind[1]

end
def _bind_lb_1_rb__dot__5eb4(bind)
bind[1].upto(pos-1){|i| $colors[src][i]||=bind[2]};bind[3]
end
def _bind_lb_1_rb__dot__7b93(bind)
bind[1].join
end
def _bind_lb_1_rb__dot__d612(bind)
bind[1].upto(pos-1){|i| $group_mark[src][i]||=bind[2]};bind[3]
end
def _bind_lb_1_rb__dot__e879(bind)
bind[1].join

end
def _bind_lb_1_rb__eq__5136(bind)
bind[1]="{"+bind[2]+"}"
end
def _bind_lb_1_rb__eq__f15c(bind)
bind[1]=Seq[{:ary=>(@appends.uniq.map{|a| Bind[a,Act["[]"]]}+[bind[1]])}]; 
end
def _bind_lb_1_rb__pl__b087(bind)
bind[1]+[',']
end
def _group_ne_2561(bind)
group_new
end
def _local_lp_bi_196b(bind)
local(bind[1]) 
end
def _map_colo_8d3f(bind)
map_colors(bind[1],src,bind[2]+1) ; bind[3]
end
def _pos_5e0b(bind)
pos
end

end


def parser_highlight_compiled_by
'80172981b2dfc1c9ab66041bcc45e000'
end
def parser_highlight_source_hash
'777d6295b859b3ef62e7f87c92aee08d'
end
def testversionparser_highlight(r)
 raise "invalid version" if r!=parser_highlight_version
end
def parser_highlight_version
'903fa36149d6011961776a68cc04c34a'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/parser_highlight_c"
