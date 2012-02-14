class Add_Contextual_Arguments < Traverser_Clone2

def Add_Contextual_Arguments__at_context_8c62(bind)
@contextual_arguments=true;[Global["_context_arguments"],"[:",bind[1],"]"] 
end
def Add_Contextual_Arguments__lp_src_dot_cla_e144(bind)
(src.class.instance_variable_get(:@attrs)).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Add_Contextual_Arguments_bind_lb_1_rb__eq__daa8(bind)
bind[1]=bind[1].dup; 
                                  if @contextual_arguments
                                    a=autovar;g=Global["_context_arguments"]
                                    bind[1].body=Seq[Act[[g,"||={};",a,"=",g,";",g,"=",g,".dup"]],bind[1].body,Act[[g,"=",a]]]
                                  end 
                                  bind[1]
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
def Add_Contextual_Arguments_src_dot_dup_d768(bind)
src.dup
end

end


def contextual_argument_return_compiled_by
'24f3b7282e7eac736165cca5a08980c6'
end
def contextual_argument_return_source_hash
'0309a73c4c9d00284be0c29beb9ffe26'
end
def testversioncontextual_argument_return(r)
 raise "invalid version" if r!=contextual_argument_return_version
end
def contextual_argument_return_version
'8b38728c9e2b37b08afba5e0a6e8be6c'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/contextual_argument_return_c"
