# Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012

require File.expand_path(File.dirname(__FILE__))+'/Amethyst.rb'

def amethyst_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def amethyst_source_hash
'1cd721a7b13617690b4eb57590237f3d'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
''
end
