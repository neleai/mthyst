class Inliner2 < Traverser_Clone2
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Inliner2;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Inliner2;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Inliner2;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;Inliner2;end
def Inliner2_Seq_lb_src_dot__3406(bind)
Seq[src.body,Local["_result",src.bnding]]
end
def Inliner2__at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def Inliner2__at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def Inliner2__at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def Inliner2__at_name_eq_bi_118d(bind)
@name=bind[1];bind[2][:args]=bind[3];bind[2][:body]=bind[4] 
end
def Inliner2__lp_bind_lb_1_rb__709e(bind)
(bind[1]==@name) || FAIL
end
def Inliner2__lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Inliner2_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Inliner2_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Inliner2_body_eq_bin_3feb(bind)
body=bind[1][:body]; bind[2].each_index{|i| body=Seq[Bind[bind[1][:args][i],bind[2][i]],body] } ; body

end
def Inliner2_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Inliner2_src_dot_args_2df5(bind)
src.args
end
def Inliner2_src_dot_loca_1df0(bind)
src.locals
end
def Inliner2_src_dot_name_80f3(bind)
src.name
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Inliner2_c"
