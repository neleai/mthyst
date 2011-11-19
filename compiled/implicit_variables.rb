class Detect_Implicit_Variables < Visitor

def Detect_Implicit_Variables__append_lp_1(bind)
_append(bind[2],bind[3])
end
def Detect_Implicit_Variables__append_lp_2(bind)
_append(bind[4],bind[5])
end
def Detect_Implicit_Variables__append_lp_3(bind)
_append(bind[0],bind[1])
end
def Detect_Implicit_Variables__at_vars1(bind)
@vars
end
def Detect_Implicit_Variables__at_vars_eq_Ha1(bind)
@vars=Hash.new(0)
end
def Detect_Implicit_Variables__at_vars_lb_bi1(bind)
@vars[bind[1]]+=1
end
def Detect_Implicit_Variables__lp_src_dot_ins1(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end
def Detect_Implicit_Variables_bind_lb_2_rb__eq_1(bind)
bind[2]=[bind[2]]
end

end


class Add_Implicit_Variables < Traverser_Clone2

def Add_Implicit_Variables_Append_lb_b1(bind)
Append[bind[3],src]
end
def Add_Implicit_Variables__Bind_lp_bi1(bind)
_Bind(bind[3],src)
end
def Add_Implicit_Variables__append_lp_1(bind)
_append(bind[4],bind[5])
end
def Add_Implicit_Variables__append_lp_2(bind)
_append(bind[9],bind[10])
end
def Add_Implicit_Variables__append_lp_3(bind)
_append(bind[6],bind[8])
end
def Add_Implicit_Variables__append_lp_4(bind)
_append(bind[0],bind[1])
end
def Add_Implicit_Variables__append_lp_5(bind)
_append(bind[8],bind[13])
end
def Add_Implicit_Variables__at_changed1(bind)
@changed=true
end
def Add_Implicit_Variables__at_changed2(bind)
@changed
end
def Add_Implicit_Variables__at_changed3(bind)
@changed=false
end
def Add_Implicit_Variables__at_vars_eq_bi1(bind)
@vars=bind[0]
end
def Add_Implicit_Variables__lp__at_vars_lb_b1(bind)
(@vars[bind[3]]>=1) || FAIL
end
def Add_Implicit_Variables__lp__at_vars_lb_b2(bind)
(@vars[bind[3]]> 1) || FAIL
end
def Add_Implicit_Variables__lp_bind_lb_4_rb_1(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Add_Implicit_Variables__lp_src_dot_ins1(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Add_Implicit_Variables_bind_lb_5_rb__lt_1(bind)
bind[5]<<bind[7]
end
def Add_Implicit_Variables_bind_lb_6_rb__eq_1(bind)
bind[6]=[bind[6]]
end
def Add_Implicit_Variables_if1(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Add_Implicit_Variables_src1(bind)
src
end

end


def implicit_variables_compiled_by
'efb04d97d57b1eb5714da35fba16915c'
end
def implicit_variables_source_hash
'6a0a31cf7e531a56757bd541162a71ff'
end
def testversionimplicit_variables(r)
 raise "invalid version" if r!=implicit_variables_version
end
def implicit_variables_version
'bc9da89b88a1b2ab0f88fe67f085ce74'
end
  require 'compiled/implicit_variables_c'
