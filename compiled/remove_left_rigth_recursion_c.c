#include "cthyst.h"
VALUE cls_Remove_Left_Recursion;
VALUE AmethystCore_anything(VALUE self );
VALUE Remove_Left_Recursion_first(VALUE self ,VALUE a0);
VALUE Remove_Left_Recursion_first(VALUE self ,VALUE);
VALUE Remove_Left_Recursion_must_empty(VALUE self );
VALUE Remove_Left_Recursion_root(VALUE self );
VALUE switchhash_Remove_Left_Recursion_1;
VALUE switchhash_Remove_Left_Recursion_2;
VALUE switchhash_Remove_Left_Recursion_3;
VALUE switchhash_Remove_Left_Recursion_4;
static VALUE sy_Remove_Left_Recursion_Bind_lb_src_66c4;
static VALUE sy_Remove_Left_Recursion_Or_lb_bind_lb__3169;
static VALUE sy_Remove_Left_Recursion_Seq_lb_bind_e0fb;
static VALUE sy_Remove_Left_Recursion_Seq_lb_bind_f95b;
static VALUE sy_Remove_Left_Recursion__append_lp__d113;
static VALUE sy_Remove_Left_Recursion__at_left_re_c85d;
static VALUE sy_Remove_Left_Recursion__at_name_eq_sr_362f;
static VALUE sy_Remove_Left_Recursion__at_result_eq__b6ab;
static VALUE sy_Remove_Left_Recursion__lp__at_name_eq__eq__2784;
static VALUE sy_Remove_Left_Recursion__lp_must_em_43e9;
static VALUE sy_Remove_Left_Recursion_a_eq_autova_d0a0;
static VALUE sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5;
static VALUE sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213;
static VALUE sy_Remove_Left_Recursion_src_25d9;
static VALUE sy_Remove_Left_Recursion_src_dot_body_519e;
VALUE Remove_Left_Recursion_first(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(25);VALUE bind2=bind_new2(16); bind_aset(bind,1/*follow*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Remove_Left_Recursion__lp__at_name_eq__eq__2784,1,bind2);FAILTEST(pass1);ptr->pos=ptr->len;it=rb_funcall(self,sy_Remove_Left_Recursion__at_left_re_c85d,1,bind2);it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,bind_aget(bind,1/*follow*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5,1,bind2);bind_aset(bind,1/*follow*/,bind_aget(bind2,1)); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*x*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*follow*/));bind_aset(bind2,2,bind_aget(bind,3/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,1/*follow*/,bind_aget(bind2,1));bind_aset(bind,3/*x*/,bind_aget(bind2,2)); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Bind*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
                    it=bind_aget(bind,1/*follow*/); arg0=it; it=Remove_Left_Recursion_first(self ,arg0); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*expr*/,it);
bind_aset(bind2,1,bind_aget(bind,7/*expr*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Bind_lb_src_66c4,1,bind2);bind_aset(bind,7/*expr*/,bind_aget(bind2,1)); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,8/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,3/*x*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*follow*/));bind_aset(bind2,2,bind_aget(bind,3/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,1/*follow*/,bind_aget(bind2,1));bind_aset(bind,3/*x*/,bind_aget(bind2,2)); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Or*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,9/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos4;  while(1){oldpos4=ptr->pos;  it=bind_aget(bind,1/*follow*/); arg0=it; it=Remove_Left_Recursion_first(self ,arg0); FAILTEST(break1); bind_aset(bind,11/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,10/*autovar*/));bind_aset(bind2,2,bind_aget(bind,11/*autovar*/));it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);bind_aset(bind,10/*autovar*/,bind_aget(bind2,1));bind_aset(bind,11/*autovar*/,bind_aget(bind2,2)); } break1: ptr->pos=oldpos4;   it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                bind_aset(bind2,1,bind_aget(bind,12/*ary*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Or_lb_bind_lb__3169,1,bind2);bind_aset(bind,12/*ary*/,bind_aget(bind2,1)); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,3/*x*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*follow*/));bind_aset(bind2,2,bind_aget(bind,3/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,1/*follow*/,bind_aget(bind2,1));bind_aset(bind,3/*x*/,bind_aget(bind2,2)); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 3/*Seq*/:; int oldpos5=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,13/*autovar*/,it);
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,14/*autovar*/,it);
int oldpos6=ptr->pos;int cut5=0;
alt5_1:;it=bind_aget(bind,14/*autovar*/); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Remove_Left_Recursion_must_empty(self ); FAILTEST(pass5); bind_aset(bind,16/*first*/,it);
it=rb_ary_new3(0); bind_aset(bind,17/*autovar*/,it);
int oldpos7;  while(1){oldpos7=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,18/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,17/*autovar*/));bind_aset(bind2,2,bind_aget(bind,18/*autovar*/));it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);bind_aset(bind,17/*autovar*/,bind_aget(bind2,1));bind_aset(bind,18/*autovar*/,bind_aget(bind2,2)); } break2: ptr->pos=oldpos7;   it=bind_aget(bind,17/*autovar*/); bind_aset(bind,19/*rest*/,it);
bind_aset(bind2,1,bind_aget(bind,19/*rest*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_e0fb,1,bind2);bind_aset(bind,19/*rest*/,bind_aget(bind2,1)); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,20/*autovar*/);ptr->len=1;
                    it=bind_aget(bind,1/*follow*/); arg0=it; it=Remove_Left_Recursion_first(self ,arg0); FAILTEST(pass6); bind_aset(bind,21/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto pass5;
                   success6: *ptr=oldpass6;
                it=bind_aget(bind,21/*autovar*/); bind_aset(bind,19/*rest*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt5_2;
                   success5: *ptr=oldpass5;
                bind_aset(bind2,1,bind_aget(bind,16/*first*/));bind_aset(bind2,2,bind_aget(bind,19/*rest*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);bind_aset(bind,16/*first*/,bind_aget(bind2,1));bind_aset(bind,19/*rest*/,bind_aget(bind2,2)); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt5_2: ptr->pos=oldpos6;it=bind_aget(bind,14/*autovar*/); bind_aset(bind,22/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,22/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                    it=bind_aget(bind,1/*follow*/); arg0=it; it=Remove_Left_Recursion_first(self ,arg0); FAILTEST(pass7); bind_aset(bind,16/*first*/,it);
it=rb_ary_new3(0); bind_aset(bind,23/*autovar*/,it);
int oldpos8;  while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,24/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,23/*autovar*/));bind_aset(bind2,2,bind_aget(bind,24/*autovar*/));it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);bind_aset(bind,23/*autovar*/,bind_aget(bind2,1));bind_aset(bind,24/*autovar*/,bind_aget(bind2,2)); } break3: ptr->pos=oldpos8;   it=bind_aget(bind,23/*autovar*/); bind_aset(bind,19/*rest*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt5_3;
                   success7: *ptr=oldpass7;
                bind_aset(bind2,1,bind_aget(bind,16/*first*/));bind_aset(bind2,2,bind_aget(bind,19/*rest*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);bind_aset(bind,16/*first*/,bind_aget(bind2,1));bind_aset(bind,19/*rest*/,bind_aget(bind2,2)); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt5_3: ptr->pos=oldpos6;goto alt4_2;
 accept6:;

;goto accept5;
alt4_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,3/*x*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*follow*/));bind_aset(bind2,2,bind_aget(bind,3/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,1/*follow*/,bind_aget(bind2,1));bind_aset(bind,3/*x*/,bind_aget(bind2,2)); bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt4_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 4/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*x*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*follow*/));bind_aset(bind2,2,bind_aget(bind,3/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,1/*follow*/,bind_aget(bind2,1));bind_aset(bind,3/*x*/,bind_aget(bind2,2)); bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Remove_Left_Recursion_must_empty(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*e*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*e*/));it=rb_funcall(self,sy_Remove_Left_Recursion__lp_must_em_43e9,1,bind2);bind_aset(bind,0/*e*/,bind_aget(bind2,1));FAILTEST(fail);it=bind_aget(bind,0/*e*/); bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE Remove_Left_Recursion_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(37);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Remove_Left_Recursion__at_name_eq_sr_362f,1,bind2);it=rb_funcall(self,sy_Remove_Left_Recursion__at_result_eq__b6ab,1,bind2);it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_body_519e,1,bind2);it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_body_519e,1,bind2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,2/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Remove_Left_Recursion__lp__at_name_eq__eq__2784,1,bind2);FAILTEST(pass3);ptr->pos=ptr->len;it=rb_funcall(self,sy_Remove_Left_Recursion__at_left_re_c85d,1,bind2);it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt1_2;
                   success3: *ptr=oldpass3;
                it=Qfalse; bind_aset(bind,3/*follow*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*follow*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5,1,bind2);bind_aset(bind,3/*follow*/,bind_aget(bind2,1)); bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*x*/,it);
it=Qfalse; bind_aset(bind,3/*follow*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*follow*/));bind_aset(bind2,2,bind_aget(bind,5/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,3/*follow*/,bind_aget(bind2,1));bind_aset(bind,5/*x*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass2;
 accept1:;
it=bind_aget(bind,4/*_result*/); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2; break;
case 1/*Bind*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,7/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,8/*autovar*/);ptr->len=1;
                    it=Qfalse; arg0=it; it=Remove_Left_Recursion_first(self ,arg0); FAILTEST(pass5); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass4;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*expr*/,it);
bind_aset(bind2,1,bind_aget(bind,10/*expr*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Bind_lb_src_66c4,1,bind2);bind_aset(bind,10/*expr*/,bind_aget(bind2,1)); bind_aset(bind,11/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt2_2;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,11/*autovar*/); bind_aset(bind,4/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,5/*x*/,it);
it=Qfalse; bind_aset(bind,3/*follow*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*follow*/));bind_aset(bind2,2,bind_aget(bind,5/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,3/*follow*/,bind_aget(bind2,1));bind_aset(bind,5/*x*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto pass2;
 accept2:;
it=bind_aget(bind,4/*_result*/); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2; break;
case 2/*Or*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,12/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos4;  while(1){oldpos4=ptr->pos;  it=Qfalse; arg0=it; it=Remove_Left_Recursion_first(self ,arg0); FAILTEST(break1); bind_aset(bind,14/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,13/*autovar*/));bind_aset(bind2,2,bind_aget(bind,14/*autovar*/));it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);bind_aset(bind,13/*autovar*/,bind_aget(bind2,1));bind_aset(bind,14/*autovar*/,bind_aget(bind2,2)); } break1: ptr->pos=oldpos4;   it=bind_aget(bind,13/*autovar*/); bind_aset(bind,15/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt3_2;
                   success6: *ptr=oldpass6;
                bind_aset(bind2,1,bind_aget(bind,15/*ary*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Or_lb_bind_lb__3169,1,bind2);bind_aset(bind,15/*ary*/,bind_aget(bind2,1)); bind_aset(bind,4/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,5/*x*/,it);
it=Qfalse; bind_aset(bind,3/*follow*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*follow*/));bind_aset(bind2,2,bind_aget(bind,5/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,3/*follow*/,bind_aget(bind2,1));bind_aset(bind,5/*x*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto pass2;
 accept3:;
it=bind_aget(bind,4/*_result*/); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2; break;
case 3/*Seq*/:; int oldpos5=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,16/*autovar*/,it);
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,17/*autovar*/,it);
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,18/*autovar*/,it);
int oldpos6=ptr->pos;int cut5=0;
alt5_1:;it=bind_aget(bind,18/*autovar*/); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Remove_Left_Recursion_must_empty(self ); FAILTEST(pass7); bind_aset(bind,20/*first*/,it);
it=rb_ary_new3(0); bind_aset(bind,21/*autovar*/,it);
int oldpos7;  while(1){oldpos7=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,22/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,21/*autovar*/));bind_aset(bind2,2,bind_aget(bind,22/*autovar*/));it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);bind_aset(bind,21/*autovar*/,bind_aget(bind2,1));bind_aset(bind,22/*autovar*/,bind_aget(bind2,2)); } break2: ptr->pos=oldpos7;   it=bind_aget(bind,21/*autovar*/); bind_aset(bind,23/*rest*/,it);
bind_aset(bind2,1,bind_aget(bind,23/*rest*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_e0fb,1,bind2);bind_aset(bind,23/*rest*/,bind_aget(bind2,1)); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,24/*autovar*/);ptr->len=1;
                    it=Qfalse; arg0=it; it=Remove_Left_Recursion_first(self ,arg0); FAILTEST(pass8); bind_aset(bind,25/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto pass7;
                   success8: *ptr=oldpass8;
                it=bind_aget(bind,25/*autovar*/); bind_aset(bind,23/*rest*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt5_2;
                   success7: *ptr=oldpass7;
                bind_aset(bind2,1,bind_aget(bind,20/*first*/));bind_aset(bind2,2,bind_aget(bind,23/*rest*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);bind_aset(bind,20/*first*/,bind_aget(bind2,1));bind_aset(bind,23/*rest*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);

;goto accept6;
alt5_2: ptr->pos=oldpos6;it=bind_aget(bind,18/*autovar*/); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                    it=Qfalse; arg0=it; it=Remove_Left_Recursion_first(self ,arg0); FAILTEST(pass9); bind_aset(bind,20/*first*/,it);
it=rb_ary_new3(0); bind_aset(bind,27/*autovar*/,it);
int oldpos8;  while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,28/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,27/*autovar*/));bind_aset(bind2,2,bind_aget(bind,28/*autovar*/));it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);bind_aset(bind,27/*autovar*/,bind_aget(bind2,1));bind_aset(bind,28/*autovar*/,bind_aget(bind2,2)); } break3: ptr->pos=oldpos8;   it=bind_aget(bind,27/*autovar*/); bind_aset(bind,23/*rest*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt5_3;
                   success9: *ptr=oldpass9;
                bind_aset(bind2,1,bind_aget(bind,20/*first*/));bind_aset(bind2,2,bind_aget(bind,23/*rest*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);bind_aset(bind,20/*first*/,bind_aget(bind2,1));bind_aset(bind,23/*rest*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);

;goto accept6;
alt5_3: ptr->pos=oldpos6;goto alt4_2;
 accept6:;

;goto accept5;
alt4_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,5/*x*/,it);
it=Qfalse; bind_aset(bind,3/*follow*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*follow*/));bind_aset(bind2,2,bind_aget(bind,5/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,3/*follow*/,bind_aget(bind2,1));bind_aset(bind,5/*x*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);

;goto accept5;
alt4_3: ptr->pos=oldpos5;goto pass2;
 accept5:;
it=bind_aget(bind,4/*_result*/); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2; break;
case 4/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,5/*x*/,it);
it=Qfalse; bind_aset(bind,3/*follow*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*follow*/));bind_aset(bind2,2,bind_aget(bind,5/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,3/*follow*/,bind_aget(bind2,1));bind_aset(bind,5/*x*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2; break;
}
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,6/*autovar*/); bind_aset(bind,29/*first*/,it);
it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_body_519e,1,bind2); bind_aset(bind,30/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,30/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos9=ptr->pos;int cut6=0;
alt6_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,2/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Remove_Left_Recursion__lp__at_name_eq__eq__2784,1,bind2);FAILTEST(pass11);ptr->pos=ptr->len;it=rb_funcall(self,sy_Remove_Left_Recursion__at_left_re_c85d,1,bind2);it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto alt6_2;
                   success11: *ptr=oldpass11;
                it=Qtrue; bind_aset(bind,3/*follow*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*follow*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5,1,bind2);bind_aset(bind,3/*follow*/,bind_aget(bind2,1)); bind_aset(bind,4/*_result*/,it);

;goto accept9;
alt6_2: ptr->pos=oldpos9;  it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,5/*x*/,it);
it=Qtrue; bind_aset(bind,3/*follow*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*follow*/));bind_aset(bind2,2,bind_aget(bind,5/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,3/*follow*/,bind_aget(bind2,1));bind_aset(bind,5/*x*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);

;goto accept9;
alt6_3: ptr->pos=oldpos9;goto pass10;
 accept9:;
it=bind_aget(bind,4/*_result*/); bind_aset(bind,31/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass10; break;
case 1/*Bind*/:; int oldpos10=ptr->pos;int cut7=0;
alt7_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,7/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass12); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,8/*autovar*/);ptr->len=1;
                    it=Qtrue; arg0=it; it=Remove_Left_Recursion_first(self ,arg0); FAILTEST(pass13); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13;
                   goto success13;
                   pass13: *ptr=oldpass13; goto pass12;
                   success13: *ptr=oldpass13;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*expr*/,it);
bind_aset(bind2,1,bind_aget(bind,10/*expr*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Bind_lb_src_66c4,1,bind2);bind_aset(bind,10/*expr*/,bind_aget(bind2,1)); bind_aset(bind,11/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto alt7_2;
                   success12: *ptr=oldpass12;
                it=bind_aget(bind,11/*autovar*/); bind_aset(bind,4/*_result*/,it);

;goto accept10;
alt7_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,5/*x*/,it);
it=Qtrue; bind_aset(bind,3/*follow*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*follow*/));bind_aset(bind2,2,bind_aget(bind,5/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,3/*follow*/,bind_aget(bind2,1));bind_aset(bind,5/*x*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);

;goto accept10;
alt7_3: ptr->pos=oldpos10;goto pass10;
 accept10:;
it=bind_aget(bind,4/*_result*/); bind_aset(bind,31/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass10; break;
case 2/*Or*/:; int oldpos11=ptr->pos;int cut8=0;
alt8_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,12/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos12;  while(1){oldpos12=ptr->pos;  it=Qtrue; arg0=it; it=Remove_Left_Recursion_first(self ,arg0); FAILTEST(break4); bind_aset(bind,14/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,13/*autovar*/));bind_aset(bind2,2,bind_aget(bind,14/*autovar*/));it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);bind_aset(bind,13/*autovar*/,bind_aget(bind2,1));bind_aset(bind,14/*autovar*/,bind_aget(bind2,2)); } break4: ptr->pos=oldpos12;   it=bind_aget(bind,13/*autovar*/); bind_aset(bind,15/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto alt8_2;
                   success14: *ptr=oldpass14;
                bind_aset(bind2,1,bind_aget(bind,15/*ary*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Or_lb_bind_lb__3169,1,bind2);bind_aset(bind,15/*ary*/,bind_aget(bind2,1)); bind_aset(bind,4/*_result*/,it);

;goto accept11;
alt8_2: ptr->pos=oldpos11;  it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,5/*x*/,it);
it=Qtrue; bind_aset(bind,3/*follow*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*follow*/));bind_aset(bind2,2,bind_aget(bind,5/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,3/*follow*/,bind_aget(bind2,1));bind_aset(bind,5/*x*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);

;goto accept11;
alt8_3: ptr->pos=oldpos11;goto pass10;
 accept11:;
it=bind_aget(bind,4/*_result*/); bind_aset(bind,31/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass10; break;
case 3/*Seq*/:; int oldpos13=ptr->pos;int cut9=0;
alt9_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,16/*autovar*/,it);
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,32/*autovar*/,it);
it=bind_aget(bind,32/*autovar*/); bind_aset(bind,33/*autovar*/,it);
int oldpos14=ptr->pos;int cut10=0;
alt10_1:;it=bind_aget(bind,33/*autovar*/); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Remove_Left_Recursion_must_empty(self ); FAILTEST(pass15); bind_aset(bind,20/*first*/,it);
it=rb_ary_new3(0); bind_aset(bind,21/*autovar*/,it);
int oldpos15;  while(1){oldpos15=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,22/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,21/*autovar*/));bind_aset(bind2,2,bind_aget(bind,22/*autovar*/));it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);bind_aset(bind,21/*autovar*/,bind_aget(bind2,1));bind_aset(bind,22/*autovar*/,bind_aget(bind2,2)); } break5: ptr->pos=oldpos15;   it=bind_aget(bind,21/*autovar*/); bind_aset(bind,23/*rest*/,it);
bind_aset(bind2,1,bind_aget(bind,23/*rest*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_e0fb,1,bind2);bind_aset(bind,23/*rest*/,bind_aget(bind2,1)); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,24/*autovar*/);ptr->len=1;
                    it=Qtrue; arg0=it; it=Remove_Left_Recursion_first(self ,arg0); FAILTEST(pass16); bind_aset(bind,25/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass16;
                   goto success16;
                   pass16: *ptr=oldpass16; goto pass15;
                   success16: *ptr=oldpass16;
                it=bind_aget(bind,25/*autovar*/); bind_aset(bind,23/*rest*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
                   goto success15;
                   pass15: *ptr=oldpass15; goto alt10_2;
                   success15: *ptr=oldpass15;
                bind_aset(bind2,1,bind_aget(bind,20/*first*/));bind_aset(bind2,2,bind_aget(bind,23/*rest*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);bind_aset(bind,20/*first*/,bind_aget(bind2,1));bind_aset(bind,23/*rest*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);

;goto accept14;
alt10_2: ptr->pos=oldpos14;it=bind_aget(bind,33/*autovar*/); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                    it=Qtrue; arg0=it; it=Remove_Left_Recursion_first(self ,arg0); FAILTEST(pass17); bind_aset(bind,20/*first*/,it);
it=rb_ary_new3(0); bind_aset(bind,27/*autovar*/,it);
int oldpos16;  while(1){oldpos16=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,28/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,27/*autovar*/));bind_aset(bind2,2,bind_aget(bind,28/*autovar*/));it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);bind_aset(bind,27/*autovar*/,bind_aget(bind2,1));bind_aset(bind,28/*autovar*/,bind_aget(bind2,2)); } break6: ptr->pos=oldpos16;   it=bind_aget(bind,27/*autovar*/); bind_aset(bind,23/*rest*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass17;
                   goto success17;
                   pass17: *ptr=oldpass17; goto alt10_3;
                   success17: *ptr=oldpass17;
                bind_aset(bind2,1,bind_aget(bind,20/*first*/));bind_aset(bind2,2,bind_aget(bind,23/*rest*/));it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);bind_aset(bind,20/*first*/,bind_aget(bind2,1));bind_aset(bind,23/*rest*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);

;goto accept14;
alt10_3: ptr->pos=oldpos14;goto alt9_2;
 accept14:;

;goto accept13;
alt9_2: ptr->pos=oldpos13;  it=AmethystCore_anything(self ); FAILTEST(alt9_3); bind_aset(bind,5/*x*/,it);
it=Qtrue; bind_aset(bind,3/*follow*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*follow*/));bind_aset(bind2,2,bind_aget(bind,5/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,3/*follow*/,bind_aget(bind2,1));bind_aset(bind,5/*x*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);

;goto accept13;
alt9_3: ptr->pos=oldpos13;goto pass10;
 accept13:;
it=bind_aget(bind,4/*_result*/); bind_aset(bind,31/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass10; break;
case 4/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,5/*x*/,it);
it=Qtrue; bind_aset(bind,3/*follow*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*follow*/));bind_aset(bind2,2,bind_aget(bind,5/*x*/));it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);bind_aset(bind,3/*follow*/,bind_aget(bind2,1));bind_aset(bind,5/*x*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,31/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass10; break;
}
                   goto success10;
                   pass10: *ptr=oldpass10; goto pass1;
                   success10: *ptr=oldpass10;
                it=bind_aget(bind,31/*autovar*/); bind_aset(bind,34/*follow*/,it);
bind_aset(bind2,1,bind_aget(bind,29/*first*/));bind_aset(bind2,2,bind_aget(bind,34/*follow*/));it=rb_funcall(self,sy_Remove_Left_Recursion_a_eq_autova_d0a0,1,bind2);bind_aset(bind,29/*first*/,bind_aget(bind2,1));bind_aset(bind,34/*follow*/,bind_aget(bind2,2));it=rb_funcall(self,sy_Remove_Left_Recursion_src_25d9,1,bind2); bind_aset(bind,35/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,35/*autovar*/); bind_aset(bind,36/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_remove_left_rigth_recursion_c(){ 
 cls_Remove_Left_Recursion=rb_define_class("Remove_Left_Recursion",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Remove_Left_Recursion_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Remove_Left_Recursion_1);;
switchhash_Remove_Left_Recursion_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Object\n}");rb_global_variable(&switchhash_Remove_Left_Recursion_2);;
switchhash_Remove_Left_Recursion_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Object\n}");rb_global_variable(&switchhash_Remove_Left_Recursion_3);;
switchhash_Remove_Left_Recursion_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Object\n}");rb_global_variable(&switchhash_Remove_Left_Recursion_4);;
sy_Remove_Left_Recursion_Bind_lb_src_66c4=rb_intern("Remove_Left_Recursion_Bind_lb_src_66c4");
sy_Remove_Left_Recursion_Or_lb_bind_lb__3169=rb_intern("Remove_Left_Recursion_Or_lb_bind_lb__3169");
sy_Remove_Left_Recursion_Seq_lb_bind_e0fb=rb_intern("Remove_Left_Recursion_Seq_lb_bind_e0fb");
sy_Remove_Left_Recursion_Seq_lb_bind_f95b=rb_intern("Remove_Left_Recursion_Seq_lb_bind_f95b");
sy_Remove_Left_Recursion__append_lp__d113=rb_intern("Remove_Left_Recursion__append_lp__d113");
sy_Remove_Left_Recursion__at_left_re_c85d=rb_intern("Remove_Left_Recursion__at_left_re_c85d");
sy_Remove_Left_Recursion__at_name_eq_sr_362f=rb_intern("Remove_Left_Recursion__at_name_eq_sr_362f");
sy_Remove_Left_Recursion__at_result_eq__b6ab=rb_intern("Remove_Left_Recursion__at_result_eq__b6ab");
sy_Remove_Left_Recursion__lp__at_name_eq__eq__2784=rb_intern("Remove_Left_Recursion__lp__at_name_eq__eq__2784");
sy_Remove_Left_Recursion__lp_must_em_43e9=rb_intern("Remove_Left_Recursion__lp_must_em_43e9");
sy_Remove_Left_Recursion_a_eq_autova_d0a0=rb_intern("Remove_Left_Recursion_a_eq_autova_d0a0");
sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5=rb_intern("Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5");
sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213=rb_intern("Remove_Left_Recursion_bind_lb_1_rb__sp__c213");
sy_Remove_Left_Recursion_src_25d9=rb_intern("Remove_Left_Recursion_src_25d9");
sy_Remove_Left_Recursion_src_dot_body_519e=rb_intern("Remove_Left_Recursion_src_dot_body_519e");
                    rb_define_method(cls_Remove_Left_Recursion,"first",Remove_Left_Recursion_first,1);
rb_define_method(cls_Remove_Left_Recursion,"must_empty",Remove_Left_Recursion_must_empty,0);
rb_define_method(cls_Remove_Left_Recursion,"root",Remove_Left_Recursion_root,0);
                    rb_eval_string("testversionremove_left_rigth_recursion('0e5861dcb71b7cc84e7b80b92b3543b3')");}
