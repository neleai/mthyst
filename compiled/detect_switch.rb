
$hash_Lattice_Minsize={}
class Lattice_Minsize
  attr_accessor :size
  def self.[](a)
    return $hash_Lattice_Minsize[a] if $hash_Lattice_Minsize[a]
    l=self.new
    l.size=a
    $hash_Lattice_Minsize[a]=l
  end
  alias_method :==,:equal?
  def |(a);       Lattice_Minsize[ [size,a.size].min ]; end
  def seqjoin(a); Lattice_Minsize[ size+a.size       ]; end
  def inspect; "Lattice_Minsize[#{size}]";end
end

$hash_Lattice_Maxsize={}
class Lattice_Maxsize
  attr_accessor :size
  def self.[](a)
		a=1.0/0.0 if a>16
    return $hash_Lattice_Maxsize[a] if $hash_Lattice_Maxsize[a]
    l=self.new
    l.size=a
    $hash_Lattice_Maxsize[a]=l
  end
  alias_method :==,:equal?
  def |(a);       Lattice_Maxsize[ [size,a.size].max ]; end
  def seqjoin(a); Lattice_Maxsize[ size+a.size       ]; end
  def inspect;   "Lattice_Maxsize[#{size}            ]";end
end


$hash_Lattices={}
class FirstLattice
  attr_accessor :ary
	def self.[](clas,*ary)
		$hash_Lattices[clas]||={}
		return $hash_Lattices[clas][ary] if $hash_Lattices[clas][ary]
		s=clas.new
		s.ary=ary
		$hash_Lattices[clas][ary]=s
	end  

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

  def cases()
    ary.map{|c| "case #{c}:;"}*""
  end
  def inspect
    self.class.to_s+ary.inspect
  end
end

class Lattice_Char < FirstLattice
  def self.[](*ary)
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
		FirstLattice[Lattice_Char,*nary]
  end
  alias_method :==,:equal?
  def cchar(c)
    return "'#{c.chr}'" if c.chr.inspect.size==3 && c.chr.inspect!='"\'"' && c.ord < 128
    "UC(#{c.ord})"
  end
  def cases()
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

class Lattice_Clas < FirstLattice
  def self.[](*ary)
    ary=ary.uniq.sort_by{|a| a.inspect}.map{|a| eval(a.to_s)}
		FirstLattice[Lattice_Clas,*ary]
  end
  alias_method :==,:equal?
  
  #TODO operations other than |
  #TODO modules
  def &(a)
    n=[]
    ary.each{|u| a.ary.each{|v|
      n<<u if u<=v
      n<<v if v<=u
    }}
    Lattice_Clas[*n.uniq]
  end
end

$hash_Lattice_Cant_Fail={}
class Lattice_Cant_Fail < FirstLattice
	def value;ary[0];end
  def self.[](val)
		FirstLattice[Lattice_Cant_Fail,val]
  end
  def |(a)      ;    Lattice_Cant_Fail[value & a.value];  end
  def seqjoin(a);    Lattice_Cant_Fail[value & a.value];  end
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

class Switch_Clas_Dataflow < First_Dataflow;  def lattice;    Lattice_Clas;        end; end
class Switch_Char_Dataflow < First_Dataflow;  def lattice;    Lattice_Char;        end; end
class Minsize_Dataflow < First_Dataflow      ;  def lattice;    Lattice_Minsize;       end; end
class Maxsize_Dataflow < First_Dataflow      ;  def lattice;    Lattice_Maxsize;       end; end
class Cant_Fail_Dataflow  < First_Dataflow ;  def lattice;    Lattice_Cant_Fail;  end; end


class                       First_Dataflow;  def can_empty?(el);    $sizedf.analyze(el).size==0;  end; end
class Minsize_Dataflow      < First_Dataflow;  def can_empty?(el);    true;                         end; end
class Maxsize_Dataflow      < First_Dataflow;  def can_empty?(el);    true;                         end; end
class Cant_Fail_Dataflow  < First_Dataflow;  def can_empty?(el);    true;                         end; end


class Lattice_Clas;       def self.top;    self[Object];      end;def self.bottom; self[]          ; end; end
class Lattice_Char;       def self.top;    self[[0,255]];     end;def self.bottom; self[]          ; end; end
class Lattice_Minsize;      def self.top;    self[1.0/0.0];     end;def self.bottom; self[0]         ; end; end
class Lattice_Maxsize;      def self.top;    self[1.0/0.0];     end;def self.bottom; self[0]         ; end; end
class Lattice_Cant_Fail;  def self.top;    self[false];       end;def self.bottom; self[true]      ; end; end

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
end

class First_Dataflow < Amethyst

def First_Dataflow_Compiler_ad51(bind)
Compiler.grammars[src.clas].rules[bind[4]].body
end
def First_Dataflow__append_lp__3f99(bind)
_append(bind[16],bind[27])
end
def First_Dataflow__append_lp__a474(bind)
_append(bind[14],bind[15])
end
def First_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def First_Dataflow__d41d(bind)

end
def First_Dataflow__lp_(bind)
(!(can_empty?(bind[18]))) || FAIL
end
def First_Dataflow__lp_Compile_bc2b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[4]]) || FAIL
end
def First_Dataflow_bind_lb_11_rb__4dc0(bind)
bind[11]|lattice.bottom
end
def First_Dataflow_bind_lb_11_rb__7d69(bind)
bind[11].seqjoin(bind[21])
end
def First_Dataflow_bind_lb_16_rb__6275(bind)
bind[16].inject(:|)

end
def First_Dataflow_bind_lb_25_rb__eb7c(bind)
bind[25].is_a?(lattice)? bind[25] & bind[26] : bind[26]
end
def First_Dataflow_depends_lp__5009(bind)
depends(bind[0]);@vals[bind[0]]
end
def First_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end
def First_Dataflow_lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end

end
        

class Minsize_Dataflow < First_Dataflow

def Minsize_Dataflow_Compiler_ad51(bind)
Compiler.grammars[src.clas].rules[bind[4]].body
end
def Minsize_Dataflow__append_lp__3f99(bind)
_append(bind[16],bind[27])
end
def Minsize_Dataflow__append_lp__a474(bind)
_append(bind[14],bind[15])
end
def Minsize_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def Minsize_Dataflow__d41d(bind)

end
def Minsize_Dataflow__lp_(bind)
(!(can_empty?(bind[18]))) || FAIL
end
def Minsize_Dataflow__lp_Compile_bc2b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[4]]) || FAIL
end
def Minsize_Dataflow_bind_lb_11_rb__4dc0(bind)
bind[11]|lattice.bottom
end
def Minsize_Dataflow_bind_lb_11_rb__7d69(bind)
bind[11].seqjoin(bind[21])
end
def Minsize_Dataflow_bind_lb_16_rb__6275(bind)
bind[16].inject(:|)

end
def Minsize_Dataflow_bind_lb_25_rb__eb7c(bind)
bind[25].is_a?(lattice)? bind[25] & bind[26] : bind[26]
end
def Minsize_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end
def Minsize_Dataflow_lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end
def Minsize_Dataflow_lattice_dot__e0e5(bind)
lattice.top
end
def Minsize_Dataflow_lattice_lb__cef9(bind)
lattice[bind[6].size]
end
def Minsize_Dataflow_lattice_lb__fdee(bind)
lattice[1]
end

end


class Maxsize_Dataflow < First_Dataflow

def Maxsize_Dataflow_Compiler_ad51(bind)
Compiler.grammars[src.clas].rules[bind[4]].body
end
def Maxsize_Dataflow__append_lp__3f99(bind)
_append(bind[16],bind[27])
end
def Maxsize_Dataflow__append_lp__a474(bind)
_append(bind[14],bind[15])
end
def Maxsize_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def Maxsize_Dataflow__d41d(bind)

end
def Maxsize_Dataflow__lp_(bind)
(!(can_empty?(bind[18]))) || FAIL
end
def Maxsize_Dataflow__lp_Compile_bc2b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[4]]) || FAIL
end
def Maxsize_Dataflow_bind_lb_11_rb__4dc0(bind)
bind[11]|lattice.bottom
end
def Maxsize_Dataflow_bind_lb_11_rb__7d69(bind)
bind[11].seqjoin(bind[21])
end
def Maxsize_Dataflow_bind_lb_16_rb__6275(bind)
bind[16].inject(:|)

end
def Maxsize_Dataflow_bind_lb_25_rb__eb7c(bind)
bind[25].is_a?(lattice)? bind[25] & bind[26] : bind[26]
end
def Maxsize_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end
def Maxsize_Dataflow_lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end
def Maxsize_Dataflow_lattice_dot__e0e5(bind)
lattice.top
end
def Maxsize_Dataflow_lattice_lb__cef9(bind)
lattice[bind[6].size]
end
def Maxsize_Dataflow_lattice_lb__fdee(bind)
lattice[1]
end

end


class Switch_Char_Dataflow < First_Dataflow

def Switch_Char_Dataflow_Compiler_ad51(bind)
Compiler.grammars[src.clas].rules[bind[4]].body
end
def Switch_Char_Dataflow__append_lp__3f99(bind)
_append(bind[16],bind[27])
end
def Switch_Char_Dataflow__append_lp__a474(bind)
_append(bind[14],bind[15])
end
def Switch_Char_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def Switch_Char_Dataflow__d41d(bind)

end
def Switch_Char_Dataflow__lp_(bind)
(!(can_empty?(bind[18]))) || FAIL
end
def Switch_Char_Dataflow__lp_Compile_bc2b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[4]]) || FAIL
end
def Switch_Char_Dataflow_bind_lb_11_rb__4dc0(bind)
bind[11]|lattice.bottom
end
def Switch_Char_Dataflow_bind_lb_11_rb__7d69(bind)
bind[11].seqjoin(bind[21])
end
def Switch_Char_Dataflow_bind_lb_16_rb__6275(bind)
bind[16].inject(:|)

end
def Switch_Char_Dataflow_bind_lb_25_rb__eb7c(bind)
bind[25].is_a?(lattice)? bind[25] & bind[26] : bind[26]
end
def Switch_Char_Dataflow_firstcha_c300(bind)
firstchar(bind[7])
end
def Switch_Char_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end
def Switch_Char_Dataflow_lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end
def Switch_Char_Dataflow_lattice_dot__e0e5(bind)
lattice.top
end
def Switch_Char_Dataflow_regchar_lp__9b27(bind)
regchar(bind[7])
end

end


class Switch_Clas_Dataflow < First_Dataflow

def Switch_Clas_Dataflow_Compiler_ad51(bind)
Compiler.grammars[src.clas].rules[bind[4]].body
end
def Switch_Clas_Dataflow__append_lp__3f99(bind)
_append(bind[16],bind[27])
end
def Switch_Clas_Dataflow__append_lp__a474(bind)
_append(bind[14],bind[15])
end
def Switch_Clas_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def Switch_Clas_Dataflow__d41d(bind)

end
def Switch_Clas_Dataflow__lp_(bind)
(!(can_empty?(bind[18]))) || FAIL
end
def Switch_Clas_Dataflow__lp_Compile_bc2b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[4]]) || FAIL
end
def Switch_Clas_Dataflow_bind_lb_11_rb__4dc0(bind)
bind[11]|lattice.bottom
end
def Switch_Clas_Dataflow_bind_lb_11_rb__7d69(bind)
bind[11].seqjoin(bind[21])
end
def Switch_Clas_Dataflow_bind_lb_16_rb__6275(bind)
bind[16].inject(:|)

end
def Switch_Clas_Dataflow_bind_lb_25_rb__eb7c(bind)
bind[25].is_a?(lattice)? bind[25] & bind[26] : bind[26]
end
def Switch_Clas_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end
def Switch_Clas_Dataflow_lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end
def Switch_Clas_Dataflow_lattice_lb__d8d7(bind)
lattice[bind[3]]
end

end



class Cant_Fail_Dataflow < First_Dataflow

def Cant_Fail_Dataflow_Compiler_ad51(bind)
Compiler.grammars[src.clas].rules[bind[4]].body
end
def Cant_Fail_Dataflow__append_lp__3f99(bind)
_append(bind[16],bind[27])
end
def Cant_Fail_Dataflow__append_lp__a474(bind)
_append(bind[14],bind[15])
end
def Cant_Fail_Dataflow__at_vis_eq_bin_af53(bind)
@vis=bind[0]; bind[0]
end
def Cant_Fail_Dataflow__d41d(bind)

end
def Cant_Fail_Dataflow__lp_(bind)
(!(can_empty?(bind[18]))) || FAIL
end
def Cant_Fail_Dataflow__lp_Compile_bc2b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[4]]) || FAIL
end
def Cant_Fail_Dataflow__lp_src_dot_pre_c6b8(bind)
(src.pred) || FAIL
end
def Cant_Fail_Dataflow_bind_lb_11_rb__4dc0(bind)
bind[11]|lattice.bottom
end
def Cant_Fail_Dataflow_bind_lb_11_rb__7d69(bind)
bind[11].seqjoin(bind[21])
end
def Cant_Fail_Dataflow_bind_lb_16_rb__6275(bind)
bind[16].inject(:|)

end
def Cant_Fail_Dataflow_bind_lb_25_rb__eb7c(bind)
bind[25].is_a?(lattice)? bind[25] & bind[26] : bind[26]
end
def Cant_Fail_Dataflow_lattice_dot__3340(bind)
lattice.bottom

end
def Cant_Fail_Dataflow_lattice_dot__4869(bind)
lattice.top

end
def Cant_Fail_Dataflow_lattice_dot__5a9e(bind)
lattice.bottom
end
def Cant_Fail_Dataflow_lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end
def Cant_Fail_Dataflow_src_dot_to_5e99(bind)
src.to
end

end


class Detect_First< Traverser_Clone2;   def can_empty?(s);    $sizedf.analyze(s).size==0;  end; end

def must_empty?(s);  $maxsize_df.analyze(s).size==0; end
def cant_fail?(s);   $cant_fail_df.analyze(s).value;  end

class Detect_Switch_Char < Detect_First
  def initialize
    if !$sizedf  
      $sizedf    =Minsize_Dataflow.new;      $sizedf.parse(:root,[])
      $maxsize_df=Maxsize_Dataflow.new;      $maxsize_df.parse(:root,[])
      $cant_fail_df =Cant_Fail_Dataflow.new;       $cant_fail_df.parse(:root,[])
    end
    if !$switchdf_char
      $switchdf_char=Switch_Char_Dataflow.new;     $switchdf_char.parse(:root,[])
    end
  end
  def first(s)
    $switchdf_char.analyze(s)
  end
end

class Detect_Switch_Clas < Detect_First
  def initialize
    if !$sizedf  
      $sizedf=Minsize_Dataflow.new
      $sizedf.parse(:root,[])
    end
    if !$switchdf_clas
      $switchdf_clas=Switch_Clas_Dataflow.new
      $switchdf_clas.parse(:root,[])
    end
  end
  def first(s)
    $switchdf_clas.analyze(s)
  end
end

class Detect_First < Traverser_Clone2

def Detect_First__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
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
def Detect_First__lp_cant_fa_6b5d(bind)
(cant_fail?(bind[0]) ) || FAIL
end
def Detect_First__lp_must_em_e2d0(bind)
(must_empty?(bind[0])) || FAIL
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


#TODO we can do unicode almost unchanged but we need test againist first byte of character

class Detect_Switch_Char < Detect_First

def Detect_Switch_Char_Or_lb__ti_bind_c2f4(bind)
Or[*bind[25]]
end
def Detect_Switch_Char_Seq_lb__ti__lp_bi_978c(bind)
Seq[*(bind[43]+bind[47])]
end
def Detect_Switch_Char_Seq_lb__ti__lp_bi_99e6(bind)
Seq[*(bind[1]+bind[4])]
end
def Detect_Switch_Char_Switch_C_4343(bind)
Switch_Char[{:ary=>bind[4].map{|p,a| [p,Seq[*(bind[1]+[a]+bind[7])]]}}] 
end
def Detect_Switch_Char_Switch_C_525a(bind)
Switch_Char[{:ary=>bind[3].map{|p,a| [p,Or[*a]]}}]
end
def Detect_Switch_Char_Switch_C_7979(bind)
Switch_Char[{:ary=>bind[47].map{|p,a| [p,Seq[*(bind[43]+[a]+bind[50])]]}}] 
end
def Detect_Switch_Char_Switch_C_f048(bind)
Switch_Char[{:ary=>bind[30].map{|p,a| [p,Or[*a]]}}]
end
def Detect_Switch_Char__append_lp__403b(bind)
_append(bind[39],bind[40])
end
def Detect_Switch_Char__append_lp__6f56(bind)
_append(bind[5],bind[6])
end
def Detect_Switch_Char__append_lp__7352(bind)
_append(bind[4],bind[7])
end
def Detect_Switch_Char__append_lp__89bf(bind)
_append(bind[23],bind[24])
end
def Detect_Switch_Char__append_lp__9708(bind)
_append(bind[48],bind[49])
end
def Detect_Switch_Char__append_lp__a848(bind)
_append(bind[51],bind[52])
end
def Detect_Switch_Char__append_lp__b375(bind)
_append(bind[8],bind[9])
end
def Detect_Switch_Char__append_lp__b494(bind)
_append(bind[0],bind[10])
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
(!can_empty?(src) && bind[6]!=Lattice_Char.top) || FAIL
end
def Detect_Switch_Char__lp_2(bind)
(!bind[26]) || FAIL
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
def Detect_Switch_Char_bind_lb_25_rb__7abb(bind)
bind[25].each{|i| bind[26]=true if i.is_a?(Switch_Char)}
end
def Detect_Switch_Char_bind_lb_30_rb__6a34(bind)
bind[30].map{|p,a| [p,a+[bind[35]]]}
end
def Detect_Switch_Char_bind_lb_30_rb__b007(bind)
bind[30].each{|p,a| bind[32].each{|p2,a2| bind[33] << [p&p2,a+[a2]] if p&p2!=Lattice_Char.bottom}}
end
def Detect_Switch_Char_bind_lb_3_rb__dot__2d57(bind)
bind[3].map{|p,a| [p,a+[bind[5]]]}
end
def Detect_Switch_Char_bind_lb_3_rb__dot__8725(bind)
bind[3].each{|p,a| bind[1].each{|p2,a2| bind[2] << [p&p2,a+[a2]] if p&p2!=Lattice_Char.bottom}}
end
def Detect_Switch_Char_bind_lb_43_rb__7019(bind)
bind[43]+[bind[44]]
end
def Detect_Switch_Char_bind_lb_5_rb__lt__1671(bind)
bind[5]<<bind[6]
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
def Detect_Switch_Char_s_eq_Switch_33aa(bind)
s=Switch_Char[{:ary=>[[bind[6],Apply["advance_char"]],[~bind[6],Apply["fails"]]]}]
end
def Detect_Switch_Char_s_eq_Switch_a189(bind)
s=Switch_Char[{:ary=>[[bind[6],Many[bind[20]]],[~bind[6],Apply["fails"]]]}] 
end
def Detect_Switch_Char_s_eq_Switch_bce7(bind)
s=Switch_Char[{:ary=>[[bind[6],Seq[Apply["advance_char"],Apply["_seq",CAct[bind[12][1..-1]]]]],[~bind[6],Apply["fails"]]]}]
end
def Detect_Switch_Char_s_eq_Switch_fcb6(bind)
s=Switch_Char[{:ary=>[[bind[6],src],[~bind[6],Apply["fails"]]]}] 
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

def Detect_Switch_Clas_Or_lb__ti_bind_4a6a(bind)
Or[*bind[18]]
end
def Detect_Switch_Clas_Seq_lb__ti__lp_bi_99e6(bind)
Seq[*(bind[1]+bind[4])]
end
def Detect_Switch_Clas_Seq_lb__ti__lp_bi_f058(bind)
Seq[*(bind[36]+bind[40])]
end
def Detect_Switch_Clas_Switch_C_4c94(bind)
Switch_Clas[{:ary=>bind[4].map{|p,a| [p,Seq[*(bind[1]+[a]+bind[7])]]}}] 
end
def Detect_Switch_Clas_Switch_C_5249(bind)
Switch_Clas[{:ary=>bind[40].map{|p,a| [p,Seq[*(bind[36]+[a]+bind[43])]]}}] 
end
def Detect_Switch_Clas_Switch_C_5685(bind)
Switch_Clas[{:ary=>bind[23].map{|p,a| [p,Or[*a]]}}]
end
def Detect_Switch_Clas_Switch_C_690a(bind)
Switch_Clas[[Lattice_Clas[bind[6]],Apply["advance_clas"]],[Lattice_Clas[Object],Apply["fails"]]].freeze 
end
def Detect_Switch_Clas_Switch_C_c382(bind)
Switch_Clas[{:ary=>bind[3].map{|p,a| [p,Or[*a]]}}]
end
def Detect_Switch_Clas__append_lp__54e8(bind)
_append(bind[16],bind[17])
end
def Detect_Switch_Clas__append_lp__5600(bind)
_append(bind[44],bind[45])
end
def Detect_Switch_Clas__append_lp__599a(bind)
_append(bind[41],bind[42])
end
def Detect_Switch_Clas__append_lp__6f56(bind)
_append(bind[5],bind[6])
end
def Detect_Switch_Clas__append_lp__7352(bind)
_append(bind[4],bind[7])
end
def Detect_Switch_Clas__append_lp__b375(bind)
_append(bind[8],bind[9])
end
def Detect_Switch_Clas__append_lp__b494(bind)
_append(bind[0],bind[10])
end
def Detect_Switch_Clas__append_lp__b601(bind)
_append(bind[32],bind[33])
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
(!can_empty?(src) && !bind[13].ary.include?(Object)) || FAIL
end
def Detect_Switch_Clas__lp_2(bind)
(!bind[19]) || FAIL
end
def Detect_Switch_Clas__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Detect_Switch_Clas__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Detect_Switch_Clas_bind_lb_18_rb__473b(bind)
bind[18].each{|i| bind[19]=true if i.is_a?(Switch_Clas)}
end
def Detect_Switch_Clas_bind_lb_1_rb__pl__42be(bind)
bind[1]+[bind[0]]
end
def Detect_Switch_Clas_bind_lb_23_rb__a500(bind)
bind[23].map{|p,a| [p,a+[bind[28]]]}
end
def Detect_Switch_Clas_bind_lb_23_rb__df0c(bind)
bind[23].each{|p,a| bind[25].each{|p2,a2| bind[26] << [p&p2,a+[a2]] if p&p2!=Lattice_Clas.bottom}}
end
def Detect_Switch_Clas_bind_lb_36_rb__d467(bind)
bind[36]+[bind[37]]
end
def Detect_Switch_Clas_bind_lb_3_rb__dot__2d57(bind)
bind[3].map{|p,a| [p,a+[bind[5]]]}
end
def Detect_Switch_Clas_bind_lb_3_rb__dot__991d(bind)
bind[3].each{|p,a| bind[1].each{|p2,a2| bind[2] << [p&p2,a+[a2]] if p&p2!=Lattice_Clas.bottom}}
end
def Detect_Switch_Clas_bind_lb_5_rb__lt__1671(bind)
bind[5]<<bind[6]
end
def Detect_Switch_Clas_c_eq_Switch_95cc(bind)
c=Switch_Clas[{:ary=>bind[13].ary.map{|a| [Lattice_Clas[a],src]}+[[Lattice_Clas[Object],Apply["fails"]]]}];puts c.inspect;c 
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


class Detect_Size < Amethyst

def Detect_Size_Or_dot_creat_e046(bind)
Or.create( {:ary=>bind[12] })
end
def Detect_Size_Seq_dot_crea_c73f(bind)
Seq.create( {:ary=>bind[12] })
end
def Detect_Size__append_lp__50ed(bind)
_append(bind[14],bind[16])
end
def Detect_Size__append_lp__b93e(bind)
_append(bind[3],bind[11])
end
def Detect_Size__append_lp__c354(bind)
_append(bind[9],bind[11])
end
def Detect_Size__lb_bind_lb_3_rb__5ee3(bind)
[bind[3],bind[1]].max
end
def Detect_Size__lb_bind_lb_5_rb__a14a(bind)
[bind[5],bind[7]].max
end
def Detect_Size__sh_lowleve_46e8(bind)
#lowlevel representation that cant fail

end
def Detect_Size_bind_lb_1_rb__gt__c449(bind)
bind[1]>bind[3] ? Seq[Apply["test_size",Act[bind[1]]],bind[0]] : bind[0]

end
def Detect_Size_bind_lb_4_rb__eq__2130(bind)
bind[4]=[bind[4]-maxsize(bind[15]),0].max
end
def Detect_Size_bind_lb_7_rb__eq__59fb(bind)
bind[7]=[bind[7]-maxsize(bind[15]),0].max
end
def Detect_Size_bind_lb_7_rb__gt__20b4(bind)
bind[7]>bind[5] ? Seq[Apply["test_size",Act[bind[7]]],bind[6]] : bind[6]

end
def Detect_Size_minsize_lp__b431(bind)
minsize(bind[6])
end
def Detect_Size_minsize_lp__d769(bind)
minsize(bind[0])
end

end


def detect_switch_compiled_by
'0b1ee91cf2c0a80614489fb434efed14'
end
def detect_switch_source_hash
'd3b8b009a48f245a79f681b4914082b1'
end
def testversiondetect_switch(r)
 raise "invalid version" if r!=detect_switch_version
end
def detect_switch_version
'0173f11e522959debe19965847146170'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/detect_switch_c"
