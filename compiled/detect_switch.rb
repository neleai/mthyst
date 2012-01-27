
$hash_SizesLattice={}
class SizesLattice
	attr_accessor :size
	def self.bottom ;	self[0];				end
	def self.top	  ; self[1.0/0.0];	end
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
	def inspect; "SizesLattice[#{size}]";end
end

class FirstLattice
	attr_accessor :ary
  def self.bottom;   self[];			 end
	
	def |(a)
		self.class[*(ary|a.ary)]
	end
	def seqjoin(a)
    self|a
  end

	def ~
		raise "Not implemented"
	end
	def &(a) #De Morgan's law
		 ~(~self | ~a)
	end
	def -(a)
		self&(~a)
	end

	def cases(first)
		ary.map{|c| "case #{c}:;"}*""
	end
	def inspect
		self.class.to_s+ary.inspect
	end
end

$hash_CharLattice={}
class CharLattice < FirstLattice
	def self.[](*ary)
		return $hash_CharLattice[ary] if $hash_CharLattice[ary]
		nary=[]
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
		return $hash_CharLattice[ary]=$hash_CharLattice[nary] if $hash_CharLattice[nary]
		c=CharLattice.new
		c.ary=nary
		$hash_CharLattice[ary]=$hash_CharLattice[nary]=c
	end
	alias_method :==,:equal?
	def self.top;	         CharLattice[[0,255]] ;end
	def self.bottom;   		 CharLattice[];			 end
	def cchar(c)
		return "'#{c.chr}'" if c.chr.inspect.size==3 && c.chr.inspect!='"\'"' && c.ord < 128
		"UC(#{c.ord})"
	end
  def cases(first)
    ary.map{|c| "case #{cchar(c[0])} ... #{cchar(c[1])}:;"}*""
  end
	def ~
		first=0
		nary=[]
		(ary+[[256,256]]).each{|beg,en|
			nary<<[first,beg-1] if first<=beg-1
			first=en+1
		}
		CharLattice[*nary]
	end
end

$hash_ClasLattice={}
class ClasLattice < FirstLattice
  attr_accessor :ary
  def self.[](*ary)
		ary=ary.uniq.sort_by{|a| a.inspect}.map{|a| eval(a.to_s)}
		return $hash_ClasLattice[ary] if $hash_ClasLattice[ary]
    c=ClasLattice.new
    c.ary=ary
    $hash_ClasLattice[ary]=c
  end
	alias_method :==,:equal?
  def self.top;     ClasLattice[Object];  end
	
	#TODO operations other than |
	#TODO modules
	def &(a)
		return self if   ary[0]<=a.ary[0]
		return a    if a.ary[0]<=  ary[0]
		ClasLattice.bottom
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
		$sizedf.analyze(el).size==0
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
				c=eval('"'+s[i,2]+'"')[0].bytes.to_a[0]
				chars<<[c,c]
				i+=2
			else
				chars<<[c,c]
				i+=1
			end
		end
		lattice[*chars]
	end
	def lattice;		CharLattice;	end
end

class ClasSwitch_Dataflow < First_Dataflow
	def lattice;		ClasLattice;	end
end
class First_Dataflow < Amethyst

def First_Dataflow_Compiler_46ba(bind)
Compiler.grammars[src.clas].rules[bind[27]].body
end
def First_Dataflow__append_lp__2a35(bind)
_append(bind[1],bind[16])
end
def First_Dataflow__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def First_Dataflow__append_lp__9ca5(bind)
_append(bind[10],bind[11])
end
def First_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def First_Dataflow__lp_(bind)
(!(empty?(bind[14]))) || FAIL
end
def First_Dataflow__lp_Compile_8023(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[27]]) || FAIL
end
def First_Dataflow_bind_lb_0_rb__dot__b660(bind)
bind[0].inject(:|)
end
def First_Dataflow_bind_lb_12_rb__900a(bind)
bind[12].inject(:|)
end
def First_Dataflow_bind_lb_19_rb__2b52(bind)
bind[19]|lattice.bottom
end
def First_Dataflow_bind_lb_19_rb__e313(bind)
bind[19].seqjoin(bind[22])
end
def First_Dataflow_bind_lb_4_rb__dot__2651(bind)
bind[4].is_a?(lattice)? bind[4] & bind[5] : bind[5]
end
def First_Dataflow_depends_lp__5009(bind)
depends(bind[0]);@vals[bind[0]]
end
def First_Dataflow_empty(bind)
empty?(bind[14]) ? lattice.top|lattice.bottom : lattice.top
end
def First_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end

end
  			

class Sizes_Dataflow < First_Dataflow

def Sizes_Dataflow_Compiler_46ba(bind)
Compiler.grammars[src.clas].rules[bind[27]].body
end
def Sizes_Dataflow__append_lp__2a35(bind)
_append(bind[1],bind[16])
end
def Sizes_Dataflow__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def Sizes_Dataflow__append_lp__9ca5(bind)
_append(bind[10],bind[11])
end
def Sizes_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def Sizes_Dataflow__lp_(bind)
(!(empty?(bind[14]))) || FAIL
end
def Sizes_Dataflow__lp_Compile_8023(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[27]]) || FAIL
end
def Sizes_Dataflow_bind_lb_0_rb__dot__b660(bind)
bind[0].inject(:|)
end
def Sizes_Dataflow_bind_lb_12_rb__900a(bind)
bind[12].inject(:|)
end
def Sizes_Dataflow_bind_lb_19_rb__2b52(bind)
bind[19]|lattice.bottom
end
def Sizes_Dataflow_bind_lb_19_rb__e313(bind)
bind[19].seqjoin(bind[22])
end
def Sizes_Dataflow_bind_lb_4_rb__dot__2651(bind)
bind[4].is_a?(lattice)? bind[4] & bind[5] : bind[5]
end
def Sizes_Dataflow_empty(bind)
empty?(bind[14]) ? lattice.top|lattice.bottom : lattice.top
end
def Sizes_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end
def Sizes_Dataflow_lattice_dot__e0e5(bind)
lattice.top
end
def Sizes_Dataflow_lattice_lb__fdc8(bind)
lattice[bind[5].size]
end
def Sizes_Dataflow_lattice_lb__fdee(bind)
lattice[1]
end

end


class Switch_Dataflow < First_Dataflow

def Switch_Dataflow_Compiler_46ba(bind)
Compiler.grammars[src.clas].rules[bind[27]].body
end
def Switch_Dataflow__append_lp__2a35(bind)
_append(bind[1],bind[16])
end
def Switch_Dataflow__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def Switch_Dataflow__append_lp__9ca5(bind)
_append(bind[10],bind[11])
end
def Switch_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def Switch_Dataflow__lp_(bind)
(!(empty?(bind[14]))) || FAIL
end
def Switch_Dataflow__lp_Compile_8023(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[27]]) || FAIL
end
def Switch_Dataflow_bind_lb_0_rb__dot__b660(bind)
bind[0].inject(:|)
end
def Switch_Dataflow_bind_lb_12_rb__900a(bind)
bind[12].inject(:|)
end
def Switch_Dataflow_bind_lb_19_rb__2b52(bind)
bind[19]|lattice.bottom
end
def Switch_Dataflow_bind_lb_19_rb__e313(bind)
bind[19].seqjoin(bind[22])
end
def Switch_Dataflow_bind_lb_4_rb__dot__2651(bind)
bind[4].is_a?(lattice)? bind[4] & bind[5] : bind[5]
end
def Switch_Dataflow_empty(bind)
empty?(bind[14]) ? lattice.top|lattice.bottom : lattice.top
end
def Switch_Dataflow_firstcha_647d(bind)
firstchar(bind[5])
end
def Switch_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end
def Switch_Dataflow_lattice_dot__e0e5(bind)
lattice.top
end
def Switch_Dataflow_regchar_lp__96c7(bind)
regchar(bind[5])
end

end


class ClasSwitch_Dataflow < First_Dataflow

def ClasSwitch_Dataflow_Compiler_46ba(bind)
Compiler.grammars[src.clas].rules[bind[27]].body
end
def ClasSwitch_Dataflow__append_lp__2a35(bind)
_append(bind[1],bind[16])
end
def ClasSwitch_Dataflow__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def ClasSwitch_Dataflow__append_lp__9ca5(bind)
_append(bind[10],bind[11])
end
def ClasSwitch_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def ClasSwitch_Dataflow__lp_(bind)
(!(empty?(bind[14]))) || FAIL
end
def ClasSwitch_Dataflow__lp_Compile_8023(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[27]]) || FAIL
end
def ClasSwitch_Dataflow_bind_lb_0_rb__dot__b660(bind)
bind[0].inject(:|)
end
def ClasSwitch_Dataflow_bind_lb_12_rb__900a(bind)
bind[12].inject(:|)
end
def ClasSwitch_Dataflow_bind_lb_19_rb__2b52(bind)
bind[19]|lattice.bottom
end
def ClasSwitch_Dataflow_bind_lb_19_rb__e313(bind)
bind[19].seqjoin(bind[22])
end
def ClasSwitch_Dataflow_bind_lb_4_rb__dot__2651(bind)
bind[4].is_a?(lattice)? bind[4] & bind[5] : bind[5]
end
def ClasSwitch_Dataflow_empty(bind)
empty?(bind[14]) ? lattice.top|lattice.bottom : lattice.top
end
def ClasSwitch_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end
def ClasSwitch_Dataflow_lattice_lb__d8d7(bind)
lattice[bind[3]]
end

end


class Detect_First< Traverser_Clone2
	def empty?(s)	
		$sizedf.analyze(s).size==0
	end
end

class Detect_Switch < Detect_First
	def initialize
		$sizedf=Sizes_Dataflow.new
		$sizedf.parse(:root,[])
	end
	def first(s)
		if !@switchdf
			@switchdf=Switch_Dataflow.new
			@switchdf.parse(:root,[])
		end
		r=@switchdf.analyze(s)
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
		return r
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
	def topsort(a)
		a=a.uniq.sort_by{|a| a.to_s}
		g=Oriented_Graph.new
		a.each{|u| a.each{|v| g.add(u,v) if child(v,u) || (!child(u,v)&& u.to_s>v.to_s)}}
	 	g.topo_order
	end
end

class Detect_First < Traverser_Clone2

def Detect_First__append_lp__7352(bind)
_append(bind[4],bind[7])
end
def Detect_First__append_lp__b494(bind)
_append(bind[0],bind[10])
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
def Detect_First_src_dot_rule_d270(bind)
src.rules=bind[8]
end

end


class Detect_Switch < Detect_First

def Detect_Switch_Or_lb__ti_bind_0681(bind)
Or[*bind[42]]
end
def Detect_Switch_Seq_lb__ti__lp_bi_3f6c(bind)
Seq[*(bind[26]+bind[31])]
end
def Detect_Switch_Seq_lb__ti__lp_bi_abc9(bind)
Seq[*(bind[1]+bind[5])]
end
def Detect_Switch_Switch_lb__le__2264(bind)
Switch[{:ary=>bind[31].map{|p,a| [p,Seq[*(bind[26]+[a]+bind[35])]]}}] 
end
def Detect_Switch_Switch_lb__le__9bd8(bind)
Switch[{:ary=>bind[47].map{|p,a| [p,Or[*a].dup.normalize]}}]
end
def Detect_Switch_Switch_lb__le__a733(bind)
Switch[{:ary=>bind[5].map{|p,a| [p,Seq[*(bind[1]+[a]+bind[9])]]}}] 
end
def Detect_Switch_Switch_lb__le__d0f3(bind)
Switch[{:ary=>bind[3].map{|p,a| [p,Or[*a].dup.normalize]}}]
end
def Detect_Switch__append_lp__0bcf(bind)
_append(bind[29],bind[30])
end
def Detect_Switch__append_lp__51dc(bind)
_append(bind[33],bind[34])
end
def Detect_Switch__append_lp__58ed(bind)
_append(bind[22],bind[23])
end
def Detect_Switch__append_lp__7352(bind)
_append(bind[4],bind[7])
end
def Detect_Switch__append_lp__b494(bind)
_append(bind[0],bind[10])
end
def Detect_Switch__append_lp__b6c7(bind)
_append(bind[7],bind[8])
end
def Detect_Switch__append_lp__c7ad(bind)
_append(bind[40],bind[41])
end
def Detect_Switch__append_lp__dd73(bind)
_append(bind[3],bind[4])
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
def Detect_Switch__lb__lb_CharLa_c2df(bind)
[[CharLattice.top,[]]]
end
def Detect_Switch__lp_(bind)
(!empty?(src) && bind[5]!=CharLattice.top) || FAIL
end
def Detect_Switch__lp_2(bind)
(!bind[43]) || FAIL
end
def Detect_Switch__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Detect_Switch__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Detect_Switch_bind_lb_1_rb__pl__42be(bind)
bind[1]+[bind[0]]
end
def Detect_Switch_bind_lb_26_rb__abbd(bind)
bind[26]+[bind[27]]
end
def Detect_Switch_bind_lb_3_rb__dot__2d57(bind)
bind[3].map{|p,a| [p,a+[bind[5]]]}
end
def Detect_Switch_bind_lb_3_rb__dot__f022(bind)
bind[3].each{|p,a| bind[1].each{|p2,a2| bind[2] << [p&p2,a+[a2]] if p&p2!=CharLattice.bottom}}
end
def Detect_Switch_bind_lb_3_rb__lt__bb51(bind)
bind[3]<<bind[4]
end
def Detect_Switch_bind_lb_42_rb__33ed(bind)
bind[42].each{|i| bind[43]=true if i.is_a?(Switch)}
end
def Detect_Switch_bind_lb_47_rb__0480(bind)
bind[47].map{|p,a| [p,a+[bind[52]]]}
end
def Detect_Switch_bind_lb_47_rb__9185(bind)
bind[47].each{|p,a| bind[49].each{|p2,a2| bind[50] << [p&p2,a+[a2]] if p&p2!=CharLattice.bottom}}
end
def Detect_Switch_first_lp_sr_3298(bind)
first(src)
end
def Detect_Switch_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def Detect_Switch_s_eq_Switch_03b2(bind)
s=Switch[{:ary=>[[bind[5],Many[bind[19]]],[~bind[5],Apply["fails"]]]}] 
end
def Detect_Switch_s_eq_Switch_a4f3(bind)
s=Switch[{:ary=>[[bind[5],Seq[Apply["anything"],Apply["_seq",CAct[bind[11][1..-1]]]]],[~bind[5],Apply["fails"]]]}]
end
def Detect_Switch_s_eq_Switch_b7fc(bind)
s=Switch[{:ary=>[[bind[5],Apply["anything"]],[~bind[5],Apply["fails"]]]}]
end
def Detect_Switch_s_eq_Switch_eb4f(bind)
s=Switch[{:ary=>[[bind[5],src],[~bind[5],Apply["fails"]]]}] 
end
def Detect_Switch_src_25d9(bind)
src
end
def Detect_Switch_src_dot_ary_d5cf(bind)
src.ary
end
def Detect_Switch_src_dot_rule_5acf(bind)
src.rules
end
def Detect_Switch_src_dot_rule_d270(bind)
src.rules=bind[8]
end

end


class Detect_ClasSwitch < Detect_First

def Detect_ClasSwitch_Or_lb__ti_bind_d3ee(bind)
Or[*bind[31]]
end
def Detect_ClasSwitch_Seq_lb__ti__lp_bi_a0ca(bind)
Seq[*(bind[15]+bind[20])]
end
def Detect_ClasSwitch_Seq_lb__ti__lp_bi_abc9(bind)
Seq[*(bind[1]+bind[5])]
end
def Detect_ClasSwitch_Switch_C_0e01(bind)
Switch_Clas[{:ary=>bind[3].map{|p,a| [p,Or[*a].dup.normalize]}}]
end
def Detect_ClasSwitch_Switch_C_3637(bind)
Switch_Clas[{:ary=>bind[36].map{|p,a| [p,Or[*a].dup.normalize]}}]
end
def Detect_ClasSwitch_Switch_C_984d(bind)
Switch_Clas[[ClasLattice[bind[4][0]],Apply["anything"]],[ClasLattice[Object],Apply["fails"]]].freeze 
end
def Detect_ClasSwitch_Switch_C_a9b5(bind)
Switch_Clas[{:ary=>bind[5].map{|p,a| [p,Seq[*(bind[1]+[a]+bind[9])]]}}] 
end
def Detect_ClasSwitch_Switch_C_ddef(bind)
Switch_Clas[{:ary=>bind[20].map{|p,a| [p,Seq[*(bind[15]+[a]+bind[24])]]}}] 
end
def Detect_ClasSwitch__append_lp__0bcf(bind)
_append(bind[29],bind[30])
end
def Detect_ClasSwitch__append_lp__26c5(bind)
_append(bind[18],bind[19])
end
def Detect_ClasSwitch__append_lp__58ed(bind)
_append(bind[22],bind[23])
end
def Detect_ClasSwitch__append_lp__7352(bind)
_append(bind[4],bind[7])
end
def Detect_ClasSwitch__append_lp__b494(bind)
_append(bind[0],bind[10])
end
def Detect_ClasSwitch__append_lp__b6c7(bind)
_append(bind[7],bind[8])
end
def Detect_ClasSwitch__append_lp__be78(bind)
_append(bind[11],bind[12])
end
def Detect_ClasSwitch__append_lp__dd73(bind)
_append(bind[3],bind[4])
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
def Detect_ClasSwitch__lb__lb_ClasLa_aee9(bind)
[[ClasLattice.top,[]]]
end
def Detect_ClasSwitch__lp_(bind)
(!bind[32]) || FAIL
end
def Detect_ClasSwitch__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Detect_ClasSwitch__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Detect_ClasSwitch_bind_lb_15_rb__e3d5(bind)
bind[15]+[bind[16]]
end
def Detect_ClasSwitch_bind_lb_1_rb__pl__42be(bind)
bind[1]+[bind[0]]
end
def Detect_ClasSwitch_bind_lb_31_rb__1592(bind)
bind[31].each{|i| bind[32]=true if i.is_a?(Switch_Clas)}
end
def Detect_ClasSwitch_bind_lb_36_rb__91e3(bind)
bind[36].map{|p,a| [p,a+[bind[41]]]}
end
def Detect_ClasSwitch_bind_lb_36_rb__f381(bind)
bind[36].each{|p,a| bind[38].each{|p2,a2|puts p.inspect;puts p2.inspect; bind[39] << [p&p2,a+[a2]] if p&p2!=ClasLattice.bottom}}
end
def Detect_ClasSwitch_bind_lb_3_rb__dot__2d57(bind)
bind[3].map{|p,a| [p,a+[bind[5]]]}
end
def Detect_ClasSwitch_bind_lb_3_rb__dot__60de(bind)
bind[3].each{|p,a| bind[1].each{|p2,a2|puts p.inspect;puts p2.inspect; bind[2] << [p&p2,a+[a2]] if p&p2!=ClasLattice.bottom}}
end
def Detect_ClasSwitch_bind_lb_3_rb__lt__bb51(bind)
bind[3]<<bind[4]
end
def Detect_ClasSwitch_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def Detect_ClasSwitch_src_25d9(bind)
src
end
def Detect_ClasSwitch_src_dot_ary_d5cf(bind)
src.ary
end
def Detect_ClasSwitch_src_dot_rule_5acf(bind)
src.rules
end
def Detect_ClasSwitch_src_dot_rule_d270(bind)
src.rules=bind[8]
end

end



def detect_switch_compiled_by
'872fdc771072ce96f735a059e83b6bfc'
end
def detect_switch_source_hash
'30d104e7309e318d4245328d36a89b49'
end
def testversiondetect_switch(r)
 raise "invalid version" if r!=detect_switch_version
end
def detect_switch_version
'47a738858d3517bb1348a386c9e4034c'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/detect_switch_c"
