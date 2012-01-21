CurrentParser[:implicit_variables]=true

class Tests < Amethyst

def Tests__di__lb_ab_rb__di__66e6(bind)
/[ab]/
end
def Tests__di__lb_def_rb__di__2aea(bind)
/[def]/
end
def Tests_bind_lb_2_rb__pl__e5df(bind)
bind[2]+bind[1]
end

end


def tests_compiled_by
'0d90d97083c954495c9fd6ac105f4467'
end
def tests_source_hash
'1f43998abc9830403600da87dcb4d35c'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'1b1ded3e486a2416aa08ec557a75de40'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
