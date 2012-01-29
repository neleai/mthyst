class Normalize < Amethyst

def Normalize__append_lp__b2a5(bind)
_append(bind[0],bind[4])
end

end


def normalize_compiled_by
'5c570a18bb67f0a7c779147393d52503'
end
def normalize_source_hash
'91e3cf7896df0579188f706c0a654b13'
end
def testversionnormalize(r)
 raise "invalid version" if r!=normalize_version
end
def normalize_version
'e477ce3386945ba83348ff6bc15981a5'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/normalize_c"
