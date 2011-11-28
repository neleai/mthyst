class Remove_Left_Recursion < Traverser_Clone2

def Remove_Left_Recursion_Bind_lb_bin(bind)
Bind[bind[16],bind[18]]
end
def Remove_Left_Recursion_Bind_lb_bin2(bind)
Bind[bind[6],bind[8]]
end
def Remove_Left_Recursion_Seq_lb_Bind(bind)
Seq[Bind[bind[4],Or[*bind[1]]],Many[Bind[bind[4],Or[*bind[0]]]]]
end
def Remove_Left_Recursion_Seq_lb__ti__lp__lb_b(bind)
Seq[*([bind[20]]+bind[23])]
end
def Remove_Left_Recursion__append_lp_(bind)
_append(bind[21],bind[22])
end
def Remove_Left_Recursion__append_lp_2(bind)
_append(bind[0],bind[24])
end
def Remove_Left_Recursion__append_lp_3(bind)
_append(bind[1],bind[27])
end
def Remove_Left_Recursion__append_lp_4(bind)
_append(bind[7],bind[26])
end
def Remove_Left_Recursion__lp_src_dot_nam(bind)
(src.name==bind[11]) || FAIL
end
def Remove_Left_Recursion__lp_src_dot_nam2(bind)
(src.name==bind[1]) || FAIL
end
def Remove_Left_Recursion_autovar(bind)
autovar
end
def Remove_Left_Recursion_bind_lb_17_rb_(bind)
bind[17]=[bind[17]]
end
def Remove_Left_Recursion_bind_lb_5_rb__eq_(bind)
bind[5]=[bind[5]]
end
def Remove_Left_Recursion_bind_lb_7_rb__eq_(bind)
bind[7]=[bind[7]]
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


class Remove_Rigth_Recursion < Traverser_Clone2


end


def remove_left_rigth_recursion_compiled_by
'fdb7a99d8ad97cd846612f776e463299'
end
def remove_left_rigth_recursion_source_hash
'086ca6ccb6805fbf476d78a0539e0675'
end
def testversionremove_left_rigth_recursion(r)
 raise "invalid version" if r!=remove_left_rigth_recursion_version
end
def remove_left_rigth_recursion_version
'3632fe882b6739d497e2713eece93d9a'
end
  require 'compiled/remove_left_rigth_recursion_c'
