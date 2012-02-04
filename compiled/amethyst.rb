class Amethyst < AmethystCore

def Amethyst__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def Amethyst__lp_bind_lb_1_rb__a948(bind)
(bind[1].is_a? String ) || FAIL
end
def Amethyst__lp_bind_lb_1_rb__abc3(bind)
(bind[1] === bind[2]) || FAIL
end
def Amethyst__lp_bind_lb_1_rb__afaa(bind)
(bind[1]+bind[2]*"").to_i
end
def Amethyst__lp_false_rp__sp__c3c5(bind)
(false) || FAIL
end
def Amethyst_bind_lb_1_rb_(bind)
bind[1]

end
def Amethyst_bind_lb_1_rb__dot__03c2(bind)
bind[1].. bind[2]
end
def Amethyst_bind_lb_1_rb__dot__c3ef(bind)
bind[1]...bind[2]
end
def Amethyst_bind_lb_1_rb__dot__e879(bind)
bind[1].join

end
def Amethyst_bind_lb_1_rb__ti__cfcb(bind)
bind[1]*""
end

end


def amethyst_compiled_by
'22777392771fde1461dd937fada749ef'
end
def amethyst_source_hash
'a23f6ab6e90190c75471355d76a05974'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'640925e690529da0b8632518ba8d8b0e'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/amethyst_c"
