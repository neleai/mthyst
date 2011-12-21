class Traverser_Clone2 < Amethyst

def Traverser_Clone2__append_lp_bind(bind)
_append(bind[6],bind[8])
end
def Traverser_Clone2__append_lp_bind2(bind)
_append(bind[0],bind[1])
end
def Traverser_Clone2__append_lp_bind3(bind)
_append(bind[8],bind[13])
end
def Traverser_Clone2__at_changed(bind)
@changed
end
def Traverser_Clone2__at_changed_eq_fal(bind)
@changed=false
end
def Traverser_Clone2__at_changed_eq_tru(bind)
@changed=true
end
def Traverser_Clone2__lp_bind_lb_4_rb_(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Traverser_Clone2__lp_src_dot_instanc(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Traverser_Clone2_bind_lb_5_rb__lt__lt_bin(bind)
bind[5]<<bind[7]
end
def Traverser_Clone2_if_sp_bind_lb_5_rb_(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Traverser_Clone2_src(bind)
src
end

end


 

class Visitor < Amethyst

def Visitor__append_lp_bind(bind)
_append(bind[4],bind[5])
end
def Visitor__append_lp_bind2(bind)
_append(bind[0],bind[1])
end
def Visitor__lp_src_dot_instanc(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end


def traverser_compiled_by
'472138cdffc8d639efb367af8b54ad09'
end
def traverser_source_hash
'102e4f870eb0748a3420fd0f2398e4a9'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
'd36939d0530c326bd9b7eea030ffbf71'
end
  require 'compiled/traverser_c'
