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
	def self.default
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
	def inspect
		self.class.to_s+ary.inspect
	end
end

class CharLattice < FirstLattice
	def self.[](*ary)
		c=CharLattice.new
		c.ary=ary.uniq
		c
	end
	def self.top
		CharLattice[[0,255]]
	end
	def self.default
		top|empty
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
		((normalize.ary-[Empty])+[[256,256]]).each{|beg,en|
			nary<<[first,beg-1] if first<=beg-1
			first=en+1
		}
		CharLattice[*nary]
	end
	def &(a)
		r= ~(~self | ~a)
		r
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
		[Empty,Anything,"default"].each{|s|
			special<<s if ary.include?(s)
			ary.delete(s)
		}
		if ary.size>0
			first,last=*ary.sort[0]
			(ary.sort+[[257,257]]).each{|beg,en|
				if beg<=last+1
					last=[last,en].max
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
    ClasLattice[Object]
  end
	def self.default
		top|empty
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

	def empty?(el)
		@vals[el].ary.include?(Empty)
	end
end
class Sizes_Dataflow < First_Dataflow
	def lattice
		SizesLattice
	end
	def empty?(el)
		true
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
  def empty?(s)
    b=($sizedf.analyze(s).size==0)
		b
  end
end

class ClasSwitch_Dataflow < First_Dataflow
	def lattice
		ClasLattice
	end
  def empty?(s)
    $sizedf.analyze(s).size==0
  end
end
class First_Dataflow < Amethyst
def self.switchcb_First_Dataflow2(e)
return 0 if e<=Act
return 1 if e<=Bind
return 2 if e<=CAct
return 3 if e<=Cut
return 4 if e<=Local
return 5 if e<=Many
return 6 if e<=Or
return 7 if e<=Result
return 8 if e<=Seq
return 9 if e<=Stop
return 10 if e<=Switch
return 11 if e<=Object
end
@@switchhashFirst_Dataflow2=Hash.new{|h,k| h[k]=switchcb_First_Dataflow2(k)}
def switchcbFirst_Dataflow2(e)
@@switchhashFirst_Dataflow2[e.class]
end
def self.switchcb_First_Dataflow1(e)
return 0 if e<=Act
return 1 if e<=CAct
return 2 if e<=Cut
return 3 if e<=Local
return 4 if e<=Result
return 5 if e<=Stop
return 6 if e<=Object
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
lattice.empty
end
def first_First_Dataflowcb_10(bind)
_append(bind[18],bind[19])
end
def first_First_Dataflowcb_11(bind)
bind[23]=[bind[23]]
end
def first_First_Dataflowcb_12(bind)
bind[15].seqjoin(bind[24])
end
def first_First_Dataflowcb_13(bind)
empty?(bind[22])
end
def first_First_Dataflowcb_2(bind)
lattice.default
end
def first_First_Dataflowcb_3(bind)
(@src.first.is_a?(lattice)) || FAIL
end
def first_First_Dataflowcb_4(bind)
@src.first
end
def first_First_Dataflowcb_5(bind)
_append(bind[6],bind[7])
end
def first_First_Dataflowcb_6(bind)
bind[8].inject(:|)
end
def first_First_Dataflowcb_7(bind)
@src.expr
end
def first_First_Dataflowcb_8(bind)
bind[11]=[bind[11]]
end
def first_First_Dataflowcb_9(bind)
bind[15]|lattice.empty
end
def value_First_Dataflowcb_1(bind)
depends(bind[0]); @vals[bind[0]]
end

end
  			

class Sizes_Dataflow < First_Dataflow
def self.switchcb_Sizes_Dataflow4(e)
return 0 if e<=Apply
return 1 if e<=Object
end
@@switchhashSizes_Dataflow4=Hash.new{|h,k| h[k]=switchcb_Sizes_Dataflow4(k)}
def switchcbSizes_Dataflow4(e)
@@switchhashSizes_Dataflow4[e.class]
end
def self.switchcb_Sizes_Dataflow3(e)
return 0 if e<=CAct
return 1 if e<=Object
end
@@switchhashSizes_Dataflow3=Hash.new{|h,k| h[k]=switchcb_Sizes_Dataflow3(k)}
def switchcbSizes_Dataflow3(e)
@@switchhashSizes_Dataflow3[e.class]
end
def self.switchcb_Sizes_Dataflow6(e)
return 0 if e<=Act
return 1 if e<=Bind
return 2 if e<=CAct
return 3 if e<=Cut
return 4 if e<=Local
return 5 if e<=Many
return 6 if e<=Or
return 7 if e<=Result
return 8 if e<=Seq
return 9 if e<=Stop
return 10 if e<=Switch
return 11 if e<=Object
end
@@switchhashSizes_Dataflow6=Hash.new{|h,k| h[k]=switchcb_Sizes_Dataflow6(k)}
def switchcbSizes_Dataflow6(e)
@@switchhashSizes_Dataflow6[e.class]
end
def self.switchcb_Sizes_Dataflow5(e)
return 0 if e<=Act
return 1 if e<=CAct
return 2 if e<=Cut
return 3 if e<=Local
return 4 if e<=Result
return 5 if e<=Stop
return 6 if e<=Object
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
lattice.empty
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_10(bind)
_append(bind[18],bind[19])
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_11(bind)
bind[23]=[bind[23]]
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_12(bind)
bind[15].seqjoin(bind[24])
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_13(bind)
empty?(bind[22])
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_2(bind)
lattice.default
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_3(bind)
(@src.first.is_a?(lattice)) || FAIL
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_4(bind)
@src.first
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_5(bind)
_append(bind[6],bind[7])
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_6(bind)
bind[8].inject(:|)
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_7(bind)
@src.expr
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_8(bind)
bind[11]=[bind[11]]
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_9(bind)
bind[15]|lattice.empty
end
def first_Sizes_Dataflowcb_1(bind)
lattice[bind[5].size]
end
def first_Sizes_Dataflowcb_2(bind)
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
return 0 if e<=Act
return 1 if e<=Bind
return 2 if e<=CAct
return 3 if e<=Cut
return 4 if e<=Local
return 5 if e<=Many
return 6 if e<=Or
return 7 if e<=Result
return 8 if e<=Seq
return 9 if e<=Stop
return 10 if e<=Switch
return 11 if e<=Object
end
@@switchhashSwitch_Dataflow8=Hash.new{|h,k| h[k]=switchcb_Switch_Dataflow8(k)}
def switchcbSwitch_Dataflow8(e)
@@switchhashSwitch_Dataflow8[e.class]
end
def self.switchcb_Switch_Dataflow7(e)
return 0 if e<=Act
return 1 if e<=CAct
return 2 if e<=Cut
return 3 if e<=Local
return 4 if e<=Result
return 5 if e<=Stop
return 6 if e<=Object
end
@@switchhashSwitch_Dataflow7=Hash.new{|h,k| h[k]=switchcb_Switch_Dataflow7(k)}
def switchcbSwitch_Dataflow7(e)
@@switchhashSwitch_Dataflow7[e.class]
end
def self.switchcb_Switch_Dataflow10(e)
return 0 if e<=Apply
return 1 if e<=Object
end
@@switchhashSwitch_Dataflow10=Hash.new{|h,k| h[k]=switchcb_Switch_Dataflow10(k)}
def switchcbSwitch_Dataflow10(e)
@@switchhashSwitch_Dataflow10[e.class]
end
def self.switchcb_Switch_Dataflow9(e)
return 0 if e<=Act
return 1 if e<=CAct
return 2 if e<=Object
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
lattice.empty
end
def first_Switch_Dataflow_Switch_Dataflowcb_10(bind)
_append(bind[18],bind[19])
end
def first_Switch_Dataflow_Switch_Dataflowcb_11(bind)
bind[23]=[bind[23]]
end
def first_Switch_Dataflow_Switch_Dataflowcb_12(bind)
bind[15].seqjoin(bind[24])
end
def first_Switch_Dataflow_Switch_Dataflowcb_13(bind)
empty?(bind[22])
end
def first_Switch_Dataflow_Switch_Dataflowcb_2(bind)
lattice.default
end
def first_Switch_Dataflow_Switch_Dataflowcb_3(bind)
(@src.first.is_a?(lattice)) || FAIL
end
def first_Switch_Dataflow_Switch_Dataflowcb_4(bind)
@src.first
end
def first_Switch_Dataflow_Switch_Dataflowcb_5(bind)
_append(bind[6],bind[7])
end
def first_Switch_Dataflow_Switch_Dataflowcb_6(bind)
bind[8].inject(:|)
end
def first_Switch_Dataflow_Switch_Dataflowcb_7(bind)
@src.expr
end
def first_Switch_Dataflow_Switch_Dataflowcb_8(bind)
bind[11]=[bind[11]]
end
def first_Switch_Dataflow_Switch_Dataflowcb_9(bind)
bind[15]|lattice.empty
end
def first_Switch_Dataflowcb_1(bind)
firstchar(bind[5])
end
def first_Switch_Dataflowcb_2(bind)
regchar(bind[5])
end
def first_Switch_Dataflowcb_3(bind)
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
return 0 if e<=Act
return 1 if e<=Bind
return 2 if e<=CAct
return 3 if e<=Cut
return 4 if e<=Local
return 5 if e<=Many
return 6 if e<=Or
return 7 if e<=Result
return 8 if e<=Seq
return 9 if e<=Stop
return 10 if e<=Switch
return 11 if e<=Object
end
@@switchhashClasSwitch_Dataflow12=Hash.new{|h,k| h[k]=switchcb_ClasSwitch_Dataflow12(k)}
def switchcbClasSwitch_Dataflow12(e)
@@switchhashClasSwitch_Dataflow12[e.class]
end
def self.switchcb_ClasSwitch_Dataflow11(e)
return 0 if e<=Act
return 1 if e<=CAct
return 2 if e<=Cut
return 3 if e<=Local
return 4 if e<=Result
return 5 if e<=Stop
return 6 if e<=Object
end
@@switchhashClasSwitch_Dataflow11=Hash.new{|h,k| h[k]=switchcb_ClasSwitch_Dataflow11(k)}
def switchcbClasSwitch_Dataflow11(e)
@@switchhashClasSwitch_Dataflow11[e.class]
end
def self.switchcb_ClasSwitch_Dataflow13(e)
return 0 if e<=Apply
return 1 if e<=Object
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
lattice.empty
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_10(bind)
_append(bind[18],bind[19])
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_11(bind)
bind[23]=[bind[23]]
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_12(bind)
bind[15].seqjoin(bind[24])
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_13(bind)
empty?(bind[22])
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_2(bind)
lattice.default
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_3(bind)
(@src.first.is_a?(lattice)) || FAIL
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_4(bind)
@src.first
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_5(bind)
_append(bind[6],bind[7])
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_6(bind)
bind[8].inject(:|)
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_7(bind)
@src.expr
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_8(bind)
bind[11]=[bind[11]]
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_9(bind)
bind[15]|lattice.empty
end
def first_ClasSwitch_Dataflowcb_1(bind)
lattice[bind[3]]
end
def first_ClasSwitch_Dataflowcb_2(bind)
($rules[bind[7]]) || FAIL
end
def first_ClasSwitch_Dataflowcb_3(bind)
$rules[bind[7]].body
end
def first_ClasSwitch_Dataflowcb_4(bind)
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
	def initialize
		$sizedf=Sizes_Dataflow.new
		$sizedf.parse(:root,[])
	end
	def empty?(s)	
		$sizedf.analyze(s).size==0
	end
	def first(s)
		if !@switchdf
			@switchdf=Switch_Dataflow.new
			@switchdf.parse(:root,[])
		end
		r=@switchdf.analyze(s)
		r|= CharLattice.empty if empty?(s)
		r
	end
	def intersects(ar,el)
		return true if (ar.ary & [Empty,Anything]) != []
		return true if (el.ary & [Empty,Anything]) != []
		return true if el.ary.include?("default") || ar.ary.include?("default")
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
		 #par,chld=eval(par.to_s),eval(chld.to_s)
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
		rb+="end\n"
		rb+="@@switchhash#{@name}#{@no}=Hash.new{|h,k| h[k]=switchcb_#{@name}#{@no}(k)}\n"
		rb+="def switchcb#{@name}#{@no}(e)\n"
		rb+="@@switchhash#{@name}#{@no}[e.class]\n"
		rb+="end"
		[rb, "FIX2INT(CALL(switchcb#{@name}#{@no},1,ame_curobj(self)))"]
	end
	def topsort(a)
		a=a.uniq.sort_by{|a| a.to_s}
		g=Oriented_Graph.new
		a.each{|u| a.each{|v| g.add(u,v) if child(v,u) || (!child(u,v)&& u.to_s>v.to_s)}}
	 	g.topo_order
	end
end

class Detect_First < Traverser_Clone2
def self.switchcb_Detect_First14(e)
return 0 if e<=Grammar
return 1 if e<=Object
end
@@switchhashDetect_First14=Hash.new{|h,k| h[k]=switchcb_Detect_First14(k)}
def switchcbDetect_First14(e)
@@switchhashDetect_First14[e.class]
end
def self.switchcb_Detect_First15(e)
return 0 if e<=AmethystAST
return 1 if e<=Array
return 2 if e<=Object
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
_append(bind[4],bind[7])
end
def itrans_Detect_Firstcb_6(bind)
@src.rules=bind[8]
end
def itrans_Detect_Firstcb_7(bind)
@src
end
def itrans_Detect_Firstcb_8(bind)
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
bind[5]<<bind[6]
end

end

def unempty(s)
	s.ary.include?(Empty) ? CharLattice.top	: s
end


class Detect_Switch < Detect_First
def self.switchcb_Detect_Switch17(e)
return 0 if e<=Or
return 1 if e<=Seq
return 2 if e<=Switch
return 3 if e<=Object
end
@@switchhashDetect_Switch17=Hash.new{|h,k| h[k]=switchcb_Detect_Switch17(k)}
def switchcbDetect_Switch17(e)
@@switchhashDetect_Switch17[e.class]
end
def self.switchcb_Detect_Switch18(e)
return 0 if e<=Bind
return 1 if e<=Or
return 2 if e<=Seq
return 3 if e<=Object
end
@@switchhashDetect_Switch18=Hash.new{|h,k| h[k]=switchcb_Detect_Switch18(k)}
def switchcbDetect_Switch18(e)
@@switchhashDetect_Switch18[e.class]
end
def self.switchcb_Detect_Switch19(e)
return 0 if e<=AmethystAST
return 1 if e<=Array
return 2 if e<=Object
end
@@switchhashDetect_Switch19=Hash.new{|h,k| h[k]=switchcb_Detect_Switch19(k)}
def switchcbDetect_Switch19(e)
@@switchhashDetect_Switch19[e.class]
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
_append(bind[5],bind[7])
end
def predicate_Detect_Switchcb_6(bind)
Or[*bind[8]]
end
def predicate_Detect_Switchcb_7(bind)
_append(bind[13],bind[14])
end
def predicate_Detect_Switchcb_8(bind)
Seq[*([bind[12]]+bind[15])]
end
def predicate_Detect_Switchcb_9(bind)
nary=bind[1].ary
                                 nary=nary.select{|o,v| intersects(o,bind[0])} if bind[1].first.is_a?(CharLattice)
                                 nary=nary.map{|o,v| [o,predicate(bind[0],v)]}.select{|o,v| v!=Placeholder}
                                 Switch[{:act=>bind[1].act,:first=>bind[1].first,:defs=>bind[1].defs,:ary=>nary}]
                              
end
def split_Detect_Switchcb_1(bind)
@src.expr
end
def split_Detect_Switchcb_2(bind)
bind[1]=[bind[1]]
end
def split_Detect_Switchcb_3(bind)
@cases=@cases.map{|c| [c&bind[6],c&~bind[6]]}.flatten.select{|x| x.ary.size>0}.uniq_by{|x|x.ary.inspect} 
end
def split_Detect_Switchcb_4(bind)
_append(bind[8],bind[9])
end
def split_Detect_Switchcb_5(bind)
_append(bind[12],bind[13])
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
bind[5]<<bind[6]
end
def visit_Detect_Switchcb_1(bind)
CharLattice[]
end
def visit_Detect_Switchcb_10(bind)
@cases=[bind[6]]
end
def visit_Detect_Switchcb_11(bind)
bind[8]=[bind[8]]
end
def visit_Detect_Switchcb_12(bind)
@cases.each{|ee|bind[4]=ee
			bind[2]<<[bind[4],predicate(bind[4],bind[7])]
		}
end
def visit_Detect_Switchcb_13(bind)
bind[2]=bind[2].group_by{|a,b| b}.map{|y,v| [v.map{|k,val| k}.inject(:|),v[0][1]]}.sort_by{|bind[4]| bind[4].inspect}
end
def visit_Detect_Switchcb_14(bind)
bind[2]<<[CharLattice["default"],Apply["fails"]] unless bind[1].include?("default")
end
def visit_Detect_Switchcb_15(bind)
(bind[2].size>1) || FAIL
end
def visit_Detect_Switchcb_16(bind)
s=Switch[{:act=>"*ame_curstr(self)",:first=>bind[6],:ary=>bind[2]}];puts s.inspect;s
end
def visit_Detect_Switchcb_2(bind)
(first(bind[4])) || FAIL
end
def visit_Detect_Switchcb_3(bind)
_append(bind[3],bind[5])
end
def visit_Detect_Switchcb_4(bind)
bind[1]|=first(bind[4])
end
def visit_Detect_Switchcb_5(bind)
bind[1]=bind[1].ary.map{|bind[4]|  [Anything,Empty].include?(bind[4]) ? "default" : bind[4]}.uniq
end
def visit_Detect_Switchcb_6(bind)
(bind[1].size>1) || FAIL
end
def visit_Detect_Switchcb_7(bind)
Or[*bind[3]]
end
def visit_Detect_Switchcb_8(bind)
(bind[7].is_a?(Or)) || FAIL
end
def visit_Detect_Switchcb_9(bind)
bind[6]=unempty(bind[6])
end

end


class Detect_ClasSwitch < Detect_First
def self.switchcb_Detect_ClasSwitch21(e)
return 0 if e<=Apply
return 1 if e<=Bind
return 2 if e<=Or
return 3 if e<=Seq
return 4 if e<=Object
end
@@switchhashDetect_ClasSwitch21=Hash.new{|h,k| h[k]=switchcb_Detect_ClasSwitch21(k)}
def switchcbDetect_ClasSwitch21(e)
@@switchhashDetect_ClasSwitch21[e.class]
end
def self.switchcb_Detect_ClasSwitch22(e)
return 0 if e<=AmethystAST
return 1 if e<=Array
return 2 if e<=Object
end
@@switchhashDetect_ClasSwitch22=Hash.new{|h,k| h[k]=switchcb_Detect_ClasSwitch22(k)}
def switchcbDetect_ClasSwitch22(e)
@@switchhashDetect_ClasSwitch22[e.class]
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
_Bind(bind[6],bind[12])
end
def predicate_Detect_ClasSwitchcb_11(bind)
_append(bind[15],bind[17])
end
def predicate_Detect_ClasSwitchcb_12(bind)
Or[*bind[18]]
end
def predicate_Detect_ClasSwitchcb_13(bind)
_append(bind[22],bind[23])
end
def predicate_Detect_ClasSwitchcb_14(bind)
Seq[*([bind[21]]+bind[24])]
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
(bind[6]=="clas") || FAIL
end
def predicate_Detect_ClasSwitchcb_6(bind)
(child(bind[0][bind[1]],bind[8])&&bind[0][bind[1]]==bind[8]) || FAIL
end
def predicate_Detect_ClasSwitchcb_7(bind)
Apply["anything"]
end
def predicate_Detect_ClasSwitchcb_8(bind)
@src.name
end
def predicate_Detect_ClasSwitchcb_9(bind)
predicate(bind[0],bind[1],@src.expr)
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
bind[5]<<bind[6]
end
def visit_Detect_ClasSwitchcb_1(bind)
ClasLattice.bottom
end
def visit_Detect_ClasSwitchcb_10(bind)
bind[2]=bind[2].group_by{|a,b| b}.map{|y,v| [v.map{|k,val| k}.sort_by{|bind[4]| bind[4].inspect},v[0][1]]}.sort_by{|bind[4]| bind[4].inspect}
end
def visit_Detect_ClasSwitchcb_11(bind)
bind[2]=bind[2].map{|o,v| [ClasLattice[*o],v]}
end
def visit_Detect_ClasSwitchcb_12(bind)
c=classswitch(bind[1]);Switch[{:act=>c[1],:first=>bind[6],:defs=>c[0],:ary=>bind[2]}]
end
def visit_Detect_ClasSwitchcb_2(bind)
(first(bind[4])) || FAIL
end
def visit_Detect_ClasSwitchcb_3(bind)
_append(bind[3],bind[5])
end
def visit_Detect_ClasSwitchcb_4(bind)
bind[1]|=first(bind[4])
end
def visit_Detect_ClasSwitchcb_5(bind)
bind[1]=topsort(bind[1].ary+[Object])
end
def visit_Detect_ClasSwitchcb_6(bind)
(bind[1].size>1) || FAIL
end
def visit_Detect_ClasSwitchcb_7(bind)
Or[*bind[3]]
end
def visit_Detect_ClasSwitchcb_8(bind)
bind[1].each_index{|i|
      	bind[2]<<[i,predicate(bind[1],i,bind[7])]
		}
end
def visit_Detect_ClasSwitchcb_9(bind)
bind[2]=bind[2].map{|o,v| v==Placeholder ? [o,Apply["fails"]] : [o,v]}
end

end



def detect_switch_compiled_by
'edf68d5f99b62c2d327a3e0ed33fea6c'
end
def detect_switch_source_hash
'398424dd1ece392b82fa410d6a8c9271'
end
def testversiondetect_switch(r)
 raise "invalid version" if r!=detect_switch_version
end
def detect_switch_version
'271c934c1a18aae7a43b3dd3b34fddb4'
end
  require 'compiled/detect_switch_c'
