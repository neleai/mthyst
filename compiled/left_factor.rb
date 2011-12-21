class Left_Factor < Traverser_Clone2
	def merge(ary)
		return ary[0] if ary.size==1
		a=autovar.normalize
		[Seq[Bind[a,first(ary[0])],Or[*(ary.map{|e| rest(e,binds(e,a))})]]]
	end
end

class Left_Factor < Traverser_Clone2

def Left_Factor_Bind_lb_src_4a7e(bind)
Bind[src.name,bind[7]]
end
def Left_Factor_Or_lb__ti__lp_bin_1272(bind)
Or[*(bind[2]+merge(bind[3]))]
end
def Left_Factor_Or_lb__ti__lp_bin_c6d5(bind)
Or[*(bind[5]+merge(bind[3]))]
end
def Left_Factor_Seq_lb__lb_bin_f9f4(bind)
Seq[[bind[7]]+bind[6]]
end
def Left_Factor__append_lp__088f(bind)
_append(bind[4],bind[5])
end
def Left_Factor__append_lp__324d(bind)
_append(bind[8],bind[13])
end
def Left_Factor__append_lp__37c5(bind)
_append(bind[6],bind[8])
end
def Left_Factor__append_lp__473a(bind)
_append(bind[13],bind[14])
end
def Left_Factor__append_lp__be78(bind)
_append(bind[11],bind[12])
end
def Left_Factor__append_lp__cbd1(bind)
_append(bind[0],bind[1])
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
def Left_Factor__lp_bind_lb_1_rb__68a2(bind)
(bind[1]==first(bind[0])) || FAIL
end
def Left_Factor__lp_bind_lb_4_rb__ba59(bind)
(bind[4]==first(bind[6])) || FAIL
end
def Left_Factor__lp_bind_lb_4_rb__d863(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Left_Factor__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Left_Factor_bind_lb_1_rb__eq__7142(bind)
bind[1]==first(bind[0])
end
def Left_Factor_bind_lb_2_rb__pl__9bc3(bind)
bind[2]+merge(bind[3])
end
def Left_Factor_bind_lb_3_rb__pl__4c4b(bind)
bind[3]+[bind[6]]
end
def Left_Factor_bind_lb_3_rb__pl__a9ae(bind)
bind[3]+[bind[0]]
end
def Left_Factor_bind_lb_4_rb__eq__07a6(bind)
bind[4]==first(bind[6])
end
def Left_Factor_bind_lb_5_rb__lt__dccc(bind)
bind[5]<<bind[7]
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
def Left_Factor_if_sp_bind_lb__b5ce(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
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
'f280894dfa24d87154dc83a198031d38'
end
def left_factor_source_hash
'69c45f0c350eb4d1ca0a4f019cc7afa8'
end
def testversionleft_factor(r)
 raise "invalid version" if r!=left_factor_version
end
def left_factor_version
'352908f4d113c28e5a2819d1b9eee7d7'
end
  require 'compiled/left_factor_c'
