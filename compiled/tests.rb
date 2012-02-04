CurrentParser[:implicit_variables]=true

class Tests < Amethyst

def Tests_bind_lb_1_rb__eq__58f9(bind)
bind[1]=bind[2];bind.reset;bind[2]=bind[1]
end
def Tests_bind_lb_1_rb__pl__0a71(bind)
bind[1]+2
end
def Tests_bind_lb_1_rb__pl__3b73(bind)
bind[1]+bind[2]
end
def Tests_bind_lb_1_rb__pl__61a1(bind)
bind[1]+1
end

end


def tests_compiled_by
'e49de81d16bf6377fdb26c62d0a1df96'
end
def tests_source_hash
'c556c5c12e940562aaf03765db66233f'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'495dde5fac33fec08badeb94d8079d8c'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
