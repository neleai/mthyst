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

require 'compiled/Left_Factor.rb'

def left_factor_compiled_by
'6836af5fdb0d1e998e37f567683dec2f'
end
def left_factor_source_hash
'cec6a4e793cc0036d9ff7a336cb4230b'
end
def testversionleft_factor(r)
 raise "invalid version" if r!=left_factor_version
end
def left_factor_version
'171584b24ee225abf40f69478cd4c70a'
end
