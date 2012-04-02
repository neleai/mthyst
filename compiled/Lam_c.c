#include "cthyst.h"
#include "memo.c"
VALUE cls_Lam;
VALUE Lam_baz(VALUE self ,VALUE a0);
VALUE Lam_foo(VALUE self ,VALUE a0);
VALUE Lam_lam(VALUE self );
static VALUE sy_apply;
static VALUE sy_bar;
VALUE profile_report_Lam(VALUE self){cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);  return Qnil;}VALUE Lam_baz(VALUE self ,VALUE a0){VALUE vals[1]; VALUE it ,_x=Qnil,__result=Qnil;VALUE bind2=bind_new2(0); _x=a0;; VALUE arg0; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr); it=_x; arg0=it; it=rb_funcall(self,sy_apply,1,arg0); if (it==failobj){it=failobj;goto fail;} __result=it;;

fail: return it;
}
VALUE Lam_foo(VALUE self ,VALUE a0){VALUE vals[1]; VALUE it ,_x=Qnil,__result=Qnil;VALUE bind2=bind_new2(0); _x=a0;; VALUE arg0; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr); it=_x; arg0=it; it=rb_funcall(self,sy_apply,1,arg0); if (it==failobj){it=failobj;goto fail;} __result=it;;

fail: return it;
}
VALUE Lam_lam(VALUE self ){VALUE vals[0]; VALUE it ,__result=Qnil,__result_2=Qnil,__result_3=Qnil;VALUE bind2=bind_new2(0);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=rb_funcall(self,sy_bar,0); if (it==failobj){it=failobj;goto revert1;} __result=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1;   it=Lam_lam(self ); __result_2=it;;
it=__result_2; __result=it;;

;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
it=__result; __result_3=it;;

fail: return it;
}
void Init_Lam_c(){ 
 cls_Lam=rb_define_class("Lam",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    rb_define_method(cls_Lam,"profile_report",profile_report_Lam,0);
sy_apply=rb_intern("apply");
sy_bar=rb_intern("bar");
                    rb_define_method(cls_Lam,"baz",Lam_baz,1);
rb_define_method(cls_Lam,"foo",Lam_foo,1);
rb_define_method(cls_Lam,"lam",Lam_lam,0);
                    }
