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
def Add_Implicit_Variables_bind_lb_1_rb__eq__1818(bind)
bind[1]=bind[1].dup;bind[1].locals+=@locals;bind[1].freeze
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
'1daba39aa225c8d67b3981fae396659d'
end
def implicit_variables_source_hash
'4f5e5379cc5ab7c4f83835f60aedd77c'
end
def testversionimplicit_variables(r)
 raise "invalid version" if r!=implicit_variables_version
end
def implicit_variables_version
'd31e2c85822e26e80436d2ce3c05c748'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/implicit_variables_c"
