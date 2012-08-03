# Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012

class Left_Factor < Traverser_Clone2
  memoize "traverse"
  use_global_memo
end
class Left_Factor < Traverser_Clone2
  def merge(ary)
    return [ary[0]] if ary.size==1
    a=autovar.normalize
    [Seq[Bind[a,first(ary[0])],Or[*(ary.map{|e| rest(e,binds(e,a))})]]]
  end
end

require File.expand_path(File.dirname(__FILE__))+'/Left_Factor.rb'

def left_factor_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def left_factor_source_hash
'a9bd5ffcb46eb68a4b0103dc16afe65f'
end
def testversionleft_factor(r)
 raise "invalid version" if r!=left_factor_version
end
def left_factor_version
''
end
