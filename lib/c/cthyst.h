/* Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012 */
#ifndef INCLUDED_CTHYST_H
#define INCLUDED_CTHYST_H
#include "ruby.h"
#include <stdio.h>
extern FILE * profile_report;
VALUE failobj;
#define BSET(s,e) rb_hash_aset(bind,ID2SYM(rb_intern( #s )), e )
#define BGET(s)   rb_hash_aref(bind,ID2SYM(rb_intern( #s )))
#define ISET(s,e) rb_ivar_set(self,rb_intern("@" #s), e)
#define IGET(s)   rb_ivar_get(self,rb_intern("@" #s))
#define CALL(x,...) rb_funcall(self,rb_intern(#x) ,__VA_ARGS__)
#define FAILTEST(lab) if (it==failobj) goto lab;
#define HEADER VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;

#define INSV(val)  printf("%s\n",RSTRING_PTR(rb_funcall(val,rb_intern("inspect"),0)));
#define INSB(var) printf("%s\n",RSTRING(rb_funcall(BGET(var),rb_intern("inspect"),0))->ptr);
#define INSI(var) printf("%s\n",RSTRING(rb_funcall(IGET(var),rb_intern("inspect"),0))->ptr);
#define INSS printf("%s\n",RSTRING(rb_funcall(self,rb_intern("inspect"),0))->ptr);
#define INSBI printf("%s\n",RSTRING(rb_funcall(bind,rb_intern("inspect"),0))->ptr);
#define UC(x) ((unsigned char) x)
//#define rb_str_new_cstr rb_str_new2

//Ommited check to allow gcc optimize
#undef Data_Get_Struct
#define Data_Get_Struct(obj,type,sval) sval = (type*)DATA_PTR(obj);

extern VALUE gargs;extern int gargno;

//you need this declaration, with implicit it will crash
VALUE AmethystCore_anything(VALUE self);
VALUE AmethystCore__seq(VALUE self,VALUE str);
VALUE ame_setsrc2(VALUE self,VALUE src);
typedef struct memo_struct memo_struct;
typedef struct{
  VALUE src;
	char *str;VALUE *ary;VALUE ary2;
  int pos;int len;
	memo_struct *mem;VALUE memgc;
  int branches,discard;
} cstruct;
extern ID s_ary_get,s_to_a;
#define ACCESSOR(type,name) \
static inline type ame_get##name(VALUE self){\
  cstruct  *ptr;\
  Data_Get_Struct(self,cstruct,ptr);\
  return ptr->name;\
}\
static inline type ame_set##name(VALUE self,type val){\
  cstruct  *ptr;\
  Data_Get_Struct(self,cstruct,ptr);\
  ptr->name=val;\
  return val;\
}
ACCESSOR(VALUE,src);ACCESSOR(int,pos);ACCESSOR(int,len);

static inline VALUE ame_getposrb(VALUE self){return INT2FIX(ame_getpos(self));}

static inline char* ame_curstr2(cstruct * ptr){
  return ptr->str+ptr->pos;
}
static inline VALUE ame_curobj2(cstruct * ptr){
	if (ptr->len==ptr->pos) return failobj;
  return ptr->ary[ptr->pos];
}



typedef struct {
  VALUE *ary;int size;
} bind_struct;
void bind_mark(bind_struct *o);void bind_free(bind_struct *o);
static inline VALUE bind_new(VALUE clas,VALUE size){
  bind_struct *ptr=ALLOC(bind_struct);
  ptr->size=FIX2LONG(size);
  ptr->ary=calloc(sizeof(VALUE),ptr->size);
  VALUE o=Data_Wrap_Struct(clas,0,0,ptr);
	// dont call init its slow.
  return o;
}
extern VALUE bindcls;
static inline VALUE bind_new3(long size){return bind_new(bindcls,LONG2FIX(size));}
#define bind_new2(siz) Qnil; bind_struct _bind; _bind.size=siz; _bind.ary=alloca(siz*sizeof(VALUE));bind2=Data_Wrap_Struct(bindcls,0,0,&_bind);
static inline VALUE bind_aset(VALUE self,long no,VALUE val){
  bind_struct* ptr;
  Data_Get_Struct(self,bind_struct,ptr);
  return ptr->ary[no]=val;
}
static inline VALUE bind_aget(VALUE self,long no){
  bind_struct* ptr;
  Data_Get_Struct(self,bind_struct,ptr);
  return ptr->ary[no];
}
static VALUE bind_asetrb(VALUE self,VALUE no,VALUE val){return bind_aset(self,FIX2LONG(no),val);}
static VALUE bind_agetrb(VALUE self,VALUE no){return bind_aget(self,FIX2LONG(no));}
#endif
