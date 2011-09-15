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

class SizesLattice
	attr_accessor :size
	def self.bottom
		self[0]
	end
	def self.empty
		self[0]
	end
	def self.top
		self[1.0/0.0]
	end
	def self.[](a)
		l=self.new
		l.size=a
		l
	end
	def |(a)
		SizesLattice[ [size,a.size].min ]
	end
	def seqjoin(a)
		SizesLattice[ size+a.size ]
	end
end

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
	def cchar(c)
		return "UC('\\'')" if c==?'
		"UC('#{c.chr.inspect[1...-1]}')"
	end
  def cases(first)
    ary.map{|c| c=="default" ? "default:;" : "case #{cchar(c[0])} ... #{cchar(c[1])}:;"}*""
  end
	def ~
		first=0
		nary=[]
		(normalize.ary+[[256,256]]).each{|beg,en|
			nary<<[first,beg-1] if first<=beg-1
			first=en+1
		}
		CharLattice[*nary]
	end
	def &(a)
		~(~self | ~a)
	end
	def |(a)
		c=CharLattice.new
		c.ary=ary+a.ary
		c.normalize
	end
	def normalize
		nary=[]
		special=[]
		ary=@ary
		[Empty,Anything].each{|s|
			special<<s if ary.include?(s)
			ary.delete(s)
		}
		if ary.size>0
			first,last=*ary.sort[0]
			(ary.sort+[[257,257]]).each{|beg,en|
				if beg<=last+1
					last=en
				else
					nary<<[first,last]
					first,last=beg,en
				end
			}
		end
		@ary=nary+special
		self
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
    @vals=Hash.new(lattice.bottom)
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
class Sizes_Dataflow < First_Dataflow
	def lattice
		SizesLattice
	end
end

class Switch_Dataflow < First_Dataflow
  def firstchar(s)
	  return lattice.empty if s==""
    s=s[0]
		lattice[[s,s]]
  end
	def regchar(s)
		return ~regchar("/["+s[3...-2]+"]/") if s[2]==?^ 
		chars=[]
		s=s[2...-2]
		i=0
		while i<s.size
			c=s[i]
			if s[i+1]==?-
				chars<<[c,s[i+2]]
				i+=3
			elsif c==?\\
				raise "stray \\" if i==s.size-1
				c=eval('"'+s[i,2]+'"')[0]
				i+=2
			else
				chars<<[c,c]
				i+=1
			end
		end
		lattice[*chars]
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
  			

class Sizes_Dataflow < First_Dataflow
def self.switchcb_Sizes_Dataflow4(e)
return 0 if e<=Apply
return 1 if e<=Object
return 2
end
@@switchhashSizes_Dataflow4=Hash.new{|h,k| h[k]=switchcb_Sizes_Dataflow4(k)}
def switchcbSizes_Dataflow4(e)
@@switchhashSizes_Dataflow4[e.class]
end
def self.switchcb_Sizes_Dataflow3(e)
return 0 if e<=CAct
return 1 if e<=Object
return 2
end
@@switchhashSizes_Dataflow3=Hash.new{|h,k| h[k]=switchcb_Sizes_Dataflow3(k)}
def switchcbSizes_Dataflow3(e)
@@switchhashSizes_Dataflow3[e.class]
end
def self.switchcb_Sizes_Dataflow6(e)
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
@@switchhashSizes_Dataflow6=Hash.new{|h,k| h[k]=switchcb_Sizes_Dataflow6(k)}
def switchcbSizes_Dataflow6(e)
@@switchhashSizes_Dataflow6[e.class]
end
def self.switchcb_Sizes_Dataflow5(e)
return 0 if e<=Act
return 1 if e<=CAct
return 2 if e<=Object
return 3
end
@@switchhashSizes_Dataflow5=Hash.new{|h,k| h[k]=switchcb_Sizes_Dataflow5(k)}
def switchcbSizes_Dataflow5(e)
@@switchhashSizes_Dataflow5[e.class]
end
def clas_Sizes_Dataflowcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Sizes_Dataflowcb_1(bind)
(false) || FAIL
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_1(bind)
(@src.first.is_a?(lattice)) || FAIL
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_10(bind)
@src.expr
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_11(bind)
bind[20]=[bind[20]]
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_12(bind)
lattice.empty
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_2(bind)
@src.first
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_3(bind)
_append(bind[4],bind[5])
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_4(bind)
bind[6].inject(:|)
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_5(bind)
lattice.top|lattice.empty
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_6(bind)
_append(bind[9],bind[10])
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_7(bind)
bind[6].inject{|u,v|u.seqjoin(v)}
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_8(bind)
bind[13]|lattice.empty
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_9(bind)
_append(bind[16],bind[17])
end
def first_Sizes_Dataflowcb_1(bind)
CAct
end
def first_Sizes_Dataflowcb_2(bind)
lattice[bind[5].size]
end
def first_Sizes_Dataflowcb_3(bind)
lattice[1]
end
def getvalue_Sizes_Dataflowcb_1(bind)
@vis=bind[0]; bind[0]
end
def getvalue_Sizes_Dataflowcb_2(bind)
bind[1]=[bind[1]]
end
def regch_Sizes_Dataflowcb_1(bind)
(bind[0].is_a? String ) || FAIL
end
def regch_Sizes_Dataflowcb_2(bind)
(bind[3].match(bind[2])) || FAIL
end
def spaces_Sizes_Dataflowcb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_Sizes_Dataflowcb_2(bind)
_append(bind[0],bind[2])
end

end


class Switch_Dataflow < First_Dataflow
def self.switchcb_Switch_Dataflow8(e)
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
@@switchhashSwitch_Dataflow8=Hash.new{|h,k| h[k]=switchcb_Switch_Dataflow8(k)}
def switchcbSwitch_Dataflow8(e)
@@switchhashSwitch_Dataflow8[e.class]
end
def self.switchcb_Switch_Dataflow7(e)
return 0 if e<=Act
return 1 if e<=CAct
return 2 if e<=Object
return 3
end
@@switchhashSwitch_Dataflow7=Hash.new{|h,k| h[k]=switchcb_Switch_Dataflow7(k)}
def switchcbSwitch_Dataflow7(e)
@@switchhashSwitch_Dataflow7[e.class]
end
def self.switchcb_Switch_Dataflow10(e)
return 0 if e<=Apply
return 1 if e<=Object
return 2
end
@@switchhashSwitch_Dataflow10=Hash.new{|h,k| h[k]=switchcb_Switch_Dataflow10(k)}
def switchcbSwitch_Dataflow10(e)
@@switchhashSwitch_Dataflow10[e.class]
end
def self.switchcb_Switch_Dataflow9(e)
return 0 if e<=CAct
return 1 if e<=Act
return 2 if e<=Object
return 3
end
@@switchhashSwitch_Dataflow9=Hash.new{|h,k| h[k]=switchcb_Switch_Dataflow9(k)}
def switchcbSwitch_Dataflow9(e)
@@switchhashSwitch_Dataflow9[e.class]
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
firstchar(bind[5])
end
def first_Switch_Dataflowcb_3(bind)
Act
end
def first_Switch_Dataflowcb_4(bind)
regchar(bind[5])
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
def self.switchcb_ClasSwitch_Dataflow12(e)
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
@@switchhashClasSwitch_Dataflow12=Hash.new{|h,k| h[k]=switchcb_ClasSwitch_Dataflow12(k)}
def switchcbClasSwitch_Dataflow12(e)
@@switchhashClasSwitch_Dataflow12[e.class]
end
def self.switchcb_ClasSwitch_Dataflow11(e)
return 0 if e<=Act
return 1 if e<=CAct
return 2 if e<=Object
return 3
end
@@switchhashClasSwitch_Dataflow11=Hash.new{|h,k| h[k]=switchcb_ClasSwitch_Dataflow11(k)}
def switchcbClasSwitch_Dataflow11(e)
@@switchhashClasSwitch_Dataflow11[e.class]
end
def self.switchcb_ClasSwitch_Dataflow13(e)
return 0 if e<=Apply
return 1 if e<=Object
return 2
end
@@switchhashClasSwitch_Dataflow13=Hash.new{|h,k| h[k]=switchcb_ClasSwitch_Dataflow13(k)}
def switchcbClasSwitch_Dataflow13(e)
@@switchhashClasSwitch_Dataflow13[e.class]
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
	def empty?(s)	
		if !@sizedf
			@sizedf=Sizes_Dataflow.new
			@sizedf.parse(:root,[])
		end
		@sizedf.analyze(s)==0
	end
	def first(s)
		if !@switchdf
			@switchdf=Switch_Dataflow.new
			@switchdf.parse(:root,[])
		end
		r=@switchdf.analyze(s)
		r+= CharLattice.empty if empty?(s)
		r
	end
	def intersects(ar,el)
		return true if (ar.ary & [Empty,Anything]) != []
		return true if (el.ary & [Empty,Anything]) != []
		return (ar & el).ary !=[]
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
def self.switchcb_Detect_First14(e)
return 0 if e<=Grammar
return 1 if e<=Object
return 2
end
@@switchhashDetect_First14=Hash.new{|h,k| h[k]=switchcb_Detect_First14(k)}
def switchcbDetect_First14(e)
@@switchhashDetect_First14[e.class]
end
def self.switchcb_Detect_First15(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDetect_First15=Hash.new{|h,k| h[k]=switchcb_Detect_First15(k)}
def switchcbDetect_First15(e)
@@switchhashDetect_First15[e.class]
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
def self.switchcb_Detect_Switch17(e)
return 0 if e<=Seq
return 1 if e<=Or
return 2 if e<=Switch
return 3 if e<=Object
return 4
end
@@switchhashDetect_Switch17=Hash.new{|h,k| h[k]=switchcb_Detect_Switch17(k)}
def switchcbDetect_Switch17(e)
@@switchhashDetect_Switch17[e.class]
end
def self.switchcb_Detect_Switch18(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDetect_Switch18=Hash.new{|h,k| h[k]=switchcb_Detect_Switch18(k)}
def switchcbDetect_Switch18(e)
@@switchhashDetect_Switch18[e.class]
end
def clas_Detect_Switchcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Detect_Switchcb_1(bind)
(false) || FAIL
end
def predicate_Detect_Switchcb_1(bind)
(bind[0].ary[0]=="default") || FAIL
end
def predicate_Detect_Switchcb_2(bind)
(!intersects(first(bind[1]),bind[0])) || FAIL
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
                                 nary=nary.select{|o,v| intersects(o,bind[0])} if bind[1].first.is_a?(CharLattice)
                                 nary=nary.map{|o,v| [o,predicate(bind[0],v)]}.select{|o,v| v!=Placeholder}
                                 Switch[{:act=>bind[1].act,:first=>bind[1].first,:defs=>bind[1].defs,:ary=>nary}]
                              
end
def regch_Detect_Switchcb_1(bind)
(bind[0].is_a? String ) || FAIL
end
def regch_Detect_Switchcb_2(bind)
(bind[3].match(bind[2])) || FAIL
end
def spaces_Detect_Switchcb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_Detect_Switchcb_2(bind)
_append(bind[0],bind[2])
end
def split_Detect_Switchcb_1(bind)
bind[1]=[bind[1]]
end
def split_Detect_Switchcb_2(bind)
Apply
end
def split_Detect_Switchcb_3(bind)
_append(bind[4],bind[5])
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
			bind[2]<<[bind[4],predicate(CharLattice[bind[4]],bind[7])]
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
def self.switchcb_Detect_ClasSwitch20(e)
return 0 if e<=Seq
return 1 if e<=Or
return 2 if e<=Apply
return 3 if e<=Bind
return 4 if e<=Object
return 5
end
@@switchhashDetect_ClasSwitch20=Hash.new{|h,k| h[k]=switchcb_Detect_ClasSwitch20(k)}
def switchcbDetect_ClasSwitch20(e)
@@switchhashDetect_ClasSwitch20[e.class]
end
def self.switchcb_Detect_ClasSwitch21(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDetect_ClasSwitch21=Hash.new{|h,k| h[k]=switchcb_Detect_ClasSwitch21(k)}
def switchcbDetect_ClasSwitch21(e)
@@switchhashDetect_ClasSwitch21[e.class]
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
'4e3f6003c00b11bbacb368d16f291635'
end
def detect_switch_source_hash
'91a892937c1c2e072c71b87d22bc3b80'
end
def testversiondetect_switch(r)
 raise "invalid version" if r!=detect_switch_version
end
def detect_switch_version
'b6f5249b3eb804d9aa7ae21c52222d78'
end
  require 'compiled/detect_switch_c'
