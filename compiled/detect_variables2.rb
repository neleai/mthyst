class Analyze_Variables2 < Traverser_Clone2

def flat_Analyze_Variables2cb_1(bind)
_append(bind[0],bind[4])
end
def itrans_Analyze_Variables2cb_1(bind)
src.rules
end
def itrans_Analyze_Variables2cb_2(bind)
bind[3]=[bind[3]]
end
def itrans_Analyze_Variables2cb_3(bind)
_append(bind[5],bind[8])
end
def itrans_Analyze_Variables2cb_4(bind)
src.rules=bind[9]
end
def itrans_Analyze_Variables2cb_5(bind)
src
end
def itrans_Analyze_Variables2cb_6(bind)
_append(bind[0],bind[11])
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
src.pred
end
def visit_Analyze_Variables2cb_10(bind)
connectstring(bind[23].flatten)
end
def visit_Analyze_Variables2cb_11(bind)
(bind[10].size==1&&(bind[10][0].is_a?(Local)||bind[10][0].is_a?(Global)||bind[10][0].is_a?(Key))) ? bind[10][0] : Args[*bind[10]]
end
def visit_Analyze_Variables2cb_12(bind)
_append(bind[27],bind[28])
end
def visit_Analyze_Variables2cb_13(bind)
Placeholder
end
def visit_Analyze_Variables2cb_14(bind)
_append(bind[31],bind[32])
end
def visit_Analyze_Variables2cb_15(bind)
Or[*bind[33]]
end
def visit_Analyze_Variables2cb_16(bind)
vars=@locals.select{|aa| src.vars.include? aa[0].to_sym}.uniq ;Result[{:name=>src.name,:vars=>vars,:varnames=>vars.map{|v| v[0]}}]
end
def visit_Analyze_Variables2cb_17(bind)
_append(bind[38],bind[39])
end
def visit_Analyze_Variables2cb_18(bind)
Seq[*bind[33]]
end
def visit_Analyze_Variables2cb_2(bind)
src.ary
end
def visit_Analyze_Variables2cb_3(bind)
bind[5]=[bind[5]]
end
def visit_Analyze_Variables2cb_4(bind)
_append(bind[8],bind[9])
end
def visit_Analyze_Variables2cb_5(bind)
Act[bind[10],bind[1]]
end
def visit_Analyze_Variables2cb_6(bind)
(!bind[1]) || FAIL
end
def visit_Analyze_Variables2cb_7(bind)
_append(bind[19],bind[20])
end
def visit_Analyze_Variables2cb_8(bind)
src.ary.map{|aa| @variables[aa] }
end
def visit_Analyze_Variables2cb_9(bind)
bind[21]=[bind[21]]
end

end




def detect_variables2_compiled_by
'3dcf104ef6aa91fcbe86afd37aade00c'
end
def detect_variables2_source_hash
'eab18725e78d475e7622db4b6d8f1183'
end
def testversiondetect_variables2(r)
 raise "invalid version" if r!=detect_variables2_version
end
def detect_variables2_version
'ecede126e03121253fdf95216cc6e636'
end
  require 'compiled/detect_variables2_c'
