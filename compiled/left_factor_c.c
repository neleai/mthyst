#include "cthyst.h"
VALUE cls_Left_Factor;
VALUE AmethystCore_anything(VALUE self );
VALUE Left_Factor_binds(VALUE self ,VALUE a0,VALUE a1);
VALUE Left_Factor_binds(VALUE self ,VALUE,VALUE);
VALUE Left_Factor_factor(VALUE self ,VALUE a0,VALUE a1,VALUE a2);
VALUE Left_Factor_factor(VALUE self ,VALUE,VALUE,VALUE);
VALUE Left_Factor_first(VALUE self ,VALUE a0);
VALUE Left_Factor_first(VALUE self ,VALUE);
VALUE Left_Factor_rest(VALUE self ,VALUE a0,VALUE a1);
VALUE Left_Factor_root(VALUE self );
VALUE Left_Factor_traverse(VALUE self );
VALUE Left_Factor_traverse_item(VALUE self );
VALUE Left_Factor_visit(VALUE self );
VALUE switchhash_Left_Factor_1;
VALUE switchhash_Left_Factor_2;
VALUE switchhash_Left_Factor_3;
VALUE switchhash_Left_Factor_4;
VALUE switchhash_Left_Factor_5;
static VALUE sy_Left_Factor_Bind_lb_src_66c4;
static VALUE sy_Left_Factor_Or_lb__ti__lp_bin_849e;
static VALUE sy_Left_Factor_Seq_lb__lb_bin_4ce0;
static VALUE sy_Left_Factor__append_lp__d113;
static VALUE sy_Left_Factor__at_changed_5352;
static VALUE sy_Left_Factor__at_changed_b885;
static VALUE sy_Left_Factor__at_changed_c681;
static VALUE sy_Left_Factor__lb_bind_lb_1_rb__1906;
static VALUE sy_Left_Factor__lp_bind_lb_1_rb__34a7;
static VALUE sy_Left_Factor__lp_bind_lb_1_rb__b868;
static VALUE sy_Left_Factor__lp_bind_lb_1_rb__ee3d;
static VALUE sy_Left_Factor__lp_src_dot_ins_6a75;
static VALUE sy_Left_Factor_bind_lb_1_rb__lt__7b20;
static VALUE sy_Left_Factor_bind_lb_1_rb__pl__4651;
static VALUE sy_Left_Factor_bind_lb_1_rb__pl__4c53;
static VALUE sy_Left_Factor_first_lp_bi_150a;
static VALUE sy_Left_Factor_if_sp_bind_lb__8e0b;
static VALUE sy_Left_Factor_src_25d9;
static VALUE sy_Left_Factor_src_dot_expr_ef77;
VALUE Left_Factor_binds(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(11);VALUE bind2=bind_new2(16); bind_aset(bind,0/*s*/,a0);bind_aset(bind,3/*a*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Bind*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len; it=rb_funcall(self,sy_Left_Factor_src_dot_expr_ef77,1,bind2); arg0=it;it=bind_aget(bind,3/*a*/); arg1=it; it=Left_Factor_binds(self ,arg0,arg1); FAILTEST(pass2); bind_aset(bind,4/*nexp*/,it);
bind_aset(bind2,1,bind_aget(bind,4/*nexp*/));it=rb_funcall(self,sy_Left_Factor_Bind_lb_src_66c4,1,bind2);bind_aset(bind,4/*nexp*/,bind_aget(bind2,1)); bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=bind_aget(bind,3/*a*/); bind_aset(bind,6/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass1;
 accept1:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Seq*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,7/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,8/*f*/,it);
ptr->pos=ptr->len; it=bind_aget(bind,8/*f*/); arg0=it;it=bind_aget(bind,3/*a*/); arg1=it; it=Left_Factor_binds(self ,arg0,arg1); FAILTEST(pass3); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt2_2;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,6/*autovar*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=bind_aget(bind,3/*a*/); bind_aset(bind,6/*autovar*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto pass1;
 accept2:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 2/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1);it=bind_aget(bind,3/*a*/); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,6/*autovar*/); bind_aset(bind,10/*_result*/,it);

return it;
fail: return failobj; }
VALUE Left_Factor_factor(VALUE self ,VALUE a0,VALUE a1,VALUE a2){VALUE vals[3]; VALUE bind=bind_new2(5);VALUE bind2=bind_new2(16); bind_aset(bind,2/*prev*/,a0);bind_aset(bind,1/*start*/,a1);bind_aset(bind,3/*cur*/,a2); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*next*/,it);
int oldpos2=ptr->pos;int cut2=0;
alt2_1:;bind_aset(bind2,1,bind_aget(bind,1/*start*/));bind_aset(bind2,2,bind_aget(bind,0/*next*/));it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__34a7,1,bind2);bind_aset(bind,1/*start*/,bind_aget(bind2,1));bind_aset(bind,0/*next*/,bind_aget(bind2,2));FAILTEST(alt2_2); it=bind_aget(bind,2/*prev*/); arg0=it;it=bind_aget(bind,1/*start*/); arg1=it;bind_aset(bind2,1,bind_aget(bind,3/*cur*/));bind_aset(bind2,2,bind_aget(bind,0/*next*/));it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4651,1,bind2);bind_aset(bind,3/*cur*/,bind_aget(bind2,1));bind_aset(bind,0/*next*/,bind_aget(bind2,2)); arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_2); bind_aset(bind,4/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;bind_aset(bind2,1,bind_aget(bind,1/*start*/));bind_aset(bind2,2,bind_aget(bind,0/*next*/));it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__b868,1,bind2);bind_aset(bind,1/*start*/,bind_aget(bind2,1));bind_aset(bind,0/*next*/,bind_aget(bind2,2));FAILTEST(alt2_3); bind_aset(bind2,1,bind_aget(bind,2/*prev*/));bind_aset(bind2,2,bind_aget(bind,3/*cur*/));it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4c53,1,bind2);bind_aset(bind,2/*prev*/,bind_aget(bind2,1));bind_aset(bind,3/*cur*/,bind_aget(bind2,2)); arg0=it;bind_aset(bind2,1,bind_aget(bind,0/*next*/));it=rb_funcall(self,sy_Left_Factor_first_lp_bi_150a,1,bind2);bind_aset(bind,0/*next*/,bind_aget(bind2,1)); arg1=it;bind_aset(bind2,1,bind_aget(bind,0/*next*/));it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_1_rb__1906,1,bind2);bind_aset(bind,0/*next*/,bind_aget(bind2,1)); arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_3); bind_aset(bind,4/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto alt1_2;
 accept2:;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=Qnil;if (ptr->pos<ptr->len) goto alt1_3;bind_aset(bind2,1,bind_aget(bind,2/*prev*/));bind_aset(bind2,2,bind_aget(bind,3/*cur*/));it=rb_funcall(self,sy_Left_Factor_Or_lb__ti__lp_bin_849e,1,bind2);bind_aset(bind,2/*prev*/,bind_aget(bind2,1));bind_aset(bind,3/*cur*/,bind_aget(bind2,2)); bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE Left_Factor_first(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(9);VALUE bind2=bind_new2(16); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Bind*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len; it=rb_funcall(self,sy_Left_Factor_src_dot_expr_ef77,1,bind2); arg0=it; it=Left_Factor_first(self ,arg0); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,4/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass1;
 accept1:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Seq*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*f*/,it);
ptr->pos=ptr->len; it=bind_aget(bind,6/*f*/); arg0=it; it=Left_Factor_first(self ,arg0); FAILTEST(pass3); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt2_2;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,4/*autovar*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto pass1;
 accept2:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 2/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*_result*/,it);

return it;
fail: return failobj; }
VALUE Left_Factor_rest(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(10);VALUE bind2=bind_new2(16); bind_aset(bind,0/*s*/,a0);bind_aset(bind,6/*bin*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Seq*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos2;  while(1){oldpos2=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,4/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*autovar*/));bind_aset(bind2,2,bind_aget(bind,4/*autovar*/));it=rb_funcall(self,sy_Left_Factor__append_lp__d113,1,bind2);bind_aset(bind,3/*autovar*/,bind_aget(bind2,1));bind_aset(bind,4/*autovar*/,bind_aget(bind2,2)); } break1: ptr->pos=oldpos2;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*it*/,it);
bind_aset(bind2,1,bind_aget(bind,6/*bin*/));bind_aset(bind2,2,bind_aget(bind,5/*it*/));it=rb_funcall(self,sy_Left_Factor_Seq_lb__lb_bin_4ce0,1,bind2);bind_aset(bind,6/*bin*/,bind_aget(bind2,1));bind_aset(bind,5/*it*/,bind_aget(bind2,2)); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=bind_aget(bind,6/*bin*/); bind_aset(bind,8/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass1;
 accept1:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1);it=bind_aget(bind,6/*bin*/); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Left_Factor_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=Left_Factor_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Left_Factor_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Left_Factor__at_changed_c681,1,bind2); bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Left_Factor_src_25d9,1,bind2); bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Left_Factor__lp_src_dot_ins_6a75,1,bind2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Left_Factor__at_changed_b885,1,bind2);  it=Left_Factor_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
bind_aset(bind2,1,bind_aget(bind,2/*clon*/));bind_aset(bind2,2,bind_aget(bind,1/*this*/));bind_aset(bind2,3,bind_aget(bind,3/*changed*/));bind_aset(bind2,4,bind_aget(bind,7/*key*/));bind_aset(bind2,5,bind_aget(bind,8/*val*/));it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__ee3d,1,bind2);bind_aset(bind,2/*clon*/,bind_aget(bind2,1));bind_aset(bind,1/*this*/,bind_aget(bind2,2));bind_aset(bind,3/*changed*/,bind_aget(bind2,3));bind_aset(bind,7/*key*/,bind_aget(bind2,4));bind_aset(bind,8/*val*/,bind_aget(bind2,5));it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto break1;
                   success3: *ptr=oldpass3;
                 } break1: ptr->pos=oldpos1;   it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,bind_aget(bind,3/*changed*/));bind_aset(bind2,2,bind_aget(bind,2/*clon*/));bind_aset(bind2,3,bind_aget(bind,0/*oldchanged*/));it=rb_funcall(self,sy_Left_Factor_if_sp_bind_lb__8e0b,1,bind2);bind_aset(bind,3/*changed*/,bind_aget(bind2,1));bind_aset(bind,2/*clon*/,bind_aget(bind2,2));bind_aset(bind,0/*oldchanged*/,bind_aget(bind2,3)); bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Left_Factor_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Left_Factor_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Left_Factor__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Left_Factor_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_3;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,3/*autovar*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=Left_Factor_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Left_Factor__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Left_Factor_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
bind_aset(bind2,1,bind_aget(bind,5/*ar*/));bind_aset(bind2,2,bind_aget(bind,6/*it*/));it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__lt__7b20,1,bind2);bind_aset(bind,5/*ar*/,bind_aget(bind2,1));bind_aset(bind,6/*it*/,bind_aget(bind2,2)); } break1: ptr->pos=oldpos3;   it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_3;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Object*/:; int oldpos4=ptr->pos;int cut3=0;
alt3_1:;  it=Left_Factor_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Left_Factor__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Left_Factor_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(11);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Or*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Left_Factor_traverse(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,2/*x*/,it);
bind_aset(bind2,1,bind_aget(bind,2/*x*/));it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_1_rb__1906,1,bind2);bind_aset(bind,2/*x*/,bind_aget(bind2,1)); bind_aset(bind,3/*cur*/,it);
bind_aset(bind2,1,bind_aget(bind,2/*x*/));it=rb_funcall(self,sy_Left_Factor_first_lp_bi_150a,1,bind2);bind_aset(bind,2/*x*/,bind_aget(bind2,1)); bind_aset(bind,4/*start*/,it);
it=rb_ary_new3(0); bind_aset(bind,5/*prev*/,it);
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,6/*next*/,it);
int oldpos2=ptr->pos;int cut2=0;
alt2_1:;bind_aset(bind2,1,bind_aget(bind,4/*start*/));bind_aset(bind2,2,bind_aget(bind,6/*next*/));it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__34a7,1,bind2);bind_aset(bind,4/*start*/,bind_aget(bind2,1));bind_aset(bind,6/*next*/,bind_aget(bind2,2));FAILTEST(alt2_2); it=rb_ary_new3(0); arg0=it;it=bind_aget(bind,4/*start*/); arg1=it;bind_aset(bind2,1,bind_aget(bind,3/*cur*/));bind_aset(bind2,2,bind_aget(bind,6/*next*/));it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4651,1,bind2);bind_aset(bind,3/*cur*/,bind_aget(bind2,1));bind_aset(bind,6/*next*/,bind_aget(bind2,2)); arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_2); bind_aset(bind,7/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;bind_aset(bind2,1,bind_aget(bind,4/*start*/));bind_aset(bind2,2,bind_aget(bind,6/*next*/));it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__b868,1,bind2);bind_aset(bind,4/*start*/,bind_aget(bind2,1));bind_aset(bind,6/*next*/,bind_aget(bind2,2));FAILTEST(alt2_3); bind_aset(bind2,1,bind_aget(bind,5/*prev*/));bind_aset(bind2,2,bind_aget(bind,3/*cur*/));it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4c53,1,bind2);bind_aset(bind,5/*prev*/,bind_aget(bind2,1));bind_aset(bind,3/*cur*/,bind_aget(bind2,2)); arg0=it;bind_aset(bind2,1,bind_aget(bind,6/*next*/));it=rb_funcall(self,sy_Left_Factor_first_lp_bi_150a,1,bind2);bind_aset(bind,6/*next*/,bind_aget(bind2,1)); arg1=it;bind_aset(bind2,1,bind_aget(bind,6/*next*/));it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_1_rb__1906,1,bind2);bind_aset(bind,6/*next*/,bind_aget(bind2,1)); arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_3); bind_aset(bind,7/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto alt1_2;
 accept2:;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=Qnil;if (ptr->pos<ptr->len) goto alt1_3;bind_aset(bind2,1,bind_aget(bind,5/*prev*/));bind_aset(bind2,2,bind_aget(bind,3/*cur*/));it=rb_funcall(self,sy_Left_Factor_Or_lb__ti__lp_bin_849e,1,bind2);bind_aset(bind,5/*prev*/,bind_aget(bind2,1));bind_aset(bind,3/*cur*/,bind_aget(bind2,2)); bind_aset(bind,7/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass2;
 accept1:;
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_left_factor_c(){ 
 cls_Left_Factor=rb_define_class("Left_Factor",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Left_Factor_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Left_Factor_1);;
switchhash_Left_Factor_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Seq\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Left_Factor_2);;
switchhash_Left_Factor_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Left_Factor_3);;
switchhash_Left_Factor_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Left_Factor_4);;
switchhash_Left_Factor_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Left_Factor_5);;
sy_Left_Factor_Bind_lb_src_66c4=rb_intern("Left_Factor_Bind_lb_src_66c4");
sy_Left_Factor_Or_lb__ti__lp_bin_849e=rb_intern("Left_Factor_Or_lb__ti__lp_bin_849e");
sy_Left_Factor_Seq_lb__lb_bin_4ce0=rb_intern("Left_Factor_Seq_lb__lb_bin_4ce0");
sy_Left_Factor__append_lp__d113=rb_intern("Left_Factor__append_lp__d113");
sy_Left_Factor__at_changed_5352=rb_intern("Left_Factor__at_changed_5352");
sy_Left_Factor__at_changed_b885=rb_intern("Left_Factor__at_changed_b885");
sy_Left_Factor__at_changed_c681=rb_intern("Left_Factor__at_changed_c681");
sy_Left_Factor__lb_bind_lb_1_rb__1906=rb_intern("Left_Factor__lb_bind_lb_1_rb__1906");
sy_Left_Factor__lp_bind_lb_1_rb__34a7=rb_intern("Left_Factor__lp_bind_lb_1_rb__34a7");
sy_Left_Factor__lp_bind_lb_1_rb__b868=rb_intern("Left_Factor__lp_bind_lb_1_rb__b868");
sy_Left_Factor__lp_bind_lb_1_rb__ee3d=rb_intern("Left_Factor__lp_bind_lb_1_rb__ee3d");
sy_Left_Factor__lp_src_dot_ins_6a75=rb_intern("Left_Factor__lp_src_dot_ins_6a75");
sy_Left_Factor_bind_lb_1_rb__lt__7b20=rb_intern("Left_Factor_bind_lb_1_rb__lt__7b20");
sy_Left_Factor_bind_lb_1_rb__pl__4651=rb_intern("Left_Factor_bind_lb_1_rb__pl__4651");
sy_Left_Factor_bind_lb_1_rb__pl__4c53=rb_intern("Left_Factor_bind_lb_1_rb__pl__4c53");
sy_Left_Factor_first_lp_bi_150a=rb_intern("Left_Factor_first_lp_bi_150a");
sy_Left_Factor_if_sp_bind_lb__8e0b=rb_intern("Left_Factor_if_sp_bind_lb__8e0b");
sy_Left_Factor_src_25d9=rb_intern("Left_Factor_src_25d9");
sy_Left_Factor_src_dot_expr_ef77=rb_intern("Left_Factor_src_dot_expr_ef77");
                    rb_define_method(cls_Left_Factor,"binds",Left_Factor_binds,2);
rb_define_method(cls_Left_Factor,"factor",Left_Factor_factor,3);
rb_define_method(cls_Left_Factor,"first",Left_Factor_first,1);
rb_define_method(cls_Left_Factor,"rest",Left_Factor_rest,2);
rb_define_method(cls_Left_Factor,"root",Left_Factor_root,0);
rb_define_method(cls_Left_Factor,"traverse",Left_Factor_traverse,0);
rb_define_method(cls_Left_Factor,"traverse_item",Left_Factor_traverse_item,0);
rb_define_method(cls_Left_Factor,"visit",Left_Factor_visit,0);
                    rb_eval_string("testversionleft_factor('39801250647365084c65e924e26a3a58')");}
