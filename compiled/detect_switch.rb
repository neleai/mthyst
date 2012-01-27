
$hash_Lattice_Sizes={}
class Lattice_Sizes
	attr_accessor :size
	def self.bottom ;	self[0];				end
	def self.top	  ; self[1.0/0.0];	end
	def self.[](a)
		return $hash_Lattice_Sizes[a] if $hash_Lattice_Sizes[a]
		l=self.new
		l.size=a
		$hash_Lattice_Sizes[a]=l
	end
	alias_method :==,:equal?
	def |(a)
		Lattice_Sizes[ [size,a.size].min ]
	end
	def seqjoin(a)
		Lattice_Sizes[ size+a.size ]
	end
	def inspect; "Lattice_Sizes[#{size}]";end
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

$hash_Lattice_Char={}
class Lattice_Char < FirstLattice
	def self.[](*ary)
		return $hash_Lattice_Char[ary] if $hash_Lattice_Char[ary]
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
		return $hash_Lattice_Char[ary]=$hash_Lattice_Char[nary] if $hash_Lattice_Char[nary]
		c=Lattice_Char.new
		c.ary=nary
		$hash_Lattice_Char[ary]=$hash_Lattice_Char[nary]=c
	end
	alias_method :==,:equal?
	def self.top;	         Lattice_Char[[0,255]] ;end
	def self.bottom;   		 Lattice_Char[];			 end
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
		Lattice_Char[*nary]
	end
end

$hash_Lattice_Clas={}
class Lattice_Clas < FirstLattice
  attr_accessor :ary
  def self.[](*ary)
		ary=ary.uniq.sort_by{|a| a.inspect}.map{|a| eval(a.to_s)}
		return $hash_Lattice_Clas[ary] if $hash_Lattice_Clas[ary]
    c=Lattice_Clas.new
    c.ary=ary
    $hash_Lattice_Clas[ary]=c
  end
	alias_method :==,:equal?
  def self.top;     Lattice_Clas[Object];  end
	
	#TODO operations other than |
	#TODO modules
	def &(a)
		return self if   ary[0]<=a.ary[0]
		return a    if a.ary[0]<=  ary[0]
		Lattice_Clas.bottom
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
		Lattice_Sizes
	end
	def empty?(el)
		true
	end
end

class Switch_Char_Dataflow < First_Dataflow
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
	def lattice;		Lattice_Char;	end
end

class Switch_Clas_Dataflow < First_Dataflow
	def lattice;		Lattice_Clas;	end
end
class First_Dataflow < Amethyst

def First_Dataflow_Compiler_67ff(bind)
Compiler.grammars[src.clas].rules[bind[28]].body
end
def First_Dataflow__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def First_Dataflow__append_lp__54e8(bind)
_append(bind[16],bind[17])
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
def First_Dataflow__lp_Compile_62c7(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[28]]) || FAIL
end
def First_Dataflow_bind_lb_0_rb__dot__b660(bind)
bind[0].inject(:|)
end
def First_Dataflow_bind_lb_12_rb__900a(bind)
bind[12].inject(:|)
end
def First_Dataflow_bind_lb_20_rb__2794(bind)
bind[20].seqjoin(bind[23])
end
def First_Dataflow_bind_lb_20_rb__2927(bind)
bind[20]|lattice.bottom
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

def Sizes_Dataflow_Compiler_67ff(bind)
Compiler.grammars[src.clas].rules[bind[28]].body
end
def Sizes_Dataflow__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def Sizes_Dataflow__append_lp__54e8(bind)
_append(bind[16],bind[17])
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
def Sizes_Dataflow__lp_Compile_62c7(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[28]]) || FAIL
end
def Sizes_Dataflow_bind_lb_0_rb__dot__b660(bind)
bind[0].inject(:|)
end
def Sizes_Dataflow_bind_lb_12_rb__900a(bind)
bind[12].inject(:|)
end
def Sizes_Dataflow_bind_lb_20_rb__2794(bind)
bind[20].seqjoin(bind[23])
end
def Sizes_Dataflow_bind_lb_20_rb__2927(bind)
bind[20]|lattice.bottom
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
def Sizes_Dataflow_lattice_lb__cef9(bind)
lattice[bind[6].size]
end
def Sizes_Dataflow_lattice_lb__fdee(bind)
lattice[1]
end

end


class Switch_Char_Dataflow < First_Dataflow

def Switch_Char_Dataflow_Compiler_67ff(bind)
Compiler.grammars[src.clas].rules[bind[28]].body
end
def Switch_Char_Dataflow__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def Switch_Char_Dataflow__append_lp__54e8(bind)
_append(bind[16],bind[17])
end
def Switch_Char_Dataflow__append_lp__9ca5(bind)
_append(bind[10],bind[11])
end
def Switch_Char_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def Switch_Char_Dataflow__lp_(bind)
(!(empty?(bind[14]))) || FAIL
end
def Switch_Char_Dataflow__lp_Compile_62c7(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[28]]) || FAIL
end
def Switch_Char_Dataflow_bind_lb_0_rb__dot__b660(bind)
bind[0].inject(:|)
end
def Switch_Char_Dataflow_bind_lb_12_rb__900a(bind)
bind[12].inject(:|)
end
def Switch_Char_Dataflow_bind_lb_20_rb__2794(bind)
bind[20].seqjoin(bind[23])
end
def Switch_Char_Dataflow_bind_lb_20_rb__2927(bind)
bind[20]|lattice.bottom
end
def Switch_Char_Dataflow_bind_lb_4_rb__dot__2651(bind)
bind[4].is_a?(lattice)? bind[4] & bind[5] : bind[5]
end
def Switch_Char_Dataflow_empty(bind)
empty?(bind[14]) ? lattice.top|lattice.bottom : lattice.top
end
def Switch_Char_Dataflow_firstcha_7cc4(bind)
firstchar(bind[6])
end
def Switch_Char_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end
def Switch_Char_Dataflow_lattice_dot__e0e5(bind)
lattice.top
end
def Switch_Char_Dataflow_regchar_lp__1c32(bind)
regchar(bind[6])
end

end


class Switch_Clas_Dataflow < First_Dataflow

def Switch_Clas_Dataflow_Compiler_67ff(bind)
Compiler.grammars[src.clas].rules[bind[28]].body
end
def Switch_Clas_Dataflow__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def Switch_Clas_Dataflow__append_lp__54e8(bind)
_append(bind[16],bind[17])
end
def Switch_Clas_Dataflow__append_lp__9ca5(bind)
_append(bind[10],bind[11])
end
def Switch_Clas_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def Switch_Clas_Dataflow__lp_(bind)
(!(empty?(bind[14]))) || FAIL
end
def Switch_Clas_Dataflow__lp_Compile_62c7(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[28]]) || FAIL
end
def Switch_Clas_Dataflow_bind_lb_0_rb__dot__b660(bind)
bind[0].inject(:|)
end
def Switch_Clas_Dataflow_bind_lb_12_rb__900a(bind)
bind[12].inject(:|)
end
def Switch_Clas_Dataflow_bind_lb_20_rb__2794(bind)
bind[20].seqjoin(bind[23])
end
def Switch_Clas_Dataflow_bind_lb_20_rb__2927(bind)
bind[20]|lattice.bottom
end
def Switch_Clas_Dataflow_bind_lb_4_rb__dot__2651(bind)
bind[4].is_a?(lattice)? bind[4] & bind[5] : bind[5]
end
def Switch_Clas_Dataflow_empty(bind)
empty?(bind[14]) ? lattice.top|lattice.bottom : lattice.top
end
def Switch_Clas_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end
def Switch_Clas_Dataflow_lattice_lb__d8d7(bind)
lattice[bind[3]]
end

end


class Detect_First< Traverser_Clone2
	def empty?(s)	
		$sizedf.analyze(s).size==0
	end
end

class Detect_Switch_Char < Detect_First
	def initialize
		$sizedf=Sizes_Dataflow.new
		$sizedf.parse(:root,[])
	end
	def first(s)
		if !@switchdf
			@switchdf=Switch_Char_Dataflow.new
			@switchdf.parse(:root,[])
		end
		r=@switchdf.analyze(s)
		r
	end
end

class Detect_Switch_Clas < Detect_First
	def first(s)
		if !@switchdf
			@switchdf=Switch_Clas_Dataflow.new
			@switchdf.parse(:root,[])
		end
		r=@switchdf.analyze(s)
		return r
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


class Detect_Switch_Char < Detect_First

def Detect_Switch_Char_Or_lb__ti_bind_b2b0(bind)
Or[*bind[45]]
end
def Detect_Switch_Char_Seq_lb__ti__lp_bi_abc9(bind)
Seq[*(bind[1]+bind[5])]
end
def Detect_Switch_Char_Seq_lb__ti__lp_bi_f9d7(bind)
Seq[*(bind[29]+bind[34])]
end
def Detect_Switch_Char_Switch_C_4c55(bind)
Switch_Char[{:ary=>bind[5].map{|p,a| [p,Seq[*(bind[1]+[a]+bind[9])]]}}] 
end
def Detect_Switch_Char_Switch_C_9c60(bind)
Switch_Char[{:ary=>bind[50].map{|p,a| [p,Or[*a].dup.normalize]}}]
end
def Detect_Switch_Char_Switch_C_ccfb(bind)
Switch_Char[{:ary=>bind[34].map{|p,a| [p,Seq[*(bind[29]+[a]+bind[38])]]}}] 
end
def Detect_Switch_Char_Switch_C_fe8b(bind)
Switch_Char[{:ary=>bind[3].map{|p,a| [p,Or[*a].dup.normalize]}}]
end
def Detect_Switch_Char__append_lp__05b0(bind)
_append(bind[25],bind[26])
end
def Detect_Switch_Char__append_lp__7352(bind)
_append(bind[4],bind[7])
end
def Detect_Switch_Char__append_lp__b494(bind)
_append(bind[0],bind[10])
end
def Detect_Switch_Char__append_lp__b601(bind)
_append(bind[32],bind[33])
end
def Detect_Switch_Char__append_lp__b6c7(bind)
_append(bind[7],bind[8])
end
def Detect_Switch_Char__append_lp__cfd1(bind)
_append(bind[36],bind[37])
end
def Detect_Switch_Char__append_lp__dd73(bind)
_append(bind[3],bind[4])
end
def Detect_Switch_Char__append_lp__e512(bind)
_append(bind[43],bind[44])
end
def Detect_Switch_Char__at_changed_5352(bind)
@changed=true
end
def Detect_Switch_Char__at_changed_b885(bind)
@changed=false
end
def Detect_Switch_Char__at_changed_c681(bind)
@changed
end
def Detect_Switch_Char__at_name_eq_sr_362f(bind)
@name=src.name
end
def Detect_Switch_Char__do_rules_eq__le__ab16(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def Detect_Switch_Char__lb__lb_Lattic_d322(bind)
[[Lattice_Char.top,[]]]
end
def Detect_Switch_Char__lp_(bind)
(!empty?(src) && bind[7]!=Lattice_Char.top) || FAIL
end
def Detect_Switch_Char__lp_2(bind)
(!bind[46]) || FAIL
end
def Detect_Switch_Char__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Detect_Switch_Char__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Detect_Switch_Char_bind_lb_1_rb__pl__42be(bind)
bind[1]+[bind[0]]
end
def Detect_Switch_Char_bind_lb_29_rb__1c06(bind)
bind[29]+[bind[30]]
end
def Detect_Switch_Char_bind_lb_3_rb__dot__2d57(bind)
bind[3].map{|p,a| [p,a+[bind[5]]]}
end
def Detect_Switch_Char_bind_lb_3_rb__dot__8725(bind)
bind[3].each{|p,a| bind[1].each{|p2,a2| bind[2] << [p&p2,a+[a2]] if p&p2!=Lattice_Char.bottom}}
end
def Detect_Switch_Char_bind_lb_3_rb__lt__bb51(bind)
bind[3]<<bind[4]
end
def Detect_Switch_Char_bind_lb_45_rb__2305(bind)
bind[45].each{|i| bind[46]=true if i.is_a?(Switch_Char)}
end
def Detect_Switch_Char_bind_lb_50_rb__6926(bind)
bind[50].map{|p,a| [p,a+[bind[55]]]}
end
def Detect_Switch_Char_bind_lb_50_rb__e818(bind)
bind[50].each{|p,a| bind[52].each{|p2,a2| bind[53] << [p&p2,a+[a2]] if p&p2!=Lattice_Char.bottom}}
end
def Detect_Switch_Char_first_lp_sr_3298(bind)
first(src)
end
def Detect_Switch_Char_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def Detect_Switch_Char_s_eq_Switch_09bd(bind)
s=Switch_Char[{:ary=>[[bind[7],Many[bind[22]]],[~bind[7],Apply["fails"]]]}] 
end
def Detect_Switch_Char_s_eq_Switch_0f4e(bind)
s=Switch_Char[{:ary=>[[bind[7],Seq[Apply["anything"],Apply["_seq",CAct[bind[13][1..-1]]]]],[~bind[7],Apply["fails"]]]}]
end
def Detect_Switch_Char_s_eq_Switch_0f7e(bind)
s=Switch_Char[{:ary=>[[bind[7],src],[~bind[7],Apply["fails"]]]}] 
end
def Detect_Switch_Char_s_eq_Switch_2226(bind)
s=Switch_Char[{:ary=>[[bind[7],Apply["anything"]],[~bind[7],Apply["fails"]]]}]
end
def Detect_Switch_Char_src_25d9(bind)
src
end
def Detect_Switch_Char_src_dot_ary_d5cf(bind)
src.ary
end
def Detect_Switch_Char_src_dot_rule_5acf(bind)
src.rules
end
def Detect_Switch_Char_src_dot_rule_d270(bind)
src.rules=bind[8]
end

end


class Detect_Switch_Clas < Detect_First

def Detect_Switch_Clas_Or_lb__ti_bind_c735(bind)
Or[*bind[32]]
end
def Detect_Switch_Clas_Seq_lb__ti__lp_bi_39b1(bind)
Seq[*(bind[16]+bind[21])]
end
def Detect_Switch_Clas_Seq_lb__ti__lp_bi_abc9(bind)
Seq[*(bind[1]+bind[5])]
end
def Detect_Switch_Clas_Switch_C_0e01(bind)
Switch_Clas[{:ary=>bind[3].map{|p,a| [p,Or[*a].dup.normalize]}}]
end
def Detect_Switch_Clas_Switch_C_7608(bind)
Switch_Clas[{:ary=>bind[21].map{|p,a| [p,Seq[*(bind[16]+[a]+bind[25])]]}}] 
end
def Detect_Switch_Clas_Switch_C_a9b5(bind)
Switch_Clas[{:ary=>bind[5].map{|p,a| [p,Seq[*(bind[1]+[a]+bind[9])]]}}] 
end
def Detect_Switch_Clas_Switch_C_c798(bind)
Switch_Clas[{:ary=>bind[37].map{|p,a| [p,Or[*a].dup.normalize]}}]
end
def Detect_Switch_Clas_Switch_C_ee57(bind)
Switch_Clas[[Lattice_Clas[bind[5][0]],Apply["anything"]],[Lattice_Clas[Object],Apply["fails"]]].freeze 
end
def Detect_Switch_Clas__append_lp__4548(bind)
_append(bind[19],bind[20])
end
def Detect_Switch_Clas__append_lp__7140(bind)
_append(bind[12],bind[13])
end
def Detect_Switch_Clas__append_lp__7352(bind)
_append(bind[4],bind[7])
end
def Detect_Switch_Clas__append_lp__769c(bind)
_append(bind[30],bind[31])
end
def Detect_Switch_Clas__append_lp__89bf(bind)
_append(bind[23],bind[24])
end
def Detect_Switch_Clas__append_lp__b494(bind)
_append(bind[0],bind[10])
end
def Detect_Switch_Clas__append_lp__b6c7(bind)
_append(bind[7],bind[8])
end
def Detect_Switch_Clas__append_lp__dd73(bind)
_append(bind[3],bind[4])
end
def Detect_Switch_Clas__at_changed_5352(bind)
@changed=true
end
def Detect_Switch_Clas__at_changed_b885(bind)
@changed=false
end
def Detect_Switch_Clas__at_changed_c681(bind)
@changed
end
def Detect_Switch_Clas__at_name_eq_sr_362f(bind)
@name=src.name
end
def Detect_Switch_Clas__do_rules_eq__le__ab16(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def Detect_Switch_Clas__lb__lb_Lattic_62e5(bind)
[[Lattice_Clas.top,[]]]
end
def Detect_Switch_Clas__lp_(bind)
(!bind[33]) || FAIL
end
def Detect_Switch_Clas__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Detect_Switch_Clas__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Detect_Switch_Clas_bind_lb_16_rb__2bf7(bind)
bind[16]+[bind[17]]
end
def Detect_Switch_Clas_bind_lb_1_rb__pl__42be(bind)
bind[1]+[bind[0]]
end
def Detect_Switch_Clas_bind_lb_32_rb__bd6a(bind)
bind[32].each{|i| bind[33]=true if i.is_a?(Switch_Clas)}
end
def Detect_Switch_Clas_bind_lb_37_rb__8968(bind)
bind[37].each{|p,a| bind[39].each{|p2,a2| bind[40] << [p&p2,a+[a2]] if p&p2!=Lattice_Clas.bottom}}
end
def Detect_Switch_Clas_bind_lb_37_rb__8ace(bind)
bind[37].map{|p,a| [p,a+[bind[42]]]}
end
def Detect_Switch_Clas_bind_lb_3_rb__dot__2d57(bind)
bind[3].map{|p,a| [p,a+[bind[5]]]}
end
def Detect_Switch_Clas_bind_lb_3_rb__dot__991d(bind)
bind[3].each{|p,a| bind[1].each{|p2,a2| bind[2] << [p&p2,a+[a2]] if p&p2!=Lattice_Clas.bottom}}
end
def Detect_Switch_Clas_bind_lb_3_rb__lt__bb51(bind)
bind[3]<<bind[4]
end
def Detect_Switch_Clas_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def Detect_Switch_Clas_src_25d9(bind)
src
end
def Detect_Switch_Clas_src_dot_ary_d5cf(bind)
src.ary
end
def Detect_Switch_Clas_src_dot_rule_5acf(bind)
src.rules
end
def Detect_Switch_Clas_src_dot_rule_d270(bind)
src.rules=bind[8]
end

end



def detect_switch_compiled_by
'c16f40af7c3d1f248f4135f2d0062d1d'
end
def detect_switch_source_hash
'619f0d04c00ca7e48ea9f4c7762614db'
end
def testversiondetect_switch(r)
 raise "invalid version" if r!=detect_switch_version
end
def detect_switch_version
'5db62c1c1999efa8dacffe690e83b088'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/detect_switch_c"
