
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

def _Compiler_558e(bind)
Compiler.grammars[src.clas].rules[bind[1]].body
end
def _Switch_O_5445(bind)
Switch_Or.create(:ary=>bind[1].map{|k| [nil,k]})

end
def __at_vis_eq_bin_8b89(bind)
@vis=bind[1]; bind[1]
end
def __d41d(bind)

end
def __lp_(bind)
(!(can_empty?(bind[1]))) || FAIL
end
def __lp_Compile_7f7b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[1]]) || FAIL
end
def _bind_lb_1_rb_(bind)
bind[1]|lattice.bottom
end
def _bind_lb_1_rb__dot__159a(bind)
bind[1].seqjoin(bind[2])
end
def _bind_lb_1_rb__dot__a37c(bind)
bind[1].inject(:|)

end
def _bind_lb_1_rb__dot__c5d5(bind)
bind[1].is_a?(lattice)? bind[1] & bind[2] : bind[2]
end
def _depends_lp__7463(bind)
depends(bind[1]);@vals[bind[1]]
end
def _lattice_dot__5a9e(bind)
lattice.bottom
end
def _lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end

end
        

class Minsize_Dataflow < First_Dataflow

def _Compiler_558e(bind)
Compiler.grammars[src.clas].rules[bind[1]].body
end
def __at_vis_eq_bin_8b89(bind)
@vis=bind[1]; bind[1]
end
def __d41d(bind)

end
def __lp_(bind)
(!(can_empty?(bind[1]))) || FAIL
end
def __lp_Compile_7f7b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[1]]) || FAIL
end
def _bind_lb_1_rb_(bind)
bind[1]|lattice.bottom
end
def _bind_lb_1_rb__dot__159a(bind)
bind[1].seqjoin(bind[2])
end
def _bind_lb_1_rb__dot__a37c(bind)
bind[1].inject(:|)

end
def _bind_lb_1_rb__dot__c5d5(bind)
bind[1].is_a?(lattice)? bind[1] & bind[2] : bind[2]
end
def _lattice_dot__5a9e(bind)
lattice.bottom
end
def _lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end
def _lattice_dot__e0e5(bind)
lattice.top
end
def _lattice_lb__bbba(bind)
lattice[bind[1].size]
end
def _lattice_lb__fdee(bind)
lattice[1]
end

end


class Maxsize_Dataflow < First_Dataflow

def _Compiler_558e(bind)
Compiler.grammars[src.clas].rules[bind[1]].body
end
def __at_vis_eq_bin_8b89(bind)
@vis=bind[1]; bind[1]
end
def __d41d(bind)

end
def __lp_(bind)
(!(can_empty?(bind[1]))) || FAIL
end
def __lp_Compile_7f7b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[1]]) || FAIL
end
def _bind_lb_1_rb_(bind)
bind[1]|lattice.bottom
end
def _bind_lb_1_rb__dot__159a(bind)
bind[1].seqjoin(bind[2])
end
def _bind_lb_1_rb__dot__a37c(bind)
bind[1].inject(:|)

end
def _bind_lb_1_rb__dot__c5d5(bind)
bind[1].is_a?(lattice)? bind[1] & bind[2] : bind[2]
end
def _lattice_dot__5a9e(bind)
lattice.bottom
end
def _lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end
def _lattice_dot__e0e5(bind)
lattice.top
end
def _lattice_lb__bbba(bind)
lattice[bind[1].size]
end
def _lattice_lb__fdee(bind)
lattice[1]
end

end


class Complexity_Dataflow < First_Dataflow

def _Compiler_558e(bind)
Compiler.grammars[src.clas].rules[bind[1]].body
end
def __at_vis_eq_bin_8b89(bind)
@vis=bind[1]; bind[1]
end
def __lp_Compile_7f7b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[1]]) || FAIL
end
def _lattice_lb__11f0(bind)
lattice[20*bind[1].value]

end
def _lattice_lb__5911(bind)
lattice[bind[1].map{|w| w.value}.inject(:+)]

end
def _lattice_lb__6ee3(bind)
lattice[1]

end
def _lattice_lb__ba7e(bind)
lattice[2*bind[1].value]

end
def _lattice_lb__f621(bind)
lattice[bind[1].map{|w| w.value}.max+1]

end

end


class Switch_Char_Dataflow < First_Dataflow

def _Compiler_558e(bind)
Compiler.grammars[src.clas].rules[bind[1]].body
end
def __at_vis_eq_bin_8b89(bind)
@vis=bind[1]; bind[1]
end
def __d41d(bind)

end
def __lp_(bind)
(!(can_empty?(bind[1]))) || FAIL
end
def __lp_Compile_7f7b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[1]]) || FAIL
end
def _bind_lb_1_rb_(bind)
bind[1]|lattice.bottom
end
def _bind_lb_1_rb__dot__159a(bind)
bind[1].seqjoin(bind[2])
end
def _bind_lb_1_rb__dot__a37c(bind)
bind[1].inject(:|)

end
def _bind_lb_1_rb__dot__c5d5(bind)
bind[1].is_a?(lattice)? bind[1] & bind[2] : bind[2]
end
def _firstcha_f284(bind)
firstchar(bind[1])
end
def _lattice_dot__5a9e(bind)
lattice.bottom
end
def _lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end
def _lattice_dot__e0e5(bind)
lattice.top
end
def _regchar_lp__90af(bind)
regchar(bind[1])
end

end


class Switch_Clas_Dataflow < First_Dataflow

def _Compiler_558e(bind)
Compiler.grammars[src.clas].rules[bind[1]].body
end
def __at_vis_eq_bin_8b89(bind)
@vis=bind[1]; bind[1]
end
def __d41d(bind)

end
def __lp_(bind)
(!(can_empty?(bind[1]))) || FAIL
end
def __lp_Compile_7f7b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[1]]) || FAIL
end
def _bind_lb_1_rb_(bind)
bind[1]|lattice.bottom
end
def _bind_lb_1_rb__dot__159a(bind)
bind[1].seqjoin(bind[2])
end
def _bind_lb_1_rb__dot__a37c(bind)
bind[1].inject(:|)

end
def _bind_lb_1_rb__dot__c5d5(bind)
bind[1].is_a?(lattice)? bind[1] & bind[2] : bind[2]
end
def _lattice_dot__3340(bind)
lattice.bottom

end
def _lattice_dot__5a9e(bind)
lattice.bottom
end
def _lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end
def _lattice_lb__becc(bind)
lattice[bind[1]]

end

end



class Cant_Fail_Dataflow < First_Dataflow

def _Compiler_558e(bind)
Compiler.grammars[src.clas].rules[bind[1]].body
end
def __at_vis_eq_bin_8b89(bind)
@vis=bind[1]; bind[1]
end
def __d41d(bind)

end
def __lp_(bind)
(!(can_empty?(bind[1]))) || FAIL
end
def __lp_Compile_7f7b(bind)
(Compiler.grammars[src.clas]&&Compiler.grammars[src.clas].rules[bind[1]]) || FAIL
end
def __lp_src_dot_pre_c6b8(bind)
(src.pred) || FAIL
end
def _bind_lb_1_rb_(bind)
bind[1]|lattice.bottom
end
def _bind_lb_1_rb__dot__159a(bind)
bind[1].seqjoin(bind[2])
end
def _bind_lb_1_rb__dot__a37c(bind)
bind[1].inject(:|)

end
def _bind_lb_1_rb__dot__c5d5(bind)
bind[1].is_a?(lattice)? bind[1] & bind[2] : bind[2]
end
def _lattice_dot__3340(bind)
lattice.bottom

end
def _lattice_dot__4869(bind)
lattice.top

end
def _lattice_dot__5a9e(bind)
lattice.bottom
end
def _lattice_dot__b0f6(bind)
lattice.top|lattice.bottom
end
def _lattice_lb__0ff9(bind)
lattice[bind[1].map{|e|e.value}.inject(:|)]

end
def _src_dot_to_5e99(bind)
src.to
end

end


class Detect_First< Traverser_Clone2;   def can_empty?(s);    $sizedf.analyze(s).size==0;  end; end

def can_empty?(el);    $sizedf.analyze(el).size==0;  end
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

def _Seq_lb__ti__lp_bi_a321(bind)
Seq[*(bind[1]+bind[2])]
end
def __at__contex_160a(bind)
@_context_arguments||={};bind[1]=@_context_arguments.dup
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __do_rules_eq__le__ab16(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def __lp_cant_fa_17ef(bind)
(cant_fail?(bind[1]) ) || FAIL
end
def __lp_must_em_43e9(bind)
(must_empty?(bind[1])) || FAIL
end
def _bind_lb_1_rb__dot__642a(bind)
bind[1].each{|p,a| bind[2].each{|p2,a2| bind[3] << [p&p2,a+[a2]] if p&p2!=bind[4].bottom}}
end
def _bind_lb_1_rb__dot__a482(bind)
bind[1].map{|p,a| [p,a+[bind[2]]]}
end
def _bind_lb_1_rb__lb__0f18(bind)
bind[1][{:ary=>bind[2].map{|p,a| [p,Or[*a]]}}]
end
def _bind_lb_1_rb__lb__75a5(bind)
bind[1][{:ary=>bind[2].map{|p,a| [p,Seq[*(bind[3]+[a]+bind[4])]]}}] 
end
def _bind_lb_1_rb__lb__fa06(bind)
bind[1][:name]=src.name
end
def _bind_lb_1_rb__pl__4651(bind)
bind[1]+[bind[2]]
end
def _src_25d9(bind)
src
end
def _src_dot_ary_d5cf(bind)
src.ary
end
def _src_dot_rule_5acf(bind)
src.rules
end
def _src_dot_rule_a719(bind)
src.rules=bind[1]
end

end


#TODO we can do unicode almost unchanged but we need test againist first byte of character

class Detect_Switch_Char < Detect_First
  memoize "traverse"
  use_global_memo
end
class Detect_Switch_Char < Detect_First

def _Or_lb__ti_bind_d486(bind)
Or[*bind[1]]
end
def _Seq_lb__ti__lp_bi_a321(bind)
Seq[*(bind[1]+bind[2])]
end
def __at__contex_160a(bind)
@_context_arguments||={};bind[1]=@_context_arguments.dup
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __do_rules_eq__le__ab16(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def __lb__lb_Lattic_d322(bind)
[[Lattice_Char.top,[]]]
end
def __lp_(bind)
(!can_empty?(src) && bind[1]!=Lattice_Char.top) || FAIL
end
def __lp_2(bind)
(!bind[1]) || FAIL
end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__dot__642a(bind)
bind[1].each{|p,a| bind[2].each{|p2,a2| bind[3] << [p&p2,a+[a2]] if p&p2!=bind[4].bottom}}
end
def _bind_lb_1_rb__dot__a482(bind)
bind[1].map{|p,a| [p,a+[bind[2]]]}
end
def _bind_lb_1_rb__dot__bb04(bind)
bind[1].each{|i| bind[2]=true if i.is_a?(Switch_Char)}
end
def _bind_lb_1_rb__lb__0f18(bind)
bind[1][{:ary=>bind[2].map{|p,a| [p,Or[*a]]}}]
end
def _bind_lb_1_rb__lb__75a5(bind)
bind[1][{:ary=>bind[2].map{|p,a| [p,Seq[*(bind[3]+[a]+bind[4])]]}}] 
end
def _bind_lb_1_rb__lb__fa06(bind)
bind[1][:name]=src.name
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__pl__4651(bind)
bind[1]+[bind[2]]
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _first_lp_sr_3298(bind)
first(src)
end
def _if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def _s_eq_Switch_78a6(bind)
s=Switch_Char[{:ary=>[[bind[1],Seq[Apply["advance_char"],Apply["_seq",CAct[bind[2][1..-1]]]]],[~bind[1],Apply["fails"]]]}]
end
def _s_eq_Switch_7c35(bind)
s=Switch_Char[{:ary=>[[bind[1],src],[~bind[1],Apply["fails"]]]}] 
end
def _s_eq_Switch_df23(bind)
s=Switch_Char[{:ary=>[[bind[1],Apply["advance_char"]],[~bind[1],Apply["fails"]]]}]
end
def _src_25d9(bind)
src
end
def _src_dot_ary_d5cf(bind)
src.ary
end
def _src_dot_rule_5acf(bind)
src.rules
end
def _src_dot_rule_a719(bind)
src.rules=bind[1]
end

end


class Detect_Switch_Clas < Detect_First
  memoize "traverse"
  use_global_memo
end
class Detect_Switch_Clas < Detect_First

def _Or_lb__ti_bind_d486(bind)
Or[*bind[1]]
end
def _Seq_lb__ti__lp_bi_a321(bind)
Seq[*(bind[1]+bind[2])]
end
def _Switch_C_63f7(bind)
Switch_Clas[[Lattice_Clas[bind[1]],Apply["advance_clas"]],[Lattice_Clas[Object],Apply["fails"]]].freeze 
end
def __at__contex_160a(bind)
@_context_arguments||={};bind[1]=@_context_arguments.dup
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __do_rules_eq__le__ab16(bind)
$rules={};src.rules.each{|r| $rules[r.name]=r}
end
def __lb__lb_Lattic_62e5(bind)
[[Lattice_Clas.top,[]]]
end
def __lp_(bind)
(!can_empty?(src) && !bind[1].ary.include?(Object)) || FAIL
end
def __lp_2(bind)
(!bind[1]) || FAIL
end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__dot__642a(bind)
bind[1].each{|p,a| bind[2].each{|p2,a2| bind[3] << [p&p2,a+[a2]] if p&p2!=bind[4].bottom}}
end
def _bind_lb_1_rb__dot__76da(bind)
bind[1].each{|i| bind[2]=true if i.is_a?(Switch_Clas)}
end
def _bind_lb_1_rb__dot__a482(bind)
bind[1].map{|p,a| [p,a+[bind[2]]]}
end
def _bind_lb_1_rb__lb__0f18(bind)
bind[1][{:ary=>bind[2].map{|p,a| [p,Or[*a]]}}]
end
def _bind_lb_1_rb__lb__75a5(bind)
bind[1][{:ary=>bind[2].map{|p,a| [p,Seq[*(bind[3]+[a]+bind[4])]]}}] 
end
def _bind_lb_1_rb__lb__fa06(bind)
bind[1][:name]=src.name
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__pl__4651(bind)
bind[1]+[bind[2]]
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _c_eq_Switch_4e5f(bind)
c=Switch_Clas[{:ary=>bind[1].ary.map{|a| [Lattice_Clas[a],src]}+[[Lattice_Clas[Object],Apply["fails"]]]}];puts c.inspect;c 
end
def _if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def _src_25d9(bind)
src
end
def _src_dot_ary_d5cf(bind)
src.ary
end
def _src_dot_rule_5acf(bind)
src.rules
end
def _src_dot_rule_a719(bind)
src.rules=bind[1]
end

end


class Detect_Size < Amethyst

def _Or_dot_creat_49b2(bind)
Or.create( {:ary=>bind[1] })
end
def _Seq_dot_crea_bfbb(bind)
Seq.create( {:ary=>bind[1] })
end
def __lb_bind_lb_1_rb__2d76(bind)
[bind[1],bind[2]].max
end
def __sh_lowleve_46e8(bind)
#lowlevel representation that cant fail

end
def _bind_lb_1_rb__eq__28f0(bind)
bind[1]=[bind[1]-maxsize(bind[2]),0].max
end
def _bind_lb_1_rb__gt__f573(bind)
bind[1]>bind[2] ? Seq[Apply["test_size",Act[bind[1]]],bind[3]] : bind[3]

end
def _minsize_lp__01f0(bind)
minsize(bind[1])
end

end


def detect_switch_compiled_by
'2d751ddda15b029da7579346bd3bec1c'
end
def detect_switch_source_hash
'db1b99a9478567e449dc48d0774c821b'
end
def testversiondetect_switch(r)
 raise "invalid version" if r!=detect_switch_version
end
def detect_switch_version
'bdbc44ec3bb8af6ebd8ad48bc36718d3'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/detect_switch_c"
