class Detect_Implicit_Variables < Visitor

def Detect_Implicit_Variables__append_lp_(bind)
_append(bind[2],bind[3])
end
def Detect_Implicit_Variables__append_lp_2(bind)
_append(bind[4],bind[5])
end
def Detect_Implicit_Variables__append_lp_3(bind)
_append(bind[0],bind[1])
end
def Detect_Implicit_Variables__at_vars(bind)
@vars
end
def Detect_Implicit_Variables__at_vars_eq_Ha(bind)
@vars=Hash.new(0)
end
def Detect_Implicit_Variables__at_vars_lb_bi(bind)
@vars[bind[1]]+=1
end
def Detect_Implicit_Variables__lp_src_dot_ins(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end
def Detect_Implicit_Variables_bind_lb_2_rb__eq_(bind)
bind[2]=[bind[2]]
end

end


class Add_Implicit_Variables < Traverser_Clone2

def Add_Implicit_Variables_Append_lb_b(bind)
Append[bind[3],src]
end
def Add_Implicit_Variables__Bind_lp_bi(bind)
_Bind(bind[3],src)
end
def Add_Implicit_Variables__append_lp_(bind)
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
def Add_Implicit_Variables__at_changed(bind)
@changed=true
end
def Add_Implicit_Variables__at_changed2(bind)
@changed
end
def Add_Implicit_Variables__at_changed3(bind)
@changed=false
end
def Add_Implicit_Variables__at_vars_eq_bi(bind)
@vars=bind[0]
end
def Add_Implicit_Variables__lp__at_vars_lb_b(bind)
(@vars[bind[3]]>=1) || FAIL
end
def Add_Implicit_Variables__lp__at_vars_lb_b2(bind)
(@vars[bind[3]]> 1) || FAIL
end
def Add_Implicit_Variables__lp_bind_lb_4_rb_(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Add_Implicit_Variables__lp_src_dot_ins(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Add_Implicit_Variables_bind_lb_5_rb__lt_(bind)
bind[5]<<bind[7]
end
def Add_Implicit_Variables_bind_lb_6_rb__eq_(bind)
bind[6]=[bind[6]]
end
def Add_Implicit_Variables_if_sp_bind_lb_(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Add_Implicit_Variables_src(bind)
src
end

end


def implicit_variables_compiled_by
'37b42f1d1797e2f81f6ef9b6c4bc2570'
end
def implicit_variables_source_hash
'6a0a31cf7e531a56757bd541162a71ff'
end
def testversionimplicit_variables(r)
 raise "invalid version" if r!=implicit_variables_version
end
def implicit_variables_version
'0882aca4ab1f72f1d1a1e2a283b8aef1'
end
  require 'compiled/implicit_variables_c'
