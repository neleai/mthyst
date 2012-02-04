#include "cthyst.h"
VALUE cls_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Dataflow_root(VALUE self );
VALUE Dataflow_traverse(VALUE self );
VALUE Dataflow_traverse_item(VALUE self );
VALUE Dataflow_vars_in(VALUE self );
VALUE Dataflow_visit(VALUE self );
VALUE switchhash_Dataflow_1;
VALUE switchhash_Dataflow_2;
VALUE switchhash_Dataflow_3;
VALUE switchhash_Dataflow_4;
static VALUE sy_Dataflow_Act_lb_bind_7d8f;
static VALUE sy_Dataflow_Apply_lb__ti__lp__753f;
static VALUE sy_Dataflow_Lookahea_2972;
static VALUE sy_Dataflow_Many_dot_cre_2107;
static VALUE sy_Dataflow_Or_lb__ti_bind_d486;
static VALUE sy_Dataflow_Pass_dot_cre_5b5c;
static VALUE sy_Dataflow_Seq_lb_src_dot__6f68;
static VALUE sy_Dataflow__append_lp__d113;
static VALUE sy_Dataflow__at_bnding_eq__b94a;
static VALUE sy_Dataflow__at_changed_5352;
static VALUE sy_Dataflow__at_changed_b885;
static VALUE sy_Dataflow__at_changed_c681;
static VALUE sy_Dataflow__at_marked_lt__59bb;
static VALUE sy_Dataflow__at_marked_lt__d910;
static VALUE sy_Dataflow__at_marked_lt__f9b9;
static VALUE sy_Dataflow__at_oldssan_37c2;
static VALUE sy_Dataflow__at_oldssan_e953;
static VALUE sy_Dataflow__lp_bind_lb_1_rb__ee3d;
static VALUE sy_Dataflow__lp_src_dot_ins_6a75;
static VALUE sy_Dataflow_bind_end_6e13;
static VALUE sy_Dataflow_bind_lb_1_rb_;
static VALUE sy_Dataflow_bind_lb_1_rb__dot__6099;
static VALUE sy_Dataflow_bind_lb_1_rb__dot__9da9;
static VALUE sy_Dataflow_bind_lb_1_rb__dot__ce70;
static VALUE sy_Dataflow_bind_lb_1_rb__dot__dbae;
static VALUE sy_Dataflow_bind_lb_1_rb__eq__fe02;
static VALUE sy_Dataflow_bind_lb_1_rb__lt__7b20;
static VALUE sy_Dataflow_bind_lb_1_rb__lt__c37a;
static VALUE sy_Dataflow_bind_lb_1_rb__lt__eda2;
static VALUE sy_Dataflow_if_sp_bind_lb__8e0b;
static VALUE sy_Dataflow_many_end_0563;
static VALUE sy_Dataflow_n_eq_Result_d8be;
static VALUE sy_Dataflow_oldssanu_073d;
static VALUE sy_Dataflow_or_end_lp_b_33b4;
static VALUE sy_Dataflow_src_25d9;
static VALUE sy_Dataflow_src_dot_args_2df5;
static VALUE sy_Dataflow_src_dot_body_b7c1;
static VALUE sy_Dataflow_src_dot_clas_68f9;
static VALUE sy_Dataflow_src_dot_reac_9ae4;
static VALUE sy_Dataflow_src_dot_to_5e99;
static VALUE sy_Dataflow_src_dot_var_3a88;
static VALUE sy_Dataflow_src_dot_vars_2db1;
static VALUE sy_Dataflow_ssanum_lp_s_3920;
static VALUE sy_Dataflow_ssanums_dot__ae08;
VALUE Dataflow_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(13);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Object*/:; goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow__at_bnding_eq__b94a,1,bind2);it=rb_funcall(self,sy_Dataflow_src_dot_args_2df5,1,bind2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,3/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,5/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,5/*autovar*/));bind_aset(bind2,2,bind_aget(bind,6/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,5/*autovar*/,bind_aget(bind2,1));bind_aset(bind,6/*autovar*/,bind_aget(bind2,2)); } break1: ptr->pos=oldpos1;   it=bind_aget(bind,5/*autovar*/); bind_aset(bind,7/*var*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto pass3;
                   success4: *ptr=oldpass4;
                it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                bind_aset(bind2,1,bind_aget(bind,7/*var*/));it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__6099,1,bind2);bind_aset(bind,7/*var*/,bind_aget(bind2,1));it=rb_funcall(self,sy_Dataflow_Seq_lb_src_dot__6f68,1,bind2); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,8/*autovar*/);ptr->len=1;
                     it=Dataflow_traverse_item(self ); FAILTEST(pass5); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass2;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*body*/,it);
bind_aset(bind2,1,bind_aget(bind,10/*body*/));it=rb_funcall(self,sy_Dataflow_src_dot_body_b7c1,1,bind2);bind_aset(bind,10/*body*/,bind_aget(bind2,1));bind_aset(bind2,1,bind_aget(bind,10/*body*/));it=rb_funcall(self,sy_Dataflow_src_dot_reac_9ae4,1,bind2);bind_aset(bind,10/*body*/,bind_aget(bind2,1));it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); bind_aset(bind,11/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto fail;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*_result*/,it);

return it;
fail: return failobj; }
VALUE Dataflow_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow__at_changed_c681,1,bind2); bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Dataflow__lp_src_dot_ins_6a75,1,bind2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Dataflow__at_changed_b885,1,bind2);  it=Dataflow_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
bind_aset(bind2,1,bind_aget(bind,2/*clon*/));bind_aset(bind2,2,bind_aget(bind,1/*this*/));bind_aset(bind2,3,bind_aget(bind,3/*changed*/));bind_aset(bind2,4,bind_aget(bind,7/*key*/));bind_aset(bind2,5,bind_aget(bind,8/*val*/));it=rb_funcall(self,sy_Dataflow__lp_bind_lb_1_rb__ee3d,1,bind2);bind_aset(bind,2/*clon*/,bind_aget(bind2,1));bind_aset(bind,1/*this*/,bind_aget(bind2,2));bind_aset(bind,3/*changed*/,bind_aget(bind2,3));bind_aset(bind,7/*key*/,bind_aget(bind2,4));bind_aset(bind,8/*val*/,bind_aget(bind2,5));it=Qnil;if (ptr->pos<ptr->len) goto pass3;
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
                bind_aset(bind2,1,bind_aget(bind,3/*changed*/));bind_aset(bind2,2,bind_aget(bind,2/*clon*/));bind_aset(bind2,3,bind_aget(bind,0/*oldchanged*/));it=rb_funcall(self,sy_Dataflow_if_sp_bind_lb__8e0b,1,bind2);bind_aset(bind,3/*changed*/,bind_aget(bind2,1));bind_aset(bind,2/*clon*/,bind_aget(bind2,2));bind_aset(bind,0/*oldchanged*/,bind_aget(bind2,3)); bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Dataflow_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Dataflow_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dataflow__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dataflow_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
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
alt2_1:;  it=Dataflow_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dataflow__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
bind_aset(bind2,1,bind_aget(bind,5/*ar*/));bind_aset(bind2,2,bind_aget(bind,6/*it*/));it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__7b20,1,bind2);bind_aset(bind,5/*ar*/,bind_aget(bind2,1));bind_aset(bind,6/*it*/,bind_aget(bind2,2)); } break1: ptr->pos=oldpos3;   it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
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
alt3_1:;  it=Dataflow_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dataflow__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Dataflow_vars_in(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(18);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*ary*/));it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__eq__fe02,1,bind2);bind_aset(bind,0/*ary*/,bind_aget(bind2,1));int oldpos1;  while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); bind_aset(bind,2/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*ary*/));bind_aset(bind2,2,bind_aget(bind,2/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,0/*ary*/,bind_aget(bind2,1));bind_aset(bind,2/*autovar*/,bind_aget(bind2,2));it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                
;goto accept2;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);
;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
 break;
case 1/*Args*/:; int oldpos3=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dataflow_vars_in(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*ary*/));bind_aset(bind2,2,bind_aget(bind,4/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,0/*ary*/,bind_aget(bind2,1));bind_aset(bind,4/*autovar*/,bind_aget(bind2,2));it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                
;goto accept3;
alt2_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);
;goto accept3;
alt2_3: ptr->pos=oldpos3;goto break1;
 accept3:;
 break;
case 2/*Bind*/:; int oldpos4=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dataflow_vars_in(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*ary*/));bind_aset(bind2,2,bind_aget(bind,6/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,0/*ary*/,bind_aget(bind2,1));bind_aset(bind,6/*autovar*/,bind_aget(bind2,2));it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt3_2;
                   success3: *ptr=oldpass3;
                
;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);
;goto accept4;
alt3_3: ptr->pos=oldpos4;goto break1;
 accept4:;
 break;
case 3/*CAct*/:; int oldpos5=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,7/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); bind_aset(bind,8/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*ary*/));bind_aset(bind2,2,bind_aget(bind,8/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,0/*ary*/,bind_aget(bind2,1));bind_aset(bind,8/*autovar*/,bind_aget(bind2,2));it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt4_2;
                   success4: *ptr=oldpass4;
                
;goto accept5;
alt4_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);
;goto accept5;
alt4_3: ptr->pos=oldpos5;goto break1;
 accept5:;
 break;
case 4/*Global*/:; int oldpos6=ptr->pos;int cut5=0;
alt5_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); bind_aset(bind,10/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*ary*/));bind_aset(bind2,2,bind_aget(bind,10/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,0/*ary*/,bind_aget(bind2,1));bind_aset(bind,10/*autovar*/,bind_aget(bind2,2));it=rb_funcall(self,sy_Dataflow__at_marked_lt__59bb,1,bind2);it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt5_2;
                   success5: *ptr=oldpass5;
                
;goto accept6;
alt5_2: ptr->pos=oldpos6;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);
;goto accept6;
alt5_3: ptr->pos=oldpos6;goto break1;
 accept6:;
 break;
case 5/*Key*/:; int oldpos7=ptr->pos;int cut6=0;
alt6_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,11/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); bind_aset(bind,12/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*ary*/));bind_aset(bind2,2,bind_aget(bind,12/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,0/*ary*/,bind_aget(bind2,1));bind_aset(bind,12/*autovar*/,bind_aget(bind2,2));it=rb_funcall(self,sy_Dataflow__at_marked_lt__59bb,1,bind2);it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt6_2;
                   success6: *ptr=oldpass6;
                
;goto accept7;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);
;goto accept7;
alt6_3: ptr->pos=oldpos7;goto break1;
 accept7:;
 break;
case 6/*Local*/:; int oldpos8=ptr->pos;int cut7=0;
alt7_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,13/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); bind_aset(bind,14/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*ary*/));bind_aset(bind2,2,bind_aget(bind,14/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,0/*ary*/,bind_aget(bind2,1));bind_aset(bind,14/*autovar*/,bind_aget(bind2,2));it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt7_2;
                   success7: *ptr=oldpass7;
                
;goto accept8;
alt7_2: ptr->pos=oldpos8;  it=AmethystCore_anything(self ); FAILTEST(alt7_3);
;goto accept8;
alt7_3: ptr->pos=oldpos8;goto break1;
 accept8:;
 break;
case 7/*Result*/:; int oldpos9=ptr->pos;int cut8=0;
alt8_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,15/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); bind_aset(bind,16/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*ary*/));bind_aset(bind2,2,bind_aget(bind,16/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,0/*ary*/,bind_aget(bind2,1));bind_aset(bind,16/*autovar*/,bind_aget(bind2,2));it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt8_2;
                   success8: *ptr=oldpass8;
                
;goto accept9;
alt8_2: ptr->pos=oldpos9;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);
;goto accept9;
alt8_3: ptr->pos=oldpos9;goto break1;
 accept9:;
 break;
case 8/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); break;
} } break1: ptr->pos=oldpos1;   bind_aset(bind2,1,bind_aget(bind,0/*ary*/));it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb_,1,bind2);bind_aset(bind,0/*ary*/,bind_aget(bind2,1)); bind_aset(bind,17/*_result*/,it);

return it;
fail: return failobj; }
VALUE Dataflow_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(58);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,2/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,2/*autovar*/,bind_aget(bind2,2)); } break1: ptr->pos=oldpos1;   it=bind_aget(bind,1/*autovar*/); bind_aset(bind,3/*t*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*t*/));it=rb_funcall(self,sy_Dataflow_Act_lb_bind_7d8f,1,bind2);bind_aset(bind,3/*t*/,bind_aget(bind2,1)); bind_aset(bind,4/*act*/,it);
bind_aset(bind2,1,bind_aget(bind,4/*act*/));it=rb_funcall(self,sy_Dataflow__at_marked_lt__d910,1,bind2);bind_aset(bind,4/*act*/,bind_aget(bind2,1));bind_aset(bind2,1,bind_aget(bind,4/*act*/));it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__dbae,1,bind2);bind_aset(bind,4/*act*/,bind_aget(bind2,1)); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dataflow_vars_in(self ); FAILTEST(pass3); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*var*/,it);
bind_aset(bind2,1,bind_aget(bind,9/*var*/));bind_aset(bind2,2,bind_aget(bind,4/*act*/));it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__9da9,1,bind2);bind_aset(bind,9/*var*/,bind_aget(bind2,1));bind_aset(bind,4/*act*/,bind_aget(bind2,2)); bind_aset(bind,10/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 1/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,12/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos2;  while(1){oldpos2=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break2); bind_aset(bind,14/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,13/*autovar*/));bind_aset(bind2,2,bind_aget(bind,14/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,13/*autovar*/,bind_aget(bind2,1));bind_aset(bind,14/*autovar*/,bind_aget(bind2,2)); } break2: ptr->pos=oldpos2;   it=bind_aget(bind,13/*autovar*/); bind_aset(bind,3/*t*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*t*/));it=rb_funcall(self,sy_Dataflow_Apply_lb__ti__lp__753f,1,bind2);bind_aset(bind,3/*t*/,bind_aget(bind2,1)); bind_aset(bind,15/*app*/,it);
it=bind_aget(bind,15/*app*/); bind_aset(bind,16/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,16/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dataflow_vars_in(self ); FAILTEST(pass6); bind_aset(bind,9/*var*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto pass5;
                   success6: *ptr=oldpass6;
                it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass4;
                   success5: *ptr=oldpass5;
                bind_aset(bind2,1,bind_aget(bind,9/*var*/));it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__ce70,1,bind2);bind_aset(bind,9/*var*/,bind_aget(bind2,1));it=bind_aget(bind,15/*app*/); bind_aset(bind,18/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto fail;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,18/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 2/*Bind*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,19/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;  it=Dataflow_traverse(self ); FAILTEST(pass7); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,20/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_bind_end_6e13,1,bind2); bind_aset(bind,21/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto pass7;
                   success8: *ptr=oldpass8;
                it=bind_aget(bind,21/*autovar*/); bind_aset(bind,22/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto fail;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,22/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 3/*Local*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,23/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_ssanum_lp_s_3920,1,bind2); bind_aset(bind,24/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto fail;
                   success9: *ptr=oldpass9;
                it=bind_aget(bind,24/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 4/*Lookahead*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,25/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,25/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind2); bind_aset(bind,26/*old*/,it);
it=rb_ary_new3(0); bind_aset(bind,27/*autovar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break3); bind_aset(bind,28/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,27/*autovar*/));bind_aset(bind2,2,bind_aget(bind,28/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,27/*autovar*/,bind_aget(bind2,1));bind_aset(bind,28/*autovar*/,bind_aget(bind2,2)); } break3: ptr->pos=oldpos3;   it=bind_aget(bind,27/*autovar*/); bind_aset(bind,3/*t*/,it);
bind_aset(bind2,1,bind_aget(bind,26/*old*/));it=rb_funcall(self,sy_Dataflow__at_oldssan_e953,1,bind2);bind_aset(bind,26/*old*/,bind_aget(bind2,1));bind_aset(bind2,1,bind_aget(bind,3/*t*/));it=rb_funcall(self,sy_Dataflow_Lookahea_2972,1,bind2);bind_aset(bind,3/*t*/,bind_aget(bind2,1)); bind_aset(bind,29/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto fail;
                   success10: *ptr=oldpass10;
                it=bind_aget(bind,29/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 5/*Many*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,30/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,30/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow_ssanums_dot__ae08,1,bind2); bind_aset(bind,31/*prev*/,it);
it=rb_ary_new3(0); bind_aset(bind,32/*autovar*/,it);
int oldpos4;  while(1){oldpos4=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break4); bind_aset(bind,33/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,32/*autovar*/));bind_aset(bind2,2,bind_aget(bind,33/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,32/*autovar*/,bind_aget(bind2,1));bind_aset(bind,33/*autovar*/,bind_aget(bind2,2)); } break4: ptr->pos=oldpos4;   it=bind_aget(bind,32/*autovar*/); bind_aset(bind,3/*t*/,it);
bind_aset(bind2,1,bind_aget(bind,31/*prev*/));it=rb_funcall(self,sy_Dataflow_many_end_0563,1,bind2);bind_aset(bind,31/*prev*/,bind_aget(bind2,1));bind_aset(bind2,1,bind_aget(bind,3/*t*/));it=rb_funcall(self,sy_Dataflow_Many_dot_cre_2107,1,bind2);bind_aset(bind,3/*t*/,bind_aget(bind2,1)); bind_aset(bind,34/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto fail;
                   success11: *ptr=oldpass11;
                it=bind_aget(bind,34/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 6/*Or*/:; it=rb_ary_new3(0); bind_aset(bind,3/*t*/,it);
it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,35/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,35/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,36/*join*/,it);
it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind2); bind_aset(bind,26/*old*/,it);
int oldpos5;  while(1){oldpos5=ptr->pos; bind_aset(bind2,1,bind_aget(bind,26/*old*/));it=rb_funcall(self,sy_Dataflow__at_oldssan_37c2,1,bind2);bind_aset(bind,26/*old*/,bind_aget(bind2,1));  it=Dataflow_traverse_item(self ); FAILTEST(break5); bind_aset(bind,37/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*t*/));bind_aset(bind2,2,bind_aget(bind,37/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,3/*t*/,bind_aget(bind2,1));bind_aset(bind,37/*autovar*/,bind_aget(bind2,2));bind_aset(bind2,1,bind_aget(bind,36/*join*/));it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__eda2,1,bind2);bind_aset(bind,36/*join*/,bind_aget(bind2,1)); } break5: ptr->pos=oldpos5;   bind_aset(bind2,1,bind_aget(bind,36/*join*/));it=rb_funcall(self,sy_Dataflow_or_end_lp_b_33b4,1,bind2);bind_aset(bind,36/*join*/,bind_aget(bind2,1));bind_aset(bind2,1,bind_aget(bind,3/*t*/));it=rb_funcall(self,sy_Dataflow_Or_lb__ti_bind_d486,1,bind2);bind_aset(bind,3/*t*/,bind_aget(bind2,1)); bind_aset(bind,38/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto fail;
                   success12: *ptr=oldpass12;
                it=bind_aget(bind,38/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 7/*Pass*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,39/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,39/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow_src_dot_to_5e99,1,bind2); bind_aset(bind,40/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,40/*autovar*/);ptr->len=1;
                     it=Dataflow_traverse_item(self ); FAILTEST(pass14); bind_aset(bind,41/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto pass13;
                   success14: *ptr=oldpass14;
                it=bind_aget(bind,41/*autovar*/); bind_aset(bind,42/*to*/,it);
it=rb_funcall(self,sy_Dataflow_src_dot_var_3a88,1,bind2); bind_aset(bind,43/*autovar*/,it);
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,43/*autovar*/);ptr->len=1;
                     it=Dataflow_traverse_item(self ); FAILTEST(pass15); bind_aset(bind,44/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
                   goto success15;
                   pass15: *ptr=oldpass15; goto pass13;
                   success15: *ptr=oldpass15;
                it=bind_aget(bind,44/*autovar*/); bind_aset(bind,9/*var*/,it);
bind_aset(bind2,1,bind_aget(bind,9/*var*/));it=rb_funcall(self,sy_Dataflow__at_marked_lt__f9b9,1,bind2);bind_aset(bind,9/*var*/,bind_aget(bind2,1));bind_aset(bind2,1,bind_aget(bind,42/*to*/));bind_aset(bind2,2,bind_aget(bind,9/*var*/));it=rb_funcall(self,sy_Dataflow_Pass_dot_cre_5b5c,1,bind2);bind_aset(bind,42/*to*/,bind_aget(bind2,1));bind_aset(bind,9/*var*/,bind_aget(bind2,2)); bind_aset(bind,45/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13;
                   goto success13;
                   pass13: *ptr=oldpass13; goto fail;
                   success13: *ptr=oldpass13;
                it=bind_aget(bind,45/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 8/*Result*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,46/*autovar*/,it);
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,46/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow_src_dot_vars_2db1,1,bind2); bind_aset(bind,47/*autovar*/,it);
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,47/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass17); bind_aset(bind,48/*autovar*/,it);
cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,48/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,49/*autovar*/,it);
int oldpos6;  while(1){oldpos6=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break6); bind_aset(bind,50/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,49/*autovar*/));bind_aset(bind2,2,bind_aget(bind,50/*autovar*/));it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);bind_aset(bind,49/*autovar*/,bind_aget(bind2,1));bind_aset(bind,50/*autovar*/,bind_aget(bind2,2)); } break6: ptr->pos=oldpos6;   it=bind_aget(bind,49/*autovar*/); bind_aset(bind,9/*var*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass18;
                   goto success18;
                   pass18: *ptr=oldpass18; goto pass17;
                   success18: *ptr=oldpass18;
                it=Qnil;if (ptr->pos<ptr->len) goto pass17;
                   goto success17;
                   pass17: *ptr=oldpass17; goto pass16;
                   success17: *ptr=oldpass17;
                bind_aset(bind2,1,bind_aget(bind,9/*var*/));it=rb_funcall(self,sy_Dataflow_n_eq_Result_d8be,1,bind2);bind_aset(bind,9/*var*/,bind_aget(bind2,1)); bind_aset(bind,51/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass16;
                   goto success16;
                   pass16: *ptr=oldpass16; goto fail;
                   success16: *ptr=oldpass16;
                it=bind_aget(bind,51/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 9/*Switch*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,52/*autovar*/,it);
cstruct oldpass19=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,52/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,53/*alts*/,it);
it=rb_ary_new3(0); bind_aset(bind,36/*join*/,it);
it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind2); bind_aset(bind,26/*old*/,it);
int oldpos7;  while(1){oldpos7=ptr->pos; bind_aset(bind2,1,bind_aget(bind,26/*old*/));it=rb_funcall(self,sy_Dataflow__at_oldssan_37c2,1,bind2);bind_aset(bind,26/*old*/,bind_aget(bind2,1));  it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,54/*autovar*/,it);
cstruct oldpass20=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,54/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass20); bind_aset(bind,55/*pred*/,it);
  it=Dataflow_traverse_item(self ); FAILTEST(pass20); bind_aset(bind,56/*a*/,it);
bind_aset(bind2,1,bind_aget(bind,53/*alts*/));bind_aset(bind2,2,bind_aget(bind,55/*pred*/));bind_aset(bind2,3,bind_aget(bind,56/*a*/));it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__c37a,1,bind2);bind_aset(bind,53/*alts*/,bind_aget(bind2,1));bind_aset(bind,55/*pred*/,bind_aget(bind2,2));bind_aset(bind,56/*a*/,bind_aget(bind2,3));it=Qnil;if (ptr->pos<ptr->len) goto pass20;
                   goto success20;
                   pass20: *ptr=oldpass20; goto break7;
                   success20: *ptr=oldpass20;
                bind_aset(bind2,1,bind_aget(bind,36/*join*/));it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__eda2,1,bind2);bind_aset(bind,36/*join*/,bind_aget(bind2,1)); } break7: ptr->pos=oldpos7;   bind_aset(bind2,1,bind_aget(bind,36/*join*/));it=rb_funcall(self,sy_Dataflow_or_end_lp_b_33b4,1,bind2);bind_aset(bind,36/*join*/,bind_aget(bind2,1));bind_aset(bind2,1,bind_aget(bind,53/*alts*/));it=rb_funcall(self,sy_Dataflow_src_dot_clas_68f9,1,bind2);bind_aset(bind,53/*alts*/,bind_aget(bind2,1)); bind_aset(bind,57/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass19;
                   goto success19;
                   pass19: *ptr=oldpass19; goto fail;
                   success19: *ptr=oldpass19;
                it=bind_aget(bind,57/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 10/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }VALUE cls_Dead_Code_Deleter3;
VALUE AmethystCore_anything(VALUE self );
VALUE Dead_Code_Deleter3_root(VALUE self );
VALUE Dead_Code_Deleter3_traverse(VALUE self );
VALUE Dead_Code_Deleter3_traverse_item(VALUE self );
VALUE Dead_Code_Deleter3_visit(VALUE self );
VALUE switchhash_Dead_Code_Deleter3_1;
VALUE switchhash_Dead_Code_Deleter3_2;
VALUE switchhash_Dead_Code_Deleter3_3;
static VALUE sy_Dead_Code_Deleter3__at_bounded_6bb2;
static VALUE sy_Dead_Code_Deleter3__at_bounded_7c82;
static VALUE sy_Dead_Code_Deleter3__at_changed_5352;
static VALUE sy_Dead_Code_Deleter3__at_changed_b885;
static VALUE sy_Dead_Code_Deleter3__at_changed_c681;
static VALUE sy_Dead_Code_Deleter3__at_reachab_005c;
static VALUE sy_Dead_Code_Deleter3__at_reachab_725b;
static VALUE sy_Dead_Code_Deleter3__at_reachab_8588;
static VALUE sy_Dead_Code_Deleter3__lp_;
static VALUE sy_Dead_Code_Deleter3__lp_bind_lb_1_rb__ee3d;
static VALUE sy_Dead_Code_Deleter3__lp_src_dot_ins_6a75;
static VALUE sy_Dead_Code_Deleter3_bind_lb_1_rb__lt__7b20;
static VALUE sy_Dead_Code_Deleter3_if_sp_bind_lb__8e0b;
static VALUE sy_Dead_Code_Deleter3_src_25d9;
static VALUE sy_Dead_Code_Deleter3_src_dot_reac_cd39;
VALUE Dead_Code_Deleter3_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Dead_Code_Deleter3_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Object*/:; goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_8588,1,bind2);it=rb_funcall(self,sy_Dead_Code_Deleter3_src_dot_reac_cd39,1,bind2);  it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto fail;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_c681,1,bind2); bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2); bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_src_dot_ins_6a75,1,bind2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_b885,1,bind2);  it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
bind_aset(bind2,1,bind_aget(bind,2/*clon*/));bind_aset(bind2,2,bind_aget(bind,1/*this*/));bind_aset(bind2,3,bind_aget(bind,3/*changed*/));bind_aset(bind2,4,bind_aget(bind,7/*key*/));bind_aset(bind2,5,bind_aget(bind,8/*val*/));it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_bind_lb_1_rb__ee3d,1,bind2);bind_aset(bind,2/*clon*/,bind_aget(bind2,1));bind_aset(bind,1/*this*/,bind_aget(bind2,2));bind_aset(bind,3/*changed*/,bind_aget(bind2,3));bind_aset(bind,7/*key*/,bind_aget(bind2,4));bind_aset(bind,8/*val*/,bind_aget(bind2,5));it=Qnil;if (ptr->pos<ptr->len) goto pass3;
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
                bind_aset(bind2,1,bind_aget(bind,3/*changed*/));bind_aset(bind2,2,bind_aget(bind,2/*clon*/));bind_aset(bind2,3,bind_aget(bind,0/*oldchanged*/));it=rb_funcall(self,sy_Dead_Code_Deleter3_if_sp_bind_lb__8e0b,1,bind2);bind_aset(bind,3/*changed*/,bind_aget(bind2,1));bind_aset(bind,2/*clon*/,bind_aget(bind2,2));bind_aset(bind,0/*oldchanged*/,bind_aget(bind2,3)); bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Dead_Code_Deleter3_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
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
alt2_1:;  it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
bind_aset(bind2,1,bind_aget(bind,5/*ar*/));bind_aset(bind2,2,bind_aget(bind,6/*it*/));it=rb_funcall(self,sy_Dead_Code_Deleter3_bind_lb_1_rb__lt__7b20,1,bind2);bind_aset(bind,5/*ar*/,bind_aget(bind2,1));bind_aset(bind,6/*it*/,bind_aget(bind2,2)); } break1: ptr->pos=oldpos3;   it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
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
alt3_1:;  it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Dead_Code_Deleter3_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Result*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2); bind_aset(bind,1/*this*/,it);
ptr->pos=ptr->len;it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,bind_aget(bind,1/*this*/));it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_,1,bind2);bind_aset(bind,1/*this*/,bind_aget(bind2,1)); bind_aset(bind,2/*_result*/,it);
 break;
case 3/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2); bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto fail;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,4/*autovar*/); bind_aset(bind,2/*_result*/,it);
 break;
case 4/*Bind*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2);it=rb_funcall(self,sy_Dead_Code_Deleter3__at_bounded_6bb2,1,bind2);  it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dead_Code_Deleter3__at_bounded_7c82,1,bind2);it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_005c,1,bind2); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto pass3;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto fail;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,8/*autovar*/); bind_aset(bind,2/*_result*/,it);
 break;
case 5/*Local*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2); bind_aset(bind,1/*this*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto fail;
                   success5: *ptr=oldpass5;
                bind_aset(bind2,1,bind_aget(bind,1/*this*/));it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_725b,1,bind2);bind_aset(bind,1/*this*/,bind_aget(bind2,1)); bind_aset(bind,2/*_result*/,it);
 break;
case 6/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }VALUE cls_Forget_SSA;
VALUE AmethystCore_anything(VALUE self );
VALUE Forget_SSA_root(VALUE self );
VALUE Forget_SSA_traverse(VALUE self );
VALUE Forget_SSA_traverse_item(VALUE self );
VALUE Forget_SSA_visit(VALUE self );
VALUE switchhash_Forget_SSA_1;
VALUE switchhash_Forget_SSA_2;
VALUE switchhash_Forget_SSA_3;
static VALUE sy_Forget_SSA__at_changed_5352;
static VALUE sy_Forget_SSA__at_changed_b885;
static VALUE sy_Forget_SSA__at_changed_c681;
static VALUE sy_Forget_SSA__lp_bind_lb_1_rb__ee3d;
static VALUE sy_Forget_SSA__lp_src_dot_ins_6a75;
static VALUE sy_Forget_SSA_bind_lb_1_rb__lt__7b20;
static VALUE sy_Forget_SSA_if_sp_bind_lb__8e0b;
static VALUE sy_Forget_SSA_src_25d9;
static VALUE sy_Forget_SSA_src_dot_unss_5845;
VALUE Forget_SSA_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Forget_SSA_src_25d9,1,bind2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Object*/:; goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Forget_SSA_traverse(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto fail;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE Forget_SSA_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Forget_SSA__at_changed_c681,1,bind2); bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Forget_SSA_src_25d9,1,bind2); bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Forget_SSA__lp_src_dot_ins_6a75,1,bind2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Forget_SSA__at_changed_b885,1,bind2);  it=Forget_SSA_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
bind_aset(bind2,1,bind_aget(bind,2/*clon*/));bind_aset(bind2,2,bind_aget(bind,1/*this*/));bind_aset(bind2,3,bind_aget(bind,3/*changed*/));bind_aset(bind2,4,bind_aget(bind,7/*key*/));bind_aset(bind2,5,bind_aget(bind,8/*val*/));it=rb_funcall(self,sy_Forget_SSA__lp_bind_lb_1_rb__ee3d,1,bind2);bind_aset(bind,2/*clon*/,bind_aget(bind2,1));bind_aset(bind,1/*this*/,bind_aget(bind2,2));bind_aset(bind,3/*changed*/,bind_aget(bind2,3));bind_aset(bind,7/*key*/,bind_aget(bind2,4));bind_aset(bind,8/*val*/,bind_aget(bind2,5));it=Qnil;if (ptr->pos<ptr->len) goto pass3;
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
                bind_aset(bind2,1,bind_aget(bind,3/*changed*/));bind_aset(bind2,2,bind_aget(bind,2/*clon*/));bind_aset(bind2,3,bind_aget(bind,0/*oldchanged*/));it=rb_funcall(self,sy_Forget_SSA_if_sp_bind_lb__8e0b,1,bind2);bind_aset(bind,3/*changed*/,bind_aget(bind2,1));bind_aset(bind,2/*clon*/,bind_aget(bind2,2));bind_aset(bind,0/*oldchanged*/,bind_aget(bind2,3)); bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Forget_SSA_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Forget_SSA_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Forget_SSA__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Forget_SSA_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
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
alt2_1:;  it=Forget_SSA_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Forget_SSA__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Forget_SSA_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
bind_aset(bind2,1,bind_aget(bind,5/*ar*/));bind_aset(bind2,2,bind_aget(bind,6/*it*/));it=rb_funcall(self,sy_Forget_SSA_bind_lb_1_rb__lt__7b20,1,bind2);bind_aset(bind,5/*ar*/,bind_aget(bind2,1));bind_aset(bind,6/*it*/,bind_aget(bind2,2)); } break1: ptr->pos=oldpos3;   it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
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
alt3_1:;  it=Forget_SSA_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Forget_SSA__at_changed_5352,1,bind2);it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Forget_SSA_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Local*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Forget_SSA_src_dot_unss_5845,1,bind2); bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_dataflow_ssa_c(){ 
 cls_Dataflow=rb_define_class("Dataflow",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Dataflow_1);;
switchhash_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Pass\nnext h[k]=8 if k<=Result\nnext h[k]=9 if k<=Switch\nnext h[k]=10 if k<=Object\n}");rb_global_variable(&switchhash_Dataflow_2);;
switchhash_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Args\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Global\nnext h[k]=5 if k<=Key\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Object\n}");rb_global_variable(&switchhash_Dataflow_3);;
switchhash_Dataflow_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Dataflow_4);;
sy_Dataflow_Act_lb_bind_7d8f=rb_intern("Dataflow_Act_lb_bind_7d8f");
sy_Dataflow_Apply_lb__ti__lp__753f=rb_intern("Dataflow_Apply_lb__ti__lp__753f");
sy_Dataflow_Lookahea_2972=rb_intern("Dataflow_Lookahea_2972");
sy_Dataflow_Many_dot_cre_2107=rb_intern("Dataflow_Many_dot_cre_2107");
sy_Dataflow_Or_lb__ti_bind_d486=rb_intern("Dataflow_Or_lb__ti_bind_d486");
sy_Dataflow_Pass_dot_cre_5b5c=rb_intern("Dataflow_Pass_dot_cre_5b5c");
sy_Dataflow_Seq_lb_src_dot__6f68=rb_intern("Dataflow_Seq_lb_src_dot__6f68");
sy_Dataflow__append_lp__d113=rb_intern("Dataflow__append_lp__d113");
sy_Dataflow__at_bnding_eq__b94a=rb_intern("Dataflow__at_bnding_eq__b94a");
sy_Dataflow__at_changed_5352=rb_intern("Dataflow__at_changed_5352");
sy_Dataflow__at_changed_b885=rb_intern("Dataflow__at_changed_b885");
sy_Dataflow__at_changed_c681=rb_intern("Dataflow__at_changed_c681");
sy_Dataflow__at_marked_lt__59bb=rb_intern("Dataflow__at_marked_lt__59bb");
sy_Dataflow__at_marked_lt__d910=rb_intern("Dataflow__at_marked_lt__d910");
sy_Dataflow__at_marked_lt__f9b9=rb_intern("Dataflow__at_marked_lt__f9b9");
sy_Dataflow__at_oldssan_37c2=rb_intern("Dataflow__at_oldssan_37c2");
sy_Dataflow__at_oldssan_e953=rb_intern("Dataflow__at_oldssan_e953");
sy_Dataflow__lp_bind_lb_1_rb__ee3d=rb_intern("Dataflow__lp_bind_lb_1_rb__ee3d");
sy_Dataflow__lp_src_dot_ins_6a75=rb_intern("Dataflow__lp_src_dot_ins_6a75");
sy_Dataflow_bind_end_6e13=rb_intern("Dataflow_bind_end_6e13");
sy_Dataflow_bind_lb_1_rb_=rb_intern("Dataflow_bind_lb_1_rb_");
sy_Dataflow_bind_lb_1_rb__dot__6099=rb_intern("Dataflow_bind_lb_1_rb__dot__6099");
sy_Dataflow_bind_lb_1_rb__dot__9da9=rb_intern("Dataflow_bind_lb_1_rb__dot__9da9");
sy_Dataflow_bind_lb_1_rb__dot__ce70=rb_intern("Dataflow_bind_lb_1_rb__dot__ce70");
sy_Dataflow_bind_lb_1_rb__dot__dbae=rb_intern("Dataflow_bind_lb_1_rb__dot__dbae");
sy_Dataflow_bind_lb_1_rb__eq__fe02=rb_intern("Dataflow_bind_lb_1_rb__eq__fe02");
sy_Dataflow_bind_lb_1_rb__lt__7b20=rb_intern("Dataflow_bind_lb_1_rb__lt__7b20");
sy_Dataflow_bind_lb_1_rb__lt__c37a=rb_intern("Dataflow_bind_lb_1_rb__lt__c37a");
sy_Dataflow_bind_lb_1_rb__lt__eda2=rb_intern("Dataflow_bind_lb_1_rb__lt__eda2");
sy_Dataflow_if_sp_bind_lb__8e0b=rb_intern("Dataflow_if_sp_bind_lb__8e0b");
sy_Dataflow_many_end_0563=rb_intern("Dataflow_many_end_0563");
sy_Dataflow_n_eq_Result_d8be=rb_intern("Dataflow_n_eq_Result_d8be");
sy_Dataflow_oldssanu_073d=rb_intern("Dataflow_oldssanu_073d");
sy_Dataflow_or_end_lp_b_33b4=rb_intern("Dataflow_or_end_lp_b_33b4");
sy_Dataflow_src_25d9=rb_intern("Dataflow_src_25d9");
sy_Dataflow_src_dot_args_2df5=rb_intern("Dataflow_src_dot_args_2df5");
sy_Dataflow_src_dot_body_b7c1=rb_intern("Dataflow_src_dot_body_b7c1");
sy_Dataflow_src_dot_clas_68f9=rb_intern("Dataflow_src_dot_clas_68f9");
sy_Dataflow_src_dot_reac_9ae4=rb_intern("Dataflow_src_dot_reac_9ae4");
sy_Dataflow_src_dot_to_5e99=rb_intern("Dataflow_src_dot_to_5e99");
sy_Dataflow_src_dot_var_3a88=rb_intern("Dataflow_src_dot_var_3a88");
sy_Dataflow_src_dot_vars_2db1=rb_intern("Dataflow_src_dot_vars_2db1");
sy_Dataflow_ssanum_lp_s_3920=rb_intern("Dataflow_ssanum_lp_s_3920");
sy_Dataflow_ssanums_dot__ae08=rb_intern("Dataflow_ssanums_dot__ae08");
                    rb_define_method(cls_Dataflow,"root",Dataflow_root,0);
rb_define_method(cls_Dataflow,"traverse",Dataflow_traverse,0);
rb_define_method(cls_Dataflow,"traverse_item",Dataflow_traverse_item,0);
rb_define_method(cls_Dataflow,"vars_in",Dataflow_vars_in,0);
rb_define_method(cls_Dataflow,"visit",Dataflow_visit,0);
                   
 cls_Dead_Code_Deleter3=rb_define_class("Dead_Code_Deleter3",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Dead_Code_Deleter3_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Dead_Code_Deleter3_1);;
switchhash_Dead_Code_Deleter3_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Result\nnext h[k]=3 if k<=Apply\nnext h[k]=4 if k<=Bind\nnext h[k]=5 if k<=Local\nnext h[k]=6 if k<=Object\n}");rb_global_variable(&switchhash_Dead_Code_Deleter3_2);;
switchhash_Dead_Code_Deleter3_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Dead_Code_Deleter3_3);;
sy_Dead_Code_Deleter3__at_bounded_6bb2=rb_intern("Dead_Code_Deleter3__at_bounded_6bb2");
sy_Dead_Code_Deleter3__at_bounded_7c82=rb_intern("Dead_Code_Deleter3__at_bounded_7c82");
sy_Dead_Code_Deleter3__at_changed_5352=rb_intern("Dead_Code_Deleter3__at_changed_5352");
sy_Dead_Code_Deleter3__at_changed_b885=rb_intern("Dead_Code_Deleter3__at_changed_b885");
sy_Dead_Code_Deleter3__at_changed_c681=rb_intern("Dead_Code_Deleter3__at_changed_c681");
sy_Dead_Code_Deleter3__at_reachab_005c=rb_intern("Dead_Code_Deleter3__at_reachab_005c");
sy_Dead_Code_Deleter3__at_reachab_725b=rb_intern("Dead_Code_Deleter3__at_reachab_725b");
sy_Dead_Code_Deleter3__at_reachab_8588=rb_intern("Dead_Code_Deleter3__at_reachab_8588");
sy_Dead_Code_Deleter3__lp_=rb_intern("Dead_Code_Deleter3__lp_");
sy_Dead_Code_Deleter3__lp_bind_lb_1_rb__ee3d=rb_intern("Dead_Code_Deleter3__lp_bind_lb_1_rb__ee3d");
sy_Dead_Code_Deleter3__lp_src_dot_ins_6a75=rb_intern("Dead_Code_Deleter3__lp_src_dot_ins_6a75");
sy_Dead_Code_Deleter3_bind_lb_1_rb__lt__7b20=rb_intern("Dead_Code_Deleter3_bind_lb_1_rb__lt__7b20");
sy_Dead_Code_Deleter3_if_sp_bind_lb__8e0b=rb_intern("Dead_Code_Deleter3_if_sp_bind_lb__8e0b");
sy_Dead_Code_Deleter3_src_25d9=rb_intern("Dead_Code_Deleter3_src_25d9");
sy_Dead_Code_Deleter3_src_dot_reac_cd39=rb_intern("Dead_Code_Deleter3_src_dot_reac_cd39");
                    rb_define_method(cls_Dead_Code_Deleter3,"root",Dead_Code_Deleter3_root,0);
rb_define_method(cls_Dead_Code_Deleter3,"traverse",Dead_Code_Deleter3_traverse,0);
rb_define_method(cls_Dead_Code_Deleter3,"traverse_item",Dead_Code_Deleter3_traverse_item,0);
rb_define_method(cls_Dead_Code_Deleter3,"visit",Dead_Code_Deleter3_visit,0);
                   
 cls_Forget_SSA=rb_define_class("Forget_SSA",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Forget_SSA_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Forget_SSA_1);;
switchhash_Forget_SSA_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Forget_SSA_2);;
switchhash_Forget_SSA_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Forget_SSA_3);;
sy_Forget_SSA__at_changed_5352=rb_intern("Forget_SSA__at_changed_5352");
sy_Forget_SSA__at_changed_b885=rb_intern("Forget_SSA__at_changed_b885");
sy_Forget_SSA__at_changed_c681=rb_intern("Forget_SSA__at_changed_c681");
sy_Forget_SSA__lp_bind_lb_1_rb__ee3d=rb_intern("Forget_SSA__lp_bind_lb_1_rb__ee3d");
sy_Forget_SSA__lp_src_dot_ins_6a75=rb_intern("Forget_SSA__lp_src_dot_ins_6a75");
sy_Forget_SSA_bind_lb_1_rb__lt__7b20=rb_intern("Forget_SSA_bind_lb_1_rb__lt__7b20");
sy_Forget_SSA_if_sp_bind_lb__8e0b=rb_intern("Forget_SSA_if_sp_bind_lb__8e0b");
sy_Forget_SSA_src_25d9=rb_intern("Forget_SSA_src_25d9");
sy_Forget_SSA_src_dot_unss_5845=rb_intern("Forget_SSA_src_dot_unss_5845");
                    rb_define_method(cls_Forget_SSA,"root",Forget_SSA_root,0);
rb_define_method(cls_Forget_SSA,"traverse",Forget_SSA_traverse,0);
rb_define_method(cls_Forget_SSA,"traverse_item",Forget_SSA_traverse_item,0);
rb_define_method(cls_Forget_SSA,"visit",Forget_SSA_visit,0);
                    rb_eval_string("testversiondataflow_ssa('abed0f5882c4ef32d4fc037198fa3fe3')");}
