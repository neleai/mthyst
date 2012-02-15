CurrentParser[:implicit_variables]=true
CurrentParser[:contextual_returns]=true
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
def Tests__at_context_0dcc(bind)
@contextual_return.each{|k,v| bind[1][k]+=v};@contextual_return=nil
end
def Tests__at_context_2721(bind)
@contextual_return=bind[1]
end
def Tests_bind_lb_1_rb__eq__58f9(bind)
bind[1]=bind[2];bind.reset;bind[2]=bind[1]
end
def Tests_bind_lb_1_rb__eq__f4b0(bind)
bind[1]=Hash.new{|h,k| h[k]=[]}
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
'da5c76dc77c352f68ed45137114e7490'
end
def tests_source_hash
'5dd1840626b95ccfd9ec79614a1913d8'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'17ae53979f55cf4ad1071ada3a8a894c'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
