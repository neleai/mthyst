#include "ruby.h"

typedef struct {
	char *str;
	int len;
	int pos;
	VALUE obj;
	VALUE *scopes,*curscope;
	VALUE *globals;
} cstruct;

static VALUE t_new(VALUE clas){
	cstruct *ptr;
	ptr=ALLOC(cstruct);
	return Data_Wrap_Struct(clas,0,0,ptr);
}

static void addbinding(cstruct *ptr,int no){int i;
	for(i=0;i<no;i++){ ptr->curscope[i]=Qnil;} 
	ptr->curscope+=no;}
static void rmbinding(cstruct *ptr,int no){
	ptr->curscope-=no;}

static VALUE getlocal(VALUE self,VALUE no){
	cstruct  *ptr;
	Data_Get_Struct(self,cstruct,ptr);
	return ptr->curscope[-FIX2INT(no)];
}
static VALUE setlocal(VALUE self,VALUE no,VALUE val){
	cstruct  *ptr;
	Data_Get_Struct(self,cstruct,ptr);
 return ptr->curscope[-FIX2INT(no)]=val;
}


static VALUE t_parse(VALUE self,VALUE str){
	cstruct  *ptr;
  Data_Get_Struct(self,cstruct,ptr);
	Check_Type(str,T_STRING);
	ptr->str=RSTRING(str)->ptr;
	ptr->len=RSTRING(str)->len;
	ptr->pos=0;
	ptr->obj=self;
	ptr->scopes=malloc(1000000);
	ptr->curscope=ptr->scopes;
	ada(ptr);

	return Qnil;
}


static void init_clas(VALUE clas){
 	rb_define_singleton_method(clas, "new", t_new, 0);
	rb_define_method(clas,"parse",t_parse, 1);
	rb_define_method(clas,"[]",getlocal,1);
	rb_define_method(clas,"[]=",setlocal,2);
}
