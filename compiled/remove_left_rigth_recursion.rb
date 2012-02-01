#todo bind.reset to reset locals
def must_empty?(s)
	$must_empty_df.analyze(s).value
end

class Remove_Left_Recursion < Traverser_Clone2

def Remove_Left_Recursion_Bind_lb_src_4a7e(bind)
Bind[src.name,bind[7]]
end
def Remove_Left_Recursion_Bind_lb_src_5a69(bind)
Bind[src.name,bind[10]]
end
def Remove_Left_Recursion_Or_lb_bind_lb__1f89(bind)
Or[bind[12]]

end
def Remove_Left_Recursion_Or_lb_bind_lb__c41d(bind)
Or[bind[15]]

end
def Remove_Left_Recursion_Seq_lb_bind_58ff(bind)
Seq[bind[16],bind[19]]

end
def Remove_Left_Recursion_Seq_lb_bind_8d77(bind)
Seq[bind[21],bind[24]]

end
def Remove_Left_Recursion_Seq_lb_bind_ba02(bind)
Seq[bind[24]]
end
def Remove_Left_Recursion_Seq_lb_bind_c986(bind)
Seq[bind[19]]
end
def Remove_Left_Recursion__append_lp__3c16(bind)
_append(bind[28],bind[29])
end
def Remove_Left_Recursion__append_lp__473a(bind)
_append(bind[13],bind[14])
end
def Remove_Left_Recursion__append_lp__58ed(bind)
_append(bind[22],bind[23])
end
def Remove_Left_Recursion__append_lp__835a(bind)
_append(bind[17],bind[18])
end
def Remove_Left_Recursion__append_lp__89bf(bind)
_append(bind[23],bind[24])
end
def Remove_Left_Recursion__append_lp__9ca5(bind)
_append(bind[10],bind[11])
end
def Remove_Left_Recursion__at_left_re_c85d(bind)
@left_rec=true
end
def Remove_Left_Recursion__at_name_eq_sr_362f(bind)
@name=src.name
end
def Remove_Left_Recursion__at_result_eq__b6ab(bind)
@result=Local["_result",src.bnding]
end
def Remove_Left_Recursion__lp__at_name_eq__eq__2784(bind)
(@name==src.name) || FAIL
end
def Remove_Left_Recursion__lp_must_em_e2d0(bind)
(must_empty?(bind[0])) || FAIL
end
def Remove_Left_Recursion_a_eq_autova_de17(bind)
a=autovar;src.body = Seq[bind[30],Many[Seq[Act[Args[a,"=",@result,";bind.reset;",@result,"=",a]],bind[35]]]] if @left_rec
end
def Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5(bind)
bind[1] ? @result       : Apply["fails"]

end
def Remove_Left_Recursion_bind_lb_1_rb__sp__a8f8(bind)
bind[1] ? Apply["fails"] : bind[3]

end
def Remove_Left_Recursion_bind_lb_2_rb__sp__e623(bind)
bind[2] ? Apply["fails"] : bind[5]

end
def Remove_Left_Recursion_bind_lb_2_rb__sp__eada(bind)
bind[2] ? @result       : Apply["fails"]

end
def Remove_Left_Recursion_src_25d9(bind)
src
end
def Remove_Left_Recursion_src_dot_body_519e(bind)
src.body
end

end




def remove_left_rigth_recursion_compiled_by
'db18b6628b0304edda084f59c19d3204'
end
def remove_left_rigth_recursion_source_hash
'd4f256543211c4acfa68e0f3de5be511'
end
def testversionremove_left_rigth_recursion(r)
 raise "invalid version" if r!=remove_left_rigth_recursion_version
end
def remove_left_rigth_recursion_version
'68fb987888ddb8e62c7508abad708a96'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/remove_left_rigth_recursion_c"
