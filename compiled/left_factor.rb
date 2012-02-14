CurrentParser[:memoize]=["traverse"]
CurrentParser[:global_memo]=true
class Left_Factor < Traverser_Clone2
  def merge(ary)
    return [ary[0]] if ary.size==1
    a=autovar.normalize
    [Seq[Bind[a,first(ary[0])],Or[*(ary.map{|e| rest(e,binds(e,a))})]]]
  end
end

class Left_Factor < Traverser_Clone2

def Left_Factor_Bind_lb_src_66c4(bind)
Bind[src.name,bind[1]]
end
def Left_Factor_Or_lb__ti__lp_bin_849e(bind)
Or[*(bind[1]+merge(bind[2]))]

end
def Left_Factor_Seq_lb__lb_bin_4ce0(bind)
Seq[[bind[1]]+bind[2]]
end
def Left_Factor__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def Left_Factor__lb_bind_lb_1_rb__1906(bind)
[bind[1]]
end
def Left_Factor__lp_bind_lb_1_rb__34a7(bind)
(bind[1]==first(bind[2])) || FAIL
end
def Left_Factor__lp_bind_lb_1_rb__b868(bind)
(bind[1]!=first(bind[2])) || FAIL
end
def Left_Factor__lp_src_dot_cla_e144(bind)
(src.class.instance_variable_get(:@attrs)).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Left_Factor_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Left_Factor_bind_lb_1_rb__pl__4651(bind)
bind[1]+[bind[2]]
end
def Left_Factor_bind_lb_1_rb__pl__4c53(bind)
bind[1]+merge(bind[2])
end
def Left_Factor_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Left_Factor_first_lp_bi_150a(bind)
first(bind[1])
end
def Left_Factor_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Left_Factor_src_dot_expr_ef77(bind)
src.expr
end

end


def left_factor_compiled_by
'5f6dc97994d3b471784165e8fa3d72c5'
end
def left_factor_source_hash
'd3a646a1bffa0fed2b9c494804fbe042'
end
def testversionleft_factor(r)
 raise "invalid version" if r!=left_factor_version
end
def left_factor_version
'dc52dc11121f88423580e068d51b4c71'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/left_factor_c"
