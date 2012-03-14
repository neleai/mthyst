class Detect_Implicit_Variables < Visitor
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Detect_Implicit_Variables;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Detect_Implicit_Variables;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Detect_Implicit_Variables;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;Detect_Implicit_Variables;end
def __at_vars_a187(bind)
@vars
end
def __at_vars_eq_Ha_dec8(bind)
@vars=Hash.new(0)
end
def __at_vars_lb_bi_edce(bind)
@vars[bind[1]]+=1
end
def __lp_src_dot_ins_a413(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Detect_Implicit_Variables_c"
