# Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012

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
    return ~(regchar("/["+s[3...-2]+"]/")|Lattice_Char[[0,0]]) if s[2]==?^ 
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

require File.expand_path(File.dirname(__FILE__))+'/First_Dataflow.rb'        

require File.expand_path(File.dirname(__FILE__))+'/Minsize_Dataflow.rb'

require File.expand_path(File.dirname(__FILE__))+'/Maxsize_Dataflow.rb'

require File.expand_path(File.dirname(__FILE__))+'/Complexity_Dataflow.rb'

require File.expand_path(File.dirname(__FILE__))+'/Switch_Char_Dataflow.rb'

require File.expand_path(File.dirname(__FILE__))+'/Switch_Clas_Dataflow.rb'


require File.expand_path(File.dirname(__FILE__))+'/Cant_Fail_Dataflow.rb'



require File.expand_path(File.dirname(__FILE__))+'/Detect_First.rb'


class Detect_Switch_Char < Detect_First
  def first(s); first_char(s); end
end

class Detect_Switch_Clas < Detect_First
  def first(s); first_clas(s); end  
end



#TODO we can do unicode almost unchanged but we need test againist first byte of character

class Detect_Switch_Char < Detect_First
  memoize "traverse"
  use_global_memo
end
require File.expand_path(File.dirname(__FILE__))+'/Detect_Switch_Char.rb'

class Detect_Switch_Clas < Detect_First
  memoize "traverse"
  use_global_memo
end
require File.expand_path(File.dirname(__FILE__))+'/Detect_Switch_Clas.rb'

require File.expand_path(File.dirname(__FILE__))+'/Detect_Size.rb'

def detect_switch_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def detect_switch_source_hash
'86ea752c554e50fabd7ee8868121f569'
end
def testversiondetect_switch(r)
 raise "invalid version" if r!=detect_switch_version
end
def detect_switch_version
''
end
