class Normalize < Amethyst
def self.act(*args);self.new.parse(:act,*args);end
def self.apply2(*args);self.new.parse(:apply2,*args);end
def self.bind(*args);self.new.parse(:bind,*args);end
def self.cant_fail(*args);self.new.parse(:cant_fail,*args);end
def self.defer_acts(*args);self.new.parse(:defer_acts,*args);end
def self.must_empty(*args);self.new.parse(:must_empty,*args);end
def self.or(*args);self.new.parse(:or,*args);end
def self.seq2(*args);self.new.parse(:seq2,*args);end
def self.switch(*args);self.new.parse(:switch,*args);end
def _Act_dot_crea_e434(bind)
Act.create(src,{:pure=>true}).freeze 
end
def _Apply_lb__dq_e_619e(bind)
Apply["empty"]
end
def _Apply_lb__dq_f_3881(bind)
Apply["fails"]

end
def _Apply_lb_bi_3b85(bind)
Apply[bind[1],*bind[2],{:clas=> resolvegrammar($current_grammar_name,bind[1])}] 

end
def _CAct_lb_eva_559c(bind)
CAct[eval(src.ary[0])]

end
def _Or_dot_creat_a50c(bind)
Or.create({:ary=>bind[1]})

end
def _Placehol_6875(bind)
Placeholder
end
def _Placehol_a03d(bind)
Placeholder

end
def _Seq_dot_crea_0a81(bind)
Seq.create({:ary=>bind[1]})

end
def _Seq_lb_Bind_1036(bind)
Seq[Bind[bind[1],bind[2]],bind[3]]

end
def _Seq_lb_bind_b819(bind)
Seq[bind[1],Bind[bind[2],bind[3]]]

end
def _Seq_lb_bind_c98f(bind)
Seq[bind[1][0...-1]]
end
def _Switch_O_5445(bind)
Switch_Or.create(:ary=>bind[1].map{|k| [nil,k]})

end
def __lp_bind_lb_1_rb__abc3(bind)
(bind[1] === bind[2]) || FAIL
end
def __lp_cant_fa_17ef(bind)
(cant_fail?(bind[1]) ) || FAIL
end
def __lp_eval_lp_sr_3f78(bind)
(eval(src).is_a?(Class)) || FAIL
end
def __lp_must_em_43e9(bind)
(must_empty?(bind[1])) || FAIL
end
def _bind_lb_1_rb_(bind)
bind[1]

end
def _bind_lb_1_rb__dot__30f4(bind)
bind[1].size
end
def _bind_lb_1_rb__lb__64e3(bind)
bind[1][-1]
end
def _bind_lb_1_rb__lb__79d7(bind)
bind[1][0]

end
def _bind_lb_1_rb__lt__f738(bind)
bind[1]<<[bind[2],Bind[bind[3],bind[4]]]
end
def _nary_eq__lb__rb_(bind)
nary=[]
      show=false
  bind[1].reverse.each{|el|
    i=0
    if  el.is_a?(Bind) && (el.expr.is_a?(Local) || el.expr.is_a?(CAct))
      while true
        if (nary[i].is_a?(Act) && !nary[i].ary[0].is_a?(Args)) || nary[i].is_a?(Apply) || (nary[i].is_a?(Bind) && !(el.expr.is_a?(Local) || el.expr.is_a?(CAct))) #|| nary[i].is_a?(Or)
          loc=locals_in(nary[i])
          if loc.include?(el.name[0]) || (el.expr.is_a?(Local) && loc.include?(el.expr[0]))
            break
          end
          if nary[i].is_a?(Or)
            show=true
          end
        else
          break
        end
        i+=1
      end
    end
    nary.insert(i,el)
  }
  if show
    puts "before",bind[1].inspect
    puts "after",nary.inspect
  end
  nary

  
end
def _src(bind)
src

end
def _src_25d9(bind)
src
end
def _src_dot_ary_d5cf(bind)
src.ary
end
def _src_dot_clas_68f9(bind)
src.class[{:ary=>bind[1]}]
end
def _src_dot_free_3d49(bind)
src.freeze
end
def _src_dot_name_80f3(bind)
src.name
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Normalize_c"
