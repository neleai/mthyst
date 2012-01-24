
$hash_SizesLattice={}
class SizesLattice
	attr_accessor :size
	def self.bottom ;	self[0];				end
	def self.empty  ;	self[0];  			end
	def self.default;	self[0];			  end
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
  def self.empty;    self[];  		 end
  def self.bottom;   self[];			 end
	
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
    (self-self.class.empty)|a
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
		c=CharLattice.new
		c.ary=ary
		$hash_CharLattice[ary]=c
	end
	alias_method :==,:equal?
	def self.top;	         CharLattice[[0,255]] ;end
	def self.default;	     top|empty            ;end
	def cchar(c)
		#return "UC('\\'')" if c==?'
		"UC(#{c.ord})"
	end
  def cases(first)
    ary.map{|c| "case #{cchar(c[0])} ... #{cchar(c[1])}:;"}*""
  end
	def ~
		first=0
		nary=[]
		((normalize.ary-[])+[[256,256]]).each{|beg,en|
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
  def self.top;     ClasLattice[Object];  end
	def self.default;	top|empty;            end
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
		#puts "emp",$sizedf.analyze(el).size,el.inspect
		
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

def First_Dataflow_Compiler_d840(bind)
Compiler.grammars[src.clas].rules[bind[23]].body
end
def First_Dataflow__append_lp__3c16(bind)
_append(bind[28],bind[29])
end
def First_Dataflow__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def First_Dataflow__append_lp__be4f(bind)
_append(bind[1],bind[10])
end
def First_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def First_Dataflow__lp_(bind)
(!(empty?(bind[15]))) || FAIL
end
def First_Dataflow__lp_Compile_9e7a(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[23]]) || FAIL
end
def First_Dataflow_bind_lb_0_rb__dot__b660(bind)
bind[0].inject(:|)
end
def First_Dataflow_bind_lb_11_rb__28dd(bind)
bind[11].inject(:|)
end
def First_Dataflow_bind_lb_14_rb__47a4(bind)
bind[14]|lattice.empty
end
def First_Dataflow_bind_lb_14_rb__b1af(bind)
bind[14].seqjoin(bind[18])
end
def First_Dataflow_bind_lb_4_rb__dot__2651(bind)
bind[4].is_a?(lattice)? bind[4] & bind[5] : bind[5]
end
def First_Dataflow_depends_lp__0807(bind)
depends(bind[0]);#puts "#{bind[0].inspect} #{@vals[bind[0]].inspect}"; 
@vals[bind[0]]
end
def First_Dataflow_empty(bind)
empty?(bind[15]) ? lattice.top|lattice.empty : lattice.top
end
def First_Dataflow_lattice_dot__2c4f(bind)
lattice.empty
end

end
  			

class Sizes_Dataflow < First_Dataflow

def Sizes_Dataflow_Compiler_d840(bind)
Compiler.grammars[src.clas].rules[bind[23]].body
end
def Sizes_Dataflow__append_lp__3c16(bind)
_append(bind[28],bind[29])
end
def Sizes_Dataflow__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def Sizes_Dataflow__append_lp__be4f(bind)
_append(bind[1],bind[10])
end
def Sizes_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def Sizes_Dataflow__lp_(bind)
(!(empty?(bind[15]))) || FAIL
end
def Sizes_Dataflow__lp_Compile_9e7a(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[23]]) || FAIL
end
def Sizes_Dataflow_bind_lb_0_rb__dot__b660(bind)
bind[0].inject(:|)
end
def Sizes_Dataflow_bind_lb_11_rb__28dd(bind)
bind[11].inject(:|)
end
def Sizes_Dataflow_bind_lb_14_rb__47a4(bind)
bind[14]|lattice.empty
end
def Sizes_Dataflow_bind_lb_14_rb__b1af(bind)
bind[14].seqjoin(bind[18])
end
def Sizes_Dataflow_bind_lb_4_rb__dot__2651(bind)
bind[4].is_a?(lattice)? bind[4] & bind[5] : bind[5]
end
def Sizes_Dataflow_empty(bind)
empty?(bind[15]) ? lattice.top|lattice.empty : lattice.top
end
def Sizes_Dataflow_lattice_dot__2c4f(bind)
lattice.empty
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

def Switch_Dataflow_Compiler_d840(bind)
Compiler.grammars[src.clas].rules[bind[23]].body
end
def Switch_Dataflow__append_lp__3c16(bind)
_append(bind[28],bind[29])
end
def Switch_Dataflow__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def Switch_Dataflow__append_lp__be4f(bind)
_append(bind[1],bind[10])
end
def Switch_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def Switch_Dataflow__lp_(bind)
(!(empty?(bind[15]))) || FAIL
end
def Switch_Dataflow__lp_Compile_9e7a(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[23]]) || FAIL
end
def Switch_Dataflow_bind_lb_0_rb__dot__b660(bind)
bind[0].inject(:|)
end
def Switch_Dataflow_bind_lb_11_rb__28dd(bind)
bind[11].inject(:|)
end
def Switch_Dataflow_bind_lb_14_rb__47a4(bind)
bind[14]|lattice.empty
end
def Switch_Dataflow_bind_lb_14_rb__b1af(bind)
bind[14].seqjoin(bind[18])
end
def Switch_Dataflow_bind_lb_4_rb__dot__2651(bind)
bind[4].is_a?(lattice)? bind[4] & bind[5] : bind[5]
end
def Switch_Dataflow_empty(bind)
empty?(bind[15]) ? lattice.top|lattice.empty : lattice.top
end
def Switch_Dataflow_firstcha_647d(bind)
firstchar(bind[5])
end
def Switch_Dataflow_lattice_dot__2c4f(bind)
lattice.empty
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

def ClasSwitch_Dataflow_Compiler_d840(bind)
Compiler.grammars[src.clas].rules[bind[23]].body
end
def ClasSwitch_Dataflow__append_lp__3c16(bind)
_append(bind[28],bind[29])
end
def ClasSwitch_Dataflow__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def ClasSwitch_Dataflow__append_lp__be4f(bind)
_append(bind[1],bind[10])
end
def ClasSwitch_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def ClasSwitch_Dataflow__lp_(bind)
(!(empty?(bind[15]))) || FAIL
end
def ClasSwitch_Dataflow__lp_Compile_9e7a(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[23]]) || FAIL
end
def ClasSwitch_Dataflow_bind_lb_0_rb__dot__b660(bind)
bind[0].inject(:|)
end
def ClasSwitch_Dataflow_bind_lb_11_rb__28dd(bind)
bind[11].inject(:|)
end
def ClasSwitch_Dataflow_bind_lb_14_rb__47a4(bind)
bind[14]|lattice.empty
end
def ClasSwitch_Dataflow_bind_lb_14_rb__b1af(bind)
bind[14].seqjoin(bind[18])
end
def ClasSwitch_Dataflow_bind_lb_4_rb__dot__2651(bind)
bind[4].is_a?(lattice)? bind[4] & bind[5] : bind[5]
end
def ClasSwitch_Dataflow_empty(bind)
empty?(bind[15]) ? lattice.top|lattice.empty : lattice.top
end
def ClasSwitch_Dataflow_lattice_dot__2c4f(bind)
lattice.empty
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
		r|= CharLattice.empty if empty?(s)
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
		return (r|ClasLattice.top)-ClasLattice.empty if empty?(s)
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


def combine_or(pred,frst,*rest)
	if frst.is_a?(Switch)
		r=[]
		frst.ary.each{|p,alt| if pred&p!=CharLattice.bottom
			if rest==[]
				r<<[p&pred,[alt]]
			else
				r+=combine_or(p&pred,*rest).map{|s,k| [s,[alt]+k]}
			end
		end}
		r
	else
		if rest==[]
			return [[pred,[frst]]]
		else
			return combine_or(pred,*rest).map{|s,k| [s,[[frst]+k]]}
		end
	end
end

class Detect_Switch < Detect_First

def Detect_Switch_Or_lb__ti_bind_ab33(bind)
Or[*bind[27]]
end
def Detect_Switch_Seq_lb__lb_bin_6017(bind)
Seq[[bind[19]]+bind[22]]
end
def Detect_Switch__append_lp__05b0(bind)
_append(bind[25],bind[26])
end
def Detect_Switch__append_lp__19cb(bind)
_append(bind[20],bind[21])
end
def Detect_Switch__append_lp__7352(bind)
_append(bind[4],bind[7])
end
def Detect_Switch__append_lp__b494(bind)
_append(bind[0],bind[10])
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
(!empty?(src) && bind[5]!=CharLattice.top) || FAIL
end
def Detect_Switch__lp_2(bind)
(!bind[28]) || FAIL
end
def Detect_Switch__lp_bind_lb_19_34e7(bind)
(bind[19].is_a?(Switch)) || FAIL
end
def Detect_Switch__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Detect_Switch__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Detect_Switch_bind_lb_27_rb__7f13(bind)
bind[27].each{|i| bind[28]=true if i.is_a?(Switch)}
end
def Detect_Switch_bind_lb_3_rb__lt__bb51(bind)
bind[3]<<bind[4]
end
def Detect_Switch_c_eq_combin_5936(bind)
c=combine_or(CharLattice.top,*bind[27]);c
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
def Detect_Switch_puts_sp_bin_768b(bind)
puts bind[27].inspect;puts bind[28].inspect
end
def Detect_Switch_s_eq_Switch_01f6(bind)
s=Switch[{:act=>"*ame_curstr(self)",:ary=>bind[30].map{|k,a| [k,Or[*a].dup.normalize]}}];puts s.inspect;s
end
def Detect_Switch_s_eq_Switch_030a(bind)
s=Switch[{:act=>"*ame_curstr(self)",:ary=>bind[19].ary.map{|p,a| [p,Seq[[a]+bind[22]]]}}];
end
def Detect_Switch_s_eq_Switch_5558(bind)
s=Switch[{:act=>"*ame_curstr(self)",:ary=>[[bind[5],src],[~bind[5],Apply["fails"]]]}] 
end
def Detect_Switch_s_eq_Switch_904b(bind)
s=Switch[{:act=>"*ame_curstr(self)",:ary=>[[bind[5],Apply["anything"]],[~bind[5],Apply["fails"]]]}]
end
def Detect_Switch_s_eq_Switch_9e88(bind)
s=Switch[{:act=>"*ame_curstr(self)",:ary=>[[bind[5],Seq[Apply["anything"],Apply["_seq",CAct[bind[11][1..-1]]]]],[~bind[5],Apply["fails"]]]}]
end
def Detect_Switch_src_25d9(bind)
src
end
def Detect_Switch_src_dot_rule_5acf(bind)
src.rules
end
def Detect_Switch_src_dot_rule_d270(bind)
src.rules=bind[8]
end

end


class Detect_ClasSwitch < Detect_First

def Detect_ClasSwitch_Apply_lb__dq_a_eeac(bind)
Apply["anything"]
end
def Detect_ClasSwitch_Bind_lb_bin_aa12(bind)
Bind[bind[19],bind[25]]
end
def Detect_ClasSwitch_ClasLatt_1dca(bind)
ClasLattice.bottom
end
def Detect_ClasSwitch_Or_lb__ti_bind_a0c4(bind)
Or[*bind[16]]
end
def Detect_ClasSwitch_Or_lb__ti_bind_ffe5(bind)
Or[*bind[3]]
end
def Detect_ClasSwitch_Placehol_6875(bind)
Placeholder
end
def Detect_ClasSwitch_Seq_lb__ti__lp__lb_b_70e1(bind)
Seq[*([bind[7]]+bind[10])]
end
def Detect_ClasSwitch__append_lp__6adb(bind)
_append(bind[3],bind[5])
end
def Detect_ClasSwitch__append_lp__7352(bind)
_append(bind[4],bind[7])
end
def Detect_ClasSwitch__append_lp__a474(bind)
_append(bind[14],bind[15])
end
def Detect_ClasSwitch__append_lp__b375(bind)
_append(bind[8],bind[9])
end
def Detect_ClasSwitch__append_lp__b494(bind)
_append(bind[0],bind[10])
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
(!empty?(bind[0]) && !includes(bind[1],bind[2],first(bind[0]))) || FAIL
end
def Detect_ClasSwitch__lp_bind_lb_19_a8b7(bind)
(bind[19]=="clas") || FAIL
end
def Detect_ClasSwitch__lp_bind_lb_1_rb__a6f6(bind)
(bind[1].size>1) || FAIL
end
def Detect_ClasSwitch__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Detect_ClasSwitch__lp_child_lp_b_f23c(bind)
(child(bind[1][bind[2]],bind[21])&&bind[1][bind[2]]==bind[21]) || FAIL
end
def Detect_ClasSwitch__lp_first_lp_b_1c32(bind)
(first(bind[4])) || FAIL
end
def Detect_ClasSwitch__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Detect_ClasSwitch_bind_lb_1_rb_(bind)
bind[1]|=first(bind[4])
end
def Detect_ClasSwitch_bind_lb_1_rb__dot__cd74(bind)
bind[1].each_index{|i|
      	bind[2]<<[i,predicate(bind[1],i,bind[7])]
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
def Detect_ClasSwitch_bind_lb_3_rb__lt__bb51(bind)
bind[3]<<bind[4]
end
def Detect_ClasSwitch_c_eq_classs_c612(bind)
c=classswitch(bind[1],bind[6],bind[2]);#puts c.inspect;
     c
end
def Detect_ClasSwitch_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def Detect_ClasSwitch_predicat_7e3a(bind)
predicate(bind[1],bind[2],bind[24])
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
def Detect_ClasSwitch_src_dot_rule_d270(bind)
src.rules=bind[8]
end

end



def detect_switch_compiled_by
'32c7a5b9f82343978fb5a29fd225d206'
end
def detect_switch_source_hash
'244a59f70915c3e070230a6a437032d5'
end
def testversiondetect_switch(r)
 raise "invalid version" if r!=detect_switch_version
end
def detect_switch_version
'2cd288c0d68fcce0f8c5c880be950464'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/detect_switch_c"
