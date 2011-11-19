class Traverser_Clone2 < Amethyst

def Traverser_Clone2__append_lp_1(bind)
_append(bind[6],bind[8])
end
def Traverser_Clone2__append_lp_2(bind)
_append(bind[0],bind[1])
end
def Traverser_Clone2__append_lp_3(bind)
_append(bind[8],bind[13])
end
def Traverser_Clone2__at_changed1(bind)
@changed=true
end
def Traverser_Clone2__at_changed2(bind)
@changed
end
def Traverser_Clone2__at_changed3(bind)
@changed=false
end
def Traverser_Clone2__lp_bind_lb_4_rb_1(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Traverser_Clone2__lp_src_dot_ins1(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Traverser_Clone2_bind_lb_5_rb__lt_1(bind)
bind[5]<<bind[7]
end
def Traverser_Clone2_bind_lb_6_rb__eq_1(bind)
bind[6]=[bind[6]]
end
def Traverser_Clone2_if1(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Traverser_Clone2_src1(bind)
src
end

end


 

class Visitor < Amethyst

def Visitor__append_lp_1(bind)
_append(bind[4],bind[5])
end
def Visitor__append_lp_2(bind)
_append(bind[0],bind[1])
end
def Visitor__lp_src_dot_ins1(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end
def Visitor_bind_lb_2_rb__eq_1(bind)
bind[2]=[bind[2]]
end

end


def traverser_compiled_by
'efb04d97d57b1eb5714da35fba16915c'
end
def traverser_source_hash
'102e4f870eb0748a3420fd0f2398e4a9'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
'2b63b01eef6ed76d59d6aa1f4a6c7fc6'
end
  require 'compiled/traverser_c'
