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
def number_Amethystcb_1(bind)
_append(bind[0],bind[1])
end
def number_Amethystcb_2(bind)
_append(bind[0],bind[2])
end
def number_Amethystcb_3(bind)
(bind[3]*"").to_i
end
def regch_Amethystcb_1(bind)
(bind[3].match(bind[2])) || FAIL
end
def replace_Amethystcb_1(bind)
bind[1]*""
end
def spaces_Amethystcb_1(bind)
/[\s\t\r\n\f]/
end
def upper_Amethystcb_1(bind)
/[A-Z]/
end
def xdigit_Amethystcb_1(bind)
/[0-9a-fA-F]/
end

end


def amethyst_compiled_by
'32e1bf03e0f843f0f8290a1271d8023d'
end
def amethyst_source_hash
'20c13aeccc5b724b5bd33cdc9542487b'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'a9cd97a664cfd0dfcc3869afcd18e34c'
end
  require 'compiled/amethyst_c'
