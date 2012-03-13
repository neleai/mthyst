class DetectCalls < Visitor
def self.root(*args);self.new.parse(:root,*args);end
def self.traverse(*args);self.new.parse(:traverse,*args);end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end
def self.visit(*args);self.new.parse(:visit,*args);end
def __at_calls_7f81(bind)
@calls
end
def __at_calls_eq__le__39e9(bind)
@calls={}
end
def __at_calls_lb_b_e709(bind)
@calls[bind[1]]=true 
end
def __lp_src_dot_ins_a413(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end

end
