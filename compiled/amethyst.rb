class Amethyst < AmethystCore

def __append_lp__d113(bind)
_append(bind[1],bind[2])
end
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
'013c5eab9076a2a7afdcd0500b69c87c'
end
def amethyst_source_hash
'3cb7f3495f49f0204f0b63d2d8d5e451'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'a5ab14b4598ab66a4fc86610d7c4ad94'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/amethyst_c"
