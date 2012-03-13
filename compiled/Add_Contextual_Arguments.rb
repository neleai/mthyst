class Add_Contextual_Arguments < Traverser_Clone2
def self.root(*args);self.new.parse(:root,*args);end
def self.traverse(*args);self.new.parse(:traverse,*args);end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end
def self.visit(*args);self.new.parse(:visit,*args);end
def _Seq_lb_Act_lb__84b5(bind)
Seq[Act[[bind[1][:g],"=",bind[1][:a]]],bind[2]]

end
def __at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def __at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __at_context_25cc(bind)
@context_arg=false
end
def __at_context_54ee(bind)
@context_arg=true; [bind[1][:a],"[:",bind[2],"]"] 
end
def __lp__at_cargs_lb__e1d6(bind)
(@cargs[src.ary[0]]) || FAIL
end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__eq__9326(bind)
bind[1]=bind[1].dup;a2=autovar;a3=autovar 
                       bind[1].body=Seq[Act[[bind[2][:g],"||={};",a2,"=",bind[2][:g],";",bind[2][:a],"=",bind[2][:g],".dup"]],Bind[a3,bind[1].body],Act[[bind[2][:g],"=",a2,";",a3]]] 
                       @context_arg ? bind[1] : bind[3]
                      
end
def _bind_lb_1_rb__lb__6ab8(bind)
bind[1][:g]=Global["_context_arguments"];bind[1][:a]=autovar
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
def _src_25d9(bind)
src
end
def _src_dot_dup_d768(bind)
src.dup
end

end
