class Traverser_Clone2 < Amethyst

def Traverser_Clone2__append_lp__324d(bind)
_append(bind[8],bind[13])
end
def Traverser_Clone2__append_lp__37c5(bind)
_append(bind[6],bind[8])
end
def Traverser_Clone2__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Traverser_Clone2__at_changed_5352(bind)
@changed=true
end
def Traverser_Clone2__at_changed_b885(bind)
@changed=false
end
def Traverser_Clone2__at_changed_c681(bind)
@changed
end
def Traverser_Clone2__lp_bind_lb_4_rb__d863(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Traverser_Clone2__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Traverser_Clone2_bind_lb_5_rb__lt__dccc(bind)
bind[5]<<bind[7]
end
def Traverser_Clone2_if_sp_bind_lb__b5ce(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Traverser_Clone2_src_25d9(bind)
src
end

end


 

class Visitor < Amethyst

def Visitor__append_lp__088f(bind)
_append(bind[4],bind[5])
end
def Visitor__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Visitor__lp_src_dot_ins_a413(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end


def traverser_compiled_by
'f280894dfa24d87154dc83a198031d38'
end
def traverser_source_hash
'102e4f870eb0748a3420fd0f2398e4a9'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
'9383078f067592b8c43bdd9179aa530d'
end
  require 'compiled/traverser_c'
