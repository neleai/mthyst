CurrentParser[:implicit_variables]=true

class Tests < Amethyst

def Tests_bind_lb_2_rb__pl__e5df(bind)
bind[2]+bind[1]
end

end


def tests_compiled_by
'825027d07087258e17635d501a39dbe1'
end
def tests_source_hash
'1f43998abc9830403600da87dcb4d35c'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'ee14a8616fcbb0d2b72c941e5ffabe2d'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
