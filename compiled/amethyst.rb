class Amethyst < AmethystCore
def many1(s_1)
 a_1 = ((nil))
_result_1 = ((nil))
it=((it=(apply(s_1));return FAIL if it==FAIL;it))
 a_1||=[];_append(a_1,it)
autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(apply(s_1));break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
_result_1 = (it=((autovar_1))
 a_1||=[];_append(a_1,it))
(_result_1)  
end
def spaces()
 _result_1 = ((nil))
autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(space());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
_result_1 = ((autovar_1))
(_result_1)  
end
def char()
 c_1 = ((nil))
_result_1 = ((nil))
c_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
_result_1 = ((c_1))
(_result_1)  
end
def listOf(rule_1,delim_1)
 f_1 = ((nil))
_result_1 = ((nil))
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
it=((autovar_1))
 f_1||=[];_append(f_1,it)
_result_1 = ((f_1)) },proc{(it=(empty());next FAIL if it==FAIL;it)
_result_1 = (([])) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def lower()
 _result_1 = ((nil))
_result_1 = ((it=(regch(/[a-z]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def letterOrDigit()
 _result_1 = ((nil))
(it=(_or(proc{_result_1 = ((it=(letter());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(digit());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def token(s_1)
 _result_1 = ((nil))
(it=(spaces());return FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));return FAIL if it==FAIL;it))
(_result_1)  
end
def word()
 _result_1 = ((nil))
(it=(_or(proc{_result_1 = ((it=(alpha());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("_"));next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def _false()
 _result_1 = ((nil))
_result_1 = ((it=(exactly(false));return FAIL if it==FAIL;it))
(_result_1)  
end
def upper()
 _result_1 = ((nil))
_result_1 = ((it=(regch(/[A-Z]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def clas(cls_1)
 i_1 = ((nil))
_result_1 = ((nil))
i_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((i_1.is_a?(cls_1))||FAIL);return FAIL if it==FAIL;it)
_result_1 = ((i_1))
(_result_1)  
end
def exactly(wanted_1)
 got_1 = ((nil))
_result_1 = ((nil))
got_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((wanted_1 == got_1)||FAIL);return FAIL if it==FAIL;it)
_result_1 = ((wanted_1))
(_result_1)  
end
def digit()
 _result_1 = ((nil))
_result_1 = ((it=(regch(/[0-9]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def space()
 _result_1 = ((nil))
_result_1 = ((it=(regch(/[\s\t\r\n\f]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def endline()
 _result_1 = ((nil))
(it=(_or(proc{_result_1 = ((it=(seq("\r\n"));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("\r"));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("\n"));next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def empty()
 _result_1 = ((nil))
_result_1 = ((nil))
(_result_1)  
end
def eof()
 _result_1 = ((nil))
_result_1 = ((it=(_lookahead(true){(it=(anything());next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it))
(_result_1)  
end
def alnum()
 _result_1 = ((nil))
_result_1 = ((it=(letterOrDigit());return FAIL if it==FAIL;it))
(_result_1)  
end
def regch(regex_1)
 c_1 = ((nil))
_result_1 = ((nil))
c_1 = ((it=(char());return FAIL if it==FAIL;it))
(it=((regex_1.match(c_1))||FAIL);return FAIL if it==FAIL;it)
_result_1 = ((c_1))
(_result_1)  
end
def _true()
 _result_1 = ((nil))
_result_1 = ((it=(exactly(true));return FAIL if it==FAIL;it))
(_result_1)  
end
def letter()
 _result_1 = ((nil))
(it=(_or(proc{_result_1 = ((it=(lower());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(upper());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def _()
 _result_1 = ((nil))
_result_1 = ((it=(space());return FAIL if it==FAIL;it))
(_result_1)  
end
def xdigit()
 _result_1 = ((nil))
_result_1 = ((it=(regch(/[0-9a-fA-F]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def alpha()
 _result_1 = ((nil))
_result_1 = ((it=(letter());return FAIL if it==FAIL;it))
(_result_1)  
end
end

