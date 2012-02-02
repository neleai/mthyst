class DetectCalls < Visitor

def DetectCalls__append_lp__088f(bind)
_append(bind[4],bind[5])
end
def DetectCalls__append_lp__4de3(bind)
_append(bind[2],bind[3])
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
def Inliner2__append_lp__4de3(bind)
_append(bind[2],bind[3])
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
def Inliner2__at_name_eq_bi_0dee(bind)
@name=bind[5];@args=bind[6];@body=bind[7] 
end
def Inliner2__lp_bind_lb_1_rb__709e(bind)
(bind[1]==@name) || FAIL
end
def Inliner2__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Inliner2__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Inliner2_bind_lb_5_rb__lt__1671(bind)
bind[5]<<bind[6]
end
def Inliner2_body_eq__at_bo_c02f(bind)
body=@body; bind[4].each_index{|i| body=Seq[Bind[@args[i],bind[4][i]],body] } ; body

end
def Inliner2_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
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
'ca192381fe63462b460f447d35ad9f21'
end
def inliner2_source_hash
'8b55baa0765b22b5c8f5c6d36559323d'
end
def testversioninliner2(r)
 raise "invalid version" if r!=inliner2_version
end
def inliner2_version
'bdc8774a33654ccac08f7225d0f298fa'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/inliner2_c"
