class Amethyst < AmethystCore
def _()
bind={}; 
  it=nil

it=(/[\s\t\r\n\f]/)
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
bind[:_result_3] = it
it=bind[:_result_3]
bind[:_result_4] = it
it=bind[:_result_4]  
end
def _false()
bind={}; 
  it=nil

it=(false)
bind[:wanted_1] = it
it=anything();return FAIL if it==FAIL
bind[:got_1] = it
it=(bind[:wanted_1] == bind[:got_1])||FAIL;return FAIL if it==FAIL
it=bind[:wanted_1]
bind[:_result_1] = it
it=bind[:_result_1]
bind[:_result_2] = it
it=bind[:_result_2]  
end
def _true()
bind={}; 
  it=nil

it=(true)
bind[:wanted_1] = it
it=anything();return FAIL if it==FAIL
bind[:got_1] = it
it=(bind[:wanted_1] == bind[:got_1])||FAIL;return FAIL if it==FAIL
it=bind[:wanted_1]
bind[:_result_1] = it
it=bind[:_result_1]
bind[:_result_2] = it
it=bind[:_result_2]  
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
bind[:_result_3] = it
it=bind[:_result_3]  
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

it=_lookahead(true){it=anything();next FAIL if it==FAIL};return FAIL if it==FAIL
bind[:_result_1] = it
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
bind[:_result_1] = it },proc{it=empty();next FAIL if it==FAIL
it=([])
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def lower()
bind={}; 
  it=nil

it=(/[a-z]/)
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
bind[:_result_3] = it
it=bind[:_result_3]  
end
def regch(a0)
bind={}; bind[:regex_1]=a0
  it=nil

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
end
def space()
bind={}; 
  it=nil

it=(/[\s\t\r\n\f]/)
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
bind[:_result_3] = it
it=bind[:_result_3]  
end
def spaces()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
while true
bind[:autovar_3]=@input;r=it=(/[\s\t\r\n\f]/)
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
bind[:_result_3] = it
it=bind[:_result_3]
bind[:autovar_2] = it
it=(bind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_2])) 
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3]
it=bind[:autovar_1]
bind[:_result_4] = it
it=bind[:_result_4]  
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

it=(/[A-Z]/)
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
bind[:_result_3] = it
it=bind[:_result_3]  
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

it=(/[0-9a-fA-F]/)
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
bind[:_result_3] = it
it=bind[:_result_3]  
end
end

