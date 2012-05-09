$nums=0
def cnst(*names); names.map{|name|"#define #{name} #{$nums+=1}\n"}*"";end

$nodes=  [["seq",[["exp*","head"],["exp*","tail"]]],
   ["switch",[["exp*","head"],["exp **","alts"]]],
   ["many",[["long","stops"],["exp *","body"]]],
   ["stop",[["long","stops"]]],
   ["bind",[["long","var"]]],
   ["nested",[["exp*","body"]]],
   ["act",[["long","varc"],["long *","vars"],["void *","fn"],["void *","arg"]]],
   ["make_lambda",[["exp*","body"]]],
   ["use_lambda",[["long" ,"placeholder"]]],
   ["return",[["long","state"]]],
   ["rule",[["char *","name"],["exp *","body"]]],
   ["enter",[["exp*","to"]]],
   ["call",[["char *","name"],["exp_rule*","body"],["long","argc"],["long *","afrom"],["long *","ato"],["long","locals"]]],
   ["char",[["char *","str"]]]]

$arg_tp=[["char*","str"],["long","stops"],["void**","closure"],["char *","cont"]]

$res_tp=[["char*","rstr"],["long","state"],["void*","returned"]]

class RegRegAST
  def self.create(hash)
    n=self.new
    hash.map{|k,v| n.instance_variable_set("@#{k}",v)}
    n
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
