class Add_Contextual_Arguments < Traverser_Clone2

def Add_Contextual_Arguments_Seq_lb_Act_lb__84b5(bind)
Seq[Act[[bind[1][:g],"=",bind[1][:a]]],bind[2]]

end
def Add_Contextual_Arguments__at__contex_160a(bind)
@_context_arguments||={};bind[1]=@_context_arguments.dup
end
def Add_Contextual_Arguments__at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def Add_Contextual_Arguments__at_context_25cc(bind)
@context_arg=false
end
def Add_Contextual_Arguments__at_context_54ee(bind)
@context_arg=true; [bind[1][:a],"[:",bind[2],"]"] 
end
def Add_Contextual_Arguments__lp_src_dot_cla_e144(bind)
(src.class.instance_variable_get(:@attrs)).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Add_Contextual_Arguments_bind_lb_1_rb__eq__de89(bind)
bind[1]=bind[1].dup; 
                       bind[1].body=Seq[Act[[bind[2][:g],"||={};",bind[2][:a],"=",bind[2][:g],".dup"]],bind[1].body] 
                       @context_arg ? bind[1] : bind[3]
                      
end
def Add_Contextual_Arguments_bind_lb_1_rb__lb__6ab8(bind)
bind[1][:g]=Global["_context_arguments"];bind[1][:a]=autovar
end
def Add_Contextual_Arguments_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Add_Contextual_Arguments_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Add_Contextual_Arguments_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Add_Contextual_Arguments_src_25d9(bind)
src
end
def Add_Contextual_Arguments_src_dot_dup_d768(bind)
src.dup
end

end


class Add_Contextual_Returns < Traverser_Clone2

def Add_Contextual_Returns_Seq_lb_src(bind)
Seq[src,Act[[Global["contextual_return"],".each{|k,v| ",bind[1][:a],"[k]+=v};",Global["contextual_return"],"=nil"]]]
end
def Add_Contextual_Returns__at__contex_160a(bind)
@_context_arguments||={};bind[1]=@_context_arguments.dup
end
def Add_Contextual_Returns__at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def Add_Contextual_Returns__lb_bind_lb_1_rb__1469(bind)
[bind[1][:a],"[:#{bind[2]}]"]

end
def Add_Contextual_Returns__lp_src_dot_cla_e144(bind)
(src.class.instance_variable_get(:@attrs)).map{|v| src.instance_variable_get("@"+v.to_s) }
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




def contextual_argument_return_compiled_by
'bd18b69cab5d786eb9659a855a9960fb'
end
def contextual_argument_return_source_hash
'e0f9c6b4ef154f587d67659479319e13'
end
def testversioncontextual_argument_return(r)
 raise "invalid version" if r!=contextual_argument_return_version
end
def contextual_argument_return_version
'b821723e26e7580fa979db8850a4c061'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/contextual_argument_return_c"
