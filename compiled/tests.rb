CurrentParser[:implicit_variables]=true

class Tests < Amethyst

def Tests_bind_lb_1_rb__eq__58f9(bind)
bind[1]=bind[2];bind.reset;bind[2]=bind[1]
end
def Tests_bind_lb_1_rb__pl__0a71(bind)
bind[1]+2
end
def Tests_bind_lb_1_rb__pl__61a1(bind)
bind[1]+1
end
def Tests_foo_pl_bar_ac93(bind)
foo+bar
end

end


def tests_compiled_by
'05268c7601647f5214fdd08cdda5b8aa'
end
def tests_source_hash
'c556c5c12e940562aaf03765db66233f'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'a13f1bf02e5d69c6d0274a214f332f9d'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
