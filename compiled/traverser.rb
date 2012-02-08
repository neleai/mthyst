class Traverser_Clone2 < Amethyst

def Traverser_Clone2__at_changed_5352(bind)
@changed=true
end
def Traverser_Clone2__at_changed_b885(bind)
@changed=false
end
def Traverser_Clone2__at_changed_c681(bind)
@changed
end
def Traverser_Clone2__lp_bind_lb_1_rb__ee3d(bind)
(bind[1]||=bind[2].dup;bind[3]=true;bind[1].instance_variable_set(bind[4],bind[5])) if @changed && bind[5]!=instance_variable_get(bind[4])
end
def Traverser_Clone2__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Traverser_Clone2_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Traverser_Clone2_if_sp_bind_lb__8e0b(bind)
if bind[1]
             @changed=true;bind[2].normalize
           else
            @changed=bind[3]
            src
          end
end
def Traverser_Clone2_src_25d9(bind)
src
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
'9b31f2b0800d9fb669e1e82290366dd1'
end
def traverser_source_hash
'b51d0673f97b5e6304d9738ea9045b3e'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
'7e6ba64f88283ee05305e8f6a3e16710'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/traverser_c"
