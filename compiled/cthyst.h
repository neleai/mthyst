#include "ruby.h"
VALUE failobj;
#define BSET(s,e) rb_hash_aset(bind,ID2SYM(rb_intern( #s )), e )
#define BGET(s)   rb_hash_aref(bind,ID2SYM(rb_intern( #s )))
#define ISET(s,e) rb_ivar_set(self,rb_intern("@" #s), e)
#define IGET(s)   rb_ivar_get(self,rb_intern("@" #s))
#define CALL(x,...) rb_funcall(self,rb_intern(#x) ,__VA_ARGS__)
#define FAILTEST(lab) if (it==failobj) goto lab;
#define HEADER VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;

#define INSV(val)  printf("%s\n",RSTRING(rb_funcall(val,rb_intern("inspect"),0))->ptr);
#define INSB(var) printf("%s\n",RSTRING(rb_funcall(BGET(var),rb_intern("inspect"),0))->ptr);
#define INSI(var) printf("%s\n",RSTRING(rb_funcall(IGET(var),rb_intern("inspect"),0))->ptr);
#define INSS printf("%s\n",RSTRING(rb_funcall(self,rb_intern("inspect"),0))->ptr);
#define INSBI printf("%s\n",RSTRING(rb_funcall(bind,rb_intern("inspect"),0))->ptr);
#define UC(x) ((unsigned char) x)
#define rb_str_new_cstr rb_str_new2

//Ommited check to allow gcc optimize
#undef Data_Get_Struct
#define Data_Get_Struct(obj,type,sval) do {\
    sval = (type*)DATA_PTR(obj);\
} while (0)

//you need this declaration, with implicit it will crash
VALUE AmethystCore_anything(VALUE self);
VALUE AmethystCore__seq(VALUE self,VALUE str);

typedef struct{
  VALUE src;
  int pos;int len;
	VALUE cut;VALUE stop;
} cstruct;
extern ID s_ary_get;
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
ACCESSOR(VALUE,src);ACCESSOR(int,pos);ACCESSOR(int,len);ACCESSOR(VALUE,cut);ACCESSOR(VALUE,stop);

static inline VALUE ame_getposrb(VALUE self){return INT2FIX(ame_getpos(self));}

static inline char* ame_curstr(VALUE self){
  return RSTRING(ame_getsrc(self))->ptr+ame_getpos(self);
}
static inline VALUE ame_curobj(VALUE self){
  return rb_funcall(ame_getsrc(self),s_ary_get,1,ame_getposrb(self));
}

