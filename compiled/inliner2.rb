class DetectCalls < Visitor

def DetectCalls__append_lp_(bind)
_append(bind[2],bind[3])
end
def DetectCalls__append_lp_2(bind)
_append(bind[4],bind[5])
end
def DetectCalls__append_lp_3(bind)
_append(bind[0],bind[1])
end
def DetectCalls__at_calls(bind)
@calls
end
def DetectCalls__at_calls_eq_(bind)
@calls={}
end
def DetectCalls__at_calls_lb_b(bind)
@calls[bind[1]]=true 
end
def DetectCalls__lp_src_dot_ins(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end
def DetectCalls_bind_lb_2_rb__eq_(bind)
bind[2]=[bind[2]]
end

end


class Inliner2 < Traverser_Clone2

def Inliner2__append_lp_(bind)
_append(bind[2],bind[3])
end
def Inliner2__append_lp_2(bind)
_append(bind[6],bind[8])
end
def Inliner2__append_lp_3(bind)
_append(bind[0],bind[1])
end
def Inliner2__append_lp_4(bind)
_append(bind[8],bind[13])
end
def Inliner2__at_changed(bind)
@changed=true
end
def Inliner2__at_changed2(bind)
@changed
end
def Inliner2__at_changed3(bind)
@changed=false
end
def Inliner2__at_name_eq_bi(bind)
@name=bind[4];@args=bind[5];@body=bind[6] 
end
def Inliner2__lp_bind_lb_1_rb_(bind)
(bind[1]==@name) || FAIL
end
def Inliner2__lp_bind_lb_4_rb_(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Inliner2__lp_src_dot_ins(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Inliner2_bind_lb_2_rb__eq_(bind)
bind[2]=[bind[2]]
end
def Inliner2_bind_lb_5_rb__lt_(bind)
bind[5]<<bind[7]
end
def Inliner2_bind_lb_6_rb__eq_(bind)
bind[6]=[bind[6]]
end
def Inliner2_bind_lb_7_rb__eq_(bind)
bind[7]=[bind[7]]
end
def Inliner2_body_eq__at_bo(bind)
body=@body; bind[4].each_index{|i| body=Seq[Bind[@args[i],bind[4][i]],body] } ; body
end
def Inliner2_if_sp_bind_lb_(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Inliner2_src(bind)
src
end
def Inliner2_src_dot_args(bind)
src.args
end
def Inliner2_src_dot_body(bind)
src.body
end
def Inliner2_src_dot_loca(bind)
src.locals
end
def Inliner2_src_dot_name(bind)
src.name
end

end


class Replace_Super < Traverser_Clone2

def Replace_Super_Apply_lb__ti__lp_(bind)
Apply[*([@name]+bind[4])] 
end
def Replace_Super__append_lp_(bind)
_append(bind[2],bind[3])
end
def Replace_Super__append_lp_2(bind)
_append(bind[6],bind[8])
end
def Replace_Super__append_lp_3(bind)
_append(bind[0],bind[1])
end
def Replace_Super__append_lp_4(bind)
_append(bind[8],bind[13])
end
def Replace_Super__at_changed(bind)
@changed=true
end
def Replace_Super__at_changed2(bind)
@changed
end
def Replace_Super__at_changed3(bind)
@changed=false
end
def Replace_Super__at_name_eq_bi(bind)
@name=bind[0];
end
def Replace_Super__lp_bind_lb_1_rb_(bind)
(bind[1]=="super") || FAIL
end
def Replace_Super__lp_bind_lb_4_rb_(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Replace_Super__lp_src_dot_ins(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Replace_Super_bind_lb_2_rb__eq_(bind)
bind[2]=[bind[2]]
end
def Replace_Super_bind_lb_5_rb__lt_(bind)
bind[5]<<bind[7]
end
def Replace_Super_bind_lb_6_rb__eq_(bind)
bind[6]=[bind[6]]
end
def Replace_Super_if_sp_bind_lb_(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Replace_Super_src(bind)
src
end

end


def inliner2_compiled_by
'15e1c38f47587b315582c55f3379d77a'
end
def inliner2_source_hash
'eca6429e1f65c5d4367c65294557dc01'
end
def testversioninliner2(r)
 raise "invalid version" if r!=inliner2_version
end
def inliner2_version
'b78bde275309f2c8537f044e3a068dc1'
end
  require 'compiled/inliner2_c'
