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
'457a7c05200d39f48a925c7678821ab8'
end
def tests_source_hash
'2be30090a93f05dadc9b46b3d9713748'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'373c13c02818812e4d8bcf7d107a619b'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
