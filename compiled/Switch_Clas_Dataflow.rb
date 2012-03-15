class Switch_Clas_Dataflow < First_Dataflow
def self.first(*args);self.new.parse(:first,*args);end;def self._selector_first;Switch_Clas_Dataflow;end
def self.first_Switch_Clas_Dataflow(*args);self.new.parse(:first_Switch_Clas_Dataflow,*args);end;def self._selector_first_Switch_Clas_Dataflow;Switch_Clas_Dataflow;end
def self.getvalue(*args);self.new.parse(:getvalue,*args);end;def self._selector_getvalue;Switch_Clas_Dataflow;end
def Switch_Clas_Dataflow_Compiler_558e(bind)
Compiler.grammars[src.clas].rules[bind[1]].body
end
def Switch_Clas_Dataflow__at_vis_eq_bin_8b89(bind)
@vis=bind[1]; bind[1]
end
def Switch_Clas_Dataflow__d41d(bind)

end
def Switch_Clas_Dataflow__lp_(bind)
(!(can_empty?(bind[1]))) || FAIL
end
def Switch_Clas_Dataflow__lp_Compile_7f7b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[1]]) || FAIL
end
def Switch_Clas_Dataflow_bind_lb_1_rb_(bind)
bind[1]|lattice.bottom
end
def Switch_Clas_Dataflow_bind_lb_1_rb__dot__159a(bind)
bind[1].seqjoin(bind[2])
end
def Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c(bind)
bind[1].inject(:|)

end
def Switch_Clas_Dataflow_bind_lb_1_rb__dot__c5d5(bind)
bind[1].is_a?(lattice)? bind[1] & bind[2] : bind[2]
end
def Switch_Clas_Dataflow_lattice_dot__3340(bind)
lattice.bottom

end
def Switch_Clas_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end
def Switch_Clas_Dataflow_lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end
def Switch_Clas_Dataflow_lattice_lb__becc(bind)
lattice[bind[1]]

end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Switch_Clas_Dataflow_c"
