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
'2da60522ec362027d4ac70f415ed0a3a'
end
def tests_source_hash
'c556c5c12e940562aaf03765db66233f'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'76c3383318f36392c53b237a81792654'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
