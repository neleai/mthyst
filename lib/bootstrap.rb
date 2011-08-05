class Amethyst < AmethystCore
def _()
bind={}; 
  it=nil

it=space();return FAIL if it==FAIL
bind[:_result_10] = it
it=bind[:_result_10]  
end
def _false()
bind={}; 
  it=nil

it=exactly(false);return FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23]  
end
def _true()
bind={}; 
  it=nil

it=exactly(true);return FAIL if it==FAIL
bind[:_result_22] = it
it=bind[:_result_22]  
end
def alnum()
bind={}; 
  it=nil

it=letterOrDigit();return FAIL if it==FAIL
bind[:_result_17] = it
it=bind[:_result_17]  
end
def alpha()
bind={}; 
  it=nil

it=letter();return FAIL if it==FAIL
bind[:_result_16] = it
it=bind[:_result_16]  
end
def char()
bind={}; 
  it=nil

it=anything();return FAIL if it==FAIL
bind[:c_6] = it
it=(bind[:c_6].is_a? String )||FAIL;return FAIL if it==FAIL
it=bind[:c_6]
bind[:_result_6] = it
it=bind[:_result_6]  
end
def clas(a0)
bind={}; bind[:cls_24]=a0
  it=nil

it=anything();return FAIL if it==FAIL
bind[:i_24] = it
it=(bind[:i_24].is_a?(bind[:cls_24]))||FAIL;return FAIL if it==FAIL
it=bind[:i_24]
bind[:_result_24] = it
it=bind[:_result_24]  
end
def digit()
bind={}; 
  it=nil

it=regch(/[0-9]/);return FAIL if it==FAIL
bind[:_result_11] = it
it=bind[:_result_11]  
end
def empty()
bind={}; 
  it=nil

it=(nil)
bind[:_result_5] = it
it=bind[:_result_5]  
end
def endline()
bind={}; 
  it=nil

it=_or(proc{it=seq("\r\n");next FAIL if it==FAIL
bind[:_result_7] = it},proc{it=seq("\r");next FAIL if it==FAIL
bind[:_result_7] = it},proc{it=seq("\n");next FAIL if it==FAIL
bind[:_result_7] = it});return FAIL if it==FAIL
it=bind[:_result_7]  
end
def eof()
bind={}; 
  it=nil

it=_lookahead(true){it=anything();next FAIL if it==FAIL};return FAIL if it==FAIL
bind[:_result_4] = it
it=bind[:_result_4]  
end
def exactly(a0)
bind={}; bind[:wanted_21]=a0
  it=nil

it=anything();return FAIL if it==FAIL
bind[:got_21] = it
it=(bind[:wanted_21] == bind[:got_21])||FAIL;return FAIL if it==FAIL
it=bind[:wanted_21]
bind[:_result_21] = it
it=bind[:_result_21]  
end
def letter()
bind={}; 
  it=nil

it=_or(proc{it=lower();next FAIL if it==FAIL
bind[:_result_14] = it},proc{it=upper();next FAIL if it==FAIL
bind[:_result_14] = it});return FAIL if it==FAIL
it=bind[:_result_14]  
end
def letterOrDigit()
bind={}; 
  it=nil

it=_or(proc{it=letter();next FAIL if it==FAIL
bind[:_result_15] = it},proc{it=digit();next FAIL if it==FAIL
bind[:_result_15] = it});return FAIL if it==FAIL
it=bind[:_result_15]  
end
def listOf(a0,a1)
bind={}; bind[:rule_20]=a0;bind[:delim_20]=a1
  it=nil

it=_or(proc{it=apply(bind[:rule_20]);next FAIL if it==FAIL
bind[:autovar_4] = it
it=(bind[:f_20]||=[];_append(bind[:f_20],bind[:autovar_4]))
it=([])
bind[:autovar_5] = it
while true
bind[:autovar_7]=@input;r=it=apply(bind[:delim_20]);break FAIL if it==FAIL
it=apply(bind[:rule_20]);break FAIL if it==FAIL
bind[:autovar_6] = it
it=(bind[:autovar_5]||=[];_append(bind[:autovar_5],bind[:autovar_6])) 
 break FAIL if r==FAIL
 (bind[:autovar_7]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_7]
it=bind[:autovar_5]
bind[:autovar_8] = it
it=(bind[:f_20]||=[];_append(bind[:f_20],bind[:autovar_8]))
it=bind[:f_20]
bind[:_result_20] = it },proc{it=empty();next FAIL if it==FAIL
it=([])
bind[:_result_20] = it });return FAIL if it==FAIL
it=bind[:_result_20]  
end
def lower()
bind={}; 
  it=nil

it=regch(/[a-z]/);return FAIL if it==FAIL
bind[:_result_12] = it
it=bind[:_result_12]  
end
def regch(a0)
bind={}; bind[:regex_3]=a0
  it=nil

it=char();return FAIL if it==FAIL
bind[:c_3] = it
it=(bind[:regex_3].match(bind[:c_3]))||FAIL;return FAIL if it==FAIL
it=bind[:c_3]
bind[:_result_3] = it
it=bind[:_result_3]  
end
def space()
bind={}; 
  it=nil

it=regch(/[\s\t\r\n\f]/);return FAIL if it==FAIL
bind[:_result_8] = it
it=bind[:_result_8]  
end
def spaces()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=space();break FAIL if it==FAIL
bind[:autovar_2] = it
it=(bind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_2])) 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=bind[:autovar_1]
bind[:_result_9] = it
it=bind[:_result_9]  
end
def token(a0)
bind={}; bind[:s_25]=a0
  it=nil

it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_25]);return FAIL if it==FAIL
bind[:_result_25] = it
it=bind[:_result_25]  
end
def upper()
bind={}; 
  it=nil

it=regch(/[A-Z]/);return FAIL if it==FAIL
bind[:_result_13] = it
it=bind[:_result_13]  
end
def word()
bind={}; 
  it=nil

it=_or(proc{it=alpha();next FAIL if it==FAIL
bind[:_result_19] = it},proc{it=seq("_");next FAIL if it==FAIL
bind[:_result_19] = it});return FAIL if it==FAIL
it=bind[:_result_19]  
end
def xdigit()
bind={}; 
  it=nil

it=regch(/[0-9a-fA-F]/);return FAIL if it==FAIL
bind[:_result_18] = it
it=bind[:_result_18]  
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
bind={}; bind[:o_46]=a0;bind[:c_46]=a1
  it=nil

it=seq(bind[:o_46]);return FAIL if it==FAIL
it=token("");return FAIL if it==FAIL
it=([])
bind[:autovar_49] = it
while true
bind[:autovar_51]=@input;r=it=rubyarg();break FAIL if it==FAIL
bind[:autovar_50] = it
it=(bind[:autovar_49]||=[];_append(bind[:autovar_49],bind[:autovar_50])) 
 break FAIL if r==FAIL
 (bind[:autovar_51]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_51]
it=bind[:autovar_49]
bind[:r_46] = it
it=seq(bind[:c_46]);return FAIL if it==FAIL
it=bind[:r_46]
bind[:_result_46] = it
it=bind[:_result_46]  
end
def _args(a0,a1)
bind={}; bind[:o_45]=a0;bind[:c_45]=a1
  it=nil

it=__args(bind[:o_45],bind[:c_45]);return FAIL if it==FAIL
bind[:r_45] = it
it=(Args[{:ary=>([bind[:o_45]]+bind[:r_45]+[bind[:c_45]])}])
bind[:_result_45] = it
it=bind[:_result_45]  
end
def addargs()
bind={}; 
  it=nil

while true
bind[:autovar_46]=@input;r=it=clas(Args);break FAIL if it==FAIL
bind[:autovar_43] = it
it=_pass(true,bind[:autovar_43]){it=anything();next FAIL if it==FAIL
bind[:name_41] = it
it=(_Local(bind[:name_41]) )
bind[:autovar_42] = it
it=(bind[:result_41]||=[];_append(bind[:result_41],bind[:autovar_42])) };break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (bind[:autovar_46]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_46]
it=(bind[:result_41] || [])
bind[:_result_41] = it
it=bind[:_result_41]  
end
def application()
bind={}; 
  it=nil

it=_or(proc{it=name();next FAIL if it==FAIL
bind[:klas_36] = it
it=seq("::");next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:rule_36] = it
it=([bind[:klas_36],bind[:rule_36]])
bind[:rule_36] = it },proc{it=name();next FAIL if it==FAIL
bind[:rule_36] = it});return FAIL if it==FAIL
it=argsOpt('(',')');return FAIL if it==FAIL
bind[:arg_36] = it
it=(Apply[bind[:rule_36],bind[:arg_36]])
bind[:_result_36] = it
it=bind[:_result_36]  
end
def args(a0,a1)
bind={}; bind[:o_44]=a0;bind[:c_44]=a1
  it=nil

it=__args(bind[:o_44],bind[:c_44]);return FAIL if it==FAIL
bind[:r_44] = it
it=(bind[:r_44]+[','])
bind[:autovar_48] = it
it=_pass(false,bind[:autovar_48]){it=anything();next FAIL if it==FAIL
bind[:autovar_47] = it
it=_pass(true,bind[:autovar_47]){it=procargs();next FAIL if it==FAIL
bind[:_result_44] = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_44]  
end
def argsOpt(a0,a1)
bind={}; bind[:o_43]=a0;bind[:c_43]=a1
  it=nil

it=_or(proc{it=args(bind[:o_43],bind[:c_43]);next FAIL if it==FAIL
bind[:_result_43] = it},proc{it=empty();next FAIL if it==FAIL
it=([])
bind[:_result_43] = it });return FAIL if it==FAIL
it=bind[:_result_43]  
end
def atomicHostExpr()
bind={}; 
  it=nil

it=([])
bind[:autovar_86] = it
while true
bind[:autovar_88]=@input;r=it=_lookahead(true){it=endline();next FAIL if it==FAIL};break FAIL if it==FAIL
it=anything();break FAIL if it==FAIL
bind[:autovar_87] = it
it=(bind[:autovar_86]||=[];_append(bind[:autovar_86],bind[:autovar_87])) 
 break FAIL if r==FAIL
 (bind[:autovar_88]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_88]
it=bind[:autovar_86]
bind[:s_56] = it
it=("{#{bind[:s_56]*""}}")
bind[:autovar_90] = it
it=_pass(false,bind[:autovar_90]){it=anything();next FAIL if it==FAIL
bind[:autovar_89] = it
it=_pass(true,bind[:autovar_89]){it=inlineHostExpr();next FAIL if it==FAIL
bind[:_result_56] = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_56]  
end
def choice()
bind={}; 
  it=nil

it=listOf('sequence',proc{it=token("|");return FAIL if it==FAIL
bind[:_result_31] = it
it=bind[:_result_31] });return FAIL if it==FAIL
bind[:ary_31] = it
it=Or.create( {:ary=>bind[:ary_31] })
bind[:_result_31] = it
it=bind[:_result_31]  
end
def className()
bind={}; 
  it=nil

it=token("");return FAIL if it==FAIL
it=upper();return FAIL if it==FAIL
bind[:autovar_74] = it
it=(bind[:autovar_73]||=[];_append(bind[:autovar_73],bind[:autovar_74]))
it=([])
bind[:autovar_70] = it
while true
bind[:autovar_72]=@input;r=it=nameRest();break FAIL if it==FAIL
bind[:autovar_71] = it
it=(bind[:autovar_70]||=[];_append(bind[:autovar_70],bind[:autovar_71])) 
 break FAIL if r==FAIL
 (bind[:autovar_72]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_72]
it=bind[:autovar_70]
bind[:autovar_75] = it
it=(bind[:autovar_73]||=[];_append(bind[:autovar_73],bind[:autovar_75]))
it=bind[:autovar_73]
bind[:it_52] = it
it=(leterize(bind[:it_52]*""))
bind[:_result_52] = it
it=bind[:_result_52]  
end
def collect(a0)
bind={}; bind[:ors_38]=a0
  it=nil

it=(a=autovar; Seq[Or[{:ary=>bind[:ors_38].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],Act[a]])
bind[:_result_38] = it
it=bind[:_result_38]  
end
def eChar()
bind={}; 
  it=nil

it=_or(proc{it=seq("\\");next FAIL if it==FAIL
it=char();next FAIL if it==FAIL
bind[:c_39] = it
it=("\\#{bind[:c_39]}")
bind[:_result_39] = it },proc{it=_args('#{','}');next FAIL if it==FAIL
bind[:_result_39] = it},proc{it=char();next FAIL if it==FAIL
bind[:_result_39] = it});return FAIL if it==FAIL
it=bind[:_result_39]  
end
def expression()
bind={}; 
  it=nil

it=choice();return FAIL if it==FAIL
bind[:_result_30] = it
it=bind[:_result_30]  
end
def grammar()
bind={}; 
  it=nil

it=token("amethyst");return FAIL if it==FAIL
it=name();return FAIL if it==FAIL
bind[:name_28] = it
it=_or(proc{it=token("<");next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:parent_28] = it },proc{it=empty();next FAIL if it==FAIL
it=(bind[:parent_28]="Amethyst") });return FAIL if it==FAIL
it=token("{");return FAIL if it==FAIL
it=([])
bind[:autovar_16] = it
while true
bind[:autovar_18]=@input;r=it=rule();break FAIL if it==FAIL
bind[:autovar_17] = it
it=(bind[:autovar_16]||=[];_append(bind[:autovar_16],bind[:autovar_17])) 
 break FAIL if r==FAIL
 (bind[:autovar_18]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_18]
it=bind[:autovar_16]
bind[:rules_28] = it
it=token("}");return FAIL if it==FAIL
it=Grammar.create( {:name=>bind[:name_28],:parent=>bind[:parent_28],:rules=>bind[:rules_28] })
bind[:_result_28] = it
it=bind[:_result_28]  
end
def igrammar()
bind={}; 
  it=nil

it=([])
bind[:autovar_13] = it
while true
bind[:autovar_15]=@input;r=it=_or(proc{it=([])
bind[:autovar_9] = it
it=_lookahead(true){it=seq("amethyst");next FAIL if it==FAIL};next FAIL if it==FAIL
it=anything();next FAIL if it==FAIL
bind[:autovar_10] = it
it=(bind[:autovar_9]||=[];_append(bind[:autovar_9],bind[:autovar_10]))
while true
bind[:autovar_12]=@input;r=it=_lookahead(true){it=seq("amethyst");next FAIL if it==FAIL};break FAIL if it==FAIL
it=anything();break FAIL if it==FAIL
bind[:autovar_11] = it
it=(bind[:autovar_9]||=[];_append(bind[:autovar_9],bind[:autovar_11])) 
 break FAIL if r==FAIL
 (bind[:autovar_12]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_12]
it=bind[:autovar_9]
bind[:it_27] = it
it=(bind[:it_27]*"")
bind[:autovar_14] = it },proc{it=grammar();next FAIL if it==FAIL
bind[:autovar_14] = it});break FAIL if it==FAIL
it=(bind[:autovar_13]||=[];_append(bind[:autovar_13],bind[:autovar_14])) 
 break FAIL if r==FAIL
 (bind[:autovar_15]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_15]
it=bind[:autovar_13]
bind[:a_27] = it
it=bind[:a_27]
bind[:_result_27] = it
it=bind[:_result_27]  
end
def inlineHostExpr()
bind={}; 
  it=nil

it=args('{','}');return FAIL if it==FAIL
bind[:_result_54] = it
it=bind[:_result_54]  
end
def key()
bind={}; 
  it=nil

it=_or(proc{it=token("@");next FAIL if it==FAIL
it=className();next FAIL if it==FAIL
bind[:name_37] = it
it=argsOpt('[',']');next FAIL if it==FAIL
bind[:args_37] = it
it=(Object.const_get(bind[:name_37]).instance_variable_get(:@attrs))
bind[:vars_37] = it
it=Result.create( {:args=>bind[:args_37],:name=>bind[:name_37],:vars=>bind[:vars_37] })
bind[:_result_37] = it },proc{it=token("@");next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:name_37] = it
it=Key.create( {:args=>bind[:args_37],:name=>bind[:name_37] })
bind[:_result_37] = it },proc{it=token("@@");next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:name_37] = it
it=(Global[bind[:name_37]])
bind[:_result_37] = it });return FAIL if it==FAIL
it=bind[:_result_37]  
end
def modifier()
bind={}; 
  it=nil

it=_or(proc{it=term();next FAIL if it==FAIL
bind[:_result_34] = it},proc{it=token("#");next FAIL if it==FAIL
it=([])
bind[:autovar_25] = it
while true
bind[:autovar_27]=@input;r=it=_lookahead(true){it=endline();next FAIL if it==FAIL};break FAIL if it==FAIL
it=anything();break FAIL if it==FAIL
bind[:autovar_26] = it
it=(bind[:autovar_25]||=[];_append(bind[:autovar_25],bind[:autovar_26])) 
 break FAIL if r==FAIL
 (bind[:autovar_27]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_27]
it=bind[:autovar_25]
bind[:c_34] = it
it=(Comment[bind[:c_34]])
bind[:_result_34] = it });return FAIL if it==FAIL
it=bind[:_result_34]  
end
def name()
bind={}; 
  it=nil

it=token("");return FAIL if it==FAIL
it=nameFirst();return FAIL if it==FAIL
bind[:autovar_80] = it
it=(bind[:autovar_79]||=[];_append(bind[:autovar_79],bind[:autovar_80]))
it=([])
bind[:autovar_76] = it
while true
bind[:autovar_78]=@input;r=it=nameRest();break FAIL if it==FAIL
bind[:autovar_77] = it
it=(bind[:autovar_76]||=[];_append(bind[:autovar_76],bind[:autovar_77])) 
 break FAIL if r==FAIL
 (bind[:autovar_78]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_78]
it=bind[:autovar_76]
bind[:autovar_81] = it
it=(bind[:autovar_79]||=[];_append(bind[:autovar_79],bind[:autovar_81]))
it=bind[:autovar_79]
bind[:it_53] = it
it=(leterize(bind[:it_53]*""))
bind[:_result_53] = it
it=bind[:_result_53]  
end
def nameFirst()
bind={}; 
  it=nil

it=_or(proc{it=letter();next FAIL if it==FAIL
bind[:_result_50] = it},proc{it=seq("_");next FAIL if it==FAIL
bind[:_result_50] = it});return FAIL if it==FAIL
it=bind[:_result_50]  
end
def nameRest()
bind={}; 
  it=nil

it=_or(proc{it=nameFirst();next FAIL if it==FAIL
bind[:_result_51] = it},proc{it=digit();next FAIL if it==FAIL
bind[:_result_51] = it});return FAIL if it==FAIL
it=bind[:_result_51]  
end
def nr()
bind={}; 
  it=nil

it=_lookahead(true){it=name();next FAIL if it==FAIL
it=argsOpt('(',')');next FAIL if it==FAIL
it=token("=");next FAIL if it==FAIL };return FAIL if it==FAIL
bind[:_result_42] = it
it=bind[:_result_42]  
end
def number()
bind={}; 
  it=nil

it=([])
bind[:autovar_82] = it
it=regch(/[0-9]/);return FAIL if it==FAIL
bind[:autovar_83] = it
it=(bind[:autovar_82]||=[];_append(bind[:autovar_82],bind[:autovar_83]))
while true
bind[:autovar_85]=@input;r=it=regch(/[0-9]/);break FAIL if it==FAIL
bind[:autovar_84] = it
it=(bind[:autovar_82]||=[];_append(bind[:autovar_82],bind[:autovar_84])) 
 break FAIL if r==FAIL
 (bind[:autovar_85]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_85]
it=bind[:autovar_82]
bind[:_result_55] = it
it=bind[:_result_55]  
end
def prefixed()
bind={}; 
  it=nil

it=_or(proc{it=token("&");next FAIL if it==FAIL
it=inlineHostExpr();next FAIL if it==FAIL
bind[:expr_33] = it
it=(Pred[bind[:expr_33]])
bind[:_result_33] = it },proc{it=_or(proc{it=token("&");next FAIL if it==FAIL
bind[:neg_33] = it},proc{it=token("~");next FAIL if it==FAIL
bind[:neg_33] = it});next FAIL if it==FAIL
it=prefixed();next FAIL if it==FAIL
bind[:m_33] = it
it=(Lookahead[bind[:m_33],bind[:neg_33]=="~"])
bind[:_result_33] = it },proc{it=_or(proc{it=modifier();next FAIL if it==FAIL
bind[:from_33] = it},proc{it=token("");next FAIL if it==FAIL
it=_lookahead(false){it=regch(/[.:\[]/);next FAIL if it==FAIL};next FAIL if it==FAIL
it=_or(proc{it=token(".");next FAIL if it==FAIL},proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=(Apply["anything"])
bind[:from_33] = it });next FAIL if it==FAIL
while true
bind[:autovar_24]=@input;r=it=_lookahead(true){it=_();next FAIL if it==FAIL};break FAIL if it==FAIL
it=_or(proc{it=token("=>");next FAIL if it==FAIL
it=prefixed();next FAIL if it==FAIL
bind[:it_33] = it
it=(bind[:from_33]=Pass[bind[:from_33],bind[:it_33]]) },proc{it=token("[");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:it_33] = it
it=(bind[:from_33]=Enter[bind[:from_33],bind[:it_33]])
it=token("]");next FAIL if it==FAIL },proc{it=_or(proc{it=token("*");next FAIL if it==FAIL
bind[:one_33] = it},proc{it=token("+");next FAIL if it==FAIL
bind[:one_33] = it});next FAIL if it==FAIL
it=(Many[bind[:from_33],bind[:one_33]=="+"])
bind[:from_33] = it },proc{it=token("?");next FAIL if it==FAIL
it=(Or[bind[:from_33],Apply["empty"]])
bind[:from_33] = it },proc{it=token(":");next FAIL if it==FAIL
it=_or(proc{it=_or(proc{it=key();next FAIL if it==FAIL
bind[:name_33] = it},proc{it=name();next FAIL if it==FAIL
bind[:name_33] = it});next FAIL if it==FAIL
it=_or(proc{it=seq("[]");next FAIL if it==FAIL
it=(true)
bind[:append_33] = it },proc{it=empty();next FAIL if it==FAIL
it=(nil)
bind[:append_33] = it });next FAIL if it==FAIL
it=(_Set(bind[:name_33],bind[:from_33],bind[:append_33]))
bind[:from_33] = it },proc{it=inlineHostExpr();next FAIL if it==FAIL
bind[:e_33] = it
it=(Seq[_Set("it",bind[:from_33]) , Act[bind[:e_33]] ])
bind[:from_33] = it });next FAIL if it==FAIL });break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (bind[:autovar_24]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_24]
it=bind[:from_33]
bind[:_result_33] = it });return FAIL if it==FAIL
it=bind[:_result_33]  
end
def procargs()
bind={}; 
  it=nil

it=(@ary=[];@tmp=[])
while true
bind[:autovar_65]=@input;r=it=_or(proc{it=anything();next FAIL if it==FAIL
bind[:c_48] = it
it=(bind[:c_48]==',')||FAIL;next FAIL if it==FAIL
it=(@ary<<Args[{:ary=>@tmp}];@tmp=[]) },proc{it=procargs2();next FAIL if it==FAIL});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_65]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_65]
it=(@ary)
bind[:_result_48] = it
it=bind[:_result_48]  
end
def procargs2()
bind={}; 
  it=nil

it=_or(proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_69] = it
it=_pass(true,bind[:autovar_69]){it=([])
bind[:autovar_66] = it
while true
bind[:autovar_68]=@input;r=it=procargs2();break FAIL if it==FAIL
bind[:autovar_67] = it
it=(bind[:autovar_66]||=[];_append(bind[:autovar_66],bind[:autovar_67])) 
 break FAIL if r==FAIL
 (bind[:autovar_68]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_68]
it=bind[:autovar_66]
bind[:_result_49] = it };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
bind[:a_49] = it
it=(@tmp<<bind[:a_49])
bind[:_result_49] = it });return FAIL if it==FAIL
it=bind[:_result_49]  
end
def rubyarg()
bind={}; 
  it=nil

it=_or(proc{it=seq("`");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:e_47] = it
it=seq("`");next FAIL if it==FAIL
it=(Exp[_body(bind[:e_47])])
bind[:_result_47] = it },proc{it=_args('(',')');next FAIL if it==FAIL
bind[:_result_47] = it},proc{it=_args('[',']');next FAIL if it==FAIL
bind[:_result_47] = it},proc{it=_args('{','}');next FAIL if it==FAIL
bind[:_result_47] = it},proc{it=seq("\"");next FAIL if it==FAIL
bind[:autovar_52] = it
it=(bind[:s_47]||=[];_append(bind[:s_47],bind[:autovar_52]))
it=([])
bind[:autovar_53] = it
while true
bind[:autovar_55]=@input;r=it=_or(proc{it=seq("\"");next FAIL if it==FAIL
@cut=true;it
@stop=true;it
bind[:autovar_54] = it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_54] = it});break FAIL if it==FAIL
it=(bind[:autovar_53]||=[];_append(bind[:autovar_53],bind[:autovar_54])) 
 break FAIL if r==FAIL
 (bind[:autovar_55]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_55]
it=bind[:autovar_53]
bind[:autovar_56] = it
it=(bind[:s_47]||=[];_append(bind[:s_47],bind[:autovar_56]))
it=(Strin[connectstring(bind[:s_47])])
bind[:_result_47] = it },proc{it=seq("\'");next FAIL if it==FAIL
bind[:autovar_57] = it
it=(bind[:s_47]||=[];_append(bind[:s_47],bind[:autovar_57]))
it=([])
bind[:autovar_58] = it
while true
bind[:autovar_60]=@input;r=it=_or(proc{it=seq("\'");next FAIL if it==FAIL
@cut=true;it
@stop=true;it
bind[:autovar_59] = it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_59] = it});break FAIL if it==FAIL
it=(bind[:autovar_58]||=[];_append(bind[:autovar_58],bind[:autovar_59])) 
 break FAIL if r==FAIL
 (bind[:autovar_60]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_60]
it=bind[:autovar_58]
bind[:autovar_61] = it
it=(bind[:s_47]||=[];_append(bind[:s_47],bind[:autovar_61]))
it=(Strin[connectstring(bind[:s_47])])
bind[:_result_47] = it },proc{it=seq("...");next FAIL if it==FAIL
bind[:_result_47] = it},proc{it=seq("..");next FAIL if it==FAIL
bind[:_result_47] = it},proc{it=_or(proc{it=token(":@");next FAIL if it==FAIL
bind[:n_47] = it},proc{it=regch(/[$.:]/);next FAIL if it==FAIL
bind[:n_47] = it},proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=_lookahead(true){it=_();next FAIL if it==FAIL};next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:autovar_62] = it
it=(bind[:n_47]||=[];_append(bind[:n_47],bind[:autovar_62]))
it=bind[:n_47]
bind[:_result_47] = it },proc{it=_lookahead(true){it=_();next FAIL if it==FAIL};next FAIL if it==FAIL
it=key();next FAIL if it==FAIL
bind[:_result_47] = it },proc{it=regch(/[^`{}()'"\[\]]/);next FAIL if it==FAIL
bind[:_result_47] = it});return FAIL if it==FAIL
it=bind[:_result_47]  
end
def rule()
bind={}; 
  it=nil

it=(@locals=[];@bnding=Bnding[])
it=(@bnding)
bind[:bnding_29] = it
it=name();return FAIL if it==FAIL
bind[:name_29] = it
it=ruleargs();return FAIL if it==FAIL
bind[:args_29] = it
it=token("=");return FAIL if it==FAIL
it=expression();return FAIL if it==FAIL
bind[:body_29] = it
it=(_body(bind[:body_29]))
bind[:body_29] = it
it=(@locals.uniq)
bind[:locals_29] = it
it=Rule.create( {:args=>bind[:args_29],:bnding=>bind[:bnding_29],:body=>bind[:body_29],:locals=>bind[:locals_29],:name=>bind[:name_29] })
bind[:_result_29] = it
it=bind[:_result_29]  
end
def ruleargs()
bind={}; 
  it=nil

it=argsOpt('(',')');return FAIL if it==FAIL
bind[:autovar_41] = it
it=_pass(false,bind[:autovar_41]){it=anything();next FAIL if it==FAIL
bind[:autovar_40] = it
it=_pass(true,bind[:autovar_40]){it=addargs();next FAIL if it==FAIL
bind[:_result_40] = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_40]  
end
def sequence()
bind={}; 
  it=nil

it=([])
bind[:autovar_19] = it
while true
bind[:autovar_21]=@input;r=it=nr();break FAIL if it==FAIL
it=prefixed();break FAIL if it==FAIL
bind[:autovar_20] = it
it=(bind[:autovar_19]||=[];_append(bind[:autovar_19],bind[:autovar_20])) 
 break FAIL if r==FAIL
 (bind[:autovar_21]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_21]
it=bind[:autovar_19]
bind[:ary_32] = it
it=Seq.create( {:ary=>bind[:ary_32] })
bind[:_result_32] = it
it=bind[:_result_32]  
end
def term()
bind={}; 
  it=nil

it=_or(proc{it=className();next FAIL if it==FAIL
bind[:cls_35] = it
it=(Apply["clas",bind[:cls_35]])
bind[:_result_35] = it },proc{it=token("nested");next FAIL if it==FAIL
it=seq("(");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:expr_35] = it
it=token(")");next FAIL if it==FAIL
it=(Nested[bind[:expr_35]])
bind[:_result_35] = it },proc{it=token("break");next FAIL if it==FAIL
it=(Seq[Cut[],Stop[]])
bind[:_result_35] = it },proc{it=application();next FAIL if it==FAIL
bind[:_result_35] = it},proc{it=key();next FAIL if it==FAIL
bind[:it_35] = it
it=(bind[:it_35].is_a?(Result) ? bind[:it_35] : Act[Args[bind[:it_35]]])
bind[:_result_35] = it },proc{it=_or(proc{it=token("->");next FAIL if it==FAIL
it=atomicHostExpr();next FAIL if it==FAIL
bind[:x_35] = it },proc{it=token("");next FAIL if it==FAIL
it=inlineHostExpr();next FAIL if it==FAIL
bind[:x_35] = it });next FAIL if it==FAIL
it=(Act[bind[:x_35]])
bind[:_result_35] = it },proc{it=token("\"");next FAIL if it==FAIL
while true
bind[:autovar_31]=@input;r=it=_or(proc{it=seq("\"");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_28] = it
it=(bind[:s_35]||=[];_append(bind[:s_35],bind[:autovar_28])) });break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_31]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_31]
it=(Apply["token" ,quote(bind[:s_35])])
bind[:_result_35] = it },proc{it=token("'");next FAIL if it==FAIL
while true
bind[:autovar_35]=@input;r=it=_or(proc{it=seq("\'");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_32] = it
it=(bind[:s_35]||=[];_append(bind[:s_35],bind[:autovar_32])) });break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_35]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_35]
it=(Apply["seq"   ,quote(bind[:s_35])])
bind[:_result_35] = it },proc{it=number();next FAIL if it==FAIL
bind[:it_35] = it
it=(Apply["exactly",bind[:it_35]])
bind[:_result_35] = it },proc{it=token("<");next FAIL if it==FAIL
while true
bind[:autovar_39]=@input;r=it=_or(proc{it=token(">");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_36] = it
it=(bind[:x_35]||=[];_append(bind[:x_35],bind[:autovar_36])) });break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_39]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_39]
it=(Apply["regch","/[#{bind[:x_35]}]/"])
bind[:_result_35] = it },proc{it=token("(");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:x_35] = it
it=token(")");next FAIL if it==FAIL
it=_or(proc{it=seq("[]");next FAIL if it==FAIL
it=collect(bind[:x_35]);next FAIL if it==FAIL
bind[:_result_35] = it },proc{it=empty();next FAIL if it==FAIL
it=bind[:x_35]
bind[:_result_35] = it });next FAIL if it==FAIL });return FAIL if it==FAIL
it=bind[:_result_35]  
end

end

class AmethystOptimizer < Amethyst
def arg()
bind={}; 
  it=nil

it=_or(proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_152] = it
it=_pass(true,bind[:autovar_152]){it=([])
bind[:autovar_149] = it
while true
bind[:autovar_151]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_150] = it
it=(bind[:autovar_149]||=[];_append(bind[:autovar_149],bind[:autovar_150])) 
 break FAIL if r==FAIL
 (bind[:autovar_151]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_151]
it=bind[:autovar_149]
bind[:ary_63] = it };next FAIL if it==FAIL
it=Args.create( {:ary=>bind[:ary_63] })
bind[:_result_63] = it },proc{it=clas(Strin);next FAIL if it==FAIL
bind[:autovar_156] = it
it=_pass(true,bind[:autovar_156]){it=([])
bind[:autovar_153] = it
while true
bind[:autovar_155]=@input;r=it=_or(proc{it=char();next FAIL if it==FAIL
bind[:autovar_154] = it},proc{it=arg();next FAIL if it==FAIL
bind[:autovar_154] = it});break FAIL if it==FAIL
it=(bind[:autovar_153]||=[];_append(bind[:autovar_153],bind[:autovar_154])) 
 break FAIL if r==FAIL
 (bind[:autovar_155]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_155]
it=bind[:autovar_153]
bind[:ary_63] = it };next FAIL if it==FAIL
it=Strin.create( {:ary=>bind[:ary_63] })
bind[:_result_63] = it },proc{it=clas(Exp);next FAIL if it==FAIL
bind[:autovar_158] = it
it=_pass(true,bind[:autovar_158]){it=transfn();next FAIL if it==FAIL
bind[:autovar_157] = it
it=(bind[:ary_63]||=[];_append(bind[:ary_63],bind[:autovar_157])) };next FAIL if it==FAIL
it=Exp.create( {:ary=>bind[:ary_63] })
bind[:_result_63] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_161] = it
it=_pass(true,bind[:autovar_161]){it=(@src.name)
bind[:name_63] = it
it=(@src.args)
bind[:autovar_159] = it
it=_pass(false,bind[:autovar_159]){it=args();next FAIL if it==FAIL
bind[:args_63] = it};next FAIL if it==FAIL
it=(@src.vars)
bind[:autovar_160] = it
it=_pass(false,bind[:autovar_160]){it=args();next FAIL if it==FAIL
bind[:vars_63] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=Result.create( {:args=>bind[:args_63],:ary=>bind[:ary_63],:name=>bind[:name_63],:vars=>bind[:vars_63] })
bind[:_result_63] = it },proc{it=anything();next FAIL if it==FAIL
bind[:_result_63] = it});return FAIL if it==FAIL
it=bind[:_result_63]  
end
def args()
bind={}; 
  it=nil

it=_or(proc{it=clas(Array);next FAIL if it==FAIL
bind[:autovar_145] = it
it=_pass(true,bind[:autovar_145]){it=([])
bind[:autovar_142] = it
while true
bind[:autovar_144]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_143] = it
it=(bind[:autovar_142]||=[];_append(bind[:autovar_142],bind[:autovar_143])) 
 break FAIL if r==FAIL
 (bind[:autovar_144]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_144]
it=bind[:autovar_142]
bind[:a_62] = it };next FAIL if it==FAIL
it=bind[:a_62]
bind[:_result_62] = it },proc{it=([])
bind[:autovar_146] = it
while true
bind[:autovar_148]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_147] = it
it=(bind[:autovar_146]||=[];_append(bind[:autovar_146],bind[:autovar_147])) 
 break FAIL if r==FAIL
 (bind[:autovar_148]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_148]
it=bind[:autovar_146]
bind[:_result_62] = it });return FAIL if it==FAIL
it=bind[:_result_62]  
end
def itrans()
bind={}; 
  it=nil

it=([])
bind[:autovar_91] = it
while true
bind[:autovar_93]=@input;r=it=_or(proc{it=char();next FAIL if it==FAIL
bind[:autovar_92] = it},proc{it=trans();next FAIL if it==FAIL
bind[:autovar_92] = it});break FAIL if it==FAIL
it=(bind[:autovar_91]||=[];_append(bind[:autovar_91],bind[:autovar_92])) 
 break FAIL if r==FAIL
 (bind[:autovar_93]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_93]
it=bind[:autovar_91]
bind[:r_58] = it
it=bind[:r_58]
bind[:_result_58] = it
it=bind[:_result_58]  
end
def trans()
bind={}; 
  it=nil

it=_or(proc{it=clas(Grammar);next FAIL if it==FAIL
bind[:autovar_95] = it
it=_pass(true,bind[:autovar_95]){it=(@src.name)
bind[:name_59] = it
it=(@src.parent)
bind[:parent_59] = it
it=(@src.rules)
bind[:autovar_94] = it
it=_pass(false,bind[:autovar_94]){it=transs();next FAIL if it==FAIL
bind[:rules_59] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=Grammar.create( {:ary=>bind[:ary_59],:name=>bind[:name_59],:parent=>bind[:parent_59],:rules=>bind[:rules_59] })
bind[:_result_59] = it },proc{it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_98] = it
it=_pass(true,bind[:autovar_98]){it=(@src.name)
bind[:name_59] = it
it=(@src.args)
bind[:autovar_96] = it
it=_pass(false,bind[:autovar_96]){it=args();next FAIL if it==FAIL
bind[:args_59] = it};next FAIL if it==FAIL
it=(@src.body)
bind[:autovar_97] = it
it=_pass(false,bind[:autovar_97]){it=trans();next FAIL if it==FAIL
bind[:body_59] = it};next FAIL if it==FAIL
it=(@src.bnding)
bind[:bnding_59] = it
it=(@src.locals)
bind[:locals_59] = it };next FAIL if it==FAIL
it=Rule.create( {:args=>bind[:args_59],:ary=>bind[:ary_59],:bnding=>bind[:bnding_59],:body=>bind[:body_59],:locals=>bind[:locals_59],:name=>bind[:name_59] })
bind[:_result_59] = it },proc{it=clas(Or);next FAIL if it==FAIL
bind[:autovar_102] = it
it=_pass(true,bind[:autovar_102]){it=([])
bind[:autovar_99] = it
while true
bind[:autovar_101]=@input;r=it=transfn();break FAIL if it==FAIL
bind[:autovar_100] = it
it=(bind[:autovar_99]||=[];_append(bind[:autovar_99],bind[:autovar_100])) 
 break FAIL if r==FAIL
 (bind[:autovar_101]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_101]
it=bind[:autovar_99]
bind[:ary_59] = it };next FAIL if it==FAIL
it=Or.create( {:ary=>bind[:ary_59] })
bind[:_result_59] = it },proc{it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_106] = it
it=_pass(true,bind[:autovar_106]){it=([])
bind[:autovar_103] = it
while true
bind[:autovar_105]=@input;r=it=trans();break FAIL if it==FAIL
bind[:autovar_104] = it
it=(bind[:autovar_103]||=[];_append(bind[:autovar_103],bind[:autovar_104])) 
 break FAIL if r==FAIL
 (bind[:autovar_105]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_105]
it=bind[:autovar_103]
bind[:ary_59] = it };next FAIL if it==FAIL
it=Seq.create( {:ary=>bind[:ary_59] })
bind[:_result_59] = it },proc{it=clas(Lookahead);next FAIL if it==FAIL
bind[:autovar_108] = it
it=_pass(true,bind[:autovar_108]){it=trans();next FAIL if it==FAIL
bind[:autovar_107] = it
it=(bind[:ary_59]||=[];_append(bind[:ary_59],bind[:autovar_107]))
it=(@src.neg)
bind[:neg_59] = it };next FAIL if it==FAIL
it=Lookahead.create( {:ary=>bind[:ary_59],:neg=>bind[:neg_59] })
bind[:_result_59] = it },proc{it=clas(Comment);next FAIL if it==FAIL
bind[:autovar_112] = it
it=_pass(true,bind[:autovar_112]){it=([])
bind[:autovar_109] = it
while true
bind[:autovar_111]=@input;r=it=anything();break FAIL if it==FAIL
bind[:autovar_110] = it
it=(bind[:autovar_109]||=[];_append(bind[:autovar_109],bind[:autovar_110])) 
 break FAIL if r==FAIL
 (bind[:autovar_111]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_111]
it=bind[:autovar_109]
bind[:ary_59] = it };next FAIL if it==FAIL
it=Comment.create( {:ary=>bind[:ary_59] })
bind[:_result_59] = it },proc{it=clas(Many);next FAIL if it==FAIL
bind[:autovar_114] = it
it=_pass(true,bind[:autovar_114]){it=trans();next FAIL if it==FAIL
bind[:autovar_113] = it
it=(bind[:ary_59]||=[];_append(bind[:ary_59],bind[:autovar_113]))
it=(@src.o)
bind[:o_59] = it };next FAIL if it==FAIL
it=Many.create( {:ary=>bind[:ary_59],:o=>bind[:o_59] })
bind[:_result_59] = it },proc{it=clas(Apply);next FAIL if it==FAIL
bind[:autovar_117] = it
it=_pass(true,bind[:autovar_117]){it=anything();next FAIL if it==FAIL
bind[:autovar_115] = it
it=(bind[:ary_59]||=[];_append(bind[:ary_59],bind[:autovar_115]))
it=args();next FAIL if it==FAIL
bind[:autovar_116] = it
it=(bind[:ary_59]||=[];_append(bind[:ary_59],bind[:autovar_116])) };next FAIL if it==FAIL
it=Apply.create( {:ary=>bind[:ary_59] })
bind[:_result_59] = it },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_120] = it
it=_pass(true,bind[:autovar_120]){it=(@src.name)
bind[:autovar_118] = it
it=_pass(false,bind[:autovar_118]){it=arg();next FAIL if it==FAIL
bind[:name_59] = it};next FAIL if it==FAIL
it=(@src.expr)
bind[:autovar_119] = it
it=_pass(false,bind[:autovar_119]){it=trans();next FAIL if it==FAIL
bind[:expr_59] = it};next FAIL if it==FAIL
it=(@src.append)
bind[:append_59] = it };next FAIL if it==FAIL
it=Set.create( {:append=>bind[:append_59],:ary=>bind[:ary_59],:expr=>bind[:expr_59],:name=>bind[:name_59] })
bind[:_result_59] = it },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_121] = it
it=_pass(true,bind[:autovar_121]){it=args();next FAIL if it==FAIL
bind[:ary_59] = it
it=(@src.pred)
bind[:pred_59] = it };next FAIL if it==FAIL
it=Act.create( {:ary=>bind[:ary_59],:pred=>bind[:pred_59] })
bind[:_result_59] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_124] = it
it=_pass(true,bind[:autovar_124]){it=(@src.name)
bind[:name_59] = it
it=(@src.args)
bind[:autovar_122] = it
it=_pass(false,bind[:autovar_122]){it=args();next FAIL if it==FAIL
bind[:args_59] = it};next FAIL if it==FAIL
it=(@src.vars)
bind[:autovar_123] = it
it=_pass(false,bind[:autovar_123]){it=args();next FAIL if it==FAIL
bind[:vars_59] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=Result.create( {:args=>bind[:args_59],:ary=>bind[:ary_59],:expr=>bind[:expr_59],:name=>bind[:name_59],:vars=>bind[:vars_59] })
bind[:_result_59] = it },proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_128] = it
it=_pass(true,bind[:autovar_128]){it=([])
bind[:autovar_125] = it
while true
bind[:autovar_127]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_126] = it
it=(bind[:autovar_125]||=[];_append(bind[:autovar_125],bind[:autovar_126])) 
 break FAIL if r==FAIL
 (bind[:autovar_127]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_127]
it=bind[:autovar_125]
bind[:ary_59] = it };next FAIL if it==FAIL
it=Args.create( {:ary=>bind[:ary_59],:o=>bind[:o_59] })
bind[:_result_59] = it },proc{it=clas(Pass);next FAIL if it==FAIL
bind[:autovar_131] = it
it=_pass(true,bind[:autovar_131]){it=(@src.to)
bind[:autovar_129] = it
it=_pass(false,bind[:autovar_129]){it=trans();next FAIL if it==FAIL
bind[:to_59] = it};next FAIL if it==FAIL
it=(@src.var)
bind[:autovar_130] = it
it=_pass(false,bind[:autovar_130]){it=arg();next FAIL if it==FAIL
bind[:var_59] = it};next FAIL if it==FAIL
it=(@src.enter)
bind[:enter_59] = it };next FAIL if it==FAIL
it=Pass.create( {:ary=>bind[:ary_59],:enter=>bind[:enter_59],:to=>bind[:to_59],:var=>bind[:var_59] })
bind[:_result_59] = it },proc{it=clas(Cut);next FAIL if it==FAIL
bind[:autovar_132] = it
it=_pass(true,bind[:autovar_132]){ };next FAIL if it==FAIL
it=Cut.create( {:ary=>bind[:ary_59] })
bind[:_result_59] = it },proc{it=clas(Stop);next FAIL if it==FAIL
bind[:autovar_133] = it
it=_pass(true,bind[:autovar_133]){ };next FAIL if it==FAIL
it=Stop.create( {:ary=>bind[:ary_59] })
bind[:_result_59] = it },proc{it=clas(Local);next FAIL if it==FAIL
bind[:autovar_137] = it
it=_pass(true,bind[:autovar_137]){while true
bind[:autovar_136]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_136]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_136]
it=(@src.self)
bind[:_result_59] = it };next FAIL if it==FAIL });return FAIL if it==FAIL
it=bind[:_result_59]  
end
def transfn()
bind={}; 
  it=nil

it=trans();return FAIL if it==FAIL
bind[:_result_60] = it
it=bind[:_result_60]  
end
def transs()
bind={}; 
  it=nil

it=anything();return FAIL if it==FAIL
bind[:autovar_141] = it
it=_pass(true,bind[:autovar_141]){it=([])
bind[:autovar_138] = it
while true
bind[:autovar_140]=@input;r=it=trans();break FAIL if it==FAIL
bind[:autovar_139] = it
it=(bind[:autovar_138]||=[];_append(bind[:autovar_138],bind[:autovar_139])) 
 break FAIL if r==FAIL
 (bind[:autovar_140]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_140]
it=bind[:autovar_138]
bind[:t_61] = it };return FAIL if it==FAIL
it=bind[:t_61]
bind[:_result_61] = it
it=bind[:_result_61]  
end

end



class Traverser < Amethyst
def traverse()
bind={}; 
  it=nil

while true
bind[:autovar_169]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_169]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_169]
it=(@src.self)
bind[:this_66] = it
it=((@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] })
bind[:autovar_175] = it
it=_pass(false,bind[:autovar_175]){it=anything();next FAIL if it==FAIL
bind[:autovar_174] = it
it=_pass(true,bind[:autovar_174]){while true
bind[:autovar_173]=@input;r=it=anything();break FAIL if it==FAIL
bind[:autovar_170] = it
it=_pass(true,bind[:autovar_170]){it=anything();next FAIL if it==FAIL
bind[:key_66] = it
it=traverse_item();next FAIL if it==FAIL
bind[:it_66] = it
it=(@x; bind[:this_66].instance_variable_set(bind[:key_66],bind[:it_66])) };break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (bind[:autovar_173]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_173]};next FAIL if it==FAIL };return FAIL if it==FAIL
it=(@src.self)
bind[:_result_66] = it
it=bind[:_result_66]  
end
def traverse_item()
bind={}; 
  it=nil

it=_or(proc{it=visit();next FAIL if it==FAIL
bind[:a_65] = it
it=(@changed=true)
it=bind[:a_65]
bind[:_result_65] = it },proc{it=clas(Array);next FAIL if it==FAIL
bind[:autovar_165] = it
it=_pass(true,bind[:autovar_165]){it=([])
bind[:autovar_162] = it
while true
bind[:autovar_164]=@input;r=it=traverse_item();break FAIL if it==FAIL
bind[:autovar_163] = it
it=(bind[:autovar_162]||=[];_append(bind[:autovar_162],bind[:autovar_163])) 
 break FAIL if r==FAIL
 (bind[:autovar_164]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_164]
it=bind[:autovar_162]
bind[:_result_65] = it };next FAIL if it==FAIL },proc{it=clas(AmethystAST);next FAIL if it==FAIL
bind[:autovar_166] = it
it=_pass(true,bind[:autovar_166]){it=traverse();next FAIL if it==FAIL
bind[:_result_65] = it};next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
bind[:_result_65] = it});return FAIL if it==FAIL
it=bind[:_result_65]  
end

end



class AmethystOptimizer2 < AmethystOptimizer
def trans()
bind={}; 
  it=nil

it=_or(proc{it=clas(Or);next FAIL if it==FAIL
bind[:autovar_179] = it
it=_pass(true,bind[:autovar_179]){it=([])
bind[:autovar_176] = it
while true
bind[:autovar_178]=@input;r=it=transfn();break FAIL if it==FAIL
bind[:autovar_177] = it
it=(bind[:autovar_176]||=[];_append(bind[:autovar_176],bind[:autovar_177])) 
 break FAIL if r==FAIL
 (bind[:autovar_178]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_178]
it=bind[:autovar_176]
bind[:ary_68] = it };next FAIL if it==FAIL
it=(bind[:ary_68]=bind[:ary_68].map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=_or(proc{it=(bind[:ary_68].size==1)||FAIL;next FAIL if it==FAIL
it=(bind[:ary_68][0])
bind[:_result_68] = it },proc{it=Or.create( {:ary=>bind[:ary_68] })
bind[:_result_68] = it});next FAIL if it==FAIL },proc{it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_183] = it
it=_pass(true,bind[:autovar_183]){it=([])
bind[:autovar_180] = it
while true
bind[:autovar_182]=@input;r=it=trans();break FAIL if it==FAIL
bind[:autovar_181] = it
it=(bind[:autovar_180]||=[];_append(bind[:autovar_180],bind[:autovar_181])) 
 break FAIL if r==FAIL
 (bind[:autovar_182]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_182]
it=bind[:autovar_180]
bind[:ary_68] = it };next FAIL if it==FAIL
it=(bind[:ary_68]=bind[:ary_68].map{|a| (a.is_a?(Seq)) ? a.ary : a}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=_or(proc{it=(bind[:ary_68].size==1)||FAIL;next FAIL if it==FAIL
it=(bind[:ary_68][0])
bind[:_result_68] = it },proc{it=Seq.create( {:ary=>bind[:ary_68] })
bind[:_result_68] = it});next FAIL if it==FAIL },proc{it=(super)
bind[:_result_68] = it});return FAIL if it==FAIL
it=bind[:_result_68]  
end

end





class Seq_Or_Optimizer < Traverser
def root()
bind={}; 
  it=nil

it=traverse();return FAIL if it==FAIL
bind[:_result_70] = it
it=bind[:_result_70]  
end
def visit()
bind={}; 
  it=nil

it=_or(proc{it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_184] = it
it=_pass(true,bind[:autovar_184]){it=traverse();next FAIL if it==FAIL
it=(@src.self.ary=@src.ary.map{|i| (i.is_a?(Seq)) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=((@src.ary.size==1) ? @src.ary[0] : @src.self)
bind[:_result_71] = it };next FAIL if it==FAIL },proc{it=clas(Or);next FAIL if it==FAIL
bind[:autovar_185] = it
it=_pass(true,bind[:autovar_185]){it=traverse();next FAIL if it==FAIL
it=(@src.self.ary=@src.ary.map{|i| (i.is_a?(Or )) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=((@src.ary.size==1) ? @src.ary[0] : @src.self)
bind[:_result_71] = it };next FAIL if it==FAIL });return FAIL if it==FAIL
it=bind[:_result_71]  
end

end

class Analyze_Variables2 < Traverser
def flat()
bind={}; 
  it=nil

it=([])
bind[:autovar_207] = it
while true
bind[:autovar_209]=@input;r=it=_or(proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_205] = it
it=_pass(true,bind[:autovar_205]){it=flat();next FAIL if it==FAIL
bind[:autovar_208] = it};next FAIL if it==FAIL },proc{it=clas(Strin);next FAIL if it==FAIL
bind[:autovar_206] = it
it=_pass(true,bind[:autovar_206]){it=flat();next FAIL if it==FAIL
bind[:autovar_208] = it};next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
bind[:autovar_208] = it});break FAIL if it==FAIL
it=(bind[:autovar_207]||=[];_append(bind[:autovar_207],bind[:autovar_208])) 
 break FAIL if r==FAIL
 (bind[:autovar_209]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_209]
it=bind[:autovar_207]
bind[:_result_76] = it
it=bind[:_result_76]  
end
def itrans()
bind={}; 
  it=nil

it=([])
bind[:autovar_193] = it
while true
bind[:autovar_195]=@input;r=it=_or(proc{it=clas(Grammar);next FAIL if it==FAIL
bind[:autovar_192] = it
it=_pass(true,bind[:autovar_192]){it=(@src.rules)
bind[:autovar_191] = it
it=_pass(false,bind[:autovar_191]){it=anything();next FAIL if it==FAIL
bind[:autovar_190] = it
it=_pass(true,bind[:autovar_190]){it=([])
bind[:autovar_187] = it
while true
bind[:autovar_189]=@input;r=it=clas(Rule);break FAIL if it==FAIL
bind[:autovar_186] = it
it=_pass(true,bind[:autovar_186]){it=root();next FAIL if it==FAIL
bind[:autovar_188] = it};break FAIL if it==FAIL
it=(bind[:autovar_187]||=[];_append(bind[:autovar_187],bind[:autovar_188])) 
 break FAIL if r==FAIL
 (bind[:autovar_189]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_189]
it=bind[:autovar_187]
bind[:rules_73] = it };next FAIL if it==FAIL };next FAIL if it==FAIL
it=(@src.rules=bind[:rules_73])
it=(@src.self)
bind[:autovar_194] = it };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
bind[:autovar_194] = it});break FAIL if it==FAIL
it=(bind[:autovar_193]||=[];_append(bind[:autovar_193],bind[:autovar_194])) 
 break FAIL if r==FAIL
 (bind[:autovar_195]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_195]
it=bind[:autovar_193]
bind[:_result_73] = it
it=bind[:_result_73]  
end
def root()
bind={}; 
  it=nil

it=(@src.self)
bind[:autovar_197] = it
it=_pass(false,bind[:autovar_197]){it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_196] = it
it=_pass(true,bind[:autovar_196]){it=(@variables=Hash.new{|k,v| k[v]=v} ;(@src.locals+@src.args).each{|v| @variables[v[0]]=v})
it=(@locals=@src.locals)
it=traverse();next FAIL if it==FAIL
it=(@src.body=Seq[{:ary=>[@src.body] }];@src.locals=nil)
it=(@src.self)
bind[:_result_74] = it };next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_74]  
end
def visit()
bind={}; 
  it=nil

it=_or(proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_200] = it
it=_pass(true,bind[:autovar_200]){it=traverse();next FAIL if it==FAIL
it=(@src.ary.map{|bind[:a_75]| @variables[bind[:a_75]] })
bind[:autovar_199] = it
it=_pass(false,bind[:autovar_199]){it=anything();next FAIL if it==FAIL
bind[:autovar_198] = it
it=_pass(true,bind[:autovar_198]){it=flat();next FAIL if it==FAIL
bind[:a_75] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=(@src.ary=connectstring(bind[:a_75].flatten))
it=((@src.ary.size==1&&(@src.ary[0].is_a?(Local)||@src.ary[0].is_a?(Global)||@src.ary[0].is_a?(Key))) ? @src.ary[0] : @src.self)
bind[:_result_75] = it };next FAIL if it==FAIL },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_203] = it
it=_pass(true,bind[:autovar_203]){it=traverse();next FAIL if it==FAIL
it=(@src.ary)
bind[:autovar_202] = it
it=_pass(false,bind[:autovar_202]){it=anything();next FAIL if it==FAIL
bind[:autovar_201] = it
it=_pass(true,bind[:autovar_201]){it=clas(Local);next FAIL if it==FAIL
bind[:_result_75] = it};next FAIL if it==FAIL };next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_204] = it
it=_pass(true,bind[:autovar_204]){it=(@src.vars=@locals.select{|bind[:a_75]| @src.vars.include? bind[:a_75][0].to_sym}.uniq)
it=(@src.self)
bind[:_result_75] = it };next FAIL if it==FAIL });return FAIL if it==FAIL
it=bind[:_result_75]  
end

end

class Dead_Code_Detector < AmethystOptimizer
def trans()
bind={}; 
  it=nil

it=_or(proc{it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_212] = it
it=_pass(true,bind[:autovar_212]){it=(@src.name)
bind[:name_78] = it
it=(@edges=Oriented_Graph.new ; @marked=[])
it=(@src.args)
bind[:autovar_210] = it
it=_pass(false,bind[:autovar_210]){it=args();next FAIL if it==FAIL
bind[:args_78] = it};next FAIL if it==FAIL
it=(@src.body)
bind[:autovar_211] = it
it=_pass(false,bind[:autovar_211]){it=trans();next FAIL if it==FAIL};next FAIL if it==FAIL
it=(@src.body)
bind[:body_78] = it
it=(@src.locals)
bind[:locals_78] = it
it=(@edges.reachable(@marked))
bind[:reachable_78] = it };next FAIL if it==FAIL
it=Rule.create( {:args=>bind[:args_78],:body=>bind[:body_78],:locals=>bind[:locals_78],:name=>bind[:name_78],:reachable=>bind[:reachable_78] })
bind[:_result_78] = it },proc{it=clas(Apply);next FAIL if it==FAIL
bind[:autovar_213] = it
it=_pass(true,bind[:autovar_213]){it=anything();next FAIL if it==FAIL
bind[:name_78] = it
it=vars_in();next FAIL if it==FAIL
bind[:var_78] = it
it=(@marked+=bind[:var_78])
bind[:_result_78] = it };next FAIL if it==FAIL },proc{it=clas(Pass);next FAIL if it==FAIL
bind[:autovar_216] = it
it=_pass(true,bind[:autovar_216]){it=(@src.var)
bind[:autovar_214] = it
it=_pass(false,bind[:autovar_214]){it=vars_in();next FAIL if it==FAIL
bind[:var_78] = it};next FAIL if it==FAIL
it=(@marked+=bind[:var_78])
it=(@src.to)
bind[:autovar_215] = it
it=_pass(false,bind[:autovar_215]){it=trans();next FAIL if it==FAIL
bind[:_result_78] = it};next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_217] = it
it=_pass(true,bind[:autovar_217]){it=(@src.self)
bind[:this_78] = it
it=(@marked<<bind[:this_78] if @src.pred)
it=vars_in();next FAIL if it==FAIL
bind[:var_78] = it };next FAIL if it==FAIL
it=(bind[:var_78].each{|bind[:v_78]| @edges.add(bind[:v_78],bind[:this_78]); @edges.add(bind[:this_78],bind[:v_78])})
bind[:_result_78] = it },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_221] = it
it=_pass(true,bind[:autovar_221]){it=(@src.name)
bind[:autovar_218] = it
it=_pass(false,bind[:autovar_218]){it=vars_in();next FAIL if it==FAIL
bind[:v_78] = it};next FAIL if it==FAIL
it=(bind[:v_78]=bind[:v_78][0])
it=(@src.expr)
bind[:autovar_219] = it
it=_pass(false,bind[:autovar_219]){it=trans();next FAIL if it==FAIL};next FAIL if it==FAIL
it=(@src.expr)
bind[:autovar_220] = it
it=_pass(false,bind[:autovar_220]){it=vars_in();next FAIL if it==FAIL
bind[:var_78] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=(bind[:var_78].each{|w| @edges.add(bind[:v_78],w)})
bind[:_result_78] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_224] = it
it=_pass(true,bind[:autovar_224]){it=(@src.vars)
bind[:autovar_223] = it
it=_pass(false,bind[:autovar_223]){it=anything();next FAIL if it==FAIL
bind[:autovar_222] = it
it=_pass(true,bind[:autovar_222]){it=vars_in();next FAIL if it==FAIL
bind[:var_78] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=(@src.self)
bind[:v_78] = it };next FAIL if it==FAIL
it=(bind[:var_78].each{|w| @edges.add(bind[:v_78],w) })
bind[:_result_78] = it },proc{it=super();next FAIL if it==FAIL
bind[:_result_78] = it});return FAIL if it==FAIL
it=bind[:_result_78]  
end
def vars_in()
bind={}; 
  it=nil

it=(bind[:ary_79]=[])
while true
bind[:autovar_254]=@input;r=it=_or(proc{it=clas(Global);next FAIL if it==FAIL
bind[:autovar_229] = it
it=_pass(true,bind[:autovar_229]){it=(@src.self)
bind[:autovar_225] = it
it=(bind[:ary_79]||=[];_append(bind[:ary_79],bind[:autovar_225]))
it=(@marked<<@src.self)
while true
bind[:autovar_228]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_228]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_228] };next FAIL if it==FAIL },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_234] = it
it=_pass(true,bind[:autovar_234]){it=(@src.self)
bind[:autovar_230] = it
it=(bind[:ary_79]||=[];_append(bind[:ary_79],bind[:autovar_230]))
while true
bind[:autovar_233]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_233]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_233] };next FAIL if it==FAIL },proc{it=clas(Key);next FAIL if it==FAIL
bind[:autovar_239] = it
it=_pass(true,bind[:autovar_239]){it=(@src.self)
bind[:autovar_235] = it
it=(bind[:ary_79]||=[];_append(bind[:ary_79],bind[:autovar_235]))
it=(@marked<<@src.self)
while true
bind[:autovar_238]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_238]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_238] };next FAIL if it==FAIL },proc{it=clas(Exp);next FAIL if it==FAIL
bind[:autovar_240] = it
it=_pass(true,bind[:autovar_240]){it=trans();next FAIL if it==FAIL};next FAIL if it==FAIL },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_242] = it
it=_pass(true,bind[:autovar_242]){it=(@src.self)
bind[:autovar_241] = it
it=(bind[:ary_79]||=[];_append(bind[:ary_79],bind[:autovar_241])) };next FAIL if it==FAIL },proc{it=clas(Strin);next FAIL if it==FAIL
bind[:autovar_244] = it
it=_pass(true,bind[:autovar_244]){it=vars_in();next FAIL if it==FAIL
bind[:autovar_243] = it
it=(bind[:ary_79]||=[];_append(bind[:ary_79],bind[:autovar_243])) };next FAIL if it==FAIL },proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_246] = it
it=_pass(true,bind[:autovar_246]){it=vars_in();next FAIL if it==FAIL
bind[:autovar_245] = it
it=(bind[:ary_79]||=[];_append(bind[:ary_79],bind[:autovar_245])) };next FAIL if it==FAIL },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_249] = it
it=_pass(true,bind[:autovar_249]){it=(@src.name)
bind[:autovar_248] = it
it=_pass(false,bind[:autovar_248]){it=vars_in();next FAIL if it==FAIL
bind[:autovar_247] = it
it=(bind[:ary_79]||=[];_append(bind[:ary_79],bind[:autovar_247])) };next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=clas(Local);next FAIL if it==FAIL
bind[:autovar_251] = it
it=_pass(true,bind[:autovar_251]){it=anything();next FAIL if it==FAIL
bind[:name_79] = it
it=(@marked<<@src.self if bind[:name_79]=="_result")
it=(@src.self)
bind[:autovar_250] = it
it=(bind[:ary_79]||=[];_append(bind[:ary_79],bind[:autovar_250])) };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_254]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_254]
it=bind[:ary_79]
bind[:_result_79] = it
it=bind[:_result_79]  
end

end


class Dead_Code_Deleter < AmethystOptimizer
def trans()
bind={}; 
  it=nil

it=_or(proc{it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_257] = it
it=_pass(true,bind[:autovar_257]){it=(@src.name)
bind[:name_81] = it
it=(@src.reachable)
bind[:it_81] = it
it=(@reachable=bind[:it_81])
it=(@src.args)
bind[:autovar_255] = it
it=_pass(false,bind[:autovar_255]){it=args();next FAIL if it==FAIL
bind[:args_81] = it};next FAIL if it==FAIL
it=(@src.body)
bind[:autovar_256] = it
it=_pass(false,bind[:autovar_256]){it=trans();next FAIL if it==FAIL
bind[:body_81] = it};next FAIL if it==FAIL
it=(@src.locals)
bind[:locals_81] = it };next FAIL if it==FAIL
it=Rule.create( {:args=>bind[:args_81],:body=>bind[:body_81],:locals=>bind[:locals_81],:name=>bind[:name_81] })
bind[:_result_81] = it },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_261] = it
it=_pass(true,bind[:autovar_261]){it=(@src.self)
bind[:this_81] = it
while true
bind[:autovar_260]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_260]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_260] };next FAIL if it==FAIL
it=(@reachable[bind[:this_81]] ? bind[:this_81] : Act[])
bind[:_result_81] = it },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_263] = it
it=_pass(true,bind[:autovar_263]){it=(@src.name)
bind[:name_81] = it
it=(@src.expr)
bind[:autovar_262] = it
it=_pass(false,bind[:autovar_262]){it=trans();next FAIL if it==FAIL
bind[:expr_81] = it};next FAIL if it==FAIL
it=(@src.append)
bind[:append_81] = it };next FAIL if it==FAIL
it=(@reachable[bind[:name_81]] ? _Set(bind[:name_81],bind[:expr_81],bind[:append_81]) : bind[:expr_81])
bind[:_result_81] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_264] = it
it=_pass(true,bind[:autovar_264]){it=(@src.self)
bind[:this_81] = it};next FAIL if it==FAIL
it=(@reachable[bind[:this_81]] ? bind[:this_81] : Act[])
bind[:_result_81] = it },proc{it=clas(Local);next FAIL if it==FAIL
bind[:autovar_268] = it
it=_pass(true,bind[:autovar_268]){while true
bind[:autovar_267]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_267]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_267]
it=(@src.self)
bind[:this_81] = it };next FAIL if it==FAIL
it=(@reachable[bind[:this_81]] ? bind[:this_81] : Act[])
bind[:_result_81] = it },proc{it=super();next FAIL if it==FAIL
bind[:_result_81] = it});return FAIL if it==FAIL
it=bind[:_result_81]  
end

end



class Communize_Or < AmethystOptimizer
def trans()
bind={}; 
  it=nil

it=_or(proc{it=clas(Or);next FAIL if it==FAIL
bind[:autovar_281] = it
it=_pass(true,bind[:autovar_281]){it=_lookahead(false){it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_272] = it
it=_pass(true,bind[:autovar_272]){it=trans();next FAIL if it==FAIL
bind[:first_83] = it
while true
bind[:autovar_271]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_271]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_271] };next FAIL if it==FAIL };next FAIL if it==FAIL
while true
bind[:autovar_280]=@input;r=it=clas(Seq);break FAIL if it==FAIL
bind[:autovar_277] = it
it=_pass(true,bind[:autovar_277]){it=trans();next FAIL if it==FAIL
bind[:fst_83] = it
it=(bind[:first_83].isomorphic(bind[:fst_83]))||FAIL;next FAIL if it==FAIL
it=([])
bind[:autovar_273] = it
while true
bind[:autovar_275]=@input;r=it=trans();break FAIL if it==FAIL
bind[:autovar_274] = it
it=(bind[:autovar_273]||=[];_append(bind[:autovar_273],bind[:autovar_274])) 
 break FAIL if r==FAIL
 (bind[:autovar_275]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_275]
it=bind[:autovar_273]
bind[:rest_83] = it
it=(Seq[{:ary=>bind[:rest_83]}])
bind[:autovar_276] = it
it=(bind[:ary_83]||=[];_append(bind[:ary_83],bind[:autovar_276])) };break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (bind[:autovar_280]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_280] };next FAIL if it==FAIL
it=(Seq[bind[:first_83] ,Or[{:ary=>bind[:ary_83]}] ])
bind[:_result_83] = it },proc{it=super();next FAIL if it==FAIL
bind[:_result_83] = it});return FAIL if it==FAIL
it=bind[:_result_83]  
end

end


class Move_Assignments < AmethystOptimizer
def move(a0,a1)
bind={}; bind[:append_86]=a0;bind[:name_86]=a1
  it=nil

it=_or(proc{it=clas(Or);next FAIL if it==FAIL
bind[:autovar_288] = it
it=_pass(true,bind[:autovar_288]){it=([])
bind[:autovar_285] = it
while true
bind[:autovar_287]=@input;r=it=move(bind[:append_86],bind[:name_86]);break FAIL if it==FAIL
bind[:autovar_286] = it
it=(bind[:autovar_285]||=[];_append(bind[:autovar_285],bind[:autovar_286])) 
 break FAIL if r==FAIL
 (bind[:autovar_287]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_287]
it=bind[:autovar_285]
bind[:ary_86] = it };next FAIL if it==FAIL
it=Or.create( {:ary=>bind[:ary_86] })
bind[:_result_86] = it },proc{it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_293] = it
it=_pass(true,bind[:autovar_293]){it=([])
bind[:autovar_290] = it
while true
bind[:autovar_292]=@input;r=it=anything();break FAIL if it==FAIL
bind[:el_86] = it
it=_or(proc{it=_lookahead(false){it=eof();next FAIL if it==FAIL};next FAIL if it==FAIL
it=bind[:el_86]
bind[:autovar_289] = it
it=_pass(false,bind[:autovar_289]){it=move(bind[:append_86],bind[:name_86]);next FAIL if it==FAIL
bind[:autovar_291] = it};next FAIL if it==FAIL },proc{it=bind[:el_86]
bind[:autovar_291] = it});break FAIL if it==FAIL
it=(bind[:autovar_290]||=[];_append(bind[:autovar_290],bind[:autovar_291])) 
 break FAIL if r==FAIL
 (bind[:autovar_292]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_292]
it=bind[:autovar_290]
bind[:ary_86] = it };next FAIL if it==FAIL
it=Seq.create( {:ary=>bind[:ary_86] })
bind[:_result_86] = it },proc{it=clas(Pass);next FAIL if it==FAIL
bind[:autovar_295] = it
it=_pass(true,bind[:autovar_295]){it=(@src.var)
bind[:var_86] = it
it=(@src.to)
bind[:autovar_294] = it
it=_pass(false,bind[:autovar_294]){it=move(bind[:append_86],bind[:name_86]);next FAIL if it==FAIL
bind[:to_86] = it};next FAIL if it==FAIL
it=(@src.enter)
bind[:enter_86] = it };next FAIL if it==FAIL
it=Pass.create( {:ary=>bind[:ary_86],:enter=>bind[:enter_86],:to=>bind[:to_86],:var=>bind[:var_86] })
bind[:_result_86] = it },proc{it=anything();next FAIL if it==FAIL
bind[:it_86] = it
it=(_Set(bind[:name_86],bind[:it_86],bind[:append_86]))
bind[:_result_86] = it });return FAIL if it==FAIL
it=bind[:_result_86]  
end
def trans()
bind={}; 
  it=nil

it=_or(proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_284] = it
it=_pass(true,bind[:autovar_284]){it=(@src.name)
bind[:name_85] = it
it=(@src.expr)
bind[:autovar_282] = it
it=_pass(false,bind[:autovar_282]){it=trans();next FAIL if it==FAIL
bind[:expr_85] = it};next FAIL if it==FAIL
it=(@src.append)
bind[:append_85] = it
it=bind[:expr_85]
bind[:autovar_283] = it
it=_pass(false,bind[:autovar_283]){it=move(bind[:append_85],bind[:name_85]);next FAIL if it==FAIL
bind[:_result_85] = it};next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=super();next FAIL if it==FAIL
bind[:_result_85] = it});return FAIL if it==FAIL
it=bind[:_result_85]  
end

end

def varname(vh,name,number)
	 vh[name][number]=vh[name].size+1 if !vh[name][number]
	 "#{name}_#{vh[name][number]}"
end
class AmethystTranslator < Amethyst
def arg()
bind={}; 
  it=nil

it=_or(proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_353] = it
it=_pass(true,bind[:autovar_353]){it=([])
bind[:autovar_350] = it
while true
bind[:autovar_352]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_351] = it
it=(bind[:autovar_350]||=[];_append(bind[:autovar_350],bind[:autovar_351])) 
 break FAIL if r==FAIL
 (bind[:autovar_352]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_352]
it=bind[:autovar_350]
bind[:a_93] = it };next FAIL if it==FAIL
it=(bind[:a_93]*"")
bind[:_result_93] = it },proc{it=clas(Strin);next FAIL if it==FAIL
bind[:autovar_357] = it
it=_pass(true,bind[:autovar_357]){it=([])
bind[:autovar_354] = it
while true
bind[:autovar_356]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_355] = it
it=(bind[:autovar_354]||=[];_append(bind[:autovar_354],bind[:autovar_355])) 
 break FAIL if r==FAIL
 (bind[:autovar_356]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_356]
it=bind[:autovar_354]
bind[:a_93] = it };next FAIL if it==FAIL
it=(bind[:a_93]*"")
bind[:_result_93] = it },proc{it=clas(Exp);next FAIL if it==FAIL
bind[:autovar_358] = it
it=_pass(true,bind[:autovar_358]){it=transfn();next FAIL if it==FAIL
bind[:t_93] = it};next FAIL if it==FAIL
it=bind[:t_93]
bind[:_result_93] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_360] = it
it=_pass(true,bind[:autovar_360]){it=(@src.name)
bind[:name_93] = it
it=(@src.args)
bind[:autovar_359] = it
it=_pass(false,bind[:autovar_359]){it=args();next FAIL if it==FAIL
bind[:argss_93] = it};next FAIL if it==FAIL
it=(@src.vars)
bind[:vars_93] = it };next FAIL if it==FAIL
it=("it=#{bind[:name_93]}.create(#{bind[:argss_93]} {#{bind[:vars_93].map{|l| ":#{l[0]}=>#{varname(@varhash,l[0],l[1])}" }.sort*","} })")
bind[:_result_93] = it },proc{it=clas(Key);next FAIL if it==FAIL
bind[:autovar_361] = it
it=_pass(true,bind[:autovar_361]){it=(@src.name)
bind[:name_93] = it};next FAIL if it==FAIL
it=("@src.#{bind[:name_93]}")
bind[:_result_93] = it },proc{it=clas(Local);next FAIL if it==FAIL
bind[:autovar_365] = it
it=_pass(true,bind[:autovar_365]){while true
bind[:autovar_364]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_364]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_364]
it=("bind[:#{@src.desc}]")
bind[:_result_93] = it };next FAIL if it==FAIL },proc{it=clas(Global);next FAIL if it==FAIL
bind[:autovar_366] = it
it=_pass(true,bind[:autovar_366]){it=anything();next FAIL if it==FAIL
bind[:name_93] = it};next FAIL if it==FAIL
it=("@#{bind[:name_93]}")
bind[:_result_93] = it },proc{it=anything();next FAIL if it==FAIL
bind[:_result_93] = it});return FAIL if it==FAIL
it=bind[:_result_93]  
end
def args()
bind={}; 
  it=nil

it=_or(proc{it=clas(Array);next FAIL if it==FAIL
bind[:autovar_346] = it
it=_pass(true,bind[:autovar_346]){it=([])
bind[:autovar_343] = it
while true
bind[:autovar_345]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_344] = it
it=(bind[:autovar_343]||=[];_append(bind[:autovar_343],bind[:autovar_344])) 
 break FAIL if r==FAIL
 (bind[:autovar_345]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_345]
it=bind[:autovar_343]
bind[:a_92] = it };next FAIL if it==FAIL
it=(bind[:a_92]*",")
bind[:_result_92] = it },proc{it=([])
bind[:autovar_347] = it
while true
bind[:autovar_349]=@input;r=it=arg();break FAIL if it==FAIL
bind[:autovar_348] = it
it=(bind[:autovar_347]||=[];_append(bind[:autovar_347],bind[:autovar_348])) 
 break FAIL if r==FAIL
 (bind[:autovar_349]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_349]
it=bind[:autovar_347]
bind[:a_92] = it
it=(bind[:a_92]*",")
bind[:_result_92] = it });return FAIL if it==FAIL
it=bind[:_result_92]  
end
def failwrap(a0)
bind={}; bind[:s_95]=a0
  it=nil

it=("#{bind[:s_95]};#{@returnword} FAIL if it==FAIL" )
bind[:_result_95] = it
it=bind[:_result_95]  
end
def itrans()
bind={}; 
  it=nil

it=([])
bind[:autovar_296] = it
while true
bind[:autovar_298]=@input;r=it=_or(proc{it=char();next FAIL if it==FAIL
bind[:autovar_297] = it},proc{it=trans();next FAIL if it==FAIL
bind[:autovar_297] = it});break FAIL if it==FAIL
it=(bind[:autovar_296]||=[];_append(bind[:autovar_296],bind[:autovar_297])) 
 break FAIL if r==FAIL
 (bind[:autovar_298]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_298]
it=bind[:autovar_296]
bind[:r_88] = it
it=(bind[:r_88]*"")
bind[:_result_88] = it
it=bind[:_result_88]  
end
def rw(a0,a1)
bind={}; bind[:word_94]=a0;bind[:prc_94]=a1
  it=nil

it=(rwo=@returnword;@returnword=bind[:word_94])
it=apply(bind[:prc_94]);return FAIL if it==FAIL
bind[:x_94] = it
it=(@returnword=rwo;bind[:x_94])
bind[:_result_94] = it
it=bind[:_result_94]  
end
def trans()
bind={}; 
  it=nil

it=_or(proc{it=clas(Grammar);next FAIL if it==FAIL
bind[:autovar_300] = it
it=_pass(true,bind[:autovar_300]){it=(@src.name)
bind[:name_89] = it
it=(@src.parent)
bind[:parent_89] = it
it=(@src.rules)
bind[:autovar_299] = it
it=_pass(false,bind[:autovar_299]){it=transs();next FAIL if it==FAIL
bind[:body_89] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=("class #{bind[:name_89]} < #{bind[:parent_89]}\n#{bind[:body_89].sort}\nend\n")
bind[:_result_89] = it },proc{it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_303] = it
it=_pass(true,bind[:autovar_303]){it=(@varhash=Hash.new{|h,k| h[k]={}}  )
it=rw('return',proc{it=(@src.name)
bind[:name_89] = it
it=(@src.body)
bind[:autovar_302] = it
it=_pass(false,bind[:autovar_302]){it=trans();next FAIL if it==FAIL
bind[:body_89] = it
bind[:_result_89] = it};next FAIL if it==FAIL
it=bind[:_result_89] });next FAIL if it==FAIL
it=("def #{bind[:name_89]}(#{@src.args.size.times.map{|i| "a#{i}"}*","})\nbind={}; #{@src.args.size.times.map{|i| "bind[:#{@src.args[i].desc}]=a#{i}"}*";"}\n  it=nil\n\n#{bind[:body_89]} \nend\n")
bind[:_result_89] = it };next FAIL if it==FAIL },proc{it=clas(Or);next FAIL if it==FAIL
bind[:autovar_310] = it
it=_pass(true,bind[:autovar_310]){it=rw('next', proc{it=([])
bind[:autovar_307] = it
while true
bind[:autovar_309]=@input;r=it=transfn();break FAIL if it==FAIL
bind[:autovar_308] = it
it=(bind[:autovar_307]||=[];_append(bind[:autovar_307],bind[:autovar_308])) 
 break FAIL if r==FAIL
 (bind[:autovar_309]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_309]
it=bind[:autovar_307]
bind[:ors_89] = it
bind[:_result_89] = it
it=bind[:_result_89] });next FAIL if it==FAIL};next FAIL if it==FAIL
it=failwrap("it=_or(#{bind[:ors_89]*","})");next FAIL if it==FAIL
bind[:_result_89] = it },proc{it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_314] = it
it=_pass(true,bind[:autovar_314]){it=([])
bind[:autovar_311] = it
while true
bind[:autovar_313]=@input;r=it=trans();break FAIL if it==FAIL
bind[:autovar_312] = it
it=(bind[:autovar_311]||=[];_append(bind[:autovar_311],bind[:autovar_312])) 
 break FAIL if r==FAIL
 (bind[:autovar_313]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_313]
it=bind[:autovar_311]
bind[:t_89] = it };next FAIL if it==FAIL
it=("#{bind[:t_89]*"\n"} ")
bind[:_result_89] = it },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_315] = it
it=_pass(true,bind[:autovar_315]){it=args();next FAIL if it==FAIL
bind[:t_89] = it
it=(@src.pred)
bind[:pred_89] = it };next FAIL if it==FAIL
it=(bind[:pred_89] ?  failwrap("it=(#{bind[:t_89]})||FAIL") : "it=(#{bind[:t_89]})")
bind[:_result_89] = it },proc{it=clas(Lookahead);next FAIL if it==FAIL
bind[:autovar_316] = it
it=_pass(true,bind[:autovar_316]){it=(@src.neg)
bind[:neg_89] = it
it=rw('next',proc{it=trans();next FAIL if it==FAIL
bind[:t_89] = it
bind[:_result_89] = it
it=bind[:_result_89] });next FAIL if it==FAIL };next FAIL if it==FAIL
it=failwrap("it=_lookahead(#{!!bind[:neg_89]}){#{bind[:t_89]}}");next FAIL if it==FAIL
bind[:_result_89] = it },proc{it=clas(Comment);next FAIL if it==FAIL
bind[:autovar_317] = it
it=_pass(true,bind[:autovar_317]){it=anything();next FAIL if it==FAIL};next FAIL if it==FAIL
it=("")
bind[:_result_89] = it },proc{it=clas(Many);next FAIL if it==FAIL
bind[:autovar_319] = it
it=_pass(true,bind[:autovar_319]){it=rw('break', proc{it=trans();next FAIL if it==FAIL
bind[:t_89] = it
bind[:_result_89] = it
it=bind[:_result_89] } );next FAIL if it==FAIL
it=(@src.o)
bind[:autovar_318] = it
it=_pass(false,bind[:autovar_318]){it=arg();next FAIL if it==FAIL
bind[:o_89] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=("while true\n#{bind[:o_89]}=@input;r=#{bind[:t_89]}\n break FAIL if r==FAIL\n (#{bind[:o_89]}=@input;@stop=nil;break FAIL) if @stop==true\nend;@input=#{bind[:o_89]}")
bind[:_result_89] = it },proc{it=clas(Apply);next FAIL if it==FAIL
bind[:autovar_321] = it
it=_pass(true,bind[:autovar_321]){it=clas(Array);next FAIL if it==FAIL
bind[:autovar_320] = it
it=_pass(true,bind[:autovar_320]){it=anything();next FAIL if it==FAIL
it=anything();next FAIL if it==FAIL
bind[:name_89] = it };next FAIL if it==FAIL
it=args();next FAIL if it==FAIL
bind[:argss_89] = it };next FAIL if it==FAIL
it=failwrap("it=_foreign(:#{bind[:name_89] } #{bind[:argss_89]!=[] ? ",#{bind[:argss_89]}" : "" })");next FAIL if it==FAIL
bind[:_result_89] = it },proc{it=clas(Apply);next FAIL if it==FAIL
bind[:autovar_322] = it
it=_pass(true,bind[:autovar_322]){it=anything();next FAIL if it==FAIL
bind[:name_89] = it
it=args();next FAIL if it==FAIL
bind[:argss_89] = it };next FAIL if it==FAIL
it=failwrap("it=#{bind[:name_89]}(#{bind[:argss_89]})");next FAIL if it==FAIL
bind[:_result_89] = it },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_325] = it
it=_pass(true,bind[:autovar_325]){it=(@src.name)
bind[:autovar_323] = it
it=_pass(false,bind[:autovar_323]){it=arg();next FAIL if it==FAIL
bind[:name_89] = it};next FAIL if it==FAIL
it=(@src.expr)
bind[:autovar_324] = it
it=_pass(false,bind[:autovar_324]){it=trans();next FAIL if it==FAIL
bind[:expr_89] = it};next FAIL if it==FAIL
it=(@src.append)
bind[:append_89] = it };next FAIL if it==FAIL
it=("#{bind[:expr_89]}\n" + (bind[:append_89] ? "#{bind[:name_89]}||=[];_append(#{bind[:name_89]},it)" : "#{bind[:name_89]} = it"))
bind[:_result_89] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_327] = it
it=_pass(true,bind[:autovar_327]){it=(@src.name)
bind[:name_89] = it
it=(@src.args)
bind[:autovar_326] = it
it=_pass(false,bind[:autovar_326]){it=args();next FAIL if it==FAIL
bind[:argss_89] = it};next FAIL if it==FAIL
it=(@src.vars)
bind[:vars_89] = it };next FAIL if it==FAIL
it=("it=#{bind[:name_89]}.create(#{bind[:argss_89]} {#{bind[:vars_89].map{|l| ":#{l[0]}=>bind[:#{l.desc}]" }.sort*","} })")
bind[:_result_89] = it },proc{it=clas(Local);next FAIL if it==FAIL
bind[:autovar_331] = it
it=_pass(true,bind[:autovar_331]){while true
bind[:autovar_330]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_330]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_330]
it=("it=bind[:#{@src.desc}]")
bind[:_result_89] = it };next FAIL if it==FAIL },proc{it=clas(Pass);next FAIL if it==FAIL
bind[:autovar_336] = it
it=_pass(true,bind[:autovar_336]){it=rw('next',proc{it=(@src.to)
bind[:autovar_334] = it
it=_pass(false,bind[:autovar_334]){it=trans();next FAIL if it==FAIL
bind[:to_89] = it};next FAIL if it==FAIL
it=(@src.var)
bind[:autovar_335] = it
it=_pass(false,bind[:autovar_335]){it=arg();next FAIL if it==FAIL
bind[:var_89] = it};next FAIL if it==FAIL
it=(@src.enter)
bind[:enter_89] = it
bind[:_result_89] = it
it=bind[:_result_89] });next FAIL if it==FAIL};next FAIL if it==FAIL
it=failwrap("it=_pass(#{!!bind[:enter_89]},#{bind[:var_89]}){#{bind[:to_89]}}");next FAIL if it==FAIL
bind[:_result_89] = it },proc{it=clas(Cut);next FAIL if it==FAIL
bind[:autovar_337] = it
it=_pass(true,bind[:autovar_337]){ };next FAIL if it==FAIL
it=("@cut=true;it")
bind[:_result_89] = it },proc{it=clas(Stop);next FAIL if it==FAIL
bind[:autovar_338] = it
it=_pass(true,bind[:autovar_338]){ };next FAIL if it==FAIL
it=("@stop=true;it")
bind[:_result_89] = it });return FAIL if it==FAIL
it=bind[:_result_89]  
end
def transfn()
bind={}; 
  it=nil

it=trans();return FAIL if it==FAIL
bind[:t_90] = it
it=("proc{#{bind[:t_90]}}" )
bind[:_result_90] = it
it=bind[:_result_90]  
end
def transs()
bind={}; 
  it=nil

it=anything();return FAIL if it==FAIL
bind[:autovar_342] = it
it=_pass(true,bind[:autovar_342]){it=([])
bind[:autovar_339] = it
while true
bind[:autovar_341]=@input;r=it=trans();break FAIL if it==FAIL
bind[:autovar_340] = it
it=(bind[:autovar_339]||=[];_append(bind[:autovar_339],bind[:autovar_340])) 
 break FAIL if r==FAIL
 (bind[:autovar_341]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_341]
it=bind[:autovar_339]
bind[:t_91] = it };return FAIL if it==FAIL
it=bind[:t_91]
bind[:_result_91] = it
it=bind[:_result_91]  
end

end

