class Amethyst < AmethystCore

def Amethyst__append_lp_(bind)
_append(bind[0],bind[2])
end
def Amethyst__append_lp_2(bind)
_append(bind[0],bind[1])
end
def Amethyst__append_lp_3(bind)
_append(bind[3],bind[5])
end
def Amethyst__append_lp_4(bind)
_append(bind[0],bind[6])
end
def Amethyst__di__lb_0_mi_9_rb__di_(bind)
/[0-9]/
end
def Amethyst__di__lb_0_mi_9a_mi_f(bind)
/[0-9a-fA-F]/
end
def Amethyst__di__lb_A_mi_Z_rb__di_(bind)
/[A-Z]/
end
def Amethyst__di__lb__bs_s_bs_t_bs_r(bind)
/[\s\t\r\n\f]/
end
def Amethyst__di__lb_a_mi_z_rb__di_(bind)
/[a-z]/
end
def Amethyst__lp_bind_lb_0_rb_(bind)
(bind[0].is_a? String ) || FAIL
end
def Amethyst__lp_bind_lb_0_rb_2(bind)
(bind[0] === bind[1]) || FAIL
end
def Amethyst__lp_bind_lb_1_rb_(bind)
(bind[1] === bind[0]) || FAIL
end
def Amethyst__lp_bind_lb_1_rb_2(bind)
(bind[1] === bind[2]) || FAIL
end
def Amethyst__lp_bind_lb_1_rb_3(bind)
(bind[1]===bind[0]) || FAIL
end
def Amethyst__lp_bind_lb_2_rb_(bind)
(bind[2] === bind[3]) || FAIL
end
def Amethyst__lp_bind_lb_3_rb_(bind)
(bind[3]*"").to_i
end
def Amethyst__lp_false_rp__sp_(bind)
(false) || FAIL
end
def Amethyst_bind_lb_0_rb__dot_(bind)
bind[0].. bind[1]
end
def Amethyst_bind_lb_0_rb__dot_2(bind)
bind[0]...bind[1]
end
def Amethyst_bind_lb_1_rb__ti_(bind)
bind[1]*""
end

end


def amethyst_compiled_by
'42a0a1209b6310a717c4b8682c21ca69'
end
def amethyst_source_hash
'ba0a754e8a6d97281d9658ae2c14aab1'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'd846452247aa15af3d1ae1dba4a522ff'
end
  require 'compiled/amethyst_c'
