class Lam < Amethyst
def self.baz(*args);self.new.parse(:baz,*args);end;def self._selector_baz;Lam;end
def self.foo(*args);self.new.parse(:foo,*args);end;def self._selector_foo;Lam;end
def self.lam(*args);self.new.parse(:lam,*args);end;def self._selector_lam;Lam;end
def Lam__at_context_0dcc(bind)
@contextual_return.each{|k,v| bind[1][k]+=v};@contextual_return=nil
end
def Lam__at_context_2721(bind)
@contextual_return=bind[1]
end
def Lam_bind_lb_1_rb__eq__f4b0(bind)
bind[1]=Hash.new{|h,k| h[k]=[]}
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Lam_c"
