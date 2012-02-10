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
'6d03fa566f2154ee5fb8109c04592eb0'
end
def traverser_source_hash
'866d34ac8914c3c5a6d593638f413dd3'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
'1735b5befa65428d22c572a8807fb1ee'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/traverser_c"
