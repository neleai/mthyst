class Detect_First < Traverser_Clone2
def self._apply(*args);self.new.parse(:_apply,*args);end;def self._selector__apply;Detect_First;end
def self.cant_fail(*args);self.new.parse(:cant_fail,*args);end;def self._selector_cant_fail;Detect_First;end
def self.combine_or(*args);self.new.parse(:combine_or,*args);end;def self._selector_combine_or;Detect_First;end
def self.combine_seq(*args);self.new.parse(:combine_seq,*args);end;def self._selector_combine_seq;Detect_First;end
def self.itrans(*args);self.new.parse(:itrans,*args);end;def self._selector_itrans;Detect_First;end
def self.must_empty(*args);self.new.parse(:must_empty,*args);end;def self._selector_must_empty;Detect_First;end
def self.object_only(*args);self.new.parse(:object_only,*args);end;def self._selector_object_only;Detect_First;end
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Detect_First;end
def self.string_only(*args);self.new.parse(:string_only,*args);end;def self._selector_string_only;Detect_First;end
def Detect_First_Seq_lb__ti__lp_bi_a321(bind)
Seq[*(bind[1]+bind[2])]
end
def Detect_First__at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def Detect_First__at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def Detect_First__do_rules_eq__le__ab16(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def Detect_First__lp_bind_lb_1_rb__c400(bind)
(bind[1].name==bind[2]) || FAIL
end
def Detect_First__lp_cant_fa_17ef(bind)
(cant_fail?(bind[1]) ) || FAIL
end
def Detect_First__lp_must_em_43e9(bind)
(must_empty?(bind[1])) || FAIL
end
def Detect_First_bind_lb_1_rb_(bind)
bind[1]

end
def Detect_First_bind_lb_1_rb__dot__642a(bind)
bind[1].each{|p,a| bind[2].each{|p2,a2| bind[3] << [p&p2,a+[a2]] if p&p2!=bind[4].bottom}}
end
def Detect_First_bind_lb_1_rb__dot__a482(bind)
bind[1].map{|p,a| [p,a+[bind[2]]]}
end
def Detect_First_bind_lb_1_rb__lb__0f18(bind)
bind[1][{:ary=>bind[2].map{|p,a| [p,Or[*a]]}}]
end
def Detect_First_bind_lb_1_rb__lb__75a5(bind)
bind[1][{:ary=>bind[2].map{|p,a| [p,Seq[*(bind[3]+[a]+bind[4])]]}}] 
end
def Detect_First_bind_lb_1_rb__lb__fa06(bind)
bind[1][:name]=src.name
end
def Detect_First_bind_lb_1_rb__pl__4651(bind)
bind[1]+[bind[2]]
end
def Detect_First_src_25d9(bind)
src
end
def Detect_First_src_dot_ary_d5cf(bind)
src.ary
end
def Detect_First_src_dot_rule_5acf(bind)
src.rules
end
def Detect_First_src_dot_rule_a719(bind)
src.rules=bind[1]
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Detect_First_c"
