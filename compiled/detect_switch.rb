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
			s.ary.each{|k,v| a<<k}
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
Hash.new{|h,k|h[k]=[]} 
end
def visit_Detect_Switchcb_3(bind)
(first(bind[:e_1])) || FAIL
end
def visit_Detect_Switchcb_4(bind)
first(bind[:e_1]).each{|a| bind[:ary2_1][a]<<bind[:e_1]}
end
def visit_Detect_Switchcb_5(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def visit_Detect_Switchcb_6(bind)
Switch[{:act=>"RSTRING(ame_getsrc(self))->ptr[ame_getpos(self)]",:ary=>bind[:ary2_1].to_a.map{|h,k| [h,Or[{:ary=>k}]]}}];
end

end

class Detect_ClasSwitch < Traverser
	def initclas
		@clses={}
	end
	def firstclas(s)
		if s.is_a?(Seq)
      return firstclas(s[0])
    end
	if s.is_a? Bind
			return firstclas(s.expr)
		end
		if s.is_a?(Apply) && s[0]=="clas"
			e=s[1][0]
			return [@clses[e]] if @clses[e]
			@clses[e]=@clses.size
			return [@clses[e]]
		end
	end
	def classswitch()
		@no=(@no||0)+1
		rb="def switchcb#{@no}(e)\n"
			@clses.each{|k,v| rb+="return #{v} if e.is_a? #{k}\n"}
		rb+="return #{@clses.size}\nend"
		[rb, "CALL(switchcb#{@no})"]
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
Hash.new{|h,k|h[k]=[]} 
end
def visit_Detect_ClasSwitchcb_3(bind)
initclas
end
def visit_Detect_ClasSwitchcb_4(bind)
(firstclas(bind[:e_1])) || FAIL
end
def visit_Detect_ClasSwitchcb_5(bind)
firstclas(bind[:e_1]).each{|a| bind[:ary2_1][a]<<bind[:e_1]}
end
def visit_Detect_ClasSwitchcb_6(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def visit_Detect_ClasSwitchcb_7(bind)
c=classswitch; Switch[{:defs=>c[0], :act=>c[1], :ary=>bind[:ary2_1].to_a.map{|h,k| [h,Or[{:ary=>k}]]}}];
end

end



 require 'compiled/detect_switch_c'
