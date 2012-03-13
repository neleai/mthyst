class Amethyst < AmethystCore
def self._(*args);self.new.parse(:_,*args);end
def self.alnum(*args);self.new.parse(:alnum,*args);end
def self.alpha(*args);self.new.parse(:alpha,*args);end
def self.char(*args);self.new.parse(:char,*args);end
def self.clas(*args);self.new.parse(:clas,*args);end
def self.digit(*args);self.new.parse(:digit,*args);end
def self.empty(*args);self.new.parse(:empty,*args);end
def self.eof(*args);self.new.parse(:eof,*args);end
def self.fails(*args);self.new.parse(:fails,*args);end
def self.false(*args);self.new.parse(:false,*args);end
def self.find(*args);self.new.parse(:find,*args);end
def self.int(*args);self.new.parse(:int,*args);end
def self.line(*args);self.new.parse(:line,*args);end
def self.listOf(*args);self.new.parse(:listOf,*args);end
def self.lower(*args);self.new.parse(:lower,*args);end
def self.member(*args);self.new.parse(:member,*args);end
def self.nested(*args);self.new.parse(:nested,*args);end
def self.newline(*args);self.new.parse(:newline,*args);end
def self.nil(*args);self.new.parse(:nil,*args);end
def self.number(*args);self.new.parse(:number,*args);end
def self.parse(*args);self.new.parse(:parse,*args);end
def self.range_ex(*args);self.new.parse(:range_ex,*args);end
def self.range_in(*args);self.new.parse(:range_in,*args);end
def self.regch(*args);self.new.parse(:regch,*args);end
def self.replace(*args);self.new.parse(:replace,*args);end
def self.reverse(*args);self.new.parse(:reverse,*args);end
def self.seq(*args);self.new.parse(:seq,*args);end
def self.space(*args);self.new.parse(:space,*args);end
def self.spaces(*args);self.new.parse(:spaces,*args);end
def self.token(*args);self.new.parse(:token,*args);end
def self.true(*args);self.new.parse(:true,*args);end
def self.until(*args);self.new.parse(:until,*args);end
def self.upper(*args);self.new.parse(:upper,*args);end
def self.word(*args);self.new.parse(:word,*args);end
def self.xdigit(*args);self.new.parse(:xdigit,*args);end
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
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Amethyst_c"
