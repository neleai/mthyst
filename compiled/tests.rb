$test_lambda = (require 'compiled/Anon1.rb';class Anon1;end;ame_lambda(Anon1,binding))

class Tests < Amethyst
  use_implicit_variables
  use_contextual_returns
end
require 'compiled/Lam.rb'
require 'compiled/Tests.rb'

def tests_compiled_by
'6836af5fdb0d1e998e37f567683dec2f'
end
def tests_source_hash
'710cdaae439c570560b264e46ed5958b'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'c82d3c3ce54088244ee516849c22a69c'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/tests_c"
