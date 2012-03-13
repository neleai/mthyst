class Detect_Size < Amethyst
def self.predicate(*args);self.new.parse(:predicate,*args);end
def self.predicate2(*args);self.new.parse(:predicate2,*args);end
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
