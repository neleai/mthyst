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
'6d5719e351f1569470663920f3ee1672'
end
def amethyst_source_hash
'fd0f6fea51969b3820d7273767a7b27d'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'fa00556fdaeb2a15560bc6ae38d647cd'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/amethyst_c"
