#include "ruby.h"
VALUE amecore;VALUE failobj;
VALUE ame_seq(VALUE self,VALUE str){
	int len=RSTRING(str)->len;
	VALUE src=rb_iv_get(self,"@src");
	int input=FIX2INT(rb_iv_get(self,"@input"));
	if (strncmp(RSTRING(src)->ptr+input,RSTRING(str)->ptr,len))return failobj;
	else {
		rb_iv_set(self,"@input",INT2FIX(input+len));
		return str;
	}
}
VALUE ame_anything(VALUE self){
	VALUE r;
  VALUE src=rb_iv_get(self,"@src");
  int input=FIX2INT(rb_iv_get(self,"@input"));
	if(TYPE(src)==T_STRING){
		if (RSTRING(src)->len<=input) return failobj;
		r=rb_str_new(RSTRING(src)->ptr+input,1);
	}else{
		if (FIX2INT(rb_funcall(src,rb_intern("size"),0))<=input) return failobj;
		r= rb_funcall(src,rb_intern("[]"),1,INT2FIX(input));
	}
	rb_iv_set(self,"@input",INT2FIX(input+1));
	return r;
}
VALUE ame_lookahead(VALUE self,VALUE neg){
	VALUE input=rb_iv_get(self,"@input");
	VALUE r=rb_yield(Qnil);
	 rb_iv_set(self,"@input",input);
	if (neg==Qtrue){
		r= (r==failobj)? Qtrue : failobj;
	}
	return r;
}
void Init_Ame(VALUE self){
	failobj=rb_eval_string("FAIL");
	amecore=rb_define_class("AmethystCore",rb_cObject);
	rb_define_method(amecore,"seq",ame_seq,1);
	rb_define_method(amecore,"anything",ame_anything,0);
	rb_define_method(amecore,"_lookahead",ame_lookahead,1);

}
