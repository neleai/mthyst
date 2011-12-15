#include "ruby.h"
#include "../../compiled/cthyst.h"
// write declarations to cthyst.h as without them call from other .so will crash
VALUE amecore;VALUE bindcls;VALUE failobj;
ID s_src,s_input,s_call,s_cut,s_ary_get;

VALUE ame_setlenrb(VALUE self,VALUE val){return INT2FIX(ame_setlen(self,FIX2INT(val)));}
VALUE ame_setposrb(VALUE self,VALUE val){return INT2FIX(ame_setpos(self,FIX2INT(val)));}
VALUE ame_getlenrb(VALUE self){return INT2FIX(ame_getlen(self));}

VALUE AmethystCore__seq(VALUE self,VALUE str){
	int len=RSTRING_LEN(str);
	VALUE src=ame_getsrc(self);
	if (TYPE(src)==T_STRING){
		int input=ame_getpos(self);
		if (strncmp(ame_curstr(self),RSTRING_PTR(str),len)) 
			{ return failobj; }
		else {
			ame_setpos(self,input+len);
			return Qnil;
		}
	}else{
		 rb_raise(rb_eArgError, "called seq when not in string");
	}
}
#define mbs_UTF8(c) mbsize_UTF8[c/16]
char mbsize_UTF8[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,3,4};
VALUE AmethystCore_anything(VALUE self){
  cstruct  *ptr;
  Data_Get_Struct(self,cstruct,ptr);
	VALUE r;
  int input=ame_getpos(self);
	int len=ame_getlen(self);
	if (len<=input) return failobj;
	if(TYPE(ptr->src)==T_STRING){
		int cs=mbs_UTF8(*ame_curstr(self));
		r=rb_str_new(ame_curstr(self),cs);
		ptr->pos+=cs;
	}else{
		r= ame_curobj(self);
		ptr->pos++;
	}
	return r;
}

VALUE AmethystCore_append(VALUE self,VALUE ary,VALUE el){
	if (TYPE(ary)!=T_ARRAY){
	 rb_raise(rb_eArgError,"first argument is not array");
	}
	if (TYPE(el)==T_ARRAY){
		rb_ary_concat(ary,el);
	}else{
		rb_ary_push(ary,el);
	}
	return ary;
}

VALUE ame_new(VALUE clas){
	cstruct *ptr=ALLOC(cstruct);
	ptr->cut=ptr->stop=Qnil;
  VALUE o=Data_Wrap_Struct(clas,0,0,ptr);
	VALUE argv[0]; rb_obj_call_init(o,0,argv);
	return o;
}

void bind_mark(bind_struct *ptr){
	int i;for(i=0;i<ptr->size;i++) if(ptr->ary[i]) rb_gc_mark(ptr->ary[i]);
}
void bind_free(bind_struct *ptr){
	free(ptr->ary);
	free(ptr);
}

ID s_ary;
VALUE ameast_agetrb(VALUE self,VALUE num){
	return rb_ary_entry(rb_ivar_get(self,s_ary),FIX2LONG(num));
}
void Init_Ame(VALUE self){
	s_ary_get=rb_intern("[]");
	s_ary=rb_intern("@ary");
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
	rb_define_method(amecore,"_append",AmethystCore_append,2);

	bindcls=rb_define_class("BindingClass",rb_cObject);
  rb_define_singleton_method(bindcls,"new",bind_new,1);
	rb_define_method(bindcls,"[]=",bind_asetrb,2);
	rb_define_method(bindcls,"[]",bind_agetrb,1);

	VALUE ameast=rb_define_class("AmethystAST",rb_cObject);
	rb_define_method(ameast,"[]",ameast_agetrb,1);
}
