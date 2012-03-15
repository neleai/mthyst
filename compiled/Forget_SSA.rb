class Forget_SSA < Traverser_Clone2
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Forget_SSA;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Forget_SSA;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Forget_SSA;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;Forget_SSA;end
def Forget_SSA__lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Forget_SSA_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Forget_SSA_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Forget_SSA_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Forget_SSA_src_25d9(bind)
src
end
def Forget_SSA_src_dot_unss_5845(bind)
src.unssa
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Forget_SSA_c"
