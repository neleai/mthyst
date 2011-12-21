#todo bind.reset to reset locals

class Remove_Left_Recursion < Traverser_Clone2

def Remove_Left_Recursion_Bind_lb_bind_lb_20(bind)
Bind[bind[20],bind[22]]
end
def Remove_Left_Recursion_Bind_lb_bind_lb_6_rb_(bind)
Bind[bind[6],bind[8]]
end
def Remove_Left_Recursion_Seq_lb_Seq_lb_bind(bind)
Seq[Seq[bind[9]+[Or[*bind[1]]]],Many[Act[Args["x=",bind[6],";bind.reset;",bind[6],"=x"]],Seq[bind[9]+[Or[*bind[0]]]+bind[34]]],bind[6]]
end
def Remove_Left_Recursion_Seq_lb__ti__lp__lb_bind_lb_(bind)
Seq[*([bind[24]]+bind[27])]
end
def Remove_Left_Recursion__append_lp_bind(bind)
_append(bind[7],bind[8])
end
def Remove_Left_Recursion__append_lp_bind2(bind)
_append(bind[25],bind[26])
end
def Remove_Left_Recursion__append_lp_bind3(bind)
_append(bind[0],bind[28])
end
def Remove_Left_Recursion__append_lp_bind4(bind)
_append(bind[1],bind[31])
end
def Remove_Left_Recursion__append_lp_bind5(bind)
_append(bind[11],bind[30])
end
def Remove_Left_Recursion__append_lp_bind6(bind)
_append(bind[32],bind[33])
end
def Remove_Left_Recursion__lp_src_dot_name_eq__eq_b(bind)
(src.name==bind[15]) || FAIL
end
def Remove_Left_Recursion__lp_src_dot_name_eq__eq_b2(bind)
(src.name==bind[1]) || FAIL
end
def Remove_Left_Recursion_src(bind)
src
end
def Remove_Left_Recursion_src_dot_ary_lb__mi_1_rb_(bind)
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
'472138cdffc8d639efb367af8b54ad09'
end
def remove_left_rigth_recursion_source_hash
'82f5682f26abef9436e5f92f8bc34754'
end
def testversionremove_left_rigth_recursion(r)
 raise "invalid version" if r!=remove_left_rigth_recursion_version
end
def remove_left_rigth_recursion_version
'562ad05a1e91abde98b6dfec65e087a0'
end
  require 'compiled/remove_left_rigth_recursion_c'
