#todo reset variables
#initialization

class Remove_Left_Recursion < Traverser_Clone2

def Remove_Left_Recursion_Bind_lb_bin(bind)
Bind[bind[17],bind[19]]
end
def Remove_Left_Recursion_Bind_lb_bin2(bind)
Bind[bind[6],bind[8]]
end
def Remove_Left_Recursion_Seq_lb_Seq_lb_(bind)
Seq[Seq[Or[*bind[1]]],Many[Seq[Or[*bind[0]],*bind[31]]],bind[6]]
end
def Remove_Left_Recursion_Seq_lb__ti__lp__lb_b(bind)
Seq[*([bind[21]]+bind[24])]
end
def Remove_Left_Recursion__append_lp_(bind)
_append(bind[22],bind[23])
end
def Remove_Left_Recursion__append_lp_2(bind)
_append(bind[0],bind[25])
end
def Remove_Left_Recursion__append_lp_3(bind)
_append(bind[1],bind[28])
end
def Remove_Left_Recursion__append_lp_4(bind)
_append(bind[8],bind[27])
end
def Remove_Left_Recursion__append_lp_5(bind)
_append(bind[29],bind[30])
end
def Remove_Left_Recursion__lp_src_dot_nam(bind)
(src.name==bind[12]) || FAIL
end
def Remove_Left_Recursion__lp_src_dot_nam2(bind)
(src.name==bind[1]) || FAIL
end
def Remove_Left_Recursion_bind_lb_18_rb_(bind)
bind[18]=[bind[18]]
end
def Remove_Left_Recursion_bind_lb_4_rb__eq_(bind)
bind[4]=[bind[4]]
end
def Remove_Left_Recursion_bind_lb_7_rb__eq_(bind)
bind[7]=[bind[7]]
end
def Remove_Left_Recursion_src_dot_ary_lb_(bind)
src.ary[-1]
end
def Remove_Left_Recursion_src_dot_body(bind)
src.body
end
def Remove_Left_Recursion_src_dot_expr(bind)
src.expr
end
def Remove_Left_Recursion_src_dot_name(bind)
src.name
end

end




def remove_left_rigth_recursion_compiled_by
'c4340c50c20eefe13981d7bfaa6354fb'
end
def remove_left_rigth_recursion_source_hash
'1604e1c7f4226805aa67e2684ce3aa00'
end
def testversionremove_left_rigth_recursion(r)
 raise "invalid version" if r!=remove_left_rigth_recursion_version
end
def remove_left_rigth_recursion_version
'1e9a5774b0249793fc73917632a621eb'
end
  require 'compiled/remove_left_rigth_recursion_c'
