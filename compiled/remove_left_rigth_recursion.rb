#todo bind.reset to reset locals

class Remove_Left_Recursion < Traverser_Clone2

def Remove_Left_Recursion_Bind_lb_bin(bind)
Bind[bind[20],bind[22]]
end
def Remove_Left_Recursion_Bind_lb_bin2(bind)
Bind[bind[6],bind[8]]
end
def Remove_Left_Recursion_Seq_lb_Seq_lb_(bind)
Seq[Seq[*bind[9],Or[*bind[1]]],Many[Act["x=",bind[6],";bind.reset;"bind[6],"=x"],Seq[*bind[9],Or[*bind[0]],*bind[34]]],bind[6]]
end
def Remove_Left_Recursion_Seq_lb__ti__lp__lb_b(bind)
Seq[*([bind[24]]+bind[27])]
end
def Remove_Left_Recursion__append_lp_(bind)
_append(bind[7],bind[8])
end
def Remove_Left_Recursion__append_lp_2(bind)
_append(bind[25],bind[26])
end
def Remove_Left_Recursion__append_lp_3(bind)
_append(bind[0],bind[28])
end
def Remove_Left_Recursion__append_lp_4(bind)
_append(bind[1],bind[31])
end
def Remove_Left_Recursion__append_lp_5(bind)
_append(bind[11],bind[30])
end
def Remove_Left_Recursion__append_lp_6(bind)
_append(bind[32],bind[33])
end
def Remove_Left_Recursion__lp_src_dot_nam(bind)
(src.name==bind[15]) || FAIL
end
def Remove_Left_Recursion__lp_src_dot_nam2(bind)
(src.name==bind[1]) || FAIL
end
def Remove_Left_Recursion_bind_lb_21_rb_(bind)
bind[21]=[bind[21]]
end
def Remove_Left_Recursion_bind_lb_2_rb__eq_(bind)
bind[2]=[bind[2]]
end
def Remove_Left_Recursion_bind_lb_4_rb__eq_(bind)
bind[4]=[bind[4]]
end
def Remove_Left_Recursion_bind_lb_7_rb__eq_(bind)
bind[7]=[bind[7]]
end
def Remove_Left_Recursion_src(bind)
src
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
'37b42f1d1797e2f81f6ef9b6c4bc2570'
end
def remove_left_rigth_recursion_source_hash
'1be7c270e787081dd27633a47a0f14f3'
end
def testversionremove_left_rigth_recursion(r)
 raise "invalid version" if r!=remove_left_rigth_recursion_version
end
def remove_left_rigth_recursion_version
'3b4eb264a06a560d4b1509c21d6ad8c2'
end
  require 'compiled/remove_left_rigth_recursion_c'
