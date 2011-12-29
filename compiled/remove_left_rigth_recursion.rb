#todo bind.reset to reset locals

class Remove_Left_Recursion < Traverser_Clone2

def Remove_Left_Recursion_Bind_lb_bin_90ac(bind)
Bind[bind[20],bind[22]]
end
def Remove_Left_Recursion_Bind_lb_bin_b21e(bind)
Bind[bind[6],bind[8]]
end
def Remove_Left_Recursion_Seq_lb_Seq_lb__a971(bind)
Seq[Seq[bind[9]+[Or[*bind[1]]]],Many[Act[Args["x=",bind[6],";bind.reset;",bind[6],"=x"]],Seq[bind[9]+[Or[*bind[0]]]+bind[34]]],bind[6]]
end
def Remove_Left_Recursion_Seq_lb__ti__lp__lb_b_e705(bind)
Seq[*([bind[24]]+bind[27])]
end
def Remove_Left_Recursion__append_lp__05b0(bind)
_append(bind[25],bind[26])
end
def Remove_Left_Recursion__append_lp__1c02(bind)
_append(bind[1],bind[31])
end
def Remove_Left_Recursion__append_lp__50f6(bind)
_append(bind[0],bind[28])
end
def Remove_Left_Recursion__append_lp__b601(bind)
_append(bind[32],bind[33])
end
def Remove_Left_Recursion__append_lp__b6c7(bind)
_append(bind[7],bind[8])
end
def Remove_Left_Recursion__append_lp__e0fb(bind)
_append(bind[11],bind[30])
end
def Remove_Left_Recursion__lp_src_dot_nam_031a(bind)
(src.name==bind[15]) || FAIL
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
'06c4f49d02c34502aa1023682de5bad6'
end
def remove_left_rigth_recursion_source_hash
'82f5682f26abef9436e5f92f8bc34754'
end
def testversionremove_left_rigth_recursion(r)
 raise "invalid version" if r!=remove_left_rigth_recursion_version
end
def remove_left_rigth_recursion_version
'4e0f4404a70ae1dd23c9d2a07487a5ee'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/remove_left_rigth_recursion_c"
