class Anon1 < Amethyst


end
class Anon1;end;Anon1.new


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

def __at__contex_160a(bind)
@_context_arguments||={};bind[1]=@_context_arguments.dup
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
'5d57879096342c0ea936aa2523d40712'
end
def tests_source_hash
'142917f3cce7d427b2253953ef249d2b'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'70a3ed2c670d80d4326f41160f1efbc7'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
