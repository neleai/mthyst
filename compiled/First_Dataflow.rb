class First_Dataflow < Amethyst
def self.first(*args);self.new.parse(:first,*args);end;def self._selector_first;First_Dataflow;end
def self.getvalue(*args);self.new.parse(:getvalue,*args);end;def self._selector_getvalue;First_Dataflow;end
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;First_Dataflow;end
def self.switch(*args);self.new.parse(:switch,*args);end;def self._selector_switch;First_Dataflow;end
def self.value(*args);self.new.parse(:value,*args);end;def self._selector_value;First_Dataflow;end
def First_Dataflow_Compiler_558e(bind)
Compiler.grammars[src.clas].rules[bind[1]].body
end
def First_Dataflow_Switch_O_5445(bind)
Switch_Or.create(:ary=>bind[1].map{|k| [nil,k]})

end
def First_Dataflow__at_vis_eq_bin_8b89(bind)
@vis=bind[1]; bind[1]
end
def First_Dataflow__d41d(bind)

end
def First_Dataflow__lp_(bind)
(!(can_empty?(bind[1]))) || FAIL
end
def First_Dataflow__lp_Compile_7f7b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[1]]) || FAIL
end
def First_Dataflow_bind_lb_1_rb_(bind)
bind[1]|lattice.bottom
end
def First_Dataflow_bind_lb_1_rb__dot__159a(bind)
bind[1].seqjoin(bind[2])
end
def First_Dataflow_bind_lb_1_rb__dot__a37c(bind)
bind[1].inject(:|)

end
def First_Dataflow_bind_lb_1_rb__dot__c5d5(bind)
bind[1].is_a?(lattice)? bind[1] & bind[2] : bind[2]
end
def First_Dataflow_depends_lp__7463(bind)
depends(bind[1]);@vals[bind[1]]
end
def First_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end
def First_Dataflow_lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/First_Dataflow_c"
