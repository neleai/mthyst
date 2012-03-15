class Dataflow < Traverser_Clone2
  attr_accessor :ssanums,:oldssanums,:edges
  def initialize
    @edges=Oriented_Graph.new
    @marked=[]
    @ssanums=Hash.new(0)
    @oldssanums=Hash.new(0)
  end
  def ssanum(var)
    return var unless var.is_a? Local
    var=Local[var[0],var[1],oldssanums[var.unssa]]
    var.ssaname
  end

  def newssanum(var)
    return var unless var.is_a? Local
    ssanums[var.unssa]+=1
    oldssanums[var.unssa]=ssanums[var.unssa]
    ssanum(var.unssa)
  end
  def many_end(prev)
    ssanums.each{|var,num|
      if var.is_a?(Local)
        if prev[var.unssa]!=num
          varp=Local[var[0],var[1],prev[var.unssa]]
          varn=Local[var[0],var[1],ssanums[var.unssa]]
          edges.add(varn.ssaname,varp.ssaname )
        end
      end
    }
  end
  def bind_end(exp)
    name=exp.name
    n=newssanum(name)
    bnd=Bind[n,exp.expr]
    val=bnd.expr
    val=val.expr while val.is_a?(Bind) 
    edges.add(val,n)
    bnd
  end
  def or_end(join)
   ssanums.clone.each{|k,v|
      u=[]
      join.each{|s| u<<s[k]}
      if u.uniq.size>=1
        n=newssanum(k)
        u.each{|v| l=Local[k[0],k[1],v]
          edges.add(l.ssaname,n)}
      end
    }
  end
end
class Local
  def ssaname
    self
  end
end


class Dataflow < Traverser_Clone2
  memoize "root"
  use_global_memo
end
require File.expand_path(File.dirname(__FILE__))+'/Dataflow.rb'

require File.expand_path(File.dirname(__FILE__))+'/Dead_Code_Deleter3.rb'

class Forget_SSA < Traverser_Clone2
  memoize "traverse"
  use_global_memo
end
require File.expand_path(File.dirname(__FILE__))+'/Forget_SSA.rb'

def dataflow_ssa_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def dataflow_ssa_source_hash
'0bcdc0282bc2db5fe3be8ea5730aec5d'
end
def testversiondataflow_ssa(r)
 raise "invalid version" if r!=dataflow_ssa_version
end
def dataflow_ssa_version
''
end
