def firstchar(s)
	s=(s[13]==?\\ ) ? s[13,2] : s[13,1]
	return '"' if s=='"'
	eval('"'+s+'"')[0]
end
def first(s)
	if s.is_a?(Seq)
		return first(s[0])
	end
	if s.is_a? Bind
		return first(s.expr)
	end
	if s.is_a? Or
		a=[]
		s.ary.each{|e| 
		return nil if !first(e)
			a+=first(e)}
		return a.uniq
	end
	if s.is_a?(Apply) && s[0]=="seq"
		[firstchar(s[1][0])]
	end
end

class Detect_Switch < Traverser
def itrans_Detect_Switchcb_1(bind)
Grammar
end
def itrans_Detect_Switchcb_2(bind)
@src.rules
end
def itrans_Detect_Switchcb_3(bind)
bind[:autovar_4]=[bind[:autovar_4]]
end
def itrans_Detect_Switchcb_4(bind)
Rule
end
def itrans_Detect_Switchcb_5(bind)
_append(bind[:autovar_1],bind[:autovar_7])
end
def itrans_Detect_Switchcb_6(bind)
@src.rules=bind[:rules_1]
end
def itrans_Detect_Switchcb_7(bind)
@src.self
end
def itrans_Detect_Switchcb_8(bind)
_append(bind[:autovar_2],bind[:autovar_8])
end
def visit_Detect_Switchcb_1(bind)
Or
end
def visit_Detect_Switchcb_2(bind)
Hash.new{|h,k|h[k]=[]} 
end
def visit_Detect_Switchcb_3(bind)
puts @src.self.inspect
end
def visit_Detect_Switchcb_4(bind)
(first(bind[:e_1])) || FAIL
end
def visit_Detect_Switchcb_5(bind)
puts bind[:e_1].inspect
end
def visit_Detect_Switchcb_6(bind)
first(bind[:e_1]).each{|a| bind[:ary2_1][a]<<bind[:e_1]}
end
def visit_Detect_Switchcb_7(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def visit_Detect_Switchcb_8(bind)
Switch[{:ary=>bind[:ary2_1].to_a.map{|h,k| [h,Or[{:ary=>k}]]}}]
end

end


 require 'compiled/detect_switch_c'
