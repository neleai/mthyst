#include "cthyst.h"
VALUE cls_Normalize;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Normalize_apply2(VALUE self );
VALUE Normalize_bind(VALUE self );
VALUE Normalize_or(VALUE self );
VALUE Normalize_seq2(VALUE self );
VALUE switchhash_Normalize_10;
VALUE switchhash_Normalize_11;
VALUE switchhash_Normalize_1;
VALUE switchhash_Normalize_2;
VALUE switchhash_Normalize_3;
VALUE switchhash_Normalize_4;
VALUE switchhash_Normalize_5;
VALUE switchhash_Normalize_6;
VALUE switchhash_Normalize_7;
VALUE switchhash_Normalize_8;
VALUE switchhash_Normalize_9;
static VALUE c_Placeholder;
static VALUE sy_Normalize_0_cfcd;
static VALUE sy_Normalize_1_c4ca;
static VALUE sy_Normalize_Apply_lb__dq_f_3881;
static VALUE sy_Normalize_Apply_lb_bi_d0b8;
static VALUE sy_Normalize__append_lp__653e;
static VALUE sy_Normalize__append_lp__66a2;
static VALUE sy_Normalize__append_lp__81ec;
static VALUE sy_Normalize__append_lp__b494;
static VALUE sy_Normalize__append_lp__bc95;
static VALUE sy_Normalize__lp_bind_lb_15_94ac;
static VALUE sy_Normalize__lp_bind_lb_16_9270;
static VALUE sy_Normalize__lp_bind_lb_8_rb__1b9f;
static VALUE sy_Normalize__lp_bind_lb_9_rb__cfc1;
static VALUE sy_Normalize_bind_lb_0_rb__dot__263e;
static VALUE sy_Normalize_bind_lb_0_rb__lb__1f45;
static VALUE sy_Normalize_bind_lb_2_rb__dot__e24b;
static VALUE sy_Normalize_bind_lb_7_rb_;
static VALUE sy_Normalize_src_25d9;
static VALUE sy_Normalize_src_dot_ary_d5cf;
static VALUE sy_Normalize_src_dot_free_00b9;
static VALUE sy_Normalize_src_dot_free_3d49;
static VALUE sy_Normalize_src_dot_name_80f3;
VALUE Normalize_apply2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ptr->pos;
alt2_1:;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass2; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass2; else ptr->pos+=3; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"pply",4)) goto pass2; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt2_2;
	success2: *ptr=oldpass2;
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:;   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*autovar*/,it);
 break;
case 1/*Object*/:; goto alt2_2; break;
}cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_9,rb_obj_class(ame_curobj2(ptr))))){case 0/*Lambda*/:;   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,7/*x*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto pass3;
	success4: *ptr=oldpass4;
it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
case 1/*Object*/:; goto pass3; break;
}
	goto success3;
	pass3: *ptr=oldpass3; goto alt2_2;
	success3: *ptr=oldpass3;
it=rb_funcall(self,sy_Normalize_bind_lb_7_rb_,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass5; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr2(ptr),"pply",4)) goto pass5; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: *ptr=oldpass5; goto alt2_3;
	success5: *ptr=oldpass5;
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_10,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,10/*autovar*/,it);
 break;
case 1/*Object*/:; goto alt2_3; break;
}cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,11/*name*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
	goto success6;
	pass6: *ptr=oldpass6; goto alt2_3;
	success6: *ptr=oldpass6;
it=rb_funcall(self,sy_Normalize_Apply_lb_bi_d0b8,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=Amethyst_spaces(self ); FAILTEST(pass7);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass7; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass7);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass7; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass7;
	goto success7;
	pass7: *ptr=oldpass7; goto alt2_4;
	success7: *ptr=oldpass7;
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_11,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,13/*autovar*/,it);
 break;
case 1/*Object*/:; goto alt2_4; break;
}cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=AmethystCore_anything(self ); FAILTEST(pass8); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 it=Qnil;if (ptr->pos<ptr->len) goto pass9;
	goto success9;
	pass9: *ptr=oldpass9; goto pass8;
	success9: *ptr=oldpass9;
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
	goto success8;
	pass8: *ptr=oldpass8; goto alt2_4;
	success8: *ptr=oldpass8;
it=c_Placeholder; bind_aset(bind,8/*autovar*/,it);

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto alt1_2;
 accept2:;

;goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->pos=ptr->len;it=rb_funcall(self,sy_Normalize_src_dot_free_3d49,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass1;
 accept1:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,15/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_bind(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Bind*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;
alt1_1:;it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind);   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass3);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass3; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass2;
	success3: *ptr=oldpass3;
it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt1_2;
	success2: *ptr=oldpass2;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind);  bind_aset(bind,4/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass1;
 accept1:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Object*/:; int oldpos2=ptr->pos;
alt2_1:;it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind); goto alt2_2;
;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind);  bind_aset(bind,4/*autovar*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto pass1;
 accept2:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
}
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_or(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(19);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Or*/:; it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,2/*or*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
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
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
int oldpos3=ptr->pos;
alt2_1:;it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_8_rb__1b9f,1,bind); FAILTEST(alt2_2);
;goto accept2;
alt2_2: ptr->pos=oldpos3;it=bind_aget(bind,7/*autovar*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__653e,1,bind); 
;goto accept2;
alt2_3: ptr->pos=oldpos3;goto alt1_3;
 accept2:;

;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
 break;
case 1/*Or*/:; int oldpos4=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Normalize_src_dot_ary_d5cf,1,bind);  bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__bc95,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto alt3_2;
	success4: *ptr=oldpass4;

;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,12/*autovar*/,it);
int oldpos5=ptr->pos;
alt4_1:;it=bind_aget(bind,12/*autovar*/); bind_aset(bind,8/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_8_rb__1b9f,1,bind); FAILTEST(alt4_2);
;goto accept4;
alt4_2: ptr->pos=oldpos5;it=bind_aget(bind,12/*autovar*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__653e,1,bind); 
;goto accept4;
alt4_3: ptr->pos=oldpos5;goto alt3_3;
 accept4:;

;goto accept3;
alt3_3: ptr->pos=oldpos4;goto break1;
 accept3:;
 break;
case 2/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,13/*autovar*/,it);
int oldpos6=ptr->pos;
alt5_1:;it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_8_rb__1b9f,1,bind); FAILTEST(alt5_2);
;goto accept5;
alt5_2: ptr->pos=oldpos6;it=bind_aget(bind,13/*autovar*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__653e,1,bind); 
;goto accept5;
alt5_3: ptr->pos=oldpos6;goto break1;
 accept5:;
 break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__dot__263e,1,bind);  bind_aset(bind,14/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,14/*autovar*/);ptr->len=1;
 int oldpos7=ptr->pos;
alt6_1:;it=rb_funcall(self,sy_Normalize_0_cfcd,1,bind);  bind_aset(bind,15/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,16/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_15_94ac,1,bind); FAILTEST(alt6_2);it=rb_funcall(self,sy_Normalize_Apply_lb__dq_f_3881,1,bind);  bind_aset(bind,17/*autovar*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;it=rb_funcall(self,sy_Normalize_1_c4ca,1,bind);  bind_aset(bind,15/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,16/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_15_94ac,1,bind); FAILTEST(alt6_3);it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__lb__1f45,1,bind);  bind_aset(bind,17/*autovar*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_4);it=rb_funcall(self,sy_Normalize_bind_lb_2_rb__dot__e24b,1,bind);  bind_aset(bind,17/*autovar*/,it);

;goto accept6;
alt6_4: ptr->pos=oldpos7;goto pass5;
 accept6:;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: *ptr=oldpass5; goto fail;
	success5: *ptr=oldpass5;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,18/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_seq2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(20);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Seq*/:; it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,2/*seq*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass3);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass3; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass2;
	success3: *ptr=oldpass3;
it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__81ec,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt1_2;
	success2: *ptr=oldpass2;
ptr->pos=ptr->len;
;goto accept1;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
int oldpos3=ptr->pos;
alt2_1:;it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_9_rb__cfc1,1,bind); FAILTEST(alt2_2);
;goto accept2;
alt2_2: ptr->pos=oldpos3;it=bind_aget(bind,8/*autovar*/); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__b494,1,bind); 
;goto accept2;
alt2_3: ptr->pos=oldpos3;goto alt1_3;
 accept2:;

;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
 break;
case 1/*Seq*/:; int oldpos4=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Normalize_src_dot_ary_d5cf,1,bind);  bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__66a2,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto alt3_2;
	success4: *ptr=oldpass4;

;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,13/*autovar*/,it);
int oldpos5=ptr->pos;
alt4_1:;it=bind_aget(bind,13/*autovar*/); bind_aset(bind,9/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_9_rb__cfc1,1,bind); FAILTEST(alt4_2);
;goto accept4;
alt4_2: ptr->pos=oldpos5;it=bind_aget(bind,13/*autovar*/); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__b494,1,bind); 
;goto accept4;
alt4_3: ptr->pos=oldpos5;goto alt3_3;
 accept4:;

;goto accept3;
alt3_3: ptr->pos=oldpos4;goto break1;
 accept3:;
 break;
case 2/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,14/*autovar*/,it);
int oldpos6=ptr->pos;
alt5_1:;it=bind_aget(bind,14/*autovar*/); bind_aset(bind,9/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_9_rb__cfc1,1,bind); FAILTEST(alt5_2);
;goto accept5;
alt5_2: ptr->pos=oldpos6;it=bind_aget(bind,14/*autovar*/); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__b494,1,bind); 
;goto accept5;
alt5_3: ptr->pos=oldpos6;goto break1;
 accept5:;
 break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__dot__263e,1,bind);  bind_aset(bind,15/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,15/*autovar*/);ptr->len=1;
 int oldpos7=ptr->pos;
alt6_1:;it=rb_funcall(self,sy_Normalize_0_cfcd,1,bind);  bind_aset(bind,16/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,17/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_16_9270,1,bind); FAILTEST(alt6_2);it=c_Placeholder; bind_aset(bind,18/*autovar*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;it=rb_funcall(self,sy_Normalize_1_c4ca,1,bind);  bind_aset(bind,16/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,17/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_16_9270,1,bind); FAILTEST(alt6_3);it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__lb__1f45,1,bind);  bind_aset(bind,18/*autovar*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_4);it=rb_funcall(self,sy_Normalize_bind_lb_2_rb__dot__e24b,1,bind);  bind_aset(bind,18/*autovar*/,it);

;goto accept6;
alt6_4: ptr->pos=oldpos7;goto pass5;
 accept6:;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: *ptr=oldpass5; goto fail;
	success5: *ptr=oldpass5;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,19/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_normalize_c(){ 
 cls_Normalize=rb_define_class("Normalize",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_Placeholder=rb_const_get(rb_cObject, rb_intern("Placeholder"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Placeholder);
switchhash_Normalize_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_10);;
switchhash_Normalize_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_11);;
switchhash_Normalize_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_1);;
switchhash_Normalize_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_2);;
switchhash_Normalize_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Seq\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_3);;
switchhash_Normalize_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_4);;
switchhash_Normalize_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_5);;
switchhash_Normalize_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_6);;
switchhash_Normalize_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_7);;
switchhash_Normalize_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_8);;
switchhash_Normalize_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Lambda\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_9);;
sy_Normalize_0_cfcd=rb_intern("Normalize_0_cfcd");
sy_Normalize_1_c4ca=rb_intern("Normalize_1_c4ca");
sy_Normalize_Apply_lb__dq_f_3881=rb_intern("Normalize_Apply_lb__dq_f_3881");
sy_Normalize_Apply_lb_bi_d0b8=rb_intern("Normalize_Apply_lb_bi_d0b8");
sy_Normalize__append_lp__653e=rb_intern("Normalize__append_lp__653e");
sy_Normalize__append_lp__66a2=rb_intern("Normalize__append_lp__66a2");
sy_Normalize__append_lp__81ec=rb_intern("Normalize__append_lp__81ec");
sy_Normalize__append_lp__b494=rb_intern("Normalize__append_lp__b494");
sy_Normalize__append_lp__bc95=rb_intern("Normalize__append_lp__bc95");
sy_Normalize__lp_bind_lb_15_94ac=rb_intern("Normalize__lp_bind_lb_15_94ac");
sy_Normalize__lp_bind_lb_16_9270=rb_intern("Normalize__lp_bind_lb_16_9270");
sy_Normalize__lp_bind_lb_8_rb__1b9f=rb_intern("Normalize__lp_bind_lb_8_rb__1b9f");
sy_Normalize__lp_bind_lb_9_rb__cfc1=rb_intern("Normalize__lp_bind_lb_9_rb__cfc1");
sy_Normalize_bind_lb_0_rb__dot__263e=rb_intern("Normalize_bind_lb_0_rb__dot__263e");
sy_Normalize_bind_lb_0_rb__lb__1f45=rb_intern("Normalize_bind_lb_0_rb__lb__1f45");
sy_Normalize_bind_lb_2_rb__dot__e24b=rb_intern("Normalize_bind_lb_2_rb__dot__e24b");
sy_Normalize_bind_lb_7_rb_=rb_intern("Normalize_bind_lb_7_rb_");
sy_Normalize_src_25d9=rb_intern("Normalize_src_25d9");
sy_Normalize_src_dot_ary_d5cf=rb_intern("Normalize_src_dot_ary_d5cf");
sy_Normalize_src_dot_free_00b9=rb_intern("Normalize_src_dot_free_00b9");
sy_Normalize_src_dot_free_3d49=rb_intern("Normalize_src_dot_free_3d49");
sy_Normalize_src_dot_name_80f3=rb_intern("Normalize_src_dot_name_80f3");
rb_define_method(cls_Normalize,"apply2",Normalize_apply2,0);
rb_define_method(cls_Normalize,"bind",Normalize_bind,0);
rb_define_method(cls_Normalize,"or",Normalize_or,0);
rb_define_method(cls_Normalize,"seq2",Normalize_seq2,0);
 rb_eval_string("testversionnormalize('42fb72d03377578a5cc2b36e27e09870')");}
