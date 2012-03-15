class Complexity_Dataflow < First_Dataflow
def self.first(*args);self.new.parse(:first,*args);end;def self._selector_first;Complexity_Dataflow;end
def self.getvalue(*args);self.new.parse(:getvalue,*args);end;def self._selector_getvalue;Complexity_Dataflow;end
def Complexity_Dataflow_Compiler_558e(bind)
Compiler.grammars[src.clas].rules[bind[1]].body
end
def Complexity_Dataflow__at_vis_eq_bin_8b89(bind)
@vis=bind[1]; bind[1]
end
def Complexity_Dataflow__lp_Compile_7f7b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[1]]) || FAIL
end
def Complexity_Dataflow_lattice_lb__11f0(bind)
lattice[20*bind[1].value]

end
def Complexity_Dataflow_lattice_lb__5911(bind)
lattice[bind[1].map{|w| w.value}.inject(:+)]

end
def Complexity_Dataflow_lattice_lb__6ee3(bind)
lattice[1]

end
def Complexity_Dataflow_lattice_lb__ba7e(bind)
lattice[2*bind[1].value]

end
def Complexity_Dataflow_lattice_lb__f621(bind)
lattice[bind[1].map{|w| w.value}.max+1]

end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Complexity_Dataflow_c"
