require 'compiled/DetectCalls.rb'

require 'compiled/Inliner2.rb'


def inliner2_compiled_by
'6836af5fdb0d1e998e37f567683dec2f'
end
def inliner2_source_hash
'ccb4238b3948e1d7730b8c07b91b1561'
end
def testversioninliner2(r)
 raise "invalid version" if r!=inliner2_version
end
def inliner2_version
'664a986d86c1b86a1b1e8e6661f81746'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/inliner2_c"
