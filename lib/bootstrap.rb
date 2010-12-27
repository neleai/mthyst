class Amethyst < AmethystCore
def _()
 (it=(space());return FAIL if it==FAIL;it) 
end
def _dot_()
 (it=(anything());return FAIL if it==FAIL;it) 
end
def regch(regex_)
 c_ = (nil)
c_ = ((it=(char());return FAIL if it==FAIL;it))
(it=((regex_.match(c_))||FAIL);return FAIL if it==FAIL;it)
c_  
end
def eof()
 (it=(_not{(it=(_dot_());next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) 
end
def empty()
 nil 
end
def char()
 c_ = (nil)
c_ = ((it=(_dot_());return FAIL if it==FAIL;it))
(it=((c_.is_a? String )||FAIL);return FAIL if it==FAIL;it)
c_  
end
def endline()
 (it=(_or(proc{(it=(seq("\r\n"));next FAIL if it==FAIL;it)},proc{(it=(seq("\r"));next FAIL if it==FAIL;it)},proc{(it=(seq("\n"));next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
end
def space()
 (it=(regch(/[\s\t\r\n\f]/));return FAIL if it==FAIL;it) 
end
def spaces()
 avar1 = (nil)
avar1 = ([])
while true
avar2=@input;r=it=((it=(space());break FAIL if it==FAIL;it))
 avar1||=[];_append(avar1,it)
 break FAIL if r==FAIL
end;@input=avar2
avar1  
end
def _()
 (it=(space());return FAIL if it==FAIL;it) 
end
def digit()
 (it=(regch(/[0-9]/));return FAIL if it==FAIL;it) 
end
def lower()
 (it=(regch(/[a-z]/));return FAIL if it==FAIL;it) 
end
def upper()
 (it=(regch(/[A-Z]/));return FAIL if it==FAIL;it) 
end
def letter()
 (it=(_or(proc{(it=(lower());next FAIL if it==FAIL;it)},proc{(it=(upper());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
end
def letterOrDigit()
 (it=(_or(proc{(it=(letter());next FAIL if it==FAIL;it)},proc{(it=(digit());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
end
def alpha()
 (it=(letter());return FAIL if it==FAIL;it) 
end
def alnum()
 (it=(letterOrDigit());return FAIL if it==FAIL;it) 
end
def xdigit()
 (it=(regch(/[0-9a-fA-F]/));return FAIL if it==FAIL;it) 
end
def word()
 (it=(_or(proc{(it=(alpha());next FAIL if it==FAIL;it)},proc{(it=(seq("_"));next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
end
def listOf(rule_,delim_)
 avar3 = (nil)
f_ = (nil)
(it=(_or(proc{it=((it=(apply(rule_));next FAIL if it==FAIL;it))
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
[] }));return FAIL if it==FAIL;it)  
end
def exactly(wanted_)
 got_ = (nil)
got_ = ((it=(anything());return FAIL if it==FAIL;it))
(it=((wanted_ == got_)||FAIL);return FAIL if it==FAIL;it)
wanted_  
end
def clas(cls_)
 (it=((@input.item.is_a?(cls_))||FAIL);return FAIL if it==FAIL;it) 
end
def is_a(cls_)
 (it=((@input.src.is_a?(cls_))||FAIL);return FAIL if it==FAIL;it) 
end
def token(s_)
 (it=(spaces());return FAIL if it==FAIL;it)
(it=(seq(s_));return FAIL if it==FAIL;it)  
end
def many1(s_)
 avar5 = (nil)
a_ = (nil)
it=((it=(apply(s_));return FAIL if it==FAIL;it))
 a_||=[];_append(a_,it)
it=(avar5 = ([])
while true
avar6=@input;r=it=((it=(apply(s_));break FAIL if it==FAIL;it))
 avar5||=[];_append(avar5,it)
 break FAIL if r==FAIL
end;@input=avar6
avar5 )
 a_||=[];_append(a_,it)  
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
 avar1 = (nil)
a_ = (nil)
a_ = (avar1 = ([])
while true
avar2=@input;r=it=((it=(_or(proc{(it=(_not{(it=(seq("amethyst"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(_dot_());next FAIL if it==FAIL;it) },proc{(it=(grammar());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar1||=[];_append(avar1,it)
 break FAIL if r==FAIL
end;@input=avar2
avar1 )
a_  
end
def grammar()
 avar3 = (nil)
rules_ = (nil)
parent_ = (nil)
name_ = (nil)
(it=(token("amethyst"));return FAIL if it==FAIL;it)
name_ = ((it=(name());return FAIL if it==FAIL;it))
(it=(_or(proc{(it=(token("<"));next FAIL if it==FAIL;it)
parent_ = ((it=(name());next FAIL if it==FAIL;it)) },proc{(it=(empty());next FAIL if it==FAIL;it)
parent_="Amethyst" }));return FAIL if it==FAIL;it)
(it=(token("{"));return FAIL if it==FAIL;it)
rules_ = (avar3 = ([])
while true
avar4=@input;r=it=((it=(rule());break FAIL if it==FAIL;it))
 avar3||=[];_append(avar3,it)
 break FAIL if r==FAIL
end;@input=avar4
avar3 )
(it=(token("}"));return FAIL if it==FAIL;it)
Grammar[ {:name=>name_,:parent=>parent_,:rules=>rules_ }]  
end
def rule()
 body_ = (nil)
args_ = (nil)
name_ = (nil)
name_ = ((it=(name());return FAIL if it==FAIL;it))
args_ = ((it=(ruleargs());return FAIL if it==FAIL;it))
(it=(token("="));return FAIL if it==FAIL;it)
body_ = ((it=(expression());return FAIL if it==FAIL;it))
$av=0
Rule[ {:name=>name_,:args=>args_,:body=>body_ }]  
end
def expression()
 (it=(choice());return FAIL if it==FAIL;it) 
end
def choice()
 ary_ = (nil)
ary_ = ((it=(listOf('sequence',proc{(it=(token("|"));return FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
Or[ {:ary=>ary_ }]  
end
def sequence()
 avar5 = (nil)
ary_ = (nil)
ary_ = (avar5 = ([])
while true
avar6=@input;r=it=((it=(nr());break FAIL if it==FAIL;it)
(it=(prefixed());break FAIL if it==FAIL;it) )
 avar5||=[];_append(avar5,it)
 break FAIL if r==FAIL
end;@input=avar6
avar5 )
And[ {:ary=>ary_ }]  
end
def prefixed()
 to_ = (nil)
from_ = (nil)
expr_ = (nil)
m_ = (nil)
(it=(_or(proc{(it=(token("~"));next FAIL if it==FAIL;it)
m_ = ((it=(modifier());next FAIL if it==FAIL;it))
Not[m_] },proc{(it=(token("&"));next FAIL if it==FAIL;it)
expr_ = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
Pred[expr_] },proc{(it=(token("&"));next FAIL if it==FAIL;it)
(it=(_not{expr_ = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
m_ = ((it=(modifier());next FAIL if it==FAIL;it))
Lookahead[m_] },proc{from_ = ((it=(modifier());next FAIL if it==FAIL;it))
(it=(token("=>"));next FAIL if it==FAIL;it)
to_ = ((it=(modifier());next FAIL if it==FAIL;it))
And[Set[{:name=>"it",:expr=>from_}] ,Pass[{:to=>to_, :var=>Variable["it"]}]] },proc{(it=(modifier());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it)  
end
def modifier()
 avar7 = (nil)
c_ = (nil)
t_ = (nil)
(it=(_or(proc{t_ = ((it=(term());next FAIL if it==FAIL;it))
t_ = ((it=(optIter(t_));next FAIL if it==FAIL;it))
(it=(_or(proc{(it=(_not{(it=(space());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(binding(t_));next FAIL if it==FAIL;it) },proc{(it=(empty());next FAIL if it==FAIL;it)
t_ }));next FAIL if it==FAIL;it) },proc{(it=(binding(Apply["anything"]));next FAIL if it==FAIL;it)},proc{(it=(token("#"));next FAIL if it==FAIL;it)
c_ = (avar7 = ([])
while true
avar8=@input;r=it=((it=(_not{(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_dot_());break FAIL if it==FAIL;it) )
 avar7||=[];_append(avar7,it)
 break FAIL if r==FAIL
end;@input=avar8
avar7 )
Comment[c_] }));return FAIL if it==FAIL;it)  
end
def optIter(t_)
 (it=(_or(proc{(it=(token("*"));next FAIL if it==FAIL;it)
a=autovar; And[Set[{:name=>a, :expr=> Act["[]"]}], Many[{:ary=>[Append[{:name=>a,:expr=>t_}]],:o=>autovar}],Act[a]] },proc{(it=(token("+"));next FAIL if it==FAIL;it)
a=autovar; And[Set[{:name=>a, :expr=> Act["[]"]}], Append[{:name=>a,:expr=>t_}], Many[{:ary=>[Append[{:name=>a,:expr=>t_}]],:o=>autovar}],Act[a]] },proc{(it=(token("?"));next FAIL if it==FAIL;it)
Or[t_,Apply["empty"]] },proc{(it=(empty());next FAIL if it==FAIL;it)
t_ }));return FAIL if it==FAIL;it) 
end
def binding(exp_)
 e_ = (nil)
name_ = (nil)
expr_ = (nil)
(it=(_or(proc{expr_ = (exp_)
(it=(token(":"));next FAIL if it==FAIL;it)
name_ = ((it=(name());next FAIL if it==FAIL;it))
(it=(_or(proc{(it=(seq("[]"));next FAIL if it==FAIL;it)
Append[ {:expr=>expr_,:name=>name_ }] },proc{(it=(empty());next FAIL if it==FAIL;it)
Set[ {:expr=>expr_,:name=>name_ }] }));next FAIL if it==FAIL;it) },proc{(it=(token(":"));next FAIL if it==FAIL;it)
e_ = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
And[Set[{:name=>"it", :expr=>exp_}] , Act[e_] ] }));return FAIL if it==FAIL;it)  
end
def term()
 avar9 = (nil)
it_ = (nil)
avar10 = (nil)
avar11 = (nil)
s_ = (nil)
x_ = (nil)
expr_ = (nil)
cls_ = (nil)
(it=(_or(proc{cls_ = ((it=(_or(proc{(it=(className());next FAIL if it==FAIL;it)},proc{(it=(token(""));next FAIL if it==FAIL;it)
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
s_ = (avar11 = ([])
while true
avar12=@input;r=it=((it=(_not{(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar11||=[];_append(avar11,it)
 break FAIL if r==FAIL
end;@input=avar12
avar11 )
(it=(seq("\""));next FAIL if it==FAIL;it)
Apply["token" ,quote(s_)] },proc{(it=(token("'"));next FAIL if it==FAIL;it)
s_ = (avar10 = ([])
while true
avar13=@input;r=it=((it=(_not{(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar10||=[];_append(avar10,it)
 break FAIL if r==FAIL
end;@input=avar13
avar10 )
(it=(seq("\'"));next FAIL if it==FAIL;it)
Apply["seq",quote(s_)] },proc{it_ = ((it=(number());next FAIL if it==FAIL;it))
Apply["exactly",it_] },proc{(it=(token("<"));next FAIL if it==FAIL;it)
x_ = (avar9 = ([])
it=((it=(_not{(it=(token(">"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(eChar());next FAIL if it==FAIL;it) )
 avar9||=[];_append(avar9,it)
while true
avar14=@input;r=it=((it=(_not{(it=(token(">"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar9||=[];_append(avar9,it)
 break FAIL if r==FAIL
end;@input=avar14
avar9 )
(it=(token(">"));next FAIL if it==FAIL;it)
Apply["regch","/[#{x_}]/"] },proc{(it=(token("("));next FAIL if it==FAIL;it)
x_ = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")[]"));next FAIL if it==FAIL;it)
(it=(collect(x_));next FAIL if it==FAIL;it) },proc{(it=(token("("));next FAIL if it==FAIL;it)
x_ = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")"));next FAIL if it==FAIL;it)
x_ }));return FAIL if it==FAIL;it)  
end
def application()
 arg_ = (nil)
rule_ = (nil)
klas_ = (nil)
(it=(_or(proc{klas_ = ((it=(name());next FAIL if it==FAIL;it))
(it=(seq("::"));next FAIL if it==FAIL;it)
rule_ = ((it=(name());next FAIL if it==FAIL;it))
arg_ = ((it=(argsOpt('(',')'));next FAIL if it==FAIL;it))
Foreign[ {:klas=>klas_,:rule=>rule_,:arg=>arg_ }] },proc{rule_ = ((it=(name());next FAIL if it==FAIL;it))
arg_ = ((it=(argsOpt('(',')'));next FAIL if it==FAIL;it))
Apply[rule_,arg_] }));return FAIL if it==FAIL;it)  
end
def key()
 args_ = (nil)
name_ = (nil)
(it=(_or(proc{(it=(token("@"));next FAIL if it==FAIL;it)
name_ = ((it=(className());next FAIL if it==FAIL;it))
args_ = ((it=(argsOpt('[',']'));next FAIL if it==FAIL;it))
Resul[ {:name=>name_,:args=>args_ }] },proc{(it=(token("@"));next FAIL if it==FAIL;it)
name_ = ((it=(name());next FAIL if it==FAIL;it))
Key[ {:name=>name_,:args=>args_ }] }));return FAIL if it==FAIL;it)  
end
def collect(ors_)
 a=autovar; And[Or[{:ary=>ors_.ary.map{|ands| And[{:ary=>ands.ary.map{|expr| Append[{:name=>a,:expr=>expr}]}}]}}],Act[a]] 
end
def eChar()
 c_ = (nil)
(it=(_or(proc{(it=(seq("\\"));next FAIL if it==FAIL;it)
c_ = ((it=(char());next FAIL if it==FAIL;it))
"\\#{c_}" },proc{(it=(_args('#{','}'));next FAIL if it==FAIL;it)},proc{(it=(char());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it)  
end
def ruleargs()
 (it=(argsOpt('(',')'));return FAIL if it==FAIL;it) 
end
def nr()
 (it=(_not{(it=(name());next FAIL if it==FAIL;it)
(it=(ruleargs());next FAIL if it==FAIL;it)
(it=(token("="));next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it) 
end
def argsOpt(o_,c_)
 (it=(_or(proc{(it=(args(o_,c_));next FAIL if it==FAIL;it)},proc{(it=(empty());next FAIL if it==FAIL;it)
[] }));return FAIL if it==FAIL;it) 
end
def args(o_,c_)
 r_ = (nil)
r_ = ((it=(__args(o_,c_));return FAIL if it==FAIL;it))
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
						  
end
def _args(o_,c_)
 r_ = (nil)
r_ = ((it=(__args(o_,c_));return FAIL if it==FAIL;it))
Args[{:ary=>([o_]+r_+[c_])}]  
end
def __args(o_,c_)
 avar15 = (nil)
r_ = (nil)
(it=(seq(o_));return FAIL if it==FAIL;it)
(it=(token(""));return FAIL if it==FAIL;it)
r_ = (avar15 = ([])
while true
avar16=@input;r=it=((it=(rubyarg());break FAIL if it==FAIL;it))
 avar15||=[];_append(avar15,it)
 break FAIL if r==FAIL
end;@input=avar16
avar15 )
(it=(seq(c_));return FAIL if it==FAIL;it)
r_  
end
def rubyarg()
 k_ = (nil)
avar17 = (nil)
n_ = (nil)
avar18 = (nil)
avar19 = (nil)
s_ = (nil)
e_ = (nil)
(it=(_or(proc{(it=(seq("`"));next FAIL if it==FAIL;it)
e_ = ((it=(expression());next FAIL if it==FAIL;it))
(it=(seq("`"));next FAIL if it==FAIL;it)
Exp[e_] },proc{(it=(_args('(',')'));next FAIL if it==FAIL;it)},proc{(it=(_args('[',']'));next FAIL if it==FAIL;it)},proc{(it=(_args('{','}'));next FAIL if it==FAIL;it)},proc{(it=(seq("\""));next FAIL if it==FAIL;it)
s_ = (avar19 = ([])
while true
avar20=@input;r=it=((it=(_not{(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar19||=[];_append(avar19,it)
 break FAIL if r==FAIL
end;@input=avar20
avar19 )
(it=(seq("\""));next FAIL if it==FAIL;it)
Strin[['"']+ s_+['"']] },proc{(it=(seq("\'"));next FAIL if it==FAIL;it)
s_ = (avar18 = ([])
while true
avar21=@input;r=it=((it=(_not{(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar18||=[];_append(avar18,it)
 break FAIL if r==FAIL
end;@input=avar21
avar18 )
(it=(seq("\'"));next FAIL if it==FAIL;it)
Strin[['\'']+s_+['\'']] },proc{(it=(_or(proc{(it=(seq("@@"));next FAIL if it==FAIL;it)
it=("@")
 n_||=[];_append(n_,it) },proc{it=((it=(regch(/[.:]/));next FAIL if it==FAIL;it))
 n_||=[];_append(n_,it)},proc{(it=(empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it)
it=(avar17 = ([])
it=((it=(regch(/[a-zA-Z_]/));next FAIL if it==FAIL;it))
 avar17||=[];_append(avar17,it)
while true
avar22=@input;r=it=((it=(regch(/[a-zA-Z_]/));break FAIL if it==FAIL;it))
 avar17||=[];_append(avar17,it)
 break FAIL if r==FAIL
end;@input=avar22
avar17 )
 n_||=[];_append(n_,it)
n_*"" },proc{k_ = ((it=(key());next FAIL if it==FAIL;it))
ExpKey[k_]  },proc{(it=(regch(/[^`{}()'"\[\]]/));next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it)  
end
def nameFirst()
 (it=(_or(proc{(it=(regch(/[_$.^]/));next FAIL if it==FAIL;it)},proc{(it=(letter());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
end
def nameRest()
 (it=(_or(proc{(it=(nameFirst());next FAIL if it==FAIL;it)},proc{(it=(digit());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
end
def className()
 avar23 = (nil)
avar24 = (nil)
it_ = (nil)
avar25 = (nil)
avar25 = ([])
while true
avar26=@input;r=it=((it=(_());break FAIL if it==FAIL;it))
 avar25||=[];_append(avar25,it)
 break FAIL if r==FAIL
end;@input=avar26
avar25
it_ = (it=((it=(upper());return FAIL if it==FAIL;it))
 avar24||=[];_append(avar24,it)
it=(avar23 = ([])
while true
avar27=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 avar23||=[];_append(avar23,it)
 break FAIL if r==FAIL
end;@input=avar27
avar23 )
 avar24||=[];_append(avar24,it)
avar24 )
leterize(it_*"")  
end
def name()
 avar28 = (nil)
avar29 = (nil)
it_ = (nil)
avar30 = (nil)
avar30 = ([])
while true
avar31=@input;r=it=((it=(_());break FAIL if it==FAIL;it))
 avar30||=[];_append(avar30,it)
 break FAIL if r==FAIL
end;@input=avar31
avar30
it_ = (it=((it=(nameFirst());return FAIL if it==FAIL;it))
 avar29||=[];_append(avar29,it)
it=(avar28 = ([])
while true
avar32=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 avar28||=[];_append(avar28,it)
 break FAIL if r==FAIL
end;@input=avar32
avar28 )
 avar29||=[];_append(avar29,it)
avar29 )
leterize(it_*"")  
end
def inlineHostExpr()
 (it=(args('{','}'));return FAIL if it==FAIL;it) 
end
def number()
 avar33 = (nil)
avar33 = ([])
it=((it=(regch(/[0-9]/));return FAIL if it==FAIL;it))
 avar33||=[];_append(avar33,it)
while true
avar34=@input;r=it=((it=(regch(/[0-9]/));break FAIL if it==FAIL;it))
 avar33||=[];_append(avar33,it)
 break FAIL if r==FAIL
end;@input=avar34
avar33  
end
def atomicHostExpr()
 it_ = (nil)
avar35 = (nil)
s_ = (nil)
s_ = (avar35 = ([])
while true
avar36=@input;r=it=((it=(_not{(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_dot_());break FAIL if it==FAIL;it) )
 avar35||=[];_append(avar35,it)
 break FAIL if r==FAIL
end;@input=avar36
avar35 )
it_ = ("{#{s_*""}}")
(it=(_pass(it_){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{(it=(inlineHostExpr());return FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)  
end

end

class AmethystOptimizer < Amethyst
def itrans()
 avar1 = (nil)
r_ = (nil)
r_ = (avar1 = ([])
while true
avar2=@input;r=it=((it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(trans());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar1||=[];_append(avar1,it)
 break FAIL if r==FAIL
end;@input=avar2
avar1 )
r_  
end
def trans()
 var_ = (nil)
to_ = (nil)
avar3 = (nil)
klas_ = (nil)
vars_ = (nil)
expr_ = (nil)
o_ = (nil)
avar4 = (nil)
avar5 = (nil)
avar6 = (nil)
ary_ = (nil)
locals_ = (nil)
body_ = (nil)
args_ = (nil)
rules_ = (nil)
it_ = (nil)
parent_ = (nil)
name_ = (nil)
(it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
parent_ = (_key(:parent))
it_ = (_key(:rules))
(it=(_pass(it_){rules_ = ((it=(transs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Grammar[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_ }] },proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
it_ = (_key(:args))
(it=(_pass(it_){args_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:body))
(it=(_pass(it_){body_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_ = (_key(:locals)) });next FAIL if it==FAIL;it)
Rule[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_ }] },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)});next FAIL if it==FAIL;it)
Enter[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_ }] },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar6 = ([])
while true
avar7=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 avar6||=[];_append(avar6,it)
 break FAIL if r==FAIL
end;@input=avar7
avar6 )});next FAIL if it==FAIL;it)
Or[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_ }] },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar5 = ([])
while true
avar8=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar5||=[];_append(avar5,it)
 break FAIL if r==FAIL
end;@input=avar8
avar5 )});next FAIL if it==FAIL;it)
And[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_ }] },proc{(it=(clas(Not));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)});next FAIL if it==FAIL;it)
Not[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_ }] },proc{(it=(clas(Lookahead));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
Lookahead[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_ }] },proc{(it=(clas(Comment));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar4 = ([])
while true
avar9=@input;r=it=((it=(anything());break FAIL if it==FAIL;it))
 avar4||=[];_append(avar4,it)
 break FAIL if r==FAIL
end;@input=avar9
avar4 )});next FAIL if it==FAIL;it)
Comment[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_ }] },proc{(it=(clas(Many));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)
o_ = (_key(:o)) });next FAIL if it==FAIL;it)
Many[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_ }] },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(anything());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)
it=((it=(args());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it) });next FAIL if it==FAIL;it)
Apply[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_ }] },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{it_ = (_key(:name))
(it=(_pass(it_){name_ = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:expr))
(it=(_pass(it_){expr_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Set[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_ }] },proc{(it=(clas(Append));next FAIL if it==FAIL;it)
(it=(_enter{it_ = (_key(:name))
(it=(_pass(it_){name_ = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:expr))
(it=(_pass(it_){expr_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Append[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_ }] },proc{(it=(clas(Pred));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
Pred[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_ }] },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
Act[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_ }] },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
it_ = (_key(:args))
(it=(_pass(it_){args_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:vars))
(it=(_pass(it_){vars_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Resul[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_,:vars=>vars_ }] },proc{(it=(clas(Foreign));next FAIL if it==FAIL;it)
(it=(_enter{klas_ = (_key(:klas))
it_ = (_key(:rule))
(it=(_pass(it_){(it=(rule());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it_ = (_key(:args))
(it=(_pass(it_){args_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Foreign[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_,:vars=>vars_,:klas=>klas_ }] },proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar3 = ([])
while true
avar10=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar3||=[];_append(avar3,it)
 break FAIL if r==FAIL
end;@input=avar10
avar3 )});next FAIL if it==FAIL;it)
Args[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_,:vars=>vars_,:klas=>klas_ }] },proc{(it=(clas(Key));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))});next FAIL if it==FAIL;it)
Key[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_,:vars=>vars_,:klas=>klas_ }] },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{it_ = (_key(:to))
(it=(_pass(it_){to_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it_ = (_key(:var))
(it=(_pass(it_){var_ = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Pass[ {:name=>name_,:parent=>parent_,:it=>it_,:rules=>rules_,:args=>args_,:body=>body_,:locals=>locals_,:ary=>ary_,:o=>o_,:expr=>expr_,:vars=>vars_,:klas=>klas_,:to=>to_,:var=>var_ }] }));return FAIL if it==FAIL;it)  
end
def transfn()
 (it=(trans());return FAIL if it==FAIL;it) 
end
def transs()
 avar11 = (nil)
t_ = (nil)
(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{t_ = (avar11 = ([])
while true
avar12=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar11||=[];_append(avar11,it)
 break FAIL if r==FAIL
end;@input=avar12
avar11 )});return FAIL if it==FAIL;it)
t_  
end
def args()
 avar13 = (nil)
avar14 = (nil)
a_ = (nil)
(it=(_or(proc{(it=(clas(Array));next FAIL if it==FAIL;it)
(it=(_enter{a_ = (avar14 = ([])
while true
avar15=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar14||=[];_append(avar14,it)
 break FAIL if r==FAIL
end;@input=avar15
avar14 )});next FAIL if it==FAIL;it)
a_ },proc{avar13 = ([])
while true
avar16=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar13||=[];_append(avar13,it)
 break FAIL if r==FAIL
end;@input=avar16
avar13 }));return FAIL if it==FAIL;it)  
end
def arg()
 number_ = (nil)
avar17 = (nil)
avar18 = (nil)
ary_ = (nil)
(it=(_or(proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar18 = ([])
while true
avar19=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar18||=[];_append(avar18,it)
 break FAIL if r==FAIL
end;@input=avar19
avar18 )});next FAIL if it==FAIL;it)
Args[ {:ary=>ary_ }] },proc{(it=(clas(Strin));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar17 = ([])
while true
avar20=@input;r=it=((it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(arg());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar17||=[];_append(avar17,it)
 break FAIL if r==FAIL
end;@input=avar20
avar17 )});next FAIL if it==FAIL;it)
Strin[ {:ary=>ary_ }] },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(transfn());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)});next FAIL if it==FAIL;it)
Exp[ {:ary=>ary_ }] },proc{(it=(clas(ExpKey));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)});next FAIL if it==FAIL;it)
ExpKey[ {:ary=>ary_ }] },proc{(it=(clas(Variable));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(anything());next FAIL if it==FAIL;it))
 ary_||=[];_append(ary_,it)
number_ = (_key(:number)) });next FAIL if it==FAIL;it)
Variable[ {:ary=>ary_,:number=>number_ }] },proc{(it=(anything());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it)  
end

end

class AmethystOptimizer2 < AmethystOptimizer
def trans()
 avar1 = (nil)
avar2 = (nil)
ary_ = (nil)
(it=(_or(proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar2 = ([])
while true
avar3=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar3
avar2 )});next FAIL if it==FAIL;it)
ary_=ary_.map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten
(it=(_or(proc{(it=((ary_.size==1)||FAIL);next FAIL if it==FAIL;it)
ary_[0] },proc{Or[ {:ary=>ary_ }]}));next FAIL if it==FAIL;it) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{ary_ = (avar1 = ([])
while true
avar4=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar1||=[];_append(avar1,it)
 break FAIL if r==FAIL
end;@input=avar4
avar1 )});next FAIL if it==FAIL;it)
ary_=ary_.map{|a| (a.is_a?(And)) ? a.ary : a}.flatten
(it=(_or(proc{(it=((ary_.size==1)||FAIL);next FAIL if it==FAIL;it)
ary_[0] },proc{And[ {:ary=>ary_ }]}));next FAIL if it==FAIL;it) },proc{super}));return FAIL if it==FAIL;it)  
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
(it=(_or(proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
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
Rule[ {:argnames=>argnames_,:name=>name_,:it=>it_,:args=>args_,:body=>body_,:locals=>locals_ }] },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
it_ = (_key(:args))
(it=(_pass(it_){args_ = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
vars_ = (@locals.select{|a| !a.is_a? Autovar}.uniq) });next FAIL if it==FAIL;it)
Resul[ {:argnames=>argnames_,:name=>name_,:it=>it_,:args=>args_,:body=>body_,:locals=>locals_,:vars=>vars_ }] },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
@locals<<name_
it_ = (_key(:expr))
(it=(_pass(it_){expr_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Set[ {:argnames=>argnames_,:name=>name_,:it=>it_,:args=>args_,:body=>body_,:locals=>locals_,:vars=>vars_,:expr=>expr_ }] },proc{(it=(clas(Append));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
@locals<<name_
it_ = (_key(:expr))
(it=(_pass(it_){expr_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Append[ {:argnames=>argnames_,:name=>name_,:it=>it_,:args=>args_,:body=>body_,:locals=>locals_,:vars=>vars_,:expr=>expr_ }] },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it)  
end
def addargs()
 result_ = (nil)
name_ = (nil)
avar1 = (nil)
avar1 = ([])
while true
avar2=@input;r=it=((it=(clas(Args));break FAIL if it==FAIL;it)
(it=(_enter{name_ = ((it=(anything());break FAIL if it==FAIL;it))
it=(@argnames<<name_;Variable[name_] )
 result_||=[];_append(result_,it) });break FAIL if it==FAIL;it) )
 avar1||=[];_append(avar1,it)
 break FAIL if r==FAIL
end;@input=avar2
avar1
result_  
end

end

class Analyze_Variables < AmethystOptimizer
def trans()
 body_ = (nil)
it_ = (nil)
args_ = (nil)
locals_ = (nil)
name_ = (nil)
(it=(_or(proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
locals_ = (_key(:locals))
@variables=locals_+_key(:argnames)
args_ = (_key(:args))
it_ = (_key(:body))
(it=(_pass(it_){body_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Rule[ {:name=>name_,:locals=>locals_,:args=>args_,:it=>it_,:body=>body_ }] },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it)  
end
def arg()
 name_ = (nil)
(it=(_or(proc{name_ = ((it=(char());next FAIL if it==FAIL;it))
(it=((@variables.include? name_)||FAIL);next FAIL if it==FAIL;it)
Variable[name_] },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it)  
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
it_ = (rule_)
(it=(_pass(it_){(it=(clas(Rule));return FAIL if it==FAIL;it)
(it=(_enter{name_ = (_key(:name))
args_ = (_key(:args))
locals_ = (_key(:locals))
body_ = (_key(:body)) });return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
@result=autovar;@name=name_;@args=args_;@body=shadow(Set[{:name=>@result,:expr=>body_}],locals_.map{|a| Args[a]}) 
it_ = (grammar_)
(it=(_pass(it_){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{(it=(itrans());return FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)  
end
def trans()
 avar1 = (nil)
args_ = (nil)
name_ = (nil)
(it=(_or(proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{name_ = ((it=(anything());next FAIL if it==FAIL;it))
(it=((name_==@name)||FAIL);next FAIL if it==FAIL;it)
args_ = (avar1 = ([])
while true
avar2=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar1||=[];_append(avar1,it)
 break FAIL if r==FAIL
end;@input=avar2
avar1 ) });next FAIL if it==FAIL;it)
body=@body; args_.each_index{|i| body=And[Set[{:name=>@args[i][0],:expr=>Act[args_[i]]}],body] } ; And[shadow(body,@args),Act[@result]] },proc{super}));return FAIL if it==FAIL;it)  
end
def inlineit()
 rule_ = (nil)
grammar_ = (nil)
name_ = (nil)
name_ = ((it=(anything());return FAIL if it==FAIL;it))
grammar_ = ((it=(anything());return FAIL if it==FAIL;it))
rule_ = ((it=(getrule(name_,grammar_));return FAIL if it==FAIL;it))
(it=(inline(rule_,grammar_));return FAIL if it==FAIL;it)  
end
def getrule(name_,grammar_)
 rule_ = (nil)
n_ = (nil)
avar3 = (nil)
avar4 = (nil)
it_ = (nil)
it_ = (grammar_)
(it=(_pass(it_){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{avar4 = ([])
while true
avar6=@input;r=it=((it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{it_ = (_key(:rules))
(it=(_pass(it_){(it=(clas(Object));next FAIL if it==FAIL;it)
(it=(_enter{avar3 = ([])
while true
avar5=@input;r=it=((it=(clas(Rule));break FAIL if it==FAIL;it)
(it=(_enter{n_ = (_key(:name))
(it=(_or(proc{(it=((n_==name_)||FAIL);next FAIL if it==FAIL;it)
rule_ = (_key(:this)) },proc{(it=(empty());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it) });break FAIL if it==FAIL;it) )
 avar3||=[];_append(avar3,it)
 break FAIL if r==FAIL
end;@input=avar5
avar3 });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{(it=(anything());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar4||=[];_append(avar4,it)
 break FAIL if r==FAIL
end;@input=avar6
avar4 });return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
rule_  
end

end

class AmethystTranslator < Amethyst
def itrans()
 avar1 = (nil)
r_ = (nil)
r_ = (avar1 = ([])
while true
avar2=@input;r=it=((it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(trans());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar1||=[];_append(avar1,it)
 break FAIL if r==FAIL
end;@input=avar2
avar1 )
r_*""  
end
def trans()
 var_ = (nil)
to_ = (nil)
vars_ = (nil)
klas_ = (nil)
o_ = (nil)
c_ = (nil)
avar3 = (nil)
t_ = (nil)
avar4 = (nil)
ors_ = (nil)
expr_ = (nil)
argss_ = (nil)
locals_ = (nil)
body_ = (nil)
it_ = (nil)
parent_ = (nil)
name_ = (nil)
(it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
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
(it=(_enter{(it=(rw('next', proc{ors_ = (avar4 = ([])
while true
avar5=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 avar4||=[];_append(avar4,it)
 break FAIL if r==FAIL
end;@input=avar5
avar4 )}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(failwrap("_or(#{ors_*","})"));next FAIL if it==FAIL;it) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{t_ = (avar3 = ([])
while true
avar6=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar3||=[];_append(avar3,it)
 break FAIL if r==FAIL
end;@input=avar6
avar3 )});next FAIL if it==FAIL;it)
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
(it=(failwrap("_pass(#{var_}){#{to_}}"));next FAIL if it==FAIL;it) }));return FAIL if it==FAIL;it)  
end
def transfn()
 t_ = (nil)
t_ = ((it=(trans());return FAIL if it==FAIL;it))
"proc{#{t_}}"   
end
def transs()
 avar7 = (nil)
t_ = (nil)
(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{t_ = (avar7 = ([])
while true
avar8=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar7||=[];_append(avar7,it)
 break FAIL if r==FAIL
end;@input=avar8
avar7 )});return FAIL if it==FAIL;it)
t_  
end
def args()
 avar9 = (nil)
avar10 = (nil)
a_ = (nil)
(it=(_or(proc{(it=(clas(Array));next FAIL if it==FAIL;it)
(it=(_enter{a_ = (avar10 = ([])
while true
avar11=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar10||=[];_append(avar10,it)
 break FAIL if r==FAIL
end;@input=avar11
avar10 )});next FAIL if it==FAIL;it)
a_*"," },proc{a_ = (avar9 = ([])
while true
avar12=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar9||=[];_append(avar9,it)
 break FAIL if r==FAIL
end;@input=avar12
avar9 )
a_*"," }));return FAIL if it==FAIL;it)  
end
def arg()
 number_ = (nil)
name_ = (nil)
t_ = (nil)
avar13 = (nil)
avar14 = (nil)
a_ = (nil)
(it=(_or(proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{a_ = (avar14 = ([])
while true
avar15=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar14||=[];_append(avar14,it)
 break FAIL if r==FAIL
end;@input=avar15
avar14 )});next FAIL if it==FAIL;it)
a_*"" },proc{(it=(clas(Strin));next FAIL if it==FAIL;it)
(it=(_enter{a_ = (avar13 = ([])
while true
avar16=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar13||=[];_append(avar13,it)
 break FAIL if r==FAIL
end;@input=avar16
avar13 )});next FAIL if it==FAIL;it)
a_*"" },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
(it=(_enter{t_ = ((it=(transfn());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
t_ },proc{(it=(clas(ExpKey));next FAIL if it==FAIL;it)
(it=(_enter{t_ = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
t_ },proc{(it=(clas(Variable));next FAIL if it==FAIL;it)
(it=(_enter{name_ = ((it=(anything());next FAIL if it==FAIL;it))
number_ = (_key(:number)) });next FAIL if it==FAIL;it)
"#{name_}_#{number_}" },proc{(it=(anything());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it)  
end
def rw(word_,prc_)
 x_ = (nil)
rwo=@returnword;@returnword=word_
x_ = ((it=(apply(prc_));return FAIL if it==FAIL;it))
@returnword=rwo;x_  
end
def failwrap(s_)
 "(it=(#{s_});#{@returnword} FAIL if it==FAIL;it)"  
end

end

