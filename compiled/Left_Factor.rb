class Left_Factor < Traverser_Clone2
def self.binds(*args);self.new.parse(:binds,*args);end;def self._selector_binds;Left_Factor;end
def self.factor(*args);self.new.parse(:factor,*args);end;def self._selector_factor;Left_Factor;end
def self.first(*args);self.new.parse(:first,*args);end;def self._selector_first;Left_Factor;end
def self.rest(*args);self.new.parse(:rest,*args);end;def self._selector_rest;Left_Factor;end
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Left_Factor;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Left_Factor;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Left_Factor;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;Left_Factor;end
def _Bind_lb_src_66c4(bind)
Bind[src.name,bind[1]]
end
def _Or_lb__ti__lp_bin_849e(bind)
Or[*(bind[1]+merge(bind[2]))]

end
def _Seq_lb__lb_bin_4ce0(bind)
Seq[[bind[1]]+bind[2]]
end
def __lb_bind_lb_1_rb__1906(bind)
[bind[1]]
end
def __lp_bind_lb_1_rb__34a7(bind)
(bind[1]==first(bind[2])) || FAIL
end
def __lp_bind_lb_1_rb__b868(bind)
(bind[1]!=first(bind[2])) || FAIL
end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__pl__4651(bind)
bind[1]+[bind[2]]
end
def _bind_lb_1_rb__pl__4c53(bind)
bind[1]+merge(bind[2])
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _first_lp_bi_150a(bind)
first(bind[1])
end
def _if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def _src_dot_expr_ef77(bind)
src.expr
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Left_Factor_c"
