CurrentParser[:implicit_variables]=true

class Tests < Amethyst

def Tests_bind_lb_1_rb__pl__0a71(bind)
bind[1]+2
end
def Tests_bind_lb_1_rb__pl__1730(bind)
bind[1]+bind[0]
end
def Tests_bind_lb_1_rb__pl__61a1(bind)
bind[1]+1
end
def Tests_bind_lb_3_rb__eq__0b1b(bind)
bind[3]=bind[2];bind.reset;bind[2]=bind[3]
end

end


def tests_compiled_by
'0cb2f38acd6c89a9f970ae3f6d3df313'
end
def tests_source_hash
'c556c5c12e940562aaf03765db66233f'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'aa04bea13779d04b028f7590318b6102'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
