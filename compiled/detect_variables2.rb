class Analyze_Variables2 < Traverser_Clone2
def self.switchcb_Analyze_Variables21(e)
return 0 if e<=Act
return 1 if e<=Args
return 2 if e<=Or
return 3 if e<=Result
return 4 if e<=Seq
return 5 if e<=Object
end
@@switchhashAnalyze_Variables21=Hash.new{|h,k| h[k]=switchcb_Analyze_Variables21(k)}
def switchcbAnalyze_Variables21(e)
@@switchhashAnalyze_Variables21[e.class]
end
def self.switchcb_Analyze_Variables22(e)
return 0 if e<=Grammar
return 1 if e<=Object
end
@@switchhashAnalyze_Variables22=Hash.new{|h,k| h[k]=switchcb_Analyze_Variables22(k)}
def switchcbAnalyze_Variables22(e)
@@switchhashAnalyze_Variables22[e.class]
end
def self.switchcb_Analyze_Variables23(e)
return 0 if e<=Args
return 1 if e<=Strin
return 2 if e<=Object
end
@@switchhashAnalyze_Variables23=Hash.new{|h,k| h[k]=switchcb_Analyze_Variables23(k)}
def switchcbAnalyze_Variables23(e)
@@switchhashAnalyze_Variables23[e.class]
end
def self.switchcb_Analyze_Variables24(e)
return 0 if e<=AmethystAST
return 1 if e<=Array
return 2 if e<=Object
end
@@switchhashAnalyze_Variables24=Hash.new{|h,k| h[k]=switchcb_Analyze_Variables24(k)}
def switchcbAnalyze_Variables24(e)
@@switchhashAnalyze_Variables24[e.class]
end
def clas_Analyze_Variables2cb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Analyze_Variables2cb_1(bind)
(false) || FAIL
end
def flat_Analyze_Variables2cb_1(bind)
_append(bind[0],bind[3])
end
def itrans_Analyze_Variables2cb_1(bind)
@src.rules
end
def itrans_Analyze_Variables2cb_2(bind)
_append(bind[4],bind[7])
end
def itrans_Analyze_Variables2cb_3(bind)
@src.rules=bind[8]
end
def itrans_Analyze_Variables2cb_4(bind)
@src
end
def itrans_Analyze_Variables2cb_5(bind)
_append(bind[0],bind[10])
end
def root_Analyze_Variables2cb_1(bind)
bind[0]=[bind[0]]
end
def root_Analyze_Variables2cb_2(bind)
@bnding=@src.bnding
end
def root_Analyze_Variables2cb_3(bind)
@variables=Hash.new{|k,v| k[v]=v} ;(@src.locals+@src.args).each{|w| @variables[w[0]]=w}
end
def root_Analyze_Variables2cb_4(bind)
@locals=@src.locals
end
def root_Analyze_Variables2cb_5(bind)
@src.locals=nil
end
def traverse_Analyze_Variables2cb_1(bind)
@changed
end
def traverse_Analyze_Variables2cb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Analyze_Variables2cb_3(bind)
bind[4]=[bind[4]]
end
def traverse_Analyze_Variables2cb_4(bind)
@changed=false
end
def traverse_Analyze_Variables2cb_5(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Analyze_Variables2cb_6(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
end
def traverse_item_Analyze_Variables2cb_1(bind)
@changed=true
end
def traverse_item_Analyze_Variables2cb_2(bind)
bind[5]<<bind[6]
end
def visit_Analyze_Variables2cb_1(bind)
@src.ary
end
def visit_Analyze_Variables2cb_10(bind)
_append(bind[25],bind[26])
end
def visit_Analyze_Variables2cb_11(bind)
Seq[*bind[20]]
end
def visit_Analyze_Variables2cb_2(bind)
bind[2]=[bind[2]]
end
def visit_Analyze_Variables2cb_3(bind)
@src.ary.map{|aa| @variables[aa] }
end
def visit_Analyze_Variables2cb_4(bind)
bind[11]=[bind[11]]
end
def visit_Analyze_Variables2cb_5(bind)
connectstring(bind[13].flatten)
end
def visit_Analyze_Variables2cb_6(bind)
(bind[14].size==1&&(bind[14][0].is_a?(Local)||bind[14][0].is_a?(Global)||bind[14][0].is_a?(Key))) ? bind[14][0] : Args[*bind[14]]
end
def visit_Analyze_Variables2cb_7(bind)
_append(bind[18],bind[19])
end
def visit_Analyze_Variables2cb_8(bind)
Or[*bind[20]]
end
def visit_Analyze_Variables2cb_9(bind)
vars=@locals.select{|aa| @src.vars.include? aa[0].to_sym}.uniq ;Result[{:name=>@src.name,:vars=>vars}]
end

end




def detect_variables2_compiled_by
'4e90157197522699e9dd323ed74e188e'
end
def detect_variables2_source_hash
'56196ab0e78188e5a2d6bc8b4c79e49b'
end
def testversiondetect_variables2(r)
 raise "invalid version" if r!=detect_variables2_version
end
def detect_variables2_version
'2f02b379b6029a86265f4a9a7cd7537e'
end
  require 'compiled/detect_variables2_c'
