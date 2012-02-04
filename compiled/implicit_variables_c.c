#include "cthyst.h"
VALUE cls_Detect_Implicit_Variables;
VALUE AmethystCore_anything(VALUE self );
VALUE Detect_Implicit_Variables_root(VALUE self );
VALUE Detect_Implicit_Variables_traverse(VALUE self );
VALUE Detect_Implicit_Variables_traverse_item(VALUE self );
VALUE Detect_Implicit_Variables_visit(VALUE self );
VALUE switchhash_Detect_Implicit_Variables_1;
VALUE switchhash_Detect_Implicit_Variables_2;
static VALUE sy_Detect_Implicit_Variables__append_lp__d113;
static VALUE sy_Detect_Implicit_Variables__at_vars_a187;
static VALUE sy_Detect_Implicit_Variables__at_vars_eq_Ha_dec8;
static VALUE sy_Detect_Implicit_Variables__at_vars_lb_bi_edce;
static VALUE sy_Detect_Implicit_Variables__lp_src_dot_ins_a413;
VALUE Detect_Implicit_Variables_root(VALUE self ){VALUE vals[0];  VALUE var0; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_eq_Ha_dec8,1,bind2);  it=Detect_Implicit_Variables_traverse(self ); FAILTEST(fail);it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_a187,1,bind2); var0/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Detect_Implicit_Variables_traverse(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1; int stop1=0; while(1){oldpos1=ptr->pos; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
;goto accept2;
alt1_2: ptr->pos=oldpos2;stop1=1;
;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
 if (stop1) goto accept1; } break1: goto fail; accept1:;   it=rb_funcall(self,sy_Detect_Implicit_Variables__lp_src_dot_ins_a413,1,bind2); var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var0/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var1/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var2/*autovar*/=it;;
int oldpos3; int stop2=0; while(1){oldpos3=ptr->pos; int oldpos4=ptr->pos;int cut2=0;
alt2_1:;  it=Detect_Implicit_Variables_traverse_item(self ); FAILTEST(alt2_2); var3/*autovar*/=it;;
bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_Detect_Implicit_Variables__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);;
;goto accept4;
alt2_2: ptr->pos=oldpos4;stop2=1;
;goto accept4;
alt2_3: ptr->pos=oldpos4;goto break2;
 accept4:;
 if (stop2) goto accept3; } break2: goto pass2; accept3:;   it=var2/*autovar*/; var4/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=var4/*autovar*/; var5/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var5/*autovar*/; var6/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Detect_Implicit_Variables_traverse_item(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Implicit_Variables_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Detect_Implicit_Variables_visit(self ); FAILTEST(alt1_2); var0/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Detect_Implicit_Variables_traverse(self ); FAILTEST(pass1); var2/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_3;
                   success1: *ptr=oldpass1;
                it=var2/*autovar*/; var0/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); var0/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=Detect_Implicit_Variables_visit(self ); FAILTEST(alt2_2); var0/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var4/*autovar*/=it;;
int oldpos3; int stop1=0; while(1){oldpos3=ptr->pos; int oldpos4=ptr->pos;int cut3=0;
alt3_1:;  it=Detect_Implicit_Variables_traverse_item(self ); FAILTEST(alt3_2); var5/*autovar*/=it;;
bind_aset(bind2,1,var4/*autovar*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_Detect_Implicit_Variables__append_lp__d113,1,bind2);var4/*autovar*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);;
;goto accept4;
alt3_2: ptr->pos=oldpos4;stop1=1;
;goto accept4;
alt3_3: ptr->pos=oldpos4;goto break1;
 accept4:;
 if (stop1) goto accept3; } break1: goto pass2; accept3:;   it=var4/*autovar*/; var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_3;
                   success2: *ptr=oldpass2;
                it=var6/*autovar*/; var0/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); var0/*_result*/=it;;

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Object*/:; int oldpos5=ptr->pos;int cut4=0;
alt4_1:;  it=Detect_Implicit_Variables_visit(self ); FAILTEST(alt4_2); var0/*_result*/=it;;

;goto accept5;
alt4_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); var0/*_result*/=it;;

;goto accept5;
alt4_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Implicit_Variables_visit(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Implicit_Variables_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var1/*name*/=it;;
bind_aset(bind2,1,var1/*name*/);it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_lb_bi_edce,1,bind2);var1/*name*/=bind_aget(bind2,1);;it=rb_ary_new3(0); var2/*autovar*/=it;;
int oldpos1; int stop1=0; while(1){oldpos1=ptr->pos; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); var3/*autovar*/=it;;
bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_Detect_Implicit_Variables__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);;
;goto accept2;
alt1_2: ptr->pos=oldpos2;stop1=1;
;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
 if (stop1) goto accept1; } break1: goto pass1; accept1:;   it=var2/*autovar*/; var4/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var4/*autovar*/; var5/*_result*/=it;;
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }VALUE cls_Add_Implicit_Variables;
VALUE Add_Implicit_Variables_root(VALUE self );
VALUE Add_Implicit_Variables_traverse(VALUE self );
VALUE Add_Implicit_Variables_traverse_item(VALUE self );
VALUE Add_Implicit_Variables_visit(VALUE self );
VALUE AmethystCore_anything(VALUE self );
VALUE switchhash_Add_Implicit_Variables_1;
VALUE switchhash_Add_Implicit_Variables_2;
VALUE switchhash_Add_Implicit_Variables_3;
static VALUE sy_Add_Implicit_Variables__at_bnding_eq__b94a;
static VALUE sy_Add_Implicit_Variables__at_changed_5352;
static VALUE sy_Add_Implicit_Variables__at_changed_b885;
static VALUE sy_Add_Implicit_Variables__at_changed_c681;
static VALUE sy_Add_Implicit_Variables__at_locals_eq__545d;
static VALUE sy_Add_Implicit_Variables__at_vars_eq_bi_1ca4;
static VALUE sy_Add_Implicit_Variables__lp__at_vars_lb_b_160d;
static VALUE sy_Add_Implicit_Variables__lp__at_vars_lb_b_5cb3;
static VALUE sy_Add_Implicit_Variables__lp_bind_lb_1_rb__ee3d;
static VALUE sy_Add_Implicit_Variables__lp_src_dot_ins_6a75;
static VALUE sy_Add_Implicit_Variables_bind_lb_1_rb__dot__1ef4;
static VALUE sy_Add_Implicit_Variables_bind_lb_1_rb__lt__7b20;
static VALUE sy_Add_Implicit_Variables_if_sp_bind_lb__8e0b;
static VALUE sy_Add_Implicit_Variables_l_eq_Local_lb__2887;
static VALUE sy_Add_Implicit_Variables_l_eq_Local_lb__a11b;
static VALUE sy_Add_Implicit_Variables_src_25d9;
VALUE Add_Implicit_Variables_root(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); var0/*autovar*/=it;;
bind_aset(bind2,1,var0/*autovar*/);it=rb_funcall(self,sy_Add_Implicit_Variables__at_vars_eq_bi_1ca4,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;switch(FIX2LONG(rb_hash_aref(switchhash_Add_Implicit_Variables_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
 break;
case 1/*Object*/:; goto fail; break;
}cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Add_Implicit_Variables__at_bnding_eq__b94a,1,bind2);it=rb_funcall(self,sy_Add_Implicit_Variables__at_locals_eq__545d,1,bind2);  it=Add_Implicit_Variables_traverse(self ); FAILTEST(pass1); var2/*t*/=it;;
bind_aset(bind2,1,var2/*t*/);it=rb_funcall(self,sy_Add_Implicit_Variables_bind_lb_1_rb__dot__1ef4,1,bind2);var2/*t*/=bind_aget(bind2,1);; var3/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var3/*autovar*/; var4/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Add_Implicit_Variables_traverse(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1; int stop1=0; while(1){oldpos1=ptr->pos; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
;goto accept2;
alt1_2: ptr->pos=oldpos2;stop1=1;
;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
 if (stop1) goto accept1; } break1: goto fail; accept1:;   it=rb_funcall(self,sy_Add_Implicit_Variables__at_changed_c681,1,bind2); var0/*oldchanged*/=it;;
it=rb_funcall(self,sy_Add_Implicit_Variables_src_25d9,1,bind2); var1/*this*/=it;;
it=Qnil; var2/*clon*/=it;;
it=Qfalse; var3/*changed*/=it;;
it=rb_funcall(self,sy_Add_Implicit_Variables__lp_src_dot_ins_6a75,1,bind2); var4/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var4/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var5/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos3; int stop2=0; while(1){oldpos3=ptr->pos; int oldpos4=ptr->pos;int cut2=0;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); var6/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); var7/*key*/=it;;
it=rb_funcall(self,sy_Add_Implicit_Variables__at_changed_b885,1,bind2);  it=Add_Implicit_Variables_traverse_item(self ); FAILTEST(pass3); var8/*val*/=it;;
bind_aset(bind2,1,var2/*clon*/);bind_aset(bind2,2,var1/*this*/);bind_aset(bind2,3,var3/*changed*/);bind_aset(bind2,4,var7/*key*/);bind_aset(bind2,5,var8/*val*/);it=rb_funcall(self,sy_Add_Implicit_Variables__lp_bind_lb_1_rb__ee3d,1,bind2);var2/*clon*/=bind_aget(bind2,1);;var1/*this*/=bind_aget(bind2,2);;var3/*changed*/=bind_aget(bind2,3);;var7/*key*/=bind_aget(bind2,4);;var8/*val*/=bind_aget(bind2,5);;it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt2_2;
                   success3: *ptr=oldpass3;
                
;goto accept4;
alt2_2: ptr->pos=oldpos4;stop2=1;
;goto accept4;
alt2_3: ptr->pos=oldpos4;goto break2;
 accept4:;
 if (stop2) goto accept3; } break2: goto pass2; accept3:;   it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,var3/*changed*/);bind_aset(bind2,2,var2/*clon*/);bind_aset(bind2,3,var0/*oldchanged*/);it=rb_funcall(self,sy_Add_Implicit_Variables_if_sp_bind_lb__8e0b,1,bind2);var3/*changed*/=bind_aget(bind2,1);;var2/*clon*/=bind_aget(bind2,2);;var0/*oldchanged*/=bind_aget(bind2,3);; var9/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Add_Implicit_Variables_traverse_item(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Add_Implicit_Variables_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Add_Implicit_Variables_visit(self ); FAILTEST(alt1_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Add_Implicit_Variables__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; var2/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Add_Implicit_Variables_traverse(self ); FAILTEST(pass1); var3/*autovar*/=it;;
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
alt2_1:;  it=Add_Implicit_Variables_visit(self ); FAILTEST(alt2_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Add_Implicit_Variables__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var5/*ar*/=it;;
int oldpos3; int stop1=0; while(1){oldpos3=ptr->pos; int oldpos4=ptr->pos;int cut3=0;
alt3_1:;  it=Add_Implicit_Variables_traverse_item(self ); FAILTEST(alt3_2); var6/*it*/=it;;
bind_aset(bind2,1,var5/*ar*/);bind_aset(bind2,2,var6/*it*/);it=rb_funcall(self,sy_Add_Implicit_Variables_bind_lb_1_rb__lt__7b20,1,bind2);var5/*ar*/=bind_aget(bind2,1);;var6/*it*/=bind_aget(bind2,2);;
;goto accept4;
alt3_2: ptr->pos=oldpos4;stop1=1;
;goto accept4;
alt3_3: ptr->pos=oldpos4;goto break1;
 accept4:;
 if (stop1) goto accept3; } break1: goto pass2; accept3:;   it=var5/*ar*/; var7/*autovar*/=it;;
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
case 2/*Object*/:; int oldpos5=ptr->pos;int cut4=0;
alt4_1:;  it=Add_Implicit_Variables_visit(self ); FAILTEST(alt4_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Add_Implicit_Variables__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept5;
alt4_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); var1/*_result*/=it;;

;goto accept5;
alt4_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
}
return it;
fail: return failobj; }
VALUE Add_Implicit_Variables_visit(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Add_Implicit_Variables_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
it=var0/*autovar*/; var1/*autovar*/=it;;
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=var1/*autovar*/; var2/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var3/*name*/=it;;
int oldpos2; int stop1=0; while(1){oldpos2=ptr->pos; int oldpos3=ptr->pos;int cut2=0;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2);
;goto accept3;
alt2_2: ptr->pos=oldpos3;stop1=1;
;goto accept3;
alt2_3: ptr->pos=oldpos3;goto break1;
 accept3:;
 if (stop1) goto accept2; } break1: goto pass1; accept2:;   bind_aset(bind2,1,var3/*name*/);it=rb_funcall(self,sy_Add_Implicit_Variables__lp__at_vars_lb_b_160d,1,bind2);var3/*name*/=bind_aget(bind2,1);;FAILTEST(pass1);bind_aset(bind2,1,var3/*name*/);it=rb_funcall(self,sy_Add_Implicit_Variables_l_eq_Local_lb__a11b,1,bind2);var3/*name*/=bind_aget(bind2,1);; var4/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var4/*autovar*/; var5/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=var1/*autovar*/; var6/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var3/*name*/=it;;
int oldpos4; int stop2=0; while(1){oldpos4=ptr->pos; int oldpos5=ptr->pos;int cut3=0;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2);
;goto accept5;
alt3_2: ptr->pos=oldpos5;stop2=1;
;goto accept5;
alt3_3: ptr->pos=oldpos5;goto break2;
 accept5:;
 if (stop2) goto accept4; } break2: goto pass2; accept4:;   bind_aset(bind2,1,var3/*name*/);it=rb_funcall(self,sy_Add_Implicit_Variables__lp__at_vars_lb_b_5cb3,1,bind2);var3/*name*/=bind_aget(bind2,1);;FAILTEST(pass2);bind_aset(bind2,1,var3/*name*/);it=rb_funcall(self,sy_Add_Implicit_Variables_l_eq_Local_lb__2887,1,bind2);var3/*name*/=bind_aget(bind2,1);; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_3;
                   success2: *ptr=oldpass2;
                it=var7/*autovar*/; var5/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_implicit_variables_c(){ 
 cls_Detect_Implicit_Variables=rb_define_class("Detect_Implicit_Variables",rb_const_get(rb_cObject,rb_intern("Visitor"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Detect_Implicit_Variables_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Implicit_Variables_1);;
switchhash_Detect_Implicit_Variables_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Implicit_Variables_2);;
sy_Detect_Implicit_Variables__append_lp__d113=rb_intern("Detect_Implicit_Variables__append_lp__d113");
sy_Detect_Implicit_Variables__at_vars_a187=rb_intern("Detect_Implicit_Variables__at_vars_a187");
sy_Detect_Implicit_Variables__at_vars_eq_Ha_dec8=rb_intern("Detect_Implicit_Variables__at_vars_eq_Ha_dec8");
sy_Detect_Implicit_Variables__at_vars_lb_bi_edce=rb_intern("Detect_Implicit_Variables__at_vars_lb_bi_edce");
sy_Detect_Implicit_Variables__lp_src_dot_ins_a413=rb_intern("Detect_Implicit_Variables__lp_src_dot_ins_a413");
                    rb_define_method(cls_Detect_Implicit_Variables,"root",Detect_Implicit_Variables_root,0);
rb_define_method(cls_Detect_Implicit_Variables,"traverse",Detect_Implicit_Variables_traverse,0);
rb_define_method(cls_Detect_Implicit_Variables,"traverse_item",Detect_Implicit_Variables_traverse_item,0);
rb_define_method(cls_Detect_Implicit_Variables,"visit",Detect_Implicit_Variables_visit,0);
                   
 cls_Add_Implicit_Variables=rb_define_class("Add_Implicit_Variables",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Add_Implicit_Variables_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Add_Implicit_Variables_1);;
switchhash_Add_Implicit_Variables_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Add_Implicit_Variables_2);;
switchhash_Add_Implicit_Variables_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Add_Implicit_Variables_3);;
sy_Add_Implicit_Variables__at_bnding_eq__b94a=rb_intern("Add_Implicit_Variables__at_bnding_eq__b94a");
sy_Add_Implicit_Variables__at_changed_5352=rb_intern("Add_Implicit_Variables__at_changed_5352");
sy_Add_Implicit_Variables__at_changed_b885=rb_intern("Add_Implicit_Variables__at_changed_b885");
sy_Add_Implicit_Variables__at_changed_c681=rb_intern("Add_Implicit_Variables__at_changed_c681");
sy_Add_Implicit_Variables__at_locals_eq__545d=rb_intern("Add_Implicit_Variables__at_locals_eq__545d");
sy_Add_Implicit_Variables__at_vars_eq_bi_1ca4=rb_intern("Add_Implicit_Variables__at_vars_eq_bi_1ca4");
sy_Add_Implicit_Variables__lp__at_vars_lb_b_160d=rb_intern("Add_Implicit_Variables__lp__at_vars_lb_b_160d");
sy_Add_Implicit_Variables__lp__at_vars_lb_b_5cb3=rb_intern("Add_Implicit_Variables__lp__at_vars_lb_b_5cb3");
sy_Add_Implicit_Variables__lp_bind_lb_1_rb__ee3d=rb_intern("Add_Implicit_Variables__lp_bind_lb_1_rb__ee3d");
sy_Add_Implicit_Variables__lp_src_dot_ins_6a75=rb_intern("Add_Implicit_Variables__lp_src_dot_ins_6a75");
sy_Add_Implicit_Variables_bind_lb_1_rb__dot__1ef4=rb_intern("Add_Implicit_Variables_bind_lb_1_rb__dot__1ef4");
sy_Add_Implicit_Variables_bind_lb_1_rb__lt__7b20=rb_intern("Add_Implicit_Variables_bind_lb_1_rb__lt__7b20");
sy_Add_Implicit_Variables_if_sp_bind_lb__8e0b=rb_intern("Add_Implicit_Variables_if_sp_bind_lb__8e0b");
sy_Add_Implicit_Variables_l_eq_Local_lb__2887=rb_intern("Add_Implicit_Variables_l_eq_Local_lb__2887");
sy_Add_Implicit_Variables_l_eq_Local_lb__a11b=rb_intern("Add_Implicit_Variables_l_eq_Local_lb__a11b");
sy_Add_Implicit_Variables_src_25d9=rb_intern("Add_Implicit_Variables_src_25d9");
                    rb_define_method(cls_Add_Implicit_Variables,"root",Add_Implicit_Variables_root,0);
rb_define_method(cls_Add_Implicit_Variables,"traverse",Add_Implicit_Variables_traverse,0);
rb_define_method(cls_Add_Implicit_Variables,"traverse_item",Add_Implicit_Variables_traverse_item,0);
rb_define_method(cls_Add_Implicit_Variables,"visit",Add_Implicit_Variables_visit,0);
                    rb_eval_string("testversionimplicit_variables('ede133e85b06ba555e179b6f7c9ad49e')");}
