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
	  return Empty if s.size==15
    s=(s[13]==?\\ ) ? s[13,2] : s[13,1]
    eval('"'+s+'"')[0]
  end
end

class ClasSwitch_Dataflow < First_Dataflow
end

class FirstLattice
	attr_accessor :ary
  def self.empty
    self[Empty]
  end
  def self.bottom
    self[]
  end
	def +(a)
		self.class[*(ary+a.ary)]
	end
	def -(a)
		self.class[*(ary-a.ary)]
	end
	def &(a)
		self.class[*(ary&a.ary)]
	end
	def seqjoin(a)
    return self unless a.ary.include? Empty
    (self-self.class.empty)+a
  end
	def ==(a)
		return false unless a.is_a?(FirstLattice)
		ary.map{|e| e.inspect}.uniq.sort==a.ary.map{|e| e.inspect}.uniq.sort
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
  def seqjoin(a)
    return self	
	end
end

class First_Dataflow < Amethyst

def fails_First_Dataflowcb_1(bind)
(false) || FAIL
end
def getvalue_First_Dataflowcb_1(bind)
@vis=bind[0]; bind[0]
end
def getvalue_First_Dataflowcb_2(bind)
bind[1]=[bind[1]]
end
def value_First_Dataflowcb_1(bind)
depends(bind[0]); @vals[bind[0]]
end

end


class Switch_Dataflow < First_Dataflow
def self.switchcb_Switch_Dataflow2(e)
return 0 if e<=Seq
return 1 if e<=Or
return 2 if e<=Switch
return 3 if e<=Bind
return 4 if e<=Many
return 5 if e<=Act
return 6 if e<=CAct
return 7 if e<=Apply
return 8 if e<=Object
return 9
end
@@switchhashSwitch_Dataflow2=Hash.new{|h,k| h[k]=switchcb_Switch_Dataflow2(k)}
def switchcbSwitch_Dataflow2(e)
@@switchhashSwitch_Dataflow2[e.class]
end
def clas_Switch_Dataflowcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Switch_Dataflowcb_1(bind)
(false) || FAIL
end
def first_Switch_Dataflowcb_1(bind)
_append(bind[1],bind[2])
end
def first_Switch_Dataflowcb_10(bind)
bind[17]=[bind[17]]
end
def first_Switch_Dataflowcb_11(bind)
bind[21]+CharLattice.empty
end
def first_Switch_Dataflowcb_12(bind)
Act
end
def first_Switch_Dataflowcb_13(bind)
CAct
end
def first_Switch_Dataflowcb_14(bind)
CharLattice.empty
end
def first_Switch_Dataflowcb_15(bind)
CharLattice[firstchar(bind[28])]
end
def first_Switch_Dataflowcb_16(bind)
CharLattice.top
end
def first_Switch_Dataflowcb_2(bind)
bind[3].inject{|u,v|u.seqjoin(v)}
end
def first_Switch_Dataflowcb_3(bind)
CharLattice.top+CharLattice.empty
end
def first_Switch_Dataflowcb_4(bind)
_append(bind[7],bind[8])
end
def first_Switch_Dataflowcb_5(bind)
bind[3].inject(:+)
end
def first_Switch_Dataflowcb_6(bind)
(@src.first.is_a?(CharLattice)) || FAIL
end
def first_Switch_Dataflowcb_7(bind)
@src.first
end
def first_Switch_Dataflowcb_8(bind)
_append(bind[13],bind[14])
end
def first_Switch_Dataflowcb_9(bind)
@src.expr
end
def spaces_Switch_Dataflowcb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_Switch_Dataflowcb_2(bind)
(bind[2].is_a? String ) || FAIL
end
def spaces_Switch_Dataflowcb_3(bind)
(bind[1].match(bind[4])) || FAIL
end
def spaces_Switch_Dataflowcb_4(bind)
_append(bind[0],bind[7])
end
def value_Switch_Dataflowcb_1(bind)
depends(bind[0]); @vals[bind[0]]
end

end


class ClasSwitch_Dataflow < First_Dataflow
def self.switchcb_ClasSwitch_Dataflow4(e)
return 0 if e<=Seq
return 1 if e<=Or
return 2 if e<=Switch
return 3 if e<=Bind
return 4 if e<=Many
return 5 if e<=Act
return 6 if e<=CAct
return 7 if e<=Apply
return 8 if e<=Object
return 9
end
@@switchhashClasSwitch_Dataflow4=Hash.new{|h,k| h[k]=switchcb_ClasSwitch_Dataflow4(k)}
def switchcbClasSwitch_Dataflow4(e)
@@switchhashClasSwitch_Dataflow4[e.class]
end
def clas_ClasSwitch_Dataflowcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_ClasSwitch_Dataflowcb_1(bind)
(false) || FAIL
end
def first_ClasSwitch_Dataflowcb_1(bind)
_append(bind[1],bind[2])
end
def first_ClasSwitch_Dataflowcb_10(bind)
bind[17]=[bind[17]]
end
def first_ClasSwitch_Dataflowcb_11(bind)
bind[21]+ClasLattice.empty
end
def first_ClasSwitch_Dataflowcb_12(bind)
Act
end
def first_ClasSwitch_Dataflowcb_13(bind)
CAct
end
def first_ClasSwitch_Dataflowcb_14(bind)
ClasLattice.empty
end
def first_ClasSwitch_Dataflowcb_15(bind)
ClasLattice[bind[28]]
end
def first_ClasSwitch_Dataflowcb_16(bind)
($rules[bind[31]]) || FAIL
end
def first_ClasSwitch_Dataflowcb_17(bind)
$rules[bind[31]].body
end
def first_ClasSwitch_Dataflowcb_18(bind)
bind[32]=[bind[32]]
end
def first_ClasSwitch_Dataflowcb_2(bind)
bind[3].inject{|u,v|u.seqjoin(v)}
end
def first_ClasSwitch_Dataflowcb_3(bind)
ClasLattice.top+ClasLattice.empty
end
def first_ClasSwitch_Dataflowcb_4(bind)
_append(bind[7],bind[8])
end
def first_ClasSwitch_Dataflowcb_5(bind)
bind[3].inject(:+)
end
def first_ClasSwitch_Dataflowcb_6(bind)
(@src.first.is_a?(ClasLattice)) || FAIL
end
def first_ClasSwitch_Dataflowcb_7(bind)
@src.first
end
def first_ClasSwitch_Dataflowcb_8(bind)
_append(bind[13],bind[14])
end
def first_ClasSwitch_Dataflowcb_9(bind)
@src.expr
end
def spaces_ClasSwitch_Dataflowcb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_ClasSwitch_Dataflowcb_2(bind)
(bind[2].is_a? String ) || FAIL
end
def spaces_ClasSwitch_Dataflowcb_3(bind)
(bind[1].match(bind[4])) || FAIL
end
def spaces_ClasSwitch_Dataflowcb_4(bind)
_append(bind[0],bind[7])
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
	def intersects(p,e)
		return true if e==:default
		r=(first(p).ary & [e,Empty,Anything])!=[]
		puts first(p).ary.inspect
		puts [e,Empty,Anything].inspect
		puts r
		r
	end
end

class Detect_ClasSwitch < Detect_First
	def first(s)
		if !@switchdf
			@switchdf=ClasSwitch_Dataflow.new
			@switchdf.parse(:root,[])
		end
		r=@switchdf.analyze(s)
		return r+ClasLattice.top-ClasLattice.empty if r.ary.include?(Empty)
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
def self.switchcb_Detect_First5(e)
return 0 if e<=Grammar
return 1 if e<=Object
return 2
end
@@switchhashDetect_First5=Hash.new{|h,k| h[k]=switchcb_Detect_First5(k)}
def switchcbDetect_First5(e)
@@switchhashDetect_First5[e.class]
end
def self.switchcb_Detect_First6(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDetect_First6=Hash.new{|h,k| h[k]=switchcb_Detect_First6(k)}
def switchcbDetect_First6(e)
@@switchhashDetect_First6[e.class]
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
def self.switchcb_Detect_Switch7(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDetect_Switch7=Hash.new{|h,k| h[k]=switchcb_Detect_Switch7(k)}
def switchcbDetect_Switch7(e)
@@switchhashDetect_Switch7[e.class]
end
def clas_Detect_Switchcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Detect_Switchcb_1(bind)
(false) || FAIL
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
(bind[2].size>1) || FAIL
end
def visit_Detect_Switchcb_11(bind)
Switch[{:act=>"*ame_curstr(self)",:first=>bind[4],:ary=>bind[2]}]
end
def visit_Detect_Switchcb_2(bind)
CharLattice[]
end
def visit_Detect_Switchcb_3(bind)
(first(bind[3])) || FAIL
end
def visit_Detect_Switchcb_4(bind)
bind[1]+=first(bind[3])
end
def visit_Detect_Switchcb_5(bind)
bind[1]=bind[1].ary.map{|bind[3]|  [Anything,Empty].include?(bind[3]) ? :default : bind[3]}.uniq
end
def visit_Detect_Switchcb_6(bind)
(bind[1].size>1) || FAIL
end
def visit_Detect_Switchcb_7(bind)
bind[1].each{|bind[3]|
			bind[2]<<[bind[3],Or[{:ary=>@src.ary.select{|p|intersects(p,bind[3])}}]]
		}
end
def visit_Detect_Switchcb_8(bind)
bind[2]=bind[2].group_by{|a,b| b}.map{|y,v| [v.map{|k,val| k.to_s}.sort,v[0][1]]}.sort
end
def visit_Detect_Switchcb_9(bind)
bind[2]<<[["default"],Apply["fails"]] unless bind[1].include?(:default)
end

end


class Detect_ClasSwitch < Detect_First
def self.switchcb_Detect_ClasSwitch8(e)
return 0 if e<=Seq
return 1 if e<=Apply
return 2 if e<=Bind
return 3 if e<=Object
return 4
end
@@switchhashDetect_ClasSwitch8=Hash.new{|h,k| h[k]=switchcb_Detect_ClasSwitch8(k)}
def switchcbDetect_ClasSwitch8(e)
@@switchhashDetect_ClasSwitch8[e.class]
end
def self.switchcb_Detect_ClasSwitch9(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDetect_ClasSwitch9=Hash.new{|h,k| h[k]=switchcb_Detect_ClasSwitch9(k)}
def switchcbDetect_ClasSwitch9(e)
@@switchhashDetect_ClasSwitch9[e.class]
end
def clas_Detect_ClasSwitchcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Detect_ClasSwitchcb_1(bind)
(false) || FAIL
end
def predicate_Detect_ClasSwitchcb_1(bind)
bind[1]=[bind[1]]
end
def predicate_Detect_ClasSwitchcb_10(bind)
_Bind(bind[11],bind[16])
end
def predicate_Detect_ClasSwitchcb_2(bind)
_append(bind[4],bind[5])
end
def predicate_Detect_ClasSwitchcb_3(bind)
Seq[[predicate(bind[7],bind[3])]+bind[6]]
end
def predicate_Detect_ClasSwitchcb_4(bind)
(bind[11]=="clas") || FAIL
end
def predicate_Detect_ClasSwitchcb_5(bind)
Act
end
def predicate_Detect_ClasSwitchcb_6(bind)
(child(bind[7],bind[13])&&bind[7]==bind[13]) || FAIL
end
def predicate_Detect_ClasSwitchcb_7(bind)
Apply["anything"]
end
def predicate_Detect_ClasSwitchcb_8(bind)
@src.name
end
def predicate_Detect_ClasSwitchcb_9(bind)
predicate(bind[7],@src.expr)
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
bind[4]=[bind[4]]
end
def traverse_Detect_ClasSwitchcb_5(bind)
@changed=false
end
def traverse_Detect_ClasSwitchcb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Detect_ClasSwitchcb_7(bind)
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
def visit_Detect_ClasSwitchcb_2(bind)
ClasLattice.bottom
end
def visit_Detect_ClasSwitchcb_3(bind)
(first(bind[3])) || FAIL
end
def visit_Detect_ClasSwitchcb_4(bind)
bind[1]+=first(bind[3])
end
def visit_Detect_ClasSwitchcb_5(bind)
bind[1]=topsort(bind[1].ary+["Object"])
end
def visit_Detect_ClasSwitchcb_6(bind)
(bind[1].size>1) || FAIL
end
def visit_Detect_ClasSwitchcb_7(bind)
bind[1].each_with_index{|bind[3],i|
      	bind[2]<<[i,Or[{:ary=>@src.ary.select{|p| includes(bind[1],i,first(p))}.map{|p| predicate(bind[3],p)}}]]
		}
end
def visit_Detect_ClasSwitchcb_8(bind)
bind[2]=bind[2].group_by{|a,b| b}.map{|y,v| [v.map{|k,val| k}.sort,v[0][1]]}.sort
end
def visit_Detect_ClasSwitchcb_9(bind)
c=classswitch(bind[1]);s=Switch[{:act=>c[1],:first=>bind[4],:defs=>c[0],:ary=>bind[2]}];puts s.inspect;s
end

end



def detect_switch_compiled_by
'7cb219fe7675d5263af758f05710ae38'
end
def detect_switch_source_hash
'ffafe12495fefa7460162a35c03e32aa'
end
def testversiondetect_switch(r)
 raise "invalid version" if r!=detect_switch_version
end
def detect_switch_version
'a8ec5907ec8df3a81bb322fe54ca1f1b'
end
  require 'compiled/detect_switch_c'
