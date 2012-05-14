$nums=0
def cnst(*names); names.map{|name|"#define #{name} #{$nums+=1}\n"}*"";end

$nodes=  [["seq",[["exp*","head"],["exp*","tail"]]],
   ["switch",[["exp*","head"],["array*","alts"]]],
   ["many",[["long","stops"],["exp *","body"]]],
   ["stop",[["long","stops"]]],
   ["bind",[["long","var"]]],
   ["nested",[["exp*","body"]]],
   ["act",[["array*","vars"],["void *","fn"],["void *","arg"]]],
   ["make_lambda",[["exp*","body"]]],
   ["use_lambda",[["long" ,"placeholder"]]],
   ["return",[["long","state"]]],
   ["rule",[["char *","name"],["exp *","body"],["long","locals"]]],
   ["enter",[["exp*","to"]]],
   ["call",[["char *","name"],["exp_rule*","body"],["array*","args"]]],
   ["char",[["char *","str"]]],
   ["head",[]],
   ["advance",[]],
   ["finish",[]],
   ["call_conted",[["struct closure_s*","closure"]]]]
$arg_tp=[["char*","str"],["long","stops"],["struct closure_s*","closure"],["struct cont_s *","cont"]]

$glob_tp= [["struct cont_s **","stack_cont"],["void ***","stack_closure"],["void *","extra"],["void *","memo_extra"],["pfn_mem","memo_get"],["pfn","memo_set"],["pfn","advance"],["pfn","head"],["long","alternatives"]]

$res_tp=[["char*","rstr"],["long","state"]]

$forget_sem_act={}
class RegRegAST
  attr_accessor :forget
  def self.create2(hash)
    n=self.new
    hash.map{|k,v| n.instance_variable_set("@#{k}",v)}
    n
  end
  def self.create(hash,forget=false)
    if forget 
      return $forget_sem_act[[self,hash]] if $forget_sem_act[[self,hash]]
      h2={}
      hash.map{|k,v|  h2[k]= v.is_a?(RegRegAST) ? v.forget : v}
      if    self== Ract
          return nil
      elsif self== Bind
          return nil
      elsif self==Rseq && !h2[:head] 
          return h2[:tail]
      elsif self==Rseq && !h2[:tail] 
          return h2[:head]
      end
      return self.create2(h2)
    else
      f=self.create(hash,true) 
      self.create2(hash.merge({:forget=>f}))
    end
  end
end
class Rchar < RegRegAST
  def inspect
    "RChar[#{@str}]"
  end
end
class Rseq < RegRegAST
  def inspect
    "Rseq[#{@head.inspect},#{@tail.inspect}]"
  end
end
class Rbind < RegRegAST
  def inspect
    "Rbind[#{@var}]"
  end 
end
$nodes.each{|n,a| eval("class R#{n} < RegRegAST;end")}

def init_exp(n)
  $nodes.each{|n2,a| 
    if n==n2
      return "exp_#{n} e; e.tp=TP_#{n};
       #{([["exp*","forget"]]+a).map{|t,v| "e.#{v}=(#{t}) trans(rb_iv_get(exp2,\"@#{v}\"));"}}"
    end
  }
end
