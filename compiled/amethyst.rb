class Amethyst < AmethystCore

def Amethyst__append_lp__088f(bind)
_append(bind[4],bind[5])
end
def Amethyst__append_lp__0d86(bind)
_append(bind[9],bind[10])
end
def Amethyst__append_lp__2081(bind)
_append(bind[1],bind[21])
end
def Amethyst__append_lp__26c5(bind)
_append(bind[18],bind[19])
end
def Amethyst__append_lp__29a3(bind)
_append(bind[0],bind[2])
end
def Amethyst__append_lp__3216(bind)
_append(bind[1],bind[13])
end
def Amethyst__append_lp__50ed(bind)
_append(bind[14],bind[16])
end
def Amethyst__append_lp__6948(bind)
_append(bind[3],bind[6])
end
def Amethyst__append_lp__6ac6(bind)
_append(bind[0],bind[7])
end
def Amethyst__append_lp__77ab(bind)
_append(bind[1],bind[17])
end
def Amethyst__append_lp__8061(bind)
_append(bind[1],bind[3])
end
def Amethyst__append_lp__85a1(bind)
_append(bind[1],bind[7])
end
def Amethyst__append_lp__a474(bind)
_append(bind[14],bind[15])
end
def Amethyst__append_lp__ae51(bind)
_append(bind[1],bind[12])
end
def Amethyst__append_lp__b2a5(bind)
_append(bind[0],bind[4])
end
def Amethyst__append_lp__b40f(bind)
_append(bind[1],bind[8])
end
def Amethyst__append_lp__b9cb(bind)
_append(bind[4],bind[6])
end
def Amethyst__append_lp__c354(bind)
_append(bind[9],bind[11])
end
def Amethyst__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Amethyst__append_lp__f8f8(bind)
_append(bind[0],bind[3])
end
def Amethyst__append_lp__f960(bind)
_append(bind[18],bind[20])
end
def Amethyst__lp_bind_lb_0_rb__9f45(bind)
(bind[0].is_a? String ) || FAIL
end
def Amethyst__lp_bind_lb_1_rb__4329(bind)
(bind[1] === bind[0]) || FAIL
end
def Amethyst__lp_bind_lb_1_rb__abc3(bind)
(bind[1] === bind[2]) || FAIL
end
def Amethyst__lp_bind_lb_24_a9dd(bind)
(bind[24]+bind[23]*"").to_i
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
'fa5c5fa85ebaf89fb3c3a2ccdc088436'
end
def amethyst_source_hash
'a23f6ab6e90190c75471355d76a05974'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'c5fc8363523c68b3e64e9bea696adf3c'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/amethyst_c"
