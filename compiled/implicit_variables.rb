class Detect_Implicit_Variables < Visitor

def Detect_Implicit_Variables__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
def Detect_Implicit_Variables__append_lp__9ca5(bind)
_append(bind[10],bind[11])
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

def Add_Implicit_Variables_Append_lb_b_7a4e(bind)
Append[bind[3],src]
end
def Add_Implicit_Variables__Bind_lp_bi_e107(bind)
_Bind(bind[3],src)
end
def Add_Implicit_Variables__at_changed_5352(bind)
@changed=true
end
def Add_Implicit_Variables__at_changed_b885(bind)
@changed=false
end
def Add_Implicit_Variables__at_changed_c681(bind)
@changed
end
def Add_Implicit_Variables__at_vars_eq_bi_4318(bind)
@vars=bind[0]
end
def Add_Implicit_Variables__lp__at_vars_lb_b_480a(bind)
(@vars[bind[3]]>=1) || FAIL
end
def Add_Implicit_Variables__lp__at_vars_lb_b_8beb(bind)
(@vars[bind[3]]> 1) || FAIL
end
def Add_Implicit_Variables__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Add_Implicit_Variables__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Add_Implicit_Variables_bind_lb_11_rb__6cc7(bind)
bind[11]<<bind[12]
end
def Add_Implicit_Variables_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def Add_Implicit_Variables_src_25d9(bind)
src
end

end


def implicit_variables_compiled_by
'2f8652ef25606865098ef75621c78e4b'
end
def implicit_variables_source_hash
'6a0a31cf7e531a56757bd541162a71ff'
end
def testversionimplicit_variables(r)
 raise "invalid version" if r!=implicit_variables_version
end
def implicit_variables_version
'709b21b41ac13cec6fec7ee39804a100'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/implicit_variables_c"
