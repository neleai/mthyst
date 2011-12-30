class Tests < Amethyst

def Tests_Many_lb_bin_594a(bind)
Many[bind[1],bind[2]=="+"]
end
def Tests_bind_lb_1_rb__eq__4992(bind)
bind[1]=Enter[bind[1],bind[3]]
end

end


def tests_compiled_by
'a091c6f25d8fd84e0bc81d20682c9fc9'
end
def tests_source_hash
'3551fa0c09c399c088895ddfcf51830a'
end
def testversiontests(r)
 raise "invalid version" if r!=tests_version
end
def tests_version
'afcea89fe5db3e3143f0b265d1adac7e'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/tests_c"
