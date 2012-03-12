class DetectCalls < Visitor

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
def __at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def __at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __at_name_eq_bi_118d(bind)
@name=bind[1];bind[2][:args]=bind[3];bind[2][:body]=bind[4] 
end
def __lp_bind_lb_1_rb__709e(bind)
(bind[1]==@name) || FAIL
end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _body_eq_bin_3feb(bind)
body=bind[1][:body]; bind[2].each_index{|i| body=Seq[Bind[bind[1][:args][i],bind[2][i]],body] } ; body

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
'df338f494311d9fef4d66c14b8d23514'
end
def inliner2_source_hash
'ccb4238b3948e1d7730b8c07b91b1561'
end
def testversioninliner2(r)
 raise "invalid version" if r!=inliner2_version
end
def inliner2_version
'ab4ccc555f9c6b5826aa880c22add55d'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/inliner2_c"
