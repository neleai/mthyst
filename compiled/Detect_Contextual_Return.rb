class Detect_Contextual_Return < Traverser_Clone2
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Detect_Contextual_Return;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Detect_Contextual_Return;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Detect_Contextual_Return;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;Detect_Contextual_Return;end
def Detect_Contextual_Return__append_lp__441e(bind)
_append(@returns,bind[1])
end
def Detect_Contextual_Return__at_returns_708d(bind)
@returns.uniq.sort
end
def Detect_Contextual_Return__at_returns_ca28(bind)
@returns=[]
end
def Detect_Contextual_Return__lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Detect_Contextual_Return_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Detect_Contextual_Return_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Detect_Contextual_Return_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Detect_Contextual_Return_c"
