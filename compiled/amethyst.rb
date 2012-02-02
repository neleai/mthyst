class Amethyst < AmethystCore

def Amethyst__append_lp__159c(bind)
_append(bind[2],bind[19])
end
def Amethyst__append_lp__19cb(bind)
_append(bind[20],bind[21])
end
def Amethyst__append_lp__29a3(bind)
_append(bind[0],bind[2])
end
def Amethyst__append_lp__2c07(bind)
_append(bind[2],bind[10])
end
def Amethyst__append_lp__3042(bind)
_append(bind[2],bind[9])
end
def Amethyst__append_lp__37c5(bind)
_append(bind[6],bind[8])
end
def Amethyst__append_lp__43a2(bind)
_append(bind[2],bind[15])
end
def Amethyst__append_lp__54e8(bind)
_append(bind[16],bind[17])
end
def Amethyst__append_lp__6106(bind)
_append(bind[2],bind[14])
end
def Amethyst__append_lp__68be(bind)
_append(bind[11],bind[13])
end
def Amethyst__append_lp__6948(bind)
_append(bind[3],bind[6])
end
def Amethyst__append_lp__6ac6(bind)
_append(bind[0],bind[7])
end
def Amethyst__append_lp__81ec(bind)
_append(bind[0],bind[5])
end
def Amethyst__append_lp__9546(bind)
_append(bind[20],bind[22])
end
def Amethyst__append_lp__b068(bind)
_append(bind[16],bind[18])
end
def Amethyst__append_lp__bab9(bind)
_append(bind[2],bind[5])
end
def Amethyst__append_lp__be78(bind)
_append(bind[11],bind[12])
end
def Amethyst__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Amethyst__append_lp__d472(bind)
_append(bind[6],bind[7])
end
def Amethyst__append_lp__ed94(bind)
_append(bind[2],bind[23])
end
def Amethyst__append_lp__f8f8(bind)
_append(bind[0],bind[3])
end
def Amethyst__lp_bind_lb_0_rb__9f45(bind)
(bind[0].is_a? String ) || FAIL
end
def Amethyst__lp_bind_lb_0_rb__b1f4(bind)
(bind[0] === bind[1]) || FAIL
end
def Amethyst__lp_bind_lb_0_rb__bbdf(bind)
(bind[0]+bind[25]*"").to_i
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

end


def amethyst_compiled_by
'2065d6907124025144e9e81748f583cc'
end
def amethyst_source_hash
'a23f6ab6e90190c75471355d76a05974'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'7643c5a2d654b928bfcc5c75474f39a2'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/amethyst_c"
