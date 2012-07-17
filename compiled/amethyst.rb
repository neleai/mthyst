require File.expand_path(File.dirname(__FILE__))+'/Amethyst.rb'

def amethyst_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def amethyst_source_hash
'a45f4564399ca5b9a8b95b1ef4aaf6d1'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
''
end
