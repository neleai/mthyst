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
def listOf_Amethystcb_1(bind)
_append(bind[0],bind[2])
end
def listOf_Amethystcb_2(bind)
_append(bind[3],bind[5])
end
def listOf_Amethystcb_3(bind)
_append(bind[0],bind[6])
end
def lower_Amethystcb_1(bind)
/[a-z]/
end
def lower_Amethystcb_2(bind)
(bind[1].is_a? String ) || FAIL
end
def lower_Amethystcb_3(bind)
(bind[0].match(bind[3])) || FAIL
end
def regch_Amethystcb_1(bind)
(bind[3].match(bind[2])) || FAIL
end
def spaces_Amethystcb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_Amethystcb_2(bind)
(bind[2].is_a? String ) || FAIL
end
def spaces_Amethystcb_3(bind)
(bind[1].match(bind[4])) || FAIL
end
def spaces_Amethystcb_4(bind)
_append(bind[0],bind[7])
end
def upper_Amethystcb_1(bind)
/[A-Z]/
end
def xdigit_Amethystcb_1(bind)
/[0-9a-fA-F]/
end

end


def amethyst_compiled_by
'ffd44199bc97e9b2fbb422010e038381'
end
def amethyst_source_hash
'5cbafbddaf968d8241b4b848732e487f'
end
def testversionamethyst(r)
 raise "invalid version" if r!=amethyst_version
end
def amethyst_version
'f2e6c88dbb89d6e9ebf31a04e7c7200d'
end
  require 'compiled/amethyst_c'
