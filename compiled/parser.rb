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
def self.switchcb_AmethystParser1(e)
return 0 if e<=Args
return 1 if e<=Object
return 2
end
@@switchhashAmethystParser1=Hash.new{|h,k| h[k]=switchcb_AmethystParser1(k)}
def switchcbAmethystParser1(e)
@@switchhashAmethystParser1[e.class]
end
def __AmethystParsercb_1(bind)
/[\s\t\r\n\f]/
end
def __AmethystParsercb_2(bind)
(bind[1].is_a? String ) || FAIL
end
def __AmethystParsercb_3(bind)
(bind[0].match(bind[3])) || FAIL
end
def __args_AmethystParsercb_1(bind)
_append(bind[1],bind[2])
end
def _args_AmethystParsercb_1(bind)
Args[{:ary=>([bind[0]]+bind[2]+[bind[1]])}]
end
def addargs_AmethystParsercb_1(bind)
Args
end
def addargs_AmethystParsercb_2(bind)
_Local(bind[2]) 
end
def addargs_AmethystParsercb_3(bind)
_append(bind[0],bind[3])
end
def addargs_AmethystParsercb_4(bind)
bind[0] || []
end
def application_AmethystParsercb_1(bind)
[bind[0],bind[1]]
end
def application_AmethystParsercb_2(bind)
_append(bind[2],bind[3])
end
def application_AmethystParsercb_3(bind)
bind[6]+[',']
end
def application_AmethystParsercb_4(bind)
bind[7]=[bind[7]]
end
def application_AmethystParsercb_5(bind)
Apply[bind[1],bind[13]]
end
def argsOpt_AmethystParsercb_1(bind)
_append(bind[6],bind[7])
end
def argsOpt_AmethystParsercb_2(bind)
bind[10]+[',']
end
def argsOpt_AmethystParsercb_3(bind)
bind[11]=[bind[11]]
end
def args_AmethystParsercb_1(bind)
_append(bind[4],bind[5])
end
def args_AmethystParsercb_2(bind)
bind[8]+[',']
end
def args_AmethystParsercb_3(bind)
bind[9]=[bind[9]]
end
def atomicHostExpr_AmethystParsercb_1(bind)
_append(bind[0],bind[1])
end
def atomicHostExpr_AmethystParsercb_2(bind)
"{#{bind[2]*""}}"
end
def atomicHostExpr_AmethystParsercb_3(bind)
bind[3]=[bind[3]]
end
def char_AmethystParsercb_1(bind)
(bind[0].is_a? String ) || FAIL
end
def choice_AmethystParsercb_1(bind)
_append(bind[0],bind[1])
end
def choice_AmethystParsercb_2(bind)
_append(bind[2],bind[3])
end
def choice_AmethystParsercb_3(bind)
_append(bind[0],bind[4])
end
def choice_AmethystParsercb_4(bind)
Or.create( {:ary=>bind[6] })
end
def clas_AmethystParsercb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def className_AmethystParsercb_1(bind)
_append(bind[0],bind[1])
end
def className_AmethystParsercb_2(bind)
_append(bind[2],bind[3])
end
def className_AmethystParsercb_3(bind)
_append(bind[0],bind[4])
end
def className_AmethystParsercb_4(bind)
leterize(bind[5]*"")
end
def collect_AmethystParsercb_1(bind)
a=autovar; Seq[Or[{:ary=>bind[0].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],PureAct[a]]
end
def digit_AmethystParsercb_1(bind)
/[0-9]/
end
def digit_AmethystParsercb_2(bind)
(bind[1].is_a? String ) || FAIL
end
def digit_AmethystParsercb_3(bind)
(bind[0].match(bind[3])) || FAIL
end
def eChar_AmethystParsercb_1(bind)
(bind[0].is_a? String ) || FAIL
end
def eChar_AmethystParsercb_2(bind)
"\\#{bind[2]}"
end
def eChar_AmethystParsercb_3(bind)
'#'+'{'
end
def eChar_AmethystParsercb_4(bind)
Args[{:ary=>([bind[5]]+bind[6]+[bind[4]])}]
end
def eChar_AmethystParsercb_5(bind)
(bind[0].is_a? String ) || FAIL
end
def fails_AmethystParsercb_1(bind)
(false) || FAIL
end
def grammar_AmethystParsercb_1(bind)
bind[1]="Amethyst"
end
def grammar_AmethystParsercb_2(bind)
_append(bind[2],bind[3])
end
def grammar_AmethystParsercb_3(bind)
Grammar.create( {:name=>bind[0],:parent=>bind[1],:rules=>bind[4] })
end
def igrammar_AmethystParsercb_1(bind)
_append(bind[1],bind[2])
end
def igrammar_AmethystParsercb_2(bind)
_append(bind[1],bind[3])
end
def igrammar_AmethystParsercb_3(bind)
bind[4]*""
end
def igrammar_AmethystParsercb_4(bind)
_append(bind[0],bind[5])
end
def inlineHostExpr_AmethystParsercb_1(bind)
_append(bind[0],bind[1])
end
def inlineHostExpr_AmethystParsercb_2(bind)
bind[4]+[',']
end
def inlineHostExpr_AmethystParsercb_3(bind)
bind[5]=[bind[5]]
end
def key_AmethystParsercb_1(bind)
Object.const_get(bind[0]).instance_variable_get(:@attrs)
end
def key_AmethystParsercb_2(bind)
Result.create( {:name=>bind[0],:vars=>bind[1] })
end
def key_AmethystParsercb_3(bind)
Key[bind[0]]
end
def key_AmethystParsercb_4(bind)
Global[bind[0]]
end
def listOf_AmethystParsercb_1(bind)
_append(bind[0],bind[2])
end
def listOf_AmethystParsercb_2(bind)
_append(bind[3],bind[5])
end
def listOf_AmethystParsercb_3(bind)
_append(bind[0],bind[6])
end
def lower_AmethystParsercb_1(bind)
/[a-z]/
end
def lower_AmethystParsercb_2(bind)
(bind[1].is_a? String ) || FAIL
end
def lower_AmethystParsercb_3(bind)
(bind[0].match(bind[3])) || FAIL
end
def modifier_AmethystParsercb_1(bind)
"#"
end
def modifier_AmethystParsercb_2(bind)
_append(bind[2],bind[3])
end
def modifier_AmethystParsercb_3(bind)
Comment[bind[4]]
end
def name_AmethystParsercb_1(bind)
_append(bind[0],bind[1])
end
def name_AmethystParsercb_2(bind)
_append(bind[2],bind[3])
end
def name_AmethystParsercb_3(bind)
_append(bind[0],bind[4])
end
def name_AmethystParsercb_4(bind)
leterize(bind[5]*"")
end
def nr_AmethystParsercb_1(bind)
_append(bind[0],bind[1])
end
def nr_AmethystParsercb_2(bind)
bind[4]+[',']
end
def nr_AmethystParsercb_3(bind)
bind[5]=[bind[5]]
end
def number_AmethystParsercb_1(bind)
/[0-9]/
end
def number_AmethystParsercb_2(bind)
(bind[2].is_a? String ) || FAIL
end
def number_AmethystParsercb_3(bind)
(bind[1].match(bind[4])) || FAIL
end
def number_AmethystParsercb_4(bind)
_append(bind[0],bind[6])
end
def number_AmethystParsercb_5(bind)
/[0-9]/
end
def number_AmethystParsercb_6(bind)
(bind[2].is_a? String ) || FAIL
end
def number_AmethystParsercb_7(bind)
(bind[1].match(bind[4])) || FAIL
end
def number_AmethystParsercb_8(bind)
_append(bind[0],bind[7])
end
def prefixed_AmethystParsercb_1(bind)
Pred[bind[0]]
end
def prefixed_AmethystParsercb_10(bind)
Or[bind[5],Apply["empty"]]
end
def prefixed_AmethystParsercb_11(bind)
_Bind(bind[12],bind[5],bind[13])
end
def prefixed_AmethystParsercb_12(bind)
Seq[_Bind("it",bind[5]) , Act[bind[14]] ]
end
def prefixed_AmethystParsercb_2(bind)
Lookahead[bind[4],bind[3]=="~"]
end
def prefixed_AmethystParsercb_3(bind)
/[.:\[]/
end
def prefixed_AmethystParsercb_4(bind)
(bind[7].is_a? String ) || FAIL
end
def prefixed_AmethystParsercb_5(bind)
(bind[6].match(bind[9])) || FAIL
end
def prefixed_AmethystParsercb_6(bind)
Apply["anything"]
end
def prefixed_AmethystParsercb_7(bind)
bind[5]=Pass[bind[5],bind[10]]
end
def prefixed_AmethystParsercb_8(bind)
bind[5]=Enter[bind[5],bind[10]]
end
def prefixed_AmethystParsercb_9(bind)
Many[bind[5],bind[11]=="+"]
end
def procargs2_AmethystParsercb_1(bind)
_append(bind[1],bind[2])
end
def procargs2_AmethystParsercb_2(bind)
@tmp<<bind[5]
end
def procargs2_AmethystParsercb_3(bind)
@tmp<<bind[5]
end
def procargs_AmethystParsercb_1(bind)
@ary=[];@tmp=[]
end
def procargs_AmethystParsercb_2(bind)
(bind[0]==',') || FAIL
end
def procargs_AmethystParsercb_3(bind)
@ary<<Args[{:ary=>@tmp}];@tmp=[]
end
def procargs_AmethystParsercb_4(bind)
@ary
end
def regch_AmethystParsercb_1(bind)
(bind[0].is_a? String ) || FAIL
end
def regch_AmethystParsercb_2(bind)
(bind[3].match(bind[2])) || FAIL
end
def rubyarg_AmethystParsercb_1(bind)
Exp[_body(bind[2])]
end
def rubyarg_AmethystParsercb_10(bind)
_append(bind[13],bind[14])
end
def rubyarg_AmethystParsercb_11(bind)
_append(bind[0],bind[15])
end
def rubyarg_AmethystParsercb_12(bind)
Strin[connectstring(bind[0])]
end
def rubyarg_AmethystParsercb_13(bind)
/[$.:]/
end
def rubyarg_AmethystParsercb_14(bind)
(bind[18].is_a? String ) || FAIL
end
def rubyarg_AmethystParsercb_15(bind)
(bind[17].match(bind[20])) || FAIL
end
def rubyarg_AmethystParsercb_16(bind)
_append(bind[1],bind[22])
end
def rubyarg_AmethystParsercb_17(bind)
/[^`{}()'"\[\]]/
end
def rubyarg_AmethystParsercb_18(bind)
(bind[18].is_a? String ) || FAIL
end
def rubyarg_AmethystParsercb_19(bind)
(bind[17].match(bind[20])) || FAIL
end
def rubyarg_AmethystParsercb_2(bind)
Args[{:ary=>([bind[5]]+bind[6]+[bind[4]])}]
end
def rubyarg_AmethystParsercb_20(bind)
Exp[_body(bind[2])]
end
def rubyarg_AmethystParsercb_21(bind)
Args[{:ary=>([bind[5]]+bind[6]+[bind[4]])}]
end
def rubyarg_AmethystParsercb_22(bind)
Args[{:ary=>([bind[5]]+bind[6]+[bind[4]])}]
end
def rubyarg_AmethystParsercb_23(bind)
Args[{:ary=>([bind[5]]+bind[6]+[bind[4]])}]
end
def rubyarg_AmethystParsercb_24(bind)
_append(bind[0],bind[8])
end
def rubyarg_AmethystParsercb_25(bind)
_append(bind[9],bind[10])
end
def rubyarg_AmethystParsercb_26(bind)
_append(bind[0],bind[11])
end
def rubyarg_AmethystParsercb_27(bind)
Strin[connectstring(bind[0])]
end
def rubyarg_AmethystParsercb_28(bind)
_append(bind[0],bind[12])
end
def rubyarg_AmethystParsercb_29(bind)
_append(bind[13],bind[14])
end
def rubyarg_AmethystParsercb_3(bind)
Args[{:ary=>([bind[5]]+bind[6]+[bind[4]])}]
end
def rubyarg_AmethystParsercb_30(bind)
_append(bind[0],bind[15])
end
def rubyarg_AmethystParsercb_31(bind)
Strin[connectstring(bind[0])]
end
def rubyarg_AmethystParsercb_32(bind)
/[$.:]/
end
def rubyarg_AmethystParsercb_33(bind)
(bind[18].is_a? String ) || FAIL
end
def rubyarg_AmethystParsercb_34(bind)
(bind[17].match(bind[20])) || FAIL
end
def rubyarg_AmethystParsercb_35(bind)
_append(bind[1],bind[22])
end
def rubyarg_AmethystParsercb_36(bind)
/[^`{}()'"\[\]]/
end
def rubyarg_AmethystParsercb_37(bind)
(bind[18].is_a? String ) || FAIL
end
def rubyarg_AmethystParsercb_38(bind)
(bind[17].match(bind[20])) || FAIL
end
def rubyarg_AmethystParsercb_4(bind)
Args[{:ary=>([bind[5]]+bind[6]+[bind[4]])}]
end
def rubyarg_AmethystParsercb_5(bind)
_append(bind[0],bind[8])
end
def rubyarg_AmethystParsercb_6(bind)
_append(bind[9],bind[10])
end
def rubyarg_AmethystParsercb_7(bind)
_append(bind[0],bind[11])
end
def rubyarg_AmethystParsercb_8(bind)
Strin[connectstring(bind[0])]
end
def rubyarg_AmethystParsercb_9(bind)
_append(bind[0],bind[12])
end
def rule_AmethystParsercb_1(bind)
@locals=[];$appends=[];@bnding=Bnding[]
end
def rule_AmethystParsercb_2(bind)
@bnding
end
def rule_AmethystParsercb_3(bind)
_body(bind[3])
end
def rule_AmethystParsercb_4(bind)
@locals.uniq
end
def rule_AmethystParsercb_5(bind)
bind[3]=Seq[{:ary=>($appends.uniq.map{|a| _Bind(a,Act["[]"])}+[bind[3]])}]; 
end
def rule_AmethystParsercb_6(bind)
Rule.create( {:args=>bind[2],:bnding=>bind[0],:body=>bind[3],:locals=>bind[4],:name=>bind[1] })
end
def ruleargs_AmethystParsercb_1(bind)
_append(bind[0],bind[1])
end
def ruleargs_AmethystParsercb_2(bind)
bind[4]+[',']
end
def ruleargs_AmethystParsercb_3(bind)
bind[5]=[bind[5]]
end
def ruleargs_AmethystParsercb_4(bind)
bind[11]=[bind[11]]
end
def sequence_AmethystParsercb_1(bind)
_append(bind[0],bind[1])
end
def sequence_AmethystParsercb_2(bind)
Seq.create( {:ary=>bind[2] })
end
def spaces_AmethystParsercb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_AmethystParsercb_2(bind)
(bind[2].is_a? String ) || FAIL
end
def spaces_AmethystParsercb_3(bind)
(bind[1].match(bind[4])) || FAIL
end
def spaces_AmethystParsercb_4(bind)
_append(bind[0],bind[7])
end
def term_AmethystParsercb_1(bind)
Apply["clas",bind[2]]
end
def term_AmethystParsercb_10(bind)
Apply["exactly",bind[5]]
end
def term_AmethystParsercb_11(bind)
_append(bind[1],bind[9])
end
def term_AmethystParsercb_12(bind)
Apply["regch","/[#{bind[1]}]/"]
end
def term_AmethystParsercb_13(bind)
a=autovar; Seq[Or[{:ary=>bind[10].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],PureAct[a]]
end
def term_AmethystParsercb_2(bind)
Nested[bind[4]]
end
def term_AmethystParsercb_3(bind)
Seq[Cut[],Stop[]]
end
def term_AmethystParsercb_4(bind)
bind[5].is_a?(Result) ? bind[5] : Act[Args[bind[5]]]
end
def term_AmethystParsercb_5(bind)
Act[bind[1]]
end
def term_AmethystParsercb_6(bind)
_append(bind[0],bind[6])
end
def term_AmethystParsercb_7(bind)
Apply["token" ,quote(bind[0])]
end
def term_AmethystParsercb_8(bind)
_append(bind[0],bind[7])
end
def term_AmethystParsercb_9(bind)
Apply["seq"   ,quote(bind[0])]
end
def upper_AmethystParsercb_1(bind)
/[A-Z]/
end
def upper_AmethystParsercb_2(bind)
(bind[1].is_a? String ) || FAIL
end
def upper_AmethystParsercb_3(bind)
(bind[0].match(bind[3])) || FAIL
end

end


def parser_compiled_by
'793e966a1b9536509d81486e8f275c5b'
end
def parser_source_hash
'01bc3c7063c2ffa326eac197a272c010'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
'9f46a5e33da69380aa6a7743b2a40f7d'
end
  require 'compiled/parser_c'
