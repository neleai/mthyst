class Resolve_Calls < Traverser_Clone2
def self.root(*args);self.new.parse(:root,*args);end
def self.traverse(*args);self.new.parse(:traverse,*args);end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end
def self.visit(*args);self.new.parse(:visit,*args);end
def __at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def __at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _a_eq_Apply_lb__36f8(bind)
a=Apply[bind[1][1],{:clas=>resolvegrammar(Compiler.grammars[bind[1][0]],bind[1][1])}]
end
def _a_eq_Apply_lb__f488(bind)
a=Apply[bind[1],   {:clas=>resolvegrammar(bind[2][:grammar].name,bind[1])}];a
end
def _bind_lb_1_rb__lb__7c6b(bind)
bind[1][:grammar]=bind[2]
end
def _bind_lb_1_rb__lb__9d9a(bind)
bind[1][:name]=bind[2]
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def _src_dot_name_80f3(bind)
src.name
end
def _super_na_296f(bind)
super_name="#{bind[1][:name]}_#{bind[1][:grammar].name}"
                    bind[1][:grammar].rules[super_name]=Compiler.grammars[bind[1][:grammar].parent].getrule(bind[1][:name]).dup
                    bind[1][:grammar].rules[super_name].name=super_name
                    Apply[super_name]
              
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Resolve_Calls_c"
