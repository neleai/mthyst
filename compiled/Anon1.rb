class Anon1 < Amethyst
def self.expr(*args);self.new.parse(:expr,*args);end
def self.init(*args);self.new.parse(:init,*args);end
def __at_bind_eq_bi_6dcc(bind)
@bind=bind[1]
end
def __do_passit_eq__fc0a(bind)
$passit=bind[1];eval("_result=$passit",@bind)
end
def _bind_lb_1_rb__eq__afc0(bind)
bind[1]=eval("_result=_result",@bind)
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Anon1_c"
