class DetectCalls < Visitor

def __append_lp__d113(bind)
_append(bind[1],bind[2])
end
def __at_calls_7f81(bind)
@calls
end
def __at_calls_eq__le__39e9(bind)
@calls={}
end
def __at_calls_lb_b_e709(bind)
@calls[bind[1]]=true 
end
def __lp_src_dot_ins_a413(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end


class Inliner2 < Traverser_Clone2

def _Seq_lb_src_dot__3406(bind)
Seq[src.body,Local["_result",src.bnding]]
end
def __append_lp__d113(bind)
_append(bind[1],bind[2])
end
def __at_name_eq_bi_5da3(bind)
@name=bind[1];@args=bind[2];@body=bind[3] 
end
def __lp_bind_lb_1_rb__709e(bind)
(bind[1]==@name) || FAIL
end
def __lp_src_dot_cla_e144(bind)
(src.class.instance_variable_get(:@attrs)).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _body_eq__at_bo_4270(bind)
body=@body; bind[1].each_index{|i| body=Seq[Bind[@args[i],bind[1][i]],body] } ; body

end
def _if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def _src_dot_args_2df5(bind)
src.args
end
def _src_dot_loca_1df0(bind)
src.locals
end
def _src_dot_name_80f3(bind)
src.name
end

end



def inliner2_compiled_by
'09cd215b63778a251028c3ab326dbf85'
end
def inliner2_source_hash
'8b55baa0765b22b5c8f5c6d36559323d'
end
def testversioninliner2(r)
 raise "invalid version" if r!=inliner2_version
end
def inliner2_version
'e2bbcae49f1aeea9f7e747490c9e09ab'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/inliner2_c"
