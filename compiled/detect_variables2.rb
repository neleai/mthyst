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
_append(bind[3],bind[4])
end
def root_Analyze_Variables2cb_6(bind)
src.locals=nil
end
def traverse_Analyze_Variables2cb_1(bind)
_append(bind[0],bind[1])
end
def traverse_Analyze_Variables2cb_2(bind)
@changed
end
def traverse_Analyze_Variables2cb_3(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Analyze_Variables2cb_4(bind)
bind[6]=[bind[6]]
end
def traverse_Analyze_Variables2cb_5(bind)
@changed=false
end
def traverse_Analyze_Variables2cb_6(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def traverse_Analyze_Variables2cb_7(bind)
_append(bind[8],bind[13])
end
def traverse_Analyze_Variables2cb_8(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def traverse_item_Analyze_Variables2cb_1(bind)
@changed=true
end
def traverse_item_Analyze_Variables2cb_2(bind)
bind[5]<<bind[7]
end
def traverse_item_Analyze_Variables2cb_3(bind)
_append(bind[6],bind[8])
end
def visit_Analyze_Variables2cb_1(bind)
_append(bind[2],bind[3])
end
def visit_Analyze_Variables2cb_10(bind)
Or[*bind[24]]
end
def visit_Analyze_Variables2cb_11(bind)
vars=@locals.select{|aa| src.vars.include? aa[0].to_sym}.uniq ;Result[{:name=>src.name,:vars=>vars,:varnames=>vars.map{|v| v[0]}}]
end
def visit_Analyze_Variables2cb_12(bind)
_append(bind[29],bind[30])
end
def visit_Analyze_Variables2cb_13(bind)
Seq[*bind[24]]
end
def visit_Analyze_Variables2cb_2(bind)
src.ary
end
def visit_Analyze_Variables2cb_3(bind)
bind[4]=[bind[4]]
end
def visit_Analyze_Variables2cb_4(bind)
_append(bind[13],bind[14])
end
def visit_Analyze_Variables2cb_5(bind)
src.ary.map{|aa| @variables[aa] }
end
def visit_Analyze_Variables2cb_6(bind)
bind[15]=[bind[15]]
end
def visit_Analyze_Variables2cb_7(bind)
connectstring(bind[17].flatten)
end
def visit_Analyze_Variables2cb_8(bind)
(bind[18].size==1&&(bind[18][0].is_a?(Local)||bind[18][0].is_a?(Global)||bind[18][0].is_a?(Key))) ? bind[18][0] : Args[*bind[18]]
end
def visit_Analyze_Variables2cb_9(bind)
_append(bind[22],bind[23])
end

end




def detect_variables2_compiled_by
'28bdcaf0896417c86c011e5e96d3e20e'
end
def detect_variables2_source_hash
'610d7534e45fdb75843a0d15e4dd57c2'
end
def testversiondetect_variables2(r)
 raise "invalid version" if r!=detect_variables2_version
end
def detect_variables2_version
'21ce5588c7d1de2e3862fd97aa700729'
end
  require 'compiled/detect_variables2_c'
