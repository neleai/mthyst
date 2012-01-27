class Left_Factor < Traverser_Clone2
	def merge(ary)
		return [ary[0]] if ary.size==1
		a=autovar.normalize
		[Seq[Bind[a,first(ary[0])],Or[*(ary.map{|e| rest(e,binds(e,a))})]]]
	end
end

class Left_Factor < Traverser_Clone2

def Left_Factor_Bind_lb_src_b693(bind)
Bind[src.name,bind[8]]
end
def Left_Factor_Or_lb__ti__lp_bin_142c(bind)
Or[*(bind[2]+merge(bind[3]))]

end
def Left_Factor_Or_lb__ti__lp_bin_5361(bind)
Or[*(bind[5]+merge(bind[3]))]

end
def Left_Factor_Seq_lb__lb_bin_cbdc(bind)
Seq[[bind[6]]+bind[5]]
end
def Left_Factor__append_lp__dd73(bind)
_append(bind[3],bind[4])
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
def Left_Factor__lb_bind_lb_0_rb__fb2d(bind)
[bind[0]]
end
def Left_Factor__lb_bind_lb_2_rb__5b5d(bind)
[bind[2]]
end
def Left_Factor__lb_bind_lb_6_rb__ef11(bind)
[bind[6]]
end
def Left_Factor__lp_(bind)
(!(bind[4]==first(bind[6]))) || FAIL
end
def Left_Factor__lp_2(bind)
(!(bind[1]==first(bind[0]))) || FAIL
end
def Left_Factor__lp_bind_lb_1_rb__68a2(bind)
(bind[1]==first(bind[0])) || FAIL
end
def Left_Factor__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Left_Factor__lp_bind_lb_4_rb__ba59(bind)
(bind[4]==first(bind[6])) || FAIL
end
def Left_Factor__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Left_Factor_bind_lb_2_rb__pl__9bc3(bind)
bind[2]+merge(bind[3])
end
def Left_Factor_bind_lb_3_rb__lt__bb51(bind)
bind[3]<<bind[4]
end
def Left_Factor_bind_lb_3_rb__pl__4c4b(bind)
bind[3]+[bind[6]]
end
def Left_Factor_bind_lb_3_rb__pl__a9ae(bind)
bind[3]+[bind[0]]
end
def Left_Factor_bind_lb_5_rb__pl__1ee4(bind)
bind[5]+merge(bind[3])
end
def Left_Factor_first_lp_bi_16f8(bind)
first(bind[0])
end
def Left_Factor_first_lp_bi_80ce(bind)
first(bind[6])
end
def Left_Factor_first_lp_bi_a16c(bind)
first(bind[2])
end
def Left_Factor_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
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
'872fdc771072ce96f735a059e83b6bfc'
end
def left_factor_source_hash
'13ac88a620044bb451529ded733cdbf5'
end
def testversionleft_factor(r)
 raise "invalid version" if r!=left_factor_version
end
def left_factor_version
'6cb0addcf00068e25160d22f2d0bf458'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/left_factor_c"
