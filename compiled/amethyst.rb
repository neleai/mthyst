class Amethyst < AmethystCore
def char()
 _result_1=nil
c_1=nil
 it=nil
it=anything();return FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;return FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1  
end
def regch(regex_1)
 _result_1=nil
_result_2=nil
c_1=nil
c_2=nil
 it=nil
it=anything();return FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;return FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1
autovar_1 = it
it=(autovar_1)
c_2 = it
it=(regex_1.match(c_2))||FAIL;return FAIL if it==FAIL
it=c_2
_result_2 = it
it=_result_2  
end
def space()
 _result_1=nil
_result_3=nil
_result_2=nil
c_1=nil
c_2=nil
regex_1=nil
 it=nil
it=(/[\s\t\r\n\f]/)
regex_1 = it
it=anything();return FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;return FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1
autovar_1 = it
it=(autovar_1)
c_2 = it
it=(regex_1.match(c_2))||FAIL;return FAIL if it==FAIL
it=c_2
_result_2 = it
it=_result_2
autovar_2 = it
it=(autovar_2)
_result_3 = it
it=_result_3  
end
def spaces()
 _result_1=nil
_result_4=nil
_result_3=nil
_result_2=nil
c_1=nil
c_2=nil
regex_1=nil
 it=nil
it=([])
autovar_1 = it
while true
autovar_5=@input;r=it=(/[\s\t\r\n\f]/)
regex_1 = it
it=anything();break FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;break FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1
autovar_2 = it
it=(autovar_2)
c_2 = it
it=(regex_1.match(c_2))||FAIL;break FAIL if it==FAIL
it=c_2
_result_2 = it
it=_result_2
autovar_3 = it
it=(autovar_3)
_result_3 = it
it=_result_3
autovar_4 = it
it=(autovar_4)
autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5
it=autovar_1
_result_4 = it
it=_result_4  
end
def empty()
 _result_1=nil
 it=nil
it=(nil)
_result_1 = it
it=_result_1  
end
def listOf(rule_1,delim_1)
 _result_1=nil
f_1=nil
 it=nil
it=_or(proc{it=apply(rule_1);next FAIL if it==FAIL
f_1||=[];_append(f_1,it)
it=([])
autovar_1 = it
while true
autovar_2=@input;r=it=apply(delim_1);break FAIL if it==FAIL
it=apply(rule_1);break FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=autovar_1
f_1||=[];_append(f_1,it)
it=f_1
_result_1 = it },proc{it=empty();next FAIL if it==FAIL
it=([])
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end
def lower()
 _result_1=nil
_result_3=nil
_result_2=nil
c_1=nil
c_2=nil
regex_1=nil
 it=nil
it=(/[a-z]/)
regex_1 = it
it=anything();return FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;return FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1
autovar_1 = it
it=(autovar_1)
c_2 = it
it=(regex_1.match(c_2))||FAIL;return FAIL if it==FAIL
it=c_2
_result_2 = it
it=_result_2
autovar_2 = it
it=(autovar_2)
_result_3 = it
it=_result_3  
end
def digit()
 _result_1=nil
_result_3=nil
_result_2=nil
c_1=nil
c_2=nil
regex_1=nil
 it=nil
it=(/[0-9]/)
regex_1 = it
it=anything();return FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;return FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1
autovar_1 = it
it=(autovar_1)
c_2 = it
it=(regex_1.match(c_2))||FAIL;return FAIL if it==FAIL
it=c_2
_result_2 = it
it=_result_2
autovar_2 = it
it=(autovar_2)
_result_3 = it
it=_result_3  
end
def upper()
 _result_1=nil
_result_3=nil
_result_2=nil
c_1=nil
c_2=nil
regex_1=nil
 it=nil
it=(/[A-Z]/)
regex_1 = it
it=anything();return FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;return FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1
autovar_1 = it
it=(autovar_1)
c_2 = it
it=(regex_1.match(c_2))||FAIL;return FAIL if it==FAIL
it=c_2
_result_2 = it
it=_result_2
autovar_2 = it
it=(autovar_2)
_result_3 = it
it=_result_3  
end
def letter()
 _result_1=nil
 it=nil
it=_or(proc{it=lower();next FAIL if it==FAIL
_result_1 = it},proc{it=upper();next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def letterOrDigit()
 _result_1=nil
 it=nil
it=_or(proc{it=letter();next FAIL if it==FAIL
_result_1 = it},proc{it=digit();next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def token(s_1)
 _result_1=nil
 it=nil
it=spaces();return FAIL if it==FAIL
it=seq(s_1);return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def alpha()
 _result_1=nil
 it=nil
it=letter();return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def word()
 _result_1=nil
 it=nil
it=_or(proc{it=alpha();next FAIL if it==FAIL
_result_1 = it},proc{it=seq("_");next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def exactly(wanted_1)
 _result_1=nil
got_1=nil
 it=nil
it=anything();return FAIL if it==FAIL
got_1 = it
it=(wanted_1 == got_1)||FAIL;return FAIL if it==FAIL
it=wanted_1
_result_1 = it
it=_result_1  
end
def _false()
 _result_2=nil
_result_1=nil
got_1=nil
wanted_1=nil
 it=nil
it=(false)
wanted_1 = it
it=anything();return FAIL if it==FAIL
got_1 = it
it=(wanted_1 == got_1)||FAIL;return FAIL if it==FAIL
it=wanted_1
_result_1 = it
it=_result_1
autovar_1 = it
it=(autovar_1)
_result_2 = it
it=_result_2  
end
def clas(cls_1)
 _result_1=nil
i_1=nil
 it=nil
it=anything();return FAIL if it==FAIL
i_1 = it
it=(i_1.is_a?(cls_1))||FAIL;return FAIL if it==FAIL
it=i_1
_result_1 = it
it=_result_1  
end
def endline()
 _result_1=nil
 it=nil
it=_or(proc{it=seq("\r\n");next FAIL if it==FAIL
_result_1 = it},proc{it=seq("\r");next FAIL if it==FAIL
_result_1 = it},proc{it=seq("\n");next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def eof()
 _result_1=nil
 it=nil
it=_lookahead(true){it=anything();next FAIL if it==FAIL};return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def alnum()
 _result_1=nil
 it=nil
it=letterOrDigit();return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def _true()
 _result_2=nil
_result_1=nil
got_1=nil
wanted_1=nil
 it=nil
it=(true)
wanted_1 = it
it=anything();return FAIL if it==FAIL
got_1 = it
it=(wanted_1 == got_1)||FAIL;return FAIL if it==FAIL
it=wanted_1
_result_1 = it
it=_result_1
autovar_1 = it
it=(autovar_1)
_result_2 = it
it=_result_2  
end
def _()
 _result_1=nil
_result_3=nil
_result_4=nil
_result_2=nil
c_1=nil
c_2=nil
regex_1=nil
 it=nil
it=(/[\s\t\r\n\f]/)
regex_1 = it
it=anything();return FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;return FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1
autovar_1 = it
it=(autovar_1)
c_2 = it
it=(regex_1.match(c_2))||FAIL;return FAIL if it==FAIL
it=c_2
_result_2 = it
it=_result_2
autovar_2 = it
it=(autovar_2)
_result_3 = it
it=_result_3
autovar_3 = it
it=(autovar_3)
_result_4 = it
it=_result_4  
end
def xdigit()
 _result_1=nil
_result_3=nil
_result_2=nil
c_1=nil
c_2=nil
regex_1=nil
 it=nil
it=(/[0-9a-fA-F]/)
regex_1 = it
it=anything();return FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;return FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1
autovar_1 = it
it=(autovar_1)
c_2 = it
it=(regex_1.match(c_2))||FAIL;return FAIL if it==FAIL
it=c_2
_result_2 = it
it=_result_2
autovar_2 = it
it=(autovar_2)
_result_3 = it
it=_result_3  
end
end

