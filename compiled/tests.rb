$test_lambda = (class Anon1 < Amethyst

def __do_passit_eq__fc0a(bind)
$passit=bind[1];eval("_result=$passit",@bind)
end
def _bind_lb_1_rb__eq__afc0(bind)
bind[1]=eval("_result=_result",@bind)
end

end;class Anon1;end;ame_lambda(Anon1,binding))

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
'086973cf9a09db51fdd3787ea2f5dd4d'
end
def tests_source_hash
'710cdaae439c570560b264e46ed5958b'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'0e73ed7dde5a8065de84e494e79ba10a'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
