class Left_Factor < Traverser_Clone2
  memoize "traverse"
  use_global_memo
end
class Left_Factor < Traverser_Clone2
  def merge(ary)
    return [ary[0]] if ary.size==1
    a=autovar.normalize
    [Seq[Bind[a,first(ary[0])],Or[*(ary.map{|e| rest(e,binds(e,a))})]]]
  end
end

class Left_Factor < Traverser_Clone2

def _Bind_lb_src_66c4(bind)
Bind[src.name,bind[1]]
end
def _Or_lb__ti__lp_bin_849e(bind)
Or[*(bind[1]+merge(bind[2]))]

end
def _Seq_lb__lb_bin_4ce0(bind)
Seq[[bind[1]]+bind[2]]
end
def __lb_bind_lb_1_rb__1906(bind)
[bind[1]]
end
def __lp_bind_lb_1_rb__34a7(bind)
(bind[1]==first(bind[2])) || FAIL
end
def __lp_bind_lb_1_rb__b868(bind)
(bind[1]!=first(bind[2])) || FAIL
end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__pl__4651(bind)
bind[1]+[bind[2]]
end
def _bind_lb_1_rb__pl__4c53(bind)
bind[1]+merge(bind[2])
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _first_lp_bi_150a(bind)
first(bind[1])
end
def _if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def _src_dot_expr_ef77(bind)
src.expr
end

end


def left_factor_compiled_by
'29947cda8da6d0bf75b2264d699dfddc'
end
def left_factor_source_hash
'cec6a4e793cc0036d9ff7a336cb4230b'
end
def testversionleft_factor(r)
 raise "invalid version" if r!=left_factor_version
end
def left_factor_version
'447b6298339fd271ea5449884e48d96e'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/left_factor_c"
