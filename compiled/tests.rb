# Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012

class Tests < Amethyst
  use_implicit_variables
  use_contextual_returns
end
require File.expand_path(File.dirname(__FILE__))+'/Lam.rb'
require File.expand_path(File.dirname(__FILE__))+'/Tests.rb'

def tests_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def tests_source_hash
'6aad58e48e6ba8dbc487db4343ce439b'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
''
end
