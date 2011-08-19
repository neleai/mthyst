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
_append(bind[:autovar_1],bind[:autovar_2])
end
def _args_AmethystParsercb_1(bind)
Args[{:ary=>([bind[:o_1]]+bind[:r_1]+[bind[:c_1]])}]
end
def addargs_AmethystParsercb_1(bind)
Args
end
def addargs_AmethystParsercb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def addargs_AmethystParsercb_3(bind)
_Local(bind[:name_1]) 
end
def addargs_AmethystParsercb_4(bind)
_append(bind[:result_1],bind[:autovar_2])
end
def addargs_AmethystParsercb_5(bind)
bind[:result_1] || []
end
def application_AmethystParsercb_1(bind)
[bind[:klas_1],bind[:rule_1]]
end
def application_AmethystParsercb_2(bind)
'('
end
def application_AmethystParsercb_3(bind)
')'
end
def application_AmethystParsercb_4(bind)
Apply[bind[:rule_1],bind[:arg_1]]
end
def argsOpt_AmethystParsercb_1(bind)
[]
end
def args_AmethystParsercb_1(bind)
bind[:r_1]+[',']
end
def args_AmethystParsercb_2(bind)
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
AmethystLambda.new(:AmethystParser_choice_lambda1,self,bind)
end
def choice_AmethystParsercb_2(bind)
'sequence'
end
def choice_AmethystParsercb_3(bind)
_append(bind[:f_1],bind[:autovar_1])
end
def choice_AmethystParsercb_4(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def choice_AmethystParsercb_5(bind)
_append(bind[:f_1],bind[:autovar_4])
end
def choice_AmethystParsercb_6(bind)
[]
end
def choice_AmethystParsercb_7(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def clas_AmethystParsercb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def className_AmethystParsercb_1(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def className_AmethystParsercb_2(bind)
_append(bind[:autovar_3],bind[:autovar_4])
end
def className_AmethystParsercb_3(bind)
_append(bind[:autovar_1],bind[:autovar_5])
end
def className_AmethystParsercb_4(bind)
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
"\\#{bind[:c_1]}"
end
def eChar_AmethystParsercb_2(bind)
'#'+'{'
end
def eChar_AmethystParsercb_3(bind)
'}'
end
def fails_AmethystParsercb_1(bind)
(false) || FAIL
end
def grammar_AmethystParsercb_1(bind)
bind[:parent_1]="Amethyst"
end
def grammar_AmethystParsercb_2(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def grammar_AmethystParsercb_3(bind)
Grammar.create( {:name=>bind[:name_1],:parent=>bind[:parent_1],:rules=>bind[:rules_1] })
end
def igrammar_AmethystParsercb_1(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def igrammar_AmethystParsercb_2(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def igrammar_AmethystParsercb_3(bind)
bind[:it_1]*""
end
def igrammar_AmethystParsercb_4(bind)
_append(bind[:autovar_2],bind[:autovar_5])
end
def inlineHostExpr_AmethystParsercb_1(bind)
'{'
end
def inlineHostExpr_AmethystParsercb_2(bind)
'}'
end
def key_AmethystParsercb_1(bind)
'['
end
def key_AmethystParsercb_2(bind)
']'
end
def key_AmethystParsercb_3(bind)
Object.const_get(bind[:name_1]).instance_variable_get(:@attrs)
end
def key_AmethystParsercb_4(bind)
Result.create( {:args=>bind[:args_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
end
def key_AmethystParsercb_5(bind)
Key.create( {:args=>bind[:args_1],:name=>bind[:name_1] })
end
def key_AmethystParsercb_6(bind)
Global[bind[:name_1]]
end
def listOf_AmethystParsercb_1(bind)
_append(bind[:f_1],bind[:autovar_1])
end
def listOf_AmethystParsercb_2(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def listOf_AmethystParsercb_3(bind)
_append(bind[:f_1],bind[:autovar_4])
end
def listOf_AmethystParsercb_4(bind)
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
_append(bind[:autovar_1],bind[:autovar_2])
end
def modifier_AmethystParsercb_2(bind)
Comment[bind[:c_1]]
end
def name_AmethystParsercb_1(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def name_AmethystParsercb_2(bind)
_append(bind[:autovar_3],bind[:autovar_4])
end
def name_AmethystParsercb_3(bind)
_append(bind[:autovar_1],bind[:autovar_5])
end
def name_AmethystParsercb_4(bind)
leterize(bind[:it_1]*"")
end
def nr_AmethystParsercb_1(bind)
'('
end
def nr_AmethystParsercb_2(bind)
')'
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
Pred[bind[:expr_1]]
end
def prefixed_AmethystParsercb_10(bind)
_Bind(bind[:name_1],bind[:from_1],bind[:append_1])
end
def prefixed_AmethystParsercb_11(bind)
Seq[_Bind("it",bind[:from_1]) , Act[bind[:e_1]] ]
end
def prefixed_AmethystParsercb_2(bind)
Lookahead[bind[:m_1],bind[:neg_1]=="~"]
end
def prefixed_AmethystParsercb_3(bind)
/[.:\[]/
end
def prefixed_AmethystParsercb_4(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end
def prefixed_AmethystParsercb_5(bind)
Apply["anything"]
end
def prefixed_AmethystParsercb_6(bind)
bind[:from_1]=Pass[bind[:from_1],bind[:it_1]]
end
def prefixed_AmethystParsercb_7(bind)
bind[:from_1]=Enter[bind[:from_1],bind[:it_1]]
end
def prefixed_AmethystParsercb_8(bind)
Many[bind[:from_1],bind[:one_1]=="+"]
end
def prefixed_AmethystParsercb_9(bind)
Or[bind[:from_1],Apply["empty"]]
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
Exp[_body(bind[:e_1])]
end
def rubyarg_AmethystParsercb_10(bind)
_append(bind[:s_1],bind[:autovar_4])
end
def rubyarg_AmethystParsercb_11(bind)
Strin[connectstring(bind[:s_1])]
end
def rubyarg_AmethystParsercb_12(bind)
_append(bind[:s_1],bind[:autovar_5])
end
def rubyarg_AmethystParsercb_13(bind)
_append(bind[:autovar_6],bind[:autovar_7])
end
def rubyarg_AmethystParsercb_14(bind)
_append(bind[:s_1],bind[:autovar_8])
end
def rubyarg_AmethystParsercb_15(bind)
Strin[connectstring(bind[:s_1])]
end
def rubyarg_AmethystParsercb_16(bind)
/[$.:]/
end
def rubyarg_AmethystParsercb_17(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end
def rubyarg_AmethystParsercb_18(bind)
_append(bind[:n_1],bind[:autovar_9])
end
def rubyarg_AmethystParsercb_19(bind)
/[^`{}()'"\[\]]/
end
def rubyarg_AmethystParsercb_2(bind)
'('
end
def rubyarg_AmethystParsercb_20(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end
def rubyarg_AmethystParsercb_3(bind)
')'
end
def rubyarg_AmethystParsercb_4(bind)
'['
end
def rubyarg_AmethystParsercb_5(bind)
']'
end
def rubyarg_AmethystParsercb_6(bind)
'{'
end
def rubyarg_AmethystParsercb_7(bind)
'}'
end
def rubyarg_AmethystParsercb_8(bind)
_append(bind[:s_1],bind[:autovar_1])
end
def rubyarg_AmethystParsercb_9(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def rule_AmethystParsercb_1(bind)
@locals=[];$appends=[];@bnding=Bnding[]
end
def rule_AmethystParsercb_2(bind)
@bnding
end
def rule_AmethystParsercb_3(bind)
_body(bind[:body_1])
end
def rule_AmethystParsercb_4(bind)
@locals.uniq
end
def rule_AmethystParsercb_5(bind)
bind[:body_1]=Seq[{:ary=>($appends.uniq.map{|a| _Bind(a,PureAct[Args["[]"]])}+[bind[:body_1]])}]; 
end
def rule_AmethystParsercb_6(bind)
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
_append(bind[:autovar_1],bind[:autovar_2])
end
def sequence_AmethystParsercb_2(bind)
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
Apply["clas",bind[:cls_1]]
end
def term_AmethystParsercb_10(bind)
Apply["exactly",bind[:it_1]]
end
def term_AmethystParsercb_11(bind)
_append(bind[:x_1],bind[:autovar_3])
end
def term_AmethystParsercb_12(bind)
Apply["regch","/[#{bind[:x_1]}]/"]
end
def term_AmethystParsercb_13(bind)
a=autovar; Seq[Or[{:ary=>bind[:ors_1].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],PureAct[a]]
end
def term_AmethystParsercb_2(bind)
Nested[bind[:expr_1]]
end
def term_AmethystParsercb_3(bind)
Seq[Cut[],Stop[]]
end
def term_AmethystParsercb_4(bind)
bind[:it_1].is_a?(Result) ? bind[:it_1] : Act[Args[bind[:it_1]]]
end
def term_AmethystParsercb_5(bind)
Act[bind[:x_1]]
end
def term_AmethystParsercb_6(bind)
_append(bind[:s_1],bind[:autovar_1])
end
def term_AmethystParsercb_7(bind)
Apply["token" ,quote(bind[:s_1])]
end
def term_AmethystParsercb_8(bind)
_append(bind[:s_1],bind[:autovar_2])
end
def term_AmethystParsercb_9(bind)
Apply["seq"   ,quote(bind[:s_1])]
end
def upper_AmethystParsercb_1(bind)
/[A-Z]/
end
def upper_AmethystParsercb_2(bind)
(bind[:regex_1].match(bind[:c_1])) || FAIL
end

end


 require 'compiled/parser_c'
