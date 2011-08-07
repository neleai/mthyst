class Analyze_Variables2 < Traverser
def flat_Analyze_Variables2cb_1(bind)
[]
end
def flat_Analyze_Variables2cb_2(bind)
[]
end
def flat_Analyze_Variables2cb_3(bind)
Args
end
def flat_Analyze_Variables2cb_4(bind)
Strin
end
def flat_Analyze_Variables2cb_5(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def itrans_Analyze_Variables2cb_1(bind)
[]
end
def itrans_Analyze_Variables2cb_10(bind)
@src.rules=bind[:rules_1]
end
def itrans_Analyze_Variables2cb_11(bind)
@src.self
end
def itrans_Analyze_Variables2cb_12(bind)
_append(bind[:autovar_2],bind[:autovar_8])
end
def itrans_Analyze_Variables2cb_2(bind)
[]
end
def itrans_Analyze_Variables2cb_3(bind)
[]
end
def itrans_Analyze_Variables2cb_4(bind)
Grammar
end
def itrans_Analyze_Variables2cb_5(bind)
@src.rules
end
def itrans_Analyze_Variables2cb_6(bind)
bind[:autovar_4]=[bind[:autovar_4]]
end
def itrans_Analyze_Variables2cb_7(bind)
[]
end
def itrans_Analyze_Variables2cb_8(bind)
Rule
end
def itrans_Analyze_Variables2cb_9(bind)
_append(bind[:autovar_1],bind[:autovar_7])
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
@variables=Hash.new{|k,v| k[v]=v} ;(@src.locals+@src.args).each{|w| @variables[w[0]]=w}
end
def root_Analyze_Variables2cb_5(bind)
@locals=@src.locals
end
def root_Analyze_Variables2cb_6(bind)
@src.body=Seq[{:ary=>[@src.body] }];@src.locals=nil
end
def root_Analyze_Variables2cb_7(bind)
@src.self
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


 require 'c/detect_variables2_c'
