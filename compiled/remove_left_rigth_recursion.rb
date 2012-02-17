#todo bind.reset to reset locals

class Remove_Left_Recursion < Traverser_Clone2

def Remove_Left_Recursion_Bind_lb_src_66c4(bind)
Bind[src.name,bind[1]]
end
def Remove_Left_Recursion_Or_lb_bind_lb__3169(bind)
Or[bind[1]]

end
def Remove_Left_Recursion_Seq_lb_bind_e0fb(bind)
Seq[bind[1]]
end
def Remove_Left_Recursion_Seq_lb_bind_f95b(bind)
Seq[bind[1],bind[2]]

end
def Remove_Left_Recursion__append_lp__d113(bind)
_append(bind[1],bind[2])
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
def Remove_Left_Recursion__lp_must_em_43e9(bind)
(must_empty?(bind[1])) || FAIL
end
def Remove_Left_Recursion_bind_lb_1_rb__dot__44a5(bind)
bind[1].dup
end
def Remove_Left_Recursion_bind_lb_1_rb__eq__56ab(bind)
bind[1]=autovar;src.body = Seq[bind[2],Many[Seq[Act[Args[bind[1],"=",@result,";bind.reset;",@result,"=",bind[1]]],bind[3]]]] if @left_rec
end
def Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5(bind)
bind[1] ? @result       : Apply["fails"]

end
def Remove_Left_Recursion_bind_lb_1_rb__sp__c213(bind)
bind[1] ? Apply["fails"] : bind[2]

end
def Remove_Left_Recursion_src_25d9(bind)
src
end
def Remove_Left_Recursion_src_dot_body_519e(bind)
src.body
end

end




def remove_left_rigth_recursion_compiled_by
'1daba39aa225c8d67b3981fae396659d'
end
def remove_left_rigth_recursion_source_hash
'cad4af78a099c679de40b4fc88272c9a'
end
def testversionremove_left_rigth_recursion(r)
 raise "invalid version" if r!=remove_left_rigth_recursion_version
end
def remove_left_rigth_recursion_version
'25f41e1529355ae5f8462385e45c939e'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/remove_left_rigth_recursion_c"
