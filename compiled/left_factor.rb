class Left_Factor < Traverser_Clone2
	def merge(ary)
		return ary[0] if ary.size==1
		a=autovar.normalize
		[Seq[Bind[a,first(ary[0])],Or[*(ary.map{|e| rest(e,binds(e,a))})]]]
	end
end

class Left_Factor < Traverser_Clone2

def Left_Factor_Bind_lb_src(bind)
Bind[src.name,bind[7]]
end
def Left_Factor_Or_lb__ti__lp_bin(bind)
Or[*(bind[5]+merge(bind[3]))]
end
def Left_Factor_Or_lb__ti__lp_bin2(bind)
Or[*(bind[2]+merge(bind[3]))]
end
def Left_Factor_Seq_lb__lb_bin(bind)
Seq[[bind[7]]+bind[6]]
end
def Left_Factor__append_lp_(bind)
_append(bind[4],bind[5])
end
def Left_Factor__append_lp_2(bind)
_append(bind[11],bind[12])
end
def Left_Factor__append_lp_3(bind)
_append(bind[13],bind[14])
end
def Left_Factor__append_lp_4(bind)
_append(bind[6],bind[8])
end
def Left_Factor__append_lp_5(bind)
_append(bind[0],bind[1])
end
def Left_Factor__append_lp_6(bind)
_append(bind[8],bind[13])
end
def Left_Factor__at_changed(bind)
@changed=true
end
def Left_Factor__at_changed2(bind)
@changed
end
def Left_Factor__at_changed3(bind)
@changed=false
end
def Left_Factor__lb_bind_lb_0_rb_(bind)
[bind[0]]
end
def Left_Factor__lb_bind_lb_2_rb_(bind)
[bind[2]]
end
def Left_Factor__lb_bind_lb_6_rb_(bind)
[bind[6]]
end
def Left_Factor__lp_bind_lb_1_rb_(bind)
(bind[1]==first(bind[0])) || FAIL
end
def Left_Factor__lp_bind_lb_4_rb_(bind)
(bind[4]==first(bind[6])) || FAIL
end
def Left_Factor__lp_bind_lb_4_rb_2(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Left_Factor__lp_src_dot_ins(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Left_Factor_bind_lb_1_rb__eq_(bind)
bind[1]==first(bind[0])
end
def Left_Factor_bind_lb_2_rb__pl_(bind)
bind[2]+merge(bind[3])
end
def Left_Factor_bind_lb_3_rb__pl_(bind)
bind[3]+[bind[6]]
end
def Left_Factor_bind_lb_3_rb__pl_2(bind)
bind[3]+[bind[0]]
end
def Left_Factor_bind_lb_4_rb__eq_(bind)
bind[4]==first(bind[6])
end
def Left_Factor_bind_lb_5_rb__lt_(bind)
bind[5]<<bind[7]
end
def Left_Factor_bind_lb_5_rb__pl_(bind)
bind[5]+merge(bind[3])
end
def Left_Factor_first_lp_bi(bind)
first(bind[2])
end
def Left_Factor_first_lp_bi2(bind)
first(bind[6])
end
def Left_Factor_first_lp_bi3(bind)
first(bind[0])
end
def Left_Factor_if_sp_bind_lb_(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Left_Factor_src(bind)
src
end
def Left_Factor_src_dot_expr(bind)
src.expr
end

end


def left_factor_compiled_by
'92b428064da6a913fda64382ede4c5da'
end
def left_factor_source_hash
'69c45f0c350eb4d1ca0a4f019cc7afa8'
end
def testversionleft_factor(r)
 raise "invalid version" if r!=left_factor_version
end
def left_factor_version
'344dc4b13758d75f0fdbf47889e98635'
end
  require 'compiled/left_factor_c'
