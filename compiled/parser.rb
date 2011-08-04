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
bind={}; bind[:o_44]=a0;bind[:c_44]=a1
  it=nil

it=seq(bind[:o_44]);return FAIL if it==FAIL
it=("")
bind[:s_23] = it
it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_23]);return FAIL if it==FAIL
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
bind[:r_44] = it
it=seq(bind[:c_44]);return FAIL if it==FAIL
it=bind[:r_44]
bind[:_result_44] = it
it=bind[:_result_44]  
end
def _args(a0,a1)
bind={}; bind[:o_43]=a0;bind[:c_43]=a1
  it=nil

it=__args(bind[:o_43],bind[:c_43]);return FAIL if it==FAIL
bind[:r_43] = it
it=(Args[{:ary=>([bind[:o_43]]+bind[:r_43]+[bind[:c_43]])}])
bind[:_result_43] = it
it=bind[:_result_43]  
end
def addargs()
bind={}; 
  it=nil

while true
bind[:autovar_46]=@input;r=it=(Args)
bind[:cls_22] = it
it=anything();break FAIL if it==FAIL
bind[:i_22] = it
it=(bind[:i_22].is_a?(bind[:cls_22]))||FAIL;break FAIL if it==FAIL
it=bind[:i_22]
bind[:_result_22] = it
it=bind[:_result_22]
bind[:autovar_43] = it
it=_pass(true,bind[:autovar_43]){it=anything();next FAIL if it==FAIL
bind[:name_39] = it
it=(_Local(bind[:name_39]) )
bind[:autovar_42] = it
it=(bind[:result_39]||=[];_append(bind[:result_39],bind[:autovar_42])) };break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (bind[:autovar_46]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_46]
it=(bind[:result_39] || [])
bind[:_result_39] = it
it=bind[:_result_39]  
end
def application()
bind={}; 
  it=nil

it=_or(proc{it=name();next FAIL if it==FAIL
bind[:klas_34] = it
it=seq("::");next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:rule_34] = it
it=([bind[:klas_34],bind[:rule_34]])
bind[:rule_34] = it },proc{it=name();next FAIL if it==FAIL
bind[:rule_34] = it});return FAIL if it==FAIL
it=argsOpt('(',')');return FAIL if it==FAIL
bind[:arg_34] = it
it=(Apply[bind[:rule_34],bind[:arg_34]])
bind[:_result_34] = it
it=bind[:_result_34]  
end
def args(a0,a1)
bind={}; bind[:o_42]=a0;bind[:c_42]=a1
  it=nil

it=__args(bind[:o_42],bind[:c_42]);return FAIL if it==FAIL
bind[:r_42] = it
it=(bind[:r_42]+[','])
bind[:autovar_48] = it
it=_pass(false,bind[:autovar_48]){it=anything();next FAIL if it==FAIL
bind[:autovar_47] = it
it=_pass(true,bind[:autovar_47]){it=procargs();next FAIL if it==FAIL
bind[:_result_42] = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_42]  
end
def argsOpt(a0,a1)
bind={}; bind[:o_41]=a0;bind[:c_41]=a1
  it=nil

it=_or(proc{it=args(bind[:o_41],bind[:c_41]);next FAIL if it==FAIL
bind[:_result_41] = it},proc{it=empty();next FAIL if it==FAIL
it=([])
bind[:_result_41] = it });return FAIL if it==FAIL
it=bind[:_result_41]  
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
bind[:s_54] = it
it=("{#{bind[:s_54]*""}}")
bind[:autovar_90] = it
it=_pass(false,bind[:autovar_90]){it=anything();next FAIL if it==FAIL
bind[:autovar_89] = it
it=_pass(true,bind[:autovar_89]){it=inlineHostExpr();next FAIL if it==FAIL
bind[:_result_54] = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_54]  
end
def choice()
bind={}; 
  it=nil

it=(proc{it=token("|");return FAIL if it==FAIL
bind[:_result_29] = it
it=bind[:_result_29] })
bind[:delim_18] = it
it=('sequence')
bind[:rule_18] = it
it=_or(proc{it=apply(bind[:rule_18]);next FAIL if it==FAIL
bind[:autovar_4] = it
it=(bind[:f_18]||=[];_append(bind[:f_18],bind[:autovar_4]))
it=([])
bind[:autovar_5] = it
while true
bind[:autovar_7]=@input;r=it=apply(bind[:delim_18]);break FAIL if it==FAIL
it=apply(bind[:rule_18]);break FAIL if it==FAIL
bind[:autovar_6] = it
it=(bind[:autovar_5]||=[];_append(bind[:autovar_5],bind[:autovar_6])) 
 break FAIL if r==FAIL
 (bind[:autovar_7]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_7]
it=bind[:autovar_5]
bind[:autovar_8] = it
it=(bind[:f_18]||=[];_append(bind[:f_18],bind[:autovar_8]))
it=bind[:f_18]
bind[:_result_18] = it },proc{it=empty();next FAIL if it==FAIL
it=([])
bind[:_result_18] = it });return FAIL if it==FAIL
it=bind[:_result_18]
bind[:ary_29] = it
it=Or.create( {:ary=>bind[:ary_29] })
bind[:_result_29] = it
it=bind[:_result_29]  
end
def className()
bind={}; 
  it=nil

it=("")
bind[:s_23] = it
it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_23]);return FAIL if it==FAIL
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
bind[:it_50] = it
it=(leterize(bind[:it_50]*""))
bind[:_result_50] = it
it=bind[:_result_50]  
end
def collect(a0)
bind={}; bind[:ors_36]=a0
  it=nil

it=(a=autovar; Seq[Or[{:ary=>bind[:ors_36].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],Act[a]])
bind[:_result_36] = it
it=bind[:_result_36]  
end
def eChar()
bind={}; 
  it=nil

it=_or(proc{it=seq("\\");next FAIL if it==FAIL
it=anything();next FAIL if it==FAIL
bind[:c_4] = it
it=(bind[:c_4].is_a? String )||FAIL;next FAIL if it==FAIL
it=bind[:c_4]
bind[:_result_4] = it
it=bind[:_result_4]
bind[:c_37] = it
it=("\\#{bind[:c_37]}")
bind[:_result_37] = it },proc{it=_args('#{','}');next FAIL if it==FAIL
bind[:_result_37] = it},proc{it=anything();next FAIL if it==FAIL
bind[:c_4] = it
it=(bind[:c_4].is_a? String )||FAIL;next FAIL if it==FAIL
it=bind[:c_4]
bind[:_result_4] = it
it=bind[:_result_4]
bind[:_result_37] = it });return FAIL if it==FAIL
it=bind[:_result_37]  
end
def expression()
bind={}; 
  it=nil

it=choice();return FAIL if it==FAIL
bind[:_result_28] = it
it=bind[:_result_28]  
end
def grammar()
bind={}; 
  it=nil

it=("amethyst")
bind[:s_23] = it
it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_23]);return FAIL if it==FAIL
it=name();return FAIL if it==FAIL
bind[:name_26] = it
it=_or(proc{it=("<")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:parent_26] = it },proc{it=empty();next FAIL if it==FAIL
it=(bind[:parent_26]="Amethyst") });return FAIL if it==FAIL
it=("{")
bind[:s_23] = it
it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_23]);return FAIL if it==FAIL
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
bind[:rules_26] = it
it=("}")
bind[:s_23] = it
it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_23]);return FAIL if it==FAIL
it=Grammar.create( {:name=>bind[:name_26],:parent=>bind[:parent_26],:rules=>bind[:rules_26] })
bind[:_result_26] = it
it=bind[:_result_26]  
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
bind[:it_25] = it
it=(bind[:it_25]*"")
bind[:autovar_14] = it },proc{it=grammar();next FAIL if it==FAIL
bind[:autovar_14] = it});break FAIL if it==FAIL
it=(bind[:autovar_13]||=[];_append(bind[:autovar_13],bind[:autovar_14])) 
 break FAIL if r==FAIL
 (bind[:autovar_15]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_15]
it=bind[:autovar_13]
bind[:a_25] = it
it=bind[:a_25]
bind[:_result_25] = it
it=bind[:_result_25]  
end
def inlineHostExpr()
bind={}; 
  it=nil

it=args('{','}');return FAIL if it==FAIL
bind[:_result_52] = it
it=bind[:_result_52]  
end
def key()
bind={}; 
  it=nil

it=_or(proc{it=("@")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
it=_or(proc{it=className();next FAIL if it==FAIL
bind[:name_35] = it
it=argsOpt('[',']');next FAIL if it==FAIL
bind[:args_35] = it
it=(Object.const_get(bind[:name_35]).instance_variable_get(:@attrs))
bind[:vars_35] = it
it=Result.create( {:args=>bind[:args_35],:name=>bind[:name_35],:vars=>bind[:vars_35] })
bind[:_result_35] = it },proc{it=name();next FAIL if it==FAIL
bind[:name_35] = it
it=Key.create( {:args=>bind[:args_35],:name=>bind[:name_35] })
bind[:_result_35] = it });next FAIL if it==FAIL },proc{it=("@@")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:name_35] = it
it=(Global[bind[:name_35]])
bind[:_result_35] = it });return FAIL if it==FAIL
it=bind[:_result_35]  
end
def modifier()
bind={}; 
  it=nil

it=_or(proc{it=term();next FAIL if it==FAIL
bind[:_result_32] = it},proc{it=("#")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
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
bind[:c_32] = it
it=(Comment[bind[:c_32]])
bind[:_result_32] = it });return FAIL if it==FAIL
it=bind[:_result_32]  
end
def name()
bind={}; 
  it=nil

it=("")
bind[:s_23] = it
it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_23]);return FAIL if it==FAIL
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
bind[:it_51] = it
it=(leterize(bind[:it_51]*""))
bind[:_result_51] = it
it=bind[:_result_51]  
end
def nameFirst()
bind={}; 
  it=nil

it=_or(proc{it=letter();next FAIL if it==FAIL
bind[:_result_48] = it},proc{it=seq("_");next FAIL if it==FAIL
bind[:_result_48] = it});return FAIL if it==FAIL
it=bind[:_result_48]  
end
def nameRest()
bind={}; 
  it=nil

it=_or(proc{it=nameFirst();next FAIL if it==FAIL
bind[:_result_49] = it},proc{it=digit();next FAIL if it==FAIL
bind[:_result_49] = it});return FAIL if it==FAIL
it=bind[:_result_49]  
end
def nr()
bind={}; 
  it=nil

it=_lookahead(true){it=name();next FAIL if it==FAIL
it=argsOpt('(',')');next FAIL if it==FAIL
it=("=")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL };return FAIL if it==FAIL
bind[:_result_40] = it
it=bind[:_result_40]  
end
def number()
bind={}; 
  it=nil

it=([])
bind[:autovar_82] = it
it=(/[0-9]/)
bind[:regex_1] = it
it=anything();return FAIL if it==FAIL
bind[:c_4] = it
it=(bind[:c_4].is_a? String )||FAIL;return FAIL if it==FAIL
it=bind[:c_4]
bind[:_result_4] = it
it=bind[:_result_4]
bind[:c_1] = it
it=(bind[:regex_1].match(bind[:c_1]))||FAIL;return FAIL if it==FAIL
it=bind[:c_1]
bind[:_result_1] = it
it=bind[:_result_1]
bind[:autovar_83] = it
it=(bind[:autovar_82]||=[];_append(bind[:autovar_82],bind[:autovar_83]))
while true
bind[:autovar_85]=@input;r=it=(/[0-9]/)
bind[:regex_1] = it
it=anything();break FAIL if it==FAIL
bind[:c_4] = it
it=(bind[:c_4].is_a? String )||FAIL;break FAIL if it==FAIL
it=bind[:c_4]
bind[:_result_4] = it
it=bind[:_result_4]
bind[:c_1] = it
it=(bind[:regex_1].match(bind[:c_1]))||FAIL;break FAIL if it==FAIL
it=bind[:c_1]
bind[:_result_1] = it
it=bind[:_result_1]
bind[:autovar_84] = it
it=(bind[:autovar_82]||=[];_append(bind[:autovar_82],bind[:autovar_84])) 
 break FAIL if r==FAIL
 (bind[:autovar_85]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_85]
it=bind[:autovar_82]
bind[:_result_53] = it
it=bind[:_result_53]  
end
def prefixed()
bind={}; 
  it=nil

it=_or(proc{it=("&")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23]
it=inlineHostExpr();next FAIL if it==FAIL
bind[:expr_31] = it
it=(Pred[bind[:expr_31]])
bind[:_result_31] = it },proc{it=_or(proc{it=("&")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23]
bind[:neg_31] = it },proc{it=("~")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23]
bind[:neg_31] = it });next FAIL if it==FAIL
it=prefixed();next FAIL if it==FAIL
bind[:m_31] = it
it=(Lookahead[bind[:m_31],bind[:neg_31]=="~"])
bind[:_result_31] = it },proc{it=_or(proc{it=modifier();next FAIL if it==FAIL
bind[:from_31] = it},proc{it=("")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23]
it=_lookahead(false){it=(/[.:\[]/)
bind[:regex_1] = it
it=anything();next FAIL if it==FAIL
bind[:c_4] = it
it=(bind[:c_4].is_a? String )||FAIL;next FAIL if it==FAIL
it=bind[:c_4]
bind[:_result_4] = it
it=bind[:_result_4]
bind[:c_1] = it
it=(bind[:regex_1].match(bind[:c_1]))||FAIL;next FAIL if it==FAIL
it=bind[:c_1] };next FAIL if it==FAIL
it=_or(proc{it=(".")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23] },proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=(Apply["anything"])
bind[:from_31] = it });next FAIL if it==FAIL
while true
bind[:autovar_24]=@input;r=it=_lookahead(true){it=_();next FAIL if it==FAIL};break FAIL if it==FAIL
it=_or(proc{it=("=>")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23]
it=prefixed();next FAIL if it==FAIL
bind[:it_31] = it
it=(bind[:from_31]=Pass[bind[:from_31],bind[:it_31]]) },proc{it=("[")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23]
it=expression();next FAIL if it==FAIL
bind[:it_31] = it
it=(bind[:from_31]=Enter[bind[:from_31],bind[:it_31]])
it=("]")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23] },proc{it=_or(proc{it=("*")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23]
bind[:one_31] = it },proc{it=("+")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23]
bind[:one_31] = it });next FAIL if it==FAIL
it=(Many[bind[:from_31],bind[:one_31]=="+"])
bind[:from_31] = it },proc{it=("?")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23]
it=(Or[bind[:from_31],Apply["empty"]])
bind[:from_31] = it },proc{it=(":")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23]
it=_or(proc{it=_or(proc{it=key();next FAIL if it==FAIL
bind[:name_31] = it},proc{it=name();next FAIL if it==FAIL
bind[:name_31] = it});next FAIL if it==FAIL
it=_or(proc{it=seq("[]");next FAIL if it==FAIL
it=(true)
bind[:append_31] = it },proc{it=empty();next FAIL if it==FAIL
it=(nil)
bind[:append_31] = it });next FAIL if it==FAIL
it=(_Set(bind[:name_31],bind[:from_31],bind[:append_31]))
bind[:from_31] = it },proc{it=inlineHostExpr();next FAIL if it==FAIL
bind[:e_31] = it
it=(Seq[_Set("it",bind[:from_31]) , Act[bind[:e_31]] ])
bind[:from_31] = it });next FAIL if it==FAIL });break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (bind[:autovar_24]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_24]
it=bind[:from_31]
bind[:_result_31] = it });return FAIL if it==FAIL
it=bind[:_result_31]  
end
def procargs2()
bind={}; 
  it=nil

it=_or(proc{it=(Args)
bind[:cls_22] = it
it=anything();next FAIL if it==FAIL
bind[:i_22] = it
it=(bind[:i_22].is_a?(bind[:cls_22]))||FAIL;next FAIL if it==FAIL
it=bind[:i_22]
bind[:_result_22] = it
it=bind[:_result_22]
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
bind[:_result_47] = it };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
bind[:a_47] = it
it=(@tmp<<bind[:a_47])
bind[:_result_47] = it });return FAIL if it==FAIL
it=bind[:_result_47]  
end
def rubyarg()
bind={}; 
  it=nil

it=_or(proc{it=seq("`");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:e_45] = it
it=seq("`");next FAIL if it==FAIL
it=(Exp[_body(bind[:e_45])])
bind[:_result_45] = it },proc{it=_args('(',')');next FAIL if it==FAIL
bind[:_result_45] = it},proc{it=_args('[',']');next FAIL if it==FAIL
bind[:_result_45] = it},proc{it=_args('{','}');next FAIL if it==FAIL
bind[:_result_45] = it},proc{it=seq("\"");next FAIL if it==FAIL
bind[:autovar_52] = it
it=(bind[:s_45]||=[];_append(bind[:s_45],bind[:autovar_52]))
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
it=(bind[:s_45]||=[];_append(bind[:s_45],bind[:autovar_56]))
it=(Strin[connectstring(bind[:s_45])])
bind[:_result_45] = it },proc{it=seq("\'");next FAIL if it==FAIL
bind[:autovar_57] = it
it=(bind[:s_45]||=[];_append(bind[:s_45],bind[:autovar_57]))
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
it=(bind[:s_45]||=[];_append(bind[:s_45],bind[:autovar_61]))
it=(Strin[connectstring(bind[:s_45])])
bind[:_result_45] = it },proc{it=_or(proc{it=(":@")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
bind[:_result_23] = it
it=bind[:_result_23]
bind[:n_45] = it },proc{it=(/[$.:]/)
bind[:regex_1] = it
it=anything();next FAIL if it==FAIL
bind[:c_4] = it
it=(bind[:c_4].is_a? String )||FAIL;next FAIL if it==FAIL
it=bind[:c_4]
bind[:_result_4] = it
it=bind[:_result_4]
bind[:c_1] = it
it=(bind[:regex_1].match(bind[:c_1]))||FAIL;next FAIL if it==FAIL
it=bind[:c_1]
bind[:_result_1] = it
it=bind[:_result_1]
bind[:n_45] = it },proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=_lookahead(true){it=_();next FAIL if it==FAIL};next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:autovar_62] = it
it=(bind[:n_45]||=[];_append(bind[:n_45],bind[:autovar_62]))
it=bind[:n_45]
bind[:_result_45] = it },proc{it=_lookahead(true){it=_();next FAIL if it==FAIL};next FAIL if it==FAIL
it=key();next FAIL if it==FAIL
bind[:_result_45] = it },proc{it=(/[^`{}()'"\[\]]/)
bind[:regex_1] = it
it=anything();next FAIL if it==FAIL
bind[:c_4] = it
it=(bind[:c_4].is_a? String )||FAIL;next FAIL if it==FAIL
it=bind[:c_4]
bind[:_result_4] = it
it=bind[:_result_4]
bind[:c_1] = it
it=(bind[:regex_1].match(bind[:c_1]))||FAIL;next FAIL if it==FAIL
it=bind[:c_1]
bind[:_result_1] = it
it=bind[:_result_1]
bind[:_result_45] = it });return FAIL if it==FAIL
it=bind[:_result_45]  
end
def ruleargs()
bind={}; 
  it=nil

it=argsOpt('(',')');return FAIL if it==FAIL
bind[:autovar_41] = it
it=_pass(false,bind[:autovar_41]){it=anything();next FAIL if it==FAIL
bind[:autovar_40] = it
it=_pass(true,bind[:autovar_40]){it=addargs();next FAIL if it==FAIL
bind[:_result_38] = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_38]  
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
bind[:ary_30] = it
it=Seq.create( {:ary=>bind[:ary_30] })
bind[:_result_30] = it
it=bind[:_result_30]  
end
def term()
bind={}; 
  it=nil

it=_or(proc{it=className();next FAIL if it==FAIL
bind[:cls_33] = it
it=(Apply["clas",bind[:cls_33]])
bind[:_result_33] = it },proc{it=("nested")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
it=seq("(");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:expr_33] = it
it=(")")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
it=(Nested[bind[:expr_33]])
bind[:_result_33] = it },proc{it=("break")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
it=(Seq[Cut[],Stop[]])
bind[:_result_33] = it },proc{it=application();next FAIL if it==FAIL
bind[:_result_33] = it},proc{it=key();next FAIL if it==FAIL
bind[:it_33] = it
it=(bind[:it_33].is_a?(Result) ? bind[:it_33] : Act[Args[bind[:it_33]]])
bind[:_result_33] = it },proc{it=_or(proc{it=("->")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
it=atomicHostExpr();next FAIL if it==FAIL
bind[:x_33] = it },proc{it=("")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
it=inlineHostExpr();next FAIL if it==FAIL
bind[:x_33] = it });next FAIL if it==FAIL
it=(Act[bind[:x_33]])
bind[:_result_33] = it },proc{it=("\"")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
while true
bind[:autovar_31]=@input;r=it=_or(proc{it=seq("\"");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_28] = it
it=(bind[:s_33]||=[];_append(bind[:s_33],bind[:autovar_28])) });break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_31]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_31]
it=(Apply["token" ,quote(bind[:s_33])])
bind[:_result_33] = it },proc{it=("'")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
while true
bind[:autovar_35]=@input;r=it=_or(proc{it=seq("\'");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_32] = it
it=(bind[:s_33]||=[];_append(bind[:s_33],bind[:autovar_32])) });break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_35]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_35]
it=(Apply["seq"   ,quote(bind[:s_33])])
bind[:_result_33] = it },proc{it=number();next FAIL if it==FAIL
bind[:it_33] = it
it=(Apply["exactly",bind[:it_33]])
bind[:_result_33] = it },proc{it=("<")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
while true
bind[:autovar_39]=@input;r=it=_or(proc{it=(">")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_36] = it
it=(bind[:x_33]||=[];_append(bind[:x_33],bind[:autovar_36])) });break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_39]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_39]
it=(Apply["regch","/[#{bind[:x_33]}]/"])
bind[:_result_33] = it },proc{it=("(")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:x_33] = it
it=(")")
bind[:s_23] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_23]);next FAIL if it==FAIL
it=_or(proc{it=seq("[]");next FAIL if it==FAIL
it=(bind[:x_33])
bind[:ors_36] = it
it=(a=autovar; Seq[Or[{:ary=>bind[:ors_36].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],Act[a]])
bind[:_result_36] = it
it=bind[:_result_36]
bind[:_result_33] = it },proc{it=empty();next FAIL if it==FAIL
it=bind[:x_33]
bind[:_result_33] = it });next FAIL if it==FAIL });return FAIL if it==FAIL
it=bind[:_result_33]  
end
end

