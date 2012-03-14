class Constant_Propagator < Amethyst
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Constant_Propagator;end
def self.step(*args);self.new.parse(:step,*args);end;def self._selector_step;Constant_Propagator;end
def _Constant_8840(bind)
ConstantLattice[src]
end
def _Constant_bf42(bind)
ConstantLattice[Top]
end
def _Constant_db03(bind)
ConstantLattice[bind[1]]
end
def __at_depend_eq__07a9(bind)
@depend=bind[1]
end
def _a_eq_Consta_2e1d(bind)
a=ConstantLattice[Bottom]
                               depend.reverse.edges[bind[1]].each{|e| a=a+valof(e)}
                               a
end
def _src_25d9(bind)
src
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Constant_Propagator_c"
