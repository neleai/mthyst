require File.expand_path(File.dirname(__FILE__))+'/Amethyst.rb'

def amethyst_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def amethyst_source_hash
'43a3824885d210d8df8f17f12e392a6a'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
''
end
