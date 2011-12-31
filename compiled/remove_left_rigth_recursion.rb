#todo bind.reset to reset locals

class Remove_Left_Recursion < Traverser_Clone2

def Remove_Left_Recursion_Bind_lb_bin_2da5(bind)
Bind[bind[20],bind[23]]
end
def Remove_Left_Recursion_Bind_lb_bin_3e0d(bind)
Bind[bind[6],bind[9]]
end
def Remove_Left_Recursion_Seq_lb_Seq_lb__b57a(bind)
Seq[Seq[bind[10]+[Or[*bind[1]]]],Many[Act[Args["x=",bind[7],";bind.reset;",bind[7],"=x"]],Seq[bind[10]+[Or[*bind[0]]]+bind[33]]],bind[7]]
end
def Remove_Left_Recursion_Seq_lb__ti__lp__lb_b_9139(bind)
Seq[*([bind[25]]+bind[28])]
end
def Remove_Left_Recursion__append_lp__2184(bind)
_append(bind[1],bind[30])
end
def Remove_Left_Recursion__append_lp__4089(bind)
_append(bind[26],bind[27])
end
def Remove_Left_Recursion__append_lp__51eb(bind)
_append(bind[0],bind[29])
end
def Remove_Left_Recursion__append_lp__9160(bind)
_append(bind[31],bind[32])
end
def Remove_Left_Recursion__append_lp__b375(bind)
_append(bind[8],bind[9])
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
'6aea31d8c43b7e3267757f8ed747d4f2'
end
def remove_left_rigth_recursion_source_hash
'82f5682f26abef9436e5f92f8bc34754'
end
def testversionremove_left_rigth_recursion(r)
 raise "invalid version" if r!=remove_left_rigth_recursion_version
end
def remove_left_rigth_recursion_version
'd6f347e8484de33997ced022de3d9a90'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/remove_left_rigth_recursion_c"
