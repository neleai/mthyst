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
VALUE Dataflow_root(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var0/*autovar*/;ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Object*/:; goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var1/*autovar*/; var2/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow__at_bnding_eq__b94a,1,bind2);it=rb_funcall(self,sy_Dataflow_src_dot_args_2df5,1,bind2); var3/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var3/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass3); var4/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var5/*autovar*/=it;;
int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Dataflow_traverse_item(self ); FAILTEST(alt1_2); var6/*autovar*/=it;;
bind_aset(bind2,1,var5/*autovar*/);bind_aset(bind2,2,var6/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var5/*autovar*/=bind_aget(bind2,1);;var6/*autovar*/=bind_aget(bind2,2);;
;goto accept1;
alt1_2: ptr->pos=oldpos1;stop1=1;
;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass4;
 accept1:;
 } it=var5/*autovar*/; var7/*var*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto pass3;
                   success4: *ptr=oldpass4;
                it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                bind_aset(bind2,1,var7/*var*/);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__6099,1,bind2);var7/*var*/=bind_aget(bind2,1);;it=rb_funcall(self,sy_Dataflow_Seq_lb_src_dot__6f68,1,bind2); var8/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var8/*autovar*/;ptr->len=1;
                     it=Dataflow_traverse_item(self ); FAILTEST(pass5); var9/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass2;
                   success5: *ptr=oldpass5;
                it=var9/*autovar*/; var10/*body*/=it;;
bind_aset(bind2,1,var10/*body*/);it=rb_funcall(self,sy_Dataflow_src_dot_body_b7c1,1,bind2);var10/*body*/=bind_aget(bind2,1);;bind_aset(bind2,1,var10/*body*/);it=rb_funcall(self,sy_Dataflow_src_dot_reac_9ae4,1,bind2);var10/*body*/=bind_aget(bind2,1);;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); var11/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto fail;
                   success2: *ptr=oldpass2;
                it=var11/*autovar*/; var12/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Dataflow_traverse(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
;goto accept1;
alt1_2: ptr->pos=oldpos1;stop1=1;
;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 } it=rb_funcall(self,sy_Dataflow__at_changed_c681,1,bind2); var0/*oldchanged*/=it;;
it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); var1/*this*/=it;;
it=Qnil; var2/*clon*/=it;;
it=Qfalse; var3/*changed*/=it;;
it=rb_funcall(self,sy_Dataflow__lp_src_dot_ins_6a75,1,bind2); var4/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var4/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var5/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop2=0; while(!stop2){ int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); var6/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); var7/*key*/=it;;
it=rb_funcall(self,sy_Dataflow__at_changed_b885,1,bind2);  it=Dataflow_traverse_item(self ); FAILTEST(pass3); var8/*val*/=it;;
bind_aset(bind2,1,var2/*clon*/);bind_aset(bind2,2,var1/*this*/);bind_aset(bind2,3,var3/*changed*/);bind_aset(bind2,4,var7/*key*/);bind_aset(bind2,5,var8/*val*/);it=rb_funcall(self,sy_Dataflow__lp_bind_lb_1_rb__ee3d,1,bind2);var2/*clon*/=bind_aget(bind2,1);;var1/*this*/=bind_aget(bind2,2);;var3/*changed*/=bind_aget(bind2,3);;var7/*key*/=bind_aget(bind2,4);;var8/*val*/=bind_aget(bind2,5);;it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt2_2;
                   success3: *ptr=oldpass3;
                
;goto accept2;
alt2_2: ptr->pos=oldpos2;stop2=1;
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto pass2;
 accept2:;
 } it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,var3/*changed*/);bind_aset(bind2,2,var2/*clon*/);bind_aset(bind2,3,var0/*oldchanged*/);it=rb_funcall(self,sy_Dataflow_if_sp_bind_lb__8e0b,1,bind2);var3/*changed*/=bind_aget(bind2,1);;var2/*clon*/=bind_aget(bind2,2);;var0/*oldchanged*/=bind_aget(bind2,3);; var9/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Dataflow_traverse_item(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Dataflow_visit(self ); FAILTEST(alt1_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Dataflow__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; var2/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dataflow_traverse(self ); FAILTEST(pass1); var3/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_3;
                   success1: *ptr=oldpass1;
                it=var3/*autovar*/; var1/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); var1/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=Dataflow_visit(self ); FAILTEST(alt2_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Dataflow__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var5/*ar*/=it;;
int stop1=0; while(!stop1){ int oldpos3=ptr->pos;int cut3=0;
alt3_1:;  it=Dataflow_traverse_item(self ); FAILTEST(alt3_2); var6/*it*/=it;;
bind_aset(bind2,1,var5/*ar*/);bind_aset(bind2,2,var6/*it*/);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__7b20,1,bind2);var5/*ar*/=bind_aget(bind2,1);;var6/*it*/=bind_aget(bind2,2);;
;goto accept3;
alt3_2: ptr->pos=oldpos3;stop1=1;
;goto accept3;
alt3_3: ptr->pos=oldpos3;goto pass2;
 accept3:;
 } it=var5/*ar*/; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_3;
                   success2: *ptr=oldpass2;
                it=var7/*autovar*/; var1/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); var1/*_result*/=it;;

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Object*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;  it=Dataflow_visit(self ); FAILTEST(alt4_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Dataflow__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); var1/*_result*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Dataflow_vars_in(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); var0/*ary*/=it;;
bind_aset(bind2,1,var0/*ary*/);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__eq__fe02,1,bind2);var0/*ary*/=bind_aget(bind2,1);;int stop1=0; while(!stop1){ switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop2=0; while(!stop2){ int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2);
;goto accept2;
alt2_2: ptr->pos=oldpos2;stop2=1;
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto pass1;
 accept2:;
 } it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); var2/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                
;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);
;goto accept1;
alt1_3: ptr->pos=oldpos1;stop1=1;
;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Args*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dataflow_vars_in(self ); FAILTEST(pass2); var4/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var4/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var4/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt3_2;
                   success2: *ptr=oldpass2;
                
;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);
;goto accept3;
alt3_3: ptr->pos=oldpos3;stop1=1;
;goto accept3;
alt3_4: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 2/*Bind*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var5/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dataflow_vars_in(self ); FAILTEST(pass3); var6/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var6/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var6/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt4_2;
                   success3: *ptr=oldpass3;
                
;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);
;goto accept4;
alt4_3: ptr->pos=oldpos4;stop1=1;
;goto accept4;
alt4_4: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 3/*CAct*/:; int oldpos5=ptr->pos;int cut5=0;
alt5_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var7/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var7/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop3=0; while(!stop3){ int oldpos6=ptr->pos;int cut6=0;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2);
;goto accept6;
alt6_2: ptr->pos=oldpos6;stop3=1;
;goto accept6;
alt6_3: ptr->pos=oldpos6;goto pass4;
 accept6:;
 } it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); var8/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var8/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var8/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt5_2;
                   success4: *ptr=oldpass4;
                
;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);
;goto accept5;
alt5_3: ptr->pos=oldpos5;stop1=1;
;goto accept5;
alt5_4: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 4/*Global*/:; int oldpos7=ptr->pos;int cut7=0;
alt7_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var9/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop4=0; while(!stop4){ int oldpos8=ptr->pos;int cut8=0;
alt8_1:;  it=AmethystCore_anything(self ); FAILTEST(alt8_2);
;goto accept8;
alt8_2: ptr->pos=oldpos8;stop4=1;
;goto accept8;
alt8_3: ptr->pos=oldpos8;goto pass5;
 accept8:;
 } it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); var10/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var10/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var10/*autovar*/=bind_aget(bind2,2);;it=rb_funcall(self,sy_Dataflow__at_marked_lt__59bb,1,bind2);it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt7_2;
                   success5: *ptr=oldpass5;
                
;goto accept7;
alt7_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt7_3);
;goto accept7;
alt7_3: ptr->pos=oldpos7;stop1=1;
;goto accept7;
alt7_4: ptr->pos=oldpos7;goto fail;
 accept7:;
 break;
case 5/*Key*/:; int oldpos9=ptr->pos;int cut9=0;
alt9_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var11/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var11/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop5=0; while(!stop5){ int oldpos10=ptr->pos;int cut10=0;
alt10_1:;  it=AmethystCore_anything(self ); FAILTEST(alt10_2);
;goto accept10;
alt10_2: ptr->pos=oldpos10;stop5=1;
;goto accept10;
alt10_3: ptr->pos=oldpos10;goto pass6;
 accept10:;
 } it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); var12/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var12/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var12/*autovar*/=bind_aget(bind2,2);;it=rb_funcall(self,sy_Dataflow__at_marked_lt__59bb,1,bind2);it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt9_2;
                   success6: *ptr=oldpass6;
                
;goto accept9;
alt9_2: ptr->pos=oldpos9;  it=AmethystCore_anything(self ); FAILTEST(alt9_3);
;goto accept9;
alt9_3: ptr->pos=oldpos9;stop1=1;
;goto accept9;
alt9_4: ptr->pos=oldpos9;goto fail;
 accept9:;
 break;
case 6/*Local*/:; int oldpos11=ptr->pos;int cut11=0;
alt11_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var13/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var13/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop6=0; while(!stop6){ int oldpos12=ptr->pos;int cut12=0;
alt12_1:;  it=AmethystCore_anything(self ); FAILTEST(alt12_2);
;goto accept12;
alt12_2: ptr->pos=oldpos12;stop6=1;
;goto accept12;
alt12_3: ptr->pos=oldpos12;goto pass7;
 accept12:;
 } it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); var14/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var14/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var14/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt11_2;
                   success7: *ptr=oldpass7;
                
;goto accept11;
alt11_2: ptr->pos=oldpos11;  it=AmethystCore_anything(self ); FAILTEST(alt11_3);
;goto accept11;
alt11_3: ptr->pos=oldpos11;stop1=1;
;goto accept11;
alt11_4: ptr->pos=oldpos11;goto fail;
 accept11:;
 break;
case 7/*Result*/:; int oldpos13=ptr->pos;int cut13=0;
alt13_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var15/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var15/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop7=0; while(!stop7){ int oldpos14=ptr->pos;int cut14=0;
alt14_1:;  it=AmethystCore_anything(self ); FAILTEST(alt14_2);
;goto accept14;
alt14_2: ptr->pos=oldpos14;stop7=1;
;goto accept14;
alt14_3: ptr->pos=oldpos14;goto pass8;
 accept14:;
 } it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); var16/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var16/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var16/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt13_2;
                   success8: *ptr=oldpass8;
                
;goto accept13;
alt13_2: ptr->pos=oldpos13;  it=AmethystCore_anything(self ); FAILTEST(alt13_3);
;goto accept13;
alt13_3: ptr->pos=oldpos13;stop1=1;
;goto accept13;
alt13_4: ptr->pos=oldpos13;goto fail;
 accept13:;
 break;
case 8/*Object*/:; int oldpos15=ptr->pos;int cut15=0;
alt15_1:;  it=AmethystCore_anything(self ); FAILTEST(alt15_2);
;goto accept15;
alt15_2: ptr->pos=oldpos15;stop1=1;
;goto accept15;
alt15_3: ptr->pos=oldpos15;goto fail;
 accept15:;
 break;
} } bind_aset(bind2,1,var0/*ary*/);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb_,1,bind2);var0/*ary*/=bind_aget(bind2,1);; var17/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Dataflow_visit(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17;VALUE var18;VALUE var19;VALUE var20;VALUE var21;VALUE var22;VALUE var23;VALUE var24;VALUE var25;VALUE var26;VALUE var27;VALUE var28;VALUE var29;VALUE var30;VALUE var31;VALUE var32;VALUE var33;VALUE var34;VALUE var35;VALUE var36;VALUE var37;VALUE var38;VALUE var39;VALUE var40;VALUE var41;VALUE var42;VALUE var43;VALUE var44;VALUE var45;VALUE var46;VALUE var47;VALUE var48;VALUE var49;VALUE var50;VALUE var51;VALUE var52;VALUE var53;VALUE var54;VALUE var55;VALUE var56;VALUE var57; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var1/*autovar*/=it;;
int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Dataflow_traverse_item(self ); FAILTEST(alt1_2); var2/*autovar*/=it;;
bind_aset(bind2,1,var1/*autovar*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var1/*autovar*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);;
;goto accept1;
alt1_2: ptr->pos=oldpos1;stop1=1;
;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass1;
 accept1:;
 } it=var1/*autovar*/; var3/*t*/=it;;
bind_aset(bind2,1,var3/*t*/);it=rb_funcall(self,sy_Dataflow_Act_lb_bind_7d8f,1,bind2);var3/*t*/=bind_aget(bind2,1);; var4/*act*/=it;;
bind_aset(bind2,1,var4/*act*/);it=rb_funcall(self,sy_Dataflow__at_marked_lt__d910,1,bind2);var4/*act*/=bind_aget(bind2,1);;bind_aset(bind2,1,var4/*act*/);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__dbae,1,bind2);var4/*act*/=bind_aget(bind2,1);; var5/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var5/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var6/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dataflow_vars_in(self ); FAILTEST(pass3); var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=var7/*autovar*/; var8/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=var8/*autovar*/; var9/*var*/=it;;
bind_aset(bind2,1,var9/*var*/);bind_aset(bind2,2,var4/*act*/);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__9da9,1,bind2);var9/*var*/=bind_aget(bind2,1);;var4/*act*/=bind_aget(bind2,2);; var10/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var10/*autovar*/; var11/*_result*/=it;;
 break;
case 1/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var12/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var12/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var13/*autovar*/=it;;
int stop2=0; while(!stop2){ int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=Dataflow_traverse_item(self ); FAILTEST(alt2_2); var14/*autovar*/=it;;
bind_aset(bind2,1,var13/*autovar*/);bind_aset(bind2,2,var14/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var13/*autovar*/=bind_aget(bind2,1);;var14/*autovar*/=bind_aget(bind2,2);;
;goto accept2;
alt2_2: ptr->pos=oldpos2;stop2=1;
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto pass4;
 accept2:;
 } it=var13/*autovar*/; var3/*t*/=it;;
bind_aset(bind2,1,var3/*t*/);it=rb_funcall(self,sy_Dataflow_Apply_lb__ti__lp__753f,1,bind2);var3/*t*/=bind_aget(bind2,1);; var15/*app*/=it;;
it=var15/*app*/; var16/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var16/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass5); var17/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var17/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dataflow_vars_in(self ); FAILTEST(pass6); var9/*var*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto pass5;
                   success6: *ptr=oldpass6;
                it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass4;
                   success5: *ptr=oldpass5;
                bind_aset(bind2,1,var9/*var*/);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__ce70,1,bind2);var9/*var*/=bind_aget(bind2,1);;it=var15/*app*/; var18/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto fail;
                   success4: *ptr=oldpass4;
                it=var18/*autovar*/; var11/*_result*/=it;;
 break;
case 2/*Bind*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var19/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var19/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop3=0; while(!stop3){ int oldpos3=ptr->pos;int cut3=0;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2);
;goto accept3;
alt3_2: ptr->pos=oldpos3;stop3=1;
;goto accept3;
alt3_3: ptr->pos=oldpos3;goto pass7;
 accept3:;
 }   it=Dataflow_traverse(self ); FAILTEST(pass7); var20/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var20/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop4=0; while(!stop4){ int oldpos4=ptr->pos;int cut4=0;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2);
;goto accept4;
alt4_2: ptr->pos=oldpos4;stop4=1;
;goto accept4;
alt4_3: ptr->pos=oldpos4;goto pass8;
 accept4:;
 } it=rb_funcall(self,sy_Dataflow_bind_end_6e13,1,bind2); var21/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto pass7;
                   success8: *ptr=oldpass8;
                it=var21/*autovar*/; var22/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto fail;
                   success7: *ptr=oldpass7;
                it=var22/*autovar*/; var11/*_result*/=it;;
 break;
case 3/*Local*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var23/*autovar*/=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var23/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop5=0; while(!stop5){ int oldpos5=ptr->pos;int cut5=0;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2);
;goto accept5;
alt5_2: ptr->pos=oldpos5;stop5=1;
;goto accept5;
alt5_3: ptr->pos=oldpos5;goto pass9;
 accept5:;
 } it=rb_funcall(self,sy_Dataflow_ssanum_lp_s_3920,1,bind2); var24/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto fail;
                   success9: *ptr=oldpass9;
                it=var24/*autovar*/; var11/*_result*/=it;;
 break;
case 4/*Lookahead*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var25/*autovar*/=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var25/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind2); var26/*old*/=it;;
it=rb_ary_new3(0); var27/*autovar*/=it;;
int stop6=0; while(!stop6){ int oldpos6=ptr->pos;int cut6=0;
alt6_1:;  it=Dataflow_traverse_item(self ); FAILTEST(alt6_2); var28/*autovar*/=it;;
bind_aset(bind2,1,var27/*autovar*/);bind_aset(bind2,2,var28/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var27/*autovar*/=bind_aget(bind2,1);;var28/*autovar*/=bind_aget(bind2,2);;
;goto accept6;
alt6_2: ptr->pos=oldpos6;stop6=1;
;goto accept6;
alt6_3: ptr->pos=oldpos6;goto pass10;
 accept6:;
 } it=var27/*autovar*/; var3/*t*/=it;;
bind_aset(bind2,1,var26/*old*/);it=rb_funcall(self,sy_Dataflow__at_oldssan_e953,1,bind2);var26/*old*/=bind_aget(bind2,1);;bind_aset(bind2,1,var3/*t*/);it=rb_funcall(self,sy_Dataflow_Lookahea_2972,1,bind2);var3/*t*/=bind_aget(bind2,1);; var29/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto fail;
                   success10: *ptr=oldpass10;
                it=var29/*autovar*/; var11/*_result*/=it;;
 break;
case 5/*Many*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var30/*autovar*/=it;;
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var30/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow_ssanums_dot__ae08,1,bind2); var31/*prev*/=it;;
it=rb_ary_new3(0); var32/*autovar*/=it;;
int stop7=0; while(!stop7){ int oldpos7=ptr->pos;int cut7=0;
alt7_1:;  it=Dataflow_traverse_item(self ); FAILTEST(alt7_2); var33/*autovar*/=it;;
bind_aset(bind2,1,var32/*autovar*/);bind_aset(bind2,2,var33/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var32/*autovar*/=bind_aget(bind2,1);;var33/*autovar*/=bind_aget(bind2,2);;
;goto accept7;
alt7_2: ptr->pos=oldpos7;stop7=1;
;goto accept7;
alt7_3: ptr->pos=oldpos7;goto pass11;
 accept7:;
 } it=var32/*autovar*/; var3/*t*/=it;;
bind_aset(bind2,1,var31/*prev*/);it=rb_funcall(self,sy_Dataflow_many_end_0563,1,bind2);var31/*prev*/=bind_aget(bind2,1);;bind_aset(bind2,1,var3/*t*/);it=rb_funcall(self,sy_Dataflow_Many_dot_cre_2107,1,bind2);var3/*t*/=bind_aget(bind2,1);; var34/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto fail;
                   success11: *ptr=oldpass11;
                it=var34/*autovar*/; var11/*_result*/=it;;
 break;
case 6/*Or*/:; it=rb_ary_new3(0); var3/*t*/=it;;
it=ame_curobj2(ptr)               ;ptr->pos++; var35/*autovar*/=it;;
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var35/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var36/*join*/=it;;
it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind2); var26/*old*/=it;;
int stop8=0; while(!stop8){ int oldpos8=ptr->pos;int cut8=0;
alt8_1:;bind_aset(bind2,1,var26/*old*/);it=rb_funcall(self,sy_Dataflow__at_oldssan_37c2,1,bind2);var26/*old*/=bind_aget(bind2,1);;  it=Dataflow_traverse_item(self ); FAILTEST(alt8_2); var37/*autovar*/=it;;
bind_aset(bind2,1,var3/*t*/);bind_aset(bind2,2,var37/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var3/*t*/=bind_aget(bind2,1);;var37/*autovar*/=bind_aget(bind2,2);;bind_aset(bind2,1,var36/*join*/);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__eda2,1,bind2);var36/*join*/=bind_aget(bind2,1);;
;goto accept8;
alt8_2: ptr->pos=oldpos8;stop8=1;
;goto accept8;
alt8_3: ptr->pos=oldpos8;goto pass12;
 accept8:;
 } bind_aset(bind2,1,var36/*join*/);it=rb_funcall(self,sy_Dataflow_or_end_lp_b_33b4,1,bind2);var36/*join*/=bind_aget(bind2,1);;bind_aset(bind2,1,var3/*t*/);it=rb_funcall(self,sy_Dataflow_Or_lb__ti_bind_d486,1,bind2);var3/*t*/=bind_aget(bind2,1);; var38/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto fail;
                   success12: *ptr=oldpass12;
                it=var38/*autovar*/; var11/*_result*/=it;;
 break;
case 7/*Pass*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var39/*autovar*/=it;;
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var39/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow_src_dot_to_5e99,1,bind2); var40/*autovar*/=it;;
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var40/*autovar*/;ptr->len=1;
                     it=Dataflow_traverse_item(self ); FAILTEST(pass14); var41/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto pass13;
                   success14: *ptr=oldpass14;
                it=var41/*autovar*/; var42/*to*/=it;;
it=rb_funcall(self,sy_Dataflow_src_dot_var_3a88,1,bind2); var43/*autovar*/=it;;
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var43/*autovar*/;ptr->len=1;
                     it=Dataflow_traverse_item(self ); FAILTEST(pass15); var44/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
                   goto success15;
                   pass15: *ptr=oldpass15; goto pass13;
                   success15: *ptr=oldpass15;
                it=var44/*autovar*/; var9/*var*/=it;;
bind_aset(bind2,1,var9/*var*/);it=rb_funcall(self,sy_Dataflow__at_marked_lt__f9b9,1,bind2);var9/*var*/=bind_aget(bind2,1);;bind_aset(bind2,1,var42/*to*/);bind_aset(bind2,2,var9/*var*/);it=rb_funcall(self,sy_Dataflow_Pass_dot_cre_5b5c,1,bind2);var42/*to*/=bind_aget(bind2,1);;var9/*var*/=bind_aget(bind2,2);; var45/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass13;
                   goto success13;
                   pass13: *ptr=oldpass13; goto fail;
                   success13: *ptr=oldpass13;
                it=var45/*autovar*/; var11/*_result*/=it;;
 break;
case 8/*Result*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var46/*autovar*/=it;;
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var46/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dataflow_src_dot_vars_2db1,1,bind2); var47/*autovar*/=it;;
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var47/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass17); var48/*autovar*/=it;;
cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var48/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var49/*autovar*/=it;;
int stop9=0; while(!stop9){ int oldpos9=ptr->pos;int cut9=0;
alt9_1:;  it=Dataflow_traverse_item(self ); FAILTEST(alt9_2); var50/*autovar*/=it;;
bind_aset(bind2,1,var49/*autovar*/);bind_aset(bind2,2,var50/*autovar*/);it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);var49/*autovar*/=bind_aget(bind2,1);;var50/*autovar*/=bind_aget(bind2,2);;
;goto accept9;
alt9_2: ptr->pos=oldpos9;stop9=1;
;goto accept9;
alt9_3: ptr->pos=oldpos9;goto pass18;
 accept9:;
 } it=var49/*autovar*/; var9/*var*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass18;
                   goto success18;
                   pass18: *ptr=oldpass18; goto pass17;
                   success18: *ptr=oldpass18;
                it=Qnil;if (ptr->pos<ptr->len) goto pass17;
                   goto success17;
                   pass17: *ptr=oldpass17; goto pass16;
                   success17: *ptr=oldpass17;
                bind_aset(bind2,1,var9/*var*/);it=rb_funcall(self,sy_Dataflow_n_eq_Result_d8be,1,bind2);var9/*var*/=bind_aget(bind2,1);; var51/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass16;
                   goto success16;
                   pass16: *ptr=oldpass16; goto fail;
                   success16: *ptr=oldpass16;
                it=var51/*autovar*/; var11/*_result*/=it;;
 break;
case 9/*Switch*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var52/*autovar*/=it;;
cstruct oldpass19=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var52/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var53/*alts*/=it;;
it=rb_ary_new3(0); var36/*join*/=it;;
it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind2); var26/*old*/=it;;
int stop10=0; while(!stop10){ int oldpos10=ptr->pos;int cut10=0;
alt10_1:;bind_aset(bind2,1,var26/*old*/);it=rb_funcall(self,sy_Dataflow__at_oldssan_37c2,1,bind2);var26/*old*/=bind_aget(bind2,1);;  it=AmethystCore_anything(self ); FAILTEST(alt10_2); var54/*autovar*/=it;;
cstruct oldpass20=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var54/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass20); var55/*pred*/=it;;
  it=Dataflow_traverse_item(self ); FAILTEST(pass20); var56/*a*/=it;;
bind_aset(bind2,1,var53/*alts*/);bind_aset(bind2,2,var55/*pred*/);bind_aset(bind2,3,var56/*a*/);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__c37a,1,bind2);var53/*alts*/=bind_aget(bind2,1);;var55/*pred*/=bind_aget(bind2,2);;var56/*a*/=bind_aget(bind2,3);;it=Qnil;if (ptr->pos<ptr->len) goto pass20;
                   goto success20;
                   pass20: *ptr=oldpass20; goto alt10_2;
                   success20: *ptr=oldpass20;
                bind_aset(bind2,1,var36/*join*/);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__eda2,1,bind2);var36/*join*/=bind_aget(bind2,1);;
;goto accept10;
alt10_2: ptr->pos=oldpos10;stop10=1;
;goto accept10;
alt10_3: ptr->pos=oldpos10;goto pass19;
 accept10:;
 } bind_aset(bind2,1,var36/*join*/);it=rb_funcall(self,sy_Dataflow_or_end_lp_b_33b4,1,bind2);var36/*join*/=bind_aget(bind2,1);;bind_aset(bind2,1,var53/*alts*/);it=rb_funcall(self,sy_Dataflow_src_dot_clas_68f9,1,bind2);var53/*alts*/=bind_aget(bind2,1);; var57/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass19;
                   goto success19;
                   pass19: *ptr=oldpass19; goto fail;
                   success19: *ptr=oldpass19;
                it=var57/*autovar*/; var11/*_result*/=it;;
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
VALUE Dead_Code_Deleter3_root(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2); var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var0/*autovar*/;ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Dead_Code_Deleter3_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Object*/:; goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var1/*autovar*/; var2/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_8588,1,bind2);it=rb_funcall(self,sy_Dead_Code_Deleter3_src_dot_reac_cd39,1,bind2);  it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass2); var3/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto fail;
                   success2: *ptr=oldpass2;
                it=var3/*autovar*/; var4/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
;goto accept1;
alt1_2: ptr->pos=oldpos1;stop1=1;
;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 } it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_c681,1,bind2); var0/*oldchanged*/=it;;
it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2); var1/*this*/=it;;
it=Qnil; var2/*clon*/=it;;
it=Qfalse; var3/*changed*/=it;;
it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_src_dot_ins_6a75,1,bind2); var4/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var4/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var5/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop2=0; while(!stop2){ int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); var6/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); var7/*key*/=it;;
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_b885,1,bind2);  it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(pass3); var8/*val*/=it;;
bind_aset(bind2,1,var2/*clon*/);bind_aset(bind2,2,var1/*this*/);bind_aset(bind2,3,var3/*changed*/);bind_aset(bind2,4,var7/*key*/);bind_aset(bind2,5,var8/*val*/);it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_bind_lb_1_rb__ee3d,1,bind2);var2/*clon*/=bind_aget(bind2,1);;var1/*this*/=bind_aget(bind2,2);;var3/*changed*/=bind_aget(bind2,3);;var7/*key*/=bind_aget(bind2,4);;var8/*val*/=bind_aget(bind2,5);;it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt2_2;
                   success3: *ptr=oldpass3;
                
;goto accept2;
alt2_2: ptr->pos=oldpos2;stop2=1;
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto pass2;
 accept2:;
 } it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,var3/*changed*/);bind_aset(bind2,2,var2/*clon*/);bind_aset(bind2,3,var0/*oldchanged*/);it=rb_funcall(self,sy_Dead_Code_Deleter3_if_sp_bind_lb__8e0b,1,bind2);var3/*changed*/=bind_aget(bind2,1);;var2/*clon*/=bind_aget(bind2,2);;var0/*oldchanged*/=bind_aget(bind2,3);; var9/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse_item(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Dead_Code_Deleter3_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt1_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; var2/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass1); var3/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_3;
                   success1: *ptr=oldpass1;
                it=var3/*autovar*/; var1/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); var1/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt2_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var5/*ar*/=it;;
int stop1=0; while(!stop1){ int oldpos3=ptr->pos;int cut3=0;
alt3_1:;  it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(alt3_2); var6/*it*/=it;;
bind_aset(bind2,1,var5/*ar*/);bind_aset(bind2,2,var6/*it*/);it=rb_funcall(self,sy_Dead_Code_Deleter3_bind_lb_1_rb__lt__7b20,1,bind2);var5/*ar*/=bind_aget(bind2,1);;var6/*it*/=bind_aget(bind2,2);;
;goto accept3;
alt3_2: ptr->pos=oldpos3;stop1=1;
;goto accept3;
alt3_3: ptr->pos=oldpos3;goto pass2;
 accept3:;
 } it=var5/*ar*/; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_3;
                   success2: *ptr=oldpass2;
                it=var7/*autovar*/; var1/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); var1/*_result*/=it;;

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Object*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;  it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt4_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); var1/*_result*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_visit(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Dead_Code_Deleter3_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Result*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2); var1/*this*/=it;;
int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
;goto accept1;
alt1_2: ptr->pos=oldpos1;stop1=1;
;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass1;
 accept1:;
 } it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,var1/*this*/);it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_,1,bind2);var1/*this*/=bind_aget(bind2,1);; var2/*_result*/=it;;
 break;
case 3/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop2=0; while(!stop2){ int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2);
;goto accept2;
alt2_2: ptr->pos=oldpos2;stop2=1;
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto pass2;
 accept2:;
 } it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2); var4/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto fail;
                   success2: *ptr=oldpass2;
                it=var4/*autovar*/; var2/*_result*/=it;;
 break;
case 4/*Bind*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var5/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop3=0; while(!stop3){ int oldpos3=ptr->pos;int cut3=0;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2);
;goto accept3;
alt3_2: ptr->pos=oldpos3;stop3=1;
;goto accept3;
alt3_3: ptr->pos=oldpos3;goto pass3;
 accept3:;
 } it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2);it=rb_funcall(self,sy_Dead_Code_Deleter3__at_bounded_6bb2,1,bind2);  it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass3); var6/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop4=0; while(!stop4){ int oldpos4=ptr->pos;int cut4=0;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2);
;goto accept4;
alt4_2: ptr->pos=oldpos4;stop4=1;
;goto accept4;
alt4_3: ptr->pos=oldpos4;goto pass4;
 accept4:;
 } it=rb_funcall(self,sy_Dead_Code_Deleter3__at_bounded_7c82,1,bind2);it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_005c,1,bind2); var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto pass3;
                   success4: *ptr=oldpass4;
                it=var7/*autovar*/; var8/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto fail;
                   success3: *ptr=oldpass3;
                it=var8/*autovar*/; var2/*_result*/=it;;
 break;
case 5/*Local*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var9/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop5=0; while(!stop5){ int oldpos5=ptr->pos;int cut5=0;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2);
;goto accept5;
alt5_2: ptr->pos=oldpos5;stop5=1;
;goto accept5;
alt5_3: ptr->pos=oldpos5;goto pass5;
 accept5:;
 } it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2); var1/*this*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto fail;
                   success5: *ptr=oldpass5;
                bind_aset(bind2,1,var1/*this*/);it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_725b,1,bind2);var1/*this*/=bind_aget(bind2,1);; var2/*_result*/=it;;
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
VALUE Forget_SSA_root(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Forget_SSA_src_25d9,1,bind2); var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var0/*autovar*/;ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Object*/:; goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var1/*autovar*/; var2/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Forget_SSA_traverse(self ); FAILTEST(pass2); var3/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto fail;
                   success2: *ptr=oldpass2;
                it=var3/*autovar*/; var4/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Forget_SSA_traverse(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
;goto accept1;
alt1_2: ptr->pos=oldpos1;stop1=1;
;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 } it=rb_funcall(self,sy_Forget_SSA__at_changed_c681,1,bind2); var0/*oldchanged*/=it;;
it=rb_funcall(self,sy_Forget_SSA_src_25d9,1,bind2); var1/*this*/=it;;
it=Qnil; var2/*clon*/=it;;
it=Qfalse; var3/*changed*/=it;;
it=rb_funcall(self,sy_Forget_SSA__lp_src_dot_ins_6a75,1,bind2); var4/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var4/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var5/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop2=0; while(!stop2){ int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); var6/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); var7/*key*/=it;;
it=rb_funcall(self,sy_Forget_SSA__at_changed_b885,1,bind2);  it=Forget_SSA_traverse_item(self ); FAILTEST(pass3); var8/*val*/=it;;
bind_aset(bind2,1,var2/*clon*/);bind_aset(bind2,2,var1/*this*/);bind_aset(bind2,3,var3/*changed*/);bind_aset(bind2,4,var7/*key*/);bind_aset(bind2,5,var8/*val*/);it=rb_funcall(self,sy_Forget_SSA__lp_bind_lb_1_rb__ee3d,1,bind2);var2/*clon*/=bind_aget(bind2,1);;var1/*this*/=bind_aget(bind2,2);;var3/*changed*/=bind_aget(bind2,3);;var7/*key*/=bind_aget(bind2,4);;var8/*val*/=bind_aget(bind2,5);;it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt2_2;
                   success3: *ptr=oldpass3;
                
;goto accept2;
alt2_2: ptr->pos=oldpos2;stop2=1;
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto pass2;
 accept2:;
 } it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,var3/*changed*/);bind_aset(bind2,2,var2/*clon*/);bind_aset(bind2,3,var0/*oldchanged*/);it=rb_funcall(self,sy_Forget_SSA_if_sp_bind_lb__8e0b,1,bind2);var3/*changed*/=bind_aget(bind2,1);;var2/*clon*/=bind_aget(bind2,2);;var0/*oldchanged*/=bind_aget(bind2,3);; var9/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Forget_SSA_traverse_item(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Forget_SSA_visit(self ); FAILTEST(alt1_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Forget_SSA__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; var2/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Forget_SSA_traverse(self ); FAILTEST(pass1); var3/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_3;
                   success1: *ptr=oldpass1;
                it=var3/*autovar*/; var1/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); var1/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=Forget_SSA_visit(self ); FAILTEST(alt2_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Forget_SSA__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var5/*ar*/=it;;
int stop1=0; while(!stop1){ int oldpos3=ptr->pos;int cut3=0;
alt3_1:;  it=Forget_SSA_traverse_item(self ); FAILTEST(alt3_2); var6/*it*/=it;;
bind_aset(bind2,1,var5/*ar*/);bind_aset(bind2,2,var6/*it*/);it=rb_funcall(self,sy_Forget_SSA_bind_lb_1_rb__lt__7b20,1,bind2);var5/*ar*/=bind_aget(bind2,1);;var6/*it*/=bind_aget(bind2,2);;
;goto accept3;
alt3_2: ptr->pos=oldpos3;stop1=1;
;goto accept3;
alt3_3: ptr->pos=oldpos3;goto pass2;
 accept3:;
 } it=var5/*ar*/; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_3;
                   success2: *ptr=oldpass2;
                it=var7/*autovar*/; var1/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); var1/*_result*/=it;;

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Object*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;  it=Forget_SSA_visit(self ); FAILTEST(alt4_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Forget_SSA__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); var1/*_result*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Forget_SSA_visit(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Local*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
;goto accept1;
alt1_2: ptr->pos=oldpos1;stop1=1;
;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass1;
 accept1:;
 } it=rb_funcall(self,sy_Forget_SSA_src_dot_unss_5845,1,bind2); var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var1/*autovar*/; var2/*_result*/=it;;
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
                    rb_eval_string("testversiondataflow_ssa('ea9f548fcccd63ac3174b9f64f9275e3')");}
