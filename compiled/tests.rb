class Tests < Amethyst


end


def tests_compiled_by
'3d2c2684d4de2070c0ae407c5e6ed496'
end
def tests_source_hash
'cf06821607e17dfe8dd4d086b136a1e3'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'f4a5d218d2d7780be030d75314e5ed32'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/tests_c"
