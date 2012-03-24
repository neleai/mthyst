class Resolve_Calls < Traverser_Clone2
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Resolve_Calls;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Resolve_Calls;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Resolve_Calls;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;Resolve_Calls;end
def Resolve_Calls_Apply_lb_bi_2f93(bind)
Apply[bind[1][1],*bind[2],{:clas=>resolvegrammar(Compiler.grammars[bind[1][0]],bind[1][1])}]
end
def Resolve_Calls_Apply_lb_bi_49fd(bind)
Apply[bind[1],   *bind[2],{:clas=>resolvegrammar(bind[3][:grammar].name,bind[1])}]
end
def Resolve_Calls__at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def Resolve_Calls__at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def Resolve_Calls__at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def Resolve_Calls__lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Resolve_Calls_bind_lb_1_rb__lb__7c6b(bind)
bind[1][:grammar]=bind[2]
end
def Resolve_Calls_bind_lb_1_rb__lb__9d9a(bind)
bind[1][:name]=bind[2]
end
def Resolve_Calls_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Resolve_Calls_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Resolve_Calls_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Resolve_Calls_src_dot_name_80f3(bind)
src.name
end
def Resolve_Calls_super_na_296f(bind)
super_name="#{bind[1][:name]}_#{bind[1][:grammar].name}"
                    bind[1][:grammar].rules[super_name]=Compiler.grammars[bind[1][:grammar].parent].getrule(bind[1][:name]).dup
                    bind[1][:grammar].rules[super_name].name=super_name
                    Apply[super_name]
              
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Resolve_Calls_c"
