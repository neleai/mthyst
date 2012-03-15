class Visitor < Amethyst
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Visitor;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Visitor;end
def Visitor__lp_src_dot_ins_a413(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Visitor_c"
