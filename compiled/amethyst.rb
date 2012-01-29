class Amethyst < AmethystCore

def Amethyst__append_lp__088f(bind)
_append(bind[4],bind[5])
end
def Amethyst__append_lp__0d86(bind)
_append(bind[9],bind[10])
end
def Amethyst__append_lp__0eeb(bind)
_append(bind[0],bind[8])
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
def Amethyst__append_lp__50ed(bind)
_append(bind[14],bind[16])
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
def Amethyst__append_lp__73f1(bind)
_append(bind[0],bind[13])
end
def Amethyst__append_lp__81ec(bind)
_append(bind[0],bind[5])
end
def Amethyst__append_lp__a474(bind)
_append(bind[14],bind[15])
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

end


def amethyst_compiled_by
'4be60de086cef1bb71bd8f4a8d774e30'
end
def amethyst_source_hash
'993c462a0ed93288bbc018074b33d99d'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'c246134c06f6967058cc02576dfe10c6'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/amethyst_c"
