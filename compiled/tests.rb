
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
'c722469e4560ffe9811a29c95b3ede2a'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
''
end
