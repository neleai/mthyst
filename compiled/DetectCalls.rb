class DetectCalls < Visitor
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;DetectCalls;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;DetectCalls;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;DetectCalls;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;DetectCalls;end
def DetectCalls__at_calls_7f81(bind)
@calls
end
def DetectCalls__at_calls_eq__le__39e9(bind)
@calls={}
end
def DetectCalls__at_calls_lb_b_e709(bind)
@calls[bind[1]]=true 
end
def DetectCalls__lp_src_dot_ins_a413(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/DetectCalls_c"
