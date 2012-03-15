class Constant_Traverser < Traverser_Clone2
def self.consts(*args);self.new.parse(:consts,*args);end;def self._selector_consts;Constant_Traverser;end
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Constant_Traverser;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Constant_Traverser;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Constant_Traverser;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;Constant_Traverser;end
def Constant_Traverser_Bind_lb_src_66c4(bind)
Bind[src.name,bind[1]]
end
def Constant_Traverser_Bind_lb_src_91ed(bind)
Bind[src,bind[1][:consts][src.ssaname]]
end
def Constant_Traverser_Seq_lb_bind_95dc(bind)
Seq[bind[1],src]
end
def Constant_Traverser__at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def Constant_Traverser__at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def Constant_Traverser__at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def Constant_Traverser__lp__lp_bind_lb_1_1e7f(bind)
((bind[1][:consts][src.ssaname] && !(bind[1][:consts][src.ssaname].is_a?(CAct)&&bind[1][:consts][src.ssaname][0]==[]) &&src[0]!="_result") ) || FAIL
end
def Constant_Traverser__lp__lp_bind_lb_1_42f7(bind)
((bind[1][:consts][src.ssaname] && src[0]!="_result") ) || FAIL
end
def Constant_Traverser__lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Constant_Traverser_bind_lb_1_rb__dot__f702(bind)
bind[1].freeze
end
def Constant_Traverser_bind_lb_1_rb__lb__a394(bind)
bind[1][:consts][src.ssaname]
end
def Constant_Traverser_bind_lb_1_rb__lb__cf87(bind)
bind[1][:consts]=src.consts;
end
def Constant_Traverser_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Constant_Traverser_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Constant_Traverser_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Constant_Traverser_src_25d9(bind)
src
end
def Constant_Traverser_src_dot_cfg_eq__15aa(bind)
src.cfg=nil;src.reachable=nil;src.consts=nil
end
def Constant_Traverser_src_dot_dup_d768(bind)
src.dup
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Constant_Traverser_c"
