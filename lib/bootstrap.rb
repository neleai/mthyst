class Amethyst < AmethystCore
def _() 

 (it=space();return FAIL if it==FAIL;it) 
 end
def _dot_() 

 (it=anything();return FAIL if it==FAIL;it) 
 end
def regch(regex) 
c=nil
 c = ((it=char();return FAIL if it==FAIL;it))
(it=(Regexp.new("[#{regex}]").match(c))||FAIL;return FAIL if it==FAIL;it)
 c  
 end
def eof() 

 (it=_not{(it=_dot_();next FAIL if it==FAIL;it)};return FAIL if it==FAIL;it) 
 end
def empty() 

  nil 
 end
def char() 
c=nil
 c = ((it=_dot_();return FAIL if it==FAIL;it))
(it=(c.is_a? String )||FAIL;return FAIL if it==FAIL;it)
 c  
 end
def endline() 

 (it=_or(proc{(it=seq("\r\n");next FAIL if it==FAIL;it)},proc{(it=seq("\r");next FAIL if it==FAIL;it)},proc{(it=seq("\n");next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) 
 end
def space() 

 (it=regch("\s\t\r\n\f");return FAIL if it==FAIL;it) 
 end
def spaces() 

 _many{(it=space();next FAIL if it==FAIL;it)} 
 end
def _() 

 (it=space();return FAIL if it==FAIL;it) 
 end
def digit() 

 (it=regch("0-9");return FAIL if it==FAIL;it) 
 end
def lower() 

 (it=regch("a-z");return FAIL if it==FAIL;it) 
 end
def upper() 

 (it=regch("A-Z");return FAIL if it==FAIL;it) 
 end
def letter() 

 (it=_or(proc{(it=lower();next FAIL if it==FAIL;it)},proc{(it=upper();next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) 
 end
def letterOrDigit() 

 (it=_or(proc{(it=letter();next FAIL if it==FAIL;it)},proc{(it=digit();next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) 
 end
def alpha() 

 (it=letter();return FAIL if it==FAIL;it) 
 end
def alnum() 

 (it=letterOrDigit();return FAIL if it==FAIL;it) 
 end
def xdigit() 

 (it=regch("0-9a-fA-F");return FAIL if it==FAIL;it) 
 end
def word() 

 (it=_or(proc{(it=alpha();next FAIL if it==FAIL;it)},proc{(it=seq("_");next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) 
 end
def listOf(rule,delim) 
f=nil
 (it=_or(proc{it=(it=apply(rule);next FAIL if it==FAIL;it)
 f||=[];_append(f,it)
it=_many{(it=apply(delim);next FAIL if it==FAIL;it)
(it=apply(rule);next FAIL if it==FAIL;it) }
 f||=[];_append(f,it)
 f },proc{(it=empty();next FAIL if it==FAIL;it)
 [] });return FAIL if it==FAIL;it) 
 end
def exactly(wanted) 
got=nil
 got = ((it=anything();return FAIL if it==FAIL;it))
(it=(wanted == got)||FAIL;return FAIL if it==FAIL;it)
 wanted  
 end
def clas(cls) 

 (it=(@input.item.is_a?(cls))||FAIL;return FAIL if it==FAIL;it) 
 end
def is_a(cls) 

 (it=(@input.src.is_a?(cls))||FAIL;return FAIL if it==FAIL;it) 
 end
def token(s) 

 (it=spaces();return FAIL if it==FAIL;it)
(it=seq(s);return FAIL if it==FAIL;it)  
 end
def many1(s) 
a=nil
 it=(it=apply(s);return FAIL if it==FAIL;it)
 a||=[];_append(a,it)
it=_many{(it=apply(s);next FAIL if it==FAIL;it)}
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
    :Act,
    :Pred,
    :Lookahead,
    :Not,
    :Seq,
    :Or,
    :And,
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
a=nil
 a = (_many{(it=_or(proc{(it=_not{(it=seq("amethyst");next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
(it=_dot_();next FAIL if it==FAIL;it) },proc{(it=grammar();next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)})
 a  
 end
def grammar() 
name=nil;parent=nil;rules=nil
 (it=token("amethyst");return FAIL if it==FAIL;it)
name = ((it=name();return FAIL if it==FAIL;it))
(it=_or(proc{(it=token("<");next FAIL if it==FAIL;it)
parent = ((it=name();next FAIL if it==FAIL;it)) },proc{(it=empty();next FAIL if it==FAIL;it)
parent="Amethyst" });return FAIL if it==FAIL;it)
(it=token("{");return FAIL if it==FAIL;it)
rules = (_many{(it=rule();next FAIL if it==FAIL;it)})
(it=token("}");return FAIL if it==FAIL;it)
Grammar[ {:name=>name,:parent=>parent,:rules=>rules }]  
 end
def rule() 
name=nil;args=nil;body=nil
 name = ((it=name();return FAIL if it==FAIL;it))
args = ((it=ruleargs();return FAIL if it==FAIL;it))
(it=token("=");return FAIL if it==FAIL;it)
body = ((it=expression();return FAIL if it==FAIL;it))
Rule[ {:name=>name,:args=>args,:body=>body }]  
 end
def expression() 

 (it=choice();return FAIL if it==FAIL;it) 
 end
def choice() 
ary=nil
 ary = ((it=listOf('sequence',proc{(it=token("|");return FAIL if it==FAIL;it)});return FAIL if it==FAIL;it))
Or[ {:ary=>ary }]  
 end
def sequence() 
ary=nil
 ary = (_many{(it=nr();next FAIL if it==FAIL;it)
(it=prefixed();next FAIL if it==FAIL;it) })
And[ {:ary=>ary }]  
 end
def prefixed() 
m=nil;expr=nil;from=nil;to=nil
 (it=_or(proc{(it=token("~");next FAIL if it==FAIL;it)
m = ((it=modifier();next FAIL if it==FAIL;it))
 Not[m] },proc{(it=token("&");next FAIL if it==FAIL;it)
expr = ((it=inlineHostExpr();next FAIL if it==FAIL;it))
 Pred[expr] },proc{(it=token("&");next FAIL if it==FAIL;it)
(it=_not{expr = ((it=inlineHostExpr();next FAIL if it==FAIL;it))};next FAIL if it==FAIL;it)
m = ((it=modifier();next FAIL if it==FAIL;it))
 Lookahead[m] },proc{from = ((it=modifier();next FAIL if it==FAIL;it))
(it=token(">>");next FAIL if it==FAIL;it)
to = ((it=modifier();next FAIL if it==FAIL;it))
And[Set[{:name=>"it",:expr=>from}] ,Pass[{:to=>to}]] },proc{(it=modifier();next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) 
 end
def modifier() 
t=nil;c=nil
 (it=_or(proc{t = ((it=term();next FAIL if it==FAIL;it))
t = ((it=optIter(t);next FAIL if it==FAIL;it))
(it=_or(proc{(it=_not{(it=space();next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
(it=binding(t);next FAIL if it==FAIL;it) },proc{(it=empty();next FAIL if it==FAIL;it)
t });next FAIL if it==FAIL;it) },proc{(it=binding(Apply["anything"]);next FAIL if it==FAIL;it)},proc{(it=token("#");next FAIL if it==FAIL;it)
c = (_many{(it=_not{(it=endline();next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
(it=_dot_();next FAIL if it==FAIL;it) })
 Comment[c] });return FAIL if it==FAIL;it) 
 end
def optIter(t) 

 (it=_or(proc{(it=token("*");next FAIL if it==FAIL;it)
 Many[t] },proc{(it=token("+");next FAIL if it==FAIL;it)
 a=autovar; And[Act[Args[a+"=[]"]], Append[{:name=>a,:expr=>t}], Many[Append[{:name=>a,:expr=>t}]],Act[Args[a]]] },proc{(it=token("?");next FAIL if it==FAIL;it)
 Or[t,Apply["empty"]] },proc{(it=empty();next FAIL if it==FAIL;it)
 t });return FAIL if it==FAIL;it) 
 end
def binding(exp) 
expr=nil;name=nil;e=nil
 (it=_or(proc{expr = (exp)
(it=token(":");next FAIL if it==FAIL;it)
name = ((it=name();next FAIL if it==FAIL;it))
(it=_or(proc{(it=seq("[]");next FAIL if it==FAIL;it)
Append[ {:expr=>expr,:name=>name,:e=>e }] },proc{(it=empty();next FAIL if it==FAIL;it)
Set[ {:expr=>expr,:name=>name,:e=>e }] });next FAIL if it==FAIL;it) },proc{(it=token(":");next FAIL if it==FAIL;it)
e = ((it=inlineHostExpr();next FAIL if it==FAIL;it))
 And[ Set[{:name=>"it", :expr=>exp}] , Act[e] ] });return FAIL if it==FAIL;it) 
 end
def term() 
cls=nil;expr=nil;x=nil;s=nil;it=nil;avar2=nil
 (it=_or(proc{cls = ((it=_or(proc{(it=className();next FAIL if it==FAIL;it)},proc{(it=token("");next FAIL if it==FAIL;it)
"Object" });next FAIL if it==FAIL;it))
(it=seq("[");next FAIL if it==FAIL;it)
expr = ((it=expression();next FAIL if it==FAIL;it))
(it=token("]");next FAIL if it==FAIL;it)
 And[Apply["clas",cls], Enter[expr]] },proc{cls = ((it=className();next FAIL if it==FAIL;it))
 Apply["is_a",cls] },proc{(it=token("nested");next FAIL if it==FAIL;it)
(it=seq("(");next FAIL if it==FAIL;it)
expr = ((it=expression();next FAIL if it==FAIL;it))
(it=token(")");next FAIL if it==FAIL;it)
 Nested[expr] },proc{(it=application();next FAIL if it==FAIL;it)},proc{(it=key();next FAIL if it==FAIL;it)},proc{x = ((it=_or(proc{(it=token("->");next FAIL if it==FAIL;it)
(it=atomicHostExpr();next FAIL if it==FAIL;it) },proc{(it=token("");next FAIL if it==FAIL;it)
(it=inlineHostExpr();next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it))
  Act[x] },proc{(it=token("\"");next FAIL if it==FAIL;it)
s = (_many{(it=_not{(it=seq("\"");next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
(it=eChar();next FAIL if it==FAIL;it) })
(it=seq("\"");next FAIL if it==FAIL;it)
 Apply["token" ,quote(s)] },proc{(it=token("'");next FAIL if it==FAIL;it)
s = (_many{(it=_not{(it=seq("\'");next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
(it=eChar();next FAIL if it==FAIL;it) })
(it=seq("\'");next FAIL if it==FAIL;it)
 Apply["seq",quote(s)] },proc{it = ((it=number();next FAIL if it==FAIL;it))
Apply["exactly",it] },proc{(it=token("<");next FAIL if it==FAIL;it)
x = (avar2=[]
it=(it=_not{(it=token(">");next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
(it=eChar();next FAIL if it==FAIL;it) 
 avar2||=[];_append(avar2,it)
_many{it=(it=_not{(it=token(">");next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
(it=eChar();next FAIL if it==FAIL;it) 
 avar2||=[];_append(avar2,it)}
avar2 )
(it=token(">");next FAIL if it==FAIL;it)
  Apply["regch",quote(x)] },proc{(it=token("(");next FAIL if it==FAIL;it)
x = ((it=expression();next FAIL if it==FAIL;it))
(it=token(")");next FAIL if it==FAIL;it)
  x });return FAIL if it==FAIL;it) 
 end
def application() 
klas=nil;rule=nil;arg=nil
 (it=_or(proc{klas = ((it=name();next FAIL if it==FAIL;it))
(it=seq("::");next FAIL if it==FAIL;it)
rule = ((it=name();next FAIL if it==FAIL;it))
arg = ((it=argsOpt('(',')');next FAIL if it==FAIL;it))
Foreign[ {:klas=>klas,:rule=>rule,:arg=>arg }] },proc{rule = ((it=name();next FAIL if it==FAIL;it))
arg = ((it=argsOpt('(',')');next FAIL if it==FAIL;it))
 Apply[rule,arg] });return FAIL if it==FAIL;it) 
 end
def key() 
name=nil;args=nil;expr=nil
 (it=_or(proc{(it=token("@");next FAIL if it==FAIL;it)
name = ((it=className();next FAIL if it==FAIL;it))
args = ((it=argsOpt('[',']');next FAIL if it==FAIL;it))
Resul[ {:name=>name,:args=>args,:expr=>expr }] },proc{(it=token("@");next FAIL if it==FAIL;it)
name = ((it=name();next FAIL if it==FAIL;it))
expr = ((it=_or(proc{(it=token("=>");next FAIL if it==FAIL;it)
(it=term();next FAIL if it==FAIL;it) },proc{(it=empty();next FAIL if it==FAIL;it)
Apply["anything"] });next FAIL if it==FAIL;it))
Key[ {:name=>name,:args=>args,:expr=>expr }] });return FAIL if it==FAIL;it) 
 end
def eChar() 
c=nil
 (it=_or(proc{(it=seq("\\");next FAIL if it==FAIL;it)
c = ((it=char();next FAIL if it==FAIL;it))
 "\\#{c}" },proc{(it=_args('#{','}');next FAIL if it==FAIL;it)},proc{(it=char();next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) 
 end
def ruleargs() 

 (it=argsOpt('(',')');return FAIL if it==FAIL;it) 
 end
def nr() 

 (it=_not{(it=name();next FAIL if it==FAIL;it)
(it=ruleargs();next FAIL if it==FAIL;it)
(it=token("=");next FAIL if it==FAIL;it) };return FAIL if it==FAIL;it) 
 end
def argsOpt(o,c) 

 (it=_or(proc{(it=args(o,c);next FAIL if it==FAIL;it)},proc{(it=empty();next FAIL if it==FAIL;it)
 Args[""] });return FAIL if it==FAIL;it) 
 end
def args(o,c) 
ary=nil
 ary = ((it=__args(o,c);return FAIL if it==FAIL;it))
ary= ary.flatten
Args[ {:ary=>ary }]  
 end
def _args(o,c) 
r=nil
 r = ((it=__args(o,c);return FAIL if it==FAIL;it))
 [o]+r+[c]  
 end
def __args(o,c) 
r=nil
 (it=seq(o);return FAIL if it==FAIL;it)
r = (_many{(it=rubyarg();next FAIL if it==FAIL;it)})
(it=seq(c);return FAIL if it==FAIL;it)
 r  
 end
def rubyarg() 
e=nil;s=nil;k=nil
 (it=_or(proc{(it=seq("`");next FAIL if it==FAIL;it)
e = ((it=expression();next FAIL if it==FAIL;it))
(it=seq("`");next FAIL if it==FAIL;it)
 Exp[e] },proc{(it=_args('(',')');next FAIL if it==FAIL;it)},proc{(it=_args('[',']');next FAIL if it==FAIL;it)},proc{(it=_args('{','}');next FAIL if it==FAIL;it)},proc{(it=seq("\"");next FAIL if it==FAIL;it)
s = (_many{(it=_not{(it=seq("\"");next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
(it=eChar();next FAIL if it==FAIL;it) })
(it=seq("\"");next FAIL if it==FAIL;it)
 ['"']+ s+['"'] },proc{(it=seq("\'");next FAIL if it==FAIL;it)
s = (_many{(it=_not{(it=seq("\'");next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
(it=eChar();next FAIL if it==FAIL;it) })
(it=seq("\'");next FAIL if it==FAIL;it)
 ['\'']+s+['\''] },proc{(it=token("@@");next FAIL if it==FAIL;it)
 "@" },proc{k = ((it=key();next FAIL if it==FAIL;it))
 ExpKey[k]  },proc{(it=regch("^`{}()'\"\\[\\]");next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) 
 end
def nameFirst() 

 (it=_or(proc{(it=regch("_$.^");next FAIL if it==FAIL;it)},proc{(it=letter();next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) 
 end
def nameRest() 

 (it=_or(proc{(it=nameFirst();next FAIL if it==FAIL;it)},proc{(it=digit();next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) 
 end
def className() 
s=nil
 (it=spaces();return FAIL if it==FAIL;it)
it=(it=upper();return FAIL if it==FAIL;it)
 s||=[];_append(s,it)
it=_many{(it=nameRest();next FAIL if it==FAIL;it)}
 s||=[];_append(s,it)
 leterize(s*"")  
 end
def name() 
s=nil
 (it=spaces();return FAIL if it==FAIL;it)
it=(it=nameFirst();return FAIL if it==FAIL;it)
 s||=[];_append(s,it)
it=_many{(it=nameRest();next FAIL if it==FAIL;it)}
 s||=[];_append(s,it)
 leterize(s*"")  
 end
def inlineHostExpr() 

 (it=args('{','}');return FAIL if it==FAIL;it) 
 end
def number() 
avar4=nil
 avar4=[]
it=(it=regch("0-9");return FAIL if it==FAIL;it)
 avar4||=[];_append(avar4,it)
_many{it=(it=regch("0-9");next FAIL if it==FAIL;it)
 avar4||=[];_append(avar4,it)}
avar4  
 end
def atomicHostExpr() 
s=nil
 s = (_many{(it=_not{(it=endline();next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
(it=_dot_();next FAIL if it==FAIL;it) })
 Args[s*""]  
 end

end

class AmethystOptimizer < Amethyst
def itrans() 
r=nil
 (it=clas(Object);return FAIL if it==FAIL;it)
(it=_enter{r = (_many{(it=_or(proc{(it=char();next FAIL if it==FAIL;it)},proc{(it=trans();next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)})};return FAIL if it==FAIL;it)
 r  
 end
def trans() 
name=nil;parent=nil;rules=nil;args=nil;body=nil;ary=nil;expr=nil;klas=nil;from=nil;to=nil
 (it=_or(proc{(it=clas(Grammar);next FAIL if it==FAIL;it)
(it=_enter{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
parent = (_key(:parent){(it=anything();next FAIL if it==FAIL;it)})
rules = (_key(:rules){(it=transs();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
Grammar[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Rule);next FAIL if it==FAIL;it)
(it=_enter{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
args = (_key(:args){(it=trans();next FAIL if it==FAIL;it)})
body = (_key(:body){(it=trans();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
Rule[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Enter);next FAIL if it==FAIL;it)
(it=_enter{it=(it=trans();next FAIL if it==FAIL;it)
 ary||=[];_append(ary,it)};next FAIL if it==FAIL;it)
Enter[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Or);next FAIL if it==FAIL;it)
(it=_enter{ary = (_many{(it=transfn();next FAIL if it==FAIL;it)})};next FAIL if it==FAIL;it)
Or[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(And);next FAIL if it==FAIL;it)
(it=_enter{ary = (_many{(it=trans();next FAIL if it==FAIL;it)})};next FAIL if it==FAIL;it)
And[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Not);next FAIL if it==FAIL;it)
(it=_enter{it=(it=trans();next FAIL if it==FAIL;it)
 ary||=[];_append(ary,it)};next FAIL if it==FAIL;it)
Not[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Pred);next FAIL if it==FAIL;it)
(it=_enter{it=(it=trans();next FAIL if it==FAIL;it)
 ary||=[];_append(ary,it)};next FAIL if it==FAIL;it)
Pred[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Lookahead);next FAIL if it==FAIL;it)
(it=_enter{ary = ((it=trans();next FAIL if it==FAIL;it))};next FAIL if it==FAIL;it)
Lookahead[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Comment);next FAIL if it==FAIL;it)
(it=_enter{ary = (_many{(it=anything();next FAIL if it==FAIL;it)})};next FAIL if it==FAIL;it)
Comment[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Many);next FAIL if it==FAIL;it)
(it=_enter{it=(it=trans();next FAIL if it==FAIL;it)
 ary||=[];_append(ary,it)};next FAIL if it==FAIL;it)
Many[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Apply);next FAIL if it==FAIL;it)
(it=_enter{it=(it=anything();next FAIL if it==FAIL;it)
 ary||=[];_append(ary,it)
it=_many{(it=arg();next FAIL if it==FAIL;it)}
 ary||=[];_append(ary,it) };next FAIL if it==FAIL;it)
Apply[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Set);next FAIL if it==FAIL;it)
(it=_enter{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=trans();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
Set[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Append);next FAIL if it==FAIL;it)
(it=_enter{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=trans();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
Append[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Act);next FAIL if it==FAIL;it)
(it=_enter{it=(it=trans();next FAIL if it==FAIL;it)
 ary||=[];_append(ary,it)};next FAIL if it==FAIL;it)
Act[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Resul);next FAIL if it==FAIL;it)
(it=_enter{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
args = (_key(:args){(it=arg();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
Resul[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Foreign);next FAIL if it==FAIL;it)
(it=_enter{klas = (_key(:klas){(it=anything();next FAIL if it==FAIL;it)})
_key(:rule){(it=rule();next FAIL if it==FAIL;it)}
args = (_key(:args){(it=arg();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
Foreign[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Args);next FAIL if it==FAIL;it)
(it=_enter{ary = (_many{(it=arg();next FAIL if it==FAIL;it)})};next FAIL if it==FAIL;it)
Args[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Key);next FAIL if it==FAIL;it)
(it=_enter{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=trans();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
Key[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] },proc{(it=clas(Pass);next FAIL if it==FAIL;it)
(it=_enter{from = (_key(:from){(it=trans();next FAIL if it==FAIL;it)})
to = (_key(:to){(it=trans();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
Pass[ {:name=>name,:parent=>parent,:rules=>rules,:args=>args,:body=>body,:ary=>ary,:expr=>expr,:klas=>klas,:from=>from,:to=>to }] });return FAIL if it==FAIL;it) 
 end
def transfn() 

 (it=trans();return FAIL if it==FAIL;it) 
 end
def transs() 
t=nil
 (it=clas(Object);return FAIL if it==FAIL;it)
(it=_enter{t = (_many{(it=trans();next FAIL if it==FAIL;it)})};return FAIL if it==FAIL;it)
 t  
 end
def arg() 
ary=nil
 (it=_or(proc{(it=clas(Args);next FAIL if it==FAIL;it)
(it=_enter{ary = (_many{(it=arg();next FAIL if it==FAIL;it)})};next FAIL if it==FAIL;it)
Args[ {:ary=>ary }] },proc{(it=clas(Exp);next FAIL if it==FAIL;it)
(it=_enter{it=(it=transfn();next FAIL if it==FAIL;it)
 ary||=[];_append(ary,it)};next FAIL if it==FAIL;it)
Exp[ {:ary=>ary }] },proc{(it=clas(ExpKey);next FAIL if it==FAIL;it)
(it=_enter{it=(it=trans();next FAIL if it==FAIL;it)
 ary||=[];_append(ary,it)};next FAIL if it==FAIL;it)
ExpKey[ {:ary=>ary }] },proc{(it=anything();next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) 
 end

end

class AmethystOptimizer2 < AmethystOptimizer
def trans() 
name=nil;args=nil;body=nil;locals=nil;expr=nil;ary=nil
 (it=_or(proc{(it=clas(Rule);next FAIL if it==FAIL;it)
(it=_enter{@locals=[]
name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
args = (_key(:args){(it=trans();next FAIL if it==FAIL;it)})
body = (_key(:body){(it=trans();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
locals = (@locals.uniq)
Rule[ {:name=>name,:args=>args,:body=>body,:locals=>locals,:expr=>expr,:ary=>ary }] },proc{(it=clas(Set);next FAIL if it==FAIL;it)
(it=_enter{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=trans();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
@locals<<name
Set[ {:name=>name,:args=>args,:body=>body,:locals=>locals,:expr=>expr,:ary=>ary }] },proc{(it=clas(Append);next FAIL if it==FAIL;it)
(it=_enter{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=trans();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
@locals<<name
Append[ {:name=>name,:args=>args,:body=>body,:locals=>locals,:expr=>expr,:ary=>ary }] },proc{(it=clas(Or);next FAIL if it==FAIL;it)
(it=_enter{ary = (_many{(it=transfn();next FAIL if it==FAIL;it)})};next FAIL if it==FAIL;it)
ary=ary.map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten
(it=_or(proc{(it=(ary.size==1)||FAIL;next FAIL if it==FAIL;it)
ary[0] },proc{Or[ {:name=>name,:args=>args,:body=>body,:locals=>locals,:expr=>expr,:ary=>ary }]});next FAIL if it==FAIL;it) },proc{(it=clas(And);next FAIL if it==FAIL;it)
(it=_enter{ary = (_many{(it=trans();next FAIL if it==FAIL;it)})};next FAIL if it==FAIL;it)
ary=ary.map{|a| (a.is_a?(And)) ? a.ary : a}.flatten
(it=_or(proc{(it=(ary.size==1)||FAIL;next FAIL if it==FAIL;it)
ary[0] },proc{And[ {:name=>name,:args=>args,:body=>body,:locals=>locals,:expr=>expr,:ary=>ary }]});next FAIL if it==FAIL;it) },proc{super});return FAIL if it==FAIL;it) 
 end

end

class AmethystTranslator < Amethyst
def itrans() 
r=nil
 (it=clas(Object);return FAIL if it==FAIL;it)
(it=_enter{r = (_many{(it=_or(proc{(it=char();next FAIL if it==FAIL;it)},proc{(it=trans();next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)})};return FAIL if it==FAIL;it)
 r*""  
 end
def trans() 
name=nil;parent=nil;body=nil;it=nil;args=nil;expr=nil;ors=nil;t=nil;c=nil;klas=nil;a=nil;to=nil
 (it=_or(proc{(it=clas(Grammar);next FAIL if it==FAIL;it)
(it=_enter{(it=rw('return',proc{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
parent = (_key(:parent){(it=anything();next FAIL if it==FAIL;it)})
body = (_key(:rules){(it=transs();next FAIL if it==FAIL;it)}) });next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
 "class #{name} < #{parent}\n#{body}\nend\n" },proc{(it=clas(Rule);next FAIL if it==FAIL;it)
(it=_enter{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
it = (_key(:locals){(it=anything();next FAIL if it==FAIL;it)})
@locals=it
args = (_key(:args){(it=trans();next FAIL if it==FAIL;it)})
body = (_key(:body){(it=trans();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
 "def #{name}(#{args}) \n#{@locals.map{|l|l+"=nil"}*";"}\n #{body} \n end\n" },proc{(it=clas(Enter);next FAIL if it==FAIL;it)
(it=_enter{expr = ((it=trans();next FAIL if it==FAIL;it))};next FAIL if it==FAIL;it)
(it=failwrap("_enter{#{expr}}");next FAIL if it==FAIL;it) },proc{(it=clas(Or);next FAIL if it==FAIL;it)
(it=_enter{(it=rw('next', proc{ors = (_many{(it=transfn();next FAIL if it==FAIL;it)})});next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
(it=failwrap("_or(#{ors*","})");next FAIL if it==FAIL;it) },proc{(it=clas(And);next FAIL if it==FAIL;it)
(it=_enter{t = (_many{(it=trans();next FAIL if it==FAIL;it)})};next FAIL if it==FAIL;it)
 "#{t*"\n"} " },proc{(it=clas(Not);next FAIL if it==FAIL;it)
(it=_enter{(it=rw('next',proc{t = ((it=trans();next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
(it=failwrap("_not{#{t}}");next FAIL if it==FAIL;it) },proc{(it=clas(Pred);next FAIL if it==FAIL;it)
(it=_enter{t = ((it=trans();next FAIL if it==FAIL;it))};next FAIL if it==FAIL;it)
(it=failwrap("(#{t})||FAIL");next FAIL if it==FAIL;it) },proc{(it=clas(Lookahead);next FAIL if it==FAIL;it)
(it=_enter{(it=rw('next',proc{t = ((it=trans();next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
(it=failwrap("_lookahead{#{t}}");next FAIL if it==FAIL;it) },proc{(it=clas(Comment);next FAIL if it==FAIL;it)
(it=_enter{c = ((it=anything();next FAIL if it==FAIL;it))};next FAIL if it==FAIL;it)
 "" },proc{(it=clas(Many);next FAIL if it==FAIL;it)
(it=_enter{(it=rw('next', proc{t = ((it=trans();next FAIL if it==FAIL;it))} );next FAIL if it==FAIL;it)};next FAIL if it==FAIL;it)
 "_many{#{t}}" },proc{(it=clas(Apply);next FAIL if it==FAIL;it)
(it=_enter{name = ((it=anything();next FAIL if it==FAIL;it))
args = (_many{(it=arg();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
(it=failwrap("#{name}(#{args})");next FAIL if it==FAIL;it) },proc{(it=clas(Set);next FAIL if it==FAIL;it)
(it=_enter{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=trans();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
 "#{name} = (#{expr})" },proc{(it=clas(Append);next FAIL if it==FAIL;it)
(it=_enter{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=trans();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
 "it=#{expr}\n #{name}||=[];_append(#{name},it)" },proc{(it=clas(Act);next FAIL if it==FAIL;it)
(it=_enter{t = ((it=trans();next FAIL if it==FAIL;it))};next FAIL if it==FAIL;it)
 t },proc{(it=clas(Resul);next FAIL if it==FAIL;it)
(it=_enter{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
args = (_key(:args){(it=arg();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
 "#{name}[#{args} {#{@locals.map{|l| ":#{l}=>#{l}"}*","} }]" },proc{(it=clas(Foreign);next FAIL if it==FAIL;it)
(it=_enter{klas = (_key(:klas){(it=anything();next FAIL if it==FAIL;it)})
_key(:rule){(it=rule();next FAIL if it==FAIL;it)}
args = (_key(:args){(it=arg();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
(it=failwrap("_foreign(#{klas}).#{rule}(#{args})");next FAIL if it==FAIL;it) },proc{(it=clas(Args);next FAIL if it==FAIL;it)
(it=_enter{a = (_many{(it=arg();next FAIL if it==FAIL;it)})};next FAIL if it==FAIL;it)
 a*"" },proc{(it=clas(Key);next FAIL if it==FAIL;it)
(it=_enter{name = (_key(:name){(it=anything();next FAIL if it==FAIL;it)})
expr = (_key(:expr){(it=trans();next FAIL if it==FAIL;it)}) };next FAIL if it==FAIL;it)
 "_key(:#{name}){#{expr}}" },proc{(it=clas(Pass);next FAIL if it==FAIL;it)
(it=_enter{to = (_key(:to){(it=trans();next FAIL if it==FAIL;it)})};next FAIL if it==FAIL;it)
(it=failwrap("_pass(it){#{to}}");next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it) 
 end
def transfn() 
t=nil
 t = ((it=trans();return FAIL if it==FAIL;it))
 "proc{#{t}}"   
 end
def transs() 
t=nil
 (it=clas(Object);return FAIL if it==FAIL;it)
(it=_enter{t = (_many{(it=trans();next FAIL if it==FAIL;it)})};return FAIL if it==FAIL;it)
 t  
 end
def arg() 
a=nil;t=nil
 (it=_or(proc{(it=clas(Args);next FAIL if it==FAIL;it)
(it=_enter{a = (_many{(it=arg();next FAIL if it==FAIL;it)})};next FAIL if it==FAIL;it)
 a },proc{(it=clas(Exp);next FAIL if it==FAIL;it)
(it=_enter{t = ((it=transfn();next FAIL if it==FAIL;it))};next FAIL if it==FAIL;it)
 t },proc{(it=clas(ExpKey);next FAIL if it==FAIL;it)
(it=_enter{t = ((it=trans();next FAIL if it==FAIL;it))};next FAIL if it==FAIL;it)
 t },proc{(it=anything();next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) 
 end
def rw(word,prc) 
x=nil
 rwo=@returnword;@returnword=word
x = ((it=apply(prc);return FAIL if it==FAIL;it))
@returnword=rwo;x  
 end
def failwrap(s) 

   "(it=#{s};#{@returnword} FAIL if it==FAIL;it)"  
 end

end

