class Amethyst < AmethystCore
def char()
 c_1=nil
_result_1=nil
 c_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
_result_1 = (c_1)
_result_1  
end
def regch(regex_1)
 c_2=nil
c_1=nil
_result_2=nil
_result_1=nil
 c_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
_result_1 = (c_1)
autovar_1 = (_result_1)
c_2 = ((autovar_1))
(it=((regex_1.match(c_2))||FAIL);return FAIL if it==FAIL;it)
_result_2 = (c_2)
_result_2  
end
def space()
 regex_1=nil
c_2=nil
c_1=nil
_result_2=nil
_result_1=nil
_result_3=nil
 regex_1 = ((/[\s\t\r\n\f]/))
c_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
_result_1 = (c_1)
autovar_1 = (_result_1)
c_2 = ((autovar_1))
(it=((regex_1.match(c_2))||FAIL);return FAIL if it==FAIL;it)
_result_2 = (c_2)
autovar_2 = (_result_2)
_result_3 = ((autovar_2))
_result_3  
end
def spaces()
 regex_1=nil
c_2=nil
c_1=nil
_result_2=nil
_result_1=nil
_result_3=nil
_result_4=nil
 autovar_1 = (([]))
while true
autovar_5=@input;r=regex_1 = ((/[\s\t\r\n\f]/))
c_1 = ((it=(anything());break FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);break FAIL if it==FAIL;it)
_result_1 = (c_1)
autovar_2 = (_result_1)
c_2 = ((autovar_2))
(it=((regex_1.match(c_2))||FAIL);break FAIL if it==FAIL;it)
_result_2 = (c_2)
autovar_3 = (_result_2)
_result_3 = ((autovar_3))
autovar_4 = (_result_3)
it=((autovar_4))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5
_result_4 = (autovar_1)
_result_4  
end
def empty()
 _result_1=nil
 _result_1 = ((nil))
_result_1  
end
def listOf(rule_1,delim_1)
 f_1=nil
_result_1=nil
 (it=(_or(proc{it=((it=(apply(rule_1));next FAIL if it==FAIL;it))
 f_1||=[];_append(f_1,it)
autovar_1 = (([]))
while true
autovar_2=@input;r=(it=(apply(delim_1));break FAIL if it==FAIL;it)
it=((it=(apply(rule_1));break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(autovar_1)
 f_1||=[];_append(f_1,it)
_result_1 = (f_1) },proc{(it=(empty());next FAIL if it==FAIL;it)
_result_1 = (([])) }));return FAIL if it==FAIL;it)
_result_1  
end
def lower()
 regex_1=nil
c_2=nil
c_1=nil
_result_2=nil
_result_1=nil
_result_3=nil
 regex_1 = ((/[a-z]/))
c_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
_result_1 = (c_1)
autovar_1 = (_result_1)
c_2 = ((autovar_1))
(it=((regex_1.match(c_2))||FAIL);return FAIL if it==FAIL;it)
_result_2 = (c_2)
autovar_2 = (_result_2)
_result_3 = ((autovar_2))
_result_3  
end
def digit()
 regex_1=nil
c_2=nil
c_1=nil
_result_3=nil
_result_2=nil
_result_1=nil
 regex_1 = ((/[0-9]/))
c_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
_result_1 = (c_1)
autovar_1 = (_result_1)
c_2 = ((autovar_1))
(it=((regex_1.match(c_2))||FAIL);return FAIL if it==FAIL;it)
_result_2 = (c_2)
autovar_2 = (_result_2)
_result_3 = ((autovar_2))
_result_3  
end
def upper()
 regex_1=nil
c_2=nil
c_1=nil
_result_2=nil
_result_1=nil
_result_3=nil
 regex_1 = ((/[A-Z]/))
c_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
_result_1 = (c_1)
autovar_1 = (_result_1)
c_2 = ((autovar_1))
(it=((regex_1.match(c_2))||FAIL);return FAIL if it==FAIL;it)
_result_2 = (c_2)
autovar_2 = (_result_2)
_result_3 = ((autovar_2))
_result_3  
end
def letter()
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(lower());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(upper());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
_result_1  
end
def letterOrDigit()
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(letter());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(digit());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
_result_1  
end
def token(s_1)
 _result_1=nil
 (it=(spaces());return FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));return FAIL if it==FAIL;it))
_result_1  
end
def alpha()
 _result_1=nil
 _result_1 = ((it=(letter());return FAIL if it==FAIL;it))
_result_1  
end
def word()
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(alpha());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("_"));next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
_result_1  
end
def exactly(wanted_1)
 got_1=nil
_result_1=nil
 got_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((wanted_1 == got_1)||FAIL);return FAIL if it==FAIL;it)
_result_1 = (wanted_1)
_result_1  
end
def _false()
 got_1=nil
wanted_1=nil
_result_2=nil
_result_1=nil
 wanted_1 = ((false))
got_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((wanted_1 == got_1)||FAIL);return FAIL if it==FAIL;it)
_result_1 = (wanted_1)
autovar_1 = (_result_1)
_result_2 = ((autovar_1))
_result_2  
end
def clas(cls_1)
 _result_1=nil
i_1=nil
 i_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((i_1.is_a?(cls_1))||FAIL);return FAIL if it==FAIL;it)
_result_1 = (i_1)
_result_1  
end
def endline()
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(seq("\r\n"));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("\r"));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("\n"));next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
_result_1  
end
def eof()
 _result_1=nil
 _result_1 = ((it=(_lookahead(true){(it=(anything());next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it))
_result_1  
end
def alnum()
 _result_1=nil
 _result_1 = ((it=(letterOrDigit());return FAIL if it==FAIL;it))
_result_1  
end
def _true()
 got_1=nil
wanted_1=nil
_result_2=nil
_result_1=nil
 wanted_1 = ((true))
got_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((wanted_1 == got_1)||FAIL);return FAIL if it==FAIL;it)
_result_1 = (wanted_1)
autovar_1 = (_result_1)
_result_2 = ((autovar_1))
_result_2  
end
def _()
 regex_1=nil
c_2=nil
c_1=nil
_result_2=nil
_result_1=nil
_result_3=nil
_result_4=nil
 regex_1 = ((/[\s\t\r\n\f]/))
c_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
_result_1 = (c_1)
autovar_1 = (_result_1)
c_2 = ((autovar_1))
(it=((regex_1.match(c_2))||FAIL);return FAIL if it==FAIL;it)
_result_2 = (c_2)
autovar_2 = (_result_2)
_result_3 = ((autovar_2))
autovar_3 = (_result_3)
_result_4 = ((autovar_3))
_result_4  
end
def xdigit()
 regex_1=nil
c_2=nil
c_1=nil
_result_2=nil
_result_3=nil
_result_1=nil
 regex_1 = ((/[0-9a-fA-F]/))
c_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
_result_1 = (c_1)
autovar_1 = (_result_1)
c_2 = ((autovar_1))
(it=((regex_1.match(c_2))||FAIL);return FAIL if it==FAIL;it)
_result_2 = (c_2)
autovar_2 = (_result_2)
_result_3 = ((autovar_2))
_result_3  
end
end

