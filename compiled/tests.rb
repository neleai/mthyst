
class Tests < Amethyst
  use_implicit_variables
  use_contextual_returns
end
class Lam < Amethyst

def __at_context_0dcc(bind)
@contextual_return.each{|k,v| bind[1][k]+=v};@contextual_return=nil
end
def __at_context_2721(bind)
@contextual_return=bind[1]
end
def _bind_lb_1_rb__eq__f4b0(bind)
bind[1]=Hash.new{|h,k| h[k]=[]}
end

end
class Tests < Amethyst

def __at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def __at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def _bind_lb_1_rb__eq__58f9(bind)
bind[1]=bind[2];bind.reset;bind[2]=bind[1]
end
def _bind_lb_1_rb__lb__6e1f(bind)
bind[1][:a]=32;puts 32
end
def _bind_lb_1_rb__pl__0a71(bind)
bind[1]+2
end
def _bind_lb_1_rb__pl__61a1(bind)
bind[1]+1
end
def _foo_pl_bar_ac93(bind)
foo+bar
end

end

def tests_compiled_by
'f65a17c295b7d86e3c5585f39694c7a1'
end
def tests_source_hash
'74a3bdd04045e48934a6da05800d0098'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'621d27b38e2ed3f46c3e82eb1652ead8'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
