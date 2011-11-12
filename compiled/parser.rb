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

#@Or and @Seq are necessary for collect

class AmethystParser < Amethyst

def _args_AmethystParsercb_1(bind)
Args[{:ary=>([bind[0]]+bind[2]+[bind[1]])}]
end
def addargs_AmethystParsercb_1(bind)
_Local(bind[3]) 
end
def addargs_AmethystParsercb_2(bind)
_append(bind[1],bind[6])
end
def addargs_AmethystParsercb_3(bind)
bind[0] || []
end
def application_AmethystParsercb_1(bind)
[bind[3],bind[4]]
end
def application_AmethystParsercb_2(bind)
_append(bind[5],bind[6])
end
def application_AmethystParsercb_3(bind)
bind[9]+[',']
end
def application_AmethystParsercb_4(bind)
bind[10]=[bind[10]]
end
def application_AmethystParsercb_5(bind)
Apply[bind[4],bind[16]]
end
def argsOpt_AmethystParsercb_1(bind)
_append(bind[7],bind[8])
end
def argsOpt_AmethystParsercb_2(bind)
bind[11]+[',']
end
def argsOpt_AmethystParsercb_3(bind)
bind[12]=[bind[12]]
end
def atomicHostExpr_AmethystParsercb_1(bind)
"{#{bind[2]*""}}"
end
def atomicHostExpr_AmethystParsercb_2(bind)
bind[3]=[bind[3]]
end
def choice_AmethystParsercb_1(bind)
_append(bind[0],bind[1])
end
def choice_AmethystParsercb_2(bind)
_append(bind[0],bind[4])
end
def choice_AmethystParsercb_3(bind)
Or.create( {:ary=>bind[6] })
end
def className_AmethystParsercb_1(bind)
leterize(bind[5]*"")
end
def collect_AmethystParsercb_1(bind)
a=autovar.normalize; Seq[Or[{:ary=>bind[0].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]
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
def key_AmethystParsercb_1(bind)
Object.const_get(bind[0]).instance_variable_get(:@attrs)
end
def key_AmethystParsercb_2(bind)
Result[{:name=>bind[0],:vars=>bind[1]}]
end
def key_AmethystParsercb_3(bind)
Key[bind[0]]
end
def key_AmethystParsercb_4(bind)
Global[bind[0]]
end
def modifier_AmethystParsercb_1(bind)
"#"
end
def modifier_AmethystParsercb_2(bind)
_append(bind[3],bind[4])
end
def modifier_AmethystParsercb_3(bind)
Comment[bind[5]]
end
def prefixed_AmethystParsercb_1(bind)
Pred[bind[0]]
end
def prefixed_AmethystParsercb_10(bind)
Seq[_Bind("it",bind[6]) , Act[bind[13]] ]
end
def prefixed_AmethystParsercb_11(bind)
_append(bind[7],bind[9])
end
def prefixed_AmethystParsercb_2(bind)
Lookahead[bind[5],bind[4]=="~"]
end
def prefixed_AmethystParsercb_3(bind)
/[.:\[]/
end
def prefixed_AmethystParsercb_4(bind)
Apply["anything"]
end
def prefixed_AmethystParsercb_5(bind)
bind[6]=Pass[bind[6],bind[8]]
end
def prefixed_AmethystParsercb_6(bind)
bind[6]=Enter[bind[6],bind[8]]
end
def prefixed_AmethystParsercb_7(bind)
Many[bind[6],bind[10]=="+"]
end
def prefixed_AmethystParsercb_8(bind)
Or[bind[6],Apply["empty"]]
end
def prefixed_AmethystParsercb_9(bind)
_Bind(bind[11],bind[6],bind[12])
end
def procargs2_AmethystParsercb_1(bind)
@tmp<<bind[5]
end
def procargs_AmethystParsercb_1(bind)
@ary=[];@tmp=[]
end
def procargs_AmethystParsercb_2(bind)
(bind[1]==',') || FAIL
end
def procargs_AmethystParsercb_3(bind)
@ary<<Args[{:ary=>@tmp}];@tmp=[]
end
def procargs_AmethystParsercb_4(bind)
_append(bind[0],bind[2])
end
def procargs_AmethystParsercb_5(bind)
@ary
end
def rubyarg_AmethystParsercb_1(bind)
Exp[_body(bind[2])]
end
def rubyarg_AmethystParsercb_10(bind)
/[^`{}()'"\[\]]/
end
def rubyarg_AmethystParsercb_2(bind)
_append(bind[0],bind[9])
end
def rubyarg_AmethystParsercb_3(bind)
_append(bind[10],bind[11])
end
def rubyarg_AmethystParsercb_4(bind)
_append(bind[0],bind[12])
end
def rubyarg_AmethystParsercb_5(bind)
Strin[connectstring(bind[0])]
end
def rubyarg_AmethystParsercb_6(bind)
_append(bind[0],bind[13])
end
def rubyarg_AmethystParsercb_7(bind)
_append(bind[0],bind[16])
end
def rubyarg_AmethystParsercb_8(bind)
/[$.:]/
end
def rubyarg_AmethystParsercb_9(bind)
_append(bind[1],bind[18])
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
bind[4]+[',']
end
def ruleargs_AmethystParsercb_2(bind)
bind[5]=[bind[5]]
end
def ruleargs_AmethystParsercb_3(bind)
bind[11]=[bind[11]]
end
def sequence_AmethystParsercb_1(bind)
Seq.create( {:ary=>bind[2] })
end
def term_AmethystParsercb_1(bind)
Apply["clas",bind[2]]
end
def term_AmethystParsercb_10(bind)
_append(bind[9],bind[10])
end
def term_AmethystParsercb_11(bind)
Apply["seq"   ,quote(bind[0])]
end
def term_AmethystParsercb_12(bind)
Apply["exactly",bind[5]]
end
def term_AmethystParsercb_13(bind)
_append(bind[1],bind[16])
end
def term_AmethystParsercb_14(bind)
_append(bind[14],bind[15])
end
def term_AmethystParsercb_15(bind)
Apply["regch","/[#{bind[1]*""}]/"]
end
def term_AmethystParsercb_16(bind)
a=autovar.normalize; Seq[Or[{:ary=>bind[17].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],a]
end
def term_AmethystParsercb_2(bind)
Nested[bind[4]]
end
def term_AmethystParsercb_3(bind)
Seq[Cut[],Stop[]]
end
def term_AmethystParsercb_4(bind)
Act[Args[bind[5]]]
end
def term_AmethystParsercb_5(bind)
Act[bind[1]]
end
def term_AmethystParsercb_6(bind)
_append(bind[0],bind[8])
end
def term_AmethystParsercb_7(bind)
_append(bind[6],bind[7])
end
def term_AmethystParsercb_8(bind)
Apply["token" ,quote(bind[0])]
end
def term_AmethystParsercb_9(bind)
_append(bind[0],bind[11])
end

end


def parser_compiled_by
'ea067fdfa12d41c5b58f6a4e0cd87f03'
end
def parser_source_hash
'bcc979ada99c6c0f6a1b989834696d25'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
'db3d8b98cf22759be8a68e085bd0a4f4'
end
  require 'compiled/parser_c'
