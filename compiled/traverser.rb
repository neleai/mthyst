# Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012

require File.expand_path(File.dirname(__FILE__))+'/Traverser_Clone2.rb'

 

require File.expand_path(File.dirname(__FILE__))+'/Visitor.rb'

def traverser_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def traverser_source_hash
'c7a2a175caa9015f19c980aa7d684d9a'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
''
end
