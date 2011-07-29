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
void Init_Ame(VALUE self){
	failobj=rb_eval_string("FAIL");
	amecore=rb_define_class("AmethystCore",rb_cObject);
	rb_define_method(amecore,"seq",ame_seq,1);
}
