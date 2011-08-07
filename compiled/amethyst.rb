class Amethyst < AmethystCore
def _()
bind={}; 
  it=nil

it=anything();return FAIL if it==FAIL
bind[:c_2] = it
it=bind[:c_2] 
bind[:_result_3] = it
it=bind[:_result_3] 
bind[:c_1] = it
it=bind[:c_1]
it=bind[:_result_4] 
bind[:_result_2] = it
it=bind[:_result_2] 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def _false()
bind={}; 
  it=nil

it=anything();return FAIL if it==FAIL
bind[:got_1] = it
it=bind[:wanted_1]
it=bind[:_result_2] 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def _true()
bind={}; 
  it=nil

it=anything();return FAIL if it==FAIL
bind[:got_1] = it
it=bind[:wanted_1]
it=bind[:_result_2] 
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
it=bind[:c_1] 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def clas(a0)
bind={}; bind[:cls_1]=a0
  it=nil

it=anything();return FAIL if it==FAIL
bind[:i_1] = it
it=bind[:i_1] 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def digit()
bind={}; 
  it=nil

it=anything();return FAIL if it==FAIL
bind[:c_2] = it
it=bind[:c_2] 
bind[:_result_2] = it
it=bind[:_result_2] 
bind[:c_1] = it
it=bind[:c_1]
it=bind[:_result_3] 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def empty()
bind={}; 
  it=nil

it=()
bind[:_result_1] = it
it=bind[:_result_1]  
end
def endline()
bind={}; 
  it=nil

it=_or();return FAIL if it==FAIL
it=bind[:_result_1]  
end
def eof()
bind={}; 
  it=nil

it=_or();return FAIL if it==FAIL
it=bind[:_result_1]  
end
def exactly(a0)
bind={}; bind[:wanted_1]=a0
  it=nil

it=anything();return FAIL if it==FAIL
bind[:got_1] = it
it=bind[:wanted_1] 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def fails()
bind={}; 
  it=nil

it=()
bind[:_result_1] = it
it=bind[:_result_1]  
end
def letter()
bind={}; 
  it=nil

it=_or();return FAIL if it==FAIL
it=bind[:_result_1]  
end
def letterOrDigit()
bind={}; 
  it=nil

it=_or();return FAIL if it==FAIL
it=bind[:_result_1]  
end
def listOf(a0,a1)
bind={}; bind[:rule_1]=a0;bind[:delim_1]=a1
  it=nil

it=bind[:_result_1] 
end
def lower()
bind={}; 
  it=nil

it=anything();return FAIL if it==FAIL
bind[:c_2] = it
it=bind[:c_2] 
bind[:_result_2] = it
it=bind[:_result_2] 
bind[:c_1] = it
it=bind[:c_1]
it=bind[:_result_3] 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def regch(a0)
bind={}; bind[:regex_1]=a0
  it=nil

it=anything();return FAIL if it==FAIL
bind[:c_2] = it
it=bind[:c_2] 
bind[:_result_2] = it
it=bind[:_result_2] 
bind[:c_1] = it
it=bind[:c_1] 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def space()
bind={}; 
  it=nil

it=anything();return FAIL if it==FAIL
bind[:c_2] = it
it=bind[:c_2] 
bind[:_result_2] = it
it=bind[:_result_2] 
bind[:c_1] = it
it=bind[:c_1]
it=bind[:_result_3] 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def spaces()
bind={}; 
  it=nil

it=()
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=anything();break FAIL if it==FAIL
bind[:c_2] = it
it=bind[:c_2] 
bind[:_result_3] = it
it=bind[:_result_3] 
bind[:c_1] = it
it=bind[:c_1]
it=bind[:_result_4] 
bind[:_result_2] = it
it=bind[:_result_2] 
bind[:autovar_2] = it
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

it=anything();return FAIL if it==FAIL
bind[:c_2] = it
it=bind[:c_2] 
bind[:_result_2] = it
it=bind[:_result_2] 
bind[:c_1] = it
it=bind[:c_1]
it=bind[:_result_3] 
bind[:_result_1] = it
it=bind[:_result_1]  
end
def word()
bind={}; 
  it=nil

it=_or();return FAIL if it==FAIL
it=bind[:_result_1]  
end
def xdigit()
bind={}; 
  it=nil

it=anything();return FAIL if it==FAIL
bind[:c_2] = it
it=bind[:c_2] 
bind[:_result_2] = it
it=bind[:_result_2] 
bind[:c_1] = it
it=bind[:c_1]
it=bind[:_result_3] 
bind[:_result_1] = it
it=bind[:_result_1]  
end
end

