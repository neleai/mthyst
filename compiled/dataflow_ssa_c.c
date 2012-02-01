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
static VALUE sy_Dataflow_Act_lb_bind_1a17;
static VALUE sy_Dataflow_Apply_lb__ti__lp__43fb;
static VALUE sy_Dataflow_Lookahea_20ca;
static VALUE sy_Dataflow_Many_dot_cre_9111;
static VALUE sy_Dataflow_Or_lb__ti_bind_ffe5;
static VALUE sy_Dataflow_Pass_dot_cre_fa0a;
static VALUE sy_Dataflow_Seq_lb_src_dot__6f68;
static VALUE sy_Dataflow_Switch_C_a76e;
static VALUE sy_Dataflow_Switch_C_c009;
static VALUE sy_Dataflow__append_lp__0605;
static VALUE sy_Dataflow__append_lp__0860;
static VALUE sy_Dataflow__append_lp__0eeb;
static VALUE sy_Dataflow__append_lp__29a3;
static VALUE sy_Dataflow__append_lp__2f87;
static VALUE sy_Dataflow__append_lp__4297;
static VALUE sy_Dataflow__append_lp__473a;
static VALUE sy_Dataflow__append_lp__4b67;
static VALUE sy_Dataflow__append_lp__66a2;
static VALUE sy_Dataflow__append_lp__6f56;
static VALUE sy_Dataflow__append_lp__b2a5;
static VALUE sy_Dataflow__append_lp__b494;
static VALUE sy_Dataflow__append_lp__b601;
static VALUE sy_Dataflow__append_lp__d113;
static VALUE sy_Dataflow__append_lp__f794;
static VALUE sy_Dataflow__at_bnding_eq__b94a;
static VALUE sy_Dataflow__at_changed_5352;
static VALUE sy_Dataflow__at_changed_b885;
static VALUE sy_Dataflow__at_changed_c681;
static VALUE sy_Dataflow__at_marked_lt__3ec2;
static VALUE sy_Dataflow__at_marked_lt__59bb;
static VALUE sy_Dataflow__at_marked_lt__765b;
static VALUE sy_Dataflow__at_oldssan_28ff;
static VALUE sy_Dataflow__at_oldssan_5ad9;
static VALUE sy_Dataflow__lp_bind_lb_2_rb__6693;
static VALUE sy_Dataflow__lp_src_dot_ins_6a75;
static VALUE sy_Dataflow_bind_end_6e13;
static VALUE sy_Dataflow_bind_lb_0_rb_;
static VALUE sy_Dataflow_bind_lb_0_rb__eq__943e;
static VALUE sy_Dataflow_bind_lb_36_rb__21ca;
static VALUE sy_Dataflow_bind_lb_4_rb__dot__c19e;
static VALUE sy_Dataflow_bind_lb_53_rb__04dc;
static VALUE sy_Dataflow_bind_lb_5_rb__lt__1671;
static VALUE sy_Dataflow_bind_lb_7_rb__dot__abd8;
static VALUE sy_Dataflow_bind_lb_9_rb__dot__9ffa;
static VALUE sy_Dataflow_bind_lb_9_rb__dot__b1a9;
static VALUE sy_Dataflow_if_sp_bind_lb__f1e9;
static VALUE sy_Dataflow_many_end_a53b;
static VALUE sy_Dataflow_n_eq_Result_fb46;
static VALUE sy_Dataflow_oldssanu_073d;
static VALUE sy_Dataflow_or_end_lp_b_7477;
static VALUE sy_Dataflow_src_25d9;
static VALUE sy_Dataflow_src_dot_args_2df5;
static VALUE sy_Dataflow_src_dot_body_65c9;
static VALUE sy_Dataflow_src_dot_reac_3fc5;
static VALUE sy_Dataflow_src_dot_to_5e99;
static VALUE sy_Dataflow_src_dot_var_3a88;
static VALUE sy_Dataflow_src_dot_vars_2db1;
static VALUE sy_Dataflow_ssanum_lp_s_3920;
static VALUE sy_Dataflow_ssanums_dot__ae08;
VALUE Dataflow_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Object*/:; goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow__at_bnding_eq__b94a,1,bind); it=rb_funcall(self,sy_Dataflow_src_dot_args_2df5,1,bind);  bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,3/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,5/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__6f56,1,bind);  } break1: ptr->pos=oldpos1;   it=bind_aget(bind,5/*autovar*/); bind_aset(bind,7/*var*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto pass3;
                   success4: *ptr=oldpass4;
                it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Dataflow_bind_lb_7_rb__dot__abd8,1,bind); it=rb_funcall(self,sy_Dataflow_Seq_lb_src_dot__6f68,1,bind);  bind_aset(bind,8/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,8/*autovar*/);ptr->len=1;
                     it=Dataflow_traverse_item(self ); FAILTEST(pass5); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass2;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*body*/,it);
it=rb_funcall(self,sy_Dataflow_src_dot_body_65c9,1,bind); it=rb_funcall(self,sy_Dataflow_src_dot_reac_3fc5,1,bind); it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,11/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto fail;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*_result*/,it);

return it;
fail: return failobj; }
VALUE Dataflow_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Dataflow__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Dataflow__at_changed_b885,1,bind);   it=Dataflow_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Dataflow__lp_bind_lb_2_rb__6693,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass3;
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
                it=rb_funcall(self,sy_Dataflow_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Dataflow_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Dataflow_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dataflow__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
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
it=rb_funcall(self,sy_Dataflow__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_Dataflow_bind_lb_5_rb__lt__1671,1,bind);  } break1: ptr->pos=oldpos3;   it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
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
it=rb_funcall(self,sy_Dataflow__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Dataflow_vars_in(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(18);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
it=rb_funcall(self,sy_Dataflow_bind_lb_0_rb__eq__943e,1,bind); int oldpos1;  while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__29a3,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass1;
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
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dataflow_vars_in(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__b2a5,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass2;
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
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dataflow_vars_in(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__4297,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass3;
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
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__0eeb,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass4;
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
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__b494,1,bind); it=rb_funcall(self,sy_Dataflow__at_marked_lt__59bb,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass5;
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
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__66a2,1,bind); it=rb_funcall(self,sy_Dataflow__at_marked_lt__59bb,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass6;
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
alt7_1:;  it=AmethystCore_anything(self ); FAILTEST(alt7_2); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__4b67,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass7;
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
alt8_1:;  it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__0605,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass8;
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
} } break1: ptr->pos=oldpos1;   it=rb_funcall(self,sy_Dataflow_bind_lb_0_rb_,1,bind);  bind_aset(bind,17/*_result*/,it);

return it;
fail: return failobj; }
VALUE Dataflow_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(61);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind);  } break1: ptr->pos=oldpos1;   it=bind_aget(bind,1/*autovar*/); bind_aset(bind,3/*t*/,it);
it=rb_funcall(self,sy_Dataflow_Act_lb_bind_1a17,1,bind);  bind_aset(bind,4/*act*/,it);
it=rb_funcall(self,sy_Dataflow__at_marked_lt__765b,1,bind); it=rb_funcall(self,sy_Dataflow_bind_lb_4_rb__dot__c19e,1,bind);  bind_aset(bind,5/*autovar*/,it);
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
it=rb_funcall(self,sy_Dataflow_bind_lb_9_rb__dot__b1a9,1,bind);  bind_aset(bind,10/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 1/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos2;  while(1){oldpos2=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break2); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__473a,1,bind);  } break2: ptr->pos=oldpos2;   it=bind_aget(bind,13/*autovar*/); bind_aset(bind,3/*t*/,it);
it=rb_funcall(self,sy_Dataflow_Apply_lb__ti__lp__43fb,1,bind);  bind_aset(bind,15/*app*/,it);
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
                it=rb_funcall(self,sy_Dataflow_bind_lb_9_rb__dot__9ffa,1,bind); it=bind_aget(bind,15/*app*/); bind_aset(bind,18/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto fail;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,18/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 2/*Bind*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;  it=Dataflow_traverse(self ); FAILTEST(pass7); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,20/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_bind_end_6e13,1,bind);  bind_aset(bind,21/*autovar*/,it);
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
case 3/*Local*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,23/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_ssanum_lp_s_3920,1,bind);  bind_aset(bind,24/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto fail;
                   success9: *ptr=oldpass9;
                it=bind_aget(bind,24/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 4/*Lookahead*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,25/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,25/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind);  bind_aset(bind,26/*old*/,it);
it=rb_ary_new3(0); bind_aset(bind,27/*autovar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break3); bind_aset(bind,28/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__0860,1,bind);  } break3: ptr->pos=oldpos3;   it=bind_aget(bind,27/*autovar*/); bind_aset(bind,3/*t*/,it);
it=rb_funcall(self,sy_Dataflow__at_oldssan_5ad9,1,bind); it=rb_funcall(self,sy_Dataflow_Lookahea_20ca,1,bind);  bind_aset(bind,29/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto fail;
                   success10: *ptr=oldpass10;
                it=bind_aget(bind,29/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 5/*Many*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,30/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,30/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow_ssanums_dot__ae08,1,bind);  bind_aset(bind,31/*prev*/,it);
it=rb_ary_new3(0); bind_aset(bind,32/*autovar*/,it);
int oldpos4;  while(1){oldpos4=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break4); bind_aset(bind,33/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__b601,1,bind);  } break4: ptr->pos=oldpos4;   it=bind_aget(bind,32/*autovar*/); bind_aset(bind,3/*t*/,it);
it=rb_funcall(self,sy_Dataflow_many_end_a53b,1,bind); it=rb_funcall(self,sy_Dataflow_Many_dot_cre_9111,1,bind);  bind_aset(bind,34/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto fail;
                   success11: *ptr=oldpass11;
                it=bind_aget(bind,34/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 6/*Or*/:; it=rb_ary_new3(0); bind_aset(bind,3/*t*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,35/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,35/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,36/*join*/,it);
it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind);  bind_aset(bind,26/*old*/,it);
int oldpos5;  while(1){oldpos5=ptr->pos; it=rb_funcall(self,sy_Dataflow__at_oldssan_28ff,1,bind);   it=Dataflow_traverse_item(self ); FAILTEST(break5); bind_aset(bind,37/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__2f87,1,bind); it=rb_funcall(self,sy_Dataflow_bind_lb_36_rb__21ca,1,bind);  } break5: ptr->pos=oldpos5;   it=rb_funcall(self,sy_Dataflow_or_end_lp_b_7477,1,bind); it=rb_funcall(self,sy_Dataflow_Or_lb__ti_bind_ffe5,1,bind);  bind_aset(bind,38/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto fail;
                   success12: *ptr=oldpass12;
                it=bind_aget(bind,38/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 7/*Pass*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,39/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,39/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow_src_dot_to_5e99,1,bind);  bind_aset(bind,40/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,40/*autovar*/);ptr->len=1;
                     it=Dataflow_traverse_item(self ); FAILTEST(pass14); bind_aset(bind,41/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto pass13;
                   success14: *ptr=oldpass14;
                it=bind_aget(bind,41/*autovar*/); bind_aset(bind,42/*to*/,it);
it=rb_funcall(self,sy_Dataflow_src_dot_var_3a88,1,bind);  bind_aset(bind,43/*autovar*/,it);
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,43/*autovar*/);ptr->len=1;
                     it=Dataflow_traverse_item(self ); FAILTEST(pass15); bind_aset(bind,44/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
                   goto success15;
                   pass15: *ptr=oldpass15; goto pass13;
                   success15: *ptr=oldpass15;
                it=bind_aget(bind,44/*autovar*/); bind_aset(bind,9/*var*/,it);
it=rb_funcall(self,sy_Dataflow__at_marked_lt__3ec2,1,bind); it=rb_funcall(self,sy_Dataflow_Pass_dot_cre_fa0a,1,bind);  bind_aset(bind,45/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13;
                   goto success13;
                   pass13: *ptr=oldpass13; goto fail;
                   success13: *ptr=oldpass13;
                it=bind_aget(bind,45/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 8/*Result*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,46/*autovar*/,it);
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,46/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow_src_dot_vars_2db1,1,bind);  bind_aset(bind,47/*autovar*/,it);
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,47/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass17); bind_aset(bind,48/*autovar*/,it);
cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,48/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,49/*autovar*/,it);
int oldpos6;  while(1){oldpos6=ptr->pos;   it=Dataflow_traverse_item(self ); FAILTEST(break6); bind_aset(bind,50/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__f794,1,bind);  } break6: ptr->pos=oldpos6;   it=bind_aget(bind,49/*autovar*/); bind_aset(bind,9/*var*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass18;
                   goto success18;
                   pass18: *ptr=oldpass18; goto pass17;
                   success18: *ptr=oldpass18;
                it=Qnil;if (ptr->pos<ptr->len) goto pass17;
                   goto success17;
                   pass17: *ptr=oldpass17; goto pass16;
                   success17: *ptr=oldpass17;
                it=rb_funcall(self,sy_Dataflow_n_eq_Result_fb46,1,bind);  bind_aset(bind,51/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass16;
                   goto success16;
                   pass16: *ptr=oldpass16; goto fail;
                   success16: *ptr=oldpass16;
                it=bind_aget(bind,51/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 9/*Switch_Char*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,52/*autovar*/,it);
cstruct oldpass19=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,52/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,53/*alts*/,it);
it=rb_ary_new3(0); bind_aset(bind,36/*join*/,it);
it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind);  bind_aset(bind,26/*old*/,it);
int oldpos7;  while(1){oldpos7=ptr->pos; it=rb_funcall(self,sy_Dataflow__at_oldssan_28ff,1,bind);   it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,54/*autovar*/,it);
cstruct oldpass20=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,54/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass20); bind_aset(bind,55/*pred*/,it);
  it=Dataflow_traverse_item(self ); FAILTEST(pass20); bind_aset(bind,56/*a*/,it);
it=rb_funcall(self,sy_Dataflow_bind_lb_53_rb__04dc,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass20;
                   goto success20;
                   pass20: *ptr=oldpass20; goto break7;
                   success20: *ptr=oldpass20;
                it=rb_funcall(self,sy_Dataflow_bind_lb_36_rb__21ca,1,bind);  } break7: ptr->pos=oldpos7;   it=rb_funcall(self,sy_Dataflow_or_end_lp_b_7477,1,bind); it=rb_funcall(self,sy_Dataflow_Switch_C_c009,1,bind);  bind_aset(bind,57/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass19;
                   goto success19;
                   pass19: *ptr=oldpass19; goto fail;
                   success19: *ptr=oldpass19;
                it=bind_aget(bind,57/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 10/*Switch_Clas*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,58/*autovar*/,it);
cstruct oldpass21=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,58/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,53/*alts*/,it);
it=rb_ary_new3(0); bind_aset(bind,36/*join*/,it);
it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind);  bind_aset(bind,26/*old*/,it);
int oldpos8;  while(1){oldpos8=ptr->pos; it=rb_funcall(self,sy_Dataflow__at_oldssan_28ff,1,bind);   it=AmethystCore_anything(self ); FAILTEST(break8); bind_aset(bind,59/*autovar*/,it);
cstruct oldpass22=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,59/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass22); bind_aset(bind,55/*pred*/,it);
  it=Dataflow_traverse_item(self ); FAILTEST(pass22); bind_aset(bind,56/*a*/,it);
it=rb_funcall(self,sy_Dataflow_bind_lb_53_rb__04dc,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass22;
                   goto success22;
                   pass22: *ptr=oldpass22; goto break8;
                   success22: *ptr=oldpass22;
                it=rb_funcall(self,sy_Dataflow_bind_lb_36_rb__21ca,1,bind);  } break8: ptr->pos=oldpos8;   it=rb_funcall(self,sy_Dataflow_or_end_lp_b_7477,1,bind); it=rb_funcall(self,sy_Dataflow_Switch_C_a76e,1,bind);  bind_aset(bind,60/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass21;
                   goto success21;
                   pass21: *ptr=oldpass21; goto fail;
                   success21: *ptr=oldpass21;
                it=bind_aget(bind,60/*autovar*/); bind_aset(bind,11/*_result*/,it);
 break;
case 11/*Object*/:; goto fail; break;
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
static VALUE sy_Dead_Code_Deleter3__lp_bind_lb_2_rb__6693;
static VALUE sy_Dead_Code_Deleter3__lp_src_dot_ins_6a75;
static VALUE sy_Dead_Code_Deleter3_bind_lb_5_rb__lt__1671;
static VALUE sy_Dead_Code_Deleter3_if_sp_bind_lb__f1e9;
static VALUE sy_Dead_Code_Deleter3_src_25d9;
static VALUE sy_Dead_Code_Deleter3_src_dot_reac_cd39;
VALUE Dead_Code_Deleter3_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind);  bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Dead_Code_Deleter3_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Object*/:; goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_8588,1,bind); it=rb_funcall(self,sy_Dead_Code_Deleter3_src_dot_reac_cd39,1,bind);   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto fail;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_b885,1,bind);   it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_bind_lb_2_rb__6693,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass3;
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
                it=rb_funcall(self,sy_Dead_Code_Deleter3_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Dead_Code_Deleter3_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
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
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3_bind_lb_5_rb__lt__1671,1,bind);  } break1: ptr->pos=oldpos3;   it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
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
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Dead_Code_Deleter3_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Result*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
ptr->pos=ptr->len;it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;
case 3/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind);  bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto fail;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,4/*autovar*/); bind_aset(bind,2/*_result*/,it);
 break;
case 4/*Bind*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind); it=rb_funcall(self,sy_Dead_Code_Deleter3__at_bounded_6bb2,1,bind);   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dead_Code_Deleter3__at_bounded_7c82,1,bind); it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_005c,1,bind);  bind_aset(bind,7/*autovar*/,it);
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
case 5/*Local*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto fail;
                   success5: *ptr=oldpass5;
                it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_725b,1,bind);  bind_aset(bind,2/*_result*/,it);
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
static VALUE sy_Forget_SSA__lp_bind_lb_2_rb__6693;
static VALUE sy_Forget_SSA__lp_src_dot_ins_6a75;
static VALUE sy_Forget_SSA_bind_lb_5_rb__lt__1671;
static VALUE sy_Forget_SSA_if_sp_bind_lb__f1e9;
static VALUE sy_Forget_SSA_src_25d9;
static VALUE sy_Forget_SSA_src_dot_unss_5845;
VALUE Forget_SSA_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Forget_SSA_src_25d9,1,bind);  bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
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
VALUE Forget_SSA_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Forget_SSA__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Forget_SSA_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Forget_SSA__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Forget_SSA__at_changed_b885,1,bind);   it=Forget_SSA_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Forget_SSA__lp_bind_lb_2_rb__6693,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass3;
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
                it=rb_funcall(self,sy_Forget_SSA_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Forget_SSA_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Forget_SSA_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Forget_SSA__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
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
it=rb_funcall(self,sy_Forget_SSA__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Forget_SSA_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_Forget_SSA_bind_lb_5_rb__lt__1671,1,bind);  } break1: ptr->pos=oldpos3;   it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
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
it=rb_funcall(self,sy_Forget_SSA__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Forget_SSA_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Local*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Forget_SSA_src_dot_unss_5845,1,bind);  bind_aset(bind,1/*autovar*/,it);
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
                    switchhash_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Pass\nnext h[k]=8 if k<=Result\nnext h[k]=9 if k<=Switch_Char\nnext h[k]=10 if k<=Switch_Clas\nnext h[k]=11 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Dataflow_1);;
switchhash_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Args\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Global\nnext h[k]=5 if k<=Key\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Dataflow_2);;
switchhash_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Dataflow_3);;
switchhash_Dataflow_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Dataflow_4);;
sy_Dataflow_Act_lb_bind_1a17=rb_intern("Dataflow_Act_lb_bind_1a17");
sy_Dataflow_Apply_lb__ti__lp__43fb=rb_intern("Dataflow_Apply_lb__ti__lp__43fb");
sy_Dataflow_Lookahea_20ca=rb_intern("Dataflow_Lookahea_20ca");
sy_Dataflow_Many_dot_cre_9111=rb_intern("Dataflow_Many_dot_cre_9111");
sy_Dataflow_Or_lb__ti_bind_ffe5=rb_intern("Dataflow_Or_lb__ti_bind_ffe5");
sy_Dataflow_Pass_dot_cre_fa0a=rb_intern("Dataflow_Pass_dot_cre_fa0a");
sy_Dataflow_Seq_lb_src_dot__6f68=rb_intern("Dataflow_Seq_lb_src_dot__6f68");
sy_Dataflow_Switch_C_a76e=rb_intern("Dataflow_Switch_C_a76e");
sy_Dataflow_Switch_C_c009=rb_intern("Dataflow_Switch_C_c009");
sy_Dataflow__append_lp__0605=rb_intern("Dataflow__append_lp__0605");
sy_Dataflow__append_lp__0860=rb_intern("Dataflow__append_lp__0860");
sy_Dataflow__append_lp__0eeb=rb_intern("Dataflow__append_lp__0eeb");
sy_Dataflow__append_lp__29a3=rb_intern("Dataflow__append_lp__29a3");
sy_Dataflow__append_lp__2f87=rb_intern("Dataflow__append_lp__2f87");
sy_Dataflow__append_lp__4297=rb_intern("Dataflow__append_lp__4297");
sy_Dataflow__append_lp__473a=rb_intern("Dataflow__append_lp__473a");
sy_Dataflow__append_lp__4b67=rb_intern("Dataflow__append_lp__4b67");
sy_Dataflow__append_lp__66a2=rb_intern("Dataflow__append_lp__66a2");
sy_Dataflow__append_lp__6f56=rb_intern("Dataflow__append_lp__6f56");
sy_Dataflow__append_lp__b2a5=rb_intern("Dataflow__append_lp__b2a5");
sy_Dataflow__append_lp__b494=rb_intern("Dataflow__append_lp__b494");
sy_Dataflow__append_lp__b601=rb_intern("Dataflow__append_lp__b601");
sy_Dataflow__append_lp__d113=rb_intern("Dataflow__append_lp__d113");
sy_Dataflow__append_lp__f794=rb_intern("Dataflow__append_lp__f794");
sy_Dataflow__at_bnding_eq__b94a=rb_intern("Dataflow__at_bnding_eq__b94a");
sy_Dataflow__at_changed_5352=rb_intern("Dataflow__at_changed_5352");
sy_Dataflow__at_changed_b885=rb_intern("Dataflow__at_changed_b885");
sy_Dataflow__at_changed_c681=rb_intern("Dataflow__at_changed_c681");
sy_Dataflow__at_marked_lt__3ec2=rb_intern("Dataflow__at_marked_lt__3ec2");
sy_Dataflow__at_marked_lt__59bb=rb_intern("Dataflow__at_marked_lt__59bb");
sy_Dataflow__at_marked_lt__765b=rb_intern("Dataflow__at_marked_lt__765b");
sy_Dataflow__at_oldssan_28ff=rb_intern("Dataflow__at_oldssan_28ff");
sy_Dataflow__at_oldssan_5ad9=rb_intern("Dataflow__at_oldssan_5ad9");
sy_Dataflow__lp_bind_lb_2_rb__6693=rb_intern("Dataflow__lp_bind_lb_2_rb__6693");
sy_Dataflow__lp_src_dot_ins_6a75=rb_intern("Dataflow__lp_src_dot_ins_6a75");
sy_Dataflow_bind_end_6e13=rb_intern("Dataflow_bind_end_6e13");
sy_Dataflow_bind_lb_0_rb_=rb_intern("Dataflow_bind_lb_0_rb_");
sy_Dataflow_bind_lb_0_rb__eq__943e=rb_intern("Dataflow_bind_lb_0_rb__eq__943e");
sy_Dataflow_bind_lb_36_rb__21ca=rb_intern("Dataflow_bind_lb_36_rb__21ca");
sy_Dataflow_bind_lb_4_rb__dot__c19e=rb_intern("Dataflow_bind_lb_4_rb__dot__c19e");
sy_Dataflow_bind_lb_53_rb__04dc=rb_intern("Dataflow_bind_lb_53_rb__04dc");
sy_Dataflow_bind_lb_5_rb__lt__1671=rb_intern("Dataflow_bind_lb_5_rb__lt__1671");
sy_Dataflow_bind_lb_7_rb__dot__abd8=rb_intern("Dataflow_bind_lb_7_rb__dot__abd8");
sy_Dataflow_bind_lb_9_rb__dot__9ffa=rb_intern("Dataflow_bind_lb_9_rb__dot__9ffa");
sy_Dataflow_bind_lb_9_rb__dot__b1a9=rb_intern("Dataflow_bind_lb_9_rb__dot__b1a9");
sy_Dataflow_if_sp_bind_lb__f1e9=rb_intern("Dataflow_if_sp_bind_lb__f1e9");
sy_Dataflow_many_end_a53b=rb_intern("Dataflow_many_end_a53b");
sy_Dataflow_n_eq_Result_fb46=rb_intern("Dataflow_n_eq_Result_fb46");
sy_Dataflow_oldssanu_073d=rb_intern("Dataflow_oldssanu_073d");
sy_Dataflow_or_end_lp_b_7477=rb_intern("Dataflow_or_end_lp_b_7477");
sy_Dataflow_src_25d9=rb_intern("Dataflow_src_25d9");
sy_Dataflow_src_dot_args_2df5=rb_intern("Dataflow_src_dot_args_2df5");
sy_Dataflow_src_dot_body_65c9=rb_intern("Dataflow_src_dot_body_65c9");
sy_Dataflow_src_dot_reac_3fc5=rb_intern("Dataflow_src_dot_reac_3fc5");
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
                    switchhash_Dead_Code_Deleter3_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Result\nnext h[k]=3 if k<=Apply\nnext h[k]=4 if k<=Bind\nnext h[k]=5 if k<=Local\nnext h[k]=6 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Dead_Code_Deleter3_1);;
switchhash_Dead_Code_Deleter3_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Dead_Code_Deleter3_2);;
switchhash_Dead_Code_Deleter3_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Dead_Code_Deleter3_3);;
sy_Dead_Code_Deleter3__at_bounded_6bb2=rb_intern("Dead_Code_Deleter3__at_bounded_6bb2");
sy_Dead_Code_Deleter3__at_bounded_7c82=rb_intern("Dead_Code_Deleter3__at_bounded_7c82");
sy_Dead_Code_Deleter3__at_changed_5352=rb_intern("Dead_Code_Deleter3__at_changed_5352");
sy_Dead_Code_Deleter3__at_changed_b885=rb_intern("Dead_Code_Deleter3__at_changed_b885");
sy_Dead_Code_Deleter3__at_changed_c681=rb_intern("Dead_Code_Deleter3__at_changed_c681");
sy_Dead_Code_Deleter3__at_reachab_005c=rb_intern("Dead_Code_Deleter3__at_reachab_005c");
sy_Dead_Code_Deleter3__at_reachab_725b=rb_intern("Dead_Code_Deleter3__at_reachab_725b");
sy_Dead_Code_Deleter3__at_reachab_8588=rb_intern("Dead_Code_Deleter3__at_reachab_8588");
sy_Dead_Code_Deleter3__lp_=rb_intern("Dead_Code_Deleter3__lp_");
sy_Dead_Code_Deleter3__lp_bind_lb_2_rb__6693=rb_intern("Dead_Code_Deleter3__lp_bind_lb_2_rb__6693");
sy_Dead_Code_Deleter3__lp_src_dot_ins_6a75=rb_intern("Dead_Code_Deleter3__lp_src_dot_ins_6a75");
sy_Dead_Code_Deleter3_bind_lb_5_rb__lt__1671=rb_intern("Dead_Code_Deleter3_bind_lb_5_rb__lt__1671");
sy_Dead_Code_Deleter3_if_sp_bind_lb__f1e9=rb_intern("Dead_Code_Deleter3_if_sp_bind_lb__f1e9");
sy_Dead_Code_Deleter3_src_25d9=rb_intern("Dead_Code_Deleter3_src_25d9");
sy_Dead_Code_Deleter3_src_dot_reac_cd39=rb_intern("Dead_Code_Deleter3_src_dot_reac_cd39");
                    rb_define_method(cls_Dead_Code_Deleter3,"root",Dead_Code_Deleter3_root,0);
rb_define_method(cls_Dead_Code_Deleter3,"traverse",Dead_Code_Deleter3_traverse,0);
rb_define_method(cls_Dead_Code_Deleter3,"traverse_item",Dead_Code_Deleter3_traverse_item,0);
rb_define_method(cls_Dead_Code_Deleter3,"visit",Dead_Code_Deleter3_visit,0);
                   
 cls_Forget_SSA=rb_define_class("Forget_SSA",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Forget_SSA_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Forget_SSA_1);;
switchhash_Forget_SSA_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Forget_SSA_2);;
switchhash_Forget_SSA_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Forget_SSA_3);;
sy_Forget_SSA__at_changed_5352=rb_intern("Forget_SSA__at_changed_5352");
sy_Forget_SSA__at_changed_b885=rb_intern("Forget_SSA__at_changed_b885");
sy_Forget_SSA__at_changed_c681=rb_intern("Forget_SSA__at_changed_c681");
sy_Forget_SSA__lp_bind_lb_2_rb__6693=rb_intern("Forget_SSA__lp_bind_lb_2_rb__6693");
sy_Forget_SSA__lp_src_dot_ins_6a75=rb_intern("Forget_SSA__lp_src_dot_ins_6a75");
sy_Forget_SSA_bind_lb_5_rb__lt__1671=rb_intern("Forget_SSA_bind_lb_5_rb__lt__1671");
sy_Forget_SSA_if_sp_bind_lb__f1e9=rb_intern("Forget_SSA_if_sp_bind_lb__f1e9");
sy_Forget_SSA_src_25d9=rb_intern("Forget_SSA_src_25d9");
sy_Forget_SSA_src_dot_unss_5845=rb_intern("Forget_SSA_src_dot_unss_5845");
                    rb_define_method(cls_Forget_SSA,"root",Forget_SSA_root,0);
rb_define_method(cls_Forget_SSA,"traverse",Forget_SSA_traverse,0);
rb_define_method(cls_Forget_SSA,"traverse_item",Forget_SSA_traverse_item,0);
rb_define_method(cls_Forget_SSA,"visit",Forget_SSA_visit,0);
                    rb_eval_string("testversiondataflow_ssa('6ac1ad091130d3809117a156f5409d7b')");}
