class Anon1 < Amethyst
def self.expr(*args);self.new.parse(:expr,*args);end;def self._selector_expr;Anon1;end
def self.init(*args);self.new.parse(:init,*args);end;def self._selector_init;Anon1;end
def Anon1__at_bind_eq_bi_6dcc(bind)
@bind=bind[1]
end
def Anon1__do_passit_eq__797b(bind)
$passit=bind[1];eval("x=$passit",@bind);$passit=bind[2];eval("y=$passit",@bind);$passit=bind[3];eval("z=$passit",@bind);$passit=bind[4];eval("_result=$passit",@bind);
end
def Anon1_bind_lb_1_rb__eq__b0fb(bind)
bind[1]=eval("x=x",@bind);bind[2]=eval("y=y",@bind);bind[3]=eval("z=z",@bind);bind[4]=eval("_result=_result",@bind);
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Anon1_c"
