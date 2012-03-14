class Dead_Code_Deleter3 < Traverser_Clone2
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Dead_Code_Deleter3;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Dead_Code_Deleter3;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Dead_Code_Deleter3;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;Dead_Code_Deleter3;end
def __at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def __at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __lp_(bind)
(!bind[1][:reachable][bind[2]] ||(bind[2].pure && !bind[1][:bound])) ? Placeholder : bind[2]

end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__lb__146c(bind)
bind[1][:bound]||=bind[1][:reachable][src.name]
end
def _bind_lb_1_rb__lb__1f9e(bind)
bind[1][:reachable]=src.reachable
end
def _bind_lb_1_rb__lb__8eca(bind)
bind[1][:reachable][src.name] ? src : src.expr
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _d_eq_src_dot_du_2b46(bind)
d=src.dup;#d.bound=bind[1][:bound];
                      d.normalize
end
def _d_eq_src_dot_du_d571(bind)
d=src.dup;d.to=bind[1];d
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
def _src_dot_body_519e(bind)
src.body
end
def _src_dot_body_aaae(bind)
src.body=bind[1];src
end
def _src_dot_dup_d768(bind)
src.dup
end
def _src_dot_reac_cd39(bind)
src.reachable=nil;src.cfg=nil
end
def _src_dot_to_5e99(bind)
src.to
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Dead_Code_Deleter3_c"
