class Renamer2 < Traverser
def root_Renamer2cb_1(bind)
Rule
end
def root_Renamer2cb_2(bind)
@newvars={}
end
def visit_Renamer2cb_1(bind)
Local
end
def visit_Renamer2cb_2(bind)
@src.self
end
def visit_Renamer2cb_3(bind)
@newvars[bind[:this_1]] ? @newvars[bind[:this_1]] : ($av+=1; @newvars[bind[:this_1]]=_Local(bind[:name_1],$av) ;@newvars[bind[:this_1]] )
end

end


class DetectCalls < Traverser
def root_DetectCallscb_1(bind)
Rule
end
def root_DetectCallscb_2(bind)
@calls={}
end
def root_DetectCallscb_3(bind)
@calls
end
def visit_DetectCallscb_1(bind)
Apply
end
def visit_DetectCallscb_2(bind)
@calls[bind[:name_1]]=true 
end
def visit_DetectCallscb_3(bind)
@src.self
end

end


class Inliner2 < Traverser
def root_Inliner2cb_1(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def root_Inliner2cb_2(bind)
Rule
end
def root_Inliner2cb_3(bind)
@src.name
end
def root_Inliner2cb_4(bind)
@src.args
end
def root_Inliner2cb_5(bind)
@src.locals
end
def root_Inliner2cb_6(bind)
@src.body
end
def root_Inliner2cb_7(bind)
@name=bind[:name_1];@args=bind[:args_1];@body=bind[:body_1] 
end
def root_Inliner2cb_8(bind)
bind[:autovar_3]=[bind[:autovar_3]]
end
def root_Inliner2cb_9(bind)
Rule
end
def visit_Inliner2cb_1(bind)
[]
end
def visit_Inliner2cb_2(bind)
Apply
end
def visit_Inliner2cb_3(bind)
(bind[:name_1]==@name) || FAIL
end
def visit_Inliner2cb_4(bind)
[]
end
def visit_Inliner2cb_5(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def visit_Inliner2cb_6(bind)
body=@body;puts bind[:args_1].inspect; bind[:args_1].each_index{|i| body=Seq[Set[{:name=>@args[i],:expr=>Act[bind[:args_1][i]]}],body] } ; body
end

end


 require 'c/inliner2_c'
