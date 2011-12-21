class Detect_Implicit_Variables < Visitor

def Detect_Implicit_Variables__append_lp_bind(bind)
_append(bind[2],bind[3])
end
def Detect_Implicit_Variables__append_lp_bind2(bind)
_append(bind[4],bind[5])
end
def Detect_Implicit_Variables__append_lp_bind3(bind)
_append(bind[0],bind[1])
end
def Detect_Implicit_Variables__at_vars(bind)
@vars
end
def Detect_Implicit_Variables__at_vars_eq_Hash_dot_n(bind)
@vars=Hash.new(0)
end
def Detect_Implicit_Variables__at_vars_lb_bind_lb_1(bind)
@vars[bind[1]]+=1
end
def Detect_Implicit_Variables__lp_src_dot_instanc(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end


class Add_Implicit_Variables < Traverser_Clone2

def Add_Implicit_Variables_Append_lb_bind_lb_(bind)
Append[bind[3],src]
end
def Add_Implicit_Variables__Bind_lp_bind_lb_3(bind)
_Bind(bind[3],src)
end
def Add_Implicit_Variables__append_lp_bind(bind)
_append(bind[4],bind[5])
end
def Add_Implicit_Variables__append_lp_bind2(bind)
_append(bind[9],bind[10])
end
def Add_Implicit_Variables__append_lp_bind3(bind)
_append(bind[6],bind[8])
end
def Add_Implicit_Variables__append_lp_bind4(bind)
_append(bind[0],bind[1])
end
def Add_Implicit_Variables__append_lp_bind5(bind)
_append(bind[8],bind[13])
end
def Add_Implicit_Variables__at_changed(bind)
@changed
end
def Add_Implicit_Variables__at_changed_eq_fal(bind)
@changed=false
end
def Add_Implicit_Variables__at_changed_eq_tru(bind)
@changed=true
end
def Add_Implicit_Variables__at_vars_eq_bind_lb_0(bind)
@vars=bind[0]
end
def Add_Implicit_Variables__lp__at_vars_lb_bind_lb_(bind)
(@vars[bind[3]]>=1) || FAIL
end
def Add_Implicit_Variables__lp__at_vars_lb_bind_lb_2(bind)
(@vars[bind[3]]> 1) || FAIL
end
def Add_Implicit_Variables__lp_bind_lb_4_rb_(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Add_Implicit_Variables__lp_src_dot_instanc(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Add_Implicit_Variables_bind_lb_5_rb__lt__lt_bin(bind)
bind[5]<<bind[7]
end
def Add_Implicit_Variables_if_sp_bind_lb_5_rb_(bind)
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
'472138cdffc8d639efb367af8b54ad09'
end
def implicit_variables_source_hash
'6a0a31cf7e531a56757bd541162a71ff'
end
def testversionimplicit_variables(r)
 raise "invalid version" if r!=implicit_variables_version
end
def implicit_variables_version
'727995f0265d4dcd629927ff58542659'
end
  require 'compiled/implicit_variables_c'
