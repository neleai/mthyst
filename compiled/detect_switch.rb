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
bind[3]=[bind[3]]
end
def itrans_Detect_Switchcb_4(bind)
Rule
end
def itrans_Detect_Switchcb_5(bind)
_append(bind[0],bind[6])
end
def itrans_Detect_Switchcb_6(bind)
@src.rules=bind[7]
end
def itrans_Detect_Switchcb_7(bind)
@src.self
end
def itrans_Detect_Switchcb_8(bind)
_append(bind[1],bind[8])
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
(first(bind[4])) || FAIL
end
def visit_Detect_Switchcb_5(bind)
bind[2]+=first(bind[4])
end
def visit_Detect_Switchcb_6(bind)
_append(bind[0],bind[5])
end
def visit_Detect_Switchcb_7(bind)
bind[2].sort.uniq.each{|bind[4]| 
			bind[3]<<[bind[4],Or[{:ary=>@src.ary.select{|p| first(p).include?(bind[4])}}]]
		}
end
def visit_Detect_Switchcb_8(bind)
Switch[{:act=>"*ame_curstr(self)",:ary=>bind[3]}]
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
		if s.is_a?(Apply) && s[0]=="anything"
			return ["Object"]
		end
	end
	def includes(ary,i,p)
		i.times{|ii|
			s=true
			p.each{|f| s=false unless eval(f) <= eval(ary[ii])}
			return false if s
		}
		p.each{|f| return true if eval(ary[i]) >= eval(f) || eval(ary[i]) <= eval(f)}
		return false
	end
	def classswitch(ary)
		@no=(@no||0)+1
		rb="def self.switchcb_#{@no}(e)\n"
		ary.each_with_index{|c,i| rb<< "return #{i} if e<=#{c}\n"}
		rb+="return #{ary.size}\nend\n"
		rb+="@@switchhash#{@no}=Hash.new{|h,k| h[k]=switchcb_#{@no}(k)}\n"
		rb+="def switchcb#{@no}(e)\n"
		rb+="@@switchhash#{@no}[e.class]\n"
		rb+="end"
		[rb, "FIX2INT(CALL(switchcb#{@no},1,ame_curobj(self)))"]
	end
	def topsort(a)
		a=a.uniq
		g=Oriented_Graph.new
		a.each{|u| a.each{|v| g.add(u,v) if  eval(u) >= eval(v)}}
	 	g.topo_order
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
bind[3]=[bind[3]]
end
def itrans_Detect_ClasSwitchcb_4(bind)
Rule
end
def itrans_Detect_ClasSwitchcb_5(bind)
_append(bind[0],bind[6])
end
def itrans_Detect_ClasSwitchcb_6(bind)
@src.rules=bind[7]
end
def itrans_Detect_ClasSwitchcb_7(bind)
@src.self
end
def itrans_Detect_ClasSwitchcb_8(bind)
_append(bind[1],bind[8])
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
(first(bind[4])) || FAIL
end
def visit_Detect_ClasSwitchcb_5(bind)
bind[2]+=first(bind[4])
end
def visit_Detect_ClasSwitchcb_6(bind)
_append(bind[0],bind[5])
end
def visit_Detect_ClasSwitchcb_7(bind)
bind[2]=topsort(bind[2])
end
def visit_Detect_ClasSwitchcb_8(bind)
bind[2].each_with_index{|bind[4],i|
      	bind[3]<<[i,Or[{:ary=>@src.ary.select{|p| includes(bind[2],i,first(p))}}]]
		}
end
def visit_Detect_ClasSwitchcb_9(bind)
c=classswitch(bind[2]);Switch[{:act=>c[1],:defs=>c[0],:ary=>bind[3]}]
end

end



 require 'compiled/detect_switch_c'
