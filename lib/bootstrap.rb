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
def listOf(rule,delim) 
f=nil
 (it=(_or(proc{it=((it=(apply(rule));next FAIL if it==FAIL;it))
 f||=[];_append(f,it)
it=(avar3 = ([])
while true
avar4=@input;r=it=((it=(apply(delim));break FAIL if it==FAIL;it)
(it=(apply(rule));break FAIL if it==FAIL;it) )
 avar3||=[];_append(avar3,it)
 break FAIL if r==FAIL
end;@input=avar4
avar3 )
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
a=nil
 it=((it=(apply(s));return FAIL if it==FAIL;it))
 a||=[];_append(a,it)
it=(avar5 = ([])
while true
avar6=@input;r=it=((it=(apply(s));break FAIL if it==FAIL;it))
 avar5||=[];_append(avar5,it)
 break FAIL if r==FAIL
end;@input=avar6
avar5 )
 a||=[];_append(a,it)  
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
		[:Variable,:number],
		[:Shadow,:name,:expr],
		[:Pass,:from,:to],
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
a=nil
 a = (avar1 = ([])
while true
avar2=@input;r=it=((it=(_or(proc{(it=(_not{(it=(seq("amethyst"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(_dot_());next FAIL if it==FAIL;it) },proc{(it=(grammar());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar1||=[];_append(avar1,it)
 break FAIL if r==FAIL
end;@input=avar2
avar1 )
a  
end
def grammar() 
name=nil;parent=nil;rules=nil
 (it=(token("amethyst"));return FAIL if it==FAIL;it)
name = ((it=(name());return FAIL if it==FAIL;it))
(it=(_or(proc{(it=(token("<"));next FAIL if it==FAIL;it)
parent = ((it=(name());next FAIL if it==FAIL;it)) },proc{(it=(empty());next FAIL if it==FAIL;it)
parent="Amethyst" }));return FAIL if it==FAIL;it)
(it=(token("{"));return FAIL if it==FAIL;it)
rules = (avar3 = ([])
while true
avar4=@input;r=it=((it=(rule());break FAIL if it==FAIL;it))
 avar3||=[];_append(avar3,it)
 break FAIL if r==FAIL
end;@input=avar4
avar3 )
(it=(token("}"));return FAIL if it==FAIL;it)
Grammar[ {:name=>name,:parent=>parent,:rules=>rules }]  
end
def rule() 
name=nil;args=nil;body=nil;locals=nil
 @locals=[]
name = ((it=(name());return FAIL if it==FAIL;it))
args = ((it=(ruleargs());return FAIL if it==FAIL;it))
(it=(token("="));return FAIL if it==FAIL;it)
body = ((it=(expression());return FAIL if it==FAIL;it))
$av=0
locals = (@locals.uniq)
Rule[ {:name=>name,:args=>args,:body=>body,:locals=>locals }]  
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
ary=nil
 ary = (avar5 = ([])
while true
avar6=@input;r=it=((it=(nr());break FAIL if it==FAIL;it)
(it=(prefixed());break FAIL if it==FAIL;it) )
 avar5||=[];_append(avar5,it)
 break FAIL if r==FAIL
end;@input=avar6
avar5 )
And[ {:ary=>ary }]  
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
(it=(token("=>"));next FAIL if it==FAIL;it)
to = ((it=(modifier());next FAIL if it==FAIL;it))
And[Set[{:name=>"it",:expr=>from}] ,Pass[{:to=>to}]] },proc{(it=(modifier());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
end
def modifier() 
t=nil;c=nil
 (it=(_or(proc{t = ((it=(term());next FAIL if it==FAIL;it))
t = ((it=(optIter(t));next FAIL if it==FAIL;it))
(it=(_or(proc{(it=(_not{(it=(space());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(binding(t));next FAIL if it==FAIL;it) },proc{(it=(empty());next FAIL if it==FAIL;it)
t }));next FAIL if it==FAIL;it) },proc{(it=(binding(Apply["anything"]));next FAIL if it==FAIL;it)},proc{(it=(token("#"));next FAIL if it==FAIL;it)
c = (avar7 = ([])
while true
avar8=@input;r=it=((it=(_not{(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_dot_());break FAIL if it==FAIL;it) )
 avar7||=[];_append(avar7,it)
 break FAIL if r==FAIL
end;@input=avar8
avar7 )
Comment[c] }));return FAIL if it==FAIL;it) 
end
def optIter(t) 

 (it=(_or(proc{(it=(token("*"));next FAIL if it==FAIL;it)
a=autovar; And[Set[{:name=>a, :expr=> Act["[]"]}], Many[{:ary=>[Append[{:name=>a,:expr=>t}]],:o=>autovar}],Act[a]] },proc{(it=(token("+"));next FAIL if it==FAIL;it)
a=autovar; And[Set[{:name=>a, :expr=> Act["[]"]}], Append[{:name=>a,:expr=>t}], Many[{:ary=>[Append[{:name=>a,:expr=>t}]],:o=>autovar}],Act[a]] },proc{(it=(token("?"));next FAIL if it==FAIL;it)
Or[t,Apply["empty"]] },proc{(it=(empty());next FAIL if it==FAIL;it)
t }));return FAIL if it==FAIL;it) 
end
def binding(exp) 
expr=nil;name=nil;e=nil
 (it=(_or(proc{expr = (exp)
(it=(token(":"));next FAIL if it==FAIL;it)
name = ((it=(name());next FAIL if it==FAIL;it))
@locals<<name
(it=(_or(proc{(it=(seq("[]"));next FAIL if it==FAIL;it)
Append[ {:expr=>expr,:name=>name }] },proc{(it=(empty());next FAIL if it==FAIL;it)
Set[ {:expr=>expr,:name=>name }] }));next FAIL if it==FAIL;it) },proc{(it=(token(":"));next FAIL if it==FAIL;it)
e = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
And[Set[{:name=>"it", :expr=>exp}] , Act[e] ] }));return FAIL if it==FAIL;it) 
end
def term() 
cls=nil;expr=nil;x=nil;s=nil
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
s = (avar9 = ([])
while true
avar10=@input;r=it=((it=(_not{(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar9||=[];_append(avar9,it)
 break FAIL if r==FAIL
end;@input=avar10
avar9 )
(it=(seq("\""));next FAIL if it==FAIL;it)
Apply["token" ,quote(s)] },proc{(it=(token("'"));next FAIL if it==FAIL;it)
s = (avar11 = ([])
while true
avar12=@input;r=it=((it=(_not{(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar11||=[];_append(avar11,it)
 break FAIL if r==FAIL
end;@input=avar12
avar11 )
(it=(seq("\'"));next FAIL if it==FAIL;it)
Apply["seq",quote(s)] },proc{it = ((it=(number());next FAIL if it==FAIL;it))
Apply["exactly",it] },proc{(it=(token("<"));next FAIL if it==FAIL;it)
x = (avar13 = ([])
it=((it=(_not{(it=(token(">"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(eChar());next FAIL if it==FAIL;it) )
 avar13||=[];_append(avar13,it)
while true
avar14=@input;r=it=((it=(_not{(it=(token(">"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar13||=[];_append(avar13,it)
 break FAIL if r==FAIL
end;@input=avar14
avar13 )
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
name=nil;args=nil;vars=nil
 (it=(_or(proc{(it=(token("@"));next FAIL if it==FAIL;it)
name = ((it=(className());next FAIL if it==FAIL;it))
args = ((it=(argsOpt('[',']'));next FAIL if it==FAIL;it))
vars = (@locals.uniq)
Resul[ {:name=>name,:args=>args,:vars=>vars }] },proc{(it=(token("@"));next FAIL if it==FAIL;it)
name = ((it=(name());next FAIL if it==FAIL;it))
Key[ {:name=>name,:args=>args,:vars=>vars }] }));return FAIL if it==FAIL;it) 
end
def collect(ors) 

 a=autovar; And[Or[{:ary=>ors.ary.map{|ands| And[{:ary=>ands.ary.map{|expr| Append[{:name=>a,:expr=>expr}]}}]}}],Act[a]] 
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
[] }));return FAIL if it==FAIL;it) 
end
def args(o,c) 
r=nil
 r = ((it=(__args(o,c));return FAIL if it==FAIL;it))
r<< ','
							ary=[]
							tmp=[]
							r.each{|a|
								if a==','
									ary<<Args[{:ary=>tmp}];tmp=[]
								else
									tmp<<a
								end
							}
							ary
						  
end
def _args(o,c) 
r=nil
 r = ((it=(__args(o,c));return FAIL if it==FAIL;it))
Args[{:ary=>([o]+r+[c])}]  
end
def __args(o,c) 
r=nil
 (it=(seq(o));return FAIL if it==FAIL;it)
(it=(token(""));return FAIL if it==FAIL;it)
r = (avar15 = ([])
while true
avar16=@input;r=it=((it=(rubyarg());break FAIL if it==FAIL;it))
 avar15||=[];_append(avar15,it)
 break FAIL if r==FAIL
end;@input=avar16
avar15 )
(it=(seq(c));return FAIL if it==FAIL;it)
r  
end
def rubyarg() 
e=nil;s=nil;n=nil;k=nil
 (it=(_or(proc{(it=(seq("`"));next FAIL if it==FAIL;it)
e = ((it=(expression());next FAIL if it==FAIL;it))
(it=(seq("`"));next FAIL if it==FAIL;it)
Exp[e] },proc{(it=(_args('(',')'));next FAIL if it==FAIL;it)},proc{(it=(_args('[',']'));next FAIL if it==FAIL;it)},proc{(it=(_args('{','}'));next FAIL if it==FAIL;it)},proc{(it=(seq("\""));next FAIL if it==FAIL;it)
s = (avar17 = ([])
while true
avar18=@input;r=it=((it=(_not{(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar17||=[];_append(avar17,it)
 break FAIL if r==FAIL
end;@input=avar18
avar17 )
(it=(seq("\""));next FAIL if it==FAIL;it)
['"']+ s+['"'] },proc{(it=(seq("\'"));next FAIL if it==FAIL;it)
s = (avar19 = ([])
while true
avar20=@input;r=it=((it=(_not{(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 avar19||=[];_append(avar19,it)
 break FAIL if r==FAIL
end;@input=avar20
avar19 )
(it=(seq("\'"));next FAIL if it==FAIL;it)
['\'']+s+['\''] },proc{(it=(_or(proc{(it=(seq("@@"));next FAIL if it==FAIL;it)
n=["@"] },proc{(it=(empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it)
it=(avar21 = ([])
it=((it=(regch(/[a-zA-Z_]/));next FAIL if it==FAIL;it))
 avar21||=[];_append(avar21,it)
while true
avar22=@input;r=it=((it=(regch(/[a-zA-Z_]/));break FAIL if it==FAIL;it))
 avar21||=[];_append(avar21,it)
 break FAIL if r==FAIL
end;@input=avar22
avar21 )
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

 avar23 = ([])
while true
avar24=@input;r=it=((it=(_());break FAIL if it==FAIL;it))
 avar23||=[];_append(avar23,it)
 break FAIL if r==FAIL
end;@input=avar24
avar23
it = (it=((it=(upper());return FAIL if it==FAIL;it))
 avar25||=[];_append(avar25,it)
it=(avar26 = ([])
while true
avar27=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 avar26||=[];_append(avar26,it)
 break FAIL if r==FAIL
end;@input=avar27
avar26 )
 avar25||=[];_append(avar25,it)
avar25 )
leterize(it*"")  
end
def name() 

 avar28 = ([])
while true
avar29=@input;r=it=((it=(_());break FAIL if it==FAIL;it))
 avar28||=[];_append(avar28,it)
 break FAIL if r==FAIL
end;@input=avar29
avar28
it = (it=((it=(nameFirst());return FAIL if it==FAIL;it))
 avar30||=[];_append(avar30,it)
it=(avar31 = ([])
while true
avar32=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 avar31||=[];_append(avar31,it)
 break FAIL if r==FAIL
end;@input=avar32
avar31 )
 avar30||=[];_append(avar30,it)
avar30 )
leterize(it*"")  
end
def inlineHostExpr() 

 (it=(args('{','}'));return FAIL if it==FAIL;it) 
end
def number() 

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
s=nil
 s = (avar35 = ([])
while true
avar36=@input;r=it=((it=(_not{(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_dot_());break FAIL if it==FAIL;it) )
 avar35||=[];_append(avar35,it)
 break FAIL if r==FAIL
end;@input=avar36
avar35 )
it = ("{#{s*""}}")
(it=(_pass(it){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{(it=(inlineHostExpr());return FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)  
end

end

class AmethystOptimizer < Amethyst
def itrans() 
r=nil
 r = (avar1 = ([])
while true
avar2=@input;r=it=((it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(trans());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar1||=[];_append(avar1,it)
 break FAIL if r==FAIL
end;@input=avar2
avar1 )
r  
end
def trans() 
name=nil;parent=nil;rules=nil;args=nil;body=nil;locals=nil;ary=nil;o=nil;expr=nil;vars=nil;klas=nil;to=nil;a=nil
 (it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))
parent = (_key(:parent))
it = (_key(:rules))
(it=(_pass(it){rules = ((it=(transs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Grammar[ {:name=>name,:parent=>parent,:rules=>rules }] },proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))
it = (_key(:args))
(it=(_pass(it){args = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it = (_key(:body))
(it=(_pass(it){body = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals = (_key(:locals)) });next FAIL if it==FAIL;it)
Rule[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals }] },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)});next FAIL if it==FAIL;it)
Enter[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary }] },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar3 = ([])
while true
avar4=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 avar3||=[];_append(avar3,it)
 break FAIL if r==FAIL
end;@input=avar4
avar3 )});next FAIL if it==FAIL;it)
Or[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary }] },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar5 = ([])
while true
avar6=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar5||=[];_append(avar5,it)
 break FAIL if r==FAIL
end;@input=avar6
avar5 )});next FAIL if it==FAIL;it)
And[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary }] },proc{(it=(clas(Not));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)});next FAIL if it==FAIL;it)
Not[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary }] },proc{(it=(clas(Lookahead));next FAIL if it==FAIL;it)
(it=(_enter{ary = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
Lookahead[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary }] },proc{(it=(clas(Comment));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar7 = ([])
while true
avar8=@input;r=it=((it=(anything());break FAIL if it==FAIL;it))
 avar7||=[];_append(avar7,it)
 break FAIL if r==FAIL
end;@input=avar8
avar7 )});next FAIL if it==FAIL;it)
Comment[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary }] },proc{(it=(clas(Many));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)
o = (_key(:o)) });next FAIL if it==FAIL;it)
Many[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary,:o=>o }] },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(anything());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)
it=((it=(args());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it) });next FAIL if it==FAIL;it)
Apply[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary,:o=>o }] },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))
it = (_key(:expr))
(it=(_pass(it){expr = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Set[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary,:o=>o,:expr=>expr }] },proc{(it=(clas(Append));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))
it = (_key(:expr))
(it=(_pass(it){expr = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Append[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary,:o=>o,:expr=>expr }] },proc{(it=(clas(Pred));next FAIL if it==FAIL;it)
(it=(_enter{ary = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
Pred[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary,:o=>o,:expr=>expr }] },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{ary = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
Act[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary,:o=>o,:expr=>expr }] },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))
it = (_key(:args))
(it=(_pass(it){args = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
vars = (_key(:vars)) });next FAIL if it==FAIL;it)
Resul[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary,:o=>o,:expr=>expr,:vars=>vars }] },proc{(it=(clas(Foreign));next FAIL if it==FAIL;it)
(it=(_enter{klas = (_key(:klas))
it = (_key(:rule))
(it=(_pass(it){(it=(rule());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it = (_key(:args))
(it=(_pass(it){args = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Foreign[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary,:o=>o,:expr=>expr,:vars=>vars,:klas=>klas }] },proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar9 = ([])
while true
avar10=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar9||=[];_append(avar9,it)
 break FAIL if r==FAIL
end;@input=avar10
avar9 )});next FAIL if it==FAIL;it)
Args[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary,:o=>o,:expr=>expr,:vars=>vars,:klas=>klas }] },proc{(it=(clas(Key));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))});next FAIL if it==FAIL;it)
Key[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary,:o=>o,:expr=>expr,:vars=>vars,:klas=>klas }] },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{it = (_key(:to))
(it=(_pass(it){to = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Pass[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary,:o=>o,:expr=>expr,:vars=>vars,:klas=>klas,:to=>to }] },proc{(it=(clas(Shadow));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))
it = (_key(:expr))
(it=(_pass(it){expr = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
a = (_key(:a)) });next FAIL if it==FAIL;it)
Shadow[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:locals=>locals,:ary=>ary,:o=>o,:expr=>expr,:vars=>vars,:klas=>klas,:to=>to,:a=>a }] }));return FAIL if it==FAIL;it) 
end
def transfn() 

 (it=(trans());return FAIL if it==FAIL;it) 
end
def transs() 
t=nil
 (it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{t = (avar11 = ([])
while true
avar12=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar11||=[];_append(avar11,it)
 break FAIL if r==FAIL
end;@input=avar12
avar11 )});return FAIL if it==FAIL;it)
t  
end
def args() 
a=nil
 (it=(_or(proc{(it=(clas(Array));next FAIL if it==FAIL;it)
(it=(_enter{a = (avar13 = ([])
while true
avar14=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar13||=[];_append(avar13,it)
 break FAIL if r==FAIL
end;@input=avar14
avar13 )});next FAIL if it==FAIL;it)
a },proc{avar15 = ([])
while true
avar16=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar15||=[];_append(avar15,it)
 break FAIL if r==FAIL
end;@input=avar16
avar15 }));return FAIL if it==FAIL;it) 
end
def arg() 
ary=nil
 (it=(_or(proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar17 = ([])
while true
avar18=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar17||=[];_append(avar17,it)
 break FAIL if r==FAIL
end;@input=avar18
avar17 )});next FAIL if it==FAIL;it)
Args[ {:ary=>ary }] },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(transfn());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)});next FAIL if it==FAIL;it)
Exp[ {:ary=>ary }] },proc{(it=(clas(ExpKey));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary||=[];_append(ary,it)});next FAIL if it==FAIL;it)
ExpKey[ {:ary=>ary }] },proc{(it=(anything());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it) 
end

end

class AmethystOptimizer2 < AmethystOptimizer
def trans() 
ary=nil
 (it=(_or(proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar1 = ([])
while true
avar2=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 avar1||=[];_append(avar1,it)
 break FAIL if r==FAIL
end;@input=avar2
avar1 )});next FAIL if it==FAIL;it)
ary=ary.map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten
(it=(_or(proc{(it=((ary.size==1)||FAIL);next FAIL if it==FAIL;it)
ary[0] },proc{Or[ {:ary=>ary }]}));next FAIL if it==FAIL;it) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{ary = (avar3 = ([])
while true
avar4=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar3||=[];_append(avar3,it)
 break FAIL if r==FAIL
end;@input=avar4
avar3 )});next FAIL if it==FAIL;it)
ary=ary.map{|a| (a.is_a?(And)) ? a.ary : a}.flatten
(it=(_or(proc{(it=((ary.size==1)||FAIL);next FAIL if it==FAIL;it)
ary[0] },proc{And[ {:ary=>ary }]}));next FAIL if it==FAIL;it) },proc{super}));return FAIL if it==FAIL;it) 
end

end

def shadow(body,args)
	puts args.inspect
	args.each{|arg|arg=arg[0]; a=autovar; body=And[Set[{:name=>a,:expr=>Act[arg]}],body,Set[{:name=>arg,:expr=>Act[a]}]]}
	body
end

class Inliner < AmethystOptimizer
def inline(rule,grammar) 
name=nil;args=nil;locals=nil;body=nil
 it = (rule)
(it=(_pass(it){(it=(clas(Rule));return FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))
args = (_key(:args))
locals = (_key(:locals))
body = (_key(:body)) });return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
@result=autovar;@name=name;@args=args;@body=shadow(Set[{:name=>@result,:expr=>body}],locals) ;puts args.inspect
it = (grammar)
(it=(_pass(it){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{(it=(itrans());return FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)  
end
def trans() 
name=nil;args=nil
 (it=(_or(proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{name = ((it=(anything());next FAIL if it==FAIL;it))
(it=((name==@name)||FAIL);next FAIL if it==FAIL;it)
args = (avar1 = ([])
while true
avar2=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar1||=[];_append(avar1,it)
 break FAIL if r==FAIL
end;@input=avar2
avar1 ) });next FAIL if it==FAIL;it)
body=@body; args.each_index{|i| body=And[Set[{:name=>@args[i][0],:expr=>Act[args[i]]}],body] } ; And[shadow(body,@args),Act[@result]] },proc{super}));return FAIL if it==FAIL;it) 
end
def test() 
g=nil
 g = ((it=(anything());return FAIL if it==FAIL;it))
(it=(inline(Rule[{:name=>"a",:locals=>["a","b"],:args=>["x"],:body=>And[Act["aueo"],Set[{:name=>autovar,:expr=>Act["a"]}],Many[{:ary=>[Act["aueo"]],:o=>autovar}]]}],g));return FAIL if it==FAIL;it)  
end
def inlineit() 
name=nil;grammar=nil;rule=nil
 name = ((it=(anything());return FAIL if it==FAIL;it))
grammar = ((it=(anything());return FAIL if it==FAIL;it))
rule = ((it=(getrule(name,grammar));return FAIL if it==FAIL;it))
(it=(inline(rule,grammar));return FAIL if it==FAIL;it)  
end
def getrule(name,grammar) 
n=nil;rule=nil
 it = (grammar)
(it=(_pass(it){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{(it=(clas(Grammar));return FAIL if it==FAIL;it)
(it=(_enter{it = (_key(:rules))
(it=(_pass(it){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{avar3 = ([])
while true
avar4=@input;r=it=((it=(clas(Rule));break FAIL if it==FAIL;it)
(it=(_enter{n = (_key(:name))
(it=((n==name)||FAIL);break FAIL if it==FAIL;it)
rule = (_key(:this)) });break FAIL if it==FAIL;it) )
 avar3||=[];_append(avar3,it)
 break FAIL if r==FAIL
end;@input=avar4
avar3 });return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
rule  
end

end

class AmethystTranslator < Amethyst
def itrans() 
r=nil
 r = (avar1 = ([])
while true
avar2=@input;r=it=((it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(trans());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 avar1||=[];_append(avar1,it)
 break FAIL if r==FAIL
end;@input=avar2
avar1 )
r*""  
end
def trans() 
name=nil;parent=nil;body=nil;argss=nil;expr=nil;ors=nil;t=nil;c=nil;o=nil;vars=nil;klas=nil;to=nil;a=nil
 (it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('return',proc{name = (_key(:name))
parent = (_key(:parent))
it = (_key(:rules))
(it=(_pass(it){body = ((it=(transs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
"class #{name} < #{parent}\n#{body}\nend\n" },proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))
it = (_key(:locals))
@locals=it
it = (_key(:args))
(it=(_pass(it){argss = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
it = (_key(:body))
(it=(_pass(it){body = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
"def #{name}(#{argss}) \n#{@locals.map{|l|l+"=nil"}*";"}\n #{body} \nend\n" },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{expr = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
(it=(failwrap("_enter{#{expr}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next', proc{ors = (avar3 = ([])
while true
avar4=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 avar3||=[];_append(avar3,it)
 break FAIL if r==FAIL
end;@input=avar4
avar3 )}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(failwrap("_or(#{ors*","})"));next FAIL if it==FAIL;it) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{t = (avar5 = ([])
while true
avar6=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar5||=[];_append(avar5,it)
 break FAIL if r==FAIL
end;@input=avar6
avar5 )});next FAIL if it==FAIL;it)
"#{t*"\n"} " },proc{(it=(clas(Not));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next',proc{t = ((it=(trans());next FAIL if it==FAIL;it))}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(failwrap("_not{#{t}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Pred));next FAIL if it==FAIL;it)
(it=(_enter{t = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
(it=(failwrap("(#{t})||FAIL"));next FAIL if it==FAIL;it) },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{t = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
t },proc{(it=(clas(Lookahead));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next',proc{t = ((it=(trans());next FAIL if it==FAIL;it))}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(failwrap("_lookahead{#{t}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Comment));next FAIL if it==FAIL;it)
(it=(_enter{c = ((it=(anything());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
"" },proc{(it=(clas(Many));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('break', proc{t = ((it=(trans());next FAIL if it==FAIL;it))} ));next FAIL if it==FAIL;it)
o = (_key(:o)) });next FAIL if it==FAIL;it)
"while true\n#{o}=@input;r=#{t}\n break FAIL if r==FAIL\nend;@input=#{o}" },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{name = ((it=(anything());next FAIL if it==FAIL;it))
argss = ((it=(args());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
(it=(failwrap("#{name}(#{argss})"));next FAIL if it==FAIL;it) },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))
it = (_key(:expr))
(it=(_pass(it){expr = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
"#{name.to_s} = (#{expr})" },proc{(it=(clas(Append));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))
it = (_key(:expr))
(it=(_pass(it){expr = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
"it=(#{expr})\n #{name}||=[];_append(#{name},it)" },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))
it = (_key(:args))
(it=(_pass(it){argss = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
vars = (_key(:vars)) });next FAIL if it==FAIL;it)
"#{name}[#{argss} {#{vars.map{|l| ":#{l}=>#{l}"}*","} }]" },proc{(it=(clas(Foreign));next FAIL if it==FAIL;it)
(it=(_enter{klas = (_key(:klas))
it = (_key(:rule))
(it=(_pass(it){(it=(rule());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it = (_key(:args))
(it=(_pass(it){argss = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
(it=(failwrap("_foreign(#{klas}).#{rule}(#{argss})"));next FAIL if it==FAIL;it) },proc{(it=(clas(Key));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))});next FAIL if it==FAIL;it)
"_key(:#{name})" },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{it = (_key(:to))
(it=(_pass(it){to = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
(it=(failwrap("_pass(it){#{to}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Shadow));next FAIL if it==FAIL;it)
(it=(_enter{name = (_key(:name))
it = (_key(:expr))
(it=(_pass(it){expr = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
a = (_key(:a)) });next FAIL if it==FAIL;it)
"#{a}=#{name} ;it=(#{expr});#{name}=#{a};it" }));return FAIL if it==FAIL;it) 
end
def transfn() 
t=nil
 t = ((it=(trans());return FAIL if it==FAIL;it))
"proc{#{t}}"   
end
def transs() 
t=nil
 (it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{t = (avar7 = ([])
while true
avar8=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 avar7||=[];_append(avar7,it)
 break FAIL if r==FAIL
end;@input=avar8
avar7 )});return FAIL if it==FAIL;it)
t  
end
def args() 
a=nil
 (it=(_or(proc{(it=(clas(Array));next FAIL if it==FAIL;it)
(it=(_enter{a = (avar9 = ([])
while true
avar10=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar9||=[];_append(avar9,it)
 break FAIL if r==FAIL
end;@input=avar10
avar9 )});next FAIL if it==FAIL;it)
a*"," },proc{a = (avar11 = ([])
while true
avar12=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar11||=[];_append(avar11,it)
 break FAIL if r==FAIL
end;@input=avar12
avar11 )
a*"," }));return FAIL if it==FAIL;it) 
end
def arg() 
a=nil;t=nil
 (it=(_or(proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{a = (avar13 = ([])
while true
avar14=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 avar13||=[];_append(avar13,it)
 break FAIL if r==FAIL
end;@input=avar14
avar13 )});next FAIL if it==FAIL;it)
a*"" },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
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

