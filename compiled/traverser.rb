class Traverser_Clone2 < Amethyst

def __lp_src_dot_cla_e144(bind)
(src.class.instance_variable_get(:@attrs)).map{|v| src.instance_variable_get("@"+v.to_s) }
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

def __append_lp__d113(bind)
_append(bind[1],bind[2])
end
def __lp_src_dot_ins_a413(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end


def traverser_compiled_by
'ca0facf10faf5ca89fc0c73cd5b3a472'
end
def traverser_source_hash
'866d34ac8914c3c5a6d593638f413dd3'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
'e301d8da6b51751a13e4b0de1273987e'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/traverser_c"
