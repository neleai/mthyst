#todo bind.reset to reset locals

class Remove_Left_Recursion < Traverser_Clone2

def Remove_Left_Recursion_Bind_lb_bin_3e0d(bind)
Bind[bind[6],bind[9]]
end
def Remove_Left_Recursion_Bind_lb_bin_d522(bind)
Bind[bind[19],bind[22]]
end
def Remove_Left_Recursion_Seq_lb_Seq_lb__f6ac(bind)
Seq[Seq[bind[10]+[Or[*bind[1]]]],Many[Act[Args["x=",bind[7],";bind.reset;",bind[7],"=x"]],Seq[bind[10]+[Or[*bind[0]]]+bind[32]]],bind[7]]
end
def Remove_Left_Recursion_Seq_lb__ti__lp__lb_b_e705(bind)
Seq[*([bind[24]]+bind[27])]
end
def Remove_Left_Recursion__append_lp__05b0(bind)
_append(bind[25],bind[26])
end
def Remove_Left_Recursion__append_lp__50f6(bind)
_append(bind[0],bind[28])
end
def Remove_Left_Recursion__append_lp__769c(bind)
_append(bind[30],bind[31])
end
def Remove_Left_Recursion__append_lp__b375(bind)
_append(bind[8],bind[9])
end
def Remove_Left_Recursion__append_lp__fedd(bind)
_append(bind[1],bind[29])
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
'0bdeb6764e1949af672aa41b5f0aad53'
end
def remove_left_rigth_recursion_source_hash
'82f5682f26abef9436e5f92f8bc34754'
end
def testversionremove_left_rigth_recursion(r)
 raise "invalid version" if r!=remove_left_rigth_recursion_version
end
def remove_left_rigth_recursion_version
'944a3086cc329851d5fb8f9b00ad9f24'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/remove_left_rigth_recursion_c"
