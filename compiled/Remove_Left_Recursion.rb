class Remove_Left_Recursion < Traverser_Clone2
def self.first(*args);self.new.parse(:first,*args);end
def self.must_empty(*args);self.new.parse(:must_empty,*args);end
def self.root(*args);self.new.parse(:root,*args);end
def _Bind_lb_src_66c4(bind)
Bind[src.name,bind[1]]
end
def _Or_lb_bind_lb__3169(bind)
Or[bind[1]]

end
def _Seq_lb_bind_e0fb(bind)
Seq[bind[1]]
end
def _Seq_lb_bind_f95b(bind)
Seq[bind[1],bind[2]]

end
def __at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def __at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __at_left_re_c85d(bind)
@left_rec=true
end
def __at_result_eq__b6ab(bind)
@result=Local["_result",src.bnding]
end
def __lp_bind_lb_1_rb__5b9e(bind)
(bind[1][:name]==src.name) || FAIL
end
def __lp_must_em_43e9(bind)
(must_empty?(bind[1])) || FAIL
end
def _bind_lb_1_rb__dot__44a5(bind)
bind[1].dup
end
def _bind_lb_1_rb__eq__56ab(bind)
bind[1]=autovar;src.body = Seq[bind[2],Many[Seq[Act[Args[bind[1],"=",@result,";bind.reset;",@result,"=",bind[1]]],bind[3]]]] if @left_rec
end
def _bind_lb_1_rb__lb__fa06(bind)
bind[1][:name]=src.name
end
def _bind_lb_1_rb__sp__4ee5(bind)
bind[1] ? @result       : Apply["fails"]

end
def _bind_lb_1_rb__sp__c213(bind)
bind[1] ? Apply["fails"] : bind[2]

end
def _src_25d9(bind)
src
end
def _src_dot_body_519e(bind)
src.body
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Remove_Left_Recursion_c"