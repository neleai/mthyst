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

it=seq(bind[:o_1]);return FAIL if it==FAIL
it=("")
bind[:s_1] = it
it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_1]);return FAIL if it==FAIL
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=rubyarg();break FAIL if it==FAIL
bind[:autovar_2] = it
it=(bind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_2])) 
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

while true
bind[:autovar_3]=@input;r=it=(Args)
bind[:cls_1] = it
it=anything();break FAIL if it==FAIL
bind[:i_1] = it
it=(bind[:i_1].is_a?(bind[:cls_1]))||FAIL;break FAIL if it==FAIL
it=bind[:i_1]
bind[:_result_1] = it
it=bind[:_result_1]
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=anything();next FAIL if it==FAIL
bind[:name_1] = it
it=(_Local(bind[:name_1]) )
bind[:autovar_2] = it
it=(bind[:result_1]||=[];_append(bind[:result_1],bind[:autovar_2])) };break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=(bind[:result_1] || [])
bind[:_result_2] = it
it=bind[:_result_2]  
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
it=_pass(false,bind[:autovar_1]){it=anything();next FAIL if it==FAIL
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
while true
bind[:autovar_3]=@input;r=it=_lookahead(true){it=endline();next FAIL if it==FAIL};break FAIL if it==FAIL
it=anything();break FAIL if it==FAIL
bind[:autovar_2] = it
it=(bind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_2])) 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=bind[:autovar_1]
bind[:s_1] = it
it=("{#{bind[:s_1]*""}}")
bind[:autovar_4] = it
it=_pass(false,bind[:autovar_4]){it=anything();next FAIL if it==FAIL
bind[:autovar_5] = it
it=_pass(true,bind[:autovar_5]){it=inlineHostExpr();next FAIL if it==FAIL
bind[:_result_1] = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_1]  
end
def choice()
bind={}; 
  it=nil

it=(proc{it=token("|");return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1] })
bind[:delim_1] = it
it=('sequence')
bind[:rule_1] = it
it=_or(proc{it=apply(bind[:rule_1]);next FAIL if it==FAIL
bind[:autovar_1] = it
it=(bind[:f_1]||=[];_append(bind[:f_1],bind[:autovar_1]))
it=([])
bind[:autovar_2] = it
while true
bind[:autovar_4]=@input;r=it=apply(bind[:delim_1]);break FAIL if it==FAIL
it=apply(bind[:rule_1]);break FAIL if it==FAIL
bind[:autovar_3] = it
it=(bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])) 
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4]
it=bind[:autovar_2]
bind[:autovar_5] = it
it=(bind[:f_1]||=[];_append(bind[:f_1],bind[:autovar_5]))
it=bind[:f_1]
bind[:_result_2] = it },proc{it=empty();next FAIL if it==FAIL
it=([])
bind[:_result_2] = it });return FAIL if it==FAIL
it=bind[:_result_2]
bind[:ary_1] = it
it=Or.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it
it=bind[:_result_1]  
end
def className()
bind={}; 
  it=nil

it=("")
bind[:s_1] = it
it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_1]);return FAIL if it==FAIL
it=upper();return FAIL if it==FAIL
bind[:autovar_1] = it
it=(bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_1]))
it=([])
bind[:autovar_3] = it
while true
bind[:autovar_5]=@input;r=it=nameRest();break FAIL if it==FAIL
bind[:autovar_4] = it
it=(bind[:autovar_3]||=[];_append(bind[:autovar_3],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_3]
bind[:autovar_6] = it
it=(bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_6]))
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
it=anything();next FAIL if it==FAIL
bind[:c_1] = it
it=(bind[:c_1].is_a? String )||FAIL;next FAIL if it==FAIL
it=bind[:c_1]
bind[:_result_1] = it
it=bind[:_result_1]
bind[:c_2] = it
it=("\\#{bind[:c_2]}")
bind[:_result_2] = it },proc{it=_args('#{','}');next FAIL if it==FAIL
bind[:_result_2] = it},proc{it=anything();next FAIL if it==FAIL
bind[:c_1] = it
it=(bind[:c_1].is_a? String )||FAIL;next FAIL if it==FAIL
it=bind[:c_1]
bind[:_result_1] = it
it=bind[:_result_1]
bind[:_result_2] = it });return FAIL if it==FAIL
it=bind[:_result_2]  
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

it=("amethyst")
bind[:s_1] = it
it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_1]);return FAIL if it==FAIL
it=name();return FAIL if it==FAIL
bind[:name_1] = it
it=_or(proc{it=("<")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:parent_1] = it },proc{it=empty();next FAIL if it==FAIL
it=(bind[:parent_1]="Amethyst") });return FAIL if it==FAIL
it=("{")
bind[:s_1] = it
it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_1]);return FAIL if it==FAIL
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=rule();break FAIL if it==FAIL
bind[:autovar_2] = it
it=(bind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_2])) 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=bind[:autovar_1]
bind[:rules_1] = it
it=("}")
bind[:s_1] = it
it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_1]);return FAIL if it==FAIL
it=Grammar.create( {:name=>bind[:name_1],:parent=>bind[:parent_1],:rules=>bind[:rules_1] })
bind[:_result_1] = it
it=bind[:_result_1]  
end
def igrammar()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
while true
bind[:autovar_7]=@input;r=it=_or(proc{it=([])
bind[:autovar_2] = it
it=_lookahead(true){it=seq("amethyst");next FAIL if it==FAIL};next FAIL if it==FAIL
it=anything();next FAIL if it==FAIL
bind[:autovar_3] = it
it=(bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3]))
while true
bind[:autovar_5]=@input;r=it=_lookahead(true){it=seq("amethyst");next FAIL if it==FAIL};break FAIL if it==FAIL
it=anything();break FAIL if it==FAIL
bind[:autovar_4] = it
it=(bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_2]
bind[:it_1] = it
it=(bind[:it_1]*"")
bind[:autovar_6] = it },proc{it=grammar();next FAIL if it==FAIL
bind[:autovar_6] = it});break FAIL if it==FAIL
it=(bind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_6])) 
 break FAIL if r==FAIL
 (bind[:autovar_7]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_7]
it=bind[:autovar_1]
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

it=_or(proc{it=("@")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=_or(proc{it=className();next FAIL if it==FAIL
bind[:name_1] = it
it=argsOpt('[',']');next FAIL if it==FAIL
bind[:args_1] = it
it=(Object.const_get(bind[:name_1]).instance_variable_get(:@attrs))
bind[:vars_1] = it
it=Result.create( {:args=>bind[:args_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })
bind[:_result_1] = it },proc{it=name();next FAIL if it==FAIL
bind[:name_1] = it
it=Key.create( {:args=>bind[:args_1],:name=>bind[:name_1] })
bind[:_result_1] = it });next FAIL if it==FAIL },proc{it=("@@")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:name_1] = it
it=(Global[bind[:name_1]])
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def modifier()
bind={}; 
  it=nil

it=_or(proc{it=term();next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=("#")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=_lookahead(true){it=endline();next FAIL if it==FAIL};break FAIL if it==FAIL
it=anything();break FAIL if it==FAIL
bind[:autovar_2] = it
it=(bind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_2])) 
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

it=("")
bind[:s_1] = it
it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_1]);return FAIL if it==FAIL
it=nameFirst();return FAIL if it==FAIL
bind[:autovar_1] = it
it=(bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_1]))
it=([])
bind[:autovar_3] = it
while true
bind[:autovar_5]=@input;r=it=nameRest();break FAIL if it==FAIL
bind[:autovar_4] = it
it=(bind[:autovar_3]||=[];_append(bind[:autovar_3],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_3]
bind[:autovar_6] = it
it=(bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_6]))
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

it=_lookahead(true){it=name();next FAIL if it==FAIL
it=argsOpt('(',')');next FAIL if it==FAIL
it=("=")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL };return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def number()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=(/[0-9]/)
bind[:regex_1] = it
it=anything();return FAIL if it==FAIL
bind[:c_1] = it
it=(bind[:c_1].is_a? String )||FAIL;return FAIL if it==FAIL
it=bind[:c_1]
bind[:_result_1] = it
it=bind[:_result_1]
bind[:c_2] = it
it=(bind[:regex_1].match(bind[:c_2]))||FAIL;return FAIL if it==FAIL
it=bind[:c_2]
bind[:_result_2] = it
it=bind[:_result_2]
bind[:autovar_2] = it
it=(bind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_2]))
while true
bind[:autovar_4]=@input;r=it=(/[0-9]/)
bind[:regex_1] = it
it=anything();break FAIL if it==FAIL
bind[:c_1] = it
it=(bind[:c_1].is_a? String )||FAIL;break FAIL if it==FAIL
it=bind[:c_1]
bind[:_result_1] = it
it=bind[:_result_1]
bind[:c_2] = it
it=(bind[:regex_1].match(bind[:c_2]))||FAIL;break FAIL if it==FAIL
it=bind[:c_2]
bind[:_result_2] = it
it=bind[:_result_2]
bind[:autovar_3] = it
it=(bind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_3])) 
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4]
it=bind[:autovar_1]
bind[:_result_3] = it
it=bind[:_result_3]  
end
def prefixed()
bind={}; 
  it=nil

it=_or(proc{it=("&")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]
it=inlineHostExpr();next FAIL if it==FAIL
bind[:expr_1] = it
it=(Pred[bind[:expr_1]])
bind[:_result_2] = it },proc{it=_or(proc{it=("&")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]
bind[:neg_1] = it },proc{it=("~")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]
bind[:neg_1] = it });next FAIL if it==FAIL
it=prefixed();next FAIL if it==FAIL
bind[:m_1] = it
it=(Lookahead[bind[:m_1],bind[:neg_1]=="~"])
bind[:_result_2] = it },proc{it=_or(proc{it=modifier();next FAIL if it==FAIL
bind[:from_1] = it},proc{it=("")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]
it=_lookahead(false){it=(/[.:\[]/)
bind[:regex_1] = it
it=anything();next FAIL if it==FAIL
bind[:c_1] = it
it=(bind[:c_1].is_a? String )||FAIL;next FAIL if it==FAIL
it=bind[:c_1]
bind[:_result_3] = it
it=bind[:_result_3]
bind[:c_2] = it
it=(bind[:regex_1].match(bind[:c_2]))||FAIL;next FAIL if it==FAIL
it=bind[:c_2] };next FAIL if it==FAIL
it=_or(proc{it=(".")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1] },proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=(Apply["anything"])
bind[:from_1] = it });next FAIL if it==FAIL
while true
bind[:autovar_1]=@input;r=it=_lookahead(true){it=_();next FAIL if it==FAIL};break FAIL if it==FAIL
it=_or(proc{it=("=>")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]
it=prefixed();next FAIL if it==FAIL
bind[:it_1] = it
it=(bind[:from_1]=Pass[bind[:from_1],bind[:it_1]]) },proc{it=("[")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]
it=expression();next FAIL if it==FAIL
bind[:it_1] = it
it=(bind[:from_1]=Enter[bind[:from_1],bind[:it_1]])
it=("]")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1] },proc{it=_or(proc{it=("*")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]
bind[:one_1] = it },proc{it=("+")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]
bind[:one_1] = it });next FAIL if it==FAIL
it=(Many[bind[:from_1],bind[:one_1]=="+"])
bind[:from_1] = it },proc{it=("?")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]
it=(Or[bind[:from_1],Apply["empty"]])
bind[:from_1] = it },proc{it=(":")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]
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
bind[:_result_2] = it });return FAIL if it==FAIL
it=bind[:_result_2]  
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

it=_or(proc{it=(Args)
bind[:cls_1] = it
it=anything();next FAIL if it==FAIL
bind[:i_1] = it
it=(bind[:i_1].is_a?(bind[:cls_1]))||FAIL;next FAIL if it==FAIL
it=bind[:i_1]
bind[:_result_1] = it
it=bind[:_result_1]
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=([])
bind[:autovar_2] = it
while true
bind[:autovar_4]=@input;r=it=procargs2();break FAIL if it==FAIL
bind[:autovar_3] = it
it=(bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])) 
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4]
it=bind[:autovar_2]
bind[:_result_2] = it };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
bind[:a_1] = it
it=(@tmp<<bind[:a_1])
bind[:_result_2] = it });return FAIL if it==FAIL
it=bind[:_result_2]  
end
def rubyarg()
bind={}; 
  it=nil

it=_or(proc{it=seq("`");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:e_1] = it
it=seq("`");next FAIL if it==FAIL
it=(Exp[_body(bind[:e_1])])
bind[:_result_1] = it },proc{it=_args('(',')');next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=_args('[',']');next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=_args('{','}');next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=seq("\"");next FAIL if it==FAIL
bind[:autovar_1] = it
it=(bind[:s_1]||=[];_append(bind[:s_1],bind[:autovar_1]))
it=([])
bind[:autovar_2] = it
while true
bind[:autovar_4]=@input;r=it=_or(proc{it=seq("\"");next FAIL if it==FAIL
@cut=true;it
@stop=true;it
bind[:autovar_3] = it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_3] = it});break FAIL if it==FAIL
it=(bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])) 
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4]
it=bind[:autovar_2]
bind[:autovar_5] = it
it=(bind[:s_1]||=[];_append(bind[:s_1],bind[:autovar_5]))
it=(Strin[connectstring(bind[:s_1])])
bind[:_result_1] = it },proc{it=seq("\'");next FAIL if it==FAIL
bind[:autovar_6] = it
it=(bind[:s_1]||=[];_append(bind[:s_1],bind[:autovar_6]))
it=([])
bind[:autovar_7] = it
while true
bind[:autovar_9]=@input;r=it=_or(proc{it=seq("\'");next FAIL if it==FAIL
@cut=true;it
@stop=true;it
bind[:autovar_8] = it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_8] = it});break FAIL if it==FAIL
it=(bind[:autovar_7]||=[];_append(bind[:autovar_7],bind[:autovar_8])) 
 break FAIL if r==FAIL
 (bind[:autovar_9]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_9]
it=bind[:autovar_7]
bind[:autovar_10] = it
it=(bind[:s_1]||=[];_append(bind[:s_1],bind[:autovar_10]))
it=(Strin[connectstring(bind[:s_1])])
bind[:_result_1] = it },proc{it=seq("...");next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=seq("..");next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=_or(proc{it=(":@")
bind[:s_2] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_2]);next FAIL if it==FAIL
bind[:_result_2] = it
it=bind[:_result_2]
bind[:n_1] = it },proc{it=(/[$.:]/)
bind[:regex_1] = it
it=anything();next FAIL if it==FAIL
bind[:c_1] = it
it=(bind[:c_1].is_a? String )||FAIL;next FAIL if it==FAIL
it=bind[:c_1]
bind[:_result_3] = it
it=bind[:_result_3]
bind[:c_2] = it
it=(bind[:regex_1].match(bind[:c_2]))||FAIL;next FAIL if it==FAIL
it=bind[:c_2]
bind[:_result_4] = it
it=bind[:_result_4]
bind[:n_1] = it },proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=_lookahead(true){it=_();next FAIL if it==FAIL};next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
bind[:autovar_11] = it
it=(bind[:n_1]||=[];_append(bind[:n_1],bind[:autovar_11]))
it=bind[:n_1]
bind[:_result_1] = it },proc{it=_lookahead(true){it=_();next FAIL if it==FAIL};next FAIL if it==FAIL
it=key();next FAIL if it==FAIL
bind[:_result_1] = it },proc{it=(/[^`{}()'"\[\]]/)
bind[:regex_1] = it
it=anything();next FAIL if it==FAIL
bind[:c_1] = it
it=(bind[:c_1].is_a? String )||FAIL;next FAIL if it==FAIL
it=bind[:c_1]
bind[:_result_3] = it
it=bind[:_result_3]
bind[:c_2] = it
it=(bind[:regex_1].match(bind[:c_2]))||FAIL;next FAIL if it==FAIL
it=bind[:c_2]
bind[:_result_4] = it
it=bind[:_result_4]
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def rule()
bind={}; 
  it=nil

it=(@locals=[];@bnding=Bnding[])
it=(@bnding)
bind[:bnding_1] = it
it=name();return FAIL if it==FAIL
bind[:name_1] = it
it=ruleargs();return FAIL if it==FAIL
bind[:args_1] = it
it=("=")
bind[:s_1] = it
it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_1]);return FAIL if it==FAIL
it=expression();return FAIL if it==FAIL
bind[:body_1] = it
it=(_body(bind[:body_1]))
bind[:body_1] = it
it=(@locals.uniq)
bind[:locals_1] = it
it=Rule.create( {:args=>bind[:args_1],:bnding=>bind[:bnding_1],:body=>bind[:body_1],:locals=>bind[:locals_1],:name=>bind[:name_1] })
bind[:_result_1] = it
it=bind[:_result_1]  
end
def ruleargs()
bind={}; 
  it=nil

it=argsOpt('(',')');return FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(false,bind[:autovar_1]){it=anything();next FAIL if it==FAIL
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
while true
bind[:autovar_3]=@input;r=it=nr();break FAIL if it==FAIL
it=prefixed();break FAIL if it==FAIL
bind[:autovar_2] = it
it=(bind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_2])) 
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

it=_or(proc{it=className();next FAIL if it==FAIL
bind[:cls_1] = it
it=(Apply["clas",bind[:cls_1]])
bind[:_result_1] = it },proc{it=("nested")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=seq("(");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:expr_1] = it
it=(")")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=(Nested[bind[:expr_1]])
bind[:_result_1] = it },proc{it=("break")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=(Seq[Cut[],Stop[]])
bind[:_result_1] = it },proc{it=application();next FAIL if it==FAIL
bind[:_result_1] = it},proc{it=key();next FAIL if it==FAIL
bind[:it_1] = it
it=(bind[:it_1].is_a?(Result) ? bind[:it_1] : Act[Args[bind[:it_1]]])
bind[:_result_1] = it },proc{it=_or(proc{it=("->")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=atomicHostExpr();next FAIL if it==FAIL
bind[:x_1] = it },proc{it=("")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=inlineHostExpr();next FAIL if it==FAIL
bind[:x_1] = it });next FAIL if it==FAIL
it=(Act[bind[:x_1]])
bind[:_result_1] = it },proc{it=("\"")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
while true
bind[:autovar_2]=@input;r=it=_or(proc{it=seq("\"");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_1] = it
it=(bind[:s_2]||=[];_append(bind[:s_2],bind[:autovar_1])) });break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_2]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_2]
it=(Apply["token" ,quote(bind[:s_2])])
bind[:_result_1] = it },proc{it=("'")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
while true
bind[:autovar_4]=@input;r=it=_or(proc{it=seq("\'");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_3] = it
it=(bind[:s_2]||=[];_append(bind[:s_2],bind[:autovar_3])) });break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4]
it=(Apply["seq"   ,quote(bind[:s_2])])
bind[:_result_1] = it },proc{it=number();next FAIL if it==FAIL
bind[:it_1] = it
it=(Apply["exactly",bind[:it_1]])
bind[:_result_1] = it },proc{it=("<")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
while true
bind[:autovar_6]=@input;r=it=_or(proc{it=(">")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
bind[:autovar_5] = it
it=(bind[:x_1]||=[];_append(bind[:x_1],bind[:autovar_5])) });break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_6]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_6]
it=(Apply["regch","/[#{bind[:x_1]}]/"])
bind[:_result_1] = it },proc{it=("(")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
bind[:x_1] = it
it=(")")
bind[:s_1] = it
it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=_or(proc{it=seq("[]");next FAIL if it==FAIL
it=(bind[:x_1])
bind[:ors_1] = it
it=(a=autovar; Seq[Or[{:ary=>bind[:ors_1].ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],Act[a]])
bind[:_result_2] = it
it=bind[:_result_2]
bind[:_result_1] = it },proc{it=empty();next FAIL if it==FAIL
it=bind[:x_1]
bind[:_result_1] = it });next FAIL if it==FAIL });return FAIL if it==FAIL
it=bind[:_result_1]  
end
end

