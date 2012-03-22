class Add_Contextual_Returns < Traverser_Clone2
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Add_Contextual_Returns;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Add_Contextual_Returns;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Add_Contextual_Returns;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;Add_Contextual_Returns;end
def Add_Contextual_Returns_Seq_lb_src(bind)
Seq[src,Act[[Global["contextual_return"],".each{|k,v| ",bind[1][:a],"[k]+=v};",Global["contextual_return"],"=nil"]]]
end
def Add_Contextual_Returns__at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def Add_Contextual_Returns__at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def Add_Contextual_Returns__at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def Add_Contextual_Returns__lb_bind_lb_1_rb__1469(bind)
[bind[1][:a],"[:#{bind[2]}]"]

end
def Add_Contextual_Returns__lp__at_cargs_lb__e1d6(bind)
(@cargs[src.ary[0]]) || FAIL
end
def Add_Contextual_Returns__lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Add_Contextual_Returns_bind_lb_1_rb__eq__e05f(bind)
bind[1]=bind[1].dup
                                          bind[1].body=Seq[Act[[bind[2][:a],"=Hash.new{|h,k| h[k]=[]}"]],bind[1].body,Act[[Global["contextual_return"],"=",bind[2][:a]]]]
                                          bind[1]
end
def Add_Contextual_Returns_bind_lb_1_rb__lb__ec72(bind)
bind[1][:a]=autovar
end
def Add_Contextual_Returns_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Add_Contextual_Returns_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Add_Contextual_Returns_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Add_Contextual_Returns_src_dot_dup_d768(bind)
src.dup
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Add_Contextual_Returns_c"
