class Detect_Lambda < Traverser_Clone2
def self.analyze(*args);self.new.parse(:analyze,*args);end;def self._selector_analyze;Detect_Lambda;end
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Detect_Lambda;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Detect_Lambda;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Detect_Lambda;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;Detect_Lambda;end
def Detect_Lambda__at_lambdas_16e0(bind)
@lambdas
end
def Detect_Lambda__at_lambdas_1b6c(bind)
@lambdas=[]
end
def Detect_Lambda__at_lambdas_b523(bind)
@lambdas<<self
end
def Detect_Lambda__lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Detect_Lambda_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Detect_Lambda_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Detect_Lambda_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Detect_Lambda_src_25d9(bind)
src
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Detect_Lambda_c"
