class Analyze_Variables2 < Traverser_Clone
def self.switchcb_Analyze_Variables21(e)
return 0 if e<=Args
return 1 if e<=Act
return 2 if e<=Result
return 3
end
@@switchhashAnalyze_Variables21=Hash.new{|h,k| h[k]=switchcb_Analyze_Variables21(k)}
def switchcbAnalyze_Variables21(e)
@@switchhashAnalyze_Variables21[e.class]
end
def self.switchcb_Analyze_Variables22(e)
return 0 if e<=Grammar
return 1 if e<=Object
return 2
end
@@switchhashAnalyze_Variables22=Hash.new{|h,k| h[k]=switchcb_Analyze_Variables22(k)}
def switchcbAnalyze_Variables22(e)
@@switchhashAnalyze_Variables22[e.class]
end
def self.switchcb_Analyze_Variables23(e)
return 0 if e<=Args
return 1 if e<=Strin
return 2 if e<=Object
return 3
end
@@switchhashAnalyze_Variables23=Hash.new{|h,k| h[k]=switchcb_Analyze_Variables23(k)}
def switchcbAnalyze_Variables23(e)
@@switchhashAnalyze_Variables23[e.class]
end
def self.switchcb_Analyze_Variables24(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
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
bind[2]=[bind[2]]
end
def itrans_Analyze_Variables2cb_3(bind)
Rule
end
def itrans_Analyze_Variables2cb_4(bind)
_append(bind[4],bind[7])
end
def itrans_Analyze_Variables2cb_5(bind)
@src.rules=bind[8]
end
def itrans_Analyze_Variables2cb_6(bind)
@src
end
def itrans_Analyze_Variables2cb_7(bind)
_append(bind[0],bind[10])
end
def root_Analyze_Variables2cb_1(bind)
@src
end
def root_Analyze_Variables2cb_2(bind)
bind[0]=[bind[0]]
end
def root_Analyze_Variables2cb_3(bind)
Rule
end
def root_Analyze_Variables2cb_4(bind)
@bnding=@src.bnding
end
def root_Analyze_Variables2cb_5(bind)
@variables=Hash.new{|k,v| k[v]=v} ;(@src.locals+@src.args).each{|w| @variables[w[0]]=w}
end
def root_Analyze_Variables2cb_6(bind)
@locals=@src.locals
end
def root_Analyze_Variables2cb_7(bind)
@src.locals=nil
end
def root_Analyze_Variables2cb_8(bind)
@src
end
def traverse_Analyze_Variables2cb_1(bind)
@src.clone
end
def traverse_Analyze_Variables2cb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Analyze_Variables2cb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Analyze_Variables2cb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Analyze_Variables2cb_5(bind)
bind[0].normalize
end
def traverse_item_Analyze_Variables2cb_1(bind)
@changed=true
end
def traverse_item_Analyze_Variables2cb_2(bind)
bind[3]<<bind[4]
end
def traverse_item_Analyze_Variables2cb_3(bind)
@changed=true
end
def traverse_item_Analyze_Variables2cb_4(bind)
@changed=true
end
def visit_Analyze_Variables2cb_1(bind)
@src.ary.map{|aa| @variables[aa] }
end
def visit_Analyze_Variables2cb_2(bind)
bind[2]=[bind[2]]
end
def visit_Analyze_Variables2cb_3(bind)
@src.ary=connectstring(bind[4].flatten)
end
def visit_Analyze_Variables2cb_4(bind)
(@src.ary.size==1&&(@src.ary[0].is_a?(Local)||@src.ary[0].is_a?(Global)||@src.ary[0].is_a?(Key))) ? @src.ary[0] : @src
end
def visit_Analyze_Variables2cb_5(bind)
@src.ary
end
def visit_Analyze_Variables2cb_6(bind)
bind[10]=[bind[10]]
end
def visit_Analyze_Variables2cb_7(bind)
Local
end
def visit_Analyze_Variables2cb_8(bind)
@src.vars=@locals.select{|aa| @src.vars.include? aa[0].to_sym}.uniq
end
def visit_Analyze_Variables2cb_9(bind)
@src
end

end


class Remap_Acts < Traverser_Clone
def self.switchcb_Remap_Acts5(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashRemap_Acts5=Hash.new{|h,k| h[k]=switchcb_Remap_Acts5(k)}
def switchcbRemap_Acts5(e)
@@switchhashRemap_Acts5[e.class]
end
def clas_Remap_Actscb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Remap_Actscb_1(bind)
(false) || FAIL
end
def traverse_Remap_Actscb_1(bind)
@src.clone
end
def traverse_Remap_Actscb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Remap_Actscb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Remap_Actscb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Remap_Actscb_5(bind)
bind[0].normalize
end
def traverse_item_Remap_Actscb_1(bind)
@changed=true
end
def traverse_item_Remap_Actscb_2(bind)
bind[3]<<bind[4]
end
def traverse_item_Remap_Actscb_3(bind)
@changed=true
end
def traverse_item_Remap_Actscb_4(bind)
@changed=true
end
def visit_Remap_Actscb_1(bind)
Act
end
def visit_Remap_Actscb_2(bind)
@src.pure ? PureAct[@src.ary] : Act[@src.ary,@src.pred]
end

end


def detect_variables2_compiled_by
'42'
end
def detect_variables2_source_hash
'e9ef25a44d0856bc32d67573dfd56b79'
end
def testversiondetect_variables2(r)
 raise "invalid version" if r!='fbe017776a99232b07722d3b316172e5'
end
  require 'compiled/detect_variables2_c'
