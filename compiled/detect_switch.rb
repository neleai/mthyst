class Anything_
	def inspect
		"Anything"
	end
end
Anything=Anything_.new
class Empty_
  def inspect
    "Empty"
  end
end
Empty=Empty_.new


class FirstLattice
	attr_accessor :ary
  def self.empty
    self[Empty]
  end
  def self.bottom
    self[]
  end
	def |(a)
		self.class[*(ary|a.ary)]
	end
	def -(a)
		self.class[*(ary-a.ary)]
	end
	def &(a)
		self.class[*(ary&a.ary)]
	end
	def seqjoin(a)
    return self unless self.ary.include? Empty
    (self-self.class.empty)|a
  end
	def ==(a)
		return false unless a.is_a?(FirstLattice)
		ary.sort_by{|e| e.inspect}==a.ary.sort_by{|e| e.inspect}
	end

	def cases(first)
		ary.map{|c| c=="default" ? "default:;" : "case #{c}:;"}*""
	end
end
class CharLattice < FirstLattice
	def self.[](*ary)
		c=CharLattice.new
		c.ary=ary.uniq
		c
	end
	def self.top
		CharLattice[Anything]
	end
  def cases(first)
		puts ary.inspect
    ary.map{|c| c=="default" ? "default:;" : "case #{c[0]} ... #{c[1]}:;"}*""
  end

end

class ClasLattice < FirstLattice
  attr_accessor :ary
  def self.[](*ary)
    c=ClasLattice.new
    c.ary=ary.uniq
    c
  end
  def self.top
    ClasLattice["Object"]
  end
end
class First_Dataflow < Amethyst
	def initialize
    @depend=Oriented_Graph.new
    @vals=Hash.new(CharLattice.bottom)
		@visited={}
  end

	def analyze(e)
    @active={}
    @activea=[e]
		while el=@activea.pop
			@active.delete(el)
      val=getvalue(el)
      if val!=@vals[el]
        @vals[el]=val
        @depend.edges[el].each{|d| addactive(d)}
      end

		end
		@vals[e]
	end 
	def depends(e)
		@depend.add(e,@vis) unless @depend.edges[e].include?(@vis)
		if !@visited[e]
			@visited[e]=true
			addactive(e)
		end
	end
	def addactive(e)
    if !@active[e]
      @active[e]=true
      @activea<<e
    end
  end
end

class Switch_Dataflow < First_Dataflow
  def firstchar(s)
	  return Empty if s==""
    s=(s[0]==?\\ ) ? s[0,2] : s[0,1]
    s=eval('"'+s+'"')[0]
		[s,s]
  end
	def regchar(s)
		puts s
		Anything
	end
	def lattice
		CharLattice
	end
end

class ClasSwitch_Dataflow < First_Dataflow
	def lattice
		ClasLattice
	end
end
class First_Dataflow < Amethyst
def self.switchcb_First_Dataflow2(e)
return 0 if e<=Switch
return 1 if e<=Seq
return 2 if e<=Many
return 3 if e<=Or
return 4 if e<=Bind
return 5 if e<=Act
return 6 if e<=CAct
return 7 if e<=Object
return 8
end
@@switchhashFirst_Dataflow2=Hash.new{|h,k| h[k]=switchcb_First_Dataflow2(k)}
def switchcbFirst_Dataflow2(e)
@@switchhashFirst_Dataflow2[e.class]
end
def self.switchcb_First_Dataflow1(e)
return 0 if e<=Act
return 1 if e<=CAct
return 2 if e<=Object
return 3
end
@@switchhashFirst_Dataflow1=Hash.new{|h,k| h[k]=switchcb_First_Dataflow1(k)}
def switchcbFirst_Dataflow1(e)
@@switchhashFirst_Dataflow1[e.class]
end
def clas_First_Dataflowcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_First_Dataflowcb_1(bind)
(false) || FAIL
end
def first_First_Dataflowcb_1(bind)
(@src.first.is_a?(lattice)) || FAIL
end
def first_First_Dataflowcb_10(bind)
@src.expr
end
def first_First_Dataflowcb_11(bind)
bind[20]=[bind[20]]
end
def first_First_Dataflowcb_12(bind)
lattice.empty
end
def first_First_Dataflowcb_2(bind)
@src.first
end
def first_First_Dataflowcb_3(bind)
_append(bind[4],bind[5])
end
def first_First_Dataflowcb_4(bind)
bind[6].inject(:|)
end
def first_First_Dataflowcb_5(bind)
lattice.top|lattice.empty
end
def first_First_Dataflowcb_6(bind)
_append(bind[9],bind[10])
end
def first_First_Dataflowcb_7(bind)
bind[6].inject{|u,v|u.seqjoin(v)}
end
def first_First_Dataflowcb_8(bind)
bind[13]|lattice.empty
end
def first_First_Dataflowcb_9(bind)
_append(bind[16],bind[17])
end
def value_First_Dataflowcb_1(bind)
depends(bind[0]); @vals[bind[0]]
end

end
  			

class Switch_Dataflow < First_Dataflow
def self.switchcb_Switch_Dataflow4(e)
return 0 if e<=Switch
return 1 if e<=Seq
return 2 if e<=Many
return 3 if e<=Or
return 4 if e<=Bind
return 5 if e<=Act
return 6 if e<=CAct
return 7 if e<=Object
return 8
end
@@switchhashSwitch_Dataflow4=Hash.new{|h,k| h[k]=switchcb_Switch_Dataflow4(k)}
def switchcbSwitch_Dataflow4(e)
@@switchhashSwitch_Dataflow4[e.class]
end
def self.switchcb_Switch_Dataflow3(e)
return 0 if e<=Act
return 1 if e<=CAct
return 2 if e<=Object
return 3
end
@@switchhashSwitch_Dataflow3=Hash.new{|h,k| h[k]=switchcb_Switch_Dataflow3(k)}
def switchcbSwitch_Dataflow3(e)
@@switchhashSwitch_Dataflow3[e.class]
end
def self.switchcb_Switch_Dataflow5(e)
return 0 if e<=Apply
return 1 if e<=Object
return 2
end
@@switchhashSwitch_Dataflow5=Hash.new{|h,k| h[k]=switchcb_Switch_Dataflow5(k)}
def switchcbSwitch_Dataflow5(e)
@@switchhashSwitch_Dataflow5[e.class]
end
def clas_Switch_Dataflowcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Switch_Dataflowcb_1(bind)
(false) || FAIL
end
def first_Switch_Dataflow_Switch_Dataflowcb_1(bind)
(@src.first.is_a?(lattice)) || FAIL
end
def first_Switch_Dataflow_Switch_Dataflowcb_10(bind)
@src.expr
end
def first_Switch_Dataflow_Switch_Dataflowcb_11(bind)
bind[20]=[bind[20]]
end
def first_Switch_Dataflow_Switch_Dataflowcb_12(bind)
lattice.empty
end
def first_Switch_Dataflow_Switch_Dataflowcb_2(bind)
@src.first
end
def first_Switch_Dataflow_Switch_Dataflowcb_3(bind)
_append(bind[4],bind[5])
end
def first_Switch_Dataflow_Switch_Dataflowcb_4(bind)
bind[6].inject(:|)
end
def first_Switch_Dataflow_Switch_Dataflowcb_5(bind)
lattice.top|lattice.empty
end
def first_Switch_Dataflow_Switch_Dataflowcb_6(bind)
_append(bind[9],bind[10])
end
def first_Switch_Dataflow_Switch_Dataflowcb_7(bind)
bind[6].inject{|u,v|u.seqjoin(v)}
end
def first_Switch_Dataflow_Switch_Dataflowcb_8(bind)
bind[13]|lattice.empty
end
def first_Switch_Dataflow_Switch_Dataflowcb_9(bind)
_append(bind[16],bind[17])
end
def first_Switch_Dataflowcb_1(bind)
CAct
end
def first_Switch_Dataflowcb_2(bind)
lattice[firstchar(bind[3])]
end
def first_Switch_Dataflowcb_3(bind)
Act
end
def first_Switch_Dataflowcb_4(bind)
lattice[regchar(bind[3])]
end
def first_Switch_Dataflowcb_5(bind)
lattice.top
end
def getvalue_Switch_Dataflowcb_1(bind)
@vis=bind[0]; bind[0]
end
def getvalue_Switch_Dataflowcb_2(bind)
bind[1]=[bind[1]]
end
def regch_Switch_Dataflowcb_1(bind)
(bind[0].is_a? String ) || FAIL
end
def regch_Switch_Dataflowcb_2(bind)
(bind[3].match(bind[2])) || FAIL
end
def spaces_Switch_Dataflowcb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_Switch_Dataflowcb_2(bind)
_append(bind[0],bind[2])
end

end


class ClasSwitch_Dataflow < First_Dataflow
def self.switchcb_ClasSwitch_Dataflow7(e)
return 0 if e<=Switch
return 1 if e<=Seq
return 2 if e<=Many
return 3 if e<=Or
return 4 if e<=Bind
return 5 if e<=Act
return 6 if e<=CAct
return 7 if e<=Object
return 8
end
@@switchhashClasSwitch_Dataflow7=Hash.new{|h,k| h[k]=switchcb_ClasSwitch_Dataflow7(k)}
def switchcbClasSwitch_Dataflow7(e)
@@switchhashClasSwitch_Dataflow7[e.class]
end
def self.switchcb_ClasSwitch_Dataflow6(e)
return 0 if e<=Act
return 1 if e<=CAct
return 2 if e<=Object
return 3
end
@@switchhashClasSwitch_Dataflow6=Hash.new{|h,k| h[k]=switchcb_ClasSwitch_Dataflow6(k)}
def switchcbClasSwitch_Dataflow6(e)
@@switchhashClasSwitch_Dataflow6[e.class]
end
def self.switchcb_ClasSwitch_Dataflow8(e)
return 0 if e<=Apply
return 1 if e<=Object
return 2
end
@@switchhashClasSwitch_Dataflow8=Hash.new{|h,k| h[k]=switchcb_ClasSwitch_Dataflow8(k)}
def switchcbClasSwitch_Dataflow8(e)
@@switchhashClasSwitch_Dataflow8[e.class]
end
def clas_ClasSwitch_Dataflowcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_ClasSwitch_Dataflowcb_1(bind)
(false) || FAIL
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_1(bind)
(@src.first.is_a?(lattice)) || FAIL
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_10(bind)
@src.expr
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_11(bind)
bind[20]=[bind[20]]
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_12(bind)
lattice.empty
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_2(bind)
@src.first
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_3(bind)
_append(bind[4],bind[5])
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_4(bind)
bind[6].inject(:|)
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_5(bind)
lattice.top|lattice.empty
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_6(bind)
_append(bind[9],bind[10])
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_7(bind)
bind[6].inject{|u,v|u.seqjoin(v)}
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_8(bind)
bind[13]|lattice.empty
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_9(bind)
_append(bind[16],bind[17])
end
def first_ClasSwitch_Dataflowcb_1(bind)
Act
end
def first_ClasSwitch_Dataflowcb_2(bind)
lattice[bind[3]]
end
def first_ClasSwitch_Dataflowcb_3(bind)
($rules[bind[7]]) || FAIL
end
def first_ClasSwitch_Dataflowcb_4(bind)
$rules[bind[7]].body
end
def first_ClasSwitch_Dataflowcb_5(bind)
bind[8]=[bind[8]]
end
def getvalue_ClasSwitch_Dataflowcb_1(bind)
@vis=bind[0]; bind[0]
end
def getvalue_ClasSwitch_Dataflowcb_2(bind)
bind[1]=[bind[1]]
end
def regch_ClasSwitch_Dataflowcb_1(bind)
(bind[0].is_a? String ) || FAIL
end
def regch_ClasSwitch_Dataflowcb_2(bind)
(bind[3].match(bind[2])) || FAIL
end
def spaces_ClasSwitch_Dataflowcb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_ClasSwitch_Dataflowcb_2(bind)
_append(bind[0],bind[2])
end
def value_ClasSwitch_Dataflowcb_1(bind)
depends(bind[0]); @vals[bind[0]]
end

end


class Detect_First< Traverser_Clone2
end

class Detect_Switch < Detect_First
	def first(s)
		if !@switchdf
			@switchdf=Switch_Dataflow.new
			@switchdf.parse(:root,[])
		end
		r=@switchdf.analyze(s)
		return r
	end
	def intersects(ar,el)
		return true if ar & [Empty,Anything] != []
		return ar & [el] !=[]
	end
end

class Detect_ClasSwitch < Detect_First
	def first(s)
		if !@switchdf
			@switchdf=ClasSwitch_Dataflow.new
			@switchdf.parse(:root,[])
		end
		r=@switchdf.analyze(s)
		return (r|ClasLattice.top)-ClasLattice.empty if r.ary.include?(Empty)
		return r
	end
	def child(par,chld)
		 par,chld=eval(par),eval(chld)
		 par<=chld
	end
	def includes(ary,i,p)
		i.times{|ii|
			s=true
			p.ary.each{|f| s=false unless child(f,ary[ii])}
			return false if s
		}
		p.ary.each{|f| return true if child(ary[i],f) || child(f,ary[i])}
		return false
	end
	def classswitch(ary)
		@no=(@no||0)+1
		rb="def self.switchcb_#{@name}#{@no}(e)\n"
		ary.each_with_index{|c,i| rb<< "return #{i} if e<=#{c}\n"}
		rb+="return #{ary.size}\nend\n"
		rb+="@@switchhash#{@name}#{@no}=Hash.new{|h,k| h[k]=switchcb_#{@name}#{@no}(k)}\n"
		rb+="def switchcb#{@name}#{@no}(e)\n"
		rb+="@@switchhash#{@name}#{@no}[e.class]\n"
		rb+="end"
		[rb, "FIX2INT(CALL(switchcb#{@name}#{@no},1,ame_curobj(self)))"]
	end
	def topsort(a)
		a=a.uniq
		g=Oriented_Graph.new
		a.each{|u| a.each{|v| g.add(u,v) if child(v,u)}}
	 	g.topo_order
	end
end

class Detect_First < Traverser_Clone2
def self.switchcb_Detect_First9(e)
return 0 if e<=Grammar
return 1 if e<=Object
return 2
end
@@switchhashDetect_First9=Hash.new{|h,k| h[k]=switchcb_Detect_First9(k)}
def switchcbDetect_First9(e)
@@switchhashDetect_First9[e.class]
end
def self.switchcb_Detect_First10(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDetect_First10=Hash.new{|h,k| h[k]=switchcb_Detect_First10(k)}
def switchcbDetect_First10(e)
@@switchhashDetect_First10[e.class]
end
def clas_Detect_Firstcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Detect_Firstcb_1(bind)
(false) || FAIL
end
def itrans_Detect_Firstcb_1(bind)
@name=@src.name
end
def itrans_Detect_Firstcb_2(bind)
$rules={};@src.rules.each{|r| $rules[r.name]=r}
end
def itrans_Detect_Firstcb_3(bind)
@src.rules
end
def itrans_Detect_Firstcb_4(bind)
bind[2]=[bind[2]]
end
def itrans_Detect_Firstcb_5(bind)
Rule
end
def itrans_Detect_Firstcb_6(bind)
_append(bind[4],bind[7])
end
def itrans_Detect_Firstcb_7(bind)
@src.rules=bind[8]
end
def itrans_Detect_Firstcb_8(bind)
@src
end
def itrans_Detect_Firstcb_9(bind)
_append(bind[0],bind[10])
end
def traverse_Detect_Firstcb_1(bind)
@changed
end
def traverse_Detect_Firstcb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Detect_Firstcb_3(bind)
bind[4]=[bind[4]]
end
def traverse_Detect_Firstcb_4(bind)
@changed=false
end
def traverse_Detect_Firstcb_5(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Detect_Firstcb_6(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
end
def traverse_item_Detect_Firstcb_1(bind)
@changed=true
end
def traverse_item_Detect_Firstcb_2(bind)
bind[3]<<bind[4]
end

end


class Detect_Switch < Detect_First
def self.switchcb_Detect_Switch12(e)
return 0 if e<=Seq
return 1 if e<=Or
return 2 if e<=Switch
return 3 if e<=Object
return 4
end
@@switchhashDetect_Switch12=Hash.new{|h,k| h[k]=switchcb_Detect_Switch12(k)}
def switchcbDetect_Switch12(e)
@@switchhashDetect_Switch12[e.class]
end
def self.switchcb_Detect_Switch13(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDetect_Switch13=Hash.new{|h,k| h[k]=switchcb_Detect_Switch13(k)}
def switchcbDetect_Switch13(e)
@@switchhashDetect_Switch13[e.class]
end
def clas_Detect_Switchcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Detect_Switchcb_1(bind)
(false) || FAIL
end
def predicate_Detect_Switchcb_1(bind)
(bind[0]=="default") || FAIL
end
def predicate_Detect_Switchcb_2(bind)
(!intersects(first(bind[1]).ary,bind[0])) || FAIL
end
def predicate_Detect_Switchcb_3(bind)
Placeholder
end
def predicate_Detect_Switchcb_4(bind)
bind[3]=[bind[3]]
end
def predicate_Detect_Switchcb_5(bind)
_append(bind[7],bind[8])
end
def predicate_Detect_Switchcb_6(bind)
Seq[*([bind[6]]+bind[9])]
end
def predicate_Detect_Switchcb_7(bind)
_append(bind[13],bind[14])
end
def predicate_Detect_Switchcb_8(bind)
Or[*bind[15]]
end
def predicate_Detect_Switchcb_9(bind)
nary=bind[1].ary
                                 nary=nary.select{|o,v| intersects(o.ary,bind[0])} if bind[1].first.is_a?(CharLattice)
                                 nary=nary.map{|o,v| [o,predicate(bind[0],v)]}.select{|o,v| v!=Placeholder}
                                 Switch[{:act=>bind[1].act,:first=>bind[1].first,:defs=>bind[1].defs,:ary=>nary}]
                              
end
def traverse_Detect_Switchcb_1(bind)
@changed
end
def traverse_Detect_Switchcb_2(bind)
@src
end
def traverse_Detect_Switchcb_3(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Detect_Switchcb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Detect_Switchcb_5(bind)
@changed=false
end
def traverse_Detect_Switchcb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Detect_Switchcb_7(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
end
def traverse_item_Detect_Switchcb_1(bind)
@changed=true
end
def traverse_item_Detect_Switchcb_2(bind)
bind[3]<<bind[4]
end
def visit_Detect_Switchcb_1(bind)
Or
end
def visit_Detect_Switchcb_10(bind)
bind[1].each{|bind[4]|
			bind[2]<<[bind[4],predicate(bind[4],bind[7])]
		}
end
def visit_Detect_Switchcb_11(bind)
bind[2]=bind[2].group_by{|a,b| b}.map{|y,v| [v.map{|k,val| k}.sort_by{|bind[4]| bind[4].inspect},v[0][1]]}.sort_by{|bind[4]| bind[4].inspect}
end
def visit_Detect_Switchcb_12(bind)
bind[2]<<[["default"],Apply["fails"]] unless bind[1].include?("default")
end
def visit_Detect_Switchcb_13(bind)
bind[2]=bind[2].map{|o,v| [CharLattice[*o],v]}
end
def visit_Detect_Switchcb_14(bind)
(bind[2].size>1) || FAIL
end
def visit_Detect_Switchcb_15(bind)
Switch[{:act=>"*ame_curstr(self)",:first=>bind[6],:ary=>bind[2]}]
end
def visit_Detect_Switchcb_2(bind)
CharLattice[]
end
def visit_Detect_Switchcb_3(bind)
(first(bind[4])) || FAIL
end
def visit_Detect_Switchcb_4(bind)
_append(bind[3],bind[5])
end
def visit_Detect_Switchcb_5(bind)
bind[1]|=first(bind[4])
end
def visit_Detect_Switchcb_6(bind)
bind[1]=bind[1].ary.map{|bind[4]|  [Anything,Empty].include?(bind[4]) ? "default" : bind[4]}.uniq
end
def visit_Detect_Switchcb_7(bind)
(bind[1].size>1) || FAIL
end
def visit_Detect_Switchcb_8(bind)
Or[*bind[3]]
end
def visit_Detect_Switchcb_9(bind)
(bind[7].is_a?(Or)) || FAIL
end

end


class Detect_ClasSwitch < Detect_First
def self.switchcb_Detect_ClasSwitch15(e)
return 0 if e<=Seq
return 1 if e<=Or
return 2 if e<=Apply
return 3 if e<=Bind
return 4 if e<=Object
return 5
end
@@switchhashDetect_ClasSwitch15=Hash.new{|h,k| h[k]=switchcb_Detect_ClasSwitch15(k)}
def switchcbDetect_ClasSwitch15(e)
@@switchhashDetect_ClasSwitch15[e.class]
end
def self.switchcb_Detect_ClasSwitch16(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDetect_ClasSwitch16=Hash.new{|h,k| h[k]=switchcb_Detect_ClasSwitch16(k)}
def switchcbDetect_ClasSwitch16(e)
@@switchhashDetect_ClasSwitch16[e.class]
end
def clas_Detect_ClasSwitchcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Detect_ClasSwitchcb_1(bind)
(false) || FAIL
end
def predicate_Detect_ClasSwitchcb_1(bind)
(bind[0][bind[1]]=="default") || FAIL
end
def predicate_Detect_ClasSwitchcb_10(bind)
Act
end
def predicate_Detect_ClasSwitchcb_11(bind)
(child(bind[0][bind[1]],bind[21])&&bind[0][bind[1]]==bind[21]) || FAIL
end
def predicate_Detect_ClasSwitchcb_12(bind)
Apply["anything"]
end
def predicate_Detect_ClasSwitchcb_13(bind)
@src.name
end
def predicate_Detect_ClasSwitchcb_14(bind)
predicate(bind[0],bind[1],@src.expr)
end
def predicate_Detect_ClasSwitchcb_15(bind)
_Bind(bind[19],bind[24])
end
def predicate_Detect_ClasSwitchcb_2(bind)
(!includes(bind[0],bind[1],first(bind[2]))) || FAIL
end
def predicate_Detect_ClasSwitchcb_3(bind)
Placeholder
end
def predicate_Detect_ClasSwitchcb_4(bind)
bind[4]=[bind[4]]
end
def predicate_Detect_ClasSwitchcb_5(bind)
_append(bind[8],bind[9])
end
def predicate_Detect_ClasSwitchcb_6(bind)
Seq[*([bind[7]]+bind[10])]
end
def predicate_Detect_ClasSwitchcb_7(bind)
_append(bind[14],bind[15])
end
def predicate_Detect_ClasSwitchcb_8(bind)
Or[*bind[16]]
end
def predicate_Detect_ClasSwitchcb_9(bind)
(bind[19]=="clas") || FAIL
end
def traverse_Detect_ClasSwitchcb_1(bind)
@changed
end
def traverse_Detect_ClasSwitchcb_2(bind)
@src
end
def traverse_Detect_ClasSwitchcb_3(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Detect_ClasSwitchcb_4(bind)
@changed=false
end
def traverse_Detect_ClasSwitchcb_5(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Detect_ClasSwitchcb_6(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
end
def traverse_item_Detect_ClasSwitchcb_1(bind)
@changed=true
end
def traverse_item_Detect_ClasSwitchcb_2(bind)
bind[3]<<bind[4]
end
def visit_Detect_ClasSwitchcb_1(bind)
Or
end
def visit_Detect_ClasSwitchcb_10(bind)
bind[2]=bind[2].map{|o,v| v==Placeholder ? [o,Apply["fails"]] : [o,v]}
end
def visit_Detect_ClasSwitchcb_11(bind)
bind[2]=bind[2].group_by{|a,b| b}.map{|y,v| [v.map{|k,val| k}.sort_by{|bind[4]| bind[4].inspect},v[0][1]]}.sort_by{|bind[4]| bind[4].inspect}
end
def visit_Detect_ClasSwitchcb_12(bind)
bind[2]=bind[2].map{|o,v| [ClasLattice[*o],v]}
end
def visit_Detect_ClasSwitchcb_13(bind)
c=classswitch(bind[1]);Switch[{:act=>c[1],:first=>bind[6],:defs=>c[0],:ary=>bind[2]}]
end
def visit_Detect_ClasSwitchcb_2(bind)
ClasLattice.bottom
end
def visit_Detect_ClasSwitchcb_3(bind)
(first(bind[4])) || FAIL
end
def visit_Detect_ClasSwitchcb_4(bind)
_append(bind[3],bind[5])
end
def visit_Detect_ClasSwitchcb_5(bind)
bind[1]|=first(bind[4])
end
def visit_Detect_ClasSwitchcb_6(bind)
bind[1]=topsort(bind[1].ary+["Object"])
end
def visit_Detect_ClasSwitchcb_7(bind)
(bind[1].size>1) || FAIL
end
def visit_Detect_ClasSwitchcb_8(bind)
Or[*bind[3]]
end
def visit_Detect_ClasSwitchcb_9(bind)
bind[1].each_index{|i|
      	bind[2]<<[i,predicate(bind[1],i,bind[7])]
		}
end

end



def detect_switch_compiled_by
'668c6ffbe5f6c1ef344fc437d80bd7d2'
end
def detect_switch_source_hash
'92b7251a3755eabb5145068d3901df19'
end
def testversiondetect_switch(r)
 raise "invalid version" if r!=detect_switch_version
end
def detect_switch_version
'aac83101e209edc00d0ce84184390538'
end
  require 'compiled/detect_switch_c'
