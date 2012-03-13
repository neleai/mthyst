class Detect_Implicit_Variables < Visitor
def self.root(*args);self.new.parse(:root,*args);end
def self.traverse(*args);self.new.parse(:traverse,*args);end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end
def self.visit(*args);self.new.parse(:visit,*args);end
def __at_vars_a187(bind)
@vars
end
def __at_vars_eq_Ha_dec8(bind)
@vars=Hash.new(0)
end
def __at_vars_lb_bi_edce(bind)
@vars[bind[1]]+=1
end
def __lp_src_dot_ins_a413(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end

class Add_Implicit_Variables < Traverser_Clone2
def self.root(*args);self.new.parse(:root,*args);end
def self.traverse(*args);self.new.parse(:traverse,*args);end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end
def self.visit(*args);self.new.parse(:visit,*args);end
def __at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def __at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __at_locals_eq__545d(bind)
@locals=[]
end
def __at_vars_eq_bi_1ca4(bind)
@vars=bind[1]
end
def __lp__at_vars_lb_b_160d(bind)
(@vars[bind[1]]>=1) || FAIL
end
def __lp__at_vars_lb_b_5cb3(bind)
(@vars[bind[1]]> 1) || FAIL
end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__eq__1818(bind)
bind[1]=bind[1].dup;bind[1].locals+=@locals;bind[1].freeze
end
def _bind_lb_1_rb__lb__9337(bind)
bind[1][:bnding]=src.bnding
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def _l_eq_Local_lb__348c(bind)
l=Local[bind[1],bind[2][:bnding]];@locals<<l;Append[bind[1],src]
end
def _l_eq_Local_lb__f6a4(bind)
l=Local[bind[1],bind[2][:bnding]];@locals<<l;Bind[l,src]
end

end

def implicit_variables_compiled_by
'5aedbe9d2248e4c81dc555367893ac30'
end
def implicit_variables_source_hash
'7902bddeb33ad0be079983548a91f729'
end
def testversionimplicit_variables(r)
 raise "invalid version" if r!=implicit_variables_version
end
def implicit_variables_version
'4fc14c7adf1f33171ab854c91c0e1a53'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/implicit_variables_c"
