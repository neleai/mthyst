class Amethyst < AmethystCore
def _()
bind={}; 
  it=nil

it=space();return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def _false()
bind={}; 
  it=nil

it=exactly(false);return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def _true()
bind={}; 
  it=nil

it=exactly(true);return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def alnum()
bind={}; 
  it=nil

it=letterOrDigit();return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def alpha()
bind={}; 
  it=nil

it=letter();return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def char()
bind={}; 
  it=nil

it=anything();return FAIL if it==FAIL
bind[:c_1] = it
it=(bind[:c_1].is_a? String )||FAIL;return FAIL if it==FAIL
it=bind[:c_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def clas(a0)
bind={}; bind[:cls_1]=a0
  it=nil

it=anything();return FAIL if it==FAIL
bind[:i_1] = it
it=(bind[:i_1].is_a?(bind[:cls_1]))||FAIL;return FAIL if it==FAIL
it=bind[:i_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def digit()
bind={}; 
  it=nil

it=regch(/[0-9]/);return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def empty()
bind={}; 
  it=nil

it=(nil)
bind[:_result_1] = it
it=bind[:_result_1]  
end
def endline()
bind={}; 
  it=nil

it=_or(proc{it=seq("\r\n");next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=seq("\r");next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=seq("\n");next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end
def eof()
bind={}; 
  it=nil

it=_or(proc{it=anything();next FAIL if it==FAIL
@cut=true;it
it=fails();next FAIL if it==FAIL
bind[:_result_1] = it },proc{it=empty();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end
def exactly(a0)
bind={}; bind[:wanted_1]=a0
  it=nil

it=anything();return FAIL if it==FAIL
bind[:got_1] = it
it=(bind[:wanted_1] == bind[:got_1])||FAIL;return FAIL if it==FAIL
it=bind[:wanted_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def fails()
bind={}; 
  it=nil

it=(false)||FAIL;return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def letter()
bind={}; 
  it=nil

it=_or(proc{it=lower();next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=upper();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end
def letterOrDigit()
bind={}; 
  it=nil

it=_or(proc{it=letter();next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=digit();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end
def listOf(a0,a1)
bind={}; bind[:rule_1]=a0;bind[:delim_1]=a1
  it=nil

it=([])
bind[:f_1] = it
it=([])
bind[:autovar_1] = it
it=_or(proc{it=apply(bind[:rule_1]);next FAIL if it==FAIL
bind[:autovar_2] = it
it=(_append(bind[:f_1],bind[:autovar_2]))
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_4]=@input;r=it=apply(bind[:delim_1]);break FAIL if it==FAIL
it=apply(bind[:rule_1]);break FAIL if it==FAIL
bind[:autovar_3] = it
it=(_append(bind[:autovar_1],bind[:autovar_3])) 
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4]
it=bind[:autovar_1]
bind[:autovar_5] = it
it=(_append(bind[:f_1],bind[:autovar_5]))
it=bind[:f_1]
bind[:_result_1] = it },proc{it=empty();next FAIL if it==FAIL
it=([])
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def lower()
bind={}; 
  it=nil

it=regch(/[a-z]/);return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def regch(a0)
bind={}; bind[:regex_1]=a0
  it=nil

it=char();return FAIL if it==FAIL
bind[:c_1] = it
it=(bind[:regex_1].match(bind[:c_1]))||FAIL;return FAIL if it==FAIL
it=bind[:c_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def space()
bind={}; 
  it=nil

it=regch(/[\s\t\r\n\f]/);return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def spaces()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=space();break FAIL if it==FAIL
bind[:autovar_2] = it
it=(_append(bind[:autovar_1],bind[:autovar_2])) 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=bind[:autovar_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def token(a0)
bind={}; bind[:s_1]=a0
  it=nil

it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_1]);return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def upper()
bind={}; 
  it=nil

it=regch(/[A-Z]/);return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def word()
bind={}; 
  it=nil

it=_or(proc{it=alpha();next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=seq("_");next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end
def xdigit()
bind={}; 
  it=nil

it=regch(/[0-9a-fA-F]/);return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end

end

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
def __args(a0,a1)
bind={}; bind[:o_1]=a0;bind[:c_1]=a1
  it=nil

it=([])
bind[:autovar_1] = it
it=seq(bind[:o_1]);return FAIL if it==FAIL
it=token("");return FAIL if it==FAIL
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=rubyarg();break FAIL if it==FAIL
bind[:autovar_2] = it
it=(_append(bind[:autovar_1],bind[:autovar_2])) 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=bind[:autovar_1]
bind[:r_1] = it
it=seq(bind[:c_1]);return FAIL if it==FAIL
it=bind[:r_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def _args(a0,a1)
bind={}; bind[:o_1]=a0;bind[:c_1]=a1
  it=nil

it=__args(bind[:o_1],bind[:c_1]);return FAIL if it==FAIL
bind[:r_1] = it
it=(Args[{:ary=>([bind[:o_1]]+bind[:r_1]+[bind[:c_1]])}])
bind[:_result_1] = it
it=bind[:_result_1]  
end
def addargs()
bind={}; 
  it=nil

it=([])
bind[:result_1] = it
while true
bind[:autovar_3]=@input;r=it=clas(Args);break FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=anything();next FAIL if it==FAIL
bind[:name_1] = it
it=(_Local(bind[:name_1]) )
bind[:autovar_2] = it
it=(_append(bind[:result_1],bind[:autovar_2])) };break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=(bind[:result_1] || [])
bind[:_result_1] = it
it=bind[:_result_1]  
end
def application()
bind={}; 
  it=nil

it=_or(proc{it=name();next FAIL if it==FAIL
bind[:klas_1] = it
it=seq("::");next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:rule_1] = it
it=([bind[:klas_1],bind[:rule_1]])
bind[:rule_1] = it },proc{it=name();next FAIL if it==FAIL
bind[:rule_1] = it});return FAIL if it==FAIL
it=argsOpt('(',')');return FAIL if it==FAIL
bind[:arg_1] = it
it=(Apply[bind[:rule_1],bind[:arg_1]])
bind[:_result_1] = it
it=bind[:_result_1]  
end
def args(a0,a1)
bind={}; bind[:o_1]=a0;bind[:c_1]=a1
  it=nil

it=__args(bind[:o_1],bind[:c_1]);return FAIL if it==FAIL
bind[:r_1] = it
it=(bind[:r_1]+[','])
bind[:autovar_1] = it
it=(bind[:autovar_1]=[bind[:autovar_1]])
it=_pass(true,bind[:autovar_1]){it=anything();next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=procargs();next FAIL if it==FAIL
bind[:_result_1] = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_1]  
end
def argsOpt(a0,a1)
bind={}; bind[:o_1]=a0;bind[:c_1]=a1
  it=nil

it=_or(proc{it=args(bind[:o_1],bind[:c_1]);next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=empty();next FAIL if it==FAIL
it=([])
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def atomicHostExpr()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=_or(proc{it=endline();next FAIL if it==FAIL
@cut=true;it
it=fails();next FAIL if it==FAIL },proc{it=empty();next FAIL if it==FAIL});break FAIL if it==FAIL
it=anything();break FAIL if it==FAIL
bind[:autovar_2] = it
it=(_append(bind[:autovar_1],bind[:autovar_2])) 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=bind[:autovar_1]
bind[:s_1] = it
it=("{#{bind[:s_1]*""}}")
bind[:autovar_4] = it
it=(bind[:autovar_4]=[bind[:autovar_4]])
it=_pass(true,bind[:autovar_4]){it=anything();next FAIL if it==FAIL
bind[:autovar_5] = it
it=_pass(true,bind[:autovar_5]){it=inlineHostExpr();next FAIL if it==FAIL
bind[:_result_1] = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_1]  
end
def choice()
bind={}; 
  it=nil

it=listOf('sequence',proc{it=token("|");return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1] });return FAIL if it==FAIL
bind[:ary_1] = it
it=Or.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it
it=bind[:_result_1]  
end
def className()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=token("");return FAIL if it==FAIL
it=upper();return FAIL if it==FAIL
bind[:autovar_3] = it
it=(_append(bind[:autovar_2],bind[:autovar_3]))
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_5]=@input;r=it=nameRest();break FAIL if it==FAIL
bind[:autovar_4] = it
it=(_append(bind[:autovar_1],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_1]
bind[:autovar_6] = it
it=(_append(bind[:autovar_2],bind[:autovar_6]))
it=bind[:autovar_2]
bind[:it_1] = it
it=(leterize(bind[:it_1]*""))
bind[:_result_1] = it
it=bind[:_result_1]  
end
def collect(a0)
bind={}; bind[:ors_1]=a0
  it=nil

it=(a=autovar; Seq[Or[{:ary=>bind[:ors_1].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],Act[a]])
bind[:_result_1] = it
it=bind[:_result_1]  
end
def eChar()
bind={}; 
  it=nil

it=_or(proc{it=seq("\\");next FAIL if it==FAIL
it=char();next FAIL if it==FAIL
bind[:c_1] = it
it=("\\#{bind[:c_1]}")
bind[:_result_1] = it },proc{it=_args('#'+'{','}');next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=char();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end
def expression()
bind={}; 
  it=nil

it=choice();return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def grammar()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=token("amethyst");return FAIL if it==FAIL
it=name();return FAIL if it==FAIL
bind[:name_1] = it
it=_or(proc{it=token("<");next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:parent_1] = it },proc{it=empty();next FAIL if it==FAIL
it=(bind[:parent_1]="Amethyst") });return FAIL if it==FAIL
it=token("{");return FAIL if it==FAIL
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=rule();break FAIL if it==FAIL
bind[:autovar_2] = it
it=(_append(bind[:autovar_1],bind[:autovar_2])) 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=bind[:autovar_1]
bind[:rules_1] = it
it=token("}");return FAIL if it==FAIL
it=Grammar.create( {:name=>bind[:name_1],:parent=>bind[:parent_1],:rules=>bind[:rules_1] })
bind[:_result_1] = it
it=bind[:_result_1]  
end
def igrammar()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=([])
bind[:autovar_2] = it
while true
bind[:autovar_7]=@input;r=it=_or(proc{it=([])
bind[:autovar_1] = it
it=_or(proc{it=seq("amethyst");next FAIL if it==FAIL
@cut=true;it
it=fails();next FAIL if it==FAIL },proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=anything();next FAIL if it==FAIL
bind[:autovar_3] = it
it=(_append(bind[:autovar_1],bind[:autovar_3]))
while true
bind[:autovar_5]=@input;r=it=_or(proc{it=seq("amethyst");next FAIL if it==FAIL
@cut=true;it
it=fails();next FAIL if it==FAIL },proc{it=empty();next FAIL if it==FAIL});break FAIL if it==FAIL
it=anything();break FAIL if it==FAIL
bind[:autovar_4] = it
it=(_append(bind[:autovar_1],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_1]
bind[:it_1] = it
it=(bind[:it_1]*"")
bind[:autovar_6] = it },proc{it=grammar();next FAIL if it==FAIL
bind[:autovar_6] = it});break FAIL if it==FAIL
it=(_append(bind[:autovar_2],bind[:autovar_6])) 
 break FAIL if r==FAIL
 (bind[:autovar_7]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_7]
it=bind[:autovar_2]
bind[:a_1] = it
it=bind[:a_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def inlineHostExpr()
bind={}; 
  it=nil

it=args('{','}');return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def key()
bind={}; 
  it=nil

it=_or(proc{it=token("@");next FAIL if it==FAIL
it=className();next FAIL if it==FAIL
bind[:name_1] = it
it=argsOpt('[',']');next FAIL if it==FAIL
bind[:args_1] = it
it=(Object.const_get(bind[:name_1]).instance_variable_get(:@attrs))
bind[:vars_1] = it
it=Result.create( {:args=>bind[:args_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
bind[:_result_1] = it },proc{it=token("@");next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:name_1] = it
it=Key.create( {:args=>bind[:args_1],:name=>bind[:name_1] })
bind[:_result_1] = it },proc{it=token("@@");next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:name_1] = it
it=(Global[bind[:name_1]])
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def modifier()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=_or(proc{it=term();next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=token("#");next FAIL if it==FAIL
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=_or(proc{it=endline();next FAIL if it==FAIL
@cut=true;it
it=fails();next FAIL if it==FAIL },proc{it=empty();next FAIL if it==FAIL});break FAIL if it==FAIL
it=anything();break FAIL if it==FAIL
bind[:autovar_2] = it
it=(_append(bind[:autovar_1],bind[:autovar_2])) 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=bind[:autovar_1]
bind[:c_1] = it
it=(Comment[bind[:c_1]])
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def name()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=token("");return FAIL if it==FAIL
it=nameFirst();return FAIL if it==FAIL
bind[:autovar_3] = it
it=(_append(bind[:autovar_2],bind[:autovar_3]))
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_5]=@input;r=it=nameRest();break FAIL if it==FAIL
bind[:autovar_4] = it
it=(_append(bind[:autovar_1],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_1]
bind[:autovar_6] = it
it=(_append(bind[:autovar_2],bind[:autovar_6]))
it=bind[:autovar_2]
bind[:it_1] = it
it=(leterize(bind[:it_1]*""))
bind[:_result_1] = it
it=bind[:_result_1]  
end
def nameFirst()
bind={}; 
  it=nil

it=_or(proc{it=letter();next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=seq("_");next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end
def nameRest()
bind={}; 
  it=nil

it=_or(proc{it=nameFirst();next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=digit();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end
def nr()
bind={}; 
  it=nil

it=_or(proc{it=name();next FAIL if it==FAIL
it=argsOpt('(',')');next FAIL if it==FAIL
it=token("=");next FAIL if it==FAIL
@cut=true;it
it=fails();next FAIL if it==FAIL
bind[:_result_1] = it },proc{it=empty();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end
def number()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_1] = it
it=regch(/[0-9]/);return FAIL if it==FAIL
bind[:autovar_2] = it
it=(_append(bind[:autovar_1],bind[:autovar_2]))
while true
bind[:autovar_4]=@input;r=it=regch(/[0-9]/);break FAIL if it==FAIL
bind[:autovar_3] = it
it=(_append(bind[:autovar_1],bind[:autovar_3])) 
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4]
it=bind[:autovar_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def prefixed()
bind={}; 
  it=nil

it=_or(proc{it=token("&");next FAIL if it==FAIL
it=inlineHostExpr();next FAIL if it==FAIL
bind[:expr_1] = it
it=(Pred[bind[:expr_1]])
bind[:_result_1] = it },proc{it=_or(proc{it=token("&");next FAIL if it==FAIL
bind[:neg_1] = it},proc{it=token("~");next FAIL if it==FAIL
bind[:neg_1] = it});next FAIL if it==FAIL
it=prefixed();next FAIL if it==FAIL
bind[:m_1] = it
it=(Lookahead[bind[:m_1],bind[:neg_1]=="~"])
bind[:_result_1] = it },proc{it=_or(proc{it=modifier();next FAIL if it==FAIL
bind[:from_1] = it},proc{it=token("");next FAIL if it==FAIL
it=_lookahead(false){it=regch(/[.:\[]/);next FAIL if it==FAIL};next FAIL if it==FAIL
it=_or(proc{it=token(".");next FAIL if it==FAIL},proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=(Apply["anything"])
bind[:from_1] = it });next FAIL if it==FAIL
while true
bind[:autovar_1]=@input;r=it=_or(proc{it=_();next FAIL if it==FAIL
@cut=true;it
it=fails();next FAIL if it==FAIL },proc{it=empty();next FAIL if it==FAIL});break FAIL if it==FAIL
it=_or(proc{it=token("=>");next FAIL if it==FAIL
it=prefixed();next FAIL if it==FAIL
bind[:it_1] = it
it=(bind[:from_1]=Pass[bind[:from_1],bind[:it_1]]) },proc{it=token("[");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:it_1] = it
it=(bind[:from_1]=Enter[bind[:from_1],bind[:it_1]])
it=token("]");next FAIL if it==FAIL },proc{it=_or(proc{it=token("*");next FAIL if it==FAIL
bind[:one_1] = it},proc{it=token("+");next FAIL if it==FAIL
bind[:one_1] = it});next FAIL if it==FAIL
it=(Many[bind[:from_1],bind[:one_1]=="+"])
bind[:from_1] = it },proc{it=token("?");next FAIL if it==FAIL
it=(Or[bind[:from_1],Apply["empty"]])
bind[:from_1] = it },proc{it=token(":");next FAIL if it==FAIL
it=_or(proc{it=_or(proc{it=key();next FAIL if it==FAIL
bind[:name_1] = it},proc{it=name();next FAIL if it==FAIL
bind[:name_1] = it});next FAIL if it==FAIL
it=_or(proc{it=seq("[]");next FAIL if it==FAIL
it=(true)
bind[:append_1] = it },proc{it=empty();next FAIL if it==FAIL
it=(nil)
bind[:append_1] = it });next FAIL if it==FAIL
it=(_Set(bind[:name_1],bind[:from_1],bind[:append_1]))
bind[:from_1] = it },proc{it=inlineHostExpr();next FAIL if it==FAIL
bind[:e_1] = it
it=(Seq[_Set("it",bind[:from_1]) , Act[bind[:e_1]] ])
bind[:from_1] = it });next FAIL if it==FAIL });break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (bind[:autovar_1]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_1]
it=bind[:from_1]
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def procargs()
bind={}; 
  it=nil

it=(@ary=[];@tmp=[])
while true
bind[:autovar_1]=@input;r=it=_or(proc{it=anything();next FAIL if it==FAIL
bind[:c_1] = it
it=(bind[:c_1]==',')||FAIL;next FAIL if it==FAIL
it=(@ary<<Args[{:ary=>@tmp}];@tmp=[]) },proc{it=procargs2();next FAIL if it==FAIL});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_1]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_1]
it=(@ary)
bind[:_result_1] = it
it=bind[:_result_1]  
end
def procargs2()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=_or(proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_4]=@input;r=it=procargs2();break FAIL if it==FAIL
bind[:autovar_3] = it
it=(_append(bind[:autovar_1],bind[:autovar_3])) 
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4]
it=bind[:autovar_1]
bind[:_result_1] = it };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
bind[:a_1] = it
it=(@tmp<<bind[:a_1])
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def rubyarg()
bind={}; 
  it=nil

it=([])
bind[:s_1] = it
it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=([])
bind[:n_1] = it
it=_or(proc{it=seq("`");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:e_1] = it
it=seq("`");next FAIL if it==FAIL
it=(Exp[_body(bind[:e_1])])
bind[:_result_1] = it },proc{it=_args('(',')');next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=_args('[',']');next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=_args('{','}');next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=seq("\"");next FAIL if it==FAIL
bind[:autovar_3] = it
it=(_append(bind[:s_1],bind[:autovar_3]))
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_5]=@input;r=it=_or(proc{it=seq("\"");next FAIL if it==FAIL
@cut=true;it
@stop=true;it
bind[:autovar_4] = it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_4] = it});break FAIL if it==FAIL
it=(_append(bind[:autovar_1],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_1]
bind[:autovar_6] = it
it=(_append(bind[:s_1],bind[:autovar_6]))
it=(Strin[connectstring(bind[:s_1])])
bind[:_result_1] = it },proc{it=seq("\'");next FAIL if it==FAIL
bind[:autovar_7] = it
it=(_append(bind[:s_1],bind[:autovar_7]))
it=([])
bind[:autovar_2] = it
while true
bind[:autovar_9]=@input;r=it=_or(proc{it=seq("\'");next FAIL if it==FAIL
@cut=true;it
@stop=true;it
bind[:autovar_8] = it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_8] = it});break FAIL if it==FAIL
it=(_append(bind[:autovar_2],bind[:autovar_8])) 
 break FAIL if r==FAIL
 (bind[:autovar_9]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_9]
it=bind[:autovar_2]
bind[:autovar_10] = it
it=(_append(bind[:s_1],bind[:autovar_10]))
it=(Strin[connectstring(bind[:s_1])])
bind[:_result_1] = it },proc{it=seq("...");next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=seq("..");next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=_or(proc{it=token(":@");next FAIL if it==FAIL
bind[:n_1] = it},proc{it=regch(/[$.:]/);next FAIL if it==FAIL
bind[:n_1] = it},proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=_or(proc{it=_();next FAIL if it==FAIL
@cut=true;it
it=fails();next FAIL if it==FAIL },proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:autovar_11] = it
it=(_append(bind[:n_1],bind[:autovar_11]))
it=bind[:n_1]
bind[:_result_1] = it },proc{it=_or(proc{it=_();next FAIL if it==FAIL
@cut=true;it
it=fails();next FAIL if it==FAIL },proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=key();next FAIL if it==FAIL
bind[:_result_1] = it },proc{it=regch(/[^`{}()'"\[\]]/);next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end
def rule()
bind={}; 
  it=nil

it=(@locals=[];$appends=[];@bnding=Bnding[])
it=(@bnding)
bind[:bnding_1] = it
it=name();return FAIL if it==FAIL
bind[:name_1] = it
it=ruleargs();return FAIL if it==FAIL
bind[:args_1] = it
it=token("=");return FAIL if it==FAIL
it=expression();return FAIL if it==FAIL
bind[:body_1] = it
it=(_body(bind[:body_1]))
bind[:body_1] = it
it=(@locals.uniq)
bind[:locals_1] = it
it=(bind[:body_1]=Seq[{:ary=>($appends.uniq.map{|a| _Set(a,Act[Args["[]"]])}+[bind[:body_1]])}]; )
it=Rule.create( {:args=>bind[:args_1],:bnding=>bind[:bnding_1],:body=>bind[:body_1],:locals=>bind[:locals_1],:name=>bind[:name_1] })
bind[:_result_1] = it
it=bind[:_result_1]  
end
def ruleargs()
bind={}; 
  it=nil

it=argsOpt('(',')');return FAIL if it==FAIL
bind[:autovar_1] = it
it=(bind[:autovar_1]=[bind[:autovar_1]])
it=_pass(true,bind[:autovar_1]){it=anything();next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=addargs();next FAIL if it==FAIL
bind[:_result_1] = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_1]  
end
def sequence()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=nr();break FAIL if it==FAIL
it=prefixed();break FAIL if it==FAIL
bind[:autovar_2] = it
it=(_append(bind[:autovar_1],bind[:autovar_2])) 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=bind[:autovar_1]
bind[:ary_1] = it
it=Seq.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it
it=bind[:_result_1]  
end
def term()
bind={}; 
  it=nil

it=([])
bind[:s_1] = it
it=([])
bind[:x_1] = it
it=_or(proc{it=className();next FAIL if it==FAIL
bind[:cls_1] = it
it=(Apply["clas",bind[:cls_1]])
bind[:_result_1] = it },proc{it=token("nested");next FAIL if it==FAIL
it=seq("(");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:expr_1] = it
it=token(")");next FAIL if it==FAIL
it=(Nested[bind[:expr_1]])
bind[:_result_1] = it },proc{it=token("break");next FAIL if it==FAIL
it=(Seq[Cut[],Stop[]])
bind[:_result_1] = it },proc{it=application();next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=key();next FAIL if it==FAIL
bind[:it_1] = it
it=(bind[:it_1].is_a?(Result) ? bind[:it_1] : Act[Args[bind[:it_1]]])
bind[:_result_1] = it },proc{it=_or(proc{it=token("->");next FAIL if it==FAIL
it=atomicHostExpr();next FAIL if it==FAIL
bind[:x_1] = it },proc{it=token("");next FAIL if it==FAIL
it=inlineHostExpr();next FAIL if it==FAIL
bind[:x_1] = it });next FAIL if it==FAIL
it=(Act[bind[:x_1]])
bind[:_result_1] = it },proc{it=token("\"");next FAIL if it==FAIL
while true
bind[:autovar_2]=@input;r=it=_or(proc{it=seq("\"");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_1] = it
it=(_append(bind[:s_1],bind[:autovar_1])) });break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_2]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_2]
it=(Apply["token" ,quote(bind[:s_1])])
bind[:_result_1] = it },proc{it=token("'");next FAIL if it==FAIL
while true
bind[:autovar_4]=@input;r=it=_or(proc{it=seq("\'");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_3] = it
it=(_append(bind[:s_1],bind[:autovar_3])) });break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4]
it=(Apply["seq"   ,quote(bind[:s_1])])
bind[:_result_1] = it },proc{it=number();next FAIL if it==FAIL
bind[:it_1] = it
it=(Apply["exactly",bind[:it_1]])
bind[:_result_1] = it },proc{it=token("<");next FAIL if it==FAIL
while true
bind[:autovar_6]=@input;r=it=_or(proc{it=token(">");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_5] = it
it=(_append(bind[:x_1],bind[:autovar_5])) });break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_6]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_6]
it=(Apply["regch","/[#{bind[:x_1]}]/"])
bind[:_result_1] = it },proc{it=token("(");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:x_1] = it
it=token(")");next FAIL if it==FAIL
it=_or(proc{it=seq("[]");next FAIL if it==FAIL
it=collect(bind[:x_1]);next FAIL if it==FAIL
bind[:_result_1] = it },proc{it=empty();next FAIL if it==FAIL
it=bind[:x_1]
bind[:_result_1] = it });next FAIL if it==FAIL });return FAIL if it==FAIL
it=bind[:_result_1]  
end

end

class AmethystOptimizer < Amethyst
def arg()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=([])
bind[:ary_1] = it
it=_or(proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_5]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_4] = it
it=(_append(bind[:autovar_1],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_1]
bind[:ary_1] = it };next FAIL if it==FAIL
it=Args.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it },proc{it=clas(Strin);next FAIL if it==FAIL
bind[:autovar_6] = it
it=_pass(true,bind[:autovar_6]){it=([])
bind[:autovar_2] = it
while true
bind[:autovar_8]=@input;r=it=_or(proc{it=char();next FAIL if it==FAIL
bind[:autovar_7] = it},proc{it=arg();next FAIL if it==FAIL
bind[:autovar_7] = it});break FAIL if it==FAIL
it=(_append(bind[:autovar_2],bind[:autovar_7])) 
 break FAIL if r==FAIL
 (bind[:autovar_8]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_8]
it=bind[:autovar_2]
bind[:ary_1] = it };next FAIL if it==FAIL
it=Strin.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it },proc{it=clas(Exp);next FAIL if it==FAIL
bind[:autovar_9] = it
it=_pass(true,bind[:autovar_9]){it=transfn();next FAIL if it==FAIL
bind[:autovar_10] = it
it=(_append(bind[:ary_1],bind[:autovar_10])) };next FAIL if it==FAIL
it=Exp.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_11] = it
it=_pass(true,bind[:autovar_11]){it=(@src.name)
bind[:name_1] = it
it=(@src.args)
bind[:autovar_12] = it
it=(bind[:autovar_12]=[bind[:autovar_12]])
it=_pass(true,bind[:autovar_12]){it=args();next FAIL if it==FAIL
bind[:args_1] = it};next FAIL if it==FAIL
it=(@src.vars)
bind[:autovar_13] = it
it=(bind[:autovar_13]=[bind[:autovar_13]])
it=_pass(true,bind[:autovar_13]){it=args();next FAIL if it==FAIL
bind[:vars_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=Result.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
bind[:_result_1] = it },proc{it=anything();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end
def args()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=_or(proc{it=clas(Array);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_5]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_4] = it
it=(_append(bind[:autovar_1],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_1]
bind[:a_1] = it };next FAIL if it==FAIL
it=bind[:a_1]
bind[:_result_1] = it },proc{it=([])
bind[:autovar_2] = it
while true
bind[:autovar_7]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_6] = it
it=(_append(bind[:autovar_2],bind[:autovar_6])) 
 break FAIL if r==FAIL
 (bind[:autovar_7]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_7]
it=bind[:autovar_2]
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def itrans()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=_or(proc{it=char();next FAIL if it==FAIL
bind[:autovar_2] = it},proc{it=trans();next FAIL if it==FAIL
bind[:autovar_2] = it});break FAIL if it==FAIL
it=(_append(bind[:autovar_1],bind[:autovar_2])) 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=bind[:autovar_1]
bind[:r_1] = it
it=bind[:r_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def trans()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=([])
bind[:ary_1] = it
it=([])
bind[:autovar_3] = it
it=([])
bind[:autovar_4] = it
it=_or(proc{it=clas(Grammar);next FAIL if it==FAIL
bind[:autovar_5] = it
it=_pass(true,bind[:autovar_5]){it=(@src.name)
bind[:name_1] = it
it=(@src.parent)
bind[:parent_1] = it
it=(@src.rules)
bind[:autovar_6] = it
it=(bind[:autovar_6]=[bind[:autovar_6]])
it=_pass(true,bind[:autovar_6]){it=transs();next FAIL if it==FAIL
bind[:rules_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=Grammar.create( {:ary=>bind[:ary_1],:name=>bind[:name_1],:parent=>bind[:parent_1],:rules=>bind[:rules_1] })
bind[:_result_1] = it },proc{it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_7] = it
it=_pass(true,bind[:autovar_7]){it=(@src.name)
bind[:name_1] = it
it=(@src.args)
bind[:autovar_8] = it
it=(bind[:autovar_8]=[bind[:autovar_8]])
it=_pass(true,bind[:autovar_8]){it=args();next FAIL if it==FAIL
bind[:args_1] = it};next FAIL if it==FAIL
it=(@src.body)
bind[:autovar_9] = it
it=(bind[:autovar_9]=[bind[:autovar_9]])
it=_pass(true,bind[:autovar_9]){it=trans();next FAIL if it==FAIL
bind[:body_1] = it};next FAIL if it==FAIL
it=(@src.bnding)
bind[:bnding_1] = it
it=(@src.locals)
bind[:locals_1] = it };next FAIL if it==FAIL
it=Rule.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:bnding=>bind[:bnding_1],:body=>bind[:body_1],:locals=>bind[:locals_1],:name=>bind[:name_1] })
bind[:_result_1] = it },proc{it=clas(Or);next FAIL if it==FAIL
bind[:autovar_10] = it
it=_pass(true,bind[:autovar_10]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_12]=@input;r=it=transfn();break FAIL if it==FAIL
bind[:autovar_11] = it
it=(_append(bind[:autovar_1],bind[:autovar_11])) 
 break FAIL if r==FAIL
 (bind[:autovar_12]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_12]
it=bind[:autovar_1]
bind[:ary_1] = it };next FAIL if it==FAIL
it=Or.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it },proc{it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_13] = it
it=_pass(true,bind[:autovar_13]){it=([])
bind[:autovar_2] = it
while true
bind[:autovar_15]=@input;r=it=trans();break FAIL if it==FAIL
bind[:autovar_14] = it
it=(_append(bind[:autovar_2],bind[:autovar_14])) 
 break FAIL if r==FAIL
 (bind[:autovar_15]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_15]
it=bind[:autovar_2]
bind[:ary_1] = it };next FAIL if it==FAIL
it=Seq.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it },proc{it=clas(Lookahead);next FAIL if it==FAIL
bind[:autovar_16] = it
it=_pass(true,bind[:autovar_16]){it=trans();next FAIL if it==FAIL
bind[:autovar_17] = it
it=(_append(bind[:ary_1],bind[:autovar_17]))
it=(@src.neg)
bind[:neg_1] = it };next FAIL if it==FAIL
it=Lookahead.create( {:ary=>bind[:ary_1],:neg=>bind[:neg_1] })
bind[:_result_1] = it },proc{it=clas(Comment);next FAIL if it==FAIL
bind[:autovar_18] = it
it=_pass(true,bind[:autovar_18]){it=([])
bind[:autovar_3] = it
while true
bind[:autovar_20]=@input;r=it=anything();break FAIL if it==FAIL
bind[:autovar_19] = it
it=(_append(bind[:autovar_3],bind[:autovar_19])) 
 break FAIL if r==FAIL
 (bind[:autovar_20]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_20]
it=bind[:autovar_3]
bind[:ary_1] = it };next FAIL if it==FAIL
it=Comment.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it },proc{it=clas(Many);next FAIL if it==FAIL
bind[:autovar_21] = it
it=_pass(true,bind[:autovar_21]){it=trans();next FAIL if it==FAIL
bind[:autovar_22] = it
it=(_append(bind[:ary_1],bind[:autovar_22]))
it=(@src.o)
bind[:o_1] = it };next FAIL if it==FAIL
it=Many.create( {:ary=>bind[:ary_1],:o=>bind[:o_1] })
bind[:_result_1] = it },proc{it=clas(Apply);next FAIL if it==FAIL
bind[:autovar_23] = it
it=_pass(true,bind[:autovar_23]){it=anything();next FAIL if it==FAIL
bind[:autovar_24] = it
it=(_append(bind[:ary_1],bind[:autovar_24]))
it=args();next FAIL if it==FAIL
bind[:autovar_25] = it
it=(_append(bind[:ary_1],bind[:autovar_25])) };next FAIL if it==FAIL
it=Apply.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_26] = it
it=_pass(true,bind[:autovar_26]){it=(@src.name)
bind[:autovar_27] = it
it=(bind[:autovar_27]=[bind[:autovar_27]])
it=_pass(true,bind[:autovar_27]){it=arg();next FAIL if it==FAIL
bind[:name_1] = it};next FAIL if it==FAIL
it=(@src.expr)
bind[:autovar_28] = it
it=(bind[:autovar_28]=[bind[:autovar_28]])
it=_pass(true,bind[:autovar_28]){it=trans();next FAIL if it==FAIL
bind[:expr_1] = it};next FAIL if it==FAIL
it=(@src.append)
bind[:append_1] = it };next FAIL if it==FAIL
it=Set.create( {:append=>bind[:append_1],:ary=>bind[:ary_1],:expr=>bind[:expr_1],:name=>bind[:name_1] })
bind[:_result_1] = it },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_29] = it
it=_pass(true,bind[:autovar_29]){it=args();next FAIL if it==FAIL
bind[:ary_1] = it
it=(@src.pred)
bind[:pred_1] = it };next FAIL if it==FAIL
it=Act.create( {:ary=>bind[:ary_1],:pred=>bind[:pred_1] })
bind[:_result_1] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_30] = it
it=_pass(true,bind[:autovar_30]){it=(@src.name)
bind[:name_1] = it
it=(@src.args)
bind[:autovar_31] = it
it=(bind[:autovar_31]=[bind[:autovar_31]])
it=_pass(true,bind[:autovar_31]){it=args();next FAIL if it==FAIL
bind[:args_1] = it};next FAIL if it==FAIL
it=(@src.vars)
bind[:autovar_32] = it
it=(bind[:autovar_32]=[bind[:autovar_32]])
it=_pass(true,bind[:autovar_32]){it=args();next FAIL if it==FAIL
bind[:vars_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=Result.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:expr=>bind[:expr_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
bind[:_result_1] = it },proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_33] = it
it=_pass(true,bind[:autovar_33]){it=([])
bind[:autovar_4] = it
while true
bind[:autovar_35]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_34] = it
it=(_append(bind[:autovar_4],bind[:autovar_34])) 
 break FAIL if r==FAIL
 (bind[:autovar_35]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_35]
it=bind[:autovar_4]
bind[:ary_1] = it };next FAIL if it==FAIL
it=Args.create( {:ary=>bind[:ary_1],:o=>bind[:o_1] })
bind[:_result_1] = it },proc{it=clas(Pass);next FAIL if it==FAIL
bind[:autovar_36] = it
it=_pass(true,bind[:autovar_36]){it=(@src.to)
bind[:autovar_37] = it
it=(bind[:autovar_37]=[bind[:autovar_37]])
it=_pass(true,bind[:autovar_37]){it=trans();next FAIL if it==FAIL
bind[:to_1] = it};next FAIL if it==FAIL
it=(@src.var)
bind[:autovar_38] = it
it=(bind[:autovar_38]=[bind[:autovar_38]])
it=_pass(true,bind[:autovar_38]){it=arg();next FAIL if it==FAIL
bind[:var_1] = it};next FAIL if it==FAIL
it=(@src.enter)
bind[:enter_1] = it };next FAIL if it==FAIL
it=Pass.create( {:ary=>bind[:ary_1],:enter=>bind[:enter_1],:to=>bind[:to_1],:var=>bind[:var_1] })
bind[:_result_1] = it },proc{it=clas(Cut);next FAIL if it==FAIL
bind[:autovar_39] = it
it=_pass(true,bind[:autovar_39]){ };next FAIL if it==FAIL
it=Cut.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it },proc{it=clas(Stop);next FAIL if it==FAIL
bind[:autovar_40] = it
it=_pass(true,bind[:autovar_40]){ };next FAIL if it==FAIL
it=Stop.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it },proc{it=clas(Local);next FAIL if it==FAIL
bind[:autovar_41] = it
it=_pass(true,bind[:autovar_41]){while true
bind[:autovar_42]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_42]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_42]
it=(@src.self)
bind[:_result_1] = it };next FAIL if it==FAIL });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def transfn()
bind={}; 
  it=nil

it=trans();return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def transs()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=anything();return FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_4]=@input;r=it=trans();break FAIL if it==FAIL
bind[:autovar_3] = it
it=(_append(bind[:autovar_1],bind[:autovar_3])) 
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4]
it=bind[:autovar_1]
bind[:t_1] = it };return FAIL if it==FAIL
it=bind[:t_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end

end



class Traverser < Amethyst
def traverse()
bind={}; 
  it=nil

while true
bind[:autovar_1]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_1]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_1]
it=(@src.self)
bind[:this_1] = it
it=((@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] })
bind[:autovar_2] = it
it=(bind[:autovar_2]=[bind[:autovar_2]])
it=_pass(true,bind[:autovar_2]){it=anything();next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){while true
bind[:autovar_5]=@input;r=it=anything();break FAIL if it==FAIL
bind[:autovar_4] = it
it=_pass(true,bind[:autovar_4]){it=anything();next FAIL if it==FAIL
bind[:key_1] = it
it=traverse_item();next FAIL if it==FAIL
bind[:it_1] = it
it=(@x; bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])) };break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]};next FAIL if it==FAIL };return FAIL if it==FAIL
it=(@src.self)
bind[:_result_1] = it
it=bind[:_result_1]  
end
def traverse_item()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=_or(proc{it=visit();next FAIL if it==FAIL
bind[:a_1] = it
it=(@changed=true)
it=bind[:a_1]
bind[:_result_1] = it },proc{it=clas(Array);next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_4]=@input;r=it=traverse_item();break FAIL if it==FAIL
bind[:autovar_3] = it
it=(_append(bind[:autovar_1],bind[:autovar_3])) 
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4]
it=bind[:autovar_1]
bind[:_result_1] = it };next FAIL if it==FAIL },proc{it=clas(AmethystAST);next FAIL if it==FAIL
bind[:autovar_5] = it
it=_pass(true,bind[:autovar_5]){it=traverse();next FAIL if it==FAIL
bind[:_result_1] = it};next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end

end



class AmethystOptimizer2 < AmethystOptimizer
def trans()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=_or(proc{it=clas(Or);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_5]=@input;r=it=transfn();break FAIL if it==FAIL
bind[:autovar_4] = it
it=(_append(bind[:autovar_1],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_1]
bind[:ary_1] = it };next FAIL if it==FAIL
it=(bind[:ary_1]=bind[:ary_1].map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=_or(proc{it=(bind[:ary_1].size==1)||FAIL;next FAIL if it==FAIL
it=(bind[:ary_1][0])
bind[:_result_1] = it },proc{it=Or.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it});next FAIL if it==FAIL },proc{it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_6] = it
it=_pass(true,bind[:autovar_6]){it=([])
bind[:autovar_2] = it
while true
bind[:autovar_8]=@input;r=it=trans();break FAIL if it==FAIL
bind[:autovar_7] = it
it=(_append(bind[:autovar_2],bind[:autovar_7])) 
 break FAIL if r==FAIL
 (bind[:autovar_8]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_8]
it=bind[:autovar_2]
bind[:ary_1] = it };next FAIL if it==FAIL
it=(bind[:ary_1]=bind[:ary_1].map{|a| (a.is_a?(Seq)) ? a.ary : a}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=_or(proc{it=(bind[:ary_1].size==1)||FAIL;next FAIL if it==FAIL
it=(bind[:ary_1][0])
bind[:_result_1] = it },proc{it=Seq.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it});next FAIL if it==FAIL },proc{it=super();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end

end





class Seq_Or_Optimizer < Traverser
def root()
bind={}; 
  it=nil

it=traverse();return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def visit()
bind={}; 
  it=nil

it=_or(proc{it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=traverse();next FAIL if it==FAIL
it=(@src.self.ary=@src.ary.map{|i| (i.is_a?(Seq)) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=((@src.ary.size==1) ? @src.ary[0] : @src.self)
bind[:_result_1] = it };next FAIL if it==FAIL },proc{it=clas(Or);next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=traverse();next FAIL if it==FAIL
it=(@src.self.ary=@src.ary.map{|i| (i.is_a?(Or )) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=((@src.ary.size==1) ? @src.ary[0] : @src.self)
bind[:_result_1] = it };next FAIL if it==FAIL });return FAIL if it==FAIL
it=bind[:_result_1]  
end

end

class Analyze_Variables2 < Traverser
def flat()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_5]=@input;r=it=_or(proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=flat();next FAIL if it==FAIL
bind[:autovar_3] = it};next FAIL if it==FAIL },proc{it=clas(Strin);next FAIL if it==FAIL
bind[:autovar_4] = it
it=_pass(true,bind[:autovar_4]){it=flat();next FAIL if it==FAIL
bind[:autovar_3] = it};next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
bind[:autovar_3] = it});break FAIL if it==FAIL
it=(_append(bind[:autovar_1],bind[:autovar_3])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def itrans()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=([])
bind[:autovar_2] = it
while true
bind[:autovar_10]=@input;r=it=_or(proc{it=clas(Grammar);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=(@src.rules)
bind[:autovar_4] = it
it=(bind[:autovar_4]=[bind[:autovar_4]])
it=_pass(true,bind[:autovar_4]){it=anything();next FAIL if it==FAIL
bind[:autovar_5] = it
it=_pass(true,bind[:autovar_5]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_8]=@input;r=it=clas(Rule);break FAIL if it==FAIL
bind[:autovar_6] = it
it=_pass(true,bind[:autovar_6]){it=root();next FAIL if it==FAIL
bind[:autovar_7] = it};break FAIL if it==FAIL
it=(_append(bind[:autovar_1],bind[:autovar_7])) 
 break FAIL if r==FAIL
 (bind[:autovar_8]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_8]
it=bind[:autovar_1]
bind[:rules_1] = it };next FAIL if it==FAIL };next FAIL if it==FAIL
it=(@src.rules=bind[:rules_1])
it=(@src.self)
bind[:autovar_9] = it };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
bind[:autovar_9] = it});break FAIL if it==FAIL
it=(_append(bind[:autovar_2],bind[:autovar_9])) 
 break FAIL if r==FAIL
 (bind[:autovar_10]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_10]
it=bind[:autovar_2]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def root()
bind={}; 
  it=nil

it=(@src.self)
bind[:autovar_1] = it
it=(bind[:autovar_1]=[bind[:autovar_1]])
it=_pass(true,bind[:autovar_1]){it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=(@variables=Hash.new{|k,v| k[v]=v} ;(@src.locals+@src.args).each{|w| @variables[w[0]]=w})
it=(@locals=@src.locals)
it=traverse();next FAIL if it==FAIL
it=(@src.body=Seq[{:ary=>[@src.body] }];@src.locals=nil)
it=(@src.self)
bind[:_result_1] = it };next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_1]  
end
def visit()
bind={}; 
  it=nil

it=_or(proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=traverse();next FAIL if it==FAIL
it=(@src.ary.map{|aa| @variables[aa] })
bind[:autovar_2] = it
it=(bind[:autovar_2]=[bind[:autovar_2]])
it=_pass(true,bind[:autovar_2]){it=anything();next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=flat();next FAIL if it==FAIL
bind[:a_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=(@src.ary=connectstring(bind[:a_1].flatten))
it=((@src.ary.size==1&&(@src.ary[0].is_a?(Local)||@src.ary[0].is_a?(Global)||@src.ary[0].is_a?(Key))) ? @src.ary[0] : @src.self)
bind[:_result_1] = it };next FAIL if it==FAIL },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_4] = it
it=_pass(true,bind[:autovar_4]){it=traverse();next FAIL if it==FAIL
it=(@src.ary)
bind[:autovar_5] = it
it=(bind[:autovar_5]=[bind[:autovar_5]])
it=_pass(true,bind[:autovar_5]){it=anything();next FAIL if it==FAIL
bind[:autovar_6] = it
it=_pass(true,bind[:autovar_6]){it=clas(Local);next FAIL if it==FAIL
bind[:_result_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_7] = it
it=_pass(true,bind[:autovar_7]){it=(@src.vars=@locals.select{|aa| @src.vars.include? aa[0].to_sym}.uniq)
it=(@src.self)
bind[:_result_1] = it };next FAIL if it==FAIL });return FAIL if it==FAIL
it=bind[:_result_1]  
end

end

class Dead_Code_Detector < AmethystOptimizer
def trans()
bind={}; 
  it=nil

it=_or(proc{it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=(@src.name)
bind[:name_1] = it
it=(@edges=Oriented_Graph.new ; @marked=[])
it=(@src.args)
bind[:autovar_2] = it
it=(bind[:autovar_2]=[bind[:autovar_2]])
it=_pass(true,bind[:autovar_2]){it=args();next FAIL if it==FAIL
bind[:args_1] = it};next FAIL if it==FAIL
it=(@src.body)
bind[:autovar_3] = it
it=(bind[:autovar_3]=[bind[:autovar_3]])
it=_pass(true,bind[:autovar_3]){it=trans();next FAIL if it==FAIL};next FAIL if it==FAIL
it=(@src.body)
bind[:body_1] = it
it=(@src.locals)
bind[:locals_1] = it
it=(@edges.reachable(@marked))
bind[:reachable_1] = it };next FAIL if it==FAIL
it=Rule.create( {:args=>bind[:args_1],:body=>bind[:body_1],:locals=>bind[:locals_1],:name=>bind[:name_1],:reachable=>bind[:reachable_1] })
bind[:_result_1] = it },proc{it=clas(Apply);next FAIL if it==FAIL
bind[:autovar_4] = it
it=_pass(true,bind[:autovar_4]){it=anything();next FAIL if it==FAIL
bind[:name_1] = it
it=vars_in();next FAIL if it==FAIL
bind[:var_1] = it
it=(@marked+=bind[:var_1])
bind[:_result_1] = it };next FAIL if it==FAIL },proc{it=clas(Pass);next FAIL if it==FAIL
bind[:autovar_5] = it
it=_pass(true,bind[:autovar_5]){it=(@src.var)
bind[:autovar_6] = it
it=(bind[:autovar_6]=[bind[:autovar_6]])
it=_pass(true,bind[:autovar_6]){it=vars_in();next FAIL if it==FAIL
bind[:var_1] = it};next FAIL if it==FAIL
it=(@marked+=bind[:var_1])
it=(@src.to)
bind[:autovar_7] = it
it=(bind[:autovar_7]=[bind[:autovar_7]])
it=_pass(true,bind[:autovar_7]){it=trans();next FAIL if it==FAIL
bind[:_result_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_8] = it
it=_pass(true,bind[:autovar_8]){it=(@src.self)
bind[:this_1] = it
it=(@marked<<bind[:this_1] if @src.pred)
it=vars_in();next FAIL if it==FAIL
bind[:var_1] = it };next FAIL if it==FAIL
it=(bind[:var_1].each{|w| @edges.add(w,bind[:this_1]); @edges.add(bind[:this_1],w)})
bind[:_result_1] = it },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_9] = it
it=_pass(true,bind[:autovar_9]){it=(@src.name)
bind[:autovar_10] = it
it=(bind[:autovar_10]=[bind[:autovar_10]])
it=_pass(true,bind[:autovar_10]){it=vars_in();next FAIL if it==FAIL
bind[:v_1] = it};next FAIL if it==FAIL
it=(bind[:v_1]=bind[:v_1][0])
it=(@src.expr)
bind[:autovar_11] = it
it=(bind[:autovar_11]=[bind[:autovar_11]])
it=_pass(true,bind[:autovar_11]){it=trans();next FAIL if it==FAIL};next FAIL if it==FAIL
it=(@src.expr)
bind[:autovar_12] = it
it=(bind[:autovar_12]=[bind[:autovar_12]])
it=_pass(true,bind[:autovar_12]){it=vars_in();next FAIL if it==FAIL
bind[:var_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=(bind[:var_1].each{|w| @edges.add(bind[:v_1],w)})
bind[:_result_1] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_13] = it
it=_pass(true,bind[:autovar_13]){it=(@src.vars)
bind[:autovar_14] = it
it=(bind[:autovar_14]=[bind[:autovar_14]])
it=_pass(true,bind[:autovar_14]){it=anything();next FAIL if it==FAIL
bind[:autovar_15] = it
it=_pass(true,bind[:autovar_15]){it=vars_in();next FAIL if it==FAIL
bind[:var_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=(@src.self)
bind[:v_1] = it };next FAIL if it==FAIL
it=(bind[:var_1].each{|w| @edges.add(bind[:v_1],w) })
bind[:_result_1] = it },proc{it=super();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end
def vars_in()
bind={}; 
  it=nil

it=([])
bind[:ary_1] = it
it=(bind[:ary_1]=[])
while true
bind[:autovar_22]=@input;r=it=_or(proc{it=clas(Global);next FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=(@src.self)
bind[:autovar_2] = it
it=(_append(bind[:ary_1],bind[:autovar_2]))
it=(@marked<<@src.self)
while true
bind[:autovar_3]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3] };next FAIL if it==FAIL },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_4] = it
it=_pass(true,bind[:autovar_4]){it=(@src.self)
bind[:autovar_5] = it
it=(_append(bind[:ary_1],bind[:autovar_5]))
while true
bind[:autovar_6]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_6]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_6] };next FAIL if it==FAIL },proc{it=clas(Key);next FAIL if it==FAIL
bind[:autovar_7] = it
it=_pass(true,bind[:autovar_7]){it=(@src.self)
bind[:autovar_8] = it
it=(_append(bind[:ary_1],bind[:autovar_8]))
it=(@marked<<@src.self)
while true
bind[:autovar_9]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_9]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_9] };next FAIL if it==FAIL },proc{it=clas(Exp);next FAIL if it==FAIL
bind[:autovar_10] = it
it=_pass(true,bind[:autovar_10]){it=trans();next FAIL if it==FAIL};next FAIL if it==FAIL },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_11] = it
it=_pass(true,bind[:autovar_11]){it=(@src.self)
bind[:autovar_12] = it
it=(_append(bind[:ary_1],bind[:autovar_12])) };next FAIL if it==FAIL },proc{it=clas(Strin);next FAIL if it==FAIL
bind[:autovar_13] = it
it=_pass(true,bind[:autovar_13]){it=vars_in();next FAIL if it==FAIL
bind[:autovar_14] = it
it=(_append(bind[:ary_1],bind[:autovar_14])) };next FAIL if it==FAIL },proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_15] = it
it=_pass(true,bind[:autovar_15]){it=vars_in();next FAIL if it==FAIL
bind[:autovar_16] = it
it=(_append(bind[:ary_1],bind[:autovar_16])) };next FAIL if it==FAIL },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_17] = it
it=_pass(true,bind[:autovar_17]){it=(@src.name)
bind[:autovar_18] = it
it=(bind[:autovar_18]=[bind[:autovar_18]])
it=_pass(true,bind[:autovar_18]){it=vars_in();next FAIL if it==FAIL
bind[:autovar_19] = it
it=(_append(bind[:ary_1],bind[:autovar_19])) };next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=clas(Local);next FAIL if it==FAIL
bind[:autovar_20] = it
it=_pass(true,bind[:autovar_20]){it=anything();next FAIL if it==FAIL
bind[:name_1] = it
it=(@marked<<@src.self if bind[:name_1]=="_result")
it=(@src.self)
bind[:autovar_21] = it
it=(_append(bind[:ary_1],bind[:autovar_21])) };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_22]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_22]
it=bind[:ary_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end

end


class Dead_Code_Deleter < AmethystOptimizer
def trans()
bind={}; 
  it=nil

it=_or(proc{it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=(@src.name)
bind[:name_1] = it
it=(@src.reachable)
bind[:it_1] = it
it=(@reachable=bind[:it_1])
it=(@src.args)
bind[:autovar_2] = it
it=(bind[:autovar_2]=[bind[:autovar_2]])
it=_pass(true,bind[:autovar_2]){it=args();next FAIL if it==FAIL
bind[:args_1] = it};next FAIL if it==FAIL
it=(@src.body)
bind[:autovar_3] = it
it=(bind[:autovar_3]=[bind[:autovar_3]])
it=_pass(true,bind[:autovar_3]){it=trans();next FAIL if it==FAIL
bind[:body_1] = it};next FAIL if it==FAIL
it=(@src.locals)
bind[:locals_1] = it };next FAIL if it==FAIL
it=Rule.create( {:args=>bind[:args_1],:body=>bind[:body_1],:locals=>bind[:locals_1],:name=>bind[:name_1] })
bind[:_result_1] = it },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_4] = it
it=_pass(true,bind[:autovar_4]){it=(@src.self)
bind[:this_1] = it
while true
bind[:autovar_5]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5] };next FAIL if it==FAIL
it=(@reachable[bind[:this_1]] ? bind[:this_1] : Act[])
bind[:_result_1] = it },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_6] = it
it=_pass(true,bind[:autovar_6]){it=(@src.name)
bind[:name_1] = it
it=(@src.expr)
bind[:autovar_7] = it
it=(bind[:autovar_7]=[bind[:autovar_7]])
it=_pass(true,bind[:autovar_7]){it=trans();next FAIL if it==FAIL
bind[:expr_1] = it};next FAIL if it==FAIL
it=(@src.append)
bind[:append_1] = it };next FAIL if it==FAIL
it=(@reachable[bind[:name_1]] ? _Set(bind[:name_1],bind[:expr_1],bind[:append_1]) : bind[:expr_1])
bind[:_result_1] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_8] = it
it=_pass(true,bind[:autovar_8]){it=(@src.self)
bind[:this_1] = it};next FAIL if it==FAIL
it=(@reachable[bind[:this_1]] ? bind[:this_1] : Act[])
bind[:_result_1] = it },proc{it=clas(Local);next FAIL if it==FAIL
bind[:autovar_9] = it
it=_pass(true,bind[:autovar_9]){while true
bind[:autovar_10]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_10]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_10]
it=(@src.self)
bind[:this_1] = it };next FAIL if it==FAIL
it=(@reachable[bind[:this_1]] ? bind[:this_1] : Act[])
bind[:_result_1] = it },proc{it=super();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end

end



class Communize_Or < AmethystOptimizer
def trans()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:ary_1] = it
it=_or(proc{it=clas(Or);next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=_lookahead(false){it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=trans();next FAIL if it==FAIL
bind[:first_1] = it
while true
bind[:autovar_4]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4] };next FAIL if it==FAIL };next FAIL if it==FAIL
while true
bind[:autovar_9]=@input;r=it=clas(Seq);break FAIL if it==FAIL
bind[:autovar_5] = it
it=_pass(true,bind[:autovar_5]){it=trans();next FAIL if it==FAIL
bind[:fst_1] = it
it=(bind[:first_1].isomorphic(bind[:fst_1]))||FAIL;next FAIL if it==FAIL
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_7]=@input;r=it=trans();break FAIL if it==FAIL
bind[:autovar_6] = it
it=(_append(bind[:autovar_1],bind[:autovar_6])) 
 break FAIL if r==FAIL
 (bind[:autovar_7]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_7]
it=bind[:autovar_1]
bind[:rest_1] = it
it=(Seq[{:ary=>bind[:rest_1]}])
bind[:autovar_8] = it
it=(_append(bind[:ary_1],bind[:autovar_8])) };break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (bind[:autovar_9]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_9] };next FAIL if it==FAIL
it=(Seq[bind[:first_1] ,Or[{:ary=>bind[:ary_1]}] ])
bind[:_result_1] = it },proc{it=super();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end

end


class Move_Assignments < AmethystOptimizer
def move(a0,a1)
bind={}; bind[:append_1]=a0;bind[:name_1]=a1
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=_or(proc{it=clas(Or);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_5]=@input;r=it=move(bind[:append_1],bind[:name_1]);break FAIL if it==FAIL
bind[:autovar_4] = it
it=(_append(bind[:autovar_1],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_1]
bind[:ary_1] = it };next FAIL if it==FAIL
it=Or.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it },proc{it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_6] = it
it=_pass(true,bind[:autovar_6]){it=([])
bind[:autovar_2] = it
while true
bind[:autovar_9]=@input;r=it=anything();break FAIL if it==FAIL
bind[:el_1] = it
it=_or(proc{it=_lookahead(false){it=eof();next FAIL if it==FAIL};next FAIL if it==FAIL
it=bind[:el_1]
bind[:autovar_7] = it
it=(bind[:autovar_7]=[bind[:autovar_7]])
it=_pass(true,bind[:autovar_7]){it=move(bind[:append_1],bind[:name_1]);next FAIL if it==FAIL
bind[:autovar_8] = it};next FAIL if it==FAIL },proc{it=bind[:el_1]
bind[:autovar_8] = it});break FAIL if it==FAIL
it=(_append(bind[:autovar_2],bind[:autovar_8])) 
 break FAIL if r==FAIL
 (bind[:autovar_9]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_9]
it=bind[:autovar_2]
bind[:ary_1] = it };next FAIL if it==FAIL
it=Seq.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it },proc{it=clas(Pass);next FAIL if it==FAIL
bind[:autovar_10] = it
it=_pass(true,bind[:autovar_10]){it=(@src.var)
bind[:var_1] = it
it=(@src.to)
bind[:autovar_11] = it
it=(bind[:autovar_11]=[bind[:autovar_11]])
it=_pass(true,bind[:autovar_11]){it=move(bind[:append_1],bind[:name_1]);next FAIL if it==FAIL
bind[:to_1] = it};next FAIL if it==FAIL
it=(@src.enter)
bind[:enter_1] = it };next FAIL if it==FAIL
it=Pass.create( {:ary=>bind[:ary_1],:enter=>bind[:enter_1],:to=>bind[:to_1],:var=>bind[:var_1] })
bind[:_result_1] = it },proc{it=anything();next FAIL if it==FAIL
bind[:it_1] = it
it=(_Set(bind[:name_1],bind[:it_1],bind[:append_1]))
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def trans()
bind={}; 
  it=nil

it=_or(proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=(@src.name)
bind[:name_1] = it
it=(@src.expr)
bind[:autovar_2] = it
it=(bind[:autovar_2]=[bind[:autovar_2]])
it=_pass(true,bind[:autovar_2]){it=trans();next FAIL if it==FAIL
bind[:expr_1] = it};next FAIL if it==FAIL
it=(@src.append)
bind[:append_1] = it
it=bind[:expr_1]
bind[:autovar_3] = it
it=(bind[:autovar_3]=[bind[:autovar_3]])
it=_pass(true,bind[:autovar_3]){it=move(bind[:append_1],bind[:name_1]);next FAIL if it==FAIL
bind[:_result_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=super();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end

end

class AmethystTranslator < Amethyst
def arg()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=_or(proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_5]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_4] = it
it=(_append(bind[:autovar_1],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_1]
bind[:a_1] = it };next FAIL if it==FAIL
it=(bind[:a_1]*"")
bind[:_result_1] = it },proc{it=clas(Strin);next FAIL if it==FAIL
bind[:autovar_6] = it
it=_pass(true,bind[:autovar_6]){it=([])
bind[:autovar_2] = it
while true
bind[:autovar_8]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_7] = it
it=(_append(bind[:autovar_2],bind[:autovar_7])) 
 break FAIL if r==FAIL
 (bind[:autovar_8]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_8]
it=bind[:autovar_2]
bind[:a_1] = it };next FAIL if it==FAIL
it=(bind[:a_1]*"")
bind[:_result_1] = it },proc{it=clas(Exp);next FAIL if it==FAIL
bind[:autovar_9] = it
it=_pass(true,bind[:autovar_9]){it=transfn();next FAIL if it==FAIL
bind[:t_1] = it};next FAIL if it==FAIL
it=bind[:t_1]
bind[:_result_1] = it },proc{it=clas(Key);next FAIL if it==FAIL
bind[:autovar_10] = it
it=_pass(true,bind[:autovar_10]){it=(@src.name)
bind[:name_1] = it};next FAIL if it==FAIL
it=("@src.#{bind[:name_1]}")
bind[:_result_1] = it },proc{it=clas(Local);next FAIL if it==FAIL
bind[:autovar_11] = it
it=_pass(true,bind[:autovar_11]){while true
bind[:autovar_12]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_12]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_12]
it=("bind[:#{@src.desc}]")
bind[:_result_1] = it };next FAIL if it==FAIL },proc{it=clas(Global);next FAIL if it==FAIL
bind[:autovar_13] = it
it=_pass(true,bind[:autovar_13]){it=anything();next FAIL if it==FAIL
bind[:name_1] = it};next FAIL if it==FAIL
it=("@#{bind[:name_1]}")
bind[:_result_1] = it },proc{it=anything();next FAIL if it==FAIL
bind[:_result_1] = it});return FAIL if it==FAIL
it=bind[:_result_1]  
end
def args()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=_or(proc{it=clas(Array);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_5]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_4] = it
it=(_append(bind[:autovar_1],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_1]
bind[:a_1] = it };next FAIL if it==FAIL
it=(bind[:a_1]*",")
bind[:_result_1] = it },proc{it=([])
bind[:autovar_2] = it
while true
bind[:autovar_7]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_6] = it
it=(_append(bind[:autovar_2],bind[:autovar_6])) 
 break FAIL if r==FAIL
 (bind[:autovar_7]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_7]
it=bind[:autovar_2]
bind[:a_1] = it
it=(bind[:a_1]*",")
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def failwrap(a0)
bind={}; bind[:s_1]=a0
  it=nil

it=("#{bind[:s_1]};#{@returnword} FAIL if it==FAIL" )
bind[:_result_1] = it
it=bind[:_result_1]  
end
def itrans()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=_or(proc{it=char();next FAIL if it==FAIL
bind[:autovar_2] = it},proc{it=trans();next FAIL if it==FAIL
bind[:autovar_2] = it});break FAIL if it==FAIL
it=(_append(bind[:autovar_1],bind[:autovar_2])) 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=bind[:autovar_1]
bind[:r_1] = it
it=(bind[:r_1]*"")
bind[:_result_1] = it
it=bind[:_result_1]  
end
def rw(a0,a1)
bind={}; bind[:word_1]=a0;bind[:prc_1]=a1
  it=nil

it=(@returnword)
bind[:rwo_1] = it
it=(@returnword=bind[:word_1])
it=apply(bind[:prc_1]);return FAIL if it==FAIL
bind[:x_1] = it
it=(@returnword=bind[:rwo_1];bind[:x_1])
bind[:_result_1] = it
it=bind[:_result_1]  
end
def trans()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=_or(proc{it=clas(Grammar);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=(@src.name)
bind[:name_1] = it
it=(@src.parent)
bind[:parent_1] = it
it=(@src.rules)
bind[:autovar_4] = it
it=(bind[:autovar_4]=[bind[:autovar_4]])
it=_pass(true,bind[:autovar_4]){it=transs();next FAIL if it==FAIL
bind[:body_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=("class #{bind[:name_1]} < #{bind[:parent_1]}\n#{bind[:body_1].sort}\nend\n")
bind[:_result_1] = it },proc{it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_5] = it
it=_pass(true,bind[:autovar_5]){it=(@x; Local.resetnumbering  )
it=rw('return',proc{it=(@src.name)
bind[:name_1] = it
it=(@src.body)
bind[:autovar_6] = it
it=(bind[:autovar_6]=[bind[:autovar_6]])
it=_pass(true,bind[:autovar_6]){it=trans();next FAIL if it==FAIL
bind[:body_1] = it
bind[:_result_1] = it};next FAIL if it==FAIL
it=bind[:_result_1] });next FAIL if it==FAIL
it=("def #{bind[:name_1]}(#{map_index(@src.args){|i| "a#{i}"}*","})\nbind={}; #{@src.args.size.times.map{|i| "bind[:#{@src.args[i].desc}]=a#{i}"}*";"}\n  it=nil\n\n#{bind[:body_1]} \nend\n")
bind[:_result_1] = it };next FAIL if it==FAIL },proc{it=clas(Or);next FAIL if it==FAIL
bind[:autovar_7] = it
it=_pass(true,bind[:autovar_7]){it=rw('next', proc{it=([])
bind[:autovar_1] = it
while true
bind[:autovar_9]=@input;r=it=transfn();break FAIL if it==FAIL
bind[:autovar_8] = it
it=(_append(bind[:autovar_1],bind[:autovar_8])) 
 break FAIL if r==FAIL
 (bind[:autovar_9]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_9]
it=bind[:autovar_1]
bind[:ors_1] = it
bind[:_result_1] = it
it=bind[:_result_1] });next FAIL if it==FAIL};next FAIL if it==FAIL
it=failwrap("it=_or(#{bind[:ors_1]*","})");next FAIL if it==FAIL
bind[:_result_1] = it },proc{it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_10] = it
it=_pass(true,bind[:autovar_10]){it=([])
bind[:autovar_2] = it
while true
bind[:autovar_12]=@input;r=it=trans();break FAIL if it==FAIL
bind[:autovar_11] = it
it=(_append(bind[:autovar_2],bind[:autovar_11])) 
 break FAIL if r==FAIL
 (bind[:autovar_12]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_12]
it=bind[:autovar_2]
bind[:t_1] = it };next FAIL if it==FAIL
it=("#{bind[:t_1]*"\n"} ")
bind[:_result_1] = it },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_13] = it
it=_pass(true,bind[:autovar_13]){it=args();next FAIL if it==FAIL
bind[:t_1] = it
it=(@src.pred)
bind[:pred_1] = it };next FAIL if it==FAIL
it=(bind[:pred_1] ?  failwrap("it=(#{bind[:t_1]})||FAIL") : "it=(#{bind[:t_1]})")
bind[:_result_1] = it },proc{it=clas(Lookahead);next FAIL if it==FAIL
bind[:autovar_14] = it
it=_pass(true,bind[:autovar_14]){it=(@src.neg)
bind[:neg_1] = it
it=rw('next',proc{it=trans();next FAIL if it==FAIL
bind[:t_1] = it
bind[:_result_1] = it
it=bind[:_result_1] });next FAIL if it==FAIL };next FAIL if it==FAIL
it=failwrap("it=_lookahead(#{!!bind[:neg_1]}){#{bind[:t_1]}}");next FAIL if it==FAIL
bind[:_result_1] = it },proc{it=clas(Comment);next FAIL if it==FAIL
bind[:autovar_15] = it
it=_pass(true,bind[:autovar_15]){it=anything();next FAIL if it==FAIL};next FAIL if it==FAIL
it=("")
bind[:_result_1] = it },proc{it=clas(Many);next FAIL if it==FAIL
bind[:autovar_16] = it
it=_pass(true,bind[:autovar_16]){it=rw('break', proc{it=trans();next FAIL if it==FAIL
bind[:t_1] = it
bind[:_result_1] = it
it=bind[:_result_1] } );next FAIL if it==FAIL
it=(@src.o)
bind[:autovar_17] = it
it=(bind[:autovar_17]=[bind[:autovar_17]])
it=_pass(true,bind[:autovar_17]){it=arg();next FAIL if it==FAIL
bind[:o_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=("while true\n#{bind[:o_1]}=@input;r=#{bind[:t_1]}\n break FAIL if r==FAIL\n (#{bind[:o_1]}=@input;@stop=nil;break FAIL) if @stop==true\nend;@input=#{bind[:o_1]}")
bind[:_result_1] = it },proc{it=clas(Apply);next FAIL if it==FAIL
bind[:autovar_18] = it
it=_pass(true,bind[:autovar_18]){it=clas(Array);next FAIL if it==FAIL
bind[:autovar_19] = it
it=_pass(true,bind[:autovar_19]){it=anything();next FAIL if it==FAIL
it=anything();next FAIL if it==FAIL
bind[:name_1] = it };next FAIL if it==FAIL
it=args();next FAIL if it==FAIL
bind[:argss_1] = it };next FAIL if it==FAIL
it=failwrap("it=_foreign(:#{bind[:name_1] } #{bind[:argss_1]!=[] ? ",#{bind[:argss_1]}" : "" })");next FAIL if it==FAIL
bind[:_result_1] = it },proc{it=clas(Apply);next FAIL if it==FAIL
bind[:autovar_20] = it
it=_pass(true,bind[:autovar_20]){it=anything();next FAIL if it==FAIL
bind[:name_1] = it
it=args();next FAIL if it==FAIL
bind[:argss_1] = it };next FAIL if it==FAIL
it=failwrap("it=#{bind[:name_1]}(#{bind[:argss_1]})");next FAIL if it==FAIL
bind[:_result_1] = it },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_21] = it
it=_pass(true,bind[:autovar_21]){it=(@src.name)
bind[:autovar_22] = it
it=(bind[:autovar_22]=[bind[:autovar_22]])
it=_pass(true,bind[:autovar_22]){it=arg();next FAIL if it==FAIL
bind[:name_1] = it};next FAIL if it==FAIL
it=(@src.expr)
bind[:autovar_23] = it
it=(bind[:autovar_23]=[bind[:autovar_23]])
it=_pass(true,bind[:autovar_23]){it=trans();next FAIL if it==FAIL
bind[:expr_1] = it};next FAIL if it==FAIL
it=(@src.append)
bind[:append_1] = it };next FAIL if it==FAIL
it=("#{bind[:expr_1]}\n" + (bind[:append_1] ? "#{bind[:name_1]}||=[];_append(#{bind[:name_1]},it)" : "#{bind[:name_1]} = it"))
bind[:_result_1] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_24] = it
it=_pass(true,bind[:autovar_24]){it=(@src.name)
bind[:name_1] = it
it=(@src.args)
bind[:autovar_25] = it
it=(bind[:autovar_25]=[bind[:autovar_25]])
it=_pass(true,bind[:autovar_25]){it=args();next FAIL if it==FAIL
bind[:argss_1] = it};next FAIL if it==FAIL
it=(@src.vars)
bind[:vars_1] = it };next FAIL if it==FAIL
it=("it=#{bind[:name_1]}.create(#{bind[:argss_1]} {#{bind[:vars_1].map{|l| ":#{l[0]}=>bind[:#{l.desc}]" }.sort*","} })")
bind[:_result_1] = it },proc{it=clas(Local);next FAIL if it==FAIL
bind[:autovar_26] = it
it=_pass(true,bind[:autovar_26]){while true
bind[:autovar_27]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_27]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_27]
it=("it=bind[:#{@src.desc}]")
bind[:_result_1] = it };next FAIL if it==FAIL },proc{it=clas(Pass);next FAIL if it==FAIL
bind[:autovar_28] = it
it=_pass(true,bind[:autovar_28]){it=rw('next',proc{it=(@src.to)
bind[:autovar_29] = it
it=(bind[:autovar_29]=[bind[:autovar_29]])
it=_pass(true,bind[:autovar_29]){it=trans();next FAIL if it==FAIL
bind[:to_1] = it};next FAIL if it==FAIL
it=(@src.var)
bind[:autovar_30] = it
it=(bind[:autovar_30]=[bind[:autovar_30]])
it=_pass(true,bind[:autovar_30]){it=arg();next FAIL if it==FAIL
bind[:var_1] = it};next FAIL if it==FAIL
it=(@src.enter)
bind[:enter_1] = it
bind[:_result_1] = it
it=bind[:_result_1] });next FAIL if it==FAIL};next FAIL if it==FAIL
it=failwrap("it=_pass(#{!!bind[:enter_1]},#{bind[:var_1]}){#{bind[:to_1]}}");next FAIL if it==FAIL
bind[:_result_1] = it },proc{it=clas(Cut);next FAIL if it==FAIL
bind[:autovar_31] = it
it=_pass(true,bind[:autovar_31]){ };next FAIL if it==FAIL
it=("@cut=true;it")
bind[:_result_1] = it },proc{it=clas(Stop);next FAIL if it==FAIL
bind[:autovar_32] = it
it=_pass(true,bind[:autovar_32]){ };next FAIL if it==FAIL
it=("@stop=true;it")
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def transfn()
bind={}; 
  it=nil

it=trans();return FAIL if it==FAIL
bind[:t_1] = it
it=("proc{#{bind[:t_1]}}" )
bind[:_result_1] = it
it=bind[:_result_1]  
end
def transs()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=anything();return FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_4]=@input;r=it=trans();break FAIL if it==FAIL
bind[:autovar_3] = it
it=(_append(bind[:autovar_1],bind[:autovar_3])) 
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4]
it=bind[:autovar_1]
bind[:t_1] = it };return FAIL if it==FAIL
it=bind[:t_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end

end

