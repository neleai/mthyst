class Analyze_Variables2 < Traverser_Clone2

def flat_Analyze_Variables2cb_1(bind)
_append(bind[0],bind[3])
end
def itrans_Analyze_Variables2cb_1(bind)
src.rules
end
def itrans_Analyze_Variables2cb_2(bind)
bind[2]=[bind[2]]
end
def itrans_Analyze_Variables2cb_3(bind)
_append(bind[4],bind[7])
end
def itrans_Analyze_Variables2cb_4(bind)
src.rules=bind[8]
end
def itrans_Analyze_Variables2cb_5(bind)
src
end
def itrans_Analyze_Variables2cb_6(bind)
_append(bind[0],bind[10])
end
def root_Analyze_Variables2cb_1(bind)
bind[0]=[bind[0]]
end
def root_Analyze_Variables2cb_2(bind)
@bnding=src.bnding
end
def root_Analyze_Variables2cb_3(bind)
@variables=Hash.new{|k,v| k[v]=v} ;(src.locals+src.args).each{|w| @variables[w[0]]=w}
end
def root_Analyze_Variables2cb_4(bind)
@locals=src.locals
end
def root_Analyze_Variables2cb_5(bind)
src.locals=nil
end
def traverse_Analyze_Variables2cb_1(bind)
@changed
end
def traverse_Analyze_Variables2cb_2(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Analyze_Variables2cb_3(bind)
bind[4]=[bind[4]]
end
def traverse_Analyze_Variables2cb_4(bind)
@changed=false
end
def traverse_Analyze_Variables2cb_5(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def traverse_Analyze_Variables2cb_6(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def traverse_item_Analyze_Variables2cb_1(bind)
@changed=true
end
def traverse_item_Analyze_Variables2cb_2(bind)
bind[5]<<bind[6]
end
def visit_Analyze_Variables2cb_1(bind)
src.ary
end
def visit_Analyze_Variables2cb_10(bind)
Seq[*bind[20]]
end
def visit_Analyze_Variables2cb_2(bind)
src.ary.map{|aa| @variables[aa] }
end
def visit_Analyze_Variables2cb_3(bind)
bind[11]=[bind[11]]
end
def visit_Analyze_Variables2cb_4(bind)
connectstring(bind[13].flatten)
end
def visit_Analyze_Variables2cb_5(bind)
(bind[14].size==1&&(bind[14][0].is_a?(Local)||bind[14][0].is_a?(Global)||bind[14][0].is_a?(Key))) ? bind[14][0] : Args[*bind[14]]
end
def visit_Analyze_Variables2cb_6(bind)
_append(bind[18],bind[19])
end
def visit_Analyze_Variables2cb_7(bind)
Or[*bind[20]]
end
def visit_Analyze_Variables2cb_8(bind)
vars=@locals.select{|aa| src.vars.include? aa[0].to_sym}.uniq ;Result[{:name=>src.name,:vars=>vars,:varnames=>vars.map{|v| v[0]}}]
end
def visit_Analyze_Variables2cb_9(bind)
_append(bind[25],bind[26])
end

end




def detect_variables2_compiled_by
'a8549680d230a8aa44a984fa3156024c'
end
def detect_variables2_source_hash
'610d7534e45fdb75843a0d15e4dd57c2'
end
def testversiondetect_variables2(r)
 raise "invalid version" if r!=detect_variables2_version
end
def detect_variables2_version
'71fd4ead80a7b95fa3f8043e5d535185'
end
  require 'compiled/detect_variables2_c'
