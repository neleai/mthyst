CurrentParser[:implicit_variables]=true

class Tests < Amethyst

def Tests_bind_lb_0_rb__pl__3b00(bind)
bind[0]+2
end
def Tests_bind_lb_0_rb__pl__fbc2(bind)
bind[0]+1
end
def Tests_bind_lb_1_rb__pl__1730(bind)
bind[1]+bind[0]
end
def Tests_bind_lb_3_rb__eq__0b1b(bind)
bind[3]=bind[2];bind.reset;bind[2]=bind[3]
end

end


def tests_compiled_by
'fe602c2c7fcf745d7dd3eabea5579bb1'
end
def tests_source_hash
'34213d88ffc22c332a297b59583991f5'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'290e83990df658553a39a9583c02f89b'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
