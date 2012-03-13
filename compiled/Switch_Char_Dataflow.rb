class Switch_Char_Dataflow < First_Dataflow
def self.first(*args);self.new.parse(:first,*args);end
def self.first_Switch_Char_Dataflow(*args);self.new.parse(:first_Switch_Char_Dataflow,*args);end
def self.getvalue(*args);self.new.parse(:getvalue,*args);end
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
def _firstcha_f284(bind)
firstchar(bind[1])
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
def _regchar_lp__90af(bind)
regchar(bind[1])
end

end
