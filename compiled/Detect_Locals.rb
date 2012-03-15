class Detect_Locals < Traverser_Clone2
def self.analyze(*args);self.new.parse(:analyze,*args);end;def self._selector_analyze;Detect_Locals;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Detect_Locals;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Detect_Locals;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;Detect_Locals;end
def Detect_Locals__at_locals_ca83(bind)
@locals
end
def Detect_Locals__at_locals_eq__545d(bind)
@locals=[]
end
def Detect_Locals__at_locals_lt__e5a7(bind)
@locals<< bind[1]
end
def Detect_Locals__at_locals_pl__84b1(bind)
@locals+=bind[1]
end
def Detect_Locals__lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Detect_Locals_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Detect_Locals_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Detect_Locals_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Detect_Locals_src_25d9(bind)
src
end
def Detect_Locals_src_dot_varn_13a6(bind)
src.varnames
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Detect_Locals_c"
