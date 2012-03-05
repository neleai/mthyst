class Tests < Amethyst
  use_implicit_variables
  use_contextual_returns
end
class Tests < Amethyst

def __at__contex_160a(bind)
@_context_arguments||={};bind[1]=@_context_arguments.dup
end
def __at_context_0dcc(bind)
@contextual_return.each{|k,v| bind[1][k]+=v};@contextual_return=nil
end
def __at_context_2721(bind)
@contextual_return=bind[1]
end
def _bind_lb_1_rb__eq__58f9(bind)
bind[1]=bind[2];bind.reset;bind[2]=bind[1]
end
def _bind_lb_1_rb__eq__f4b0(bind)
bind[1]=Hash.new{|h,k| h[k]=[]}
end
def _bind_lb_1_rb__lb__6e1f(bind)
bind[1][:a]=32;puts 32
end
def _bind_lb_1_rb__pl__0a71(bind)
bind[1]+2
end
def _bind_lb_1_rb__pl__3b73(bind)
bind[1]+bind[2]
end
def _bind_lb_1_rb__pl__61a1(bind)
bind[1]+1
end

end


def tests_compiled_by
'18ca6e168e757bc938b21007088441e7'
end
def tests_source_hash
'b5f97f6afad61607b5a299b4e93326c3'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'3b18cb109cf963b2d45834c7aaefaad9'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
