class Amethyst < AmethystCore

def _false_Amethystcb_1(bind)
(bind[0] == bind[1]) || FAIL
end
def char_Amethystcb_1(bind)
(bind[0].is_a? String ) || FAIL
end
def clas_Amethystcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def digit_Amethystcb_1(bind)
/[0-9]/
end
def exactly_Amethystcb_1(bind)
(bind[1] == bind[0]) || FAIL
end
def fails_Amethystcb_1(bind)
(false) || FAIL
end
def foo_Amethystcb_1(bind)
/[^a-c]/
end
def foo_Amethystcb_2(bind)
/[g-i]/
end
def listOf_Amethystcb_1(bind)
_append(bind[3],bind[5])
end
def listOf_Amethystcb_2(bind)
_append(bind[0],bind[6])
end
def lower_Amethystcb_1(bind)
/[a-z]/
end
def regch_Amethystcb_1(bind)
(bind[3].match(bind[2])) || FAIL
end
def spaces_Amethystcb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_Amethystcb_2(bind)
_append(bind[0],bind[2])
end
def upper_Amethystcb_1(bind)
/[A-Z]/
end
def xdigit_Amethystcb_1(bind)
/[0-9a-fA-F]/
end

end


def amethyst_compiled_by
'55ef8e9a6e1d5a0fe35d47f75b84f5ab'
end
def amethyst_source_hash
'daf5b03e7d8303be7a8e0dc85e2bfe6f'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'7ca923889e277931413e9ca8de84f525'
end
  require 'compiled/amethyst_c'
