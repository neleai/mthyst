class Amethyst < AmethystCore

def Amethyst__append_lp_bind(bind)
_append(bind[0],bind[2])
end
def Amethyst__append_lp_bind2(bind)
_append(bind[0],bind[1])
end
def Amethyst__append_lp_bind3(bind)
_append(bind[3],bind[5])
end
def Amethyst__append_lp_bind4(bind)
_append(bind[0],bind[6])
end
def Amethyst__di__lb_0_mi_9_rb__di_(bind)
/[0-9]/
end
def Amethyst__di__lb_0_mi_9a_mi_fA_mi_F_rb_(bind)
/[0-9a-fA-F]/
end
def Amethyst__di__lb_A_mi_Z_rb__di_(bind)
/[A-Z]/
end
def Amethyst__di__lb__bs_s_bs_t_bs_r_bs_n_bs_f(bind)
/[\s\t\r\n\f]/
end
def Amethyst__di__lb_a_mi_z_rb__di_(bind)
/[a-z]/
end
def Amethyst__lp_bind_lb_0_rb__dot_is_(bind)
(bind[0].is_a? String ) || FAIL
end
def Amethyst__lp_bind_lb_0_rb__sp__eq__eq__eq_(bind)
(bind[0] === bind[1]) || FAIL
end
def Amethyst__lp_bind_lb_1_rb__sp__eq__eq__eq_(bind)
(bind[1] === bind[0]) || FAIL
end
def Amethyst__lp_bind_lb_1_rb__sp__eq__eq__eq_2(bind)
(bind[1] === bind[2]) || FAIL
end
def Amethyst__lp_bind_lb_2_rb__sp__eq__eq__eq_(bind)
(bind[2] === bind[3]) || FAIL
end
def Amethyst__lp_bind_lb_3_rb__ti__dq__dq__rp_(bind)
(bind[3]*"").to_i
end
def Amethyst__lp_false_rp__sp_(bind)
(false) || FAIL
end
def Amethyst_bind_lb_0_rb__dot__dot__dot_bi(bind)
bind[0]...bind[1]
end
def Amethyst_bind_lb_0_rb__dot__dot__sp_bi(bind)
bind[0].. bind[1]
end
def Amethyst_bind_lb_1_rb__ti__dq__dq_(bind)
bind[1]*""
end

end


def amethyst_compiled_by
'472138cdffc8d639efb367af8b54ad09'
end
def amethyst_source_hash
'658aaca9ebd5273ae49c9216a755e115'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'd0e2a0934988689b0dcffcde23726a27'
end
  require 'compiled/amethyst_c'
