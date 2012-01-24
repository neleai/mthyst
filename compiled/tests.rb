CurrentParser[:implicit_variables]=true

class Tests < Amethyst

def Tests_bind_lb_2_rb__pl__e5df(bind)
bind[2]+bind[1]
end

end


def tests_compiled_by
'7b94d043c424a3ee9dd4031d4beddc92'
end
def tests_source_hash
'125ea8d8c81bf374f2369aa532c0e2ba'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'7e2c118e7d50c3c522de7b6d9ed099ae'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
