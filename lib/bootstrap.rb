class Amethyst < AmethystCore
def _()
 _result_ = (nil)
_result_ = ((it=(space());return FAIL if it==FAIL;it))
_result_  
end
def _dot_()
 _result_ = (nil)
_result_ = ((it=(anything());return FAIL if it==FAIL;it))
_result_  
end
def regch(regex_)
 c_ = (nil)
_result_ = (nil)
_result_ = (c_ = ((it=(char());return FAIL if it==FAIL;it))
(it=((regex_.match(c_))||FAIL);return FAIL if it==FAIL;it)
c_ )
_result_  
end
def eof()
 _result_ = (nil)
_result_ = ((it=(_not{(it=(_dot_());next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it))
_result_  
end
def empty()
 _result_ = (nil)
_result_ = (nil)
_result_  
end
def char()
 c_ = (nil)
_result_ = (nil)
_result_ = (c_ = ((it=(_dot_());return FAIL if it==FAIL;it))
(it=((c_.is_a? String )||FAIL);return FAIL if it==FAIL;it)
c_ )
_result_  
end
def endline()
 _result_ = (nil)
_result_ = ((it=(_or(proc{(it=(seq("\r\n"));next FAIL if it==FAIL;it)},proc{(it=(seq("\r"));next FAIL if it==FAIL;it)},proc{(it=(seq("\n"));next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end
def space()
 _result_ = (nil)
_result_ = ((it=(regch(/[\s\t\r\n\f]/));return FAIL if it==FAIL;it))
_result_  
end
def spaces()
 avar1 = (nil)
_result_ = (nil)
_result_ = (avar1 = ([])
while true
avar2=@input;r=it=((it=(space());break FAIL if it==FAIL;it))
 avar1||=[];_append(avar1,it)
 break FAIL if r==FAIL
end;@input=avar2
avar1 )
_result_  
end
def _()
 _result_ = (nil)
_result_ = ((it=(space());return FAIL if it==FAIL;it))
_result_  
end
def digit()
 _result_ = (nil)
_result_ = ((it=(regch(/[0-9]/));return FAIL if it==FAIL;it))
_result_  
end
def lower()
 _result_ = (nil)
_result_ = ((it=(regch(/[a-z]/));return FAIL if it==FAIL;it))
_result_  
end
def upper()
 _result_ = (nil)
_result_ = ((it=(regch(/[A-Z]/));return FAIL if it==FAIL;it))
_result_  
end
def letter()
 _result_ = (nil)
_result_ = ((it=(_or(proc{(it=(lower());next FAIL if it==FAIL;it)},proc{(it=(upper());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end
def letterOrDigit()
 _result_ = (nil)
_result_ = ((it=(_or(proc{(it=(letter());next FAIL if it==FAIL;it)},proc{(it=(digit());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end
def alpha()
 _result_ = (nil)
_result_ = ((it=(letter());return FAIL if it==FAIL;it))
_result_  
end
def alnum()
 _result_ = (nil)
_result_ = ((it=(letterOrDigit());return FAIL if it==FAIL;it))
_result_  
end
def xdigit()
 _result_ = (nil)
_result_ = ((it=(regch(/[0-9a-fA-F]/));return FAIL if it==FAIL;it))
_result_  
end
def word()
 _result_ = (nil)
_result_ = ((it=(_or(proc{(it=(alpha());next FAIL if it==FAIL;it)},proc{(it=(seq("_"));next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end
def listOf(rule_,delim_)
 avar3 = (nil)
f_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{it=((it=(apply(rule_));next FAIL if it==FAIL;it))
 f_||=[];_append(f_,it)
it=(avar3 = ([])
while true
avar4=@input;r=it=((it=(apply(delim_));break FAIL if it==FAIL;it)
(it=(apply(rule_));break FAIL if it==FAIL;it) )
 avar3||=[];_append(avar3,it)
 break FAIL if r==FAIL
end;@input=avar4
avar3 )
 f_||=[];_append(f_,it)
f_ },proc{(it=(empty());next FAIL if it==FAIL;it)
[] }));return FAIL if it==FAIL;it))
_result_  
end
def exactly(wanted_)
 got_ = (nil)
_result_ = (nil)
_result_ = (got_ = ((it=(anything());return FAIL if it==FAIL;it))
(it=((wanted_ == got_)||FAIL);return FAIL if it==FAIL;it)
wanted_ )
_result_  
end
def clas(cls_)
 _result_ = (nil)
_result_ = ((it=((@input.item.is_a?(cls_))||FAIL);return FAIL if it==FAIL;it))
_result_  
end
def is_a(cls_)
 _result_ = (nil)
_result_ = ((it=((@input.src.is_a?(cls_))||FAIL);return FAIL if it==FAIL;it))
_result_  
end
def token(s_)
 _result_ = (nil)
_result_ = ((it=(spaces());return FAIL if it==FAIL;it)
(it=(seq(s_));return FAIL if it==FAIL;it) )
_result_  
end
def many1(s_)
 avar5 = (nil)
a_ = (nil)
_result_ = (nil)
_result_ = (it=((it=(apply(s_));return FAIL if it==FAIL;it))
 a_||=[];_append(a_,it)
it=(avar5 = ([])
while true
avar6=@input;r=it=((it=(apply(s_));break FAIL if it==FAIL;it))
 avar5||=[];_append(avar5,it)
 break FAIL if r==FAIL
end;@input=avar6
avar5 )
 a_||=[];_append(a_,it) )
_result_  
end

end

makeclasses(Object,
    [:Args,:o,:c,:r],
    [:Key,:name,:expr,:args],
    [:Resul,:name,:expr,:args,:vars],
    [:Enter,:name,:cls,:expr],
    :Apply,
    :Nested,
    :Exp,
    :ExpKey,
    :Foreign,
    [:Append,:name,:expr],
    [:Set,:name,:expr],
    [:Many,:o],
    :Many1,
    :Comment,
    [:Act,:uses],
    [:Pred,:uses],
    :Lookahead,
    :Not,
    :Seq,
    :Or,
    :And,
		[:Strin],
		[:Variable,:number],
		[:Pass,:var,:to],
    [:Enter,:klas],
    [:Rule,:name,:args,:locals,:body],
    [:Grammar,:name,:parent,:rules]
)

def quote(s)
  s=s*""
  '"'+s.gsub('\\"','"').gsub('"','\\"')+'"'
end

$av=0
class Autovar
	def to_s
		return "avar"+@no.to_s if @no
		$av+=1
		@no=$av
		to_s
	end
end
def autovar
	Autovar.new
end

class AmethystParser < Amethyst
def igrammar()
 avar7 = (nil)
a_ = (nil)
_result_ = (nil)
_result_ = (a_ = (avar7 = ([])
while true
avar8=@input;r=it=((it=(_or(proc{(it=(_not{(it=(seq("amethyst"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(_dot_());next FAIL if it==FAIL;it) },proc{(it=(grammar());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar7||=[];_append(avar7,it)
 break FAIL if r==FAIL
end;@input=avar8
avar7 )
a_ )
_result_  
end
def grammar()
 avar9 = (nil)
rules_ = (nil)
parent_ = (nil)
name_ = (nil)
_result_ = (nil)
_result_ = ((it=(token("amethyst"));return FAIL if it==FAIL;it)
name_ = ((it=(name());return FAIL if it==FAIL;it))
(it=(_or(proc{(it=(token("<"));next FAIL if it==FAIL;it)
parent_ = ((it=(name());next FAIL if it==FAIL;it)) },proc{(it=(empty());next FAIL if it==FAIL;it)
parent_="Amethyst" }));return FAIL if it==FAIL;it)
(it=(token("{"));return FAIL if it==FAIL;it)
rules_ = (avar9 = ([])
while true
avar10=@input;r=it=((it=(rule());break FAIL if it==FAIL;it))
 avar9||=[];_append(avar9,it)
 break FAIL if r==FAIL
end;@input=avar10
avar9 )
(it=(token("}"));return FAIL if it==FAIL;it)
Grammar[ {:_result=>_result_,:name=>name_,:parent=>parent_,:rules=>rules_ }] )
_result_  
end
def rule()
 body_ = (nil)
args_ = (nil)
name_ = (nil)
_result_ = (nil)
_result_ = (name_ = ((it=(name());return FAIL if it==FAIL;it))
args_ = ((it=(ruleargs());return FAIL if it==FAIL;it))
(it=(token("="));return FAIL if it==FAIL;it)
body_ = ((it=(expression());return FAIL if it==FAIL;it))
body_ = (And[Set[{:name=>"_result",:expr=>body_}] ,Act["_result"]])
Rule[ {:_result=>_result_,:name=>name_,:args=>args_,:body=>body_ }] )
_result_  
end
def expression()
 _result_ = (nil)
_result_ = ((it=(choice());return FAIL if it==FAIL;it))
_result_  
end
def choice()
 ary_ = (nil)
_result_ = (nil)
_result_ = (ary_ = ((it=(listOf('sequence',proc{(it=(token("|"));return FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
Or[ {:_result=>_result_,:ary=>ary_ }] )
_result_  
end
def sequence()
 avar11 = (nil)
ary_ = (nil)
_result_ = (nil)
_result_ = (ary_ = (avar11 = ([])
while true
avar12=@input;r=it=((it=(nr());break FAIL if it==FAIL;it)
(it=(prefixed());break FAIL if it==FAIL;it) )
 avar11||=[];_append(avar11,it)
 break FAIL if r==FAIL
end;@input=avar12
avar11 )
And[ {:_result=>_result_,:ary=>ary_ }] )
_result_  
end
def prefixed()
 to_ = (nil)
from_ = (nil)
expr_ = (nil)
m_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(token("~"));next FAIL if it==FAIL;it)
m_ = ((it=(modifier());next FAIL if it==FAIL;it))
Not[m_] },proc{(it=(token("&"));next FAIL if it==FAIL;it)
expr_ = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
Pred[expr_] },proc{(it=(token("&"));next FAIL if it==FAIL;it)
(it=(_not{expr_ = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
m_ = ((it=(modifier());next FAIL if it==FAIL;it))
Lookahead[m_] },proc{from_ = ((it=(modifier());next FAIL if it==FAIL;it))
(it=(token("=>"));next FAIL if it==FAIL;it)
to_ = ((it=(modifier());next FAIL if it==FAIL;it))
And[Set[{:name=>"it",:expr=>from_}] ,Pass[{:to=>to_, :var=>Variable["it"]}]] },proc{(it=(modifier());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end
def modifier()
 avar13 = (nil)
c_ = (nil)
t_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{t_ = ((it=(term());next FAIL if it==FAIL;it))
t_ = ((it=(optIter(t_));next FAIL if it==FAIL;it))
(it=(_or(proc{(it=(_not{(it=(space());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(binding(t_));next FAIL if it==FAIL;it) },proc{(it=(empty());next FAIL if it==FAIL;it)
t_ }));next FAIL if it==FAIL;it) },proc{(it=(binding(Apply["anything"]));next FAIL if it==FAIL;it)},proc{(it=(token("#"));next FAIL if it==FAIL;it)
c_ = (avar13 = ([])
while true
avar14=@input;r=it=((it=(_not{(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_dot_());break FAIL if it==FAIL;it) )
 avar13||=[];_append(avar13,it)
 break FAIL if r==FAIL
end;@input=avar14
avar13 )
Comment[c_] }));return FAIL if it==FAIL;it))
_result_  
end
def optIter(t_)
 _result_ = (nil)
_result_ = ((it=(_or(proc{(it=(token("*"));next FAIL if it==FAIL;it)
a=autovar; And[Set[{:name=>a, :expr=> Act["[]"]}], Many[{:ary=>[Append[{:name=>a,:expr=>t_}]],:o=>autovar}],Act[a]] },proc{(it=(token("+"));next FAIL if it==FAIL;it)
a=autovar; And[Set[{:name=>a, :expr=> Act["[]"]}], Append[{:name=>a,:expr=>t_}], Many[{:ary=>[Append[{:name=>a,:expr=>t_}]],:o=>autovar}],Act[a]] },proc{(it=(token("?"));next FAIL if it==FAIL;it)
Or[t_,Apply["empty"]] },proc{(it=(empty());next FAIL if it==FAIL;it)
t_ }));return FAIL if it==FAIL;it))
_result_  
end
def binding(exp_)
 e_ = (nil)
name_ = (nil)
expr_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{expr_ = (exp_)
(it=(token(":"));next FAIL if it==FAIL;it)
name_ = ((it=(name());next FAIL if it==FAIL;it))
(it=(_or(proc{(it=(seq("[]"));next FAIL if it==FAIL;it)
Append[ {:_result=>_result_,:expr=>expr_,:name=>name_ }] },proc{(it=(empty());next FAIL if it==FAIL;it)
Set[ {:_result=>_result_,:expr=>expr_,:name=>name_ }] }));next FAIL if it==FAIL;it) },proc{(it=(token(":"));next FAIL if it==FAIL;it)
e_ = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
And[Set[{:name=>"it", :expr=>exp_}] , Act[e_] ] }));return FAIL if it==FAIL;it))
_result_  
end
def term()
 avar15 = (nil)
it_ = (nil)
avar16 = (nil)
avar17 = (nil)
s_ = (nil)
x_ = (nil)
expr_ = (nil)
cls_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{cls_ = ((it=(_or(proc{(it=(className());next FAIL if it==FAIL;it)},proc{(it=(token(""));next FAIL if it==FAIL;it)
"Object" }));next FAIL if it==FAIL;it))
(it=(seq("["));next FAIL if it==FAIL;it)
expr_ = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token("]"));next FAIL if it==FAIL;it)
And[Apply["clas",cls_], Enter[expr_]] },proc{cls_ = ((it=(className());next FAIL if it==FAIL;it))
Apply["is_a",cls_] },proc{(it=(token("nested"));next FAIL if it==FAIL;it)
(it=(seq("("));next FAIL if it==FAIL;it)
expr_ = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")"));next FAIL if it==FAIL;it)
Nested[expr_] },proc{(it=(application());next FAIL if it==FAIL;it)},proc{(it=(key());next FAIL if it==FAIL;it)},proc{x_ = ((it=(_or(proc{(it=(token("->"));next FAIL if it==FAIL;it)
(it=(atomicHostExpr());next FAIL if it==FAIL;it) },proc{(it=(token(""));next FAIL if it==FAIL;it)
(it=(inlineHostExpr());next FAIL if it==FAIL;it) }));next FAIL if it==FAIL;it))
Act[x_] },proc{(it=(token("\""));next FAIL if it==FAIL;it)
s_ = (avar17 = ([])
while true
avar18=@input;r=it=((it=(_not{(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar17||=[];_append(avar17,it)
 break FAIL if r==FAIL
end;@input=avar18
avar17 )
(it=(seq("\""));next FAIL if it==FAIL;it)
Apply["token" ,quote(s_)] },proc{(it=(token("'"));next FAIL if it==FAIL;it)
s_ = (avar16 = ([])
while true
avar19=@input;r=it=((it=(_not{(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar16||=[];_append(avar16,it)
 break FAIL if r==FAIL
end;@input=avar19
avar16 )
(it=(seq("\'"));next FAIL if it==FAIL;it)
Apply["seq",quote(s_)] },proc{it_ = ((it=(number());next FAIL if it==FAIL;it))
Apply["exactly",it_] },proc{(it=(token("<"));next FAIL if it==FAIL;it)
x_ = (avar15 = ([])
it=((it=(_not{(it=(token(">"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(eChar());next FAIL if it==FAIL;it) )
 avar15||=[];_append(avar15,it)
while true
avar20=@input;r=it=((it=(_not{(it=(token(">"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar15||=[];_append(avar15,it)
 break FAIL if r==FAIL
end;@input=avar20
avar15 )
(it=(token(">"));next FAIL if it==FAIL;it)
Apply["regch","/[#{x_}]/"] },proc{(it=(token("("));next FAIL if it==FAIL;it)
x_ = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")[]"));next FAIL if it==FAIL;it)
(it=(collect(x_));next FAIL if it==FAIL;it) },proc{(it=(token("("));next FAIL if it==FAIL;it)
x_ = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")"));next FAIL if it==FAIL;it)
x_ }));return FAIL if it==FAIL;it))
_result_  
end
def application()
 arg_ = (nil)
rule_ = (nil)
klas_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{klas_ = ((it=(name());next FAIL if it==FAIL;it))
(it=(seq("::"));next FAIL if it==FAIL;it)
rule_ = ((it=(name());next FAIL if it==FAIL;it))
arg_ = ((it=(argsOpt('(',')'));next FAIL if it==FAIL;it))
Foreign[ {:_result=>_result_,:klas=>klas_,:rule=>rule_,:arg=>arg_ }] },proc{rule_ = ((it=(name());next FAIL if it==FAIL;it))
arg_ = ((it=(argsOpt('(',')'));next FAIL if it==FAIL;it))
Apply[rule_,arg_] }));return FAIL if it==FAIL;it))
_result_  
end
def key()
 args_ = (nil)
name_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(token("@"));next FAIL if it==FAIL;it)
name_ = ((it=(className());next FAIL if it==FAIL;it))
args_ = ((it=(argsOpt('[',']'));next FAIL if it==FAIL;it))
Resul[ {:_result=>_result_,:name=>name_,:args=>args_ }] },proc{(it=(token("@"));next FAIL if it==FAIL;it)
name_ = ((it=(name());next FAIL if it==FAIL;it))
Key[ {:_result=>_result_,:name=>name_,:args=>args_ }] }));return FAIL if it==FAIL;it))
_result_  
end
def collect(ors_)
 _result_ = (nil)
_result_ = (a=autovar; And[Or[{:ary=>ors_.ary.map{|ands| And[{:ary=>ands.ary.map{|expr| Append[{:name=>a,:expr=>expr}]}}]}}],Act[a]])
_result_  
end
def eChar()
 c_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(seq("\\"));next FAIL if it==FAIL;it)
c_ = ((it=(char());next FAIL if it==FAIL;it))
"\\#{c_}" },proc{(it=(_args('#{','}'));next FAIL if it==FAIL;it)},proc{(it=(char());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end
def ruleargs()
 _result_ = (nil)
_result_ = ((it=(argsOpt('(',')'));return FAIL if it==FAIL;it))
_result_  
end
def nr()
 _result_ = (nil)
_result_ = ((it=(_not{(it=(name());next FAIL if it==FAIL;it)
(it=(ruleargs());next FAIL if it==FAIL;it)
(it=(token("="));next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it))
_result_  
end
def argsOpt(o_,c_)
 _result_ = (nil)
_result_ = ((it=(_or(proc{(it=(args(o_,c_));next FAIL if it==FAIL;it)},proc{(it=(empty());next FAIL if it==FAIL;it)
[] }));return FAIL if it==FAIL;it))
_result_  
end
def args(o_,c_)
 r_ = (nil)
_result_ = (nil)
_result_ = (r_ = ((it=(__args(o_,c_));return FAIL if it==FAIL;it))
r_<< ','
							ary=[]
							tmp=[]
							r_.each{|a|
								if a==','
									ary<<Args[{:ary=>tmp}];tmp=[]
								else
									tmp<<a
								end
							}
							ary
						 )
_result_  
end
def _args(o_,c_)
 r_ = (nil)
_result_ = (nil)
_result_ = (r_ = ((it=(__args(o_,c_));return FAIL if it==FAIL;it))
Args[{:ary=>([o_]+r_+[c_])}] )
_result_  
end
def __args(o_,c_)
 avar21 = (nil)
r_ = (nil)
_result_ = (nil)
_result_ = ((it=(seq(o_));return FAIL if it==FAIL;it)
(it=(token(""));return FAIL if it==FAIL;it)
r_ = (avar21 = ([])
while true
avar22=@input;r=it=((it=(rubyarg());break FAIL if it==FAIL;it))
 avar21||=[];_append(avar21,it)
 break FAIL if r==FAIL
end;@input=avar22
avar21 )
(it=(seq(c_));return FAIL if it==FAIL;it)
r_ )
_result_  
end
def rubyarg()
 k_ = (nil)
avar23 = (nil)
n_ = (nil)
avar24 = (nil)
avar25 = (nil)
s_ = (nil)
e_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(seq("`"));next FAIL if it==FAIL;it)
e_ = ((it=(expression());next FAIL if it==FAIL;it))
(it=(seq("`"));next FAIL if it==FAIL;it)
Exp[e_] },proc{(it=(_args('(',')'));next FAIL if it==FAIL;it)},proc{(it=(_args('[',']'));next FAIL if it==FAIL;it)},proc{(it=(_args('{','}'));next FAIL if it==FAIL;it)},proc{(it=(seq("\""));next FAIL if it==FAIL;it)
s_ = (avar25 = ([])
while true
avar26=@input;r=it=((it=(_not{(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar25||=[];_append(avar25,it)
 break FAIL if r==FAIL
end;@input=avar26
avar25 )
(it=(seq("\""));next FAIL if it==FAIL;it)
Strin[['"']+ s_+['"']] },proc{(it=(seq("\'"));next FAIL if it==FAIL;it)
s_ = (avar24 = ([])
while true
avar27=@input;r=it=((it=(_not{(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar24||=[];_append(avar24,it)
 break FAIL if r==FAIL
end;@input=avar27
avar24 )
(it=(seq("\'"));next FAIL if it==FAIL;it)
Strin[['\'']+s_+['\'']] },proc{(it=(_or(proc{(it=(seq("@@"));next FAIL if it==FAIL;it)
it=("@")
 n_||=[];_append(n_,it) },proc{it=((it=(regch(/[.:]/));next FAIL if it==FAIL;it))
 n_||=[];_append(n_,it)},proc{(it=(empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it)
it=(avar23 = ([])
it=((it=(regch(/[a-zA-Z_]/));next FAIL if it==FAIL;it))
 avar23||=[];_append(avar23,it)
while true
avar28=@input;r=it=((it=(regch(/[a-zA-Z_]/));break FAIL if it==FAIL;it))
 avar23||=[];_append(avar23,it)
 break FAIL if r==FAIL
end;@input=avar28
avar23 )
 n_||=[];_append(n_,it)
n_*"" },proc{k_ = ((it=(key());next FAIL if it==FAIL;it))
ExpKey[k_]  },proc{(it=(regch(/[^`{}()'"\[\]]/));next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end
def nameFirst()
 _result_ = (nil)
_result_ = ((it=(_or(proc{(it=(regch(/[_$.^]/));next FAIL if it==FAIL;it)},proc{(it=(letter());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end
def nameRest()
 _result_ = (nil)
_result_ = ((it=(_or(proc{(it=(nameFirst());next FAIL if it==FAIL;it)},proc{(it=(digit());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end
def className()
 avar29 = (nil)
avar30 = (nil)
it_ = (nil)
avar31 = (nil)
_result_ = (nil)
_result_ = (avar31 = ([])
while true
avar32=@input;r=it=((it=(_());break FAIL if it==FAIL;it))
 avar31||=[];_append(avar31,it)
 break FAIL if r==FAIL
end;@input=avar32
avar31
it_ = (it=((it=(upper());return FAIL if it==FAIL;it))
 avar30||=[];_append(avar30,it)
it=(avar29 = ([])
while true
avar33=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 avar29||=[];_append(avar29,it)
 break FAIL if r==FAIL
end;@input=avar33
avar29 )
 avar30||=[];_append(avar30,it)
avar30 )
leterize(it_*"") )
_result_  
end
def name()
 avar34 = (nil)
avar35 = (nil)
it_ = (nil)
avar36 = (nil)
_result_ = (nil)
_result_ = (avar36 = ([])
while true
avar37=@input;r=it=((it=(_());break FAIL if it==FAIL;it))
 avar36||=[];_append(avar36,it)
 break FAIL if r==FAIL
end;@input=avar37
avar36
it_ = (it=((it=(nameFirst());return FAIL if it==FAIL;it))
 avar35||=[];_append(avar35,it)
it=(avar34 = ([])
while true
avar38=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 avar34||=[];_append(avar34,it)
 break FAIL if r==FAIL
end;@input=avar38
avar34 )
 avar35||=[];_append(avar35,it)
avar35 )
leterize(it_*"") )
_result_  
end
def inlineHostExpr()
 _result_ = (nil)
_result_ = ((it=(args('{','}'));return FAIL if it==FAIL;it))
_result_  
end
def number()
 avar39 = (nil)
_result_ = (nil)
_result_ = (avar39 = ([])
it=((it=(regch(/[0-9]/));return FAIL if it==FAIL;it))
 avar39||=[];_append(avar39,it)
while true
avar40=@input;r=it=((it=(regch(/[0-9]/));break FAIL if it==FAIL;it))
 avar39||=[];_append(avar39,it)
 break FAIL if r==FAIL
end;@input=avar40
avar39 )
_result_  
end
def atomicHostExpr()
 it_ = (nil)
avar41 = (nil)
s_ = (nil)
_result_ = (nil)
_result_ = (s_ = (avar41 = ([])
while true
avar42=@input;r=it=((it=(_not{(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_dot_());break FAIL if it==FAIL;it) )
 avar41||=[];_append(avar41,it)
 break FAIL if r==FAIL
end;@input=avar42
avar41 )
it_ = ("{#{s_*""}}")
(it=(_pass(it_){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{(it=(inlineHostExpr());return FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it) )
_result_  
end

end

class AmethystOptimizer < Amethyst
def itrans()
 avar43 = (nil)
r_ = (nil)
_result_ = (nil)
_result_ = (r_ = (avar43 = ([])
while true
avar44=@input;r=it=((it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(trans());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar43||=[];_append(avar43,it)
 break FAIL if r==FAIL
end;@input=avar44
avar43 )
r_ )
_result_  
end
def trans()
 var_ = (nil)
to_ = (nil)
avar45 = (nil)
klas_ = (nil)
vars_ = (nil)
expr_ = (nil)
o_ = (nil)
avar46 = (nil)
avar47 = (nil)
avar48 = (nil)
ary_ = (nil)
locals_ = (nil)
body_ = (nil)
args_ = (nil)
rules_ = (nil)
it_ = (nil)
parent_ = (nil)
name_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
parent_ = (_key(:parent))
it_ = (_key(:rules))
(it=(_pass(it_){rules_ = ((it=(transs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Grammar[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_ }] },proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
it_ = (_key(:args))
(it=(_pass(it_){args_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:body))
(it=(_pass(it_){body_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_ = (_key(:locals)) });next FAIL if it==FAIL;it)
Rule[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_ }] },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)});next FAIL if it==FAIL;it)
Enter[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_ }] },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar48 = ([])
while true
avar49=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 avar48||=[];_append(avar48,it)
 break FAIL if r==FAIL
end;@input=avar49
avar48 )});next FAIL if it==FAIL;it)
Or[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_ }] },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar47 = ([])
while true
avar50=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar47||=[];_append(avar47,it)
 break FAIL if r==FAIL
end;@input=avar50
avar47 )});next FAIL if it==FAIL;it)
And[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_ }] },proc{(it=(clas(Not));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)});next FAIL if it==FAIL;it)
Not[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_ }] },proc{(it=(clas(Lookahead));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)});next FAIL if it==FAIL;it)
Lookahead[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_ }] },proc{(it=(clas(Comment));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar46 = ([])
while true
avar51=@input;r=it=((it=(anything());break FAIL if it==FAIL;it))
 avar46||=[];_append(avar46,it)
 break FAIL if r==FAIL
end;@input=avar51
avar46 )});next FAIL if it==FAIL;it)
Comment[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_ }] },proc{(it=(clas(Many));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)
o_ = (_key(:o)) });next FAIL if it==FAIL;it)
Many[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_ }] },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(anything());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)
it=((it=(args());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it) });next FAIL if it==FAIL;it)
Apply[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_ }] },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{it_ = (_key(:name))
(it=(_pass(it_){name_ = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:expr))
(it=(_pass(it_){expr_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Set[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_ }] },proc{(it=(clas(Append));next FAIL if it==FAIL;it)
(it=(_enter{it_ = (_key(:name))
(it=(_pass(it_){name_ = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:expr))
(it=(_pass(it_){expr_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Append[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_ }] },proc{(it=(clas(Pred));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
Pred[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_ }] },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
Act[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_ }] },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
it_ = (_key(:args))
(it=(_pass(it_){args_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:vars))
(it=(_pass(it_){vars_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Resul[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_,:vars=>vars_ }] },proc{(it=(clas(Foreign));next FAIL if it==FAIL;it)
(it=(_enter{klas_ = (_key(:klas))
it_ = (_key(:rule))
(it=(_pass(it_){(it=(rule());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it_ = (_key(:args))
(it=(_pass(it_){args_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Foreign[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_,:vars=>vars_,:klas=>klas_ }] },proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar45 = ([])
while true
avar52=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar45||=[];_append(avar45,it)
 break FAIL if r==FAIL
end;@input=avar52
avar45 )});next FAIL if it==FAIL;it)
Args[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_,:vars=>vars_,:klas=>klas_ }] },proc{(it=(clas(Key));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))});next FAIL if it==FAIL;it)
Key[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_,:vars=>vars_,:klas=>klas_ }] },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{it_ = (_key(:to))
(it=(_pass(it_){to_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:var))
(it=(_pass(it_){var_ = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Pass[ {:_result=>_result_,:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_,:vars=>vars_,:klas=>klas_,:to=>to_,:var=>var_ }] }));return FAIL if it==FAIL;it))
_result_  
end
def transfn()
 _result_ = (nil)
_result_ = ((it=(trans());return FAIL if it==FAIL;it))
_result_  
end
def transs()
 avar53 = (nil)
t_ = (nil)
_result_ = (nil)
_result_ = ((it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{t_ = (avar53 = ([])
while true
avar54=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar53||=[];_append(avar53,it)
 break FAIL if r==FAIL
end;@input=avar54
avar53 )});return FAIL if it==FAIL;it)
t_ )
_result_  
end
def args()
 avar55 = (nil)
avar56 = (nil)
a_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Array));next FAIL if it==FAIL;it)
(it=(_enter{a_ = (avar56 = ([])
while true
avar57=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar56||=[];_append(avar56,it)
 break FAIL if r==FAIL
end;@input=avar57
avar56 )});next FAIL if it==FAIL;it)
a_ },proc{avar55 = ([])
while true
avar58=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar55||=[];_append(avar55,it)
 break FAIL if r==FAIL
end;@input=avar58
avar55 }));return FAIL if it==FAIL;it))
_result_  
end
def arg()
 number_ = (nil)
avar59 = (nil)
avar60 = (nil)
ary_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar60 = ([])
while true
avar61=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar60||=[];_append(avar60,it)
 break FAIL if r==FAIL
end;@input=avar61
avar60 )});next FAIL if it==FAIL;it)
Args[ {:_result=>_result_,:ary=>ary_ }] },proc{(it=(clas(Strin));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar59 = ([])
while true
avar62=@input;r=it=((it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(arg());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar59||=[];_append(avar59,it)
 break FAIL if r==FAIL
end;@input=avar62
avar59 )});next FAIL if it==FAIL;it)
Strin[ {:_result=>_result_,:ary=>ary_ }] },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(transfn());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)});next FAIL if it==FAIL;it)
Exp[ {:_result=>_result_,:ary=>ary_ }] },proc{(it=(clas(ExpKey));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)});next FAIL if it==FAIL;it)
ExpKey[ {:_result=>_result_,:ary=>ary_ }] },proc{(it=(clas(Variable));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(anything());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)
number_ = (_key(:number)) });next FAIL if it==FAIL;it)
Variable[ {:_result=>_result_,:ary=>ary_,:number=>number_ }] },proc{(it=(anything());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end

end

class AmethystOptimizer2 < AmethystOptimizer
def trans()
 avar63 = (nil)
avar64 = (nil)
ary_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar64 = ([])
while true
avar65=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 avar64||=[];_append(avar64,it)
 break FAIL if r==FAIL
end;@input=avar65
avar64 )});next FAIL if it==FAIL;it)
ary_=ary_.map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten
(it=(_or(proc{(it=((ary_.size==1)||FAIL);next FAIL if it==FAIL;it)
ary_[0] },proc{Or[ {:_result=>_result_,:ary=>ary_ }]}));next FAIL if it==FAIL;it) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar63 = ([])
while true
avar66=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar63||=[];_append(avar63,it)
 break FAIL if r==FAIL
end;@input=avar66
avar63 )});next FAIL if it==FAIL;it)
ary_=ary_.map{|a| (a.is_a?(And)) ? a.ary : a}.flatten
(it=(_or(proc{(it=((ary_.size==1)||FAIL);next FAIL if it==FAIL;it)
ary_[0] },proc{And[ {:_result=>_result_,:ary=>ary_ }]}));next FAIL if it==FAIL;it) },proc{super}));return FAIL if it==FAIL;it))
_result_  
end

end

class Detect_Variables < AmethystOptimizer
def trans()
 expr_ = (nil)
vars_ = (nil)
locals_ = (nil)
body_ = (nil)
args_ = (nil)
it_ = (nil)
name_ = (nil)
argnames_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{argnames_ = (@argnames=[])
@locals=[]
name_ = (_key(:name))
it_ = (_key(:args))
(it=(_pass(it_){args_ = ((it=(clas(Object));next FAIL if it==FAIL;it)
(it=(_enter{(it=(addargs());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it) )});next FAIL if it==FAIL;it)
it_ = (_key(:body))
(it=(_pass(it_){body_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_ = (@locals.uniq)
locals_.each{|l| body_=And[Set[{:name=>l,:expr=>Act["nil"] }],body_] }; });next FAIL if it==FAIL;it)
Rule[ {:_result=>_result_,:argnames=>argnames_,:name=>name_,:it=>it_,:args=>args_,:body=>body_,:locals=>locals_ }] },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
it_ = (_key(:args))
(it=(_pass(it_){args_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
vars_ = (@locals.select{|a| !a.is_a? Autovar}.uniq) });next FAIL if it==FAIL;it)
Resul[ {:_result=>_result_,:argnames=>argnames_,:name=>name_,:it=>it_,:args=>args_,:body=>body_,:locals=>locals_,:vars=>vars_ }] },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
@locals<<name_
it_ = (_key(:expr))
(it=(_pass(it_){expr_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Set[ {:_result=>_result_,:argnames=>argnames_,:name=>name_,:it=>it_,:args=>args_,:body=>body_,:locals=>locals_,:vars=>vars_,:expr=>expr_ }] },proc{(it=(clas(Append));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
@locals<<name_
it_ = (_key(:expr))
(it=(_pass(it_){expr_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Append[ {:_result=>_result_,:argnames=>argnames_,:name=>name_,:it=>it_,:args=>args_,:body=>body_,:locals=>locals_,:vars=>vars_,:expr=>expr_ }] },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end
def addargs()
 result_ = (nil)
name_ = (nil)
avar67 = (nil)
_result_ = (nil)
_result_ = (avar67 = ([])
while true
avar68=@input;r=it=((it=(clas(Args));break FAIL if it==FAIL;it)
(it=(_enter{name_ = ((it=(anything());break FAIL if it==FAIL;it))
it=(@argnames<<name_;Variable[name_] )
 result_||=[];_append(result_,it) });break FAIL if it==FAIL;it) )
 avar67||=[];_append(avar67,it)
 break FAIL if r==FAIL
end;@input=avar68
avar67
result_ )
_result_  
end

end

class Analyze_Variables < AmethystOptimizer
def trans()
 body_ = (nil)
it_ = (nil)
args_ = (nil)
locals_ = (nil)
name_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
locals_ = (_key(:locals))
@variables=locals_+_key(:argnames)
args_ = (_key(:args))
it_ = (_key(:body))
(it=(_pass(it_){body_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Rule[ {:_result=>_result_,:name=>name_,:locals=>locals_,:args=>args_,:it=>it_,:body=>body_ }] },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end
def arg()
 name_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{name_ = ((it=(char());next FAIL if it==FAIL;it))
(it=((@variables.include? name_)||FAIL);next FAIL if it==FAIL;it)
Variable[name_] },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end

end

class Dead_Code_Detector < AmethystOptimizer
def trans()
 _result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{ });next FAIL if it==FAIL;it) },proc{(it=(clas(Pred));next FAIL if it==FAIL;it)
(it=(_enter{ });next FAIL if it==FAIL;it) },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{ });next FAIL if it==FAIL;it) },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{ });next FAIL if it==FAIL;it) },proc{(it=(clas(Append));next FAIL if it==FAIL;it)
(it=(_enter{ });next FAIL if it==FAIL;it) },proc{(it=(clas(Result));next FAIL if it==FAIL;it)
(it=(_enter{ });next FAIL if it==FAIL;it) },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end

end


class Communize_Or < AmethystOptimizer
def trans()
 ary_ = (nil)
avar69 = (nil)
rest_ = (nil)
fst_ = (nil)
avar70 = (nil)
avar71 = (nil)
first_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{(it=(_lookahead{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{first_ = ((it=(trans());next FAIL if it==FAIL;it))
avar71 = ([])
while true
avar72=@input;r=it=((it=(_dot_());break FAIL if it==FAIL;it))
 avar71||=[];_append(avar71,it)
 break FAIL if r==FAIL
end;@input=avar72
avar71 });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
avar70 = ([])
while true
avar74=@input;r=it=((it=(clas(And));break FAIL if it==FAIL;it)
(it=(_enter{fst_ = ((it=(trans());break FAIL if it==FAIL;it))
(it=((first_.isomorphic(fst_))||FAIL);break FAIL if it==FAIL;it)
rest_ = (avar69 = ([])
while true
avar73=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar69||=[];_append(avar69,it)
 break FAIL if r==FAIL
end;@input=avar73
avar69 )
it=(And[{:ary=>rest_}])
 ary_||=[];_append(ary_,it) });break FAIL if it==FAIL;it) )
 avar70||=[];_append(avar70,it)
 break FAIL if r==FAIL
end;@input=avar74
avar70 });next FAIL if it==FAIL;it)
And[first_ ,Or[{:ary=>ary_}] ] },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end

end


class Move_Assignments < AmethystOptimizer
def trans()
 it_ = (nil)
name_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
it_ = (_key(:expr))
(it=(_pass(it_){(it=(move(Set,name_));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{(it=(clas(Append));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
it_ = (_key(:expr))
(it=(_pass(it_){(it=(move(Append,name_));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end
def move(tp_,name_)
 to_ = (nil)
var_ = (nil)
it_ = (nil)
el_ = (nil)
avar75 = (nil)
avar76 = (nil)
ary_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar76 = ([])
while true
avar77=@input;r=it=((it=(move(tp_,name_));break FAIL if it==FAIL;it))
 avar76||=[];_append(avar76,it)
 break FAIL if r==FAIL
end;@input=avar77
avar76 )});next FAIL if it==FAIL;it)
Or[ {:_result=>_result_,:ary=>ary_ }] },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar75 = ([])
while true
avar78=@input;r=it=(el_ = ((it=(anything());break FAIL if it==FAIL;it))
(it=(_or(proc{(it=(_lookahead{(it=(eof());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it_ = (el_)
(it=(_pass(it_){(it=(move(tp_,name_));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it) },proc{el_}));break FAIL if it==FAIL;it) )
 avar75||=[];_append(avar75,it)
 break FAIL if r==FAIL
end;@input=avar78
avar75 )});next FAIL if it==FAIL;it)
And[ {:_result=>_result_,:ary=>ary_,:el=>el_,:it=>it_ }] },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(move(tp_,name_));next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)});next FAIL if it==FAIL;it)
Enter[ {:_result=>_result_,:ary=>ary_,:el=>el_,:it=>it_ }] },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{var_ = (_key(:var))
it_ = (_key(:to))
(it=(_pass(it_){to_ = ((it=(move(tp_,name_));next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Pass[ {:_result=>_result_,:ary=>ary_,:el=>el_,:it=>it_,:var=>var_,:to=>to_ }] },proc{it_ = ((it=(anything());next FAIL if it==FAIL;it))
tp_[{:name=>name_,:expr=>it_}] }));return FAIL if it==FAIL;it))
_result_  
end

end

def shadow(body,args)
	args.each{|arg|arg=arg[0]; a=autovar; body=And[Set[{:name=>a,:expr=>Act[arg]}],body,Set[{:name=>arg,:expr=>Act[a]}]]}
	body
end

class Inliner < AmethystOptimizer
def inline(rule_,grammar_)
 body_ = (nil)
locals_ = (nil)
args_ = (nil)
name_ = (nil)
it_ = (nil)
_result_ = (nil)
_result_ = (it_ = (rule_)
(it=(_pass(it_){(it=(clas(Rule));return FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
args_ = (_key(:args))
locals_ = (_key(:locals))
body_ = (_key(:body)) });return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
@result=autovar;@name=name_;@args=args_;@body=shadow(Set[{:name=>@result,:expr=>body_}],locals_.map{|a| Args[a]}) 
it_ = (grammar_)
(it=(_pass(it_){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{(it=(itrans());return FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it) )
_result_  
end
def trans()
 avar79 = (nil)
args_ = (nil)
name_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{name_ = ((it=(anything());next FAIL if it==FAIL;it))
(it=((name_==@name)||FAIL);next FAIL if it==FAIL;it)
args_ = (avar79 = ([])
while true
avar80=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar79||=[];_append(avar79,it)
 break FAIL if r==FAIL
end;@input=avar80
avar79 ) });next FAIL if it==FAIL;it)
body=@body; args_.each_index{|i| body=And[Set[{:name=>@args[i][0],:expr=>Act[args_[i]]}],body] } ; And[shadow(body,@args),Act[@result]] },proc{super}));return FAIL if it==FAIL;it))
_result_  
end
def inlineit()
 rule_ = (nil)
grammar_ = (nil)
name_ = (nil)
_result_ = (nil)
_result_ = (name_ = ((it=(anything());return FAIL if it==FAIL;it))
grammar_ = ((it=(anything());return FAIL if it==FAIL;it))
rule_ = ((it=(getrule(name_,grammar_));return FAIL if it==FAIL;it))
(it=(inline(rule_,grammar_));return FAIL if it==FAIL;it) )
_result_  
end
def getrule(name_,grammar_)
 rule_ = (nil)
n_ = (nil)
avar81 = (nil)
avar82 = (nil)
it_ = (nil)
_result_ = (nil)
_result_ = (it_ = (grammar_)
(it=(_pass(it_){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{avar82 = ([])
while true
avar84=@input;r=it=((it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{it_ = (_key(:rules))
(it=(_pass(it_){(it=(clas(Object));next FAIL if it==FAIL;it)
(it=(_enter{avar81 = ([])
while true
avar83=@input;r=it=((it=(clas(Rule));break FAIL if it==FAIL;it)
(it=(_enter{n_ = (_key(:name))
(it=(_or(proc{(it=((n_==name_)||FAIL);next FAIL if it==FAIL;it)
rule_ = (_key(:this)) },proc{(it=(empty());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it) });break FAIL if it==FAIL;it) )
 avar81||=[];_append(avar81,it)
 break FAIL if r==FAIL
end;@input=avar83
avar81 });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{(it=(anything());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar82||=[];_append(avar82,it)
 break FAIL if r==FAIL
end;@input=avar84
avar82 });return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
rule_ )
_result_  
end

end

class AmethystTranslator < Amethyst
def itrans()
 avar85 = (nil)
r_ = (nil)
_result_ = (nil)
_result_ = (r_ = (avar85 = ([])
while true
avar86=@input;r=it=((it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(trans());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar85||=[];_append(avar85,it)
 break FAIL if r==FAIL
end;@input=avar86
avar85 )
r_*"" )
_result_  
end
def trans()
 var_ = (nil)
to_ = (nil)
vars_ = (nil)
klas_ = (nil)
o_ = (nil)
c_ = (nil)
avar87 = (nil)
t_ = (nil)
avar88 = (nil)
ors_ = (nil)
expr_ = (nil)
argss_ = (nil)
locals_ = (nil)
body_ = (nil)
it_ = (nil)
parent_ = (nil)
name_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('return',proc{name_ = (_key(:name))
parent_ = (_key(:parent))
it_ = (_key(:rules))
(it=(_pass(it_){body_ = ((it=(transs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
"class #{name_} < #{parent_}\n#{body_}\nend\n" },proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
locals_ = (_key(:locals))
it_ = (_key(:args))
(it=(_pass(it_){argss_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:body))
(it=(_pass(it_){body_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
"def #{name_}(#{argss_})\n #{body_} \nend\n" },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{expr_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
(it=(failwrap("_enter{#{expr_}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next', proc{ors_ = (avar88 = ([])
while true
avar89=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 avar88||=[];_append(avar88,it)
 break FAIL if r==FAIL
end;@input=avar89
avar88 )}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(failwrap("_or(#{ors_*","})"));next FAIL if it==FAIL;it) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{t_ = (avar87 = ([])
while true
avar90=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar87||=[];_append(avar87,it)
 break FAIL if r==FAIL
end;@input=avar90
avar87 )});next FAIL if it==FAIL;it)
"#{t_*"\n"} " },proc{(it=(clas(Not));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next',proc{t_ = ((it=(trans());next FAIL if it==FAIL;it))}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(failwrap("_not{#{t_}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Pred));next FAIL if it==FAIL;it)
(it=(_enter{t_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
(it=(failwrap("(#{t_})||FAIL"));next FAIL if it==FAIL;it) },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{t_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
t_ },proc{(it=(clas(Lookahead));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next',proc{t_ = ((it=(trans());next FAIL if it==FAIL;it))}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(failwrap("_lookahead{#{t_}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Comment));next FAIL if it==FAIL;it)
(it=(_enter{c_ = ((it=(anything());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
"" },proc{(it=(clas(Many));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('break', proc{t_ = ((it=(trans());next FAIL if it==FAIL;it))} ));next FAIL if it==FAIL;it)
it_ = (_key(:o))
(it=(_pass(it_){o_ = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
"while true\n#{o_}=@input;r=#{t_}\n break FAIL if r==FAIL\nend;@input=#{o_}" },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{name_ = ((it=(anything());next FAIL if it==FAIL;it))
argss_ = ((it=(args());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
(it=(failwrap("#{name_}(#{argss_})"));next FAIL if it==FAIL;it) },proc{(it=(clas(Foreign));next FAIL if it==FAIL;it)
(it=(_enter{klas_ = (_key(:klas))
it_ = (_key(:rule))
(it=(_pass(it_){(it=(rule());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it_ = (_key(:args))
(it=(_pass(it_){argss_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
(it=(failwrap("_foreign(#{klas_}).#{rule}(#{argss_})"));next FAIL if it==FAIL;it) },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{it_ = (_key(:name))
(it=(_pass(it_){name_ = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:expr))
(it=(_pass(it_){expr_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
"#{name_.to_s} = (#{expr_})" },proc{(it=(clas(Append));next FAIL if it==FAIL;it)
(it=(_enter{it_ = (_key(:name))
(it=(_pass(it_){name_ = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:expr))
(it=(_pass(it_){expr_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
"it=(#{expr_})\n #{name_}||=[];_append(#{name_},it)" },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
it_ = (_key(:args))
(it=(_pass(it_){argss_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
vars_ = (_key(:vars)) });next FAIL if it==FAIL;it)
"#{name_}[#{argss_} {#{vars_.map{|l| ":#{l[0]}=>#{l[0]}_#{l.number}" }*","} }]" },proc{(it=(clas(Key));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))});next FAIL if it==FAIL;it)
"_key(:#{name_})" },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{it_ = (_key(:to))
(it=(_pass(it_){to_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:var))
(it=(_pass(it_){var_ = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
(it=(failwrap("_pass(#{var_}){#{to_}}"));next FAIL if it==FAIL;it) }));return FAIL if it==FAIL;it))
_result_  
end
def transfn()
 t_ = (nil)
_result_ = (nil)
_result_ = (t_ = ((it=(trans());return FAIL if it==FAIL;it))
"proc{#{t_}}"  )
_result_  
end
def transs()
 avar91 = (nil)
t_ = (nil)
_result_ = (nil)
_result_ = ((it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{t_ = (avar91 = ([])
while true
avar92=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar91||=[];_append(avar91,it)
 break FAIL if r==FAIL
end;@input=avar92
avar91 )});return FAIL if it==FAIL;it)
t_ )
_result_  
end
def args()
 avar93 = (nil)
avar94 = (nil)
a_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Array));next FAIL if it==FAIL;it)
(it=(_enter{a_ = (avar94 = ([])
while true
avar95=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar94||=[];_append(avar94,it)
 break FAIL if r==FAIL
end;@input=avar95
avar94 )});next FAIL if it==FAIL;it)
a_*"," },proc{a_ = (avar93 = ([])
while true
avar96=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar93||=[];_append(avar93,it)
 break FAIL if r==FAIL
end;@input=avar96
avar93 )
a_*"," }));return FAIL if it==FAIL;it))
_result_  
end
def arg()
 number_ = (nil)
name_ = (nil)
t_ = (nil)
avar97 = (nil)
avar98 = (nil)
a_ = (nil)
_result_ = (nil)
_result_ = ((it=(_or(proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{a_ = (avar98 = ([])
while true
avar99=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar98||=[];_append(avar98,it)
 break FAIL if r==FAIL
end;@input=avar99
avar98 )});next FAIL if it==FAIL;it)
a_*"" },proc{(it=(clas(Strin));next FAIL if it==FAIL;it)
(it=(_enter{a_ = (avar97 = ([])
while true
avar100=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar97||=[];_append(avar97,it)
 break FAIL if r==FAIL
end;@input=avar100
avar97 )});next FAIL if it==FAIL;it)
a_*"" },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
(it=(_enter{t_ = ((it=(transfn());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
t_ },proc{(it=(clas(ExpKey));next FAIL if it==FAIL;it)
(it=(_enter{t_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
t_ },proc{(it=(clas(Variable));next FAIL if it==FAIL;it)
(it=(_enter{name_ = ((it=(anything());next FAIL if it==FAIL;it))
number_ = (_key(:number)) });next FAIL if it==FAIL;it)
"#{name_}_#{number_}" },proc{(it=(anything());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_  
end
def rw(word_,prc_)
 x_ = (nil)
_result_ = (nil)
_result_ = (rwo=@returnword;@returnword=word_
x_ = ((it=(apply(prc_));return FAIL if it==FAIL;it))
@returnword=rwo;x_ )
_result_  
end
def failwrap(s_)
 _result_ = (nil)
_result_ = ("(it=(#{s_});#{@returnword} FAIL if it==FAIL;it)" )
_result_  
end

end

