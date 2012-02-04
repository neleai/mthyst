class DetectCalls < Visitor

def DetectCalls__append_lp__d113(bind)
_append(bind[1],bind[2])
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

def Inliner2_Seq_lb_src_dot__3406(bind)
Seq[src.body,Local["_result",src.bnding]]
end
def Inliner2__append_lp__d113(bind)
_append(bind[1],bind[2])
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
def Inliner2__at_name_eq_bi_5da3(bind)
@name=bind[1];@args=bind[2];@body=bind[3] 
end
def Inliner2__lp_bind_lb_1_rb__709e(bind)
(bind[1]==@name) || FAIL
end
def Inliner2__lp_bind_lb_1_rb__ee3d(bind)
(bind[1]||=bind[2].dup;bind[3]=true;bind[1].instance_variable_set(bind[4],bind[5])) if @changed && bind[5]!=instance_variable_get(bind[4])
end
def Inliner2__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Inliner2_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Inliner2_body_eq__at_bo_4270(bind)
body=@body; bind[1].each_index{|i| body=Seq[Bind[@args[i],bind[1][i]],body] } ; body

end
def Inliner2_if_sp_bind_lb__8e0b(bind)
if bind[1]
             @changed=true;bind[2].normalize
           else
            @changed=bind[3]
            src
          end
end
def Inliner2_src_25d9(bind)
src
end
def Inliner2_src_dot_args_2df5(bind)
src.args
end
def Inliner2_src_dot_loca_1df0(bind)
src.locals
end
def Inliner2_src_dot_name_80f3(bind)
src.name
end

end



def inliner2_compiled_by
'19c0eec80c824b6bc9c1875ee0fc4da1'
end
def inliner2_source_hash
'8b55baa0765b22b5c8f5c6d36559323d'
end
def testversioninliner2(r)
 raise "invalid version" if r!=inliner2_version
end
def inliner2_version
'bac502346bb27deaf47c64c47990f1a4'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/inliner2_c"
