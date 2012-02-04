#include "cthyst.h"
VALUE cls_Analyze_Variables2;
VALUE AmethystCore_anything(VALUE self );
VALUE Analyze_Variables2_flat(VALUE self );
VALUE Analyze_Variables2_itrans(VALUE self );
VALUE Analyze_Variables2_root(VALUE self );
VALUE Analyze_Variables2_traverse(VALUE self );
VALUE Analyze_Variables2_traverse_item(VALUE self );
VALUE Analyze_Variables2_visit(VALUE self );
VALUE switchhash_Analyze_Variables2_1;
VALUE switchhash_Analyze_Variables2_2;
VALUE switchhash_Analyze_Variables2_3;
VALUE switchhash_Analyze_Variables2_4;
VALUE switchhash_Analyze_Variables2_5;
VALUE switchhash_Analyze_Variables2_6;
VALUE switchhash_Analyze_Variables2_7;
static VALUE sy_Analyze_Variables2_Act_lb_bind_4ccd;
static VALUE sy_Analyze_Variables2_Or_lb__ti_bind_5a27;
static VALUE sy_Analyze_Variables2_Placehol_6875;
static VALUE sy_Analyze_Variables2_Seq_lb__ti_bin_1174;
static VALUE sy_Analyze_Variables2__append_lp__d113;
static VALUE sy_Analyze_Variables2__at_bnding_eq__b94a;
static VALUE sy_Analyze_Variables2__at_changed_5352;
static VALUE sy_Analyze_Variables2__at_changed_b885;
static VALUE sy_Analyze_Variables2__at_changed_c681;
static VALUE sy_Analyze_Variables2__at_locals_eq__02ce;
static VALUE sy_Analyze_Variables2__at_variabl_f612;
static VALUE sy_Analyze_Variables2__lp_;
static VALUE sy_Analyze_Variables2__lp_bind_lb_1_rb__e3f1;
static VALUE sy_Analyze_Variables2__lp_bind_lb_1_rb__ee3d;
static VALUE sy_Analyze_Variables2__lp_src_dot_ins_6a75;
static VALUE sy_Analyze_Variables2_bind_lb_1_rb__lt__7b20;
static VALUE sy_Analyze_Variables2_connects_04d2;
static VALUE sy_Analyze_Variables2_if_sp_bind_lb__8e0b;
static VALUE sy_Analyze_Variables2_src_25d9;
static VALUE sy_Analyze_Variables2_src_dot_ary_d5cf;
static VALUE sy_Analyze_Variables2_src_dot_ary_dot__dd8c;
static VALUE sy_Analyze_Variables2_src_dot_loca_ab74;
static VALUE sy_Analyze_Variables2_src_dot_pred_56d4;
static VALUE sy_Analyze_Variables2_src_dot_pure_41d4;
static VALUE sy_Analyze_Variables2_src_dot_rule_5acf;
static VALUE sy_Analyze_Variables2_src_dot_rule_a719;
static VALUE sy_Analyze_Variables2_vars_eq__at_lo_cf02;
VALUE Analyze_Variables2_flat(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Args*/:; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Analyze_Variables2_flat(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);

;goto accept2;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*autovar*/,it);

;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
bind_aset(bind2,1,bind_aget(bind,0/*autovar*/));bind_aset(bind2,2,bind_aget(bind,3/*autovar*/));it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);bind_aset(bind,0/*autovar*/,bind_aget(bind2,1));bind_aset(bind,3/*autovar*/,bind_aget(bind2,2)); break;
case 1/*Strin*/:; int oldpos3=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Analyze_Variables2_flat(self ); FAILTEST(pass2); bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,5/*autovar*/); bind_aset(bind,3/*autovar*/,it);

;goto accept3;
alt2_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,3/*autovar*/,it);

;goto accept3;
alt2_3: ptr->pos=oldpos3;goto break1;
 accept3:;
bind_aset(bind2,1,bind_aget(bind,0/*autovar*/));bind_aset(bind2,2,bind_aget(bind,3/*autovar*/));it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);bind_aset(bind,0/*autovar*/,bind_aget(bind2,1));bind_aset(bind,3/*autovar*/,bind_aget(bind2,2)); break;
case 2/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*autovar*/));bind_aset(bind2,2,bind_aget(bind,3/*autovar*/));it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);bind_aset(bind,0/*autovar*/,bind_aget(bind2,1));bind_aset(bind,3/*autovar*/,bind_aget(bind2,2)); break;
} } break1: ptr->pos=oldpos1;   it=bind_aget(bind,0/*autovar*/); bind_aset(bind,6/*_result*/,it);

return it;
fail: return failobj; }
VALUE Analyze_Variables2_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Grammar*/:; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Analyze_Variables2_src_dot_rule_5acf,1,bind2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Analyze_Variables2_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto break2;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,4/*autovar*/));bind_aset(bind2,2,bind_aget(bind,7/*autovar*/));it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);bind_aset(bind,4/*autovar*/,bind_aget(bind2,1));bind_aset(bind,7/*autovar*/,bind_aget(bind2,2)); break;
case 1/*Object*/:; goto break2; break;
} } break2: ptr->pos=oldpos3;   it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                bind_aset(bind2,1,bind_aget(bind,8/*rules*/));it=rb_funcall(self,sy_Analyze_Variables2_src_dot_rule_a719,1,bind2);bind_aset(bind,8/*rules*/,bind_aget(bind2,1));it=rb_funcall(self,sy_Analyze_Variables2_src_25d9,1,bind2); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);

;goto accept2;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,10/*autovar*/,it);

;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
bind_aset(bind2,1,bind_aget(bind,0/*autovar*/));bind_aset(bind2,2,bind_aget(bind,10/*autovar*/));it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);bind_aset(bind,0/*autovar*/,bind_aget(bind2,1));bind_aset(bind,10/*autovar*/,bind_aget(bind2,2)); break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,10/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*autovar*/));bind_aset(bind2,2,bind_aget(bind,10/*autovar*/));it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);bind_aset(bind,0/*autovar*/,bind_aget(bind2,1));bind_aset(bind,10/*autovar*/,bind_aget(bind2,2)); break;
} } break1: ptr->pos=oldpos1;   it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);

return it;
fail: return failobj; }
VALUE Analyze_Variables2_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Analyze_Variables2_src_25d9,1,bind2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Object*/:; goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Analyze_Variables2__at_bnding_eq__b94a,1,bind2);it=rb_funcall(self,sy_Analyze_Variables2__at_variabl_f612,1,bind2);it=rb_funcall(self,sy_Analyze_Variables2__at_locals_eq__02ce,1,bind2);  it=Analyze_Variables2_traverse(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Analyze_Variables2_src_dot_loca_ab74,1,bind2);it=rb_funcall(self,sy_Analyze_Variables2_src_25d9,1,bind2); bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto fail;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*_result*/,it);

return it;
fail: return failobj; }
VALUE Analyze_Variables2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Analyze_Variables2__at_changed_c681,1,bind2); bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Analyze_Variables2_src_25d9,1,bind2); bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Analyze_Variables2__lp_src_dot_ins_6a75,1,bind2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Analyze_Variables2__at_changed_b885,1,bind2);  it=Analyze_Variables2_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
bind_aset(bind2,1,bind_aget(bind,2/*clon*/));bind_aset(bind2,2,bind_aget(bind,1/*this*/));bind_aset(bind2,3,bind_aget(bind,3/*changed*/));bind_aset(bind2,4,bind_aget(bind,7/*key*/));bind_aset(bind2,5,bind_aget(bind,8/*val*/));it=rb_funcall(self,sy_Analyze_Variables2__lp_bind_lb_1_rb__ee3d,1,bind2);bind_aset(bind,2/*clon*/,bind_aget(bind2,1));bind_aset(bind,1/*this*/,bind_aget(bind2,2));bind_aset(bind,3/*changed*/,bind_aget(bind2,3));bind_aset(bind,7/*key*/,bind_aget(bind2,4));bind_aset(bind,8/*val*/,bind_aget(bind2,5));it=Qnil;if (ptr->pos<ptr->len) goto pass3;
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
                bind_aset(bind2,1,bind_aget(bind,3/*changed*/));bind_aset(bind2,2,bind_aget(bind,2/*clon*/));bind_aset(bind2,3,bind_aget(bind,0/*oldchanged*/));it=rb_funcall(self,sy_Analyze_Variables2_if_sp_bind_lb__8e0b,1,bind2);bind_aset(bind,3/*changed*/,bind_aget(bind2,1));bind_aset(bind,2/*clon*/,bind_aget(bind2,2));bind_aset(bind,0/*oldchanged*/,bind_aget(bind2,3)); bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Analyze_Variables2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Analyze_Variables2_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Analyze_Variables2__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Analyze_Variables2_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
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
alt2_1:;  it=Analyze_Variables2_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Analyze_Variables2__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Analyze_Variables2_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
bind_aset(bind2,1,bind_aget(bind,5/*ar*/));bind_aset(bind2,2,bind_aget(bind,6/*it*/));it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb__lt__7b20,1,bind2);bind_aset(bind,5/*ar*/,bind_aget(bind2,1));bind_aset(bind,6/*it*/,bind_aget(bind2,2)); } break1: ptr->pos=oldpos3;   it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
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
alt3_1:;  it=Analyze_Variables2_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Analyze_Variables2__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Analyze_Variables2_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(33);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Analyze_Variables2_src_dot_pred_56d4,1,bind2); bind_aset(bind,1/*pred*/,it);
it=rb_funcall(self,sy_Analyze_Variables2_src_dot_pure_41d4,1,bind2); bind_aset(bind,2/*pure*/,it);
  it=Analyze_Variables2_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Analyze_Variables2_src_dot_ary_d5cf,1,bind2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Args*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;bind_aset(bind2,1,bind_aget(bind,1/*pred*/));it=rb_funcall(self,sy_Analyze_Variables2__lp_,1,bind2);bind_aset(bind,1/*pred*/,bind_aget(bind2,1));FAILTEST(alt1_2);goto alt1_2;
;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,6/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,7/*autovar*/,it);
int oldpos2;  while(1){oldpos2=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,8/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,7/*autovar*/));bind_aset(bind2,2,bind_aget(bind,8/*autovar*/));it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);bind_aset(bind,7/*autovar*/,bind_aget(bind2,1));bind_aset(bind,8/*autovar*/,bind_aget(bind2,2)); } break1: ptr->pos=oldpos2;   it=bind_aget(bind,7/*autovar*/); bind_aset(bind,9/*ary*/,it);
bind_aset(bind2,1,bind_aget(bind,9/*ary*/));bind_aset(bind2,2,bind_aget(bind,1/*pred*/));bind_aset(bind2,3,bind_aget(bind,2/*pure*/));it=rb_funcall(self,sy_Analyze_Variables2_Act_lb_bind_4ccd,1,bind2);bind_aset(bind,9/*ary*/,bind_aget(bind2,1));bind_aset(bind,1/*pred*/,bind_aget(bind2,2));bind_aset(bind,2/*pure*/,bind_aget(bind2,3)); bind_aset(bind,10/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt1_3;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass4;
 accept1:;
it=Qnil;if (ptr->pos<ptr->len) goto pass4; break;
case 1/*Local*/:; bind_aset(bind2,1,bind_aget(bind,1/*pred*/));it=rb_funcall(self,sy_Analyze_Variables2__lp_,1,bind2);bind_aset(bind,1/*pred*/,bind_aget(bind2,1));FAILTEST(pass4);it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,11/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4; break;
case 2/*Object*/:; bind_aset(bind2,1,bind_aget(bind,1/*pred*/));it=rb_funcall(self,sy_Analyze_Variables2__lp_,1,bind2);bind_aset(bind,1/*pred*/,bind_aget(bind2,1));FAILTEST(pass4);goto pass4; break;
}
                   goto success4;
                   pass4: *ptr=oldpass4; goto pass3;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,13/*autovar*/); bind_aset(bind,14/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,14/*autovar*/); bind_aset(bind,15/*_result*/,it);
 break;
case 1/*Args*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,16/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,16/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Analyze_Variables2_traverse(self ); FAILTEST(pass6); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Analyze_Variables2_src_dot_ary_dot__dd8c,1,bind2); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,18/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass8); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Analyze_Variables2_flat(self ); FAILTEST(pass9); bind_aset(bind,20/*a*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto pass8;
                   success9: *ptr=oldpass9;
                it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto pass7;
                   success8: *ptr=oldpass8;
                bind_aset(bind2,1,bind_aget(bind,20/*a*/));it=rb_funcall(self,sy_Analyze_Variables2_connects_04d2,1,bind2);bind_aset(bind,20/*a*/,bind_aget(bind2,1)); bind_aset(bind,9/*ary*/,it);
bind_aset(bind2,1,bind_aget(bind,9/*ary*/));it=rb_funcall(self,sy_Analyze_Variables2__lp_bind_lb_1_rb__e3f1,1,bind2);bind_aset(bind,9/*ary*/,bind_aget(bind2,1)); bind_aset(bind,21/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto pass6;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,21/*autovar*/); bind_aset(bind,22/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto fail;
                   success6: *ptr=oldpass6;
                it=bind_aget(bind,22/*autovar*/); bind_aset(bind,15/*_result*/,it);
 break;
case 2/*Comment*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,23/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Analyze_Variables2_Placehol_6875,1,bind2); bind_aset(bind,24/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto fail;
                   success10: *ptr=oldpass10;
                it=bind_aget(bind,24/*autovar*/); bind_aset(bind,15/*_result*/,it);
 break;
case 3/*Or_AST*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,25/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,25/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,26/*autovar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Analyze_Variables2_traverse_item(self ); FAILTEST(break2); bind_aset(bind,27/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,26/*autovar*/));bind_aset(bind2,2,bind_aget(bind,27/*autovar*/));it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);bind_aset(bind,26/*autovar*/,bind_aget(bind2,1));bind_aset(bind,27/*autovar*/,bind_aget(bind2,2)); } break2: ptr->pos=oldpos3;   it=bind_aget(bind,26/*autovar*/); bind_aset(bind,9/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto fail;
                   success11: *ptr=oldpass11;
                bind_aset(bind2,1,bind_aget(bind,9/*ary*/));it=rb_funcall(self,sy_Analyze_Variables2_Or_lb__ti_bind_5a27,1,bind2);bind_aset(bind,9/*ary*/,bind_aget(bind2,1)); bind_aset(bind,15/*_result*/,it);
 break;
case 4/*Result*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,28/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,28/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Analyze_Variables2_vars_eq__at_lo_cf02,1,bind2); bind_aset(bind,29/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto fail;
                   success12: *ptr=oldpass12;
                it=bind_aget(bind,29/*autovar*/); bind_aset(bind,15/*_result*/,it);
 break;
case 5/*Seq_AST*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,30/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,30/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,31/*autovar*/,it);
int oldpos4;  while(1){oldpos4=ptr->pos;   it=Analyze_Variables2_traverse_item(self ); FAILTEST(break3); bind_aset(bind,32/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,31/*autovar*/));bind_aset(bind2,2,bind_aget(bind,32/*autovar*/));it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);bind_aset(bind,31/*autovar*/,bind_aget(bind2,1));bind_aset(bind,32/*autovar*/,bind_aget(bind2,2)); } break3: ptr->pos=oldpos4;   it=bind_aget(bind,31/*autovar*/); bind_aset(bind,9/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13;
                   goto success13;
                   pass13: *ptr=oldpass13; goto fail;
                   success13: *ptr=oldpass13;
                bind_aset(bind2,1,bind_aget(bind,9/*ary*/));it=rb_funcall(self,sy_Analyze_Variables2_Seq_lb__ti_bin_1174,1,bind2);bind_aset(bind,9/*ary*/,bind_aget(bind2,1)); bind_aset(bind,15/*_result*/,it);
 break;
case 6/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }VALUE cls_Resolve_Calls;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Resolve_Calls_root(VALUE self );
VALUE Resolve_Calls_traverse(VALUE self );
VALUE Resolve_Calls_traverse_item(VALUE self );
VALUE Resolve_Calls_visit(VALUE self );
VALUE switchhash_Resolve_Calls_1;
VALUE switchhash_Resolve_Calls_2;
VALUE switchhash_Resolve_Calls_3;
VALUE switchhash_Resolve_Calls_4;
static VALUE sy_Resolve_Calls__at_changed_5352;
static VALUE sy_Resolve_Calls__at_changed_b885;
static VALUE sy_Resolve_Calls__at_changed_c681;
static VALUE sy_Resolve_Calls__at_grammar_c8c8;
static VALUE sy_Resolve_Calls__at_name_eq_bi_0e7f;
static VALUE sy_Resolve_Calls__lp_bind_lb_1_rb__ee3d;
static VALUE sy_Resolve_Calls__lp_src_dot_ins_6a75;
static VALUE sy_Resolve_Calls_a_eq_Apply_lb__1315;
static VALUE sy_Resolve_Calls_a_eq_Apply_lb__36f8;
static VALUE sy_Resolve_Calls_bind_lb_1_rb__lt__7b20;
static VALUE sy_Resolve_Calls_if_sp_bind_lb__8e0b;
static VALUE sy_Resolve_Calls_src_25d9;
static VALUE sy_Resolve_Calls_src_dot_name_80f3;
static VALUE sy_Resolve_Calls_super_na_7b4c;
VALUE Resolve_Calls_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*autovar*/));it=rb_funcall(self,sy_Resolve_Calls__at_grammar_c8c8,1,bind2);bind_aset(bind,0/*autovar*/,bind_aget(bind2,1));switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,1/*autovar*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Resolve_Calls_src_dot_name_80f3,1,bind2); bind_aset(bind,2/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,2/*autovar*/));it=rb_funcall(self,sy_Resolve_Calls__at_name_eq_bi_0e7f,1,bind2);bind_aset(bind,2/*autovar*/,bind_aget(bind2,1));  it=Resolve_Calls_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE Resolve_Calls_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Resolve_Calls__at_changed_c681,1,bind2); bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Resolve_Calls_src_25d9,1,bind2); bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Resolve_Calls__lp_src_dot_ins_6a75,1,bind2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Resolve_Calls__at_changed_b885,1,bind2);  it=Resolve_Calls_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
bind_aset(bind2,1,bind_aget(bind,2/*clon*/));bind_aset(bind2,2,bind_aget(bind,1/*this*/));bind_aset(bind2,3,bind_aget(bind,3/*changed*/));bind_aset(bind2,4,bind_aget(bind,7/*key*/));bind_aset(bind2,5,bind_aget(bind,8/*val*/));it=rb_funcall(self,sy_Resolve_Calls__lp_bind_lb_1_rb__ee3d,1,bind2);bind_aset(bind,2/*clon*/,bind_aget(bind2,1));bind_aset(bind,1/*this*/,bind_aget(bind2,2));bind_aset(bind,3/*changed*/,bind_aget(bind2,3));bind_aset(bind,7/*key*/,bind_aget(bind2,4));bind_aset(bind,8/*val*/,bind_aget(bind2,5));it=Qnil;if (ptr->pos<ptr->len) goto pass3;
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
                bind_aset(bind2,1,bind_aget(bind,3/*changed*/));bind_aset(bind2,2,bind_aget(bind,2/*clon*/));bind_aset(bind2,3,bind_aget(bind,0/*oldchanged*/));it=rb_funcall(self,sy_Resolve_Calls_if_sp_bind_lb__8e0b,1,bind2);bind_aset(bind,3/*changed*/,bind_aget(bind2,1));bind_aset(bind,2/*clon*/,bind_aget(bind2,2));bind_aset(bind,0/*oldchanged*/,bind_aget(bind2,3)); bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Resolve_Calls_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Resolve_Calls_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Resolve_Calls__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Resolve_Calls_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
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
alt2_1:;  it=Resolve_Calls_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Resolve_Calls__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Resolve_Calls_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
bind_aset(bind2,1,bind_aget(bind,5/*ar*/));bind_aset(bind2,2,bind_aget(bind,6/*it*/));it=rb_funcall(self,sy_Resolve_Calls_bind_lb_1_rb__lt__7b20,1,bind2);bind_aset(bind,5/*ar*/,bind_aget(bind2,1));bind_aset(bind,6/*it*/,bind_aget(bind2,2)); } break1: ptr->pos=oldpos3;   it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
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
alt3_1:;  it=Resolve_Calls_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Resolve_Calls__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Resolve_Calls_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'r':;case 't' ... UC(255):; goto pass2; break;
case 's' ... 's':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='u'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='e'&&ame_curstr2(ptr)[3]=='r')  ptr->pos+=4; else goto pass2; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=rb_funcall(self,sy_Resolve_Calls_super_na_7b4c,1,bind2); bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Array*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,8/*name*/,it);
bind_aset(bind2,1,bind_aget(bind,8/*name*/));it=rb_funcall(self,sy_Resolve_Calls_a_eq_Apply_lb__36f8,1,bind2);bind_aset(bind,8/*name*/,bind_aget(bind2,1)); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
case 1/*Object*/:; goto pass3; break;
}
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt1_3;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,8/*name*/,it);
bind_aset(bind2,1,bind_aget(bind,8/*name*/));it=rb_funcall(self,sy_Resolve_Calls_a_eq_Apply_lb__1315,1,bind2);bind_aset(bind,8/*name*/,bind_aget(bind2,1)); bind_aset(bind,11/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt1_4;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,11/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_detect_variables2_c(){ 
 cls_Analyze_Variables2=rb_define_class("Analyze_Variables2",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Analyze_Variables2_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Analyze_Variables2_1);;
switchhash_Analyze_Variables2_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Analyze_Variables2_2);;
switchhash_Analyze_Variables2_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Analyze_Variables2_3);;
switchhash_Analyze_Variables2_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Args\nnext h[k]=2 if k<=Comment\nnext h[k]=3 if k<=Or_AST\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Seq_AST\nnext h[k]=6 if k<=Object\n}");rb_global_variable(&switchhash_Analyze_Variables2_4);;
switchhash_Analyze_Variables2_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Local\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Analyze_Variables2_5);;
switchhash_Analyze_Variables2_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Strin\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Analyze_Variables2_6);;
switchhash_Analyze_Variables2_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Analyze_Variables2_7);;
sy_Analyze_Variables2_Act_lb_bind_4ccd=rb_intern("Analyze_Variables2_Act_lb_bind_4ccd");
sy_Analyze_Variables2_Or_lb__ti_bind_5a27=rb_intern("Analyze_Variables2_Or_lb__ti_bind_5a27");
sy_Analyze_Variables2_Placehol_6875=rb_intern("Analyze_Variables2_Placehol_6875");
sy_Analyze_Variables2_Seq_lb__ti_bin_1174=rb_intern("Analyze_Variables2_Seq_lb__ti_bin_1174");
sy_Analyze_Variables2__append_lp__d113=rb_intern("Analyze_Variables2__append_lp__d113");
sy_Analyze_Variables2__at_bnding_eq__b94a=rb_intern("Analyze_Variables2__at_bnding_eq__b94a");
sy_Analyze_Variables2__at_changed_5352=rb_intern("Analyze_Variables2__at_changed_5352");
sy_Analyze_Variables2__at_changed_b885=rb_intern("Analyze_Variables2__at_changed_b885");
sy_Analyze_Variables2__at_changed_c681=rb_intern("Analyze_Variables2__at_changed_c681");
sy_Analyze_Variables2__at_locals_eq__02ce=rb_intern("Analyze_Variables2__at_locals_eq__02ce");
sy_Analyze_Variables2__at_variabl_f612=rb_intern("Analyze_Variables2__at_variabl_f612");
sy_Analyze_Variables2__lp_=rb_intern("Analyze_Variables2__lp_");
sy_Analyze_Variables2__lp_bind_lb_1_rb__e3f1=rb_intern("Analyze_Variables2__lp_bind_lb_1_rb__e3f1");
sy_Analyze_Variables2__lp_bind_lb_1_rb__ee3d=rb_intern("Analyze_Variables2__lp_bind_lb_1_rb__ee3d");
sy_Analyze_Variables2__lp_src_dot_ins_6a75=rb_intern("Analyze_Variables2__lp_src_dot_ins_6a75");
sy_Analyze_Variables2_bind_lb_1_rb__lt__7b20=rb_intern("Analyze_Variables2_bind_lb_1_rb__lt__7b20");
sy_Analyze_Variables2_connects_04d2=rb_intern("Analyze_Variables2_connects_04d2");
sy_Analyze_Variables2_if_sp_bind_lb__8e0b=rb_intern("Analyze_Variables2_if_sp_bind_lb__8e0b");
sy_Analyze_Variables2_src_25d9=rb_intern("Analyze_Variables2_src_25d9");
sy_Analyze_Variables2_src_dot_ary_d5cf=rb_intern("Analyze_Variables2_src_dot_ary_d5cf");
sy_Analyze_Variables2_src_dot_ary_dot__dd8c=rb_intern("Analyze_Variables2_src_dot_ary_dot__dd8c");
sy_Analyze_Variables2_src_dot_loca_ab74=rb_intern("Analyze_Variables2_src_dot_loca_ab74");
sy_Analyze_Variables2_src_dot_pred_56d4=rb_intern("Analyze_Variables2_src_dot_pred_56d4");
sy_Analyze_Variables2_src_dot_pure_41d4=rb_intern("Analyze_Variables2_src_dot_pure_41d4");
sy_Analyze_Variables2_src_dot_rule_5acf=rb_intern("Analyze_Variables2_src_dot_rule_5acf");
sy_Analyze_Variables2_src_dot_rule_a719=rb_intern("Analyze_Variables2_src_dot_rule_a719");
sy_Analyze_Variables2_vars_eq__at_lo_cf02=rb_intern("Analyze_Variables2_vars_eq__at_lo_cf02");
                    rb_define_method(cls_Analyze_Variables2,"flat",Analyze_Variables2_flat,0);
rb_define_method(cls_Analyze_Variables2,"itrans",Analyze_Variables2_itrans,0);
rb_define_method(cls_Analyze_Variables2,"root",Analyze_Variables2_root,0);
rb_define_method(cls_Analyze_Variables2,"traverse",Analyze_Variables2_traverse,0);
rb_define_method(cls_Analyze_Variables2,"traverse_item",Analyze_Variables2_traverse_item,0);
rb_define_method(cls_Analyze_Variables2,"visit",Analyze_Variables2_visit,0);
                   
 cls_Resolve_Calls=rb_define_class("Resolve_Calls",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Resolve_Calls_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Resolve_Calls_1);;
switchhash_Resolve_Calls_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Resolve_Calls_2);;
switchhash_Resolve_Calls_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Array\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Resolve_Calls_3);;
switchhash_Resolve_Calls_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Resolve_Calls_4);;
sy_Resolve_Calls__at_changed_5352=rb_intern("Resolve_Calls__at_changed_5352");
sy_Resolve_Calls__at_changed_b885=rb_intern("Resolve_Calls__at_changed_b885");
sy_Resolve_Calls__at_changed_c681=rb_intern("Resolve_Calls__at_changed_c681");
sy_Resolve_Calls__at_grammar_c8c8=rb_intern("Resolve_Calls__at_grammar_c8c8");
sy_Resolve_Calls__at_name_eq_bi_0e7f=rb_intern("Resolve_Calls__at_name_eq_bi_0e7f");
sy_Resolve_Calls__lp_bind_lb_1_rb__ee3d=rb_intern("Resolve_Calls__lp_bind_lb_1_rb__ee3d");
sy_Resolve_Calls__lp_src_dot_ins_6a75=rb_intern("Resolve_Calls__lp_src_dot_ins_6a75");
sy_Resolve_Calls_a_eq_Apply_lb__1315=rb_intern("Resolve_Calls_a_eq_Apply_lb__1315");
sy_Resolve_Calls_a_eq_Apply_lb__36f8=rb_intern("Resolve_Calls_a_eq_Apply_lb__36f8");
sy_Resolve_Calls_bind_lb_1_rb__lt__7b20=rb_intern("Resolve_Calls_bind_lb_1_rb__lt__7b20");
sy_Resolve_Calls_if_sp_bind_lb__8e0b=rb_intern("Resolve_Calls_if_sp_bind_lb__8e0b");
sy_Resolve_Calls_src_25d9=rb_intern("Resolve_Calls_src_25d9");
sy_Resolve_Calls_src_dot_name_80f3=rb_intern("Resolve_Calls_src_dot_name_80f3");
sy_Resolve_Calls_super_na_7b4c=rb_intern("Resolve_Calls_super_na_7b4c");
                    rb_define_method(cls_Resolve_Calls,"root",Resolve_Calls_root,0);
rb_define_method(cls_Resolve_Calls,"traverse",Resolve_Calls_traverse,0);
rb_define_method(cls_Resolve_Calls,"traverse_item",Resolve_Calls_traverse_item,0);
rb_define_method(cls_Resolve_Calls,"visit",Resolve_Calls_visit,0);
                    rb_eval_string("testversiondetect_variables2('a4c7db6fb8460a3c15cbea8c20a47f79')");}
