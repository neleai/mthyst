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

end
def flat_Analyze_Variables2cb_5(bind)
Strin
end
def flat_Analyze_Variables2cb_6(bind)

end
def flat_Analyze_Variables2cb_7(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def itrans_Analyze_Variables2cb_1(bind)
[]
end
def itrans_Analyze_Variables2cb_10(bind)
Rule
end
def itrans_Analyze_Variables2cb_11(bind)

end
def itrans_Analyze_Variables2cb_12(bind)
_append(bind[:autovar_1],bind[:autovar_7])
end
def itrans_Analyze_Variables2cb_13(bind)
@src.rules=bind[:rules_1]
end
def itrans_Analyze_Variables2cb_14(bind)
@src.self
end
def itrans_Analyze_Variables2cb_15(bind)
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

end
def itrans_Analyze_Variables2cb_6(bind)
@src.rules
end
def itrans_Analyze_Variables2cb_7(bind)
bind[:autovar_4]=[bind[:autovar_4]]
end
def itrans_Analyze_Variables2cb_8(bind)

end
def itrans_Analyze_Variables2cb_9(bind)
[]
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

end
def root_Analyze_Variables2cb_5(bind)
@bnding=@src.bnding
end
def root_Analyze_Variables2cb_6(bind)
@variables=Hash.new{|k,v| k[v]=v} ;(@src.locals+@src.args).each{|w| @variables[w[0]]=w}
end
def root_Analyze_Variables2cb_7(bind)
@locals=@src.locals
end
def root_Analyze_Variables2cb_8(bind)
@src.body=Seq[{:ary=>[@src.body] }];@src.locals=nil
end
def root_Analyze_Variables2cb_9(bind)
@src.self
end
def visit_Analyze_Variables2cb_1(bind)
Args
end
def visit_Analyze_Variables2cb_10(bind)
@src.ary
end
def visit_Analyze_Variables2cb_11(bind)
bind[:autovar_5]=[bind[:autovar_5]]
end
def visit_Analyze_Variables2cb_12(bind)

end
def visit_Analyze_Variables2cb_13(bind)
Local
end
def visit_Analyze_Variables2cb_14(bind)
Result
end
def visit_Analyze_Variables2cb_15(bind)

end
def visit_Analyze_Variables2cb_16(bind)
@src.vars=@locals.select{|aa| @src.vars.include? aa[0].to_sym}.uniq
end
def visit_Analyze_Variables2cb_17(bind)
@src.self
end
def visit_Analyze_Variables2cb_2(bind)

end
def visit_Analyze_Variables2cb_3(bind)
@src.ary.map{|aa| @variables[aa] }
end
def visit_Analyze_Variables2cb_4(bind)
bind[:autovar_2]=[bind[:autovar_2]]
end
def visit_Analyze_Variables2cb_5(bind)

end
def visit_Analyze_Variables2cb_6(bind)
@src.ary=connectstring(bind[:a_1].flatten)
end
def visit_Analyze_Variables2cb_7(bind)
(@src.ary.size==1&&(@src.ary[0].is_a?(Local)||@src.ary[0].is_a?(Global)||@src.ary[0].is_a?(Key))) ? @src.ary[0] : @src.self
end
def visit_Analyze_Variables2cb_8(bind)
Act
end
def visit_Analyze_Variables2cb_9(bind)

end

end


 require 'c/detect_variables2_c'
