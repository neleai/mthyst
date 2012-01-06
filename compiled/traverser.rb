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
def Traverser_Clone2__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Traverser_Clone2__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Traverser_Clone2_bind_lb_7_rb__lt__4e47(bind)
bind[7]<<bind[8]
end
def Traverser_Clone2_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def Traverser_Clone2_src_25d9(bind)
src
end

end


 

class Visitor < Amethyst

def Visitor__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
def Visitor__append_lp__d472(bind)
_append(bind[6],bind[7])
end
def Visitor__lp_src_dot_ins_a413(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end


def traverser_compiled_by
'a3425d3a8f23c48beacf37389727aa80'
end
def traverser_source_hash
'102e4f870eb0748a3420fd0f2398e4a9'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
'289e385921eea08c893108de5f0d863d'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/traverser_c"
