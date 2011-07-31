#include "ruby.h"
VALUE amecore;VALUE failobj;
ID s_src,s_input,s_call,s_cut;

VALUE ame_seq(VALUE self,VALUE str){
	int len=RSTRING(str)->len;
	VALUE src=rb_ivar_get(self,s_src);
	int input=FIX2INT(rb_ivar_get(self,s_input));
	if (strncmp(RSTRING(src)->ptr+input,RSTRING(str)->ptr,len))return failobj;
	else {
		rb_ivar_set(self,s_input,INT2FIX(input+len));
		return str;
	}
}
VALUE ame_anything(VALUE self){
	VALUE r;
  VALUE src=rb_ivar_get(self,s_src);
  int input=FIX2INT(rb_ivar_get(self,s_input));
	if(TYPE(src)==T_STRING){
		if (RSTRING(src)->len<=input) return failobj;
		r=rb_str_new(RSTRING(src)->ptr+input,1);
	}else{
		if (FIX2INT(rb_funcall(src,rb_intern("size"),0))<=input) return failobj;
		r= rb_funcall(src,rb_intern("[]"),1,INT2FIX(input));
	}
	rb_ivar_set(self,s_input,INT2FIX(input+1));
	return r;
}
VALUE ame_lookahead(VALUE self,VALUE neg){
	VALUE input=rb_ivar_get(self,s_input);
	VALUE r=rb_yield(Qnil);
	 rb_ivar_set(self,s_input,input);
	if (neg==Qtrue){
		r= (r==failobj)? Qtrue : failobj;
	}
	return r;
}
VALUE ame_pass(VALUE self,VALUE enter,VALUE expr){
	if (enter!=Qtrue) expr=rb_ary_new3(1,expr);
  VALUE src=rb_ivar_get(self,s_src);	VALUE input=rb_ivar_get(self,s_input);
  rb_ivar_set(self,s_src,expr);  rb_ivar_set(self,s_input,INT2FIX(0));
	VALUE r=rb_yield(Qnil);
	if (rb_funcall(self,rb_intern("eof"),0)==failobj) r=failobj;
  rb_ivar_set(self,s_src,src);  rb_ivar_set(self,s_input,input);
	return r;
}
VALUE ame_or(int argc,VALUE *argv,VALUE self){
	VALUE input=rb_ivar_get(self,s_input);
	VALUE r;
	int i;
	for(i=0;i<argc;i++){
		rb_ivar_set(self,s_input,input);
		r=rb_funcall(argv[i],s_call,0);
		if (r!=failobj){
			rb_ivar_set(self,s_cut,Qnil);
			return r;
		}
		VALUE cut=rb_ivar_get(self,s_cut);
		if (cut!=Qnil){
			rb_ivar_set(self,s_cut,Qnil);
			return failobj;
		}
	}
	return failobj;
}
void Init_Ame(VALUE self){
	s_cut=rb_intern("@cut");	s_src=rb_intern("@src");	s_input=rb_intern("@input");	s_call=rb_intern("call");
	failobj=rb_eval_string("FAIL");
	amecore=rb_define_class("AmethystCore",rb_cObject);
	rb_define_method(amecore,"seq",ame_seq,1);
	rb_define_method(amecore,"anything",ame_anything,0);
	rb_define_method(amecore,"_lookahead",ame_lookahead,1);
	rb_define_method(amecore,"_pass",ame_pass,2);
	rb_define_method(amecore,"_or",ame_or,-1);

}
