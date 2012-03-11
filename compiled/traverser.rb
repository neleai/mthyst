class Traverser_Clone2 < Amethyst

def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
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

end

 

class Visitor < Amethyst

def __lp_src_dot_ins_a413(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end

def traverser_compiled_by
'1cea1e101d4b4dd2ed680b64f0d2309a'
end
def traverser_source_hash
'c8627489f00dc4fe77fe244f73a261e1'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
'722520936da7b9a80b500c17df65e641'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/traverser_c"
