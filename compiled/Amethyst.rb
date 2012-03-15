class Amethyst < AmethystCore
def self._(*args);self.new.parse(:_,*args);end;def self._selector__;Amethyst;end
def self.alnum(*args);self.new.parse(:alnum,*args);end;def self._selector_alnum;Amethyst;end
def self.alpha(*args);self.new.parse(:alpha,*args);end;def self._selector_alpha;Amethyst;end
def self.char(*args);self.new.parse(:char,*args);end;def self._selector_char;Amethyst;end
def self.clas(*args);self.new.parse(:clas,*args);end;def self._selector_clas;Amethyst;end
def self.digit(*args);self.new.parse(:digit,*args);end;def self._selector_digit;Amethyst;end
def self.empty(*args);self.new.parse(:empty,*args);end;def self._selector_empty;Amethyst;end
def self.eof(*args);self.new.parse(:eof,*args);end;def self._selector_eof;Amethyst;end
def self.fails(*args);self.new.parse(:fails,*args);end;def self._selector_fails;Amethyst;end
def self.false(*args);self.new.parse(:false,*args);end;def self._selector_false;Amethyst;end
def self.find(*args);self.new.parse(:find,*args);end;def self._selector_find;Amethyst;end
def self.int(*args);self.new.parse(:int,*args);end;def self._selector_int;Amethyst;end
def self.line(*args);self.new.parse(:line,*args);end;def self._selector_line;Amethyst;end
def self.listOf(*args);self.new.parse(:listOf,*args);end;def self._selector_listOf;Amethyst;end
def self.lower(*args);self.new.parse(:lower,*args);end;def self._selector_lower;Amethyst;end
def self.member(*args);self.new.parse(:member,*args);end;def self._selector_member;Amethyst;end
def self.nested(*args);self.new.parse(:nested,*args);end;def self._selector_nested;Amethyst;end
def self.newline(*args);self.new.parse(:newline,*args);end;def self._selector_newline;Amethyst;end
def self.nil(*args);self.new.parse(:nil,*args);end;def self._selector_nil;Amethyst;end
def self.number(*args);self.new.parse(:number,*args);end;def self._selector_number;Amethyst;end
def self.parse(*args);self.new.parse(:parse,*args);end;def self._selector_parse;Amethyst;end
def self.range_ex(*args);self.new.parse(:range_ex,*args);end;def self._selector_range_ex;Amethyst;end
def self.range_in(*args);self.new.parse(:range_in,*args);end;def self._selector_range_in;Amethyst;end
def self.regch(*args);self.new.parse(:regch,*args);end;def self._selector_regch;Amethyst;end
def self.replace(*args);self.new.parse(:replace,*args);end;def self._selector_replace;Amethyst;end
def self.reverse(*args);self.new.parse(:reverse,*args);end;def self._selector_reverse;Amethyst;end
def self.seq(*args);self.new.parse(:seq,*args);end;def self._selector_seq;Amethyst;end
def self.space(*args);self.new.parse(:space,*args);end;def self._selector_space;Amethyst;end
def self.spaces(*args);self.new.parse(:spaces,*args);end;def self._selector_spaces;Amethyst;end
def self.token(*args);self.new.parse(:token,*args);end;def self._selector_token;Amethyst;end
def self.true(*args);self.new.parse(:true,*args);end;def self._selector_true;Amethyst;end
def self.until(*args);self.new.parse(:until,*args);end;def self._selector_until;Amethyst;end
def self.upper(*args);self.new.parse(:upper,*args);end;def self._selector_upper;Amethyst;end
def self.word(*args);self.new.parse(:word,*args);end;def self._selector_word;Amethyst;end
def self.xdigit(*args);self.new.parse(:xdigit,*args);end;def self._selector_xdigit;Amethyst;end
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
def _apply_lp_bi_f480(bind)
apply(bind[1],*bind[2])
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
