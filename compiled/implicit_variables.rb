class Detect_Implicit_Variables < Visitor

def Detect_Implicit_Variables__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def Detect_Implicit_Variables__at_vars_a187(bind)
@vars
end
def Detect_Implicit_Variables__at_vars_eq_Ha_dec8(bind)
@vars=Hash.new(0)
end
def Detect_Implicit_Variables__at_vars_lb_bi_edce(bind)
@vars[bind[1]]+=1
end
def Detect_Implicit_Variables__lp_src_dot_ins_a413(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end


class Add_Implicit_Variables < Traverser_Clone2

def Add_Implicit_Variables__at_bnding_eq__b94a(bind)
@bnding=src.bnding
end
def Add_Implicit_Variables__at_locals_eq__545d(bind)
@locals=[]
end
def Add_Implicit_Variables__at_vars_eq_bi_1ca4(bind)
@vars=bind[1]
end
def Add_Implicit_Variables__lp__at_vars_lb_b_160d(bind)
(@vars[bind[1]]>=1) || FAIL
end
def Add_Implicit_Variables__lp__at_vars_lb_b_5cb3(bind)
(@vars[bind[1]]> 1) || FAIL
end
def Add_Implicit_Variables__lp_src_dot_cla_e144(bind)
(src.class.instance_variable_get(:@attrs)).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Add_Implicit_Variables_bind_lb_1_rb__dot__1ef4(bind)
bind[1].locals+=@locals;bind[1]
end
def Add_Implicit_Variables_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Add_Implicit_Variables_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Add_Implicit_Variables_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Add_Implicit_Variables_l_eq_Local_lb__2887(bind)
l=Local[bind[1],@bnding];@locals<<l;Append[bind[1],src]
end
def Add_Implicit_Variables_l_eq_Local_lb__a11b(bind)
l=Local[bind[1],@bnding];@locals<<l;Bind[l,src]
end

end


def implicit_variables_compiled_by
'a5167e9e023bec198edee4050fddb409'
end
def implicit_variables_source_hash
'322999144ec82b0fd6ab316082e79398'
end
def testversionimplicit_variables(r)
 raise "invalid version" if r!=implicit_variables_version
end
def implicit_variables_version
'97b0314565f37eb13b3cda9619d0b41e'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/implicit_variables_c"
