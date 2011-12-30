#todo bind.reset to reset locals

class Remove_Left_Recursion < Traverser_Clone2

def Remove_Left_Recursion_Bind_lb_bin_9eb9(bind)
Bind[bind[19],bind[21]]
end
def Remove_Left_Recursion_Bind_lb_bin_b21e(bind)
Bind[bind[6],bind[8]]
end
def Remove_Left_Recursion_Seq_lb_Seq_lb__5a71(bind)
Seq[Seq[bind[9]+[Or[*bind[1]]]],Many[Act[Args["x=",bind[6],";bind.reset;",bind[6],"=x"]],Seq[bind[9]+[Or[*bind[0]]]+bind[31]]],bind[6]]
end
def Remove_Left_Recursion_Seq_lb__ti__lp__lb_b_0081(bind)
Seq[*([bind[23]]+bind[26])]
end
def Remove_Left_Recursion__append_lp__0bba(bind)
_append(bind[24],bind[25])
end
def Remove_Left_Recursion__append_lp__0bcf(bind)
_append(bind[29],bind[30])
end
def Remove_Left_Recursion__append_lp__32b1(bind)
_append(bind[1],bind[28])
end
def Remove_Left_Recursion__append_lp__4b4c(bind)
_append(bind[0],bind[27])
end
def Remove_Left_Recursion__append_lp__b6c7(bind)
_append(bind[7],bind[8])
end
def Remove_Left_Recursion__lp_src_dot_nam_5024(bind)
(src.name==bind[14]) || FAIL
end
def Remove_Left_Recursion__lp_src_dot_nam_58e8(bind)
(src.name==bind[1]) || FAIL
end
def Remove_Left_Recursion_src_25d9(bind)
src
end
def Remove_Left_Recursion_src_dot_ary_lb__d09f(bind)
src.ary[-1]
end
def Remove_Left_Recursion_src_dot_body_519e(bind)
src.body
end
def Remove_Left_Recursion_src_dot_expr_ef77(bind)
src.expr
end
def Remove_Left_Recursion_src_dot_name_80f3(bind)
src.name
end

end




def remove_left_rigth_recursion_compiled_by
'd6b7533a0e14a41ce826111ea311175e'
end
def remove_left_rigth_recursion_source_hash
'82f5682f26abef9436e5f92f8bc34754'
end
def testversionremove_left_rigth_recursion(r)
 raise "invalid version" if r!=remove_left_rigth_recursion_version
end
def remove_left_rigth_recursion_version
'4032a3481db8025002cc197f1c6f56c4'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/remove_left_rigth_recursion_c"
