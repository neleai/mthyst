class Detect_Size < Amethyst
def self.predicate(*args);self.new.parse(:predicate,*args);end;def self._selector_predicate;Detect_Size;end
def self.predicate2(*args);self.new.parse(:predicate2,*args);end;def self._selector_predicate2;Detect_Size;end
def Detect_Size_Or_dot_creat_49b2(bind)
Or.create( {:ary=>bind[1] })
end
def Detect_Size_Seq_dot_crea_bfbb(bind)
Seq.create( {:ary=>bind[1] })
end
def Detect_Size__lb_bind_lb_1_rb__2d76(bind)
[bind[1],bind[2]].max
end
def Detect_Size__sh_lowleve_46e8(bind)
#lowlevel representation that cant fail

end
def Detect_Size_bind_lb_1_rb__eq__28f0(bind)
bind[1]=[bind[1]-maxsize(bind[2]),0].max
end
def Detect_Size_bind_lb_1_rb__gt__f573(bind)
bind[1]>bind[2] ? Seq[Apply["test_size",Act[bind[1]]],bind[3]] : bind[3]

end
def Detect_Size_minsize_lp__01f0(bind)
minsize(bind[1])
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Detect_Size_c"
