class Normalize < Amethyst

def Normalize_Act_dot_crea_e434(bind)
Act.create(src,{:pure=>true}).freeze 
end
def Normalize_Apply_lb__dq_f_3881(bind)
Apply["fails"]

end
def Normalize_Apply_lb_bi_d0b8(bind)
Apply[bind[11]] #TODO resolve

end
def Normalize_Bind_lb_bin_bff4(bind)
Bind[bind[5],bind[8]]
end
def Normalize_CAct_lb_eva_559c(bind)
CAct[eval(src.ary[0])]

end
def Normalize_Or_dot_creat_fbdf(bind)
Or.create( {:ary=>bind[10] })
end
def Normalize_Placehol_6875(bind)
Placeholder
end
def Normalize_Placehol_a03d(bind)
Placeholder

end
def Normalize_Seq_lb_Bind_8f10(bind)
Seq[Bind[bind[5],bind[15]],bind[16]]

end
def Normalize_Seq_lb_bind_b52b(bind)
Seq[bind[10][0...-1]]
end
def Normalize_Seq_lb_bind_b71c(bind)
Seq[bind[15],Bind[bind[5],bind[16]]]

end
def Normalize_Switch_C_059f(bind)
Switch_Char.create( {:ary=>bind[10],:first=>bind[15] })
end
def Normalize_Switch_C_09b7(bind)
Switch_Clas.create( {:ary=>bind[10],:first=>bind[15] })
end
def Normalize__append_lp__0eeb(bind)
_append(bind[0],bind[8])
end
def Normalize__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def Normalize__append_lp__4f82(bind)
_append(bind[7],bind[9])
end
def Normalize__append_lp__6ac6(bind)
_append(bind[0],bind[7])
end
def Normalize__append_lp__7140(bind)
_append(bind[12],bind[13])
end
def Normalize__append_lp__81ec(bind)
_append(bind[0],bind[5])
end
def Normalize__append_lp__984f(bind)
_append(bind[12],bind[14])
end
def Normalize__lp_bind_lb_10_612c(bind)
(bind[10] === bind[11]) || FAIL
end
def Normalize__lp_bind_lb_9_rb__e481(bind)
(bind[9] === bind[10]) || FAIL
end
def Normalize__lp_eval_lp_sr_3f78(bind)
(eval(src).is_a?(Class)) || FAIL
end
def Normalize_bind_lb_0_rb__dot__263e(bind)
bind[0].size
end
def Normalize_bind_lb_0_rb__lb__1f45(bind)
bind[0][0]

end
def Normalize_bind_lb_10_rb__46f2(bind)
bind[10]<<[bind[21],Bind[bind[5],bind[22]]]
end
def Normalize_bind_lb_10_rb__c855(bind)
bind[10][-1]
end
def Normalize_bind_lb_2_rb__dot__e24b(bind)
bind[2].ary=bind[0];bind[2].ary.freeze;bind[2].freeze

end
def Normalize_bind_lb_7_rb_(bind)
bind[7]

end
def Normalize_src_25d9(bind)
src
end
def Normalize_src_dot_ary_d5cf(bind)
src.ary
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
'6b1b0a66c27620073a367599a6350079'
end
def normalize_source_hash
'840a281010c2c6abc91f42742ef9d57b'
end
def testversionnormalize(r)
 raise "invalid version" if r!=normalize_version
end
def normalize_version
'92358617d459156f224e37f89462e524'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/normalize_c"
