class Amethyst < AmethystCore

def Amethyst__append_lp__29a3(bind)
_append(bind[0],bind[2])
end
def Amethyst__append_lp__6948(bind)
_append(bind[3],bind[6])
end
def Amethyst__append_lp__6ac6(bind)
_append(bind[0],bind[7])
end
def Amethyst__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Amethyst__di__lb_0_mi_9_rb__di__7072(bind)
/[0-9]/
end
def Amethyst__di__lb_0_mi_9a_mi_f_7b9a(bind)
/[0-9a-fA-F]/
end
def Amethyst__di__lb_A_mi_Z_rb__di__05b6(bind)
/[A-Z]/
end
def Amethyst__di__lb__bs_s_bs_t_bs_r_9a56(bind)
/[\s\t\r\n\f]/
end
def Amethyst__di__lb_a_mi_z_rb__di__8807(bind)
/[a-z]/
end
def Amethyst__lb__rb_(bind)
[]

end
def Amethyst__lp_bind_lb_0_rb__9f45(bind)
(bind[0].is_a? String ) || FAIL
end
def Amethyst__lp_bind_lb_0_rb__b1f4(bind)
(bind[0] === bind[1]) || FAIL
end
def Amethyst__lp_bind_lb_1_rb__4329(bind)
(bind[1] === bind[0]) || FAIL
end
def Amethyst__lp_bind_lb_1_rb__abc3(bind)
(bind[1] === bind[2]) || FAIL
end
def Amethyst__lp_bind_lb_2_rb__7d6d(bind)
(bind[2] === bind[3]) || FAIL
end
def Amethyst__lp_bind_lb_3_rb__71bb(bind)
(bind[3]*"").to_i
end
def Amethyst__lp_false_rp__sp__c3c5(bind)
(false) || FAIL
end
def Amethyst_bind_lb_0_rb_(bind)
bind[0]

end
def Amethyst_bind_lb_0_rb__dot__6a2a(bind)
bind[0]...bind[1]
end
def Amethyst_bind_lb_0_rb__dot__ddb4(bind)
bind[0].. bind[1]
end
def Amethyst_bind_lb_1_rb__ti__cfcb(bind)
bind[1]*""
end
def Amethyst_nil(bind)
nil

end

end


def amethyst_compiled_by
'129b6bd33275f1124e6cde9fc1008545'
end
def amethyst_source_hash
'66636c3d5b27d49a30067bc87ed80ad4'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'52aebb6edcbc8ec8d036245fb2b0907d'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/amethyst_c"
