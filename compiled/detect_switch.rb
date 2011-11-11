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
$hash_SizesLattice={}
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
		return $hash_SizesLattice[a] if $hash_SizesLattice[a]
		l=self.new
		l.size=a
		$hash_SizesLattice[a]=l
	end
	alias_method :==,:equal?
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

	def cases(first)
		ary.map{|c| c=="default" ? "default:;" : "case #{c}:;"}*""
	end
	def inspect
		self.class.to_s+ary.inspect
	end
end

$hash_CharLattice={}
class CharLattice < FirstLattice
	def self.[](*ary)
		return $hash_CharLattice[ary] if $hash_CharLattice[ary]
		c=CharLattice.new
		c.ary=ary
		$hash_CharLattice[ary]=c
	end
	alias_method :==,:equal?
	def self.top
		CharLattice[[0,255]]
	end
	def self.default
		top|empty
	end
	def cchar(c)
		#return "UC('\\'')" if c==?'
		"UC(#{c.ord})"
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
		CharLattice[*(nary+special)]
	end
end

$hash_ClasLattice={}
class ClasLattice < FirstLattice
  attr_accessor :ary
  def self.[](*ary)
		ary=ary.uniq.sort_by{|a| a.inspect}
		return $hash_ClasLattice[ary] if $hash_ClasLattice[ary]
    c=ClasLattice.new
    c.ary=ary
    $hash_ClasLattice[ary]=c
  end
	alias_method :==,:equal?
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
    s=s[0].ord
		lattice[[s,s]]
  end
	def regchar(s)
		return ~regchar("/["+s[3...-2]+"]/") if s[2]==?^ 
		chars=[]
		s=s[2...-2]
		i=0
		while i<s.size
			c=s[i].ord
			if s[i+1]==?-
				chars<<[c,s[i+2].ord]
				i+=3
			elsif s[i]==?\\
				raise "stray \\" if i==s.size-1
				c=eval('"'+s[i,2]+'"')[0].ord
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

def first_First_Dataflowcb_1(bind)
lattice.empty
end
def first_First_Dataflowcb_10(bind)
bind[13].seqjoin(bind[22])
end
def first_First_Dataflowcb_11(bind)
empty?(bind[20])
end
def first_First_Dataflowcb_2(bind)
lattice.default
end
def first_First_Dataflowcb_3(bind)
(src.first.is_a?(lattice)) || FAIL
end
def first_First_Dataflowcb_4(bind)
src.first
end
def first_First_Dataflowcb_5(bind)
_append(bind[6],bind[7])
end
def first_First_Dataflowcb_6(bind)
bind[8].inject(:|)
end
def first_First_Dataflowcb_7(bind)
bind[13]|lattice.empty
end
def first_First_Dataflowcb_8(bind)
_append(bind[16],bind[17])
end
def first_First_Dataflowcb_9(bind)
bind[21]=[bind[21]]
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
  			

class Sizes_Dataflow < First_Dataflow

def first_Sizes_Dataflow_Sizes_Dataflowcb_1(bind)
lattice.empty
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_10(bind)
bind[13].seqjoin(bind[22])
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_11(bind)
empty?(bind[20])
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_2(bind)
lattice.default
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_3(bind)
(src.first.is_a?(lattice)) || FAIL
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_4(bind)
src.first
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_5(bind)
_append(bind[6],bind[7])
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_6(bind)
bind[8].inject(:|)
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_7(bind)
bind[13]|lattice.empty
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_8(bind)
_append(bind[16],bind[17])
end
def first_Sizes_Dataflow_Sizes_Dataflowcb_9(bind)
bind[21]=[bind[21]]
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

end


class Switch_Dataflow < First_Dataflow

def first_Switch_Dataflow_Switch_Dataflowcb_1(bind)
lattice.empty
end
def first_Switch_Dataflow_Switch_Dataflowcb_10(bind)
bind[13].seqjoin(bind[22])
end
def first_Switch_Dataflow_Switch_Dataflowcb_11(bind)
empty?(bind[20])
end
def first_Switch_Dataflow_Switch_Dataflowcb_2(bind)
lattice.default
end
def first_Switch_Dataflow_Switch_Dataflowcb_3(bind)
(src.first.is_a?(lattice)) || FAIL
end
def first_Switch_Dataflow_Switch_Dataflowcb_4(bind)
src.first
end
def first_Switch_Dataflow_Switch_Dataflowcb_5(bind)
_append(bind[6],bind[7])
end
def first_Switch_Dataflow_Switch_Dataflowcb_6(bind)
bind[8].inject(:|)
end
def first_Switch_Dataflow_Switch_Dataflowcb_7(bind)
bind[13]|lattice.empty
end
def first_Switch_Dataflow_Switch_Dataflowcb_8(bind)
_append(bind[16],bind[17])
end
def first_Switch_Dataflow_Switch_Dataflowcb_9(bind)
bind[21]=[bind[21]]
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

end


class ClasSwitch_Dataflow < First_Dataflow

def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_1(bind)
lattice.empty
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_10(bind)
bind[13].seqjoin(bind[22])
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_11(bind)
empty?(bind[20])
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_2(bind)
lattice.default
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_3(bind)
(src.first.is_a?(lattice)) || FAIL
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_4(bind)
src.first
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_5(bind)
_append(bind[6],bind[7])
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_6(bind)
bind[8].inject(:|)
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_7(bind)
bind[13]|lattice.empty
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_8(bind)
_append(bind[16],bind[17])
end
def first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_9(bind)
bind[21]=[bind[21]]
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
	def classswitch(ary,first,ary3)
		@no=(@no||0)+1
		#TODO perfect hash
		init="Hash.new{|h,k|\n"
		ary.each_with_index{|c,i| init<< "next h[k]=#{i} if k<=#{c}\n"}
		init+="}\n"
		Switch[{:header=>"VALUE switchhash#{@name}#{@no};",:init=>"switchhash#{@name}#{@no}=rb_eval_string(#{init.inspect});#{gc_mark_var("switchhash#{@name}#{@no}")}" ,:act=>"FIX2LONG(rb_hash_aref(switchhash#{@name}#{@no},rb_obj_class(ame_curobj(self))))",:first=>first,:ary=>ary3}]
	end
	def topsort(a)
		a=a.uniq.sort_by{|a| a.to_s}
		g=Oriented_Graph.new
		a.each{|u| a.each{|v| g.add(u,v) if child(v,u) || (!child(u,v)&& u.to_s>v.to_s)}}
	 	g.topo_order
	end
end

class Detect_First < Traverser_Clone2

def itrans_Detect_Firstcb_1(bind)
@name=src.name
end
def itrans_Detect_Firstcb_2(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def itrans_Detect_Firstcb_3(bind)
src.rules
end
def itrans_Detect_Firstcb_4(bind)
bind[2]=[bind[2]]
end
def itrans_Detect_Firstcb_5(bind)
_append(bind[4],bind[7])
end
def itrans_Detect_Firstcb_6(bind)
src.rules=bind[8]
end
def itrans_Detect_Firstcb_7(bind)
src
end
def itrans_Detect_Firstcb_8(bind)
_append(bind[0],bind[10])
end

end

def unempty(s)
	s.ary.include?(Empty) ? CharLattice.top	: s
end


class Detect_Switch < Detect_First

def itrans_Detect_Switchcb_1(bind)
@name=src.name
end
def itrans_Detect_Switchcb_2(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def itrans_Detect_Switchcb_3(bind)
src.rules
end
def itrans_Detect_Switchcb_4(bind)
bind[2]=[bind[2]]
end
def itrans_Detect_Switchcb_5(bind)
_append(bind[4],bind[7])
end
def itrans_Detect_Switchcb_6(bind)
src.rules=bind[8]
end
def itrans_Detect_Switchcb_7(bind)
_append(bind[0],bind[10])
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
@cases=@cases.map{|c| [c&bind[4],c&~bind[4]]}.flatten.select{|x| x.ary.size>0}.uniq_by{|x|x.ary.inspect} 
end
def split_Detect_Switchcb_2(bind)
_append(bind[6],bind[7])
end
def split_Detect_Switchcb_3(bind)
_append(bind[10],bind[11])
end
def traverse_Detect_Switchcb_1(bind)
@changed
end
def traverse_Detect_Switchcb_2(bind)
src
end
def traverse_Detect_Switchcb_3(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Detect_Switchcb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Detect_Switchcb_5(bind)
@changed=false
end
def traverse_Detect_Switchcb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def traverse_Detect_Switchcb_7(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
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
bind[2]=bind[2].group_by{|a,b| b}.map{|y,v| [v.map{|k,val| k}.inject(:|),v[0][1]]}.sort_by{|el| el.inspect}
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
bind[1]=bind[1].ary.map{|el|  [Anything,Empty].include?(el) ? "default" : el}.uniq
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

def itrans_Detect_ClasSwitchcb_1(bind)
@name=src.name
end
def itrans_Detect_ClasSwitchcb_2(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def itrans_Detect_ClasSwitchcb_3(bind)
src.rules
end
def itrans_Detect_ClasSwitchcb_4(bind)
bind[2]=[bind[2]]
end
def itrans_Detect_ClasSwitchcb_5(bind)
_append(bind[4],bind[7])
end
def itrans_Detect_ClasSwitchcb_6(bind)
src.rules=bind[8]
end
def itrans_Detect_ClasSwitchcb_7(bind)
_append(bind[0],bind[10])
end
def predicate_Detect_ClasSwitchcb_1(bind)
(bind[0][bind[1]]=="default") || FAIL
end
def predicate_Detect_ClasSwitchcb_10(bind)
_Bind(bind[6],bind[13])
end
def predicate_Detect_ClasSwitchcb_11(bind)
_append(bind[16],bind[18])
end
def predicate_Detect_ClasSwitchcb_12(bind)
Or[*bind[19]]
end
def predicate_Detect_ClasSwitchcb_13(bind)
_append(bind[23],bind[24])
end
def predicate_Detect_ClasSwitchcb_14(bind)
Seq[*([bind[22]]+bind[25])]
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
src.name
end
def predicate_Detect_ClasSwitchcb_9(bind)
predicate(bind[0],bind[1],bind[12])
end
def traverse_Detect_ClasSwitchcb_1(bind)
@changed
end
def traverse_Detect_ClasSwitchcb_2(bind)
src
end
def traverse_Detect_ClasSwitchcb_3(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Detect_ClasSwitchcb_4(bind)
@changed=false
end
def traverse_Detect_ClasSwitchcb_5(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def traverse_Detect_ClasSwitchcb_6(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
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
bind[2]=bind[2].group_by{|a,b| b}.map{|y,v| [v.map{|k,val| k}.sort_by{|el| el.inspect},v[0][1]]}.sort_by{|el| el.inspect}
end
def visit_Detect_ClasSwitchcb_11(bind)
bind[2]=bind[2].map{|o,v| [ClasLattice[*o],v]}
end
def visit_Detect_ClasSwitchcb_12(bind)
c=classswitch(bind[1],bind[6],bind[2])
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
'04bdd40be6d2210a519b9d7bc7674bc2'
end
def detect_switch_source_hash
'e5d66875e62b4dfc3d49fd083ce7889b'
end
def testversiondetect_switch(r)
 raise "invalid version" if r!=detect_switch_version
end
def detect_switch_version
'0eb6a7a9a75ef053a83c2d2283fd6966'
end
  require 'compiled/detect_switch_c'
