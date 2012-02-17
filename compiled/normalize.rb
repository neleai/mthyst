class Normalize < Amethyst

def _Act_dot_crea_e434(bind)
Act.create(src,{:pure=>true}).freeze 
end
def _Apply_lb__dq_e_619e(bind)
Apply["empty"]
end
def _Apply_lb__dq_f_3881(bind)
Apply["fails"]

end
def _Apply_lb_bi_4b34(bind)
Apply[bind[1],{:clas=> resolvegrammar($current_grammar_name,bind[1])}] 

end
def _CAct_lb_eva_559c(bind)
CAct[eval(src.ary[0])]

end
def _Or_dot_creat_a50c(bind)
Or.create({:ary=>bind[1]})

end
def _Placehol_6875(bind)
Placeholder
end
def _Placehol_a03d(bind)
Placeholder

end
def _Seq_dot_crea_0a81(bind)
Seq.create({:ary=>bind[1]})

end
def _Seq_lb_Bind_1036(bind)
Seq[Bind[bind[1],bind[2]],bind[3]]

end
def _Seq_lb_bind_b819(bind)
Seq[bind[1],Bind[bind[2],bind[3]]]

end
def _Seq_lb_bind_c98f(bind)
Seq[bind[1][0...-1]]
end
def _Switch_O_5445(bind)
Switch_Or.create(:ary=>bind[1].map{|k| [nil,k]})

end
def __append_lp__d113(bind)
_append(bind[1],bind[2])
end
def __lp_bind_lb_1_rb__abc3(bind)
(bind[1] === bind[2]) || FAIL
end
def __lp_cant_fa_17ef(bind)
(cant_fail?(bind[1]) ) || FAIL
end
def __lp_eval_lp_sr_3f78(bind)
(eval(src).is_a?(Class)) || FAIL
end
def __lp_must_em_43e9(bind)
(must_empty?(bind[1])) || FAIL
end
def _bind_lb_1_rb_(bind)
bind[1]

end
def _bind_lb_1_rb__dot__30f4(bind)
bind[1].size
end
def _bind_lb_1_rb__lb__64e3(bind)
bind[1][-1]
end
def _bind_lb_1_rb__lb__79d7(bind)
bind[1][0]

end
def _bind_lb_1_rb__lt__f738(bind)
bind[1]<<[bind[2],Bind[bind[3],bind[4]]]
end
def _src(bind)
src

end
def _src_25d9(bind)
src
end
def _src_dot_ary_d5cf(bind)
src.ary
end
def _src_dot_clas_68f9(bind)
src.class[{:ary=>bind[1]}]
end
def _src_dot_free_3d49(bind)
src.freeze
end
def _src_dot_name_80f3(bind)
src.name
end

end


def normalize_compiled_by
'09cd215b63778a251028c3ab326dbf85'
end
def normalize_source_hash
'3c45ffd637a8102ddaeb41009ab4e56e'
end
def testversionnormalize(r)
 raise "invalid version" if r!=normalize_version
end
def normalize_version
'a9363517eecb4d608f66a14118688996'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/normalize_c"
