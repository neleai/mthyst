class Add_Contextual_Arguments < Traverser_Clone2

def _Seq_lb_Act_lb__84b5(bind)
Seq[Act[[bind[1][:g],"=",bind[1][:a]]],bind[2]]

end
def __at__contex_160a(bind)
@_context_arguments||={};bind[1]=@_context_arguments.dup
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
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__eq__de89(bind)
bind[1]=bind[1].dup; 
                       bind[1].body=Seq[Act[[bind[2][:g],"||={};",bind[2][:a],"=",bind[2][:g],".dup"]],bind[1].body] 
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

class Add_Contextual_Returns < Traverser_Clone2

def _Seq_lb_src(bind)
Seq[src,Act[[Global["contextual_return"],".each{|k,v| ",bind[1][:a],"[k]+=v};",Global["contextual_return"],"=nil"]]]
end
def __at__contex_160a(bind)
@_context_arguments||={};bind[1]=@_context_arguments.dup
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __lb_bind_lb_1_rb__1469(bind)
[bind[1][:a],"[:#{bind[2]}]"]

end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__eq__e05f(bind)
bind[1]=bind[1].dup
                                          bind[1].body=Seq[Act[[bind[2][:a],"=Hash.new{|h,k| h[k]=[]}"]],bind[1].body,Act[[Global["contextual_return"],"=",bind[2][:a]]]]
                                          bind[1]
end
def _bind_lb_1_rb__lb__ec72(bind)
bind[1][:a]=autovar
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
def _src_dot_dup_d768(bind)
src.dup
end

end

# We do following optimalizations
# Pass contextual arguments only to rules that use them. When none uses we delete relevant definitions.

# With contextual returns situation is similar. We can delete definitions that are not used. We dont have to merge first contextual return.

class Context_Graph
end

class Detect_Contextual_Arguments < Traverser_Clone2

def __at_argumen_a3fb(bind)
@arguments.uniq.sort
end
def __at_argumen_c331(bind)
@arguments=[]
end
def __at_argumen_d057(bind)
@arguments=bind[1]
end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
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

end

def contextual_argument_return_compiled_by
'9c0dcfd6b8f32588bd845cdd197569bc'
end
def contextual_argument_return_source_hash
'c58f273fba1da2ca6575be1e452f5976'
end
def testversioncontextual_argument_return(r)
 raise "invalid version" if r!=contextual_argument_return_version
end
def contextual_argument_return_version
'79adaddf77f671efadec07067cf10823'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/contextual_argument_return_c"
