class Normalize < Amethyst

def Normalize_Act_dot_crea_e434(bind)
Act.create(src,{:pure=>true}).freeze 
end
def Normalize_Apply_lb__dq_f_3881(bind)
Apply["fails"]

end
def Normalize_Apply_lb_bi_4b34(bind)
Apply[bind[1],{:clas=> resolvegrammar($current_grammar_name,bind[1])}] 

end
def Normalize_Bind_lb_bin_8a31(bind)
Bind[bind[1],bind[2]]
end
def Normalize_CAct_lb_eva_559c(bind)
CAct[eval(src.ary[0])]

end
def Normalize_Or_dot_creat_49b2(bind)
Or.create( {:ary=>bind[1] })
end
def Normalize_Placehol_6875(bind)
Placeholder
end
def Normalize_Placehol_a03d(bind)
Placeholder

end
def Normalize_Seq_lb_Bind_1036(bind)
Seq[Bind[bind[1],bind[2]],bind[3]]

end
def Normalize_Seq_lb_bind_b819(bind)
Seq[bind[1],Bind[bind[2],bind[3]]]

end
def Normalize_Seq_lb_bind_c98f(bind)
Seq[bind[1][0...-1]]
end
def Normalize__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def Normalize__lp_bind_lb_1_rb__abc3(bind)
(bind[1] === bind[2]) || FAIL
end
def Normalize__lp_cant_fa_17ef(bind)
(cant_fail?(bind[1]) ) || FAIL
end
def Normalize__lp_eval_lp_sr_3f78(bind)
(eval(src).is_a?(Class)) || FAIL
end
def Normalize__lp_must_em_43e9(bind)
(must_empty?(bind[1])) || FAIL
end
def Normalize_bind_lb_1_rb_(bind)
bind[1]

end
def Normalize_bind_lb_1_rb__dot__30f4(bind)
bind[1].size
end
def Normalize_bind_lb_1_rb__dot__f29b(bind)
bind[1].ary=bind[2];bind[1].ary.freeze;bind[1].freeze

end
def Normalize_bind_lb_1_rb__lb__64e3(bind)
bind[1][-1]
end
def Normalize_bind_lb_1_rb__lb__79d7(bind)
bind[1][0]

end
def Normalize_bind_lb_1_rb__lt__f738(bind)
bind[1]<<[bind[2],Bind[bind[3],bind[4]]]
end
def Normalize_src_25d9(bind)
src
end
def Normalize_src_dot_ary_d5cf(bind)
src.ary
end
def Normalize_src_dot_clas_68f9(bind)
src.class[{:ary=>bind[1]}]
end
def Normalize_src_dot_free_00b9(bind)
src.freeze

end
def Normalize_src_dot_free_3d49(bind)
src.freeze
end
def Normalize_src_dot_name_80f3(bind)
src.name
end

end


def normalize_compiled_by
'1b1dc4e3609c7ec67a5c7b0f768beb57'
end
def normalize_source_hash
'12c635bfcb9d24e7943569a24ab64c6b'
end
def testversionnormalize(r)
 raise "invalid version" if r!=normalize_version
end
def normalize_version
'0e9af0f270a67a41ae3fcc7a0e527fa5'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/normalize_c"
