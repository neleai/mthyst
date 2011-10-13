#include "ruby.h"
#include "../../compiled/cthyst.h"
// write declarations to cthyst.h as without them call from other so will crash
VALUE amecore;VALUE failobj;
ID s_src,s_input,s_call,s_cut,s_ary_get;

VALUE ame_setlenrb(VALUE self,VALUE val){return INT2FIX(ame_setlen(self,FIX2INT(val)));}
VALUE ame_setposrb(VALUE self,VALUE val){return INT2FIX(ame_setpos(self,FIX2INT(val)));}
VALUE ame_getlenrb(VALUE self){return INT2FIX(ame_getlen(self));}

VALUE AmethystCore__seq(VALUE self,VALUE str){
	int len=RSTRING(str)->len;
	VALUE src=ame_getsrc(self);
	if (TYPE(src)==T_STRING){
		int input=ame_getpos(self);
		if (strncmp(ame_curstr(self),RSTRING(str)->ptr,len)) 
			{ return failobj; }
		else {
			ame_setpos(self,input+len);
			return Qnil;
		}
	}else{
		 rb_raise(rb_eArgError, "called seq when not in string");
	}
}
VALUE AmethystCore_anything(VALUE self){
	VALUE r;
  VALUE src=ame_getsrc(self);
  int input=ame_getpos(self);
	int len=ame_getlen(self);
	if (len<=input) return failobj;
	if(TYPE(src)==T_STRING){
		r=rb_str_new(ame_curstr(self),1);
	}else{
		r= ame_curobj(self);
	}
	ame_setpos(self,input+1);
	return r;
}

VALUE ame_new(VALUE clas){
	cstruct *ptr=ALLOC(cstruct);
	ptr->cut=ptr->stop=Qnil;
  VALUE o=Data_Wrap_Struct(clas,0,0,ptr);
	VALUE argv[0]; rb_obj_call_init(o,0,argv);
	return o;
}
void Init_Ame(VALUE self){
	s_cut=rb_intern("@cut");	s_src=rb_intern("@src");	s_input=rb_intern("@input");	s_call=rb_intern("call");s_ary_get=rb_intern("[]");
	failobj=rb_eval_string("FAIL");
	amecore=rb_define_class("AmethystCore",rb_cObject);
	rb_define_singleton_method(amecore,"new",ame_new,0);
	rb_define_method(amecore,"pos=",ame_setposrb,1);
	rb_define_method(amecore,"pos",ame_getposrb,0);
	rb_define_method(amecore,"len=",ame_setlenrb,1);
	rb_define_method(amecore,"len",ame_getlenrb,0);
	rb_define_method(amecore,"src=",ame_setsrc,1);
	rb_define_method(amecore,"src",ame_getsrc,0);

	rb_define_method(amecore,"_seq",AmethystCore__seq,1);
	rb_define_method(amecore,"anything",AmethystCore_anything,0);
}
