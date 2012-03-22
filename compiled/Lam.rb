class Lam < Amethyst
def self.baz(*args);self.new.parse(:baz,*args);end;def self._selector_baz;Lam;end
def self.foo(*args);self.new.parse(:foo,*args);end;def self._selector_foo;Lam;end
def self.lam(*args);self.new.parse(:lam,*args);end;def self._selector_lam;Lam;end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Lam_c"
