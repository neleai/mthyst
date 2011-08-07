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

 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def _args(a0,a1)
bind={}; bind[:o_1]=a0;bind[:c_1]=a1
  it=nil

it=__args(bind[:o_1],bind[:c_1]);return FAIL if it==FAIL
bind[:r_1] = it
bind[:_result_1] = it
it=bind[:_result_1]  
end
def addargs()
bind={}; 
  it=nil

 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def application()
bind={}; 
  it=nil

it=argsOpt('(',')');return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def args(a0,a1)
bind={}; bind[:o_1]=a0;bind[:c_1]=a1
  it=nil

it=_pass(true,bind[:autovar_2]){it=_pass(true,bind[:autovar_1]){it=procargs();next FAIL if it==FAIL};next FAIL if it==FAIL};return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def argsOpt(a0,a1)
bind={}; bind[:o_1]=a0;bind[:c_1]=a1
  it=nil

it=empty();return FAIL if it==FAIL
it=bind[:_result_1]  
end
def atomicHostExpr()
bind={}; 
  it=nil

it=_pass(true,bind[:autovar_2]){it=_pass(true,bind[:autovar_1]){it=inlineHostExpr();next FAIL if it==FAIL};next FAIL if it==FAIL};return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def choice()
bind={}; 
  it=nil

it=bind[:_result_2]
bind[:ary_1] = it
it=Or.create( {:ary=>bind[:ary_1] }) 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def className()
bind={}; 
  it=nil

it=bind[:autovar_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def collect(a0)
bind={}; bind[:ors_1]=a0
  it=nil

it=()
bind[:_result_1] = it
it=bind[:_result_1]  
end
def eChar()
bind={}; 
  it=nil

it=_or();return FAIL if it==FAIL
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

it=spaces();return FAIL if it==FAIL
it=seq(bind[:s_1]);return FAIL if it==FAIL
it=bind[:_result_2]
it=Grammar.create( {:name=>bind[:name_1],:parent=>bind[:parent_1],:rules=>bind[:rules_1] }) 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def igrammar()
bind={}; 
  it=nil

it=()
bind[:autovar_1] = it
while true
bind[:autovar_2]=@input;r=it=_or();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_2]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_2]
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

it=name();return FAIL if it==FAIL
it=Key.create( {:args=>bind[:args_1],:name=>bind[:name_1] })
it=bind[:_result_1]  
end
def modifier()
bind={}; 
  it=nil

it=bind[:_result_1] 
end
def name()
bind={}; 
  it=nil

it=bind[:autovar_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def nameFirst()
bind={}; 
  it=nil

it=_or();return FAIL if it==FAIL
it=bind[:_result_1]  
end
def nameRest()
bind={}; 
  it=nil

it=_or();return FAIL if it==FAIL
it=bind[:_result_1]  
end
def nr()
bind={}; 
  it=nil

it=_or();return FAIL if it==FAIL
it=bind[:_result_1]  
end
def number()
bind={}; 
  it=nil

it=()
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=anything();break FAIL if it==FAIL
bind[:c_2] = it
it=bind[:c_2] 
bind[:_result_2] = it
it=bind[:_result_2] 
bind[:c_1] = it
it=bind[:c_1]
it=bind[:_result_3] 
bind[:autovar_2] = it
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=bind[:autovar_1] 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def prefixed()
bind={}; 
  it=nil

it=bind[:_result_1] 
end
def procargs()
bind={}; 
  it=nil

while true
bind[:autovar_1]=@input;r=it=_or();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_1]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_1]
it=bind[:autovar_2] 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def procargs2()
bind={}; 
  it=nil

it=anything();return FAIL if it==FAIL
it=bind[:_result_1]  
end
def rubyarg()
bind={}; 
  it=nil

it=_();return FAIL if it==FAIL
@cut=true;it
it=fails();return FAIL if it==FAIL
it=key();return FAIL if it==FAIL 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def rule()
bind={}; 
  it=nil

 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def ruleargs()
bind={}; 
  it=nil

it=_pass(true,bind[:autovar_2]){it=_pass(true,bind[:autovar_1]){it=addargs();next FAIL if it==FAIL};next FAIL if it==FAIL};return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def sequence()
bind={}; 
  it=nil

it=()
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=nr();break FAIL if it==FAIL
it=prefixed();break FAIL if it==FAIL 
bind[:autovar_2] = it
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

it=_or(proc{it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=bind[:_result_2]
it=inlineHostExpr();next FAIL if it==FAIL 
bind[:_result_1] = it},proc{it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=bind[:_result_2] },proc{it=spaces();next FAIL if it==FAIL
it=seq(bind[:s_1]);next FAIL if it==FAIL
it=bind[:_result_2] });return FAIL if it==FAIL
it=bind[:_result_1]  
end
end

