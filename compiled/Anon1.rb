class Anon1 < Amethyst
def self.expr(*args);self.new.parse(:expr,*args);end;def self._selector_expr;Anon1;end
def self.init(*args);self.new.parse(:init,*args);end;def self._selector_init;Anon1;end
def Anon1__at_bind_eq_bi_6dcc(bind)
@bind=bind[1]
end
def Anon1__do_passit_eq__323b(bind)
$passit=bind[1];eval("it=$passit",@bind);$passit=bind[2];eval("_result=$passit",@bind);
end
def Anon1_bind_lb_1_rb__dot__3c0b(bind)
bind[1].upcase
end
def Anon1_bind_lb_1_rb__eq__4f37(bind)
bind[1]=eval("it=it",@bind);bind[2]=eval("_result=_result",@bind);
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Anon1_c"
