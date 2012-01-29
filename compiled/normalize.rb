class Normalize < Amethyst

def Normalize_0_cfcd(bind)
0
end
def Normalize_1_c4ca(bind)
1
end
def Normalize_Apply_lb__dq_f_3881(bind)
Apply["fails"]

end
def Normalize_Apply_lb_bi_d0b8(bind)
Apply[bind[11]] #TODO resolve

end
def Normalize__append_lp__653e(bind)
_append(bind[0],bind[9])
end
def Normalize__append_lp__66a2(bind)
_append(bind[0],bind[12])
end
def Normalize__append_lp__81ec(bind)
_append(bind[0],bind[5])
end
def Normalize__append_lp__b494(bind)
_append(bind[0],bind[10])
end
def Normalize__append_lp__bc95(bind)
_append(bind[0],bind[11])
end
def Normalize__lp_bind_lb_15_94ac(bind)
(bind[15] === bind[16]) || FAIL
end
def Normalize__lp_bind_lb_16_9270(bind)
(bind[16] === bind[17]) || FAIL
end
def Normalize__lp_bind_lb_8_rb__1b9f(bind)
(bind[8]==Placeholder) || FAIL
end
def Normalize__lp_bind_lb_9_rb__cfc1(bind)
(bind[9]==Placeholder) || FAIL
end
def Normalize_bind_lb_0_rb__dot__263e(bind)
bind[0].size
end
def Normalize_bind_lb_0_rb__lb__1f45(bind)
bind[0][0]

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
'd7792b651e318b59cffdd4efdf9cbd07'
end
def normalize_source_hash
'4ff6979a1378e83d552cfaf3a78f85c7'
end
def testversionnormalize(r)
 raise "invalid version" if r!=normalize_version
end
def normalize_version
'42fb72d03377578a5cc2b36e27e09870'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/normalize_c"
