class AmethystParser < Amethyst
def self._args(*args);self.new.parse(:_args,*args);end;def self._selector__args;AmethystParser;end
def self.args(*args);self.new.parse(:args,*args);end;def self._selector_args;AmethystParser;end
def self.argsOpt(*args);self.new.parse(:argsOpt,*args);end;def self._selector_argsOpt;AmethystParser;end
def self.call(*args);self.new.parse(:call,*args);end;def self._selector_call;AmethystParser;end
def self.cases(*args);self.new.parse(:cases,*args);end;def self._selector_cases;AmethystParser;end
def self.className(*args);self.new.parse(:className,*args);end;def self._selector_className;AmethystParser;end
def self.collect(*args);self.new.parse(:collect,*args);end;def self._selector_collect;AmethystParser;end
def self.expression(*args);self.new.parse(:expression,*args);end;def self._selector_expression;AmethystParser;end
def self.file(*args);self.new.parse(:file,*args);end;def self._selector_file;AmethystParser;end
def self.grammar(*args);self.new.parse(:grammar,*args);end;def self._selector_grammar;AmethystParser;end
def self.host_expr(*args);self.new.parse(:host_expr,*args);end;def self._selector_host_expr;AmethystParser;end
def self.inline_host_expr(*args);self.new.parse(:inline_host_expr,*args);end;def self._selector_inline_host_expr;AmethystParser;end
def self.interpolated(*args);self.new.parse(:interpolated,*args);end;def self._selector_interpolated;AmethystParser;end
def self.key(*args);self.new.parse(:key,*args);end;def self._selector_key;AmethystParser;end
def self.lambda(*args);self.new.parse(:lambda,*args);end;def self._selector_lambda;AmethystParser;end
def self.name(*args);self.new.parse(:name,*args);end;def self._selector_name;AmethystParser;end
def self.nr(*args);self.new.parse(:nr,*args);end;def self._selector_nr;AmethystParser;end
def self.postfixed(*args);self.new.parse(:postfixed,*args);end;def self._selector_postfixed;AmethystParser;end
def self.prefixed(*args);self.new.parse(:prefixed,*args);end;def self._selector_prefixed;AmethystParser;end
def self.procargs(*args);self.new.parse(:procargs,*args);end;def self._selector_procargs;AmethystParser;end
def self.procargs2(*args);self.new.parse(:procargs2,*args);end;def self._selector_procargs2;AmethystParser;end
def self.rubyarg(*args);self.new.parse(:rubyarg,*args);end;def self._selector_rubyarg;AmethystParser;end
def self.rule(*args);self.new.parse(:rule,*args);end;def self._selector_rule;AmethystParser;end
def self.ruleargs(*args);self.new.parse(:ruleargs,*args);end;def self._selector_ruleargs;AmethystParser;end
def self.sequence(*args);self.new.parse(:sequence,*args);end;def self._selector_sequence;AmethystParser;end
def self.string_like(*args);self.new.parse(:string_like,*args);end;def self._selector_string_like;AmethystParser;end
def self.term(*args);self.new.parse(:term,*args);end;def self._selector_term;AmethystParser;end
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
def AmethystParser_Apply_lb__dq_s_9322(bind)
Apply["seq"   ,quote(bind[1])]

end
def AmethystParser_Apply_lb__dq_t_e958(bind)
Apply["token" ,quote(bind[1])]

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
def AmethystParser_Bind_lb_loc_5836(bind)
Bind[local(bind[1]),bind[2]]

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
def AmethystParser_Enter_AS_06e8(bind)
Enter_AST[Apply["anything"],bind[1]]

end
def AmethystParser_Enter_AS_3242(bind)
Enter_AST[bind[1],bind[2]]

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
def AmethystParser_Or_AST_dot_c_19e2(bind)
Or_AST.create( {:ary=>bind[1] })
end
def AmethystParser_Or_AST_lb_b_0657(bind)
Or_AST[bind[1],Apply["empty"]]

end
def AmethystParser_Or_AST_lb_b_3220(bind)
Or_AST[bind[1],bind[2]]

end
def AmethystParser_Or_lb_Apply_cdcd(bind)
Or[Apply["regch","/["+bind[1]*""+"]/"],*bind[2]]

end
def AmethystParser_Parenthe_261b(bind)
Parenthesis[bind[1]]
end
def AmethystParser_Pass_AST_6bd0(bind)
Pass_AST[bind[1],bind[2]] 

end
def AmethystParser_Pred_lb_bin_ae38(bind)
Pred[bind[1][0],bind[2]=="~"]

end
def AmethystParser_Result_lb__le__a3b4(bind)
Result[{:name=>bind[1]}]

end
def AmethystParser_Rule_dot_cre_113e(bind)
Rule.create( {:args=>bind[5],:bnding=>bind[1],:body=>bind[4],:locals=>bind[6],:name=>bind[3],:varargs=>bind[2] })
end
def AmethystParser_Seq_AST_dot__a126(bind)
Seq_AST.create( {:ary=>bind[1] })
end
def AmethystParser_Seq_AST_lb__1817(bind)
Seq_AST[Cut[],Stop[]]

end
def AmethystParser_Seq_AST_lb__66a7(bind)
Seq_AST[Bind[local("it"),bind[1]] , Act[bind[2]] ]

end
def AmethystParser_Strin_lb__lb__dq__b20e(bind)
Strin[["'"+bind[1]+"'"]]

end
def AmethystParser_Strin_lb__lb__qu__88c8(bind)
Strin[['"']+bind[1]+['"']]

end
def AmethystParser__at_appends_36ee(bind)
@appends<< bind[1] if bind[1].is_a?(Local); Concat_AST[bind[1],bind[2]]

end
def AmethystParser__at_appends_b984(bind)
@appends<< bind[1] if bind[1].is_a?(Local); Append_AST[bind[1],bind[2]]

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
def AmethystParser__dq_amethys_673b(bind)
"amethyst Anon#{$agram+=1} { expr=#{src[(bind[1]+2)..(pos-3)]}\ninit=.:@@bind }"
end
def AmethystParser__lb__dq__lp__dq_(bind)
["(",bind[1],";ame_lambda(#{bind[1].name},binding))"]

end
def AmethystParser__lb_bind_lb_1_rb__6281(bind)
[bind[1],'<<']

end
def AmethystParser__lb_bind_lb_1_rb__c1c8(bind)
[bind[1],bind[2]]

end
def AmethystParser__lb_bind_lb_1_rb__f4d6(bind)
[bind[1]]

end
def AmethystParser__lp_bind_lb_1_rb__a724(bind)
(bind[1]==',') || FAIL
end
def AmethystParser_a_eq_autova_57aa(bind)
a=autovar; Seq_AST[Or_AST[{:ary=>bind[1].ary.map{|ands| Seq_AST[{:ary=>[Bind[a,Act["[]"]]]+ands.ary.map{|expr| Append_AST[a,expr]}}]}}],a]

end
def AmethystParser_bind_lb_1_rb_(bind)
bind[1]

end
def AmethystParser_bind_lb_1_rb__dot__1371(bind)
bind[1].concat(bind[2])
end
def AmethystParser_bind_lb_1_rb__dot__4688(bind)
bind[1].rules[0].body=Seq_AST[Act[bind[1].rules[0].locals.map{|el| [el,"=eval(\"#{el[0]}=#{el[0]}\",@bind);"] }],bind[1].rules[0].body,Act[bind[1].rules[0].locals.map{|el| ["$passit=",el,";eval(\"#{el[0]}=$passit\",@bind);"] }]]
end
def AmethystParser_bind_lb_1_rb__dot__7b93(bind)
bind[1].join
end
def AmethystParser_bind_lb_1_rb__dot__e879(bind)
bind[1].join

end
def AmethystParser_bind_lb_1_rb__eq__3c5b(bind)
bind[1]=true;bind[2]=Pass[bind[2],bind[3]]
end
def AmethystParser_bind_lb_1_rb__eq__4e2f(bind)
bind[1]=true  ; Or_AST[Pred[Args[Key[bind[2],[]]]], Many[Apply["anything"]]]

end
def AmethystParser_bind_lb_1_rb__eq__9a0b(bind)
bind[1]= bind[2] ? Seq_AST[{:ary=>([Enter[Act[["Arguments[#{bind[3].inspect},*",local("_args"),"]"]],bind[4]]]+@appends.uniq.map{|a| Bind[a,Act["[]"]]}+[bind[1]])}] : Seq_AST[{:ary=>(@appends.uniq.map{|a| Bind[a,Act["[]"]]}+[bind[1]])}]; 
end
def AmethystParser_bind_lb_1_rb__eq__a882(bind)
bind[1]=local(bind[1])
end
def AmethystParser_bind_lb_1_rb__eq__c77b(bind)
bind[1]=true;bind[2]=Or_AST[bind[2],Act[Args[bind[3]]]]
end
def AmethystParser_bind_lb_1_rb__lt__798b(bind)
bind[1]<<local(bind[2]); Or_AST[Pred[Args[Key[bind[2],[]]]], Apply["anything"]]

end
def AmethystParser_bind_lb_1_rb__pl__b087(bind)
bind[1]+[',']
end
def AmethystParser_bind_lb_1_rb__sp__5934(bind)
bind[1] ? [local("_args")] : bind[2]
end
def AmethystParser_local_lp_bi_196b(bind)
local(bind[1]) 
end
def AmethystParser_pos_5e0b(bind)
pos
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/AmethystParser_c"
