require 'ast'

def connectstring(ary)
	r=[]
	s=nil
	ary.each{|a|
		if a.is_a? String
			s||=""
			s+=a
		else
			r<<s if s
			s=nil
			r<<a
		end
	}
	r<<s if s
	r
end

class AmethystParser < Amethyst
def __args_AmethystParsercb_1(bind)
bind[:o_1]
end
def __args_AmethystParsercb_2(bind)
""
end
def __args_AmethystParsercb_3(bind)
bind[:s_1]
end
def __args_AmethystParsercb_4(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def __args_AmethystParsercb_5(bind)
bind[:c_1]
end
def _args_AmethystParsercb_1(bind)
bind[:o_1]
end
def _args_AmethystParsercb_2(bind)
bind[:c_1]
end
def _args_AmethystParsercb_3(bind)
Args[{:ary=>([bind[:o_1]]+bind[:r_1]+[bind[:c_1]])}]
end
def addargs_AmethystParsercb_1(bind)
[]
end
def addargs_AmethystParsercb_2(bind)
Args
end
def addargs_AmethystParsercb_3(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def addargs_AmethystParsercb_4(bind)
_Local(bind[:name_1]) 
end
def addargs_AmethystParsercb_5(bind)
_append(bind[:result_1],bind[:autovar_2])
end
def addargs_AmethystParsercb_6(bind)
bind[:result_1] || []
end
def application_AmethystParsercb_1(bind)
"::"
end
def application_AmethystParsercb_2(bind)
[bind[:klas_1],bind[:rule_1]]
end
def application_AmethystParsercb_3(bind)
'('
end
def application_AmethystParsercb_4(bind)
')'
end
def application_AmethystParsercb_5(bind)
Apply[bind[:rule_1],bind[:arg_1]]
end
def argsOpt_AmethystParsercb_1(bind)
bind[:o_1]
end
def argsOpt_AmethystParsercb_2(bind)
bind[:c_1]
end
def argsOpt_AmethystParsercb_3(bind)
[]
end
def args_AmethystParsercb_1(bind)
bind[:o_1]
end
def args_AmethystParsercb_2(bind)
bind[:c_1]
end
def args_AmethystParsercb_3(bind)
bind[:r_1]+[',']
end
def args_AmethystParsercb_4(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def atomicHostExpr_AmethystParsercb_1(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def atomicHostExpr_AmethystParsercb_2(bind)
"{#{bind[:s_1]*""}}"
end
def atomicHostExpr_AmethystParsercb_3(bind)
bind[:autovar_3]=[bind[:autovar_3]]
end
def char_AmethystParsercb_1(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def choice_AmethystParsercb_1(bind)
"|"
end
def choice_AmethystParsercb_10(bind)
_append(bind[:f_1],bind[:autovar_4])
end
def choice_AmethystParsercb_11(bind)
[]
end
def choice_AmethystParsercb_12(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def choice_AmethystParsercb_2(bind)
AmethystLambda.new(:AmethystParser_choice_lambda1,self,bind)
end
def choice_AmethystParsercb_3(bind)
'sequence'
end
def choice_AmethystParsercb_4(bind)
[]
end
def choice_AmethystParsercb_5(bind)
bind[:rule_1]
end
def choice_AmethystParsercb_6(bind)
_append(bind[:f_1],bind[:autovar_1])
end
def choice_AmethystParsercb_7(bind)
bind[:delim_1]
end
def choice_AmethystParsercb_8(bind)
bind[:rule_1]
end
def choice_AmethystParsercb_9(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def clas_AmethystParsercb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def className_AmethystParsercb_1(bind)
[]
end
def className_AmethystParsercb_2(bind)
""
end
def className_AmethystParsercb_3(bind)
bind[:s_1]
end
def className_AmethystParsercb_4(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def className_AmethystParsercb_5(bind)
_append(bind[:autovar_3],bind[:autovar_4])
end
def className_AmethystParsercb_6(bind)
_append(bind[:autovar_1],bind[:autovar_5])
end
def className_AmethystParsercb_7(bind)
leterize(bind[:it_1]*"")
end
def collect_AmethystParsercb_1(bind)
a=autovar; Seq[Or[{:ary=>bind[:ors_1].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],PureAct[a]]
end
def digit_AmethystParsercb_1(bind)
/[0-9]/
end
def digit_AmethystParsercb_2(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end
def eChar_AmethystParsercb_1(bind)
"\\"
end
def eChar_AmethystParsercb_2(bind)
"\\#{bind[:c_1]}"
end
def eChar_AmethystParsercb_3(bind)
'#'+'{'
end
def eChar_AmethystParsercb_4(bind)
'}'
end
def empty_AmethystParsercb_1(bind)
nil
end
def endline_AmethystParsercb_1(bind)
"\r\n"
end
def endline_AmethystParsercb_2(bind)
"\r"
end
def endline_AmethystParsercb_3(bind)
"\n"
end
def fails_AmethystParsercb_1(bind)
(false) || FAIL
end
def grammar_AmethystParsercb_1(bind)
"amethyst"
end
def grammar_AmethystParsercb_10(bind)
bind[:s_1]
end
def grammar_AmethystParsercb_11(bind)
Grammar.create( {:name=>bind[:name_1],:parent=>bind[:parent_1],:rules=>bind[:rules_1] })
end
def grammar_AmethystParsercb_2(bind)
bind[:s_1]
end
def grammar_AmethystParsercb_3(bind)
"<"
end
def grammar_AmethystParsercb_4(bind)
bind[:s_1]
end
def grammar_AmethystParsercb_5(bind)
bind[:parent_1]="Amethyst"
end
def grammar_AmethystParsercb_6(bind)
"{"
end
def grammar_AmethystParsercb_7(bind)
bind[:s_1]
end
def grammar_AmethystParsercb_8(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def grammar_AmethystParsercb_9(bind)
"}"
end
def igrammar_AmethystParsercb_1(bind)
[]
end
def igrammar_AmethystParsercb_2(bind)
[]
end
def igrammar_AmethystParsercb_3(bind)
"amethyst"
end
def igrammar_AmethystParsercb_4(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def igrammar_AmethystParsercb_5(bind)
"amethyst"
end
def igrammar_AmethystParsercb_6(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def igrammar_AmethystParsercb_7(bind)
bind[:it_1]*""
end
def igrammar_AmethystParsercb_8(bind)
_append(bind[:autovar_2],bind[:autovar_5])
end
def inlineHostExpr_AmethystParsercb_1(bind)
'{'
end
def inlineHostExpr_AmethystParsercb_2(bind)
'}'
end
def key_AmethystParsercb_1(bind)
"@"
end
def key_AmethystParsercb_10(bind)
Global[bind[:name_1]]
end
def key_AmethystParsercb_2(bind)
bind[:s_1]
end
def key_AmethystParsercb_3(bind)
'['
end
def key_AmethystParsercb_4(bind)
']'
end
def key_AmethystParsercb_5(bind)
Object.const_get(bind[:name_1]).instance_variable_get(:@attrs)
end
def key_AmethystParsercb_6(bind)
Result.create( {:args=>bind[:args_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
end
def key_AmethystParsercb_7(bind)
Key.create( {:args=>bind[:args_1],:name=>bind[:name_1] })
end
def key_AmethystParsercb_8(bind)
"@@"
end
def key_AmethystParsercb_9(bind)
bind[:s_1]
end
def listOf_AmethystParsercb_1(bind)
[]
end
def listOf_AmethystParsercb_2(bind)
bind[:rule_1]
end
def listOf_AmethystParsercb_3(bind)
_append(bind[:f_1],bind[:autovar_1])
end
def listOf_AmethystParsercb_4(bind)
bind[:delim_1]
end
def listOf_AmethystParsercb_5(bind)
bind[:rule_1]
end
def listOf_AmethystParsercb_6(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def listOf_AmethystParsercb_7(bind)
_append(bind[:f_1],bind[:autovar_4])
end
def listOf_AmethystParsercb_8(bind)
[]
end
def lower_AmethystParsercb_1(bind)
/[a-z]/
end
def lower_AmethystParsercb_2(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def lower_AmethystParsercb_3(bind)
(bind[:regex_1].match(bind[:c_2])) || FAIL
end
def modifier_AmethystParsercb_1(bind)
"#"
end
def modifier_AmethystParsercb_2(bind)
bind[:s_1]
end
def modifier_AmethystParsercb_3(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def modifier_AmethystParsercb_4(bind)
Comment[bind[:c_1]]
end
def nameFirst_AmethystParsercb_1(bind)
"_"
end
def name_AmethystParsercb_1(bind)
[]
end
def name_AmethystParsercb_2(bind)
""
end
def name_AmethystParsercb_3(bind)
bind[:s_1]
end
def name_AmethystParsercb_4(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def name_AmethystParsercb_5(bind)
_append(bind[:autovar_3],bind[:autovar_4])
end
def name_AmethystParsercb_6(bind)
_append(bind[:autovar_1],bind[:autovar_5])
end
def name_AmethystParsercb_7(bind)
leterize(bind[:it_1]*"")
end
def nr_AmethystParsercb_1(bind)
'('
end
def nr_AmethystParsercb_2(bind)
')'
end
def nr_AmethystParsercb_3(bind)
"="
end
def nr_AmethystParsercb_4(bind)
bind[:s_1]
end
def number_AmethystParsercb_1(bind)
/[0-9]/
end
def number_AmethystParsercb_2(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end
def number_AmethystParsercb_3(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def number_AmethystParsercb_4(bind)
/[0-9]/
end
def number_AmethystParsercb_5(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end
def number_AmethystParsercb_6(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def prefixed_AmethystParsercb_1(bind)
"&"
end
def prefixed_AmethystParsercb_10(bind)
bind[:s_1]
end
def prefixed_AmethystParsercb_11(bind)
/[.:\[]/
end
def prefixed_AmethystParsercb_12(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end
def prefixed_AmethystParsercb_13(bind)
"."
end
def prefixed_AmethystParsercb_14(bind)
bind[:s_1]
end
def prefixed_AmethystParsercb_15(bind)
Apply["anything"]
end
def prefixed_AmethystParsercb_16(bind)
"=>"
end
def prefixed_AmethystParsercb_17(bind)
bind[:s_1]
end
def prefixed_AmethystParsercb_18(bind)
bind[:from_1]=Pass[bind[:from_1],bind[:it_1]]
end
def prefixed_AmethystParsercb_19(bind)
"["
end
def prefixed_AmethystParsercb_2(bind)
bind[:s_1]
end
def prefixed_AmethystParsercb_20(bind)
bind[:s_1]
end
def prefixed_AmethystParsercb_21(bind)
bind[:from_1]=Enter[bind[:from_1],bind[:it_1]]
end
def prefixed_AmethystParsercb_22(bind)
"]"
end
def prefixed_AmethystParsercb_23(bind)
bind[:s_1]
end
def prefixed_AmethystParsercb_24(bind)
"*"
end
def prefixed_AmethystParsercb_25(bind)
bind[:s_1]
end
def prefixed_AmethystParsercb_26(bind)
"+"
end
def prefixed_AmethystParsercb_27(bind)
bind[:s_1]
end
def prefixed_AmethystParsercb_28(bind)
Many[bind[:from_1],bind[:one_1]=="+"]
end
def prefixed_AmethystParsercb_29(bind)
"?"
end
def prefixed_AmethystParsercb_3(bind)
Pred[bind[:expr_1]]
end
def prefixed_AmethystParsercb_30(bind)
bind[:s_1]
end
def prefixed_AmethystParsercb_31(bind)
Or[bind[:from_1],Apply["empty"]]
end
def prefixed_AmethystParsercb_32(bind)
":"
end
def prefixed_AmethystParsercb_33(bind)
bind[:s_1]
end
def prefixed_AmethystParsercb_34(bind)
"[]"
end
def prefixed_AmethystParsercb_35(bind)
true
end
def prefixed_AmethystParsercb_36(bind)
nil
end
def prefixed_AmethystParsercb_37(bind)
_Bind(bind[:name_1],bind[:from_1],bind[:append_1])
end
def prefixed_AmethystParsercb_38(bind)
Seq[_Bind("it",bind[:from_1]) , Act[bind[:e_1]] ]
end
def prefixed_AmethystParsercb_4(bind)
"&"
end
def prefixed_AmethystParsercb_5(bind)
bind[:s_1]
end
def prefixed_AmethystParsercb_6(bind)
"~"
end
def prefixed_AmethystParsercb_7(bind)
bind[:s_1]
end
def prefixed_AmethystParsercb_8(bind)
Lookahead[bind[:m_1],bind[:neg_1]=="~"]
end
def prefixed_AmethystParsercb_9(bind)
""
end
def procargs2_AmethystParsercb_1(bind)
Args
end
def procargs2_AmethystParsercb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def procargs2_AmethystParsercb_3(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def procargs2_AmethystParsercb_4(bind)
@tmp<<bind[:a_1]
end
def procargs_AmethystParsercb_1(bind)
@ary=[];@tmp=[]
end
def procargs_AmethystParsercb_2(bind)
(bind[:c_1]==',') || FAIL
end
def procargs_AmethystParsercb_3(bind)
@ary<<Args[{:ary=>@tmp}];@tmp=[]
end
def procargs_AmethystParsercb_4(bind)
@ary
end
def regch_AmethystParsercb_1(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end
def rubyarg_AmethystParsercb_1(bind)
[]
end
def rubyarg_AmethystParsercb_10(bind)
'{'
end
def rubyarg_AmethystParsercb_11(bind)
'}'
end
def rubyarg_AmethystParsercb_12(bind)
"\""
end
def rubyarg_AmethystParsercb_13(bind)
_append(bind[:s_1],bind[:autovar_1])
end
def rubyarg_AmethystParsercb_14(bind)
"\""
end
def rubyarg_AmethystParsercb_15(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def rubyarg_AmethystParsercb_16(bind)
_append(bind[:s_1],bind[:autovar_4])
end
def rubyarg_AmethystParsercb_17(bind)
Strin[connectstring(bind[:s_1])]
end
def rubyarg_AmethystParsercb_18(bind)
"\'"
end
def rubyarg_AmethystParsercb_19(bind)
_append(bind[:s_1],bind[:autovar_5])
end
def rubyarg_AmethystParsercb_2(bind)
[]
end
def rubyarg_AmethystParsercb_20(bind)
"\'"
end
def rubyarg_AmethystParsercb_21(bind)
_append(bind[:autovar_6],bind[:autovar_7])
end
def rubyarg_AmethystParsercb_22(bind)
_append(bind[:s_1],bind[:autovar_8])
end
def rubyarg_AmethystParsercb_23(bind)
Strin[connectstring(bind[:s_1])]
end
def rubyarg_AmethystParsercb_24(bind)
"..."
end
def rubyarg_AmethystParsercb_25(bind)
".."
end
def rubyarg_AmethystParsercb_26(bind)
":@"
end
def rubyarg_AmethystParsercb_27(bind)
bind[:s_2]
end
def rubyarg_AmethystParsercb_28(bind)
/[$.:]/
end
def rubyarg_AmethystParsercb_29(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end
def rubyarg_AmethystParsercb_3(bind)
"`"
end
def rubyarg_AmethystParsercb_30(bind)
_append(bind[:n_1],bind[:autovar_9])
end
def rubyarg_AmethystParsercb_31(bind)
/[^`{}()'"\[\]]/
end
def rubyarg_AmethystParsercb_32(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end
def rubyarg_AmethystParsercb_4(bind)
"`"
end
def rubyarg_AmethystParsercb_5(bind)
Exp[_body(bind[:e_1])]
end
def rubyarg_AmethystParsercb_6(bind)
'('
end
def rubyarg_AmethystParsercb_7(bind)
')'
end
def rubyarg_AmethystParsercb_8(bind)
'['
end
def rubyarg_AmethystParsercb_9(bind)
']'
end
def rule_AmethystParsercb_1(bind)
@locals=[];$appends=[];@bnding=Bnding[]
end
def rule_AmethystParsercb_2(bind)
@bnding
end
def rule_AmethystParsercb_3(bind)
"="
end
def rule_AmethystParsercb_4(bind)
bind[:s_1]
end
def rule_AmethystParsercb_5(bind)
_body(bind[:body_1])
end
def rule_AmethystParsercb_6(bind)
@locals.uniq
end
def rule_AmethystParsercb_7(bind)
bind[:body_1]=Seq[{:ary=>($appends.uniq.map{|a| _Bind(a,PureAct[Args["[]"]])}+[bind[:body_1]])}]; 
end
def rule_AmethystParsercb_8(bind)
Rule.create( {:args=>bind[:args_1],:bnding=>bind[:bnding_1],:body=>bind[:body_1],:locals=>bind[:locals_1],:name=>bind[:name_1] })
end
def ruleargs_AmethystParsercb_1(bind)
'('
end
def ruleargs_AmethystParsercb_2(bind)
')'
end
def ruleargs_AmethystParsercb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def sequence_AmethystParsercb_1(bind)
[]
end
def sequence_AmethystParsercb_2(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def sequence_AmethystParsercb_3(bind)
Seq.create( {:ary=>bind[:ary_1] })
end
def space_AmethystParsercb_1(bind)
/[\s\t\r\n\f]/
end
def space_AmethystParsercb_2(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end
def spaces_AmethystParsercb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_AmethystParsercb_2(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end
def spaces_AmethystParsercb_3(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def term_AmethystParsercb_1(bind)
[]
end
def term_AmethystParsercb_10(bind)
"break"
end
def term_AmethystParsercb_11(bind)
bind[:s_2]
end
def term_AmethystParsercb_12(bind)
Seq[Cut[],Stop[]]
end
def term_AmethystParsercb_13(bind)
bind[:it_1].is_a?(Result) ? bind[:it_1] : Act[Args[bind[:it_1]]]
end
def term_AmethystParsercb_14(bind)
"->"
end
def term_AmethystParsercb_15(bind)
bind[:s_2]
end
def term_AmethystParsercb_16(bind)
""
end
def term_AmethystParsercb_17(bind)
bind[:s_2]
end
def term_AmethystParsercb_18(bind)
Act[bind[:x_1]]
end
def term_AmethystParsercb_19(bind)
"\""
end
def term_AmethystParsercb_2(bind)
[]
end
def term_AmethystParsercb_20(bind)
bind[:s_2]
end
def term_AmethystParsercb_21(bind)
"\""
end
def term_AmethystParsercb_22(bind)
_append(bind[:s_1],bind[:autovar_1])
end
def term_AmethystParsercb_23(bind)
Apply["token" ,quote(bind[:s_1])]
end
def term_AmethystParsercb_24(bind)
"'"
end
def term_AmethystParsercb_25(bind)
bind[:s_2]
end
def term_AmethystParsercb_26(bind)
"\'"
end
def term_AmethystParsercb_27(bind)
_append(bind[:s_1],bind[:autovar_2])
end
def term_AmethystParsercb_28(bind)
Apply["seq"   ,quote(bind[:s_1])]
end
def term_AmethystParsercb_29(bind)
Apply["exactly",bind[:it_1]]
end
def term_AmethystParsercb_3(bind)
Apply["clas",bind[:cls_1]]
end
def term_AmethystParsercb_30(bind)
"<"
end
def term_AmethystParsercb_31(bind)
bind[:s_2]
end
def term_AmethystParsercb_32(bind)
">"
end
def term_AmethystParsercb_33(bind)
bind[:s_2]
end
def term_AmethystParsercb_34(bind)
_append(bind[:x_1],bind[:autovar_3])
end
def term_AmethystParsercb_35(bind)
Apply["regch","/[#{bind[:x_1]}]/"]
end
def term_AmethystParsercb_36(bind)
"("
end
def term_AmethystParsercb_37(bind)
bind[:s_2]
end
def term_AmethystParsercb_38(bind)
")"
end
def term_AmethystParsercb_39(bind)
bind[:s_2]
end
def term_AmethystParsercb_4(bind)
"nested"
end
def term_AmethystParsercb_40(bind)
"[]"
end
def term_AmethystParsercb_41(bind)
bind[:x_1]
end
def term_AmethystParsercb_42(bind)
a=autovar; Seq[Or[{:ary=>bind[:ors_1].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],PureAct[a]]
end
def term_AmethystParsercb_5(bind)
bind[:s_2]
end
def term_AmethystParsercb_6(bind)
"("
end
def term_AmethystParsercb_7(bind)
")"
end
def term_AmethystParsercb_8(bind)
bind[:s_2]
end
def term_AmethystParsercb_9(bind)
Nested[bind[:expr_1]]
end
def token_AmethystParsercb_1(bind)
bind[:s_1]
end
def upper_AmethystParsercb_1(bind)
/[A-Z]/
end
def upper_AmethystParsercb_2(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end

end


 require 'compiled/parser_c'
