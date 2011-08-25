class Amethyst < AmethystCore

def __Amethystcb_1(bind)
/[\s\t\r\n\f]/
end
def __Amethystcb_2(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def __Amethystcb_3(bind)
(bind[:regex_1].match(bind[:c_2])) || FAIL
end
def _false_Amethystcb_1(bind)
(bind[:wanted_1] == bind[:got_1]) || FAIL
end
def _true_Amethystcb_1(bind)
(bind[:wanted_1] == bind[:got_1]) || FAIL
end
def char_Amethystcb_1(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def clas_Amethystcb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def digit_Amethystcb_1(bind)
/[0-9]/
end
def digit_Amethystcb_2(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def digit_Amethystcb_3(bind)
(bind[:regex_1].match(bind[:c_2])) || FAIL
end
def exactly_Amethystcb_1(bind)
(bind[:wanted_1] == bind[:got_1]) || FAIL
end
def fails_Amethystcb_1(bind)
(false) || FAIL
end
def listOf_Amethystcb_1(bind)
_append(bind[:f_1],bind[:autovar_1])
end
def listOf_Amethystcb_2(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def listOf_Amethystcb_3(bind)
_append(bind[:f_1],bind[:autovar_4])
end
def lower_Amethystcb_1(bind)
/[a-z]/
end
def lower_Amethystcb_2(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def lower_Amethystcb_3(bind)
(bind[:regex_1].match(bind[:c_2])) || FAIL
end
def regch_Amethystcb_1(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def regch_Amethystcb_2(bind)
(bind[:regex_1].match(bind[:c_2])) || FAIL
end
def space_Amethystcb_1(bind)
/[\s\t\r\n\f]/
end
def space_Amethystcb_2(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def space_Amethystcb_3(bind)
(bind[:regex_1].match(bind[:c_2])) || FAIL
end
def spaces_Amethystcb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_Amethystcb_2(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def spaces_Amethystcb_3(bind)
(bind[:regex_1].match(bind[:c_2])) || FAIL
end
def spaces_Amethystcb_4(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def upper_Amethystcb_1(bind)
/[A-Z]/
end
def upper_Amethystcb_2(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def upper_Amethystcb_3(bind)
(bind[:regex_1].match(bind[:c_2])) || FAIL
end
def xdigit_Amethystcb_1(bind)
/[0-9a-fA-F]/
end
def xdigit_Amethystcb_2(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def xdigit_Amethystcb_3(bind)
(bind[:regex_1].match(bind[:c_2])) || FAIL
end

end


def testversion(r)
 raise "invalid version" if r!='4ae9a5d20b33d4ac818f542c83cdd16f'
end
  require 'compiled/amethyst_c'
