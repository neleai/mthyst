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
			s.ary.each{|k,v| 
				return nil if !first(v)
			a+=first(v)}
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
			puts s.inspect
			return nil unless s[1].is_a?(CAct)
			return nil if s[1][0].size==15
			return [firstchar(s[1][0])]
		end
	end
end

class Detect_Switch < Traverser
def self.switchcb_1(e)
return 0 if e<=Grammar
return 1 if e<=Object
return 2
end
@@switchhash1=Hash.new{|h,k| h[k]=switchcb_1(k)}
def switchcb1(e)
@@switchhash1[e.class]
end
def clas_Detect_Switchcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def empty_Detect_Switchcb_1(bind)

end
def fails_Detect_Switchcb_1(bind)
(false) || FAIL
end
def itrans_Detect_Switchcb_1(bind)
Grammar
end
def itrans_Detect_Switchcb_2(bind)
@src.rules
end
def itrans_Detect_Switchcb_3(bind)
bind[2]=[bind[2]]
end
def itrans_Detect_Switchcb_4(bind)
Rule
end
def itrans_Detect_Switchcb_5(bind)
_append(bind[4],bind[7])
end
def itrans_Detect_Switchcb_6(bind)
@src.rules=bind[8]
end
def itrans_Detect_Switchcb_7(bind)
@src
end
def itrans_Detect_Switchcb_8(bind)
_append(bind[0],bind[10])
end
def traverse_Detect_Switchcb_1(bind)
@src
end
def traverse_Detect_Switchcb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Detect_Switchcb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Detect_Switchcb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Detect_Switchcb_5(bind)
@src
end
def traverse_item_Detect_Switchcb_1(bind)
@changed=true
end
def traverse_item_Detect_Switchcb_2(bind)
Array
end
def traverse_item_Detect_Switchcb_3(bind)
bind[3]<<bind[4]
end
def traverse_item_Detect_Switchcb_4(bind)
AmethystAST
end
def visit_Detect_Switchcb_1(bind)
Or
end
def visit_Detect_Switchcb_2(bind)
(first(bind[3])) || FAIL
end
def visit_Detect_Switchcb_3(bind)
bind[1]+=first(bind[3])
end
def visit_Detect_Switchcb_4(bind)
bind[1].sort.uniq.each{|bind[3]| 
			bind[2]<<[bind[3],Or[{:ary=>@src.ary.select{|p| first(p).include?(bind[3])}}]]
		}
end
def visit_Detect_Switchcb_5(bind)
s=Switch[{:act=>"*ame_curstr(self)",:ary=>bind[2]}];puts s.inspect;s
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
			s.ary.each{|k,v|
				return nil if !first(v)
			a+=first(v)}
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
	def child(par,chld)
		 eval(par) <= eval(chld)
	end
	def includes(ary,i,p)
		i.times{|ii|
			s=true
			p.each{|f| s=false unless child(f,ary[ii])}
			return false if s
		}
		p.each{|f| return true if child(ary[i],f) || child(f,ary[i])}
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
		a.each{|u| a.each{|v| g.add(u,v) if child(v,u)}}
	 	g.topo_order
	end
end

class Detect_ClasSwitch < Traverser
def self.switchcb_2(e)
return 0 if e<=Seq
return 1 if e<=Apply
return 2 if e<=Bind
return 3 if e<=Object
return 4
end
@@switchhash2=Hash.new{|h,k| h[k]=switchcb_2(k)}
def switchcb2(e)
@@switchhash2[e.class]
end
def self.switchcb_3(e)
return 0 if e<=Grammar
return 1 if e<=Object
return 2
end
@@switchhash3=Hash.new{|h,k| h[k]=switchcb_3(k)}
def switchcb3(e)
@@switchhash3[e.class]
end
def clas_Detect_ClasSwitchcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def empty_Detect_ClasSwitchcb_1(bind)

end
def fails_Detect_ClasSwitchcb_1(bind)
(false) || FAIL
end
def itrans_Detect_ClasSwitchcb_1(bind)
Grammar
end
def itrans_Detect_ClasSwitchcb_2(bind)
@src.rules
end
def itrans_Detect_ClasSwitchcb_3(bind)
bind[2]=[bind[2]]
end
def itrans_Detect_ClasSwitchcb_4(bind)
Rule
end
def itrans_Detect_ClasSwitchcb_5(bind)
_append(bind[4],bind[7])
end
def itrans_Detect_ClasSwitchcb_6(bind)
@src.rules=bind[8]
end
def itrans_Detect_ClasSwitchcb_7(bind)
@src
end
def itrans_Detect_ClasSwitchcb_8(bind)
_append(bind[0],bind[10])
end
def predicate_Detect_ClasSwitchcb_1(bind)
bind[1]=[bind[1]]
end
def predicate_Detect_ClasSwitchcb_10(bind)
Bind
end
def predicate_Detect_ClasSwitchcb_11(bind)
@src.name
end
def predicate_Detect_ClasSwitchcb_12(bind)
predicate(bind[7],@src.expr)
end
def predicate_Detect_ClasSwitchcb_13(bind)
Bind.create( {:expr=>bind[16],:name=>bind[11] })
end
def predicate_Detect_ClasSwitchcb_2(bind)
Seq
end
def predicate_Detect_ClasSwitchcb_3(bind)
_append(bind[4],bind[5])
end
def predicate_Detect_ClasSwitchcb_4(bind)
Seq[[predicate(bind[7],bind[3])]+bind[6]]
end
def predicate_Detect_ClasSwitchcb_5(bind)
Apply
end
def predicate_Detect_ClasSwitchcb_6(bind)
(bind[11]=="clas") || FAIL
end
def predicate_Detect_ClasSwitchcb_7(bind)
Act
end
def predicate_Detect_ClasSwitchcb_8(bind)
(child(bind[7],bind[13])) || FAIL
end
def predicate_Detect_ClasSwitchcb_9(bind)
Apply["anything"]
end
def traverse_Detect_ClasSwitchcb_1(bind)
@src
end
def traverse_Detect_ClasSwitchcb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Detect_ClasSwitchcb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Detect_ClasSwitchcb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Detect_ClasSwitchcb_5(bind)
@src
end
def traverse_item_Detect_ClasSwitchcb_1(bind)
@changed=true
end
def traverse_item_Detect_ClasSwitchcb_2(bind)
Array
end
def traverse_item_Detect_ClasSwitchcb_3(bind)
bind[3]<<bind[4]
end
def traverse_item_Detect_ClasSwitchcb_4(bind)
AmethystAST
end
def visit_Detect_ClasSwitchcb_1(bind)
Or
end
def visit_Detect_ClasSwitchcb_2(bind)
(first(bind[3])) || FAIL
end
def visit_Detect_ClasSwitchcb_3(bind)
bind[1]+=first(bind[3])
end
def visit_Detect_ClasSwitchcb_4(bind)
bind[1]=topsort(bind[1])
end
def visit_Detect_ClasSwitchcb_5(bind)
bind[1].each_with_index{|bind[3],i|
      	bind[2]<<[i,Or[{:ary=>@src.ary.select{|p| includes(bind[1],i,first(p))}}]]
		}
end
def visit_Detect_ClasSwitchcb_6(bind)
c=classswitch(bind[1]);s=Switch[{:act=>c[1],:defs=>c[0],:ary=>bind[2]}];puts s.inspect;s
end

end



def testversion(r)
 raise "invalid version" if r!='2598f74f6f43a376a1ecf609bb10a6e0'
end
  require 'compiled/detect_switch_c'
