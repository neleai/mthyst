class Traverser_Clone2 < Amethyst

def Traverser_Clone2__lp_src_dot_cla_e144(bind)
(src.class.instance_variable_get(:@attrs)).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Traverser_Clone2_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Traverser_Clone2_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Traverser_Clone2_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end

end


 

class Visitor < Amethyst

def Visitor__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def Visitor__lp_src_dot_ins_a413(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end


def traverser_compiled_by
'667471082c129eb6791f6496951520c0'
end
def traverser_source_hash
'a65154f1b3d4f863df093be60cb19d9e'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
'29a82bfa209d89d3c5c2484e7af78e9d'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/traverser_c"
