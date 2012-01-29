#include "cthyst.h"
VALUE cls_Normalize;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Normalize_or(VALUE self );
VALUE switchhash_Normalize_1;
VALUE switchhash_Normalize_2;
static VALUE sy_Normalize_0_cfcd;
static VALUE sy_Normalize_1_c4ca;
static VALUE sy_Normalize_Apply_lb__dq_f_3881;
static VALUE sy_Normalize__append_lp__b2a5;
static VALUE sy_Normalize__lp_bind_lb_7_rb__df2c;
static VALUE sy_Normalize_bind_lb_0_rb__dot__263e;
static VALUE sy_Normalize_bind_lb_0_rb__lb__1f45;
static VALUE sy_Normalize_bind_lb_5_rb__dot__d039;
static VALUE sy_Normalize_src_25d9;
VALUE Normalize_or(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Or*/:; it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 int oldpos1; while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass3);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass3; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass2;
	success3: *ptr=oldpass3;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt1_2;
	success2: *ptr=oldpass2;

;goto accept1;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__b2a5,1,bind); 
;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
 break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__b2a5,1,bind);  break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,5/*or*/,it);
it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__dot__263e,1,bind);  bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,6/*autovar*/);ptr->len=1;
 int oldpos3=ptr->pos;
alt2_1:;it=rb_funcall(self,sy_Normalize_0_cfcd,1,bind);  bind_aset(bind,7/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,8/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_7_rb__df2c,1,bind); FAILTEST(alt2_2);it=rb_funcall(self,sy_Normalize_Apply_lb__dq_f_3881,1,bind);  bind_aset(bind,9/*autovar*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos3;it=rb_funcall(self,sy_Normalize_1_c4ca,1,bind);  bind_aset(bind,7/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,8/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_7_rb__df2c,1,bind); FAILTEST(alt2_3);it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__lb__1f45,1,bind);  bind_aset(bind,9/*autovar*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt2_4);it=rb_funcall(self,sy_Normalize_bind_lb_5_rb__dot__d039,1,bind);  bind_aset(bind,9/*autovar*/,it);

;goto accept2;
alt2_4: ptr->pos=oldpos3;goto pass4;
 accept2:;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto pass1;
	success4: *ptr=oldpass4;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_normalize_c(){ 
 cls_Normalize=rb_define_class("Normalize",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
switchhash_Normalize_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_1);;
switchhash_Normalize_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_2);;
sy_Normalize_0_cfcd=rb_intern("Normalize_0_cfcd");
sy_Normalize_1_c4ca=rb_intern("Normalize_1_c4ca");
sy_Normalize_Apply_lb__dq_f_3881=rb_intern("Normalize_Apply_lb__dq_f_3881");
sy_Normalize__append_lp__b2a5=rb_intern("Normalize__append_lp__b2a5");
sy_Normalize__lp_bind_lb_7_rb__df2c=rb_intern("Normalize__lp_bind_lb_7_rb__df2c");
sy_Normalize_bind_lb_0_rb__dot__263e=rb_intern("Normalize_bind_lb_0_rb__dot__263e");
sy_Normalize_bind_lb_0_rb__lb__1f45=rb_intern("Normalize_bind_lb_0_rb__lb__1f45");
sy_Normalize_bind_lb_5_rb__dot__d039=rb_intern("Normalize_bind_lb_5_rb__dot__d039");
sy_Normalize_src_25d9=rb_intern("Normalize_src_25d9");
rb_define_method(cls_Normalize,"or",Normalize_or,0);
 rb_eval_string("testversionnormalize('b920d8b11faffd79c12984f3f985832c')");}
