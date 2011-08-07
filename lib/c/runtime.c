#include "ruby.h"
VALUE amecore;VALUE failobj;
ID s_src,s_input,s_call,s_cut;

typedef struct{
	VALUE src;
	int pos;int len;
} cstruct;

VALUE ame_setsrc(VALUE self,VALUE val){
	cstruct  *ptr;
  Data_Get_Struct(self,cstruct,ptr);
	rb_ivar_set(self,s_src,val);
	ptr->src=val;
	return val;
}
VALUE ame_getsrc(VALUE self){
	cstruct  *ptr;
  Data_Get_Struct(self,cstruct,ptr);
//	return rb_ivar_get(self,s_src);
	return ptr->src;
}



int ame_setlen(VALUE self,int val){
	cstruct  *ptr;
  Data_Get_Struct(self,cstruct,ptr);
	ptr->len=val;
	return val;
}
int ame_getlen(VALUE self){
	cstruct  *ptr;
  Data_Get_Struct(self,cstruct,ptr);
	return ptr->len;
}

int ame_setpos(VALUE self,int val){
	cstruct  *ptr;
  Data_Get_Struct(self,cstruct,ptr);
	ptr->pos=val;
	return val;
}
int ame_getpos(VALUE self){
	cstruct  *ptr;
  Data_Get_Struct(self,cstruct,ptr);
	return ptr->pos;
}
VALUE ame_setlenrb(VALUE self,VALUE val){return INT2FIX(ame_setlen(self,FIX2INT(val)));}
VALUE ame_setposrb(VALUE self,VALUE val){return INT2FIX(ame_setpos(self,FIX2INT(val)));}
VALUE ame_getlenrb(VALUE self,VALUE val){return INT2FIX(ame_getlen(self));}
VALUE ame_getposrb(VALUE self,VALUE val){return INT2FIX(ame_getpos(self));}


VALUE ame_seq(VALUE self,VALUE str){
	int len=RSTRING(str)->len;
	VALUE src=ame_getsrc(self);
	if (TYPE(src)==T_STRING){
		int input=ame_getpos(self);
		if (strncmp(RSTRING(src)->ptr+input,RSTRING(str)->ptr,len)) 
			{ return failobj; }
		else {
			ame_setpos(self,input+len);
			return str;
		}
	}else{
		 rb_raise(rb_eArgError, "called seq when not in string");
	}
}
VALUE ame_anything(VALUE self){
	VALUE r;
  VALUE src=ame_getsrc(self);
  int input=ame_getpos(self);
	int len=ame_getlen(self);
	if (len<=input) return failobj;
	if(TYPE(src)==T_STRING){
		r=rb_str_new(RSTRING(src)->ptr+input,1);
	}else{
		r= rb_funcall(src,rb_intern("[]"),1,INT2FIX(input));
	}
	ame_setpos(self,input+1);
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
  VALUE src=ame_getsrc(self);	int input=ame_getpos(self); int len=ame_getlen(self);
	ame_setsrc(self,expr);	ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
	VALUE r=rb_yield(Qnil);
	if (rb_funcall(self,rb_intern("eof"),0)==failobj) r=failobj;
  ame_setsrc(self,src);ame_setpos(self,input);ame_setlen(self,len);
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


VALUE ame_new(VALUE clas){
	cstruct *ptr=ALLOC(cstruct);
  VALUE o=Data_Wrap_Struct(clas,0,0,ptr);
	VALUE argv[0]; rb_obj_call_init(o,0,argv);
	return o;
}
void Init_Ame(VALUE self){
	s_cut=rb_intern("@cut");	s_src=rb_intern("@src");	s_input=rb_intern("@input");	s_call=rb_intern("call");
	failobj=rb_eval_string("FAIL");
	amecore=rb_define_class("AmethystCore",rb_cObject);
	rb_define_singleton_method(amecore,"new",ame_new,0);
	rb_define_method(amecore,"pos=",ame_setposrb,1);
	rb_define_method(amecore,"pos",ame_getposrb,0);
	rb_define_method(amecore,"len=",ame_setlenrb,1);
	rb_define_method(amecore,"len",ame_getlenrb,0);
	rb_define_method(amecore,"src=",ame_setsrc,1);
	rb_define_method(amecore,"src",ame_getsrc,0);

	rb_define_method(amecore,"seq",ame_seq,1);
	rb_define_method(amecore,"anything",ame_anything,0);
	rb_define_method(amecore,"_lookahead",ame_lookahead,1);
	rb_define_method(amecore,"_pass",ame_pass,2);
	rb_define_method(amecore,"_or",ame_or,-1);

}
