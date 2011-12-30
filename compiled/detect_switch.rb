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
    s=s[0].bytes.to_a[0]
		lattice[[s,s]]
  end
	def regchar(s)
		return ~regchar("/["+s[3...-2]+"]/") if s[2]==?^ 
		chars=[]
		s=s[2...-2]
		i=0
		while i<s.size
			c=s[i].bytes.to_a[0]
			if s[i+1]==?-
				chars<<[c,s[i+2].bytes.to_a[0]]
				i+=3
			elsif s[i]==?\\
				raise "stray \\" if i==s.size-1
				c=eval('"'+s[i,2]+'"')[0].bytes.to_a[0]
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

def First_Dataflow__append_lp__0bba(bind)
_append(bind[24],bind[25])
end
def First_Dataflow__append_lp__110a(bind)
_append(bind[29],bind[33])
end
def First_Dataflow__append_lp__b6c7(bind)
_append(bind[7],bind[8])
end
def First_Dataflow__append_lp__bd27(bind)
_append(bind[34],bind[35])
end
def First_Dataflow__append_lp__be78(bind)
_append(bind[11],bind[12])
end
def First_Dataflow__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def First_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def First_Dataflow__lp_(bind)
(!(empty?(bind[30]))) || FAIL
end
def First_Dataflow__lp_src_dot_fir_1e1a(bind)
(src.first.is_a?(lattice)) || FAIL
end
def First_Dataflow_bind_lb_13_rb__799c(bind)
bind[13].inject(:|)
end
def First_Dataflow_bind_lb_20_rb__1677(bind)
bind[20]|lattice.empty
end
def First_Dataflow_bind_lb_20_rb__49b8(bind)
bind[20].seqjoin(bind[32])
end
def First_Dataflow_depends_lp__c1cd(bind)
depends(bind[0]); @vals[bind[0]]
end
def First_Dataflow_lattice_dot__2c4f(bind)
lattice.empty
end
def First_Dataflow_lattice_dot__2ce9(bind)
lattice.default
end
def First_Dataflow_src_dot_firs_8482(bind)
src.first
end

end
  			

class Sizes_Dataflow < First_Dataflow

def Sizes_Dataflow__append_lp__0d86(bind)
_append(bind[9],bind[10])
end
def Sizes_Dataflow__append_lp__473a(bind)
_append(bind[13],bind[14])
end
def Sizes_Dataflow__append_lp__5600(bind)
_append(bind[44],bind[45])
end
def Sizes_Dataflow__append_lp__6445(bind)
_append(bind[39],bind[43])
end
def Sizes_Dataflow__append_lp__b601(bind)
_append(bind[32],bind[33])
end
def Sizes_Dataflow__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def Sizes_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def Sizes_Dataflow__lp_(bind)
(!(empty?(bind[40]))) || FAIL
end
def Sizes_Dataflow__lp_src_dot_fir_1e1a(bind)
(src.first.is_a?(lattice)) || FAIL
end
def Sizes_Dataflow_bind_lb_15_rb__dd25(bind)
bind[15].inject(:|)
end
def Sizes_Dataflow_bind_lb_26_rb__8658(bind)
bind[26]|lattice.empty
end
def Sizes_Dataflow_bind_lb_26_rb__b4db(bind)
bind[26].seqjoin(bind[42])
end
def Sizes_Dataflow_lattice_dot__2c4f(bind)
lattice.empty
end
def Sizes_Dataflow_lattice_dot__2ce9(bind)
lattice.default
end
def Sizes_Dataflow_lattice_lb__cef9(bind)
lattice[bind[6].size]
end
def Sizes_Dataflow_lattice_lb__fdee(bind)
lattice[1]
end
def Sizes_Dataflow_src_dot_firs_8482(bind)
src.first
end

end


class Switch_Dataflow < First_Dataflow

def Switch_Dataflow__append_lp__0d86(bind)
_append(bind[9],bind[10])
end
def Switch_Dataflow__append_lp__473a(bind)
_append(bind[13],bind[14])
end
def Switch_Dataflow__append_lp__5600(bind)
_append(bind[44],bind[45])
end
def Switch_Dataflow__append_lp__6445(bind)
_append(bind[39],bind[43])
end
def Switch_Dataflow__append_lp__b601(bind)
_append(bind[32],bind[33])
end
def Switch_Dataflow__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def Switch_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def Switch_Dataflow__lp_(bind)
(!(empty?(bind[40]))) || FAIL
end
def Switch_Dataflow__lp_src_dot_fir_1e1a(bind)
(src.first.is_a?(lattice)) || FAIL
end
def Switch_Dataflow_bind_lb_15_rb__dd25(bind)
bind[15].inject(:|)
end
def Switch_Dataflow_bind_lb_26_rb__8658(bind)
bind[26]|lattice.empty
end
def Switch_Dataflow_bind_lb_26_rb__b4db(bind)
bind[26].seqjoin(bind[42])
end
def Switch_Dataflow_firstcha_7cc4(bind)
firstchar(bind[6])
end
def Switch_Dataflow_lattice_dot__2c4f(bind)
lattice.empty
end
def Switch_Dataflow_lattice_dot__2ce9(bind)
lattice.default
end
def Switch_Dataflow_lattice_dot__e0e5(bind)
lattice.top
end
def Switch_Dataflow_regchar_lp__1c32(bind)
regchar(bind[6])
end
def Switch_Dataflow_src_dot_firs_8482(bind)
src.first
end

end


class ClasSwitch_Dataflow < First_Dataflow

def ClasSwitch_Dataflow__append_lp__0d86(bind)
_append(bind[9],bind[10])
end
def ClasSwitch_Dataflow__append_lp__473a(bind)
_append(bind[13],bind[14])
end
def ClasSwitch_Dataflow__append_lp__5600(bind)
_append(bind[44],bind[45])
end
def ClasSwitch_Dataflow__append_lp__6445(bind)
_append(bind[39],bind[43])
end
def ClasSwitch_Dataflow__append_lp__b375(bind)
_append(bind[8],bind[9])
end
def ClasSwitch_Dataflow__append_lp__b601(bind)
_append(bind[32],bind[33])
end
def ClasSwitch_Dataflow__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def ClasSwitch_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def ClasSwitch_Dataflow__do_rules_lb_b_31ab(bind)
$rules[bind[7]].body
end
def ClasSwitch_Dataflow__lp_(bind)
(!(empty?(bind[40]))) || FAIL
end
def ClasSwitch_Dataflow__lp__do_rules_lb__f54a(bind)
($rules[bind[7]]) || FAIL
end
def ClasSwitch_Dataflow__lp_src_dot_fir_1e1a(bind)
(src.first.is_a?(lattice)) || FAIL
end
def ClasSwitch_Dataflow_bind_lb_15_rb__dd25(bind)
bind[15].inject(:|)
end
def ClasSwitch_Dataflow_bind_lb_26_rb__8658(bind)
bind[26]|lattice.empty
end
def ClasSwitch_Dataflow_bind_lb_26_rb__b4db(bind)
bind[26].seqjoin(bind[42])
end
def ClasSwitch_Dataflow_lattice_dot__2c4f(bind)
lattice.empty
end
def ClasSwitch_Dataflow_lattice_dot__2ce9(bind)
lattice.default
end
def ClasSwitch_Dataflow_lattice_lb__d8d7(bind)
lattice[bind[3]]
end
def ClasSwitch_Dataflow_src_dot_firs_8482(bind)
src.first
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
	def assume(str)
	end
	def child(par,chld)
		 #par,chld=eval(par.to_s),eval(chld.to_s)
		 is_child=(par<=chld)
		 assume("#{par.to_s}<=#{chld.to_s}") if is_child
		 is_child
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

def Detect_First__append_lp__2d45(bind)
_append(bind[5],bind[8])
end
def Detect_First__append_lp__bc95(bind)
_append(bind[0],bind[11])
end
def Detect_First__at_name_eq_sr_362f(bind)
@name=src.name
end
def Detect_First__do_rules_eq__le__ab16(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def Detect_First_src_25d9(bind)
src
end
def Detect_First_src_dot_rule_5acf(bind)
src.rules
end
def Detect_First_src_dot_rule_fc90(bind)
src.rules=bind[9]
end

end

def unempty(s)
	s.ary.include?(Empty) ? CharLattice.top	: s
end


class Detect_Switch < Detect_First

def Detect_Switch_CharLatt_66f5(bind)
CharLattice[]
end
def Detect_Switch_Or_lb__ti_bind_2290(bind)
Or[*bind[9]]
end
def Detect_Switch_Or_lb__ti_bind_ffe5(bind)
Or[*bind[3]]
end
def Detect_Switch_Placehol_6875(bind)
Placeholder
end
def Detect_Switch_Seq_lb__ti__lp__lb_b_7923(bind)
Seq[*([bind[14]]+bind[17])]
end
def Detect_Switch__append_lp__0df6(bind)
_append(bind[21],bind[22])
end
def Detect_Switch__append_lp__1c46(bind)
_append(bind[7],bind[10])
end
def Detect_Switch__append_lp__324d(bind)
_append(bind[8],bind[13])
end
def Detect_Switch__append_lp__37c5(bind)
_append(bind[6],bind[8])
end
def Detect_Switch__append_lp__473a(bind)
_append(bind[13],bind[14])
end
def Detect_Switch__append_lp__6948(bind)
_append(bind[3],bind[6])
end
def Detect_Switch__append_lp__7352(bind)
_append(bind[4],bind[7])
end
def Detect_Switch__append_lp__73f1(bind)
_append(bind[0],bind[13])
end
def Detect_Switch__append_lp__8bfa(bind)
_append(bind[15],bind[16])
end
def Detect_Switch__append_lp__984f(bind)
_append(bind[12],bind[14])
end
def Detect_Switch__append_lp__b375(bind)
_append(bind[8],bind[9])
end
def Detect_Switch__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Detect_Switch__at_cases_dot_e_97ce(bind)
@cases.each{|ee|bind[5]=ee
			bind[2]<<[bind[5],predicate(bind[5],bind[9])]
		}
end
def Detect_Switch__at_cases_eq__at__05f1(bind)
@cases=@cases.map{|c| [c&bind[5],c&~bind[5]]}.flatten.select{|x| x.ary.size>0}.uniq_by{|x|x.ary.inspect} 
end
def Detect_Switch__at_cases_eq__lb__ed43(bind)
@cases=[bind[8]]
end
def Detect_Switch__at_changed_5352(bind)
@changed=true
end
def Detect_Switch__at_changed_b885(bind)
@changed=false
end
def Detect_Switch__at_changed_c681(bind)
@changed
end
def Detect_Switch__at_name_eq_sr_362f(bind)
@name=src.name
end
def Detect_Switch__do_rules_eq__le__ab16(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def Detect_Switch__lp_(bind)
(!intersects(first(bind[1]),bind[0])) || FAIL
end
def Detect_Switch__lp_bind_lb_0_rb__2cee(bind)
(bind[0].ary[0]=="default") || FAIL
end
def Detect_Switch__lp_bind_lb_1_rb__a6f6(bind)
(bind[1].size>1) || FAIL
end
def Detect_Switch__lp_bind_lb_2_rb__8459(bind)
(bind[2].size>1) || FAIL
end
def Detect_Switch__lp_bind_lb_4_rb__d863(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Detect_Switch__lp_bind_lb_9_rb__7d40(bind)
(bind[9].is_a?(Or)) || FAIL
end
def Detect_Switch__lp_first_lp_b_e801(bind)
(first(bind[5])) || FAIL
end
def Detect_Switch__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Detect_Switch_bind_lb_11_rb__a30c(bind)
bind[11]<<bind[13]
end
def Detect_Switch_bind_lb_1_rb_(bind)
bind[1]|=first(bind[5])
end
def Detect_Switch_bind_lb_1_rb__eq__2902(bind)
bind[1]=bind[1].ary.map{|el|  [Anything,Empty].include?(el) ? "default" : el}.uniq
end
def Detect_Switch_bind_lb_2_rb__eq__0b39(bind)
bind[2]=bind[2].group_by{|a,b| b}.map{|y,v| [v.map{|k,val| k}.inject(:|),v[0][1]]}.sort_by{|el| el.inspect}
end
def Detect_Switch_bind_lb_2_rb__lt__9f51(bind)
bind[2]<<[CharLattice["default"],Apply["fails"]] unless bind[1].include?("default")
end
def Detect_Switch_bind_lb_8_rb__eq__213a(bind)
bind[8]=unempty(bind[8])
end
def Detect_Switch_if_sp_bind_lb__b5ce(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Detect_Switch_nary_eq_bin_3073(bind)
nary=bind[1].ary
                                 nary=nary.select{|o,v| intersects(o,bind[0])} if bind[1].first.is_a?(CharLattice)
                                 nary=nary.map{|o,v| [o,predicate(bind[0],v)]}.select{|o,v| v!=Placeholder}
                                 Switch[{:act=>bind[1].act,:first=>bind[1].first,:defs=>bind[1].defs,:ary=>nary}]
                              
end
def Detect_Switch_s_eq_Switch_1ed5(bind)
s=Switch[{:act=>"*ame_curstr(self)",:first=>bind[8],:ary=>bind[2]}];puts s.inspect;s
end
def Detect_Switch_src_25d9(bind)
src
end
def Detect_Switch_src_dot_rule_5acf(bind)
src.rules
end
def Detect_Switch_src_dot_rule_82aa(bind)
src.rules=bind[11]
end

end


class Detect_ClasSwitch < Detect_First

def Detect_ClasSwitch_Apply_lb__dq_a_eeac(bind)
Apply["anything"]
end
def Detect_ClasSwitch_Bind_lb_bin_1823(bind)
Bind[bind[7],bind[15]]
end
def Detect_ClasSwitch_ClasLatt_1dca(bind)
ClasLattice.bottom
end
def Detect_ClasSwitch_Or_lb__ti_bind_339b(bind)
Or[*bind[22]]
end
def Detect_ClasSwitch_Or_lb__ti_bind_ffe5(bind)
Or[*bind[3]]
end
def Detect_ClasSwitch_Placehol_6875(bind)
Placeholder
end
def Detect_ClasSwitch_Seq_lb__ti__lp__lb_b_5e74(bind)
Seq[*([bind[26]]+bind[29])]
end
def Detect_ClasSwitch__append_lp__0860(bind)
_append(bind[27],bind[28])
end
def Detect_ClasSwitch__append_lp__132b(bind)
_append(bind[19],bind[21])
end
def Detect_ClasSwitch__append_lp__1c46(bind)
_append(bind[7],bind[10])
end
def Detect_ClasSwitch__append_lp__324d(bind)
_append(bind[8],bind[13])
end
def Detect_ClasSwitch__append_lp__6948(bind)
_append(bind[3],bind[6])
end
def Detect_ClasSwitch__append_lp__7352(bind)
_append(bind[4],bind[7])
end
def Detect_ClasSwitch__append_lp__73f1(bind)
_append(bind[0],bind[13])
end
def Detect_ClasSwitch__append_lp__984f(bind)
_append(bind[12],bind[14])
end
def Detect_ClasSwitch__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Detect_ClasSwitch__at_changed_5352(bind)
@changed=true
end
def Detect_ClasSwitch__at_changed_b885(bind)
@changed=false
end
def Detect_ClasSwitch__at_changed_c681(bind)
@changed
end
def Detect_ClasSwitch__at_name_eq_sr_362f(bind)
@name=src.name
end
def Detect_ClasSwitch__do_rules_eq__le__ab16(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def Detect_ClasSwitch__lp_(bind)
(!includes(bind[0],bind[1],first(bind[2]))) || FAIL
end
def Detect_ClasSwitch__lp_bind_lb_0_rb__30a7(bind)
(bind[0][bind[1]]=="default") || FAIL
end
def Detect_ClasSwitch__lp_bind_lb_1_rb__a6f6(bind)
(bind[1].size>1) || FAIL
end
def Detect_ClasSwitch__lp_bind_lb_4_rb__d863(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Detect_ClasSwitch__lp_bind_lb_7_rb__bf57(bind)
(bind[7]=="clas") || FAIL
end
def Detect_ClasSwitch__lp_child_lp_b_a092(bind)
(child(bind[0][bind[1]],bind[9])&&bind[0][bind[1]]==bind[9]) || FAIL
end
def Detect_ClasSwitch__lp_first_lp_b_e801(bind)
(first(bind[5])) || FAIL
end
def Detect_ClasSwitch__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Detect_ClasSwitch_bind_lb_11_rb__a30c(bind)
bind[11]<<bind[13]
end
def Detect_ClasSwitch_bind_lb_1_rb_(bind)
bind[1]|=first(bind[5])
end
def Detect_ClasSwitch_bind_lb_1_rb__dot__7257(bind)
bind[1].each_index{|i|
      	bind[2]<<[i,predicate(bind[1],i,bind[9])]
		}
end
def Detect_ClasSwitch_bind_lb_1_rb__eq__bfd4(bind)
bind[1]=topsort(bind[1].ary+[Object])
end
def Detect_ClasSwitch_bind_lb_2_rb__eq__6851(bind)
bind[2]=bind[2].group_by{|a,b| b}.map{|y,v| [v.map{|k,val| k}.sort_by{|el| el.inspect},v[0][1]]}.sort_by{|el| el.inspect}
end
def Detect_ClasSwitch_bind_lb_2_rb__eq__b94b(bind)
bind[2]=bind[2].map{|o,v| v==Placeholder ? [o,Apply["fails"]] : [o,v]}
end
def Detect_ClasSwitch_bind_lb_2_rb__eq__dbd4(bind)
bind[2]=bind[2].map{|o,v| [ClasLattice[*o],v]}
end
def Detect_ClasSwitch_c_eq_classs_ed6f(bind)
c=classswitch(bind[1],bind[8],bind[2])
end
def Detect_ClasSwitch_if_sp_bind_lb__b5ce(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Detect_ClasSwitch_predicat_c13c(bind)
predicate(bind[0],bind[1],bind[14])
end
def Detect_ClasSwitch_src_25d9(bind)
src
end
def Detect_ClasSwitch_src_dot_name_80f3(bind)
src.name
end
def Detect_ClasSwitch_src_dot_rule_5acf(bind)
src.rules
end
def Detect_ClasSwitch_src_dot_rule_82aa(bind)
src.rules=bind[11]
end

end



def detect_switch_compiled_by
'3403c24c3d76d44ace4bd3d7f406d11d'
end
def detect_switch_source_hash
'5769319c01896d6809e4539089579b64'
end
def testversiondetect_switch(r)
 raise "invalid version" if r!=detect_switch_version
end
def detect_switch_version
'5cd80336ecacac45ed4f5a99d991166d'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/detect_switch_c"
