class Detect_Implicit_Variables < Visitor

def Detect_Implicit_Variables__append_lp__088f(bind)
_append(bind[4],bind[5])
end
def Detect_Implicit_Variables__append_lp__4de3(bind)
_append(bind[2],bind[3])
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

def Add_Implicit_Variables_Append_lb_b_e8d4(bind)
Append[bind[2],src]
end
def Add_Implicit_Variables__Bind_lp_bi_d3b8(bind)
_Bind(bind[2],src)
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
def Add_Implicit_Variables__at_locals_eq__545d(bind)
@locals=[]
end
def Add_Implicit_Variables__at_vars_eq_bi_4318(bind)
@vars=bind[0]
end
def Add_Implicit_Variables__lp__at_vars_lb_b_2b5e(bind)
(@vars[bind[2]]> 1) || FAIL
end
def Add_Implicit_Variables__lp__at_vars_lb_b_bb92(bind)
(@vars[bind[2]]>=1) || FAIL
end
def Add_Implicit_Variables__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Add_Implicit_Variables__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Add_Implicit_Variables_bind_lb_2_rb__dot__bd50(bind)
bind[2].locals+=@locals;bind[2]
end
def Add_Implicit_Variables_bind_lb_5_rb__lt__1671(bind)
bind[5]<<bind[6]
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
'22f56ef0e496591e92868978666dbf6b'
end
def implicit_variables_source_hash
'53e96b8754e7c9037a49314d0c30370e'
end
def testversionimplicit_variables(r)
 raise "invalid version" if r!=implicit_variables_version
end
def implicit_variables_version
'c923ca0ffa92cc2f89ccd0b674b525d8'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/implicit_variables_c"
