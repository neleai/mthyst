# Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012

require File.expand_path(File.dirname(__FILE__))+'/DetectCalls.rb'

require File.expand_path(File.dirname(__FILE__))+'/Inliner2.rb'


def inliner2_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def inliner2_source_hash
'84f62c9ad8265091940e7de3e4ae494e'
end
def testversioninliner2(r)
 raise "invalid version" if r!=inliner2_version
end
def inliner2_version
''
end
