class Detect_Switch < Traverser
	def firstchar(s)
		s=(s[13]==?\\ ) ? s[13,2] : s[13,1]
		eval('"'+s+'"')[0]
	end
	def first(s)
		if s.is_a?(Seq)
			return first(s[0])
		end
		if s.is_a? Bind
			return first(s.expr)
		end
		if s.is_a? Switch
			a=[]
			s.ary.each{|k,v| a+=first(v)}
			return a.uniq
		end
		if s.is_a? Or
			a=[]
			s.ary.each{|e| 
			return nil if !first(e)
				a+=first(e)}
			return a.uniq
		end
		if s.is_a?(Apply) && s[0]=="seq"
			return nil if s[1][0].size==15
			return [firstchar(s[1][0])]
		end
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
[]
end
def visit_Detect_Switchcb_3(bind)
[]
end
def visit_Detect_Switchcb_4(bind)
(first(bind[:e_1])) || FAIL
end
def visit_Detect_Switchcb_5(bind)
bind[:ary2_1]+=first(bind[:e_1])
end
def visit_Detect_Switchcb_6(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def visit_Detect_Switchcb_7(bind)
bind[:ary2_1].sort.uniq.each{|bind[:e_1]| 
			bind[:ary3_1]<<[bind[:e_1],Or[{:ary=>@src.ary.select{|p| first(p).include?(bind[:e_1])}}]]
		}
end
def visit_Detect_Switchcb_8(bind)
Switch[{:act=>"*ame_curstr(self)",:ary=>bind[:ary3_1]}]
end

end

class Detect_ClasSwitch < Traverser
	def first(s)
		if s.is_a?(Seq)
      return first(s[0])
    end
		if s.is_a? Bind
			return first(s.expr)
		end
		if s.is_a? Switch
			a=[]
			s.ary.each{|k,v| a+=first(v)}
			return a.uniq
		end
		if s.is_a? Or
			a=[]
			s.ary.each{|e| 
			return nil if !first(e)
				a+=first(e)}
			return a.uniq
		end
		if s.is_a?(Apply) && s[0]=="clas"
			return [s[1][0]]
		end
	end
	def includes(p,e)
		p.each{|f| return true if eval(e) >= eval(f) || eval(e) <= eval(f)}
		return false
	end
	def classswitch(ary)
		@no=(@no||0)+1
		rb="def switchcb#{@no}(e)\n"
		ary.each_with_index{|c,i| rb<< "return #{i} if e.is_a?(#{c})\n"}
		rb+="return #{ary.size}\nend"
		[rb, "FIX2INT(CALL(switchcb#{@no},1,ame_curobj(self)))"]
	end
end

class Detect_ClasSwitch < Traverser

def itrans_Detect_ClasSwitchcb_1(bind)
Grammar
end
def itrans_Detect_ClasSwitchcb_2(bind)
@src.rules
end
def itrans_Detect_ClasSwitchcb_3(bind)
bind[:autovar_4]=[bind[:autovar_4]]
end
def itrans_Detect_ClasSwitchcb_4(bind)
Rule
end
def itrans_Detect_ClasSwitchcb_5(bind)
_append(bind[:autovar_1],bind[:autovar_7])
end
def itrans_Detect_ClasSwitchcb_6(bind)
@src.rules=bind[:rules_1]
end
def itrans_Detect_ClasSwitchcb_7(bind)
@src.self
end
def itrans_Detect_ClasSwitchcb_8(bind)
_append(bind[:autovar_2],bind[:autovar_8])
end
def visit_Detect_ClasSwitchcb_1(bind)
Or
end
def visit_Detect_ClasSwitchcb_2(bind)
[]
end
def visit_Detect_ClasSwitchcb_3(bind)
[]
end
def visit_Detect_ClasSwitchcb_4(bind)
(first(bind[:e_1])) || FAIL
end
def visit_Detect_ClasSwitchcb_5(bind)
bind[:ary2_1]+=first(bind[:e_1])
end
def visit_Detect_ClasSwitchcb_6(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def visit_Detect_ClasSwitchcb_7(bind)
bind[:ary2_1].sort.uniq.each_with_index{|bind[:e_1],i|
      	bind[:ary3_1]<<[i,Or[{:ary=>@src.ary.select{|p| includes(first(p),bind[:e_1])}}]]
		}
end
def visit_Detect_ClasSwitchcb_8(bind)
c=classswitch(bind[:ary2_1].sort.uniq);Switch[{:act=>c[1],:defs=>c[0],:ary=>bind[:ary3_1]}]
end

end



 require 'compiled/detect_switch_c'
