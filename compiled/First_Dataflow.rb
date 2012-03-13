class First_Dataflow < Amethyst
def self.first(*args);self.new.parse(:first,*args);end
def self.getvalue(*args);self.new.parse(:getvalue,*args);end
def self.root(*args);self.new.parse(:root,*args);end
def self.switch(*args);self.new.parse(:switch,*args);end
def self.value(*args);self.new.parse(:value,*args);end
def _Compiler_558e(bind)
Compiler.grammars[src.clas].rules[bind[1]].body
end
def _Switch_O_5445(bind)
Switch_Or.create(:ary=>bind[1].map{|k| [nil,k]})

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
def _depends_lp__7463(bind)
depends(bind[1]);@vals[bind[1]]
end
def _lattice_dot__5a9e(bind)
lattice.bottom
end
def _lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end

end
