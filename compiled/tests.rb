CurrentParser[:implicit_variables]=true

class Tests < Amethyst

def Tests_bind_lb_2_rb__pl__e5df(bind)
bind[2]+bind[1]
end

end


def tests_compiled_by
'5461e8f56c869c8550f75fdd25e8539f'
end
def tests_source_hash
'9ab2630377defe4da7999b9b95a46d21'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'cb54fb38718fd6ee434438f6d1d382da'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
