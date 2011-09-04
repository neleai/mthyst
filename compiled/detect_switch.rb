class Switch_Dataflow < Amethyst
  def firstchar(s)
	  return :empty if s.size==15
    s=(s[13]==?\\ ) ? s[13,2] : s[13,1]
    eval('"'+s+'"')[0]
  end


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

class Switch_Dataflow < Amethyst
  def firstchar(s)
	  return :empty if s.size==15
    s=(s[13]==?\\ ) ? s[13,2] : s[13,1]
    eval('"'+s+'"')[0]
  end


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

class FirstLattice
	attr_accessor :ary
  def self.empty
    self[:empty]
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
    return self unless a.ary.include? :empty
    (self-self.class.empty)+a
  end
end
class CharLattice < FirstLattice
	def self.[](*ary)
		c=CharLattice.new
		c.ary=ary.uniq
		c
	end
	def self.top
		CharLattice[:anything]
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
    return self #unless a.ary.include? :empty
    (self-self.class.empty)+a
  end
end


class Switch_Dataflow < Amethyst
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
bind[3].inject(:+)
end
def first_Switch_Dataflowcb_11(bind)
CharLattice.top+CharLattice.empty
end
def first_Switch_Dataflowcb_12(bind)
@src.expr
end
def first_Switch_Dataflowcb_13(bind)
bind[17]=[bind[17]]
end
def first_Switch_Dataflowcb_14(bind)
CharLattice.top+CharLattice.empty
end
def first_Switch_Dataflowcb_15(bind)
bind[21]+CharLattice.empty
end
def first_Switch_Dataflowcb_16(bind)
CharLattice.top+CharLattice.empty
end
def first_Switch_Dataflowcb_17(bind)
Act
end
def first_Switch_Dataflowcb_18(bind)
CAct
end
def first_Switch_Dataflowcb_19(bind)
CharLattice.empty
end
def first_Switch_Dataflowcb_2(bind)
bind[3].inject{|u,v|u.seqjoin(v)}
end
def first_Switch_Dataflowcb_20(bind)
CharLattice.top+CharLattice.empty
end
def first_Switch_Dataflowcb_21(bind)
CAct
end
def first_Switch_Dataflowcb_22(bind)
CharLattice[firstchar(bind[28])]
end
def first_Switch_Dataflowcb_23(bind)
CharLattice.top
end
def first_Switch_Dataflowcb_24(bind)
CharLattice.top
end
def first_Switch_Dataflowcb_25(bind)
CharLattice.top+CharLattice.empty
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
CharLattice.top+CharLattice.empty
end
def first_Switch_Dataflowcb_7(bind)
(@src.first.is_a?(CharLattice)) || FAIL
end
def first_Switch_Dataflowcb_8(bind)
@src.first
end
def first_Switch_Dataflowcb_9(bind)
_append(bind[13],bind[14])
end
def getvalue_Switch_Dataflowcb_1(bind)
@vis=bind[0]; bind[0]
end
def getvalue_Switch_Dataflowcb_2(bind)
bind[1]=[bind[1]]
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


class ClasSwitch_Dataflow < Amethyst
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
def analyze_ClasSwitch_Dataflowcb_1(bind)
bind[1]=[bind[1]]
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
bind[3].inject(:+)
end
def first_ClasSwitch_Dataflowcb_11(bind)
ClasLattice.top+ClasLattice.empty
end
def first_ClasSwitch_Dataflowcb_12(bind)
@src.expr
end
def first_ClasSwitch_Dataflowcb_13(bind)
bind[17]=[bind[17]]
end
def first_ClasSwitch_Dataflowcb_14(bind)
ClasLattice.top+ClasLattice.empty
end
def first_ClasSwitch_Dataflowcb_15(bind)
bind[21]+ClasLattice.empty
end
def first_ClasSwitch_Dataflowcb_16(bind)
ClasLattice.top+ClasLattice.empty
end
def first_ClasSwitch_Dataflowcb_17(bind)
Act
end
def first_ClasSwitch_Dataflowcb_18(bind)
CAct
end
def first_ClasSwitch_Dataflowcb_19(bind)
ClasLattice.empty
end
def first_ClasSwitch_Dataflowcb_2(bind)
bind[3].inject{|u,v|u.seqjoin(v)}
end
def first_ClasSwitch_Dataflowcb_20(bind)
ClasLattice.top+ClasLattice.empty
end
def first_ClasSwitch_Dataflowcb_21(bind)
Act
end
def first_ClasSwitch_Dataflowcb_22(bind)
ClasLattice[bind[28]]
end
def first_ClasSwitch_Dataflowcb_23(bind)
ClasLattice.top
end
def first_ClasSwitch_Dataflowcb_24(bind)
ClasLattice.top+ClasLattice.empty
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
ClasLattice.top+ClasLattice.empty
end
def first_ClasSwitch_Dataflowcb_7(bind)
(@src.first.is_a?(ClasLattice)) || FAIL
end
def first_ClasSwitch_Dataflowcb_8(bind)
@src.first
end
def first_ClasSwitch_Dataflowcb_9(bind)
_append(bind[13],bind[14])
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

end



class Detect_Switch < Traverser_Clone2
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
		r=(first(p).ary & [e,:empty,:anything])!=[]
		puts first(p).ary.inspect
		puts [e,:empty,:anything].inspect
		puts r
		r
	end
end

class Detect_ClasSwitch < Traverser_Clone2
	def first(s)
		if !@switchdf
			@switchdf=ClasSwitch_Dataflow.new
			@switchdf.parse(:root,[])
		end
		r=@switchdf.analyze(s)
		return ClasLattice.top if r.ary.include?(:empty)
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



class Detect_Switch < Traverser_Clone2
def self.switchcb_Detect_Switch5(e)
return 0 if e<=Grammar
return 1 if e<=Object
return 2
end
@@switchhashDetect_Switch5=Hash.new{|h,k| h[k]=switchcb_Detect_Switch5(k)}
def switchcbDetect_Switch5(e)
@@switchhashDetect_Switch5[e.class]
end
def self.switchcb_Detect_Switch6(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDetect_Switch6=Hash.new{|h,k| h[k]=switchcb_Detect_Switch6(k)}
def switchcbDetect_Switch6(e)
@@switchhashDetect_Switch6[e.class]
end
def clas_Detect_Switchcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Detect_Switchcb_1(bind)
(false) || FAIL
end
def itrans_Detect_Switchcb_1(bind)
@src.rules
end
def itrans_Detect_Switchcb_2(bind)
bind[2]=[bind[2]]
end
def itrans_Detect_Switchcb_3(bind)
Rule
end
def itrans_Detect_Switchcb_4(bind)
_append(bind[4],bind[7])
end
def itrans_Detect_Switchcb_5(bind)
@src.rules=bind[8]
end
def itrans_Detect_Switchcb_6(bind)
@src
end
def itrans_Detect_Switchcb_7(bind)
_append(bind[0],bind[10])
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
def traverse_item_Detect_Switchcb_3(bind)
@changed=true
end
def traverse_item_Detect_Switchcb_4(bind)
@changed=true
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
bind[1]=bind[1].ary.map{|bind[3]|  [:anything,:empty].include?(bind[3]) ? :default : bind[3]}.uniq
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


class Detect_ClasSwitch < Traverser_Clone2
def self.switchcb_Detect_ClasSwitch7(e)
return 0 if e<=Seq
return 1 if e<=Apply
return 2 if e<=Bind
return 3 if e<=Object
return 4
end
@@switchhashDetect_ClasSwitch7=Hash.new{|h,k| h[k]=switchcb_Detect_ClasSwitch7(k)}
def switchcbDetect_ClasSwitch7(e)
@@switchhashDetect_ClasSwitch7[e.class]
end
def self.switchcb_Detect_ClasSwitch8(e)
return 0 if e<=Grammar
return 1 if e<=Object
return 2
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
def itrans_Detect_ClasSwitchcb_1(bind)
@name=@src.name
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
Bind.create( {:expr=>bind[16],:name=>bind[11] })
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
def traverse_item_Detect_ClasSwitchcb_3(bind)
@changed=true
end
def traverse_item_Detect_ClasSwitchcb_4(bind)
@changed=true
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
bind[2]=bind[2].group_by{|a,b| b.ary}.map{|y,v| [v.map{|k,val| k}.sort,v[0][1]]}.sort
end
def visit_Detect_ClasSwitchcb_9(bind)
c=classswitch(bind[1]);s=Switch[{:act=>c[1],:first=>bind[4],:defs=>c[0],:ary=>bind[2]}];puts s.inspect;s
end

end



def detect_switch_compiled_by
'f976c22243acea7d546399d311d9bd77'
end
def detect_switch_source_hash
'98e0f67be195df5c2d50af4fffceb982'
end
def testversiondetect_switch(r)
 raise "invalid version" if r!=detect_switch_version
end
def detect_switch_version
'be3dbc2dc9aa143589d0a1a6fa106961'
end
  require 'compiled/detect_switch_c'
