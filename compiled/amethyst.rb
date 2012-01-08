class Amethyst < AmethystCore

def Amethyst__append_lp__01b7(bind)
_append(bind[13],bind[15])
end
def Amethyst__append_lp__0605(bind)
_append(bind[0],bind[16])
end
def Amethyst__append_lp__2489(bind)
_append(bind[8],bind[10])
end
def Amethyst__append_lp__26c5(bind)
_append(bind[18],bind[19])
end
def Amethyst__append_lp__29a3(bind)
_append(bind[0],bind[2])
end
def Amethyst__append_lp__2bc4(bind)
_append(bind[0],bind[21])
end
def Amethyst__append_lp__3aef(bind)
_append(bind[0],bind[17])
end
def Amethyst__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def Amethyst__append_lp__473a(bind)
_append(bind[13],bind[14])
end
def Amethyst__append_lp__66a2(bind)
_append(bind[0],bind[12])
end
def Amethyst__append_lp__6948(bind)
_append(bind[3],bind[6])
end
def Amethyst__append_lp__6ac6(bind)
_append(bind[0],bind[7])
end
def Amethyst__append_lp__6adb(bind)
_append(bind[3],bind[5])
end
def Amethyst__append_lp__81ec(bind)
_append(bind[0],bind[5])
end
def Amethyst__append_lp__b2a5(bind)
_append(bind[0],bind[4])
end
def Amethyst__append_lp__b375(bind)
_append(bind[8],bind[9])
end
def Amethyst__append_lp__bc95(bind)
_append(bind[0],bind[11])
end
def Amethyst__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Amethyst__append_lp__dd73(bind)
_append(bind[3],bind[4])
end
def Amethyst__append_lp__f960(bind)
_append(bind[18],bind[20])
end
def Amethyst__di__lb_01__rb__di__6879(bind)
/[01_]/
end
def Amethyst__di__lb_0_mi_7__rb__di__0530(bind)
/[0-7_]/
end
def Amethyst__di__lb_0_mi_9__rb__di__1194(bind)
/[0-9_]/
end
def Amethyst__di__lb_0_mi_9_rb__di__7072(bind)
/[0-9]/
end
def Amethyst__di__lb_0_mi_9a_mi_f_7483(bind)
/[0-9a-fA-F_]/
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
def Amethyst__lp_bind_lb_1_rb__5a69(bind)
(bind[1]+bind[22]*"").to_i
end
def Amethyst__lp_bind_lb_1_rb__abc3(bind)
(bind[1] === bind[2]) || FAIL
end
def Amethyst__lp_bind_lb_2_rb__7d6d(bind)
(bind[2] === bind[3]) || FAIL
end
def Amethyst__lp_false_rp__sp__c3c5(bind)
(false) || FAIL
end
def Amethyst_bind_lb_0_rb_(bind)
bind[0]

end
def Amethyst_bind_lb_0_rb__dot__206f(bind)
bind[0].join

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
def Amethyst_bind_lb_2_rb__ti__e7b8(bind)
bind[2]*""
end
def Amethyst_nil(bind)
nil

end

end


def amethyst_compiled_by
'dbecc6c94196be731c144e9eeaae72e5'
end
def amethyst_source_hash
'0a298fec360858589601582526514fa9'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'c5c8ef896f6a67465b130fcaee3a414f'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/amethyst_c"
