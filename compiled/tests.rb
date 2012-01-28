CurrentParser[:implicit_variables]=true

class Tests < Amethyst

def Tests_bind_lb_0_rb__pl__3b00(bind)
bind[0]+2
end
def Tests_bind_lb_0_rb__pl__fbc2(bind)
bind[0]+1
end
def Tests_bind_lb_2_rb__pl__e5df(bind)
bind[2]+bind[1]
end

end


def tests_compiled_by
'19691669a3e09852dde90c52d7774288'
end
def tests_source_hash
'2be30090a93f05dadc9b46b3d9713748'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'a0ebe559d715fb3e1335944eed632755'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
