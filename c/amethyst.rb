class Amethyst < AmethystCore
def _false_Amethystcb_1(bind)
false
end
def _true_Amethystcb_1(bind)
true
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
def empty_Amethystcb_1(bind)
nil
end
def endline_Amethystcb_1(bind)
"\r\n"
end
def endline_Amethystcb_2(bind)
"\r"
end
def endline_Amethystcb_3(bind)
"\n"
end
def exactly_Amethystcb_1(bind)
(bind[:wanted_1] == bind[:got_1]) || FAIL
end
def fails_Amethystcb_1(bind)
(false) || FAIL
end
def listOf_Amethystcb_1(bind)
[]
end
def listOf_Amethystcb_10(bind)
_append(bind[:f_1],bind[:autovar_4])
end
def listOf_Amethystcb_11(bind)
[]
end
def listOf_Amethystcb_2(bind)
[]
end
def listOf_Amethystcb_3(bind)
[]
end
def listOf_Amethystcb_4(bind)
bind[:rule_1]
end
def listOf_Amethystcb_5(bind)
_append(bind[:f_1],bind[:autovar_2])
end
def listOf_Amethystcb_6(bind)
[]
end
def listOf_Amethystcb_7(bind)
bind[:delim_1]
end
def listOf_Amethystcb_8(bind)
bind[:rule_1]
end
def listOf_Amethystcb_9(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def lower_Amethystcb_1(bind)
/[a-z]/
end
def regch_Amethystcb_1(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end
def space_Amethystcb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_Amethystcb_1(bind)
[]
end
def spaces_Amethystcb_2(bind)
[]
end
def spaces_Amethystcb_3(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def token_Amethystcb_1(bind)
bind[:s_1]
end
def upper_Amethystcb_1(bind)
/[A-Z]/
end
def word_Amethystcb_1(bind)
"_"
end
def xdigit_Amethystcb_1(bind)
/[0-9a-fA-F]/
end

end


 require 'c/amethyst_c'
