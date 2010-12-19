class Amethyst < AmethystCore
def _() 

 (it=(space());return FAIL if it==FAIL;it) 
 end
def _dot_() 

 (it=(anything());return FAIL if it==FAIL;it) 
 end
def regch(regex) 
c=nil
 c = ((it=(char());return FAIL if it==FAIL;it))
(it=((regex.match(c))||FAIL);return FAIL if it==FAIL;it)
 c  
 end
def eof() 

 (it=(_not{(it=(_dot_());next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) 
 end
def empty() 

  nil 
 end
def char() 
c=nil
 c = ((it=(_dot_());return FAIL if it==FAIL;it))
(it=((c.is_a? String )||FAIL);return FAIL if it==FAIL;it)
 c  
 end
def endline() 

 (it=(_or(proc{(it=(seq("\r\n"));next FAIL if it==FAIL;it)},proc{(it=(seq("\r"));next FAIL if it==FAIL;it)},proc{(it=(seq("\n"));next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
 end
def space() 

 (it=(regch(/[\s\t\r\n\f]/));return FAIL if it==FAIL;it) 
 end
def spaces() 
avar2=nil
 avar2=[]
while true
avar1=@input;r=it=((it=(space());break FAIL if it==FAIL;it))
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar1
avar2  
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
def listOf(rule,delim) 
f=nil;avar2=nil
 (it=(_or(proc{it=((it=(apply(rule));next FAIL if it==FAIL;it))
 f||=[];_append(f,it)
it=(avar2=[]
while true
avar2=@input;r=it=((it=(apply(delim));break FAIL if it==FAIL;it)
(it=(apply(rule));break FAIL if it==FAIL;it) )
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar2
avar2 )
 f||=[];_append(f,it)
 f },proc{(it=(empty());next FAIL if it==FAIL;it)
 [] }));return FAIL if it==FAIL;it) 
 end
def exactly(wanted) 
got=nil
 got = ((it=(anything());return FAIL if it==FAIL;it))
(it=((wanted == got)||FAIL);return FAIL if it==FAIL;it)
 wanted  
 end
def clas(cls) 

 (it=((@input.item.is_a?(cls))||FAIL);return FAIL if it==FAIL;it) 
 end
def is_a(cls) 

 (it=((@input.src.is_a?(cls))||FAIL);return FAIL if it==FAIL;it) 
 end
def token(s) 

 (it=(spaces());return FAIL if it==FAIL;it)
(it=(seq(s));return FAIL if it==FAIL;it)  
 end
def many1(s) 
a=nil;avar2=nil
 it=((it=(apply(s));return FAIL if it==FAIL;it))
 a||=[];_append(a,it)
it=(avar2=[]
while true
avar3=@input;r=it=((it=(apply(s));break FAIL if it==FAIL;it))
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar3
avar2 )
 a||=[];_append(a,it)  
 end

end

makeclasses(Object,
    [:Args,:o,:c,:r],
    [:Key,:name,:expr,:args],
    [:Resul,:name,:expr,:args],
    [:Enter,:name,:cls,:expr],
    :Apply,
    :Nested,
    :Exp,
    :ExpKey,
    :Foreign,
    [:Append,:name,:expr],
    [:Set,:name,:expr],
    :Many,
    :Many1,
    :Comment,
    [:Act,:uses],
    [:Pred,:uses],
    :Lookahead,
    :Not,
    :Seq,
    :Or,
    :And,
		[:Shadow,:name,:expr],
		[:Pass,:from,:to],
    [:Enter,:klas],
    [:Rule,:name,:args,:body],
    [:Grammar,:name,:parent,:rules]
)

def quote(s)
  s=s*""
  '"'+s.gsub('\\"','"').gsub('"','\\"')+'"'
end

$av=0
def autovar
	$av+=1
	"avar"+$av.to_s
end

class AmethystParser < Amethyst
def igrammar() 
avar5=nil;a=nil
 a = (avar5=[]
while true
avar1=@input;r=it=((it=(_or(proc{(it=(_not{(it=(seq("amethyst"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(_dot_());next FAIL if it==FAIL;it) },proc{(it=(grammar());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar5||=[];_append(avar5,it)
 break FAIL if r==FAIL
end;@input=avar1
avar5 )
 a  
 end
def grammar() 
name=nil;parent=nil;avar2=nil;rules=nil
 (it=(token("amethyst"));return FAIL if it==FAIL;it)
name = ((it=(name());return FAIL if it==FAIL;it))
(it=(_or(proc{(it=(token("<"));next FAIL if it==FAIL;it)
parent = ((it=(name());next FAIL if it==FAIL;it)) },proc{(it=(empty());next FAIL if it==FAIL;it)
parent="Amethyst" }));return FAIL if it==FAIL;it)
(it=(token("{"));return FAIL if it==FAIL;it)
rules = (avar2=[]
while true
avar2=@input;r=it=((it=(rule());break FAIL if it==FAIL;it))
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar2
avar2 )
(it=(token("}"));return FAIL if it==FAIL;it)
Grammar[ {:name=>name,:parent=>parent,:avar2=>avar2,:rules=>rules }]  
 end
def rule() 
name=nil;args=nil;body=nil
 name = ((it=(name());return FAIL if it==FAIL;it))
args = ((it=(ruleargs());return FAIL if it==FAIL;it))
(it=(token("="));return FAIL if it==FAIL;it)
body = ((it=(expression());return FAIL if it==FAIL;it))
$av=0
Rule[ {:name=>name,:args=>args,:body=>body }]  
 end
def expression() 

 (it=(choice());return FAIL if it==FAIL;it) 
 end
def choice() 
ary=nil
 ary = ((it=(listOf('sequence',proc{(it=(token("|"));return FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
Or[ {:ary=>ary }]  
 end
def sequence() 
avar2=nil;ary=nil
 ary = (avar2=[]
while true
avar3=@input;r=it=((it=(nr());break FAIL if it==FAIL;it)
(it=(prefixed());break FAIL if it==FAIL;it) )
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar3
avar2 )
And[ {:avar2=>avar2,:ary=>ary }]  
 end
def prefixed() 
m=nil;expr=nil;from=nil;to=nil
 (it=(_or(proc{(it=(token("~"));next FAIL if it==FAIL;it)
m = ((it=(modifier());next FAIL if it==FAIL;it))
 Not[m] },proc{(it=(token("&"));next FAIL if it==FAIL;it)
expr = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
 Pred[expr] },proc{(it=(token("&"));next FAIL if it==FAIL;it)
(it=(_not{expr = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
m = ((it=(modifier());next FAIL if it==FAIL;it))
 Lookahead[m] },proc{from = ((it=(modifier());next FAIL if it==FAIL;it))
(it=(token(">>"));next FAIL if it==FAIL;it)
to = ((it=(modifier());next FAIL if it==FAIL;it))
And[Set[{:name=>"it",:expr=>from}] ,Pass[{:to=>to}]] },proc{(it=(modifier());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
 end
def modifier() 
t=nil;avar2=nil;c=nil
 (it=(_or(proc{t = ((it=(term());next FAIL if it==FAIL;it))
t = ((it=(optIter(t));next FAIL if it==FAIL;it))
(it=(_or(proc{(it=(_not{(it=(space());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(binding(t));next FAIL if it==FAIL;it) },proc{(it=(empty());next FAIL if it==FAIL;it)
t }));next FAIL if it==FAIL;it) },proc{(it=(binding(Apply["anything"]));next FAIL if it==FAIL;it)},proc{(it=(token("#"));next FAIL if it==FAIL;it)
c = (avar2=[]
while true
avar4=@input;r=it=((it=(_not{(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_dot_());break FAIL if it==FAIL;it) )
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar4
avar2 )
 Comment[c] }));return FAIL if it==FAIL;it) 
 end
def optIter(t) 

 (it=(_or(proc{(it=(token("*"));next FAIL if it==FAIL;it)
 a=autovar; And[Act[Args[a+"=[]"]], Many[Append[{:name=>a,:expr=>t}]],Act[Args[a]]] },proc{(it=(token("+"));next FAIL if it==FAIL;it)
 a=autovar; And[Act[Args[a+"=[]"]], Append[{:name=>a,:expr=>t}], Many[Append[{:name=>a,:expr=>t}]],Act[Args[a]]] },proc{(it=(token("?"));next FAIL if it==FAIL;it)
 Or[t,Apply["empty"]] },proc{(it=(empty());next FAIL if it==FAIL;it)
 t }));return FAIL if it==FAIL;it) 
 end
def binding(exp) 
expr=nil;name=nil;e=nil
 (it=(_or(proc{expr = (exp)
(it=(token(":"));next FAIL if it==FAIL;it)
name = ((it=(name());next FAIL if it==FAIL;it))
(it=(_or(proc{(it=(seq("[]"));next FAIL if it==FAIL;it)
Append[ {:expr=>expr,:name=>name,:e=>e }] },proc{(it=(empty());next FAIL if it==FAIL;it)
Set[ {:expr=>expr,:name=>name,:e=>e }] }));next FAIL if it==FAIL;it) },proc{(it=(token(":"));next FAIL if it==FAIL;it)
e = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
 And[ Set[{:name=>"it", :expr=>exp}] , Act[e] ] }));return FAIL if it==FAIL;it) 
 end
def term() 
cls=nil;expr=nil;x=nil;avar2=nil;s=nil;avar4=nil;it=nil;avar6=nil
 (it=(_or(proc{cls = ((it=(_or(proc{(it=(className());next FAIL if it==FAIL;it)},proc{(it=(token(""));next FAIL if it==FAIL;it)
"Object" }));next FAIL if it==FAIL;it))
(it=(seq("["));next FAIL if it==FAIL;it)
expr = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token("]"));next FAIL if it==FAIL;it)
 And[Apply["clas",cls], Enter[expr]] },proc{cls = ((it=(className());next FAIL if it==FAIL;it))
 Apply["is_a",cls] },proc{(it=(token("nested"));next FAIL if it==FAIL;it)
(it=(seq("("));next FAIL if it==FAIL;it)
expr = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")"));next FAIL if it==FAIL;it)
 Nested[expr] },proc{(it=(application());next FAIL if it==FAIL;it)},proc{(it=(key());next FAIL if it==FAIL;it)},proc{x = ((it=(_or(proc{(it=(token("->"));next FAIL if it==FAIL;it)
(it=(atomicHostExpr());next FAIL if it==FAIL;it) },proc{(it=(token(""));next FAIL if it==FAIL;it)
(it=(inlineHostExpr());next FAIL if it==FAIL;it) }));next FAIL if it==FAIL;it))
  Act[x] },proc{(it=(token("\""));next FAIL if it==FAIL;it)
s = (avar2=[]
while true
avar5=@input;r=it=((it=(_not{(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar5
avar2 )
(it=(seq("\""));next FAIL if it==FAIL;it)
 Apply["token" ,quote(s)] },proc{(it=(token("'"));next FAIL if it==FAIL;it)
s = (avar4=[]
while true
avar6=@input;r=it=((it=(_not{(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar4||=[];_append(avar4,it)
 break FAIL if r==FAIL
end;@input=avar6
avar4 )
(it=(seq("\'"));next FAIL if it==FAIL;it)
 Apply["seq",quote(s)] },proc{it = ((it=(number());next FAIL if it==FAIL;it))
Apply["exactly",it] },proc{(it=(token("<"));next FAIL if it==FAIL;it)
x = (avar6=[]
it=((it=(_not{(it=(token(">"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(eChar());next FAIL if it==FAIL;it) )
 avar6||=[];_append(avar6,it)
while true
avar7=@input;r=it=((it=(_not{(it=(token(">"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar6||=[];_append(avar6,it)
 break FAIL if r==FAIL
end;@input=avar7
avar6 )
(it=(token(">"));next FAIL if it==FAIL;it)
  Apply["regch","/[#{x}]/"] },proc{(it=(token("("));next FAIL if it==FAIL;it)
x = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")[]"));next FAIL if it==FAIL;it)
(it=(collect(x));next FAIL if it==FAIL;it) },proc{(it=(token("("));next FAIL if it==FAIL;it)
x = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")"));next FAIL if it==FAIL;it)
  x }));return FAIL if it==FAIL;it) 
 end
def application() 
klas=nil;rule=nil;arg=nil
 (it=(_or(proc{klas = ((it=(name());next FAIL if it==FAIL;it))
(it=(seq("::"));next FAIL if it==FAIL;it)
rule = ((it=(name());next FAIL if it==FAIL;it))
arg = ((it=(argsOpt('(',')'));next FAIL if it==FAIL;it))
Foreign[ {:klas=>klas,:rule=>rule,:arg=>arg }] },proc{rule = ((it=(name());next FAIL if it==FAIL;it))
arg = ((it=(argsOpt('(',')'));next FAIL if it==FAIL;it))
 Apply[rule,arg] }));return FAIL if it==FAIL;it) 
 end
def key() 
name=nil;args=nil;expr=nil
 (it=(_or(proc{(it=(token("@"));next FAIL if it==FAIL;it)
name = ((it=(className());next FAIL if it==FAIL;it))
args = ((it=(argsOpt('[',']'));next FAIL if it==FAIL;it))
Resul[ {:name=>name,:args=>args,:expr=>expr }] },proc{(it=(token("@"));next FAIL if it==FAIL;it)
name = ((it=(name());next FAIL if it==FAIL;it))
expr = ((it=(_or(proc{(it=(token("=>"));next FAIL if it==FAIL;it)
(it=(term());next FAIL if it==FAIL;it) },proc{(it=(empty());next FAIL if it==FAIL;it)
Apply["anything"] }));next FAIL if it==FAIL;it))
Key[ {:name=>name,:args=>args,:expr=>expr }] }));return FAIL if it==FAIL;it) 
 end
def collect(ors) 

  a=autovar; And[Or[{:ary=>ors.ary.map{|ands| And[{:ary=>ands.ary.map{|expr| Append[{:name=>a,:expr=>expr}]}}]}}],Act[Args[a]]] 
 end
def eChar() 
c=nil
 (it=(_or(proc{(it=(seq("\\"));next FAIL if it==FAIL;it)
c = ((it=(char());next FAIL if it==FAIL;it))
 "\\#{c}" },proc{(it=(_args('#{','}'));next FAIL if it==FAIL;it)},proc{(it=(char());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
 end
def ruleargs() 

 (it=(argsOpt('(',')'));return FAIL if it==FAIL;it) 
 end
def nr() 

 (it=(_not{(it=(name());next FAIL if it==FAIL;it)
(it=(ruleargs());next FAIL if it==FAIL;it)
(it=(token("="));next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it) 
 end
def argsOpt(o,c) 

 (it=(_or(proc{(it=(args(o,c));next FAIL if it==FAIL;it)},proc{(it=(empty());next FAIL if it==FAIL;it)
 Args[""] }));return FAIL if it==FAIL;it) 
 end
def args(o,c) 
ary=nil
 ary = ((it=(__args(o,c));return FAIL if it==FAIL;it))
ary= ary.flatten
Args[ {:ary=>ary }]  
 end
def _args(o,c) 
r=nil
 r = ((it=(__args(o,c));return FAIL if it==FAIL;it))
 [o]+r+[c]  
 end
def __args(o,c) 
avar2=nil;r=nil
 (it=(seq(o));return FAIL if it==FAIL;it)
r = (avar2=[]
while true
avar8=@input;r=it=((it=(rubyarg());break FAIL if it==FAIL;it))
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar8
avar2 )
(it=(seq(c));return FAIL if it==FAIL;it)
 r  
 end
def rubyarg() 
e=nil;avar2=nil;s=nil;avar4=nil;avar6=nil;n=nil;k=nil
 (it=(_or(proc{(it=(seq("`"));next FAIL if it==FAIL;it)
e = ((it=(expression());next FAIL if it==FAIL;it))
(it=(seq("`"));next FAIL if it==FAIL;it)
 Exp[e] },proc{(it=(_args('(',')'));next FAIL if it==FAIL;it)},proc{(it=(_args('[',']'));next FAIL if it==FAIL;it)},proc{(it=(_args('{','}'));next FAIL if it==FAIL;it)},proc{(it=(seq("\""));next FAIL if it==FAIL;it)
s = (avar2=[]
while true
avar9=@input;r=it=((it=(_not{(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar9
avar2 )
(it=(seq("\""));next FAIL if it==FAIL;it)
 ['"']+ s+['"'] },proc{(it=(seq("\'"));next FAIL if it==FAIL;it)
s = (avar4=[]
while true
avar10=@input;r=it=((it=(_not{(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar4||=[];_append(avar4,it)
 break FAIL if r==FAIL
end;@input=avar10
avar4 )
(it=(seq("\'"));next FAIL if it==FAIL;it)
 ['\'']+s+['\''] },proc{(it=(_or(proc{(it=(seq("@@"));next FAIL if it==FAIL;it)
n=["@"] },proc{(it=(empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it)
it=(avar6=[]
it=((it=(regch(/[a-zA-Z_]/));next FAIL if it==FAIL;it))
 avar6||=[];_append(avar6,it)
while true
avar11=@input;r=it=((it=(regch(/[a-zA-Z_]/));break FAIL if it==FAIL;it))
 avar6||=[];_append(avar6,it)
 break FAIL if r==FAIL
end;@input=avar11
avar6 )
 n||=[];_append(n,it)
 n*"" },proc{k = ((it=(key());next FAIL if it==FAIL;it))
 ExpKey[k]  },proc{(it=(regch(/[^`{}()'"\[\]]/));next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
 end
def nameFirst() 

 (it=(_or(proc{(it=(regch(/[_$.^]/));next FAIL if it==FAIL;it)},proc{(it=(letter());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
 end
def nameRest() 

 (it=(_or(proc{(it=(nameFirst());next FAIL if it==FAIL;it)},proc{(it=(digit());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
 end
def className() 
s=nil;avar2=nil
 (it=(spaces());return FAIL if it==FAIL;it)
it=((it=(upper());return FAIL if it==FAIL;it))
 s||=[];_append(s,it)
it=(avar2=[]
while true
avar12=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar12
avar2 )
 s||=[];_append(s,it)
 leterize(s*"")  
 end
def name() 
s=nil;avar2=nil
 (it=(spaces());return FAIL if it==FAIL;it)
it=((it=(nameFirst());return FAIL if it==FAIL;it))
 s||=[];_append(s,it)
it=(avar2=[]
while true
avar13=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar13
avar2 )
 s||=[];_append(s,it)
 leterize(s*"")  
 end
def inlineHostExpr() 

 (it=(args('{','}'));return FAIL if it==FAIL;it) 
 end
def number() 
avar2=nil
 avar2=[]
it=((it=(regch(/[0-9]/));return FAIL if it==FAIL;it))
 avar2||=[];_append(avar2,it)
while true
avar14=@input;r=it=((it=(regch(/[0-9]/));break FAIL if it==FAIL;it))
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar14
avar2  
 end
def atomicHostExpr() 
avar2=nil;s=nil
 s = (avar2=[]
while true
avar15=@input;r=it=((it=(_not{(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_dot_());break FAIL if it==FAIL;it) )
 avar2||=[];_append(avar2,it)
 break FAIL if r==FAIL
end;@input=avar15
avar2 )
 Args[s*""]  
 end

end

class AmethystOptimizer < Amethyst
def itrans() 
avar19=nil;r=nil
 (it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{r = (avar19=[]
while true
avar1=@input;r=it=((it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(trans());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar19||=[];_append(avar19,it)
 break FAIL if r==FAIL
end;@input=avar1
avar19 )});return FAIL if it==FAIL;it)
 r  
 end
def trans() 
name=nil;parent=nil;rules=nil;args=nil;body=nil;ary=nil;avar4=nil;avar8=nil;avar12=nil;avar16=nil;expr=nil;klas=nil;avar20=nil;from=nil;to=nil
 (it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
parent = (_key(:parent){(it=(anything());next FAIL if it==FAIL;it)})
rules = (_key(:rules){(it=(transs());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
Grammar[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
args = (_key(:args){(it=(trans());next FAIL if it==FAIL;it)})
body = (_key(:body){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
Rule[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)});next FAIL if it==FAIL;it)
Enter[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar4=[]
while true
avar2=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 avar4||=[];_append(avar4,it)
 break FAIL if r==FAIL
end;@input=avar2
avar4 )});next FAIL if it==FAIL;it)
Or[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar8=[]
while true
avar3=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar8||=[];_append(avar8,it)
 break FAIL if r==FAIL
end;@input=avar3
avar8 )});next FAIL if it==FAIL;it)
And[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Not));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)});next FAIL if it==FAIL;it)
Not[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Pred));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)});next FAIL if it==FAIL;it)
Pred[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Lookahead));next FAIL if it==FAIL;it)
(it=(_enter{ary = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
Lookahead[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Comment));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar12=[]
while true
avar4=@input;r=it=((it=(anything());break FAIL if it==FAIL;it))
 avar12||=[];_append(avar12,it)
 break FAIL if r==FAIL
end;@input=avar4
avar12 )});next FAIL if it==FAIL;it)
Comment[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Many));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)});next FAIL if it==FAIL;it)
Many[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(anything());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)
it=(avar16=[]
while true
avar5=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar16||=[];_append(avar16,it)
 break FAIL if r==FAIL
end;@input=avar5
avar16 )
 ary||=[];_append(ary,it) });next FAIL if it==FAIL;it)
Apply[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
Set[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Append));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
Append[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)});next FAIL if it==FAIL;it)
Act[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
args = (_key(:args){(it=(arg());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
Resul[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Foreign));next FAIL if it==FAIL;it)
(it=(_enter{klas = (_key(:klas){(it=(anything());next FAIL if it==FAIL;it)})
_key(:rule){(it=(rule());next FAIL if it==FAIL;it)}
args = (_key(:args){(it=(arg());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
Foreign[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar20=[]
while true
avar6=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar20||=[];_append(avar20,it)
 break FAIL if r==FAIL
end;@input=avar6
avar20 )});next FAIL if it==FAIL;it)
Args[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Key));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
Key[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{from = (_key(:from){(it=(trans());next FAIL if it==FAIL;it)})
to = (_key(:to){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
Pass[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] },proc{(it=(clas(Shadow));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
Shadow[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:avar4=>avar4,:avar8=>avar8,:avar12=>avar12,:avar16=>avar16,:expr=>expr,:klas=>klas,:avar20=>avar20,:from=>from,:to=>to }] }));return FAIL if it==FAIL;it) 
 end
def transfn() 

 (it=(trans());return FAIL if it==FAIL;it) 
 end
def transs() 
avar4=nil;t=nil
 (it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{t = (avar4=[]
while true
avar7=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar4||=[];_append(avar4,it)
 break FAIL if r==FAIL
end;@input=avar7
avar4 )});return FAIL if it==FAIL;it)
 t  
 end
def arg() 
avar4=nil;ary=nil
 (it=(_or(proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar4=[]
while true
avar8=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar4||=[];_append(avar4,it)
 break FAIL if r==FAIL
end;@input=avar8
avar4 )});next FAIL if it==FAIL;it)
Args[ {:avar4=>avar4,:ary=>ary }] },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(transfn());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)});next FAIL if it==FAIL;it)
Exp[ {:avar4=>avar4,:ary=>ary }] },proc{(it=(clas(ExpKey));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)});next FAIL if it==FAIL;it)
ExpKey[ {:avar4=>avar4,:ary=>ary }] },proc{(it=(anything());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
 end

end

class AmethystOptimizer2 < AmethystOptimizer
def trans() 
name=nil;args=nil;body=nil;locals=nil;expr=nil;avar12=nil;ary=nil;avar16=nil
 (it=(_or(proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{@locals=[]
name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
args = (_key(:args){(it=(trans());next FAIL if it==FAIL;it)})
body = (_key(:body){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
locals = (@locals.uniq)
Rule[ {:name=>name,:args=>args,:body=>body,:locals=>locals,:expr=>expr,:avar12=>avar12,:ary=>ary,:avar16=>avar16 }] },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
@locals<<name
Set[ {:name=>name,:args=>args,:body=>body,:locals=>locals,:expr=>expr,:avar12=>avar12,:ary=>ary,:avar16=>avar16 }] },proc{(it=(clas(Append));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
@locals<<name
Append[ {:name=>name,:args=>args,:body=>body,:locals=>locals,:expr=>expr,:avar12=>avar12,:ary=>ary,:avar16=>avar16 }] },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar12=[]
while true
avar1=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 avar12||=[];_append(avar12,it)
 break FAIL if r==FAIL
end;@input=avar1
avar12 )});next FAIL if it==FAIL;it)
ary=ary.map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten
(it=(_or(proc{(it=((ary.size==1)||FAIL);next FAIL if it==FAIL;it)
ary[0] },proc{Or[ {:name=>name,:args=>args,:body=>body,:locals=>locals,:expr=>expr,:avar12=>avar12,:ary=>ary,:avar16=>avar16 }]}));next FAIL if it==FAIL;it) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar16=[]
while true
avar2=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar16||=[];_append(avar16,it)
 break FAIL if r==FAIL
end;@input=avar2
avar16 )});next FAIL if it==FAIL;it)
ary=ary.map{|a| (a.is_a?(And)) ? a.ary : a}.flatten
(it=(_or(proc{(it=((ary.size==1)||FAIL);next FAIL if it==FAIL;it)
ary[0] },proc{And[ {:name=>name,:args=>args,:body=>body,:locals=>locals,:expr=>expr,:avar12=>avar12,:ary=>ary,:avar16=>avar16 }]}));next FAIL if it==FAIL;it) },proc{super}));return FAIL if it==FAIL;it) 
 end

end

class AmethystTranslator < Amethyst
def itrans() 
avar6=nil;r=nil
 (it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{r = (avar6=[]
while true
avar1=@input;r=it=((it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(trans());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar6||=[];_append(avar6,it)
 break FAIL if r==FAIL
end;@input=avar1
avar6 )});return FAIL if it==FAIL;it)
 r*""  
 end
def trans() 
name=nil;parent=nil;body=nil;it=nil;args=nil;expr=nil;avar12=nil;ors=nil;avar16=nil;t=nil;c=nil;avar20=nil;klas=nil;avar24=nil;a=nil;to=nil
 (it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('return',proc{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
parent = (_key(:parent){(it=(anything());next FAIL if it==FAIL;it)})
body = (_key(:rules){(it=(transs());next FAIL if it==FAIL;it)}) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
 "class #{name} < #{parent}\n#{body}\nend\n" },proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
it = (_key(:locals){(it=(anything());next FAIL if it==FAIL;it)})
@locals=it
args = (_key(:args){(it=(trans());next FAIL if it==FAIL;it)})
body = (_key(:body){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
 "def #{name}(#{args}) \n#{@locals.map{|l|l+"=nil"}*";"}\n #{body} \n end\n" },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{expr = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
(it=(failwrap("_enter{#{expr}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next', proc{ors = (avar12=[]
while true
avar2=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 avar12||=[];_append(avar12,it)
 break FAIL if r==FAIL
end;@input=avar2
avar12 )}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(failwrap("_or(#{ors*","})"));next FAIL if it==FAIL;it) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{t = (avar16=[]
while true
avar3=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar16||=[];_append(avar16,it)
 break FAIL if r==FAIL
end;@input=avar3
avar16 )});next FAIL if it==FAIL;it)
 "#{t*"\n"} " },proc{(it=(clas(Not));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next',proc{t = ((it=(trans());next FAIL if it==FAIL;it))}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(failwrap("_not{#{t}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Pred));next FAIL if it==FAIL;it)
(it=(_enter{t = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
(it=(failwrap("(#{t})||FAIL"));next FAIL if it==FAIL;it) },proc{(it=(clas(Lookahead));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next',proc{t = ((it=(trans());next FAIL if it==FAIL;it))}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(failwrap("_lookahead{#{t}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Comment));next FAIL if it==FAIL;it)
(it=(_enter{c = ((it=(anything());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
 "" },proc{(it=(clas(Many));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('break', proc{t = ((it=(trans());next FAIL if it==FAIL;it))} ));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
o=autovar; "while true\n#{o}=@input;r=#{t}\n break FAIL if r==FAIL\nend;@input=#{o}" },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{name = ((it=(anything());next FAIL if it==FAIL;it))
args = (avar20=[]
while true
avar4=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar20||=[];_append(avar20,it)
 break FAIL if r==FAIL
end;@input=avar4
avar20 ) });next FAIL if it==FAIL;it)
(it=(failwrap("#{name}(#{args})"));next FAIL if it==FAIL;it) },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
 "#{name} = (#{expr})" },proc{(it=(clas(Append));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
 "it=(#{expr})\n #{name}||=[];_append(#{name},it)" },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{t = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
 t },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
args = (_key(:args){(it=(arg());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
 "#{name}[#{args} {#{@locals.map{|l| ":#{l}=>#{l}"}*","} }]" },proc{(it=(clas(Foreign));next FAIL if it==FAIL;it)
(it=(_enter{klas = (_key(:klas){(it=(anything());next FAIL if it==FAIL;it)})
_key(:rule){(it=(rule());next FAIL if it==FAIL;it)}
args = (_key(:args){(it=(arg());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
(it=(failwrap("_foreign(#{klas}).#{rule}(#{args})"));next FAIL if it==FAIL;it) },proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{a = (avar24=[]
while true
avar5=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar24||=[];_append(avar24,it)
 break FAIL if r==FAIL
end;@input=avar5
avar24 )});next FAIL if it==FAIL;it)
 a*"" },proc{(it=(clas(Key));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name){(it=(anything());next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
 "_key(:#{name}){#{expr}}" },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{to = (_key(:to){(it=(trans());next FAIL if it==FAIL;it)})});next FAIL if it==FAIL;it)
(it=(failwrap("_pass(it){#{to}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Shadow));next FAIL if it==FAIL;it)
(it=(_enter{_key(:name){(it=(name());next FAIL if it==FAIL;it)}
expr = (_key(:expr){(it=(trans());next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)
 a=autovar; r=autovar; "#{a}=#{name} ;#{r}=(#{expr});#{name}=#{a};#{r}" }));return FAIL if it==FAIL;it) 
 end
def transfn() 
t=nil
 t = ((it=(trans());return FAIL if it==FAIL;it))
 "proc{#{t}}"   
 end
def transs() 
avar4=nil;t=nil
 (it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{t = (avar4=[]
while true
avar6=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar4||=[];_append(avar4,it)
 break FAIL if r==FAIL
end;@input=avar6
avar4 )});return FAIL if it==FAIL;it)
 t  
 end
def arg() 
avar4=nil;a=nil;t=nil
 (it=(_or(proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{a = (avar4=[]
while true
avar7=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar4||=[];_append(avar4,it)
 break FAIL if r==FAIL
end;@input=avar7
avar4 )});next FAIL if it==FAIL;it)
 a },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
(it=(_enter{t = ((it=(transfn());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
 t },proc{(it=(clas(ExpKey));next FAIL if it==FAIL;it)
(it=(_enter{t = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
 t },proc{(it=(anything());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
 end
def rw(word,prc) 
x=nil
 rwo=@returnword;@returnword=word
x = ((it=(apply(prc));return FAIL if it==FAIL;it))
@returnword=rwo;x  
 end
def failwrap(s) 

   "(it=(#{s});#{@returnword} FAIL if it==FAIL;it)"  
 end

end

