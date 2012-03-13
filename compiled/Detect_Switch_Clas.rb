class Detect_Switch_Clas < Detect_First
def self.itrans(*args);self.new.parse(:itrans,*args);end
def self.root(*args);self.new.parse(:root,*args);end
def self.traverse(*args);self.new.parse(:traverse,*args);end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end
def self.visit(*args);self.new.parse(:visit,*args);end
def _Or_lb__ti_bind_d486(bind)
Or[*bind[1]]
end
def _Seq_lb__ti__lp_bi_a321(bind)
Seq[*(bind[1]+bind[2])]
end
def _Switch_C_63f7(bind)
Switch_Clas[[Lattice_Clas[bind[1]],Apply["advance_clas"]],[Lattice_Clas[Object],Apply["fails"]]].freeze 
end
def __at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def __at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def __do_rules_eq__le__ab16(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def __lb__lb_Lattic_62e5(bind)
[[Lattice_Clas.top,[]]]
end
def __lp_(bind)
(!can_empty?(src) && !bind[1].ary.include?(Object)) || FAIL
end
def __lp_2(bind)
(!bind[1]) || FAIL
end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__dot__642a(bind)
bind[1].each{|p,a| bind[2].each{|p2,a2| bind[3] << [p&p2,a+[a2]] if p&p2!=bind[4].bottom}}
end
def _bind_lb_1_rb__dot__76da(bind)
bind[1].each{|i| bind[2]=true if i.is_a?(Switch_Clas)}
end
def _bind_lb_1_rb__dot__a482(bind)
bind[1].map{|p,a| [p,a+[bind[2]]]}
end
def _bind_lb_1_rb__lb__0f18(bind)
bind[1][{:ary=>bind[2].map{|p,a| [p,Or[*a]]}}]
end
def _bind_lb_1_rb__lb__75a5(bind)
bind[1][{:ary=>bind[2].map{|p,a| [p,Seq[*(bind[3]+[a]+bind[4])]]}}] 
end
def _bind_lb_1_rb__lb__fa06(bind)
bind[1][:name]=src.name
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__pl__4651(bind)
bind[1]+[bind[2]]
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _c_eq_Switch_4e5f(bind)
c=Switch_Clas[{:ary=>bind[1].ary.map{|a| [Lattice_Clas[a],src]}+[[Lattice_Clas[Object],Apply["fails"]]]}];puts c.inspect;c 
end
def _if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def _src_25d9(bind)
src
end
def _src_dot_ary_d5cf(bind)
src.ary
end
def _src_dot_rule_5acf(bind)
src.rules
end
def _src_dot_rule_a719(bind)
src.rules=bind[1]
end

end
