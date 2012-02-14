CurrentParser[:implicit_variables]=true

class Tests < Amethyst

def Tests__at__contex_2556(bind)
@_context_arguments||={};bind[1]=@_context_arguments;@_context_arguments=@_context_arguments.dup
end
def Tests__at__contex_b845(bind)
@_context_arguments[:a]=32;puts 32
end
def Tests__at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def Tests_bind_lb_1_rb__eq__58f9(bind)
bind[1]=bind[2];bind.reset;bind[2]=bind[1]
end
def Tests_bind_lb_1_rb__pl__0a71(bind)
bind[1]+2
end
def Tests_bind_lb_1_rb__pl__3b73(bind)
bind[1]+bind[2]
end
def Tests_bind_lb_1_rb__pl__61a1(bind)
bind[1]+1
end

end


def tests_compiled_by
'24f3b7282e7eac736165cca5a08980c6'
end
def tests_source_hash
'9e9c1e6e0c72b19c719715cf0d75915a'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'aa4dc2ea67d3e8c7d536ec4a80c9fbc1'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
