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
def Normalize__append_lp__b2a5(bind)
_append(bind[0],bind[4])
end
def Normalize__lp_bind_lb_7_rb__df2c(bind)
(bind[7] === bind[8]) || FAIL
end
def Normalize_bind_lb_0_rb__dot__263e(bind)
bind[0].size
end
def Normalize_bind_lb_0_rb__lb__1f45(bind)
bind[0][0]

end
def Normalize_bind_lb_5_rb__dot__d039(bind)
bind[5].ary=bind[0];bind[5].ary.freeze;bind[5].freeze

end
def Normalize_src_25d9(bind)
src
end

end


def normalize_compiled_by
'3548cbb19ba7844e3a34388a2d260276'
end
def normalize_source_hash
'5666bab3ad217ae9f88dc185ef75779c'
end
def testversionnormalize(r)
 raise "invalid version" if r!=normalize_version
end
def normalize_version
'b920d8b11faffd79c12984f3f985832c'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/normalize_c"
