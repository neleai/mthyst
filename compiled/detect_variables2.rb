class Analyze_Variables2 < Traverser

def clas_Analyze_Variables2cb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def flat_Analyze_Variables2cb_1(bind)
Args
end
def flat_Analyze_Variables2cb_2(bind)
Strin
end
def flat_Analyze_Variables2cb_3(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def itrans_Analyze_Variables2cb_1(bind)
Grammar
end
def itrans_Analyze_Variables2cb_2(bind)
@src.rules
end
def itrans_Analyze_Variables2cb_3(bind)
bind[:autovar_3]=[bind[:autovar_3]]
end
def itrans_Analyze_Variables2cb_4(bind)
Rule
end
def itrans_Analyze_Variables2cb_5(bind)
_append(bind[:autovar_5],bind[:autovar_7])
end
def itrans_Analyze_Variables2cb_6(bind)
@src.rules=bind[:rules_1]
end
def itrans_Analyze_Variables2cb_7(bind)
@src.self
end
def itrans_Analyze_Variables2cb_8(bind)
_append(bind[:autovar_1],bind[:autovar_8])
end
def root_Analyze_Variables2cb_1(bind)
@src.self
end
def root_Analyze_Variables2cb_2(bind)
bind[:autovar_1]=[bind[:autovar_1]]
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
@src.body=Seq[{:ary=>[@src.body] }];@src.locals=nil
end
def root_Analyze_Variables2cb_8(bind)
@src.self
end
def traverse_Analyze_Variables2cb_1(bind)
@src.self
end
def traverse_Analyze_Variables2cb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Analyze_Variables2cb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Analyze_Variables2cb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Analyze_Variables2cb_5(bind)
@src.self
end
def traverse_item_Analyze_Variables2cb_1(bind)
@changed=true
end
def traverse_item_Analyze_Variables2cb_2(bind)
Array
end
def traverse_item_Analyze_Variables2cb_3(bind)
_append(bind[:autovar_2],bind[:autovar_3])
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
@src.self
end
def visit_Analyze_Variables2cb_2(bind)
@src.ary.map{|aa| @variables[aa] }
end
def visit_Analyze_Variables2cb_3(bind)
bind[:autovar_2]=[bind[:autovar_2]]
end
def visit_Analyze_Variables2cb_4(bind)
@src.ary=connectstring(bind[:a_1].flatten)
end
def visit_Analyze_Variables2cb_5(bind)
(@src.ary.size==1&&(@src.ary[0].is_a?(Local)||@src.ary[0].is_a?(Global)||@src.ary[0].is_a?(Key))) ? @src.ary[0] : @src.self
end
def visit_Analyze_Variables2cb_6(bind)
Act
end
def visit_Analyze_Variables2cb_7(bind)
@src.ary
end
def visit_Analyze_Variables2cb_8(bind)
bind[:autovar_5]=[bind[:autovar_5]]
end
def visit_Analyze_Variables2cb_9(bind)
Local
end

end


class Remap_Acts < Traverser

def clas_Remap_Actscb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def traverse_Remap_Actscb_1(bind)
@src.self
end
def traverse_Remap_Actscb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Remap_Actscb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Remap_Actscb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Remap_Actscb_5(bind)
@src.self
end
def traverse_item_Remap_Actscb_1(bind)
@changed=true
end
def traverse_item_Remap_Actscb_2(bind)
Array
end
def traverse_item_Remap_Actscb_3(bind)
_append(bind[:autovar_2],bind[:autovar_3])
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
 raise "invalid version" if r!='bc7e8fd13378720990e832860963edf4'
end
  require 'compiled/detect_variables2_c'
