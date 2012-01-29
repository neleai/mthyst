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
def Normalize__append_lp__088f(bind)
_append(bind[4],bind[5])
end
def Normalize__append_lp__0d86(bind)
_append(bind[9],bind[10])
end
def Normalize__append_lp__0eeb(bind)
_append(bind[0],bind[8])
end
def Normalize__append_lp__26c5(bind)
_append(bind[18],bind[19])
end
def Normalize__append_lp__29a3(bind)
_append(bind[0],bind[2])
end
def Normalize__append_lp__2bc4(bind)
_append(bind[0],bind[21])
end
def Normalize__append_lp__3aef(bind)
_append(bind[0],bind[17])
end
def Normalize__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def Normalize__append_lp__50ed(bind)
_append(bind[14],bind[16])
end
def Normalize__append_lp__66a2(bind)
_append(bind[0],bind[12])
end
def Normalize__append_lp__6948(bind)
_append(bind[3],bind[6])
end
def Normalize__append_lp__6ac6(bind)
_append(bind[0],bind[7])
end
def Normalize__append_lp__73f1(bind)
_append(bind[0],bind[13])
end
def Normalize__append_lp__81ec(bind)
_append(bind[0],bind[5])
end
def Normalize__append_lp__a474(bind)
_append(bind[14],bind[15])
end
def Normalize__append_lp__b9cb(bind)
_append(bind[4],bind[6])
end
def Normalize__append_lp__c354(bind)
_append(bind[9],bind[11])
end
def Normalize__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Normalize__append_lp__f8f8(bind)
_append(bind[0],bind[3])
end
def Normalize__append_lp__f960(bind)
_append(bind[18],bind[20])
end
def Normalize__lp_bind_lb_10_612c(bind)
(bind[10] === bind[11]) || FAIL
end
def Normalize__lp_bind_lb_1_rb__5a69(bind)
(bind[1]+bind[22]*"").to_i
end
def Normalize__lp_bind_lb_9_rb__e481(bind)
(bind[9] === bind[10]) || FAIL
end
def Normalize_bind_lb_0_rb_(bind)
bind[0]

end
def Normalize_bind_lb_0_rb__dot__206f(bind)
bind[0].join

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
def Normalize_bind_lb_2_rb__ti__e7b8(bind)
bind[2]*""
end
def Normalize_src_25d9(bind)
src
end
def Normalize_src_dot_ary_d5cf(bind)
src.ary
end

end


def normalize_compiled_by
'714ad82cea8f2769a997be6e74b1babf'
end
def normalize_source_hash
'52795b57f0b29872bc5763f8f36978c6'
end
def testversionnormalize(r)
 raise "invalid version" if r!=normalize_version
end
def normalize_version
'c706b04ba88bbf5d5936312802c676a8'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/normalize_c"
