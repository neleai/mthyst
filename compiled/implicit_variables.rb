class Detect_Implicit_Variables < Visitor

def root_Detect_Implicit_Variablescb_1(bind)
@vars=Hash.new(0)
end
def root_Detect_Implicit_Variablescb_2(bind)
@vars
end
def traverse_Detect_Implicit_Variablescb_1(bind)
_append(bind[0],bind[1])
end
def traverse_Detect_Implicit_Variablescb_2(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end
def traverse_Detect_Implicit_Variablescb_3(bind)
bind[2]=[bind[2]]
end
def traverse_item_Detect_Implicit_Variablescb_1(bind)
_append(bind[4],bind[5])
end
def visit_Detect_Implicit_Variablescb_1(bind)
@vars[bind[1]]+=1
end
def visit_Detect_Implicit_Variablescb_2(bind)
_append(bind[2],bind[3])
end

end


class Add_Implicit_Variables < Traverser_Clone2

def root_Add_Implicit_Variablescb_1(bind)
@vars=bind[0]
end
def traverse_Add_Implicit_Variablescb_1(bind)
_append(bind[0],bind[1])
end
def traverse_Add_Implicit_Variablescb_2(bind)
@changed
end
def traverse_Add_Implicit_Variablescb_3(bind)
src
end
def traverse_Add_Implicit_Variablescb_4(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Add_Implicit_Variablescb_5(bind)
bind[6]=[bind[6]]
end
def traverse_Add_Implicit_Variablescb_6(bind)
@changed=false
end
def traverse_Add_Implicit_Variablescb_7(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def traverse_Add_Implicit_Variablescb_8(bind)
_append(bind[8],bind[13])
end
def traverse_Add_Implicit_Variablescb_9(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def traverse_item_Add_Implicit_Variablescb_1(bind)
@changed=true
end
def traverse_item_Add_Implicit_Variablescb_2(bind)
bind[5]<<bind[7]
end
def traverse_item_Add_Implicit_Variablescb_3(bind)
_append(bind[6],bind[8])
end
def visit_Add_Implicit_Variablescb_1(bind)
_append(bind[4],bind[5])
end
def visit_Add_Implicit_Variablescb_2(bind)
(@vars[bind[3]]>=1) || FAIL
end
def visit_Add_Implicit_Variablescb_3(bind)
_Bind(bind[3],src)
end
def visit_Add_Implicit_Variablescb_4(bind)
_append(bind[9],bind[10])
end
def visit_Add_Implicit_Variablescb_5(bind)
(@vars[bind[3]]> 1) || FAIL
end
def visit_Add_Implicit_Variablescb_6(bind)
Append[bind[3],src]
end

end


def implicit_variables_compiled_by
'3dcf104ef6aa91fcbe86afd37aade00c'
end
def implicit_variables_source_hash
'6a0a31cf7e531a56757bd541162a71ff'
end
def testversionimplicit_variables(r)
 raise "invalid version" if r!=implicit_variables_version
end
def implicit_variables_version
'2143cd8c20b1dacee725fee82b09e17d'
end
  require 'compiled/implicit_variables_c'
