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
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Tests_c"
