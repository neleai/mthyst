class Amethyst < AmethystCore

def _true_Amethystcb_1(bind)
(bind[0] == bind[1]) || FAIL
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
(bind[3]*"").to_i
end
def regch_Amethystcb_1(bind)
(bind[0].is_a? String ) || FAIL
end
def regch_Amethystcb_2(bind)
(bind[3].match(bind[2])) || FAIL
end
def replace_Amethystcb_1(bind)
bind[1]*""
end
def space_Amethystcb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_Amethystcb_1(bind)
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
'd3c0021385430bbc5713319f80b8fba6'
end
def amethyst_source_hash
'aaa6d7dca6b6bc8a20edac17d9b7cad6'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'42dff308c64d246462a876915c2f6999'
end
  require 'compiled/amethyst_c'
