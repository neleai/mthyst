class Amethyst < AmethystCore

def Amethyst__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def Amethyst__at_rev(bind)
@rev||=Hash.new{|h,k| h[k]=k.reverse }
end
def Amethyst__at_rev_lb_src_704d(bind)
@rev[src]
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
def Amethyst_self_dot_pro_e13d(bind)
self.profile_report if self.is_a?(AmethystParser);bind[1]
end

end


def amethyst_compiled_by
'4a99686344672ecfbe756c649410c345'
end
def amethyst_source_hash
'd11bfc58e96428cc1add216bcfcbe2df'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'36e8942e0fd0b9cf99ab4ea36e3003af'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/amethyst_c"
