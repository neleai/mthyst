class Detect_Switch_Char < Detect_First
def self.itrans(*args);self.new.parse(:itrans,*args);end;def self._selector_itrans;Detect_Switch_Char;end
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Detect_Switch_Char;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Detect_Switch_Char;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Detect_Switch_Char;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;Detect_Switch_Char;end
def Detect_Switch_Char_Or_lb__ti_bind_d486(bind)
Or[*bind[1]]
end
def Detect_Switch_Char_Seq_lb__ti__lp_bi_a321(bind)
Seq[*(bind[1]+bind[2])]
end
def Detect_Switch_Char__at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def Detect_Switch_Char__at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def Detect_Switch_Char__do_rules_eq__le__ab16(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def Detect_Switch_Char__lb__lb_Lattic_d322(bind)
[[Lattice_Char.top,[]]]
end
def Detect_Switch_Char__lp_(bind)
(!can_empty?(src) && bind[1]!=Lattice_Char.top) || FAIL
end
def Detect_Switch_Char__lp_2(bind)
(!bind[1]) || FAIL
end
def Detect_Switch_Char__lp_bind_lb_1_rb__c400(bind)
(bind[1].name==bind[2]) || FAIL
end
def Detect_Switch_Char__lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Detect_Switch_Char_bind_lb_1_rb_(bind)
bind[1]

end
def Detect_Switch_Char_bind_lb_1_rb__dot__642a(bind)
bind[1].each{|p,a| bind[2].each{|p2,a2| bind[3] << [p&p2,a+[a2]] if p&p2!=bind[4].bottom}}
end
def Detect_Switch_Char_bind_lb_1_rb__dot__a482(bind)
bind[1].map{|p,a| [p,a+[bind[2]]]}
end
def Detect_Switch_Char_bind_lb_1_rb__dot__bb04(bind)
bind[1].each{|i| bind[2]=true if i.is_a?(Switch_Char)}
end
def Detect_Switch_Char_bind_lb_1_rb__lb__0f18(bind)
bind[1][{:ary=>bind[2].map{|p,a| [p,Or[*a]]}}]
end
def Detect_Switch_Char_bind_lb_1_rb__lb__75a5(bind)
bind[1][{:ary=>bind[2].map{|p,a| [p,Seq[*(bind[3]+[a]+bind[4])]]}}] 
end
def Detect_Switch_Char_bind_lb_1_rb__lb__fa06(bind)
bind[1][:name]=src.name
end
def Detect_Switch_Char_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Detect_Switch_Char_bind_lb_1_rb__pl__4651(bind)
bind[1]+[bind[2]]
end
def Detect_Switch_Char_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Detect_Switch_Char_first_lp_sr_3298(bind)
first(src)
end
def Detect_Switch_Char_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Detect_Switch_Char_s_eq_Switch_78a6(bind)
s=Switch_Char[{:ary=>[[bind[1],Seq[Apply["advance_char"],Apply["_seq",CAct[bind[2][1..-1]]]]],[~bind[1],Apply["fails"]]]}]
end
def Detect_Switch_Char_s_eq_Switch_7c35(bind)
s=Switch_Char[{:ary=>[[bind[1],src],[~bind[1],Apply["fails"]]]}] 
end
def Detect_Switch_Char_s_eq_Switch_df23(bind)
s=Switch_Char[{:ary=>[[bind[1],Apply["advance_char"]],[~bind[1],Apply["fails"]]]}]
end
def Detect_Switch_Char_src_25d9(bind)
src
end
def Detect_Switch_Char_src_dot_ary_d5cf(bind)
src.ary
end
def Detect_Switch_Char_src_dot_rule_5acf(bind)
src.rules
end
def Detect_Switch_Char_src_dot_rule_a719(bind)
src.rules=bind[1]
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Detect_Switch_Char_c"
