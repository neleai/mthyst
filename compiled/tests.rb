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
'a5d98894adfc37b50290755e8557967d'
end
def tests_source_hash
'c556c5c12e940562aaf03765db66233f'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'1d0de235d57593b3e4cadbc3070703fb'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
