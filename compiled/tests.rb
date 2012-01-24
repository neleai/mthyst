CurrentParser[:implicit_variables]=true

class Tests < Amethyst

def Tests_bind_lb_2_rb__pl__e5df(bind)
bind[2]+bind[1]
end

end


def tests_compiled_by
'db072cd505e130e7cee2c90b58efce29'
end
def tests_source_hash
'125ea8d8c81bf374f2369aa532c0e2ba'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'f8d59746f44a1af143a6b4c26e7b3716'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
