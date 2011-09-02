class Analyze_Variables2 < Traverser_Clone2
def self.switchcb_Analyze_Variables21(e)
return 0 if e<=Args
return 1 if e<=Act
return 2 if e<=Result
return 3 if e<=Or
return 4 if e<=Seq
return 5 if e<=Object
return 6
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
@changed
end
def traverse_Analyze_Variables2cb_2(bind)
@src
end
def traverse_Analyze_Variables2cb_3(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Analyze_Variables2cb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Analyze_Variables2cb_5(bind)
@changed=false
end
def traverse_Analyze_Variables2cb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Analyze_Variables2cb_7(bind)
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
def visit_Analyze_Variables2cb_10(bind)
Or[*bind[21]]
end
def visit_Analyze_Variables2cb_11(bind)
_append(bind[24],bind[25])
end
def visit_Analyze_Variables2cb_12(bind)
Seq[*bind[21]]
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
vars=@locals.select{|aa| @src.vars.include? aa[0].to_sym}.uniq ;Result[{:name=>@src.name,:vars=>vars}]
end
def visit_Analyze_Variables2cb_9(bind)
_append(bind[19],bind[20])
end

end


class Remap_Acts < Traverser_Clone
def self.switchcb_Remap_Acts6(e)
return 0 if e<=Act
return 1 if e<=Or
return 2 if e<=Seq
return 3 if e<=Pass
return 4 if e<=Bind
return 5 if e<=Many
return 6 if e<=Apply
return 7 if e<=Lookahead
return 8 if e<=Object
return 9
end
@@switchhashRemap_Acts6=Hash.new{|h,k| h[k]=switchcb_Remap_Acts6(k)}
def switchcbRemap_Acts6(e)
@@switchhashRemap_Acts6[e.class]
end
def self.switchcb_Remap_Acts7(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashRemap_Acts7=Hash.new{|h,k| h[k]=switchcb_Remap_Acts7(k)}
def switchcbRemap_Acts7(e)
@@switchhashRemap_Acts7[e.class]
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
bind[0].instance_variable_set(bind[4],bind[5]) unless bind[5].equal?(bind[0].instance_variable_get(bind[4]))
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
_append(bind[1],bind[2])
end
def visit_Remap_Actscb_10(bind)
@src.name
end
def visit_Remap_Actscb_11(bind)
bind[20]=[bind[20]]
end
def visit_Remap_Actscb_12(bind)
@src.expr
end
def visit_Remap_Actscb_13(bind)
bind[22]=[bind[22]]
end
def visit_Remap_Actscb_14(bind)
Bind.create({:name=>bind[21],:expr=>bind[23]}).normalize
end
def visit_Remap_Actscb_15(bind)
_append(bind[26],bind[27])
end
def visit_Remap_Actscb_16(bind)
Many.create({:ary=>bind[9]}).normalize
end
def visit_Remap_Actscb_17(bind)
_append(bind[30],bind[31])
end
def visit_Remap_Actscb_18(bind)
Apply[*bind[9]]
end
def visit_Remap_Actscb_19(bind)
_append(bind[34],bind[35])
end
def visit_Remap_Actscb_2(bind)
@src.pure ? PureAct[bind[3]] : Act[bind[3],@src.pred]
end
def visit_Remap_Actscb_20(bind)
Lookahead[*bind[9]]
end
def visit_Remap_Actscb_21(bind)
CAct
end
def visit_Remap_Actscb_22(bind)
Bnding
end
def visit_Remap_Actscb_23(bind)
Global
end
def visit_Remap_Actscb_24(bind)
Key
end
def visit_Remap_Actscb_25(bind)
Result
end
def visit_Remap_Actscb_26(bind)
@src
end
def visit_Remap_Actscb_3(bind)
_append(bind[7],bind[8])
end
def visit_Remap_Actscb_4(bind)
Or[*bind[9]]
end
def visit_Remap_Actscb_5(bind)
_append(bind[12],bind[13])
end
def visit_Remap_Actscb_6(bind)
Seq[*bind[9]]
end
def visit_Remap_Actscb_7(bind)
@src.to
end
def visit_Remap_Actscb_8(bind)
bind[16]=[bind[16]]
end
def visit_Remap_Actscb_9(bind)
Pass.create({:to=>bind[17],:var=>@src.var}).normalize
end

end


def detect_variables2_compiled_by
'fb241471208edb8483ff6f171d7ca214'
end
def detect_variables2_source_hash
'55d742ed1e2bfa7d06d5c131985fdf44'
end
def testversiondetect_variables2(r)
 raise "invalid version" if r!=detect_variables2_version
end
def detect_variables2_version
'413ec2f609396dafaeac81c2169f2d50'
end
  require 'compiled/detect_variables2_c'
