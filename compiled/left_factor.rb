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
def Left_Factor__at_changed_5352(bind)
@changed=true
end
def Left_Factor__at_changed_b885(bind)
@changed=false
end
def Left_Factor__at_changed_c681(bind)
@changed
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
def Left_Factor__lp_bind_lb_1_rb__ee3d(bind)
(bind[1]||=bind[2].dup;bind[3]=true;bind[1].instance_variable_set(bind[4],bind[5])) if @changed && bind[5]!=instance_variable_get(bind[4])
end
def Left_Factor__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
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
def Left_Factor_first_lp_bi_150a(bind)
first(bind[1])
end
def Left_Factor_if_sp_bind_lb__8e0b(bind)
if bind[1]
             @changed=true;bind[2].normalize
           else
            @changed=bind[3]
            src
          end
end
def Left_Factor_src_25d9(bind)
src
end
def Left_Factor_src_dot_expr_ef77(bind)
src.expr
end

end


def left_factor_compiled_by
'291d7f158caf055cd2565d0e90e442b6'
end
def left_factor_source_hash
'288fcdcac0f7906111e6e729c09b18a6'
end
def testversionleft_factor(r)
 raise "invalid version" if r!=left_factor_version
end
def left_factor_version
'2f19cb780f4b466415454023af421d26'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/left_factor_c"
