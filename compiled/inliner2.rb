class DetectCalls < Visitor

def DetectCalls__append_lp__088f(bind)
_append(bind[4],bind[5])
end
def DetectCalls__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
def DetectCalls__append_lp__9ca5(bind)
_append(bind[10],bind[11])
end
def DetectCalls__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def DetectCalls__at_calls_7f81(bind)
@calls
end
def DetectCalls__at_calls_eq__le__39e9(bind)
@calls={}
end
def DetectCalls__at_calls_lb_b_e709(bind)
@calls[bind[1]]=true 
end
def DetectCalls__lp_src_dot_ins_a413(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end


class Inliner2 < Traverser_Clone2

def Inliner2__append_lp__324d(bind)
_append(bind[8],bind[13])
end
def Inliner2__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
def Inliner2__append_lp__984f(bind)
_append(bind[12],bind[14])
end
def Inliner2__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Inliner2__at_changed_5352(bind)
@changed=true
end
def Inliner2__at_changed_b885(bind)
@changed=false
end
def Inliner2__at_changed_c681(bind)
@changed
end
def Inliner2__at_name_eq_bi_2960(bind)
@name=bind[4];@args=bind[5];@body=bind[6] 
end
def Inliner2__lp_bind_lb_1_rb__709e(bind)
(bind[1]==@name) || FAIL
end
def Inliner2__lp_bind_lb_4_rb__d863(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Inliner2__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Inliner2_bind_lb_11_rb__a30c(bind)
bind[11]<<bind[13]
end
def Inliner2_body_eq__at_bo_c02f(bind)
body=@body; bind[4].each_index{|i| body=Seq[Bind[@args[i],bind[4][i]],body] } ; body

end
def Inliner2_if_sp_bind_lb__b5ce(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Inliner2_src_25d9(bind)
src
end
def Inliner2_src_dot_args_2df5(bind)
src.args
end
def Inliner2_src_dot_body_519e(bind)
src.body
end
def Inliner2_src_dot_loca_1df0(bind)
src.locals
end
def Inliner2_src_dot_name_80f3(bind)
src.name
end

end


class Replace_Super < Traverser_Clone2

def Replace_Super_Apply_lb__ti__lp__67ec(bind)
Apply[*([@name]+bind[4])] 
end
def Replace_Super__append_lp__324d(bind)
_append(bind[8],bind[13])
end
def Replace_Super__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
def Replace_Super__append_lp__984f(bind)
_append(bind[12],bind[14])
end
def Replace_Super__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Replace_Super__at_changed_5352(bind)
@changed=true
end
def Replace_Super__at_changed_b885(bind)
@changed=false
end
def Replace_Super__at_changed_c681(bind)
@changed
end
def Replace_Super__at_name_eq_bi_3e1b(bind)
@name=bind[0];
end
def Replace_Super__lp_bind_lb_1_rb__d0f1(bind)
(bind[1]=="super") || FAIL
end
def Replace_Super__lp_bind_lb_4_rb__d863(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Replace_Super__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Replace_Super_bind_lb_11_rb__a30c(bind)
bind[11]<<bind[13]
end
def Replace_Super_if_sp_bind_lb__b5ce(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Replace_Super_src_25d9(bind)
src
end

end


def inliner2_compiled_by
'3403c24c3d76d44ace4bd3d7f406d11d'
end
def inliner2_source_hash
'eca6429e1f65c5d4367c65294557dc01'
end
def testversioninliner2(r)
 raise "invalid version" if r!=inliner2_version
end
def inliner2_version
'bc4d9df78e9ae30d2d975e4e32cb9c33'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/inliner2_c"
