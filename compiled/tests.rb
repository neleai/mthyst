$test_lambda = (class Anon1 < Amethyst
def self.expr(*args);self.new.parse(:expr,*args);end
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
def self.baz(*args);self.new.parse(:baz,*args);end
def self.foo(*args);self.new.parse(:foo,*args);end
def self.lam(*args);self.new.parse(:lam,*args);end
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
def self.abc(*args);self.new.parse(:abc,*args);end
def self.context(*args);self.new.parse(:context,*args);end
def self.de(*args);self.new.parse(:de,*args);end
def self.foo(*args);self.new.parse(:foo,*args);end
def self.gh(*args);self.new.parse(:gh,*args);end
def self.s2(*args);self.new.parse(:s2,*args);end
def self.sw(*args);self.new.parse(:sw,*args);end
def self.test(*args);self.new.parse(:test,*args);end
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
'198c36d34da4d34a36f909d90bfa66b9'
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
