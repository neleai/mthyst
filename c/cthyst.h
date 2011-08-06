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

VALUE ame_setsrc(VALUE self,VALUE val);
VALUE ame_getsrc(VALUE self);
