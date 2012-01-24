CurrentParser[:implicit_variables]=true

class Tests < Amethyst

def Tests_bind_lb_2_rb__pl__e5df(bind)
bind[2]+bind[1]
end

end


def tests_compiled_by
'5f1fc4f71a64ae1f65293a8b5f742efc'
end
def tests_source_hash
'1f43998abc9830403600da87dcb4d35c'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'a66e245189b8807429815cb46336521b'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
