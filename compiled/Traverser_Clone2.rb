class Traverser_Clone2 < Amethyst
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Traverser_Clone2;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Traverser_Clone2;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Traverser_Clone2;end
def Traverser_Clone2__lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Traverser_Clone2_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Traverser_Clone2_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Traverser_Clone2_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Traverser_Clone2_c"
