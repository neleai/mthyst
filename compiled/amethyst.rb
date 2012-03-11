class Amethyst < AmethystCore

def __at_rev(bind)
@rev||=Hash.new{|h,k| h[k]=k.reverse }
end
def __at_rev_lb_src_704d(bind)
@rev[src]
end
def __lp_bind_lb_1_rb__a948(bind)
(bind[1].is_a? String ) || FAIL
end
def __lp_bind_lb_1_rb__abc3(bind)
(bind[1] === bind[2]) || FAIL
end
def __lp_bind_lb_1_rb__afaa(bind)
(bind[1]+bind[2]*"").to_i
end
def __lp_false_rp__sp__c3c5(bind)
(false) || FAIL
end
def _bind_lb_1_rb_(bind)
bind[1]

end
def _bind_lb_1_rb__dot__03c2(bind)
bind[1].. bind[2]
end
def _bind_lb_1_rb__dot__c3ef(bind)
bind[1]...bind[2]
end
def _bind_lb_1_rb__dot__e879(bind)
bind[1].join

end
def _bind_lb_1_rb__ti__cfcb(bind)
bind[1]*""
end
def _self_dot_pro_8089(bind)
self.profile_report;bind[1]
end

end

def amethyst_compiled_by
'8c21bb4edb03a2e06ac3817cc4a152bb'
end
def amethyst_source_hash
'7cde72c1f72f98ce5d2adc2a698fc5b2'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'77b01a135ef8ef5cb32f8544aec43bf0'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/amethyst_c"
