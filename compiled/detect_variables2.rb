class Analyze_Variables2 < Traverser
def self.switchcb_1(e)
return 0 if e<=Args
return 1 if e<=Act
return 2 if e<=Result
return 3
end
@@switchhash1=Hash.new{|h,k| h[k]=switchcb_1(k)}
def switchcb1(e)
@@switchhash1[e.class]
end
def self.switchcb_2(e)
return 0 if e<=Grammar
return 1 if e<=Object
return 2
end
@@switchhash2=Hash.new{|h,k| h[k]=switchcb_2(k)}
def switchcb2(e)
@@switchhash2[e.class]
end
def self.switchcb_3(e)
return 0 if e<=Args
return 1 if e<=Strin
return 2 if e<=Object
return 3
end
@@switchhash3=Hash.new{|h,k| h[k]=switchcb_3(k)}
def switchcb3(e)
@@switchhash3[e.class]
end
def clas_Analyze_Variables2cb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def empty_Analyze_Variables2cb_1(bind)

end
def fails_Analyze_Variables2cb_1(bind)
(false) || FAIL
end
def flat_Analyze_Variables2cb_1(bind)
Args
end
def flat_Analyze_Variables2cb_2(bind)
Strin
end
def flat_Analyze_Variables2cb_3(bind)
_append(bind[0],bind[3])
end
def itrans_Analyze_Variables2cb_1(bind)
Grammar
end
def itrans_Analyze_Variables2cb_2(bind)
@src.rules
end
def itrans_Analyze_Variables2cb_3(bind)
bind[2]=[bind[2]]
end
def itrans_Analyze_Variables2cb_4(bind)
Rule
end
def itrans_Analyze_Variables2cb_5(bind)
_append(bind[4],bind[7])
end
def itrans_Analyze_Variables2cb_6(bind)
@src.rules=bind[8]
end
def itrans_Analyze_Variables2cb_7(bind)
@src
end
def itrans_Analyze_Variables2cb_8(bind)
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
@src
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
@src
end
def traverse_item_Analyze_Variables2cb_1(bind)
@changed=true
end
def traverse_item_Analyze_Variables2cb_2(bind)
Array
end
def traverse_item_Analyze_Variables2cb_3(bind)
bind[3]<<bind[4]
end
def traverse_item_Analyze_Variables2cb_4(bind)
AmethystAST
end
def visit_Analyze_Variables2cb_1(bind)
Args
end
def visit_Analyze_Variables2cb_10(bind)
Result
end
def visit_Analyze_Variables2cb_11(bind)
@src.vars=@locals.select{|aa| @src.vars.include? aa[0].to_sym}.uniq
end
def visit_Analyze_Variables2cb_12(bind)
@src
end
def visit_Analyze_Variables2cb_2(bind)
@src.ary.map{|aa| @variables[aa] }
end
def visit_Analyze_Variables2cb_3(bind)
bind[1]=[bind[1]]
end
def visit_Analyze_Variables2cb_4(bind)
@src.ary=connectstring(bind[3].flatten)
end
def visit_Analyze_Variables2cb_5(bind)
(@src.ary.size==1&&(@src.ary[0].is_a?(Local)||@src.ary[0].is_a?(Global)||@src.ary[0].is_a?(Key))) ? @src.ary[0] : @src
end
def visit_Analyze_Variables2cb_6(bind)
Act
end
def visit_Analyze_Variables2cb_7(bind)
@src.ary
end
def visit_Analyze_Variables2cb_8(bind)
bind[7]=[bind[7]]
end
def visit_Analyze_Variables2cb_9(bind)
Local
end

end


class Remap_Acts < Traverser

def clas_Remap_Actscb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def empty_Remap_Actscb_1(bind)

end
def fails_Remap_Actscb_1(bind)
(false) || FAIL
end
def traverse_Remap_Actscb_1(bind)
@src
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
@src
end
def traverse_item_Remap_Actscb_1(bind)
@changed=true
end
def traverse_item_Remap_Actscb_2(bind)
Array
end
def traverse_item_Remap_Actscb_3(bind)
bind[3]<<bind[4]
end
def traverse_item_Remap_Actscb_4(bind)
AmethystAST
end
def visit_Remap_Actscb_1(bind)
Act
end
def visit_Remap_Actscb_2(bind)
@src.pure ? PureAct[@src.ary] : Act[@src.ary,@src.pred]
end

end


def testversion(r)
 raise "invalid version" if r!='d2259c4daba2b34382b304259e50e463'
end
  require 'compiled/detect_variables2_c'
