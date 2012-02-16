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


class Add_Contextual_Returns < Traverser_Clone2

def Add_Contextual_Returns_Seq_lb_src(bind)
Seq[src,Act[[Global["contextual_return"],".each{|k,v| ",@a,"[k]+=v};",Global["contextual_return"],"=nil"]]]
end
def Add_Contextual_Returns__at_a_eq_autov_5323(bind)
@a=autovar
end
def Add_Contextual_Returns__lb__at_a(bind)
[@a,"[:#{bind[1]}]"]

end
def Add_Contextual_Returns__lp_src_dot_cla_e144(bind)
(src.class.instance_variable_get(:@attrs)).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Add_Contextual_Returns_bind_lb_1_rb__eq__4390(bind)
bind[1]=bind[1].dup
                                          bind[1].body=Seq[Act[[@a,"=Hash.new{|h,k| h[k]=[]}"]],bind[1].body,Act[[Global["contextual_return"],"=",@a]]]
                                          bind[1]
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
'a6452d6d2af67efa4b6feedcbec6f2f4'
end
def contextual_argument_return_source_hash
'8ce57f8d8ac33ce9853e7d0e78c218b3'
end
def testversioncontextual_argument_return(r)
 raise "invalid version" if r!=contextual_argument_return_version
end
def contextual_argument_return_version
'90220231fc022f759defdff7e7dcf138'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/contextual_argument_return_c"
