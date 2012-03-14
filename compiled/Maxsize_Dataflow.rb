class Maxsize_Dataflow < First_Dataflow
def self.first(*args);self.new.parse(:first,*args);end;def self._selector_first;Maxsize_Dataflow;end
def self.first_Maxsize_Dataflow(*args);self.new.parse(:first_Maxsize_Dataflow,*args);end;def self._selector_first_Maxsize_Dataflow;Maxsize_Dataflow;end
def self.getvalue(*args);self.new.parse(:getvalue,*args);end;def self._selector_getvalue;Maxsize_Dataflow;end
def _Compiler_558e(bind)
Compiler.grammars[src.clas].rules[bind[1]].body
end
def __at_vis_eq_bin_8b89(bind)
@vis=bind[1]; bind[1]
end
def __d41d(bind)

end
def __lp_(bind)
(!(can_empty?(bind[1]))) || FAIL
end
def __lp_Compile_7f7b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[1]]) || FAIL
end
def _bind_lb_1_rb_(bind)
bind[1]|lattice.bottom
end
def _bind_lb_1_rb__dot__159a(bind)
bind[1].seqjoin(bind[2])
end
def _bind_lb_1_rb__dot__a37c(bind)
bind[1].inject(:|)

end
def _bind_lb_1_rb__dot__c5d5(bind)
bind[1].is_a?(lattice)? bind[1] & bind[2] : bind[2]
end
def _lattice_dot__5a9e(bind)
lattice.bottom
end
def _lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end
def _lattice_dot__e0e5(bind)
lattice.top
end
def _lattice_lb__bbba(bind)
lattice[bind[1].size]
end
def _lattice_lb__fdee(bind)
lattice[1]
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Maxsize_Dataflow_c"
