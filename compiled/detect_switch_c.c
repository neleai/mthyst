#include "cthyst.h"
VALUE cls_First_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE First_Dataflow_first(VALUE self );
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE First_Dataflow_root(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE switchhash_First_Dataflow_1;
static VALUE sy_First_Dataflow_Compiler_558e;
static VALUE sy_First_Dataflow__append_lp__d113;
static VALUE sy_First_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_First_Dataflow__d41d;
static VALUE sy_First_Dataflow__lp_;
static VALUE sy_First_Dataflow__lp_Compile_7f7b;
static VALUE sy_First_Dataflow_bind_lb_1_rb_;
static VALUE sy_First_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_First_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_First_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_First_Dataflow_depends_lp__7463;
static VALUE sy_First_Dataflow_lattice_dot__5a9e;
static VALUE sy_First_Dataflow_lattice_dot__b0f6;
static VALUE sy_analyze;
VALUE First_Dataflow_first(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17;VALUE var18;VALUE var19;VALUE var20;VALUE var21;VALUE var22;VALUE var23;VALUE var24;VALUE var25;VALUE var26;VALUE var27; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_First_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind2); var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var1/*autovar*/; var2/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var4/*name*/=it;;
bind_aset(bind2,1,var4/*name*/);it=rb_funcall(self,sy_First_Dataflow__lp_Compile_7f7b,1,bind2);var4/*name*/=bind_aget(bind2,1);;FAILTEST(pass2);bind_aset(bind2,1,var4/*name*/);it=rb_funcall(self,sy_First_Dataflow_Compiler_558e,1,bind2);var4/*name*/=bind_aget(bind2,1);; var5/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var5/*autovar*/;ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass3); var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=var6/*autovar*/; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=var7/*autovar*/; var2/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var8/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var8/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass4); var9/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                it=var9/*autovar*/; var2/*_result*/=it;;

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var10/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass5); var11/*val*/=it;;
bind_aset(bind2,1,var11/*val*/);it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb_,1,bind2);var11/*val*/=bind_aget(bind2,1);; var12/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_2;
                   success5: *ptr=oldpass5;
                it=var12/*autovar*/; var2/*_result*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;int cut5=0;
alt5_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var13/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var13/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var14/*autovar*/=it;;
int oldpos6;  while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); var15/*autovar*/=it;;
bind_aset(bind2,1,var14/*autovar*/);bind_aset(bind2,2,var15/*autovar*/);it=rb_funcall(self,sy_First_Dataflow__append_lp__d113,1,bind2);var14/*autovar*/=bind_aget(bind2,1);;var15/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos6;   it=var14/*autovar*/; var16/*vals*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt5_2;
                   success6: *ptr=oldpass6;
                bind_aset(bind2,1,var16/*vals*/);it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);var16/*vals*/=bind_aget(bind2,1);; var2/*_result*/=it;;

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;int cut6=0;
alt6_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var17/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var17/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind2); var11/*val*/=it;;
int oldpos8;  while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); var18/*el*/=it;;
it=var18/*el*/; var19/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var19/*autovar*/;ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass8); var20/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break2;
                   success8: *ptr=oldpass8;
                it=var20/*autovar*/; var21/*nev*/=it;;
bind_aset(bind2,1,var11/*val*/);bind_aset(bind2,2,var21/*nev*/);it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);var11/*val*/=bind_aget(bind2,1);;var21/*nev*/=bind_aget(bind2,2);; var11/*val*/=it;;
int oldpos9=ptr->pos;int cut7=0;
alt7_1:;bind_aset(bind2,1,var18/*el*/);it=rb_funcall(self,sy_First_Dataflow__lp_,1,bind2);var18/*el*/=bind_aget(bind2,1);;FAILTEST(alt7_2);ptr->pos=ptr->len;
;goto accept9;
alt7_2: ptr->pos=oldpos9;it=rb_funcall(self,sy_First_Dataflow__d41d,1,bind2);
;goto accept9;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept9:;
 } break2: ptr->pos=oldpos8;   it=var11/*val*/; var22/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt6_2;
                   success7: *ptr=oldpass7;
                it=var22/*autovar*/; var2/*_result*/=it;;

;goto accept7;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept7;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept7:;
 break;
case 13/*Switch*/:; it=rb_ary_new3(0); var16/*vals*/=it;;
int oldpos10=ptr->pos;int cut8=0;
alt8_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var23/*autovar*/=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var23/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos11;  while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); var24/*autovar*/=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var24/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); var25/*p*/=it;;
  it=First_Dataflow_value(self ); FAILTEST(pass10); var26/*v*/=it;;
bind_aset(bind2,1,var25/*p*/);bind_aset(bind2,2,var26/*v*/);it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);var25/*p*/=bind_aget(bind2,1);;var26/*v*/=bind_aget(bind2,2);; var27/*autovar*/=it;;
bind_aset(bind2,1,var16/*vals*/);bind_aset(bind2,2,var27/*autovar*/);it=rb_funcall(self,sy_First_Dataflow__append_lp__d113,1,bind2);var16/*vals*/=bind_aget(bind2,1);;var27/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto break3;
                   success10: *ptr=oldpass10;
                 } break3: ptr->pos=oldpos11;   it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt8_2;
                   success9: *ptr=oldpass9;
                bind_aset(bind2,1,var16/*vals*/);it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);var16/*vals*/=bind_aget(bind2,1);; var2/*_result*/=it;;

;goto accept10;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept10;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept10:;
 break;
case 14/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3; ;VALUE bind2=bind_new2(16); var0/*v*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
bind_aset(bind2,1,var0/*v*/);it=rb_funcall(self,sy_First_Dataflow__at_vis_eq_bin_8b89,1,bind2);var0/*v*/=bind_aget(bind2,1);; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var1/*autovar*/;ptr->len=1;
                     it=First_Dataflow_first(self ); FAILTEST(pass1); var2/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var2/*autovar*/; var3/*_result*/=it;;

return it;
fail: return failobj; }
VALUE First_Dataflow_root(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); var0/*x*/=it;;
 it=var0/*x*/; arg0=it; it=rb_funcall(self,sy_analyze,1,arg0); FAILTEST(fail); var1/*_result*/=it;;

return it;
fail: return failobj; }
VALUE First_Dataflow_value(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); var0/*x*/=it;;
bind_aset(bind2,1,var0/*x*/);it=rb_funcall(self,sy_First_Dataflow_depends_lp__7463,1,bind2);var0/*x*/=bind_aget(bind2,1);; var1/*_result*/=it;;

return it;
fail: return failobj; }VALUE cls_Minsize_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Minsize_Dataflow_first(VALUE self );
VALUE Minsize_Dataflow_first_Minsize_Dataflow(VALUE self );
VALUE Minsize_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Minsize_Dataflow_1;
VALUE switchhash_Minsize_Dataflow_2;
VALUE switchhash_Minsize_Dataflow_3;
static VALUE sy_Minsize_Dataflow_Compiler_558e;
static VALUE sy_Minsize_Dataflow__append_lp__d113;
static VALUE sy_Minsize_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Minsize_Dataflow__d41d;
static VALUE sy_Minsize_Dataflow__lp_;
static VALUE sy_Minsize_Dataflow__lp_Compile_7f7b;
static VALUE sy_Minsize_Dataflow_bind_lb_1_rb_;
static VALUE sy_Minsize_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_Minsize_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_Minsize_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_Minsize_Dataflow_lattice_dot__5a9e;
static VALUE sy_Minsize_Dataflow_lattice_dot__b0f6;
static VALUE sy_Minsize_Dataflow_lattice_dot__e0e5;
static VALUE sy_Minsize_Dataflow_lattice_lb__bbba;
static VALUE sy_Minsize_Dataflow_lattice_lb__fdee;
VALUE Minsize_Dataflow_first(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Minsize_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var1/*autovar*/=it;;
it=var1/*autovar*/; var2/*autovar*/=it;;
switch(FIX2LONG(rb_hash_aref(switchhash_Minsize_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=var2/*autovar*/; var3/*autovar*/=it;;
int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=var3/*autovar*/; var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass2; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass2; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=ame_curobj2(ptr)               ;ptr->pos++; var5/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); var6/*str*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt2_2;
                   success3: *ptr=oldpass3;
                bind_aset(bind2,1,var6/*str*/);it=rb_funcall(self,sy_Minsize_Dataflow_lattice_lb__bbba,1,bind2);var6/*str*/=bind_aget(bind2,1);; var7/*autovar*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=var3/*autovar*/; var8/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var8/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... 'b':;case 'd' ... 'q':;case 's' ... UC(255):; goto pass4; break;
case 'r' ... 'r':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4; else goto pass4; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos3=ptr->pos;int cut3=0;
alt3_1:;if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7; else goto alt3_2;
;goto accept3;
alt3_2: ptr->pos=oldpos3;if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11; else goto alt3_3;
;goto accept3;
alt3_3: ptr->pos=oldpos3;if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11; else goto alt3_4;
;goto accept3;
alt3_4: ptr->pos=oldpos3;goto pass4;
 accept3:;
 break;
case 'c' ... 'c':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3; else goto pass4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt2_3;
                   success4: *ptr=oldpass4;
                ptr->pos=ptr->len;it=rb_funcall(self,sy_Minsize_Dataflow_lattice_lb__fdee,1,bind2); var7/*autovar*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;it=var3/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass5; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass5; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt2_4;
                   success5: *ptr=oldpass5;
                it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__e0e5,1,bind2); var7/*autovar*/=it;;

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto pass1;
 accept2:;
 break;
case 1/*Object*/:; it=var2/*autovar*/; var10/*autovar*/=it;;
int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=var10/*autovar*/; var4/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass6);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass6; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass6; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt4_2;
                   success6: *ptr=oldpass6;
                goto alt4_2;
;goto accept4;
alt4_2: ptr->pos=oldpos4;it=var10/*autovar*/; var8/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var8/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass7);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... 'b':;case 'd' ... 'q':;case 's' ... UC(255):; goto pass7; break;
case 'r' ... 'r':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4; else goto pass7; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos5=ptr->pos;int cut5=0;
alt5_1:;if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7; else goto alt5_2;
;goto accept5;
alt5_2: ptr->pos=oldpos5;if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11; else goto alt5_3;
;goto accept5;
alt5_3: ptr->pos=oldpos5;if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11; else goto alt5_4;
;goto accept5;
alt5_4: ptr->pos=oldpos5;goto pass7;
 accept5:;
 break;
case 'c' ... 'c':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3; else goto pass7; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt4_3;
                   success7: *ptr=oldpass7;
                ptr->pos=ptr->len;it=rb_funcall(self,sy_Minsize_Dataflow_lattice_lb__fdee,1,bind2); var7/*autovar*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;it=var10/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass8);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass8; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass8; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt4_4;
                   success8: *ptr=oldpass8;
                it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__e0e5,1,bind2); var7/*autovar*/=it;;

;goto accept4;
alt4_4: ptr->pos=oldpos4;goto pass1;
 accept4:;
 break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var7/*autovar*/; var11/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Minsize_Dataflow_first_Minsize_Dataflow(self ); FAILTEST(alt1_3); var11/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:;   it=Minsize_Dataflow_first_Minsize_Dataflow(self ); FAILTEST(fail); var11/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE Minsize_Dataflow_first_Minsize_Dataflow(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17;VALUE var18;VALUE var19;VALUE var20;VALUE var21;VALUE var22;VALUE var23;VALUE var24;VALUE var25;VALUE var26;VALUE var27; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Minsize_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__5a9e,1,bind2); var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var1/*autovar*/; var2/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var4/*name*/=it;;
bind_aset(bind2,1,var4/*name*/);it=rb_funcall(self,sy_Minsize_Dataflow__lp_Compile_7f7b,1,bind2);var4/*name*/=bind_aget(bind2,1);;FAILTEST(pass2);bind_aset(bind2,1,var4/*name*/);it=rb_funcall(self,sy_Minsize_Dataflow_Compiler_558e,1,bind2);var4/*name*/=bind_aget(bind2,1);; var5/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var5/*autovar*/;ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass3); var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=var6/*autovar*/; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=var7/*autovar*/; var2/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var8/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var8/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass4); var9/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                it=var9/*autovar*/; var2/*_result*/=it;;

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var10/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass5); var11/*val*/=it;;
bind_aset(bind2,1,var11/*val*/);it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb_,1,bind2);var11/*val*/=bind_aget(bind2,1);; var12/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_2;
                   success5: *ptr=oldpass5;
                it=var12/*autovar*/; var2/*_result*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;int cut5=0;
alt5_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var13/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var13/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var14/*autovar*/=it;;
int oldpos6;  while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); var15/*autovar*/=it;;
bind_aset(bind2,1,var14/*autovar*/);bind_aset(bind2,2,var15/*autovar*/);it=rb_funcall(self,sy_Minsize_Dataflow__append_lp__d113,1,bind2);var14/*autovar*/=bind_aget(bind2,1);;var15/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos6;   it=var14/*autovar*/; var16/*vals*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt5_2;
                   success6: *ptr=oldpass6;
                bind_aset(bind2,1,var16/*vals*/);it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);var16/*vals*/=bind_aget(bind2,1);; var2/*_result*/=it;;

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;int cut6=0;
alt6_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var17/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var17/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__5a9e,1,bind2); var11/*val*/=it;;
int oldpos8;  while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); var18/*el*/=it;;
it=var18/*el*/; var19/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var19/*autovar*/;ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass8); var20/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break2;
                   success8: *ptr=oldpass8;
                it=var20/*autovar*/; var21/*nev*/=it;;
bind_aset(bind2,1,var11/*val*/);bind_aset(bind2,2,var21/*nev*/);it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);var11/*val*/=bind_aget(bind2,1);;var21/*nev*/=bind_aget(bind2,2);; var11/*val*/=it;;
int oldpos9=ptr->pos;int cut7=0;
alt7_1:;bind_aset(bind2,1,var18/*el*/);it=rb_funcall(self,sy_Minsize_Dataflow__lp_,1,bind2);var18/*el*/=bind_aget(bind2,1);;FAILTEST(alt7_2);ptr->pos=ptr->len;
;goto accept9;
alt7_2: ptr->pos=oldpos9;it=rb_funcall(self,sy_Minsize_Dataflow__d41d,1,bind2);
;goto accept9;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept9:;
 } break2: ptr->pos=oldpos8;   it=var11/*val*/; var22/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt6_2;
                   success7: *ptr=oldpass7;
                it=var22/*autovar*/; var2/*_result*/=it;;

;goto accept7;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept7;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept7:;
 break;
case 13/*Switch*/:; it=rb_ary_new3(0); var16/*vals*/=it;;
int oldpos10=ptr->pos;int cut8=0;
alt8_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var23/*autovar*/=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var23/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos11;  while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); var24/*autovar*/=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var24/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); var25/*p*/=it;;
  it=First_Dataflow_value(self ); FAILTEST(pass10); var26/*v*/=it;;
bind_aset(bind2,1,var25/*p*/);bind_aset(bind2,2,var26/*v*/);it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);var25/*p*/=bind_aget(bind2,1);;var26/*v*/=bind_aget(bind2,2);; var27/*autovar*/=it;;
bind_aset(bind2,1,var16/*vals*/);bind_aset(bind2,2,var27/*autovar*/);it=rb_funcall(self,sy_Minsize_Dataflow__append_lp__d113,1,bind2);var16/*vals*/=bind_aget(bind2,1);;var27/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto break3;
                   success10: *ptr=oldpass10;
                 } break3: ptr->pos=oldpos11;   it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt8_2;
                   success9: *ptr=oldpass9;
                bind_aset(bind2,1,var16/*vals*/);it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);var16/*vals*/=bind_aget(bind2,1);; var2/*_result*/=it;;

;goto accept10;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept10;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept10:;
 break;
case 14/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE Minsize_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3; ;VALUE bind2=bind_new2(16); var0/*v*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
bind_aset(bind2,1,var0/*v*/);it=rb_funcall(self,sy_Minsize_Dataflow__at_vis_eq_bin_8b89,1,bind2);var0/*v*/=bind_aget(bind2,1);; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var1/*autovar*/;ptr->len=1;
                     it=Minsize_Dataflow_first(self ); FAILTEST(pass1); var2/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var2/*autovar*/; var3/*_result*/=it;;

return it;
fail: return failobj; }VALUE cls_Maxsize_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Maxsize_Dataflow_first(VALUE self );
VALUE Maxsize_Dataflow_first_Maxsize_Dataflow(VALUE self );
VALUE Maxsize_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Maxsize_Dataflow_1;
VALUE switchhash_Maxsize_Dataflow_2;
VALUE switchhash_Maxsize_Dataflow_3;
static VALUE sy_Maxsize_Dataflow_Compiler_558e;
static VALUE sy_Maxsize_Dataflow__append_lp__d113;
static VALUE sy_Maxsize_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Maxsize_Dataflow__d41d;
static VALUE sy_Maxsize_Dataflow__lp_;
static VALUE sy_Maxsize_Dataflow__lp_Compile_7f7b;
static VALUE sy_Maxsize_Dataflow_bind_lb_1_rb_;
static VALUE sy_Maxsize_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_Maxsize_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_Maxsize_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_Maxsize_Dataflow_lattice_dot__5a9e;
static VALUE sy_Maxsize_Dataflow_lattice_dot__b0f6;
static VALUE sy_Maxsize_Dataflow_lattice_dot__e0e5;
static VALUE sy_Maxsize_Dataflow_lattice_lb__bbba;
static VALUE sy_Maxsize_Dataflow_lattice_lb__fdee;
VALUE Maxsize_Dataflow_first(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Maxsize_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var1/*autovar*/=it;;
it=var1/*autovar*/; var2/*autovar*/=it;;
switch(FIX2LONG(rb_hash_aref(switchhash_Maxsize_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=var2/*autovar*/; var3/*autovar*/=it;;
int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=var3/*autovar*/; var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass2; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass2; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=ame_curobj2(ptr)               ;ptr->pos++; var5/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); var6/*str*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt2_2;
                   success3: *ptr=oldpass3;
                bind_aset(bind2,1,var6/*str*/);it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_lb__bbba,1,bind2);var6/*str*/=bind_aget(bind2,1);; var7/*autovar*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=var3/*autovar*/; var8/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var8/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... 'b':;case 'd' ... 'q':;case 's' ... UC(255):; goto pass4; break;
case 'r' ... 'r':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4; else goto pass4; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos3=ptr->pos;int cut3=0;
alt3_1:;if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7; else goto alt3_2;
;goto accept3;
alt3_2: ptr->pos=oldpos3;if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11; else goto alt3_3;
;goto accept3;
alt3_3: ptr->pos=oldpos3;if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11; else goto alt3_4;
;goto accept3;
alt3_4: ptr->pos=oldpos3;goto pass4;
 accept3:;
 break;
case 'c' ... 'c':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3; else goto pass4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt2_3;
                   success4: *ptr=oldpass4;
                ptr->pos=ptr->len;it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_lb__fdee,1,bind2); var7/*autovar*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;it=var3/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass5; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass5; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt2_4;
                   success5: *ptr=oldpass5;
                it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__e0e5,1,bind2); var7/*autovar*/=it;;

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto pass1;
 accept2:;
 break;
case 1/*Object*/:; it=var2/*autovar*/; var10/*autovar*/=it;;
int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=var10/*autovar*/; var4/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass6);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass6; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass6; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt4_2;
                   success6: *ptr=oldpass6;
                goto alt4_2;
;goto accept4;
alt4_2: ptr->pos=oldpos4;it=var10/*autovar*/; var8/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var8/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass7);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... 'b':;case 'd' ... 'q':;case 's' ... UC(255):; goto pass7; break;
case 'r' ... 'r':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4; else goto pass7; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos5=ptr->pos;int cut5=0;
alt5_1:;if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7; else goto alt5_2;
;goto accept5;
alt5_2: ptr->pos=oldpos5;if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11; else goto alt5_3;
;goto accept5;
alt5_3: ptr->pos=oldpos5;if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11; else goto alt5_4;
;goto accept5;
alt5_4: ptr->pos=oldpos5;goto pass7;
 accept5:;
 break;
case 'c' ... 'c':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3; else goto pass7; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt4_3;
                   success7: *ptr=oldpass7;
                ptr->pos=ptr->len;it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_lb__fdee,1,bind2); var7/*autovar*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;it=var10/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass8);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass8; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass8; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt4_4;
                   success8: *ptr=oldpass8;
                it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__e0e5,1,bind2); var7/*autovar*/=it;;

;goto accept4;
alt4_4: ptr->pos=oldpos4;goto pass1;
 accept4:;
 break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var7/*autovar*/; var11/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Maxsize_Dataflow_first_Maxsize_Dataflow(self ); FAILTEST(alt1_3); var11/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:;   it=Maxsize_Dataflow_first_Maxsize_Dataflow(self ); FAILTEST(fail); var11/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE Maxsize_Dataflow_first_Maxsize_Dataflow(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17;VALUE var18;VALUE var19;VALUE var20;VALUE var21;VALUE var22;VALUE var23;VALUE var24;VALUE var25;VALUE var26;VALUE var27; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Maxsize_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__5a9e,1,bind2); var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var1/*autovar*/; var2/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var4/*name*/=it;;
bind_aset(bind2,1,var4/*name*/);it=rb_funcall(self,sy_Maxsize_Dataflow__lp_Compile_7f7b,1,bind2);var4/*name*/=bind_aget(bind2,1);;FAILTEST(pass2);bind_aset(bind2,1,var4/*name*/);it=rb_funcall(self,sy_Maxsize_Dataflow_Compiler_558e,1,bind2);var4/*name*/=bind_aget(bind2,1);; var5/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var5/*autovar*/;ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass3); var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=var6/*autovar*/; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=var7/*autovar*/; var2/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var8/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var8/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass4); var9/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                it=var9/*autovar*/; var2/*_result*/=it;;

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var10/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass5); var11/*val*/=it;;
bind_aset(bind2,1,var11/*val*/);it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb_,1,bind2);var11/*val*/=bind_aget(bind2,1);; var12/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_2;
                   success5: *ptr=oldpass5;
                it=var12/*autovar*/; var2/*_result*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;int cut5=0;
alt5_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var13/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var13/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var14/*autovar*/=it;;
int oldpos6;  while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); var15/*autovar*/=it;;
bind_aset(bind2,1,var14/*autovar*/);bind_aset(bind2,2,var15/*autovar*/);it=rb_funcall(self,sy_Maxsize_Dataflow__append_lp__d113,1,bind2);var14/*autovar*/=bind_aget(bind2,1);;var15/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos6;   it=var14/*autovar*/; var16/*vals*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt5_2;
                   success6: *ptr=oldpass6;
                bind_aset(bind2,1,var16/*vals*/);it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);var16/*vals*/=bind_aget(bind2,1);; var2/*_result*/=it;;

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;int cut6=0;
alt6_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var17/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var17/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__5a9e,1,bind2); var11/*val*/=it;;
int oldpos8;  while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); var18/*el*/=it;;
it=var18/*el*/; var19/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var19/*autovar*/;ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass8); var20/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break2;
                   success8: *ptr=oldpass8;
                it=var20/*autovar*/; var21/*nev*/=it;;
bind_aset(bind2,1,var11/*val*/);bind_aset(bind2,2,var21/*nev*/);it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);var11/*val*/=bind_aget(bind2,1);;var21/*nev*/=bind_aget(bind2,2);; var11/*val*/=it;;
int oldpos9=ptr->pos;int cut7=0;
alt7_1:;bind_aset(bind2,1,var18/*el*/);it=rb_funcall(self,sy_Maxsize_Dataflow__lp_,1,bind2);var18/*el*/=bind_aget(bind2,1);;FAILTEST(alt7_2);ptr->pos=ptr->len;
;goto accept9;
alt7_2: ptr->pos=oldpos9;it=rb_funcall(self,sy_Maxsize_Dataflow__d41d,1,bind2);
;goto accept9;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept9:;
 } break2: ptr->pos=oldpos8;   it=var11/*val*/; var22/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt6_2;
                   success7: *ptr=oldpass7;
                it=var22/*autovar*/; var2/*_result*/=it;;

;goto accept7;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept7;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept7:;
 break;
case 13/*Switch*/:; it=rb_ary_new3(0); var16/*vals*/=it;;
int oldpos10=ptr->pos;int cut8=0;
alt8_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var23/*autovar*/=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var23/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos11;  while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); var24/*autovar*/=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var24/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); var25/*p*/=it;;
  it=First_Dataflow_value(self ); FAILTEST(pass10); var26/*v*/=it;;
bind_aset(bind2,1,var25/*p*/);bind_aset(bind2,2,var26/*v*/);it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);var25/*p*/=bind_aget(bind2,1);;var26/*v*/=bind_aget(bind2,2);; var27/*autovar*/=it;;
bind_aset(bind2,1,var16/*vals*/);bind_aset(bind2,2,var27/*autovar*/);it=rb_funcall(self,sy_Maxsize_Dataflow__append_lp__d113,1,bind2);var16/*vals*/=bind_aget(bind2,1);;var27/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto break3;
                   success10: *ptr=oldpass10;
                 } break3: ptr->pos=oldpos11;   it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt8_2;
                   success9: *ptr=oldpass9;
                bind_aset(bind2,1,var16/*vals*/);it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);var16/*vals*/=bind_aget(bind2,1);; var2/*_result*/=it;;

;goto accept10;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept10;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept10:;
 break;
case 14/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE Maxsize_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3; ;VALUE bind2=bind_new2(16); var0/*v*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
bind_aset(bind2,1,var0/*v*/);it=rb_funcall(self,sy_Maxsize_Dataflow__at_vis_eq_bin_8b89,1,bind2);var0/*v*/=bind_aget(bind2,1);; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var1/*autovar*/;ptr->len=1;
                     it=Maxsize_Dataflow_first(self ); FAILTEST(pass1); var2/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var2/*autovar*/; var3/*_result*/=it;;

return it;
fail: return failobj; }VALUE cls_Switch_Char_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Switch_Char_Dataflow_first(VALUE self );
VALUE Switch_Char_Dataflow_first_Switch_Char_Dataflow(VALUE self );
VALUE Switch_Char_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Switch_Char_Dataflow_1;
VALUE switchhash_Switch_Char_Dataflow_2;
VALUE switchhash_Switch_Char_Dataflow_3;
static VALUE sy_Switch_Char_Dataflow_Compiler_558e;
static VALUE sy_Switch_Char_Dataflow__append_lp__d113;
static VALUE sy_Switch_Char_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Switch_Char_Dataflow__d41d;
static VALUE sy_Switch_Char_Dataflow__lp_;
static VALUE sy_Switch_Char_Dataflow__lp_Compile_7f7b;
static VALUE sy_Switch_Char_Dataflow_bind_lb_1_rb_;
static VALUE sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_Switch_Char_Dataflow_firstcha_f284;
static VALUE sy_Switch_Char_Dataflow_lattice_dot__5a9e;
static VALUE sy_Switch_Char_Dataflow_lattice_dot__b0f6;
static VALUE sy_Switch_Char_Dataflow_lattice_dot__e0e5;
static VALUE sy_Switch_Char_Dataflow_regchar_lp__90af;
VALUE Switch_Char_Dataflow_first(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var1/*autovar*/=it;;
it=var1/*autovar*/; var2/*autovar*/=it;;
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=var2/*autovar*/; var3/*autovar*/=it;;
int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=var3/*autovar*/; var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass2; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass2; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                goto alt2_2;
;goto accept2;
alt2_2: ptr->pos=oldpos2;it=var3/*autovar*/; var5/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'q':;case 's' ... UC(255):; goto pass3; break;
case 'r' ... 'r':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4; else goto pass3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt2_3;
                   success3: *ptr=oldpass3;
                it=ame_curobj2(ptr)               ;ptr->pos++; var6/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); var7/*str*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt2_3;
                   success4: *ptr=oldpass4;
                bind_aset(bind2,1,var7/*str*/);it=rb_funcall(self,sy_Switch_Char_Dataflow_regchar_lp__90af,1,bind2);var7/*str*/=bind_aget(bind2,1);; var8/*autovar*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;it=var3/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass5; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7; else goto pass5; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt2_4;
                   success5: *ptr=oldpass5;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__e0e5,1,bind2); var8/*autovar*/=it;;

;goto accept2;
alt2_4: ptr->pos=oldpos2;it=var3/*autovar*/; var10/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass6);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass6; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass6; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt2_5;
                   success6: *ptr=oldpass6;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind2); var8/*autovar*/=it;;

;goto accept2;
alt2_5: ptr->pos=oldpos2;goto pass1;
 accept2:;
 break;
case 1/*CAct*/:; it=var2/*autovar*/; var11/*autovar*/=it;;
int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=var11/*autovar*/; var4/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass7);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass7; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass7; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt3_2;
                   success7: *ptr=oldpass7;
                it=ame_curobj2(ptr)               ;ptr->pos++; var12/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var12/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass8); var7/*str*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt3_2;
                   success8: *ptr=oldpass8;
                bind_aset(bind2,1,var7/*str*/);it=rb_funcall(self,sy_Switch_Char_Dataflow_firstcha_f284,1,bind2);var7/*str*/=bind_aget(bind2,1);; var8/*autovar*/=it;;

;goto accept3;
alt3_2: ptr->pos=oldpos3;it=var11/*autovar*/; var5/*autovar*/=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass9);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'q':;case 's' ... UC(255):; goto pass9; break;
case 'r' ... 'r':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4; else goto pass9; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt3_3;
                   success9: *ptr=oldpass9;
                goto alt3_3;
;goto accept3;
alt3_3: ptr->pos=oldpos3;it=var11/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass10);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass10; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7; else goto pass10; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto alt3_4;
                   success10: *ptr=oldpass10;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__e0e5,1,bind2); var8/*autovar*/=it;;

;goto accept3;
alt3_4: ptr->pos=oldpos3;it=var11/*autovar*/; var10/*autovar*/=it;;
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass11);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass11; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass11; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto alt3_5;
                   success11: *ptr=oldpass11;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind2); var8/*autovar*/=it;;

;goto accept3;
alt3_5: ptr->pos=oldpos3;goto pass1;
 accept3:;
 break;
case 2/*Object*/:; it=var2/*autovar*/; var13/*autovar*/=it;;
int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=var13/*autovar*/; var4/*autovar*/=it;;
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass12);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass12; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass12; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto alt4_2;
                   success12: *ptr=oldpass12;
                goto alt4_2;
;goto accept4;
alt4_2: ptr->pos=oldpos4;it=var13/*autovar*/; var5/*autovar*/=it;;
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass13);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'q':;case 's' ... UC(255):; goto pass13; break;
case 'r' ... 'r':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4; else goto pass13; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass13;
                   goto success13;
                   pass13: *ptr=oldpass13; goto alt4_3;
                   success13: *ptr=oldpass13;
                goto alt4_3;
;goto accept4;
alt4_3: ptr->pos=oldpos4;it=var13/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass14);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass14; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7; else goto pass14; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto alt4_4;
                   success14: *ptr=oldpass14;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__e0e5,1,bind2); var8/*autovar*/=it;;

;goto accept4;
alt4_4: ptr->pos=oldpos4;it=var13/*autovar*/; var10/*autovar*/=it;;
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass15);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass15; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass15; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass15;
                   goto success15;
                   pass15: *ptr=oldpass15; goto alt4_5;
                   success15: *ptr=oldpass15;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind2); var8/*autovar*/=it;;

;goto accept4;
alt4_5: ptr->pos=oldpos4;goto pass1;
 accept4:;
 break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var8/*autovar*/; var14/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Switch_Char_Dataflow_first_Switch_Char_Dataflow(self ); FAILTEST(alt1_3); var14/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:;   it=Switch_Char_Dataflow_first_Switch_Char_Dataflow(self ); FAILTEST(fail); var14/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Char_Dataflow_first_Switch_Char_Dataflow(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17;VALUE var18;VALUE var19;VALUE var20;VALUE var21;VALUE var22;VALUE var23;VALUE var24;VALUE var25;VALUE var26;VALUE var27; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind2); var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var1/*autovar*/; var2/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var4/*name*/=it;;
bind_aset(bind2,1,var4/*name*/);it=rb_funcall(self,sy_Switch_Char_Dataflow__lp_Compile_7f7b,1,bind2);var4/*name*/=bind_aget(bind2,1);;FAILTEST(pass2);bind_aset(bind2,1,var4/*name*/);it=rb_funcall(self,sy_Switch_Char_Dataflow_Compiler_558e,1,bind2);var4/*name*/=bind_aget(bind2,1);; var5/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var5/*autovar*/;ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass3); var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=var6/*autovar*/; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=var7/*autovar*/; var2/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var8/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var8/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass4); var9/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                it=var9/*autovar*/; var2/*_result*/=it;;

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var10/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass5); var11/*val*/=it;;
bind_aset(bind2,1,var11/*val*/);it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_1_rb_,1,bind2);var11/*val*/=bind_aget(bind2,1);; var12/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_2;
                   success5: *ptr=oldpass5;
                it=var12/*autovar*/; var2/*_result*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;int cut5=0;
alt5_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var13/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var13/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var14/*autovar*/=it;;
int oldpos6;  while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); var15/*autovar*/=it;;
bind_aset(bind2,1,var14/*autovar*/);bind_aset(bind2,2,var15/*autovar*/);it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__d113,1,bind2);var14/*autovar*/=bind_aget(bind2,1);;var15/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos6;   it=var14/*autovar*/; var16/*vals*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt5_2;
                   success6: *ptr=oldpass6;
                bind_aset(bind2,1,var16/*vals*/);it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);var16/*vals*/=bind_aget(bind2,1);; var2/*_result*/=it;;

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;int cut6=0;
alt6_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var17/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var17/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind2); var11/*val*/=it;;
int oldpos8;  while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); var18/*el*/=it;;
it=var18/*el*/; var19/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var19/*autovar*/;ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass8); var20/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break2;
                   success8: *ptr=oldpass8;
                it=var20/*autovar*/; var21/*nev*/=it;;
bind_aset(bind2,1,var11/*val*/);bind_aset(bind2,2,var21/*nev*/);it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);var11/*val*/=bind_aget(bind2,1);;var21/*nev*/=bind_aget(bind2,2);; var11/*val*/=it;;
int oldpos9=ptr->pos;int cut7=0;
alt7_1:;bind_aset(bind2,1,var18/*el*/);it=rb_funcall(self,sy_Switch_Char_Dataflow__lp_,1,bind2);var18/*el*/=bind_aget(bind2,1);;FAILTEST(alt7_2);ptr->pos=ptr->len;
;goto accept9;
alt7_2: ptr->pos=oldpos9;it=rb_funcall(self,sy_Switch_Char_Dataflow__d41d,1,bind2);
;goto accept9;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept9:;
 } break2: ptr->pos=oldpos8;   it=var11/*val*/; var22/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt6_2;
                   success7: *ptr=oldpass7;
                it=var22/*autovar*/; var2/*_result*/=it;;

;goto accept7;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept7;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept7:;
 break;
case 13/*Switch*/:; it=rb_ary_new3(0); var16/*vals*/=it;;
int oldpos10=ptr->pos;int cut8=0;
alt8_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var23/*autovar*/=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var23/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos11;  while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); var24/*autovar*/=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var24/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); var25/*p*/=it;;
  it=First_Dataflow_value(self ); FAILTEST(pass10); var26/*v*/=it;;
bind_aset(bind2,1,var25/*p*/);bind_aset(bind2,2,var26/*v*/);it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);var25/*p*/=bind_aget(bind2,1);;var26/*v*/=bind_aget(bind2,2);; var27/*autovar*/=it;;
bind_aset(bind2,1,var16/*vals*/);bind_aset(bind2,2,var27/*autovar*/);it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__d113,1,bind2);var16/*vals*/=bind_aget(bind2,1);;var27/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto break3;
                   success10: *ptr=oldpass10;
                 } break3: ptr->pos=oldpos11;   it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt8_2;
                   success9: *ptr=oldpass9;
                bind_aset(bind2,1,var16/*vals*/);it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);var16/*vals*/=bind_aget(bind2,1);; var2/*_result*/=it;;

;goto accept10;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept10;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept10:;
 break;
case 14/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Char_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3; ;VALUE bind2=bind_new2(16); var0/*v*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
bind_aset(bind2,1,var0/*v*/);it=rb_funcall(self,sy_Switch_Char_Dataflow__at_vis_eq_bin_8b89,1,bind2);var0/*v*/=bind_aget(bind2,1);; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var1/*autovar*/;ptr->len=1;
                     it=Switch_Char_Dataflow_first(self ); FAILTEST(pass1); var2/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var2/*autovar*/; var3/*_result*/=it;;

return it;
fail: return failobj; }VALUE cls_Switch_Clas_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Switch_Clas_Dataflow_first(VALUE self );
VALUE Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(VALUE self );
VALUE Switch_Clas_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Switch_Clas_Dataflow_1;
VALUE switchhash_Switch_Clas_Dataflow_2;
VALUE switchhash_Switch_Clas_Dataflow_3;
VALUE switchhash_Switch_Clas_Dataflow_4;
static VALUE sy_Switch_Clas_Dataflow_Compiler_558e;
static VALUE sy_Switch_Clas_Dataflow__append_lp__d113;
static VALUE sy_Switch_Clas_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Switch_Clas_Dataflow__d41d;
static VALUE sy_Switch_Clas_Dataflow__lp_;
static VALUE sy_Switch_Clas_Dataflow__lp_Compile_7f7b;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_1_rb_;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_Switch_Clas_Dataflow_lattice_dot__5a9e;
static VALUE sy_Switch_Clas_Dataflow_lattice_dot__b0f6;
static VALUE sy_Switch_Clas_Dataflow_lattice_lb__78fa;
VALUE Switch_Clas_Dataflow_first(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var1/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'b':;case 'd' ... UC(255):; goto pass2; break;
case 'c' ... 'c':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3; else goto pass2; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var2/*autovar*/=it;;
 break;
case 1/*Object*/:; goto pass1; break;
}cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Class*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var3/*cls*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
case 1/*Object*/:; goto pass3; break;
}
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass1;
                   success3: *ptr=oldpass3;
                bind_aset(bind2,1,var3/*cls*/);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_lb__78fa,1,bind2);var3/*cls*/=bind_aget(bind2,1);; var4/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var4/*autovar*/; var5/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(self ); FAILTEST(alt1_3); var5/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:;   it=Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(self ); FAILTEST(fail); var5/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17;VALUE var18;VALUE var19;VALUE var20;VALUE var21;VALUE var22;VALUE var23;VALUE var24;VALUE var25;VALUE var26;VALUE var27; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind2); var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var1/*autovar*/; var2/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var4/*name*/=it;;
bind_aset(bind2,1,var4/*name*/);it=rb_funcall(self,sy_Switch_Clas_Dataflow__lp_Compile_7f7b,1,bind2);var4/*name*/=bind_aget(bind2,1);;FAILTEST(pass2);bind_aset(bind2,1,var4/*name*/);it=rb_funcall(self,sy_Switch_Clas_Dataflow_Compiler_558e,1,bind2);var4/*name*/=bind_aget(bind2,1);; var5/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var5/*autovar*/;ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass3); var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=var6/*autovar*/; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=var7/*autovar*/; var2/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var8/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var8/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass4); var9/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                it=var9/*autovar*/; var2/*_result*/=it;;

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var10/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass5); var11/*val*/=it;;
bind_aset(bind2,1,var11/*val*/);it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb_,1,bind2);var11/*val*/=bind_aget(bind2,1);; var12/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_2;
                   success5: *ptr=oldpass5;
                it=var12/*autovar*/; var2/*_result*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;int cut5=0;
alt5_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var13/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var13/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var14/*autovar*/=it;;
int oldpos6;  while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); var15/*autovar*/=it;;
bind_aset(bind2,1,var14/*autovar*/);bind_aset(bind2,2,var15/*autovar*/);it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__d113,1,bind2);var14/*autovar*/=bind_aget(bind2,1);;var15/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos6;   it=var14/*autovar*/; var16/*vals*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt5_2;
                   success6: *ptr=oldpass6;
                bind_aset(bind2,1,var16/*vals*/);it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);var16/*vals*/=bind_aget(bind2,1);; var2/*_result*/=it;;

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;int cut6=0;
alt6_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var17/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var17/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind2); var11/*val*/=it;;
int oldpos8;  while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); var18/*el*/=it;;
it=var18/*el*/; var19/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var19/*autovar*/;ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass8); var20/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break2;
                   success8: *ptr=oldpass8;
                it=var20/*autovar*/; var21/*nev*/=it;;
bind_aset(bind2,1,var11/*val*/);bind_aset(bind2,2,var21/*nev*/);it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);var11/*val*/=bind_aget(bind2,1);;var21/*nev*/=bind_aget(bind2,2);; var11/*val*/=it;;
int oldpos9=ptr->pos;int cut7=0;
alt7_1:;bind_aset(bind2,1,var18/*el*/);it=rb_funcall(self,sy_Switch_Clas_Dataflow__lp_,1,bind2);var18/*el*/=bind_aget(bind2,1);;FAILTEST(alt7_2);ptr->pos=ptr->len;
;goto accept9;
alt7_2: ptr->pos=oldpos9;it=rb_funcall(self,sy_Switch_Clas_Dataflow__d41d,1,bind2);
;goto accept9;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept9:;
 } break2: ptr->pos=oldpos8;   it=var11/*val*/; var22/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt6_2;
                   success7: *ptr=oldpass7;
                it=var22/*autovar*/; var2/*_result*/=it;;

;goto accept7;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept7;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept7:;
 break;
case 13/*Switch*/:; it=rb_ary_new3(0); var16/*vals*/=it;;
int oldpos10=ptr->pos;int cut8=0;
alt8_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var23/*autovar*/=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var23/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos11;  while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); var24/*autovar*/=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var24/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); var25/*p*/=it;;
  it=First_Dataflow_value(self ); FAILTEST(pass10); var26/*v*/=it;;
bind_aset(bind2,1,var25/*p*/);bind_aset(bind2,2,var26/*v*/);it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);var25/*p*/=bind_aget(bind2,1);;var26/*v*/=bind_aget(bind2,2);; var27/*autovar*/=it;;
bind_aset(bind2,1,var16/*vals*/);bind_aset(bind2,2,var27/*autovar*/);it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__d113,1,bind2);var16/*vals*/=bind_aget(bind2,1);;var27/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto break3;
                   success10: *ptr=oldpass10;
                 } break3: ptr->pos=oldpos11;   it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt8_2;
                   success9: *ptr=oldpass9;
                bind_aset(bind2,1,var16/*vals*/);it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);var16/*vals*/=bind_aget(bind2,1);; var2/*_result*/=it;;

;goto accept10;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept10;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept10:;
 break;
case 14/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Clas_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3; ;VALUE bind2=bind_new2(16); var0/*v*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
bind_aset(bind2,1,var0/*v*/);it=rb_funcall(self,sy_Switch_Clas_Dataflow__at_vis_eq_bin_8b89,1,bind2);var0/*v*/=bind_aget(bind2,1);; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var1/*autovar*/;ptr->len=1;
                     it=Switch_Clas_Dataflow_first(self ); FAILTEST(pass1); var2/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var2/*autovar*/; var3/*_result*/=it;;

return it;
fail: return failobj; }VALUE cls_Cant_Fail_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Cant_Fail_Dataflow_first(VALUE self );
VALUE Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(VALUE self );
VALUE Cant_Fail_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE First_Dataflow_value(VALUE self );
VALUE switchhash_Cant_Fail_Dataflow_1;
VALUE switchhash_Cant_Fail_Dataflow_2;
static VALUE sy_Cant_Fail_Dataflow_Compiler_558e;
static VALUE sy_Cant_Fail_Dataflow__append_lp__d113;
static VALUE sy_Cant_Fail_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Cant_Fail_Dataflow__d41d;
static VALUE sy_Cant_Fail_Dataflow__lp_;
static VALUE sy_Cant_Fail_Dataflow__lp_Compile_7f7b;
static VALUE sy_Cant_Fail_Dataflow__lp_src_dot_pre_c6b8;
static VALUE sy_Cant_Fail_Dataflow_bind_lb_1_rb_;
static VALUE sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_Cant_Fail_Dataflow_lattice_dot__3340;
static VALUE sy_Cant_Fail_Dataflow_lattice_dot__4869;
static VALUE sy_Cant_Fail_Dataflow_lattice_dot__5a9e;
static VALUE sy_Cant_Fail_Dataflow_lattice_dot__b0f6;
static VALUE sy_Cant_Fail_Dataflow_src_dot_to_5e99;
VALUE Cant_Fail_Dataflow_first(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Cant_Fail_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Cant_Fail_Dataflow__lp_src_dot_pre_c6b8,1,bind2);FAILTEST(pass1);it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__4869,1,bind2); var1/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self ); FAILTEST(alt1_3); var1/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Apply*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var2/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var3/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass3; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos3=ptr->pos;int cut3=0;
alt3_1:;if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11; else goto alt3_2;
;goto accept3;
alt3_2: ptr->pos=oldpos3;if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11; else goto alt3_3;
;goto accept3;
alt3_3: ptr->pos=oldpos3;goto pass3;
 accept3:;
 break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__3340,1,bind2); var1/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self ); FAILTEST(alt2_3); var1/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Lookahead*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var4/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt4_2;
                   success4: *ptr=oldpass4;
                it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__4869,1,bind2); var1/*_result*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self ); FAILTEST(alt4_3); var1/*_result*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 3/*Pass*/:; int oldpos5=ptr->pos;int cut5=0;
alt5_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var5/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Cant_Fail_Dataflow_src_dot_to_5e99,1,bind2); var6/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var6/*autovar*/;ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass6); var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto pass5;
                   success6: *ptr=oldpass6;
                it=var7/*autovar*/; var8/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt5_2;
                   success5: *ptr=oldpass5;
                it=var8/*autovar*/; var1/*_result*/=it;;

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self ); FAILTEST(alt5_3); var1/*_result*/=it;;

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 4/*Object*/:;   it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self ); FAILTEST(fail); var1/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17;VALUE var18;VALUE var19;VALUE var20;VALUE var21;VALUE var22;VALUE var23;VALUE var24;VALUE var25;VALUE var26;VALUE var27; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Cant_Fail_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__5a9e,1,bind2); var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var1/*autovar*/; var2/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var4/*name*/=it;;
bind_aset(bind2,1,var4/*name*/);it=rb_funcall(self,sy_Cant_Fail_Dataflow__lp_Compile_7f7b,1,bind2);var4/*name*/=bind_aget(bind2,1);;FAILTEST(pass2);bind_aset(bind2,1,var4/*name*/);it=rb_funcall(self,sy_Cant_Fail_Dataflow_Compiler_558e,1,bind2);var4/*name*/=bind_aget(bind2,1);; var5/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var5/*autovar*/;ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass3); var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=var6/*autovar*/; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=var7/*autovar*/; var2/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var8/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var8/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass4); var9/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                it=var9/*autovar*/; var2/*_result*/=it;;

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var10/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass5); var11/*val*/=it;;
bind_aset(bind2,1,var11/*val*/);it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_1_rb_,1,bind2);var11/*val*/=bind_aget(bind2,1);; var12/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_2;
                   success5: *ptr=oldpass5;
                it=var12/*autovar*/; var2/*_result*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;int cut5=0;
alt5_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var13/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var13/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var14/*autovar*/=it;;
int oldpos6;  while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); var15/*autovar*/=it;;
bind_aset(bind2,1,var14/*autovar*/);bind_aset(bind2,2,var15/*autovar*/);it=rb_funcall(self,sy_Cant_Fail_Dataflow__append_lp__d113,1,bind2);var14/*autovar*/=bind_aget(bind2,1);;var15/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos6;   it=var14/*autovar*/; var16/*vals*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt5_2;
                   success6: *ptr=oldpass6;
                bind_aset(bind2,1,var16/*vals*/);it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);var16/*vals*/=bind_aget(bind2,1);; var2/*_result*/=it;;

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;int cut6=0;
alt6_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var17/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var17/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__5a9e,1,bind2); var11/*val*/=it;;
int oldpos8;  while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); var18/*el*/=it;;
it=var18/*el*/; var19/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var19/*autovar*/;ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass8); var20/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break2;
                   success8: *ptr=oldpass8;
                it=var20/*autovar*/; var21/*nev*/=it;;
bind_aset(bind2,1,var11/*val*/);bind_aset(bind2,2,var21/*nev*/);it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);var11/*val*/=bind_aget(bind2,1);;var21/*nev*/=bind_aget(bind2,2);; var11/*val*/=it;;
int oldpos9=ptr->pos;int cut7=0;
alt7_1:;bind_aset(bind2,1,var18/*el*/);it=rb_funcall(self,sy_Cant_Fail_Dataflow__lp_,1,bind2);var18/*el*/=bind_aget(bind2,1);;FAILTEST(alt7_2);ptr->pos=ptr->len;
;goto accept9;
alt7_2: ptr->pos=oldpos9;it=rb_funcall(self,sy_Cant_Fail_Dataflow__d41d,1,bind2);
;goto accept9;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept9:;
 } break2: ptr->pos=oldpos8;   it=var11/*val*/; var22/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt6_2;
                   success7: *ptr=oldpass7;
                it=var22/*autovar*/; var2/*_result*/=it;;

;goto accept7;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept7;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept7:;
 break;
case 13/*Switch*/:; it=rb_ary_new3(0); var16/*vals*/=it;;
int oldpos10=ptr->pos;int cut8=0;
alt8_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var23/*autovar*/=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var23/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos11;  while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); var24/*autovar*/=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var24/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); var25/*p*/=it;;
  it=First_Dataflow_value(self ); FAILTEST(pass10); var26/*v*/=it;;
bind_aset(bind2,1,var25/*p*/);bind_aset(bind2,2,var26/*v*/);it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);var25/*p*/=bind_aget(bind2,1);;var26/*v*/=bind_aget(bind2,2);; var27/*autovar*/=it;;
bind_aset(bind2,1,var16/*vals*/);bind_aset(bind2,2,var27/*autovar*/);it=rb_funcall(self,sy_Cant_Fail_Dataflow__append_lp__d113,1,bind2);var16/*vals*/=bind_aget(bind2,1);;var27/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto break3;
                   success10: *ptr=oldpass10;
                 } break3: ptr->pos=oldpos11;   it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt8_2;
                   success9: *ptr=oldpass9;
                bind_aset(bind2,1,var16/*vals*/);it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);var16/*vals*/=bind_aget(bind2,1);; var2/*_result*/=it;;

;goto accept10;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;

;goto accept10;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept10:;
 break;
case 14/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2); var2/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE Cant_Fail_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3; ;VALUE bind2=bind_new2(16); var0/*v*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
bind_aset(bind2,1,var0/*v*/);it=rb_funcall(self,sy_Cant_Fail_Dataflow__at_vis_eq_bin_8b89,1,bind2);var0/*v*/=bind_aget(bind2,1);; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var1/*autovar*/;ptr->len=1;
                     it=Cant_Fail_Dataflow_first(self ); FAILTEST(pass1); var2/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var2/*autovar*/; var3/*_result*/=it;;

return it;
fail: return failobj; }VALUE cls_Detect_First;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_First_cant_fail(VALUE self );
VALUE Detect_First_itrans(VALUE self );
VALUE Detect_First_must_empty(VALUE self );
VALUE Detect_First_object_only(VALUE self );
VALUE Detect_First_root(VALUE self );
VALUE Detect_First_string_only(VALUE self );
VALUE Traverser_Clone2_traverse(VALUE self );
VALUE switchhash_Detect_First_1;
VALUE switchhash_Detect_First_2;
VALUE switchhash_Detect_First_3;
VALUE switchhash_Detect_First_4;
static VALUE sy_Detect_First__append_lp__d113;
static VALUE sy_Detect_First__at_name_eq_sr_362f;
static VALUE sy_Detect_First__do_rules_eq__le__ab16;
static VALUE sy_Detect_First__lp_cant_fa_17ef;
static VALUE sy_Detect_First__lp_must_em_43e9;
static VALUE sy_Detect_First_src_25d9;
static VALUE sy_Detect_First_src_dot_rule_5acf;
static VALUE sy_Detect_First_src_dot_rule_a719;
VALUE Detect_First_cant_fail(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); var0/*e*/=it;;
bind_aset(bind2,1,var0/*e*/);it=rb_funcall(self,sy_Detect_First__lp_cant_fa_17ef,1,bind2);var0/*e*/=bind_aget(bind2,1);;FAILTEST(fail);it=var0/*e*/; var1/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Detect_First_itrans(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); var0/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Grammar*/:; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Detect_First__at_name_eq_sr_362f,1,bind2);it=rb_funcall(self,sy_Detect_First__do_rules_eq__le__ab16,1,bind2);it=rb_funcall(self,sy_Detect_First_src_dot_rule_5acf,1,bind2); var2/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var2/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var3/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var4/*autovar*/=it;;
int oldpos3;  while(1){oldpos3=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var5/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Detect_First_root(self ); FAILTEST(pass4); var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto break2;
                   success4: *ptr=oldpass4;
                it=var6/*autovar*/; var7/*autovar*/=it;;
bind_aset(bind2,1,var4/*autovar*/);bind_aset(bind2,2,var7/*autovar*/);it=rb_funcall(self,sy_Detect_First__append_lp__d113,1,bind2);var4/*autovar*/=bind_aget(bind2,1);;var7/*autovar*/=bind_aget(bind2,2);; break;
case 1/*Object*/:; goto break2; break;
} } break2: ptr->pos=oldpos3;   it=var4/*autovar*/; var8/*rules*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                bind_aset(bind2,1,var8/*rules*/);it=rb_funcall(self,sy_Detect_First_src_dot_rule_a719,1,bind2);var8/*rules*/=bind_aget(bind2,1);;it=rb_funcall(self,sy_Detect_First_src_25d9,1,bind2); var9/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var9/*autovar*/; var10/*autovar*/=it;;

;goto accept2;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); var10/*autovar*/=it;;

;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var10/*autovar*/);it=rb_funcall(self,sy_Detect_First__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var10/*autovar*/=bind_aget(bind2,2);; break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); var10/*autovar*/=it;;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var10/*autovar*/);it=rb_funcall(self,sy_Detect_First__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var10/*autovar*/=bind_aget(bind2,2);; break;
} } break1: ptr->pos=oldpos1;   it=var0/*autovar*/; var11/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Detect_First_must_empty(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); var0/*e*/=it;;
bind_aset(bind2,1,var0/*e*/);it=rb_funcall(self,sy_Detect_First__lp_must_em_43e9,1,bind2);var0/*e*/=bind_aget(bind2,1);;FAILTEST(fail);it=var0/*e*/; var1/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Detect_First_object_only(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var1/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'b':;case 'd' ... UC(255):; goto pass2; break;
case 'c' ... 'c':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3; else goto pass2; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=rb_ary_new3(0); var2/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); var3/*autovar*/=it;;
bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_Detect_First__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos1;   it=var2/*autovar*/; var4/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var4/*autovar*/; var5/*_result*/=it;;
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Detect_First_root(VALUE self ){VALUE vals[0];  VALUE var0; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=Traverser_Clone2_traverse(self ); FAILTEST(fail); var0/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Detect_First_string_only(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var1/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... 'q':;case 's' ... UC(255):; goto pass2; break;
case 'r' ... 'r':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4; else goto pass2; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass2; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=rb_ary_new3(0); var2/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); var3/*autovar*/=it;;
bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_Detect_First__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos1;   it=var2/*autovar*/; var4/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var4/*autovar*/; var5/*_result*/=it;;
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }VALUE cls_Detect_Switch_Char;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_First_must_empty(VALUE self );
VALUE Detect_Switch_Char_combine_or(VALUE self ,VALUE a0);
VALUE Detect_Switch_Char_combine_or(VALUE self ,VALUE);
VALUE Detect_Switch_Char_combine_seq(VALUE self ,VALUE a0);
VALUE Detect_Switch_Char_combine_seq(VALUE self ,VALUE);
VALUE Detect_Switch_Char_itrans(VALUE self );
VALUE Detect_Switch_Char_root(VALUE self );
VALUE Detect_Switch_Char_traverse(VALUE self );
VALUE Detect_Switch_Char_traverse_item(VALUE self );
VALUE Detect_Switch_Char_visit(VALUE self );
VALUE switchhash_Detect_Switch_Char_10;
VALUE switchhash_Detect_Switch_Char_1;
VALUE switchhash_Detect_Switch_Char_2;
VALUE switchhash_Detect_Switch_Char_3;
VALUE switchhash_Detect_Switch_Char_4;
VALUE switchhash_Detect_Switch_Char_5;
VALUE switchhash_Detect_Switch_Char_6;
VALUE switchhash_Detect_Switch_Char_7;
VALUE switchhash_Detect_Switch_Char_8;
VALUE switchhash_Detect_Switch_Char_9;
static VALUE sy_Detect_Switch_Char_Or_lb__ti_bind_d486;
static VALUE sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321;
static VALUE sy_Detect_Switch_Char_Switch_C_6b05;
static VALUE sy_Detect_Switch_Char_Switch_C_6c19;
static VALUE sy_Detect_Switch_Char__append_lp__d113;
static VALUE sy_Detect_Switch_Char__at_changed_5352;
static VALUE sy_Detect_Switch_Char__at_changed_b885;
static VALUE sy_Detect_Switch_Char__at_changed_c681;
static VALUE sy_Detect_Switch_Char__at_name_eq_sr_362f;
static VALUE sy_Detect_Switch_Char__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch_Char__lb__lb_Lattic_d322;
static VALUE sy_Detect_Switch_Char__lp_2;
static VALUE sy_Detect_Switch_Char__lp_;
static VALUE sy_Detect_Switch_Char__lp_bind_lb_1_rb__ee3d;
static VALUE sy_Detect_Switch_Char__lp_src_dot_ins_6a75;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__dot__0b68;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__dot__bb04;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651;
static VALUE sy_Detect_Switch_Char_first_lp_sr_3298;
static VALUE sy_Detect_Switch_Char_if_sp_bind_lb__8e0b;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_78a6;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_7c35;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_df23;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_eb1e;
static VALUE sy_Detect_Switch_Char_src_25d9;
static VALUE sy_Detect_Switch_Char_src_dot_ary_d5cf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_a719;
static VALUE sy_first;
VALUE Detect_Switch_Char_combine_or(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5; ;VALUE bind2=bind_new2(16); var3/*list*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2); var1/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=rb_ary_new3(0); var2/*newlist*/=it;;
bind_aset(bind2,1,var3/*list*/);bind_aset(bind2,2,var1/*ary*/);bind_aset(bind2,3,var2/*newlist*/);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__0b68,1,bind2);var3/*list*/=bind_aget(bind2,1);;var1/*ary*/=bind_aget(bind2,2);;var2/*newlist*/=bind_aget(bind2,3);; it=var2/*newlist*/; arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt1_2); var4/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); var5/*n*/=it;;
bind_aset(bind2,1,var3/*list*/);bind_aset(bind2,2,var5/*n*/);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);var3/*list*/=bind_aget(bind2,1);;var5/*n*/=bind_aget(bind2,2);; var2/*newlist*/=it;;
 it=var2/*newlist*/; arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt1_3); var4/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=Qnil;if (ptr->pos<ptr->len) goto alt1_4;bind_aset(bind2,1,var3/*list*/);it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_6b05,1,bind2);var3/*list*/=bind_aget(bind2,1);; var4/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); var5/*n*/=it;;
bind_aset(bind2,1,var3/*list*/);bind_aset(bind2,2,var5/*n*/);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);var3/*list*/=bind_aget(bind2,1);;var5/*n*/=bind_aget(bind2,2);; var2/*newlist*/=it;;
 it=var2/*newlist*/; arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt2_2); var4/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=Qnil;if (ptr->pos<ptr->len) goto alt2_3;bind_aset(bind2,1,var3/*list*/);it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_6b05,1,bind2);var3/*list*/=bind_aget(bind2,1);; var4/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Char_combine_seq(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9; ;VALUE bind2=bind_new2(16); var1/*prefix*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt1_2); var0/*s*/=it;;
 bind_aset(bind2,1,var1/*prefix*/);bind_aset(bind2,2,var0/*s*/);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);var1/*prefix*/=bind_aget(bind2,1);;var0/*s*/=bind_aget(bind2,2);; arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt1_2); var2/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2); var4/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_3;
                   success1: *ptr=oldpass1;
                it=rb_ary_new3(0); var5/*autovar*/=it;;
int oldpos2;  while(1){oldpos2=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); var6/*autovar*/=it;;
bind_aset(bind2,1,var5/*autovar*/);bind_aset(bind2,2,var6/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);var5/*autovar*/=bind_aget(bind2,1);;var6/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos2;   it=var5/*autovar*/; var7/*rest*/=it;;
bind_aset(bind2,1,var4/*ary*/);bind_aset(bind2,2,var1/*prefix*/);bind_aset(bind2,3,var7/*rest*/);it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_6c19,1,bind2);var4/*ary*/=bind_aget(bind2,1);;var1/*prefix*/=bind_aget(bind2,2);;var7/*rest*/=bind_aget(bind2,3);; var2/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=rb_ary_new3(0); var8/*autovar*/=it;;
int oldpos3;  while(1){oldpos3=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); var9/*autovar*/=it;;
bind_aset(bind2,1,var8/*autovar*/);bind_aset(bind2,2,var9/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);var8/*autovar*/=bind_aget(bind2,1);;var9/*autovar*/=bind_aget(bind2,2);; } break2: ptr->pos=oldpos3;   it=var8/*autovar*/; var4/*ary*/=it;;
bind_aset(bind2,1,var1/*prefix*/);bind_aset(bind2,2,var4/*ary*/);it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321,1,bind2);var1/*prefix*/=bind_aget(bind2,1);;var4/*ary*/=bind_aget(bind2,2);; var2/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; int oldpos4=ptr->pos;int cut2=0;
alt2_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt2_2); var0/*s*/=it;;
 bind_aset(bind2,1,var1/*prefix*/);bind_aset(bind2,2,var0/*s*/);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);var1/*prefix*/=bind_aget(bind2,1);;var0/*s*/=bind_aget(bind2,2);; arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt2_2); var2/*_result*/=it;;

;goto accept4;
alt2_2: ptr->pos=oldpos4;it=rb_ary_new3(0); var8/*autovar*/=it;;
int oldpos5;  while(1){oldpos5=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); var9/*autovar*/=it;;
bind_aset(bind2,1,var8/*autovar*/);bind_aset(bind2,2,var9/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);var8/*autovar*/=bind_aget(bind2,1);;var9/*autovar*/=bind_aget(bind2,2);; } break3: ptr->pos=oldpos5;   it=var8/*autovar*/; var4/*ary*/=it;;
bind_aset(bind2,1,var1/*prefix*/);bind_aset(bind2,2,var4/*ary*/);it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321,1,bind2);var1/*prefix*/=bind_aget(bind2,1);;var4/*ary*/=bind_aget(bind2,2);; var2/*_result*/=it;;

;goto accept4;
alt2_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Char_itrans(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); var0/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_9,rb_obj_class(ame_curobj2(ptr))))){case 0/*Grammar*/:; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Detect_Switch_Char__at_name_eq_sr_362f,1,bind2);it=rb_funcall(self,sy_Detect_Switch_Char__do_rules_eq__le__ab16,1,bind2);it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_5acf,1,bind2); var2/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var2/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var3/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var4/*autovar*/=it;;
int oldpos3;  while(1){oldpos3=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_10,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var5/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Detect_Switch_Char_root(self ); FAILTEST(pass4); var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto break2;
                   success4: *ptr=oldpass4;
                it=var6/*autovar*/; var7/*autovar*/=it;;
bind_aset(bind2,1,var4/*autovar*/);bind_aset(bind2,2,var7/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);var4/*autovar*/=bind_aget(bind2,1);;var7/*autovar*/=bind_aget(bind2,2);; break;
case 1/*Object*/:; goto break2; break;
} } break2: ptr->pos=oldpos3;   it=var4/*autovar*/; var8/*rules*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                bind_aset(bind2,1,var8/*rules*/);it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_a719,1,bind2);var8/*rules*/=bind_aget(bind2,1);;it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind2); var9/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var9/*autovar*/; var10/*autovar*/=it;;

;goto accept2;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); var10/*autovar*/=it;;

;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var10/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var10/*autovar*/=bind_aget(bind2,2);; break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); var10/*autovar*/=it;;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var10/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var10/*autovar*/=bind_aget(bind2,2);; break;
} } break1: ptr->pos=oldpos1;   it=var0/*autovar*/; var11/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Detect_Switch_Char_root(VALUE self ){VALUE vals[0];  VALUE var0; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=Detect_Switch_Char_traverse(self ); FAILTEST(fail); var0/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Detect_Switch_Char_traverse(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_c681,1,bind2); var0/*oldchanged*/=it;;
it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind2); var1/*this*/=it;;
it=Qnil; var2/*clon*/=it;;
it=Qfalse; var3/*changed*/=it;;
it=rb_funcall(self,sy_Detect_Switch_Char__lp_src_dot_ins_6a75,1,bind2); var4/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var4/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var5/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); var6/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); var7/*key*/=it;;
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_b885,1,bind2);  it=Detect_Switch_Char_traverse_item(self ); FAILTEST(pass3); var8/*val*/=it;;
bind_aset(bind2,1,var2/*clon*/);bind_aset(bind2,2,var1/*this*/);bind_aset(bind2,3,var3/*changed*/);bind_aset(bind2,4,var7/*key*/);bind_aset(bind2,5,var8/*val*/);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__ee3d,1,bind2);var2/*clon*/=bind_aget(bind2,1);;var1/*this*/=bind_aget(bind2,2);;var3/*changed*/=bind_aget(bind2,3);;var7/*key*/=bind_aget(bind2,4);;var8/*val*/=bind_aget(bind2,5);;it=Qnil;if (ptr->pos<ptr->len) goto pass3;
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
                bind_aset(bind2,1,var3/*changed*/);bind_aset(bind2,2,var2/*clon*/);bind_aset(bind2,3,var0/*oldchanged*/);it=rb_funcall(self,sy_Detect_Switch_Char_if_sp_bind_lb__8e0b,1,bind2);var3/*changed*/=bind_aget(bind2,1);;var2/*clon*/=bind_aget(bind2,2);;var0/*oldchanged*/=bind_aget(bind2,3);; var9/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Detect_Switch_Char_traverse_item(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Detect_Switch_Char_visit(self ); FAILTEST(alt1_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; var2/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Detect_Switch_Char_traverse(self ); FAILTEST(pass1); var3/*autovar*/=it;;
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
alt2_1:;  it=Detect_Switch_Char_visit(self ); FAILTEST(alt2_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var5/*ar*/=it;;
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(break1); var6/*it*/=it;;
bind_aset(bind2,1,var5/*ar*/);bind_aset(bind2,2,var6/*it*/);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20,1,bind2);var5/*ar*/=bind_aget(bind2,1);;var6/*it*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos3;   it=var5/*ar*/; var7/*autovar*/=it;;
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
case 2/*Object*/:; int oldpos4=ptr->pos;int cut3=0;
alt3_1:;  it=Detect_Switch_Char_visit(self ); FAILTEST(alt3_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); var1/*_result*/=it;;

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Char_visit(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17;VALUE var18;VALUE var19;VALUE var20;VALUE var21;VALUE var22;VALUE var23;VALUE var24;VALUE var25;VALUE var26;VALUE var27;VALUE var28;VALUE var29;VALUE var30;VALUE var31;VALUE var32;VALUE var33;VALUE var34;VALUE var35;VALUE var36;VALUE var37;VALUE var38;VALUE var39;VALUE var40;VALUE var41;VALUE var42;VALUE var43;VALUE var44;VALUE var45;VALUE var46;VALUE var47;VALUE var48;VALUE var49;VALUE var50;VALUE var51;VALUE var52;VALUE var53;VALUE var54;VALUE var55; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
it=var0/*autovar*/; var1/*autovar*/=it;;
it=var1/*autovar*/; var2/*autovar*/=it;;
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=var2/*autovar*/; var3/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'q':;case 's' ... UC(255):; goto pass2; break;
case 'r' ... 'r':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4; else goto pass2; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var5/*autovar*/=it;;
 break;
case 1/*Object*/:; goto pass1; break;
}cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass1;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); var6/*firs*/=it;;
bind_aset(bind2,1,var6/*firs*/);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_df23,1,bind2);var6/*firs*/=bind_aget(bind2,1);; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var7/*autovar*/; var8/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=var2/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); var10/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass5; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass5; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass4;
                   success5: *ptr=oldpass5;
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var11/*autovar*/=it;;
 break;
case 1/*Object*/:; goto pass4; break;
}cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var11/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass6); var12/*str*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto pass4;
                   success6: *ptr=oldpass6;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); var6/*firs*/=it;;
bind_aset(bind2,1,var6/*firs*/);bind_aset(bind2,2,var12/*str*/);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_78a6,1,bind2);var6/*firs*/=bind_aget(bind2,1);;var12/*str*/=bind_aget(bind2,2);; var13/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt1_3;
                   success4: *ptr=oldpass4;
                it=var13/*autovar*/; var8/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=var2/*autovar*/; var14/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var14/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass7); var15/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var15/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass8);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass8; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass8; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto pass7;
                   success8: *ptr=oldpass8;
                it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind2); var16/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt1_4;
                   success7: *ptr=oldpass7;
                it=var16/*autovar*/; var8/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;it=var2/*autovar*/; var17/*autovar*/=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var17/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); var6/*firs*/=it;;
bind_aset(bind2,1,var6/*firs*/);it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);var6/*firs*/=bind_aget(bind2,1);;FAILTEST(pass9);bind_aset(bind2,1,var6/*firs*/);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_7c35,1,bind2);var6/*firs*/=bind_aget(bind2,1);; var18/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt1_5;
                   success9: *ptr=oldpass9;
                it=var18/*autovar*/; var8/*_result*/=it;;

;goto accept1;
alt1_5: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Many*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var19/*autovar*/=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var19/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Detect_Switch_Char_traverse(self ); FAILTEST(pass10); var20/*t*/=it;;
 it=var20/*t*/; arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(pass10); var6/*firs*/=it;;
bind_aset(bind2,1,var6/*firs*/);it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);var6/*firs*/=bind_aget(bind2,1);;FAILTEST(pass10);bind_aset(bind2,1,var6/*firs*/);bind_aset(bind2,2,var20/*t*/);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_eb1e,1,bind2);var6/*firs*/=bind_aget(bind2,1);;var20/*t*/=bind_aget(bind2,2);; var21/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto fail;
                   success10: *ptr=oldpass10;
                it=var21/*autovar*/; var8/*_result*/=it;;
 break;
case 2/*Or*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var22/*autovar*/=it;;
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var22/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var23/*autovar*/=it;;
int oldpos2;  while(1){oldpos2=ptr->pos;   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(break1); var24/*autovar*/=it;;
bind_aset(bind2,1,var23/*autovar*/);bind_aset(bind2,2,var24/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);var23/*autovar*/=bind_aget(bind2,1);;var24/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos2;   it=var23/*autovar*/; var25/*items*/=it;;
it=Qfalse; var26/*aswitch*/=it;;
bind_aset(bind2,1,var25/*items*/);bind_aset(bind2,2,var26/*aswitch*/);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__bb04,1,bind2);var25/*items*/=bind_aget(bind2,1);;var26/*aswitch*/=bind_aget(bind2,2);;int oldpos3=ptr->pos;int cut2=0;
alt2_1:;bind_aset(bind2,1,var26/*aswitch*/);it=rb_funcall(self,sy_Detect_Switch_Char__lp_2,1,bind2);var26/*aswitch*/=bind_aget(bind2,1);;FAILTEST(alt2_2);bind_aset(bind2,1,var25/*items*/);it=rb_funcall(self,sy_Detect_Switch_Char_Or_lb__ti_bind_d486,1,bind2);var25/*items*/=bind_aget(bind2,1);; var27/*autovar*/=it;;

;goto accept3;
alt2_2: ptr->pos=oldpos3;it=var25/*items*/; var28/*autovar*/=it;;
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var28/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass12); var29/*autovar*/=it;;
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var29/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind2); var30/*list*/=it;;
int oldpos4=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var31/*autovar*/=it;;
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var31/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2); var32/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto alt3_2;
                   success14: *ptr=oldpass14;
                it=rb_ary_new3(0); var33/*newlist*/=it;;
bind_aset(bind2,1,var30/*list*/);bind_aset(bind2,2,var32/*ary*/);bind_aset(bind2,3,var33/*newlist*/);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__0b68,1,bind2);var30/*list*/=bind_aget(bind2,1);;var32/*ary*/=bind_aget(bind2,2);;var33/*newlist*/=bind_aget(bind2,3);; it=var33/*newlist*/; arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt3_2); var34/*_result*/=it;;

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); var35/*n*/=it;;
bind_aset(bind2,1,var30/*list*/);bind_aset(bind2,2,var35/*n*/);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);var30/*list*/=bind_aget(bind2,1);;var35/*n*/=bind_aget(bind2,2);; var33/*newlist*/=it;;
 it=var33/*newlist*/; arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt3_3); var34/*_result*/=it;;

;goto accept4;
alt3_3: ptr->pos=oldpos4;it=Qnil;if (ptr->pos<ptr->len) goto alt3_4;bind_aset(bind2,1,var30/*list*/);it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_6b05,1,bind2);var30/*list*/=bind_aget(bind2,1);; var34/*_result*/=it;;

;goto accept4;
alt3_4: ptr->pos=oldpos4;goto pass13;
 accept4:;
it=var34/*_result*/; var36/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass13; break;
case 1/*Object*/:; it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind2); var30/*list*/=it;;
int oldpos5=ptr->pos;int cut4=0;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); var35/*n*/=it;;
bind_aset(bind2,1,var30/*list*/);bind_aset(bind2,2,var35/*n*/);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);var30/*list*/=bind_aget(bind2,1);;var35/*n*/=bind_aget(bind2,2);; var33/*newlist*/=it;;
 it=var33/*newlist*/; arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt4_2); var34/*_result*/=it;;

;goto accept5;
alt4_2: ptr->pos=oldpos5;it=Qnil;if (ptr->pos<ptr->len) goto alt4_3;bind_aset(bind2,1,var30/*list*/);it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_6b05,1,bind2);var30/*list*/=bind_aget(bind2,1);; var34/*_result*/=it;;

;goto accept5;
alt4_3: ptr->pos=oldpos5;goto pass13;
 accept5:;
it=var34/*_result*/; var36/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass13; break;
}
                   goto success13;
                   pass13: *ptr=oldpass13; goto pass12;
                   success13: *ptr=oldpass13;
                it=var36/*autovar*/; var37/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto alt2_3;
                   success12: *ptr=oldpass12;
                it=var37/*autovar*/; var27/*autovar*/=it;;

;goto accept3;
alt2_3: ptr->pos=oldpos3;goto pass11;
 accept3:;
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto fail;
                   success11: *ptr=oldpass11;
                it=var27/*autovar*/; var8/*_result*/=it;;
 break;
case 3/*Seq*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var38/*autovar*/=it;;
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var38/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var39/*autovar*/=it;;
int oldpos6;  while(1){oldpos6=ptr->pos;   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(break2); var40/*autovar*/=it;;
bind_aset(bind2,1,var39/*autovar*/);bind_aset(bind2,2,var40/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);var39/*autovar*/=bind_aget(bind2,1);;var40/*autovar*/=bind_aget(bind2,2);; } break2: ptr->pos=oldpos6;   it=var39/*autovar*/; var41/*autovar*/=it;;
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var41/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass16); var42/*autovar*/=it;;
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var42/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; it=rb_ary_new3(0); var43/*prefix*/=it;;
int oldpos7=ptr->pos;int cut5=0;
alt5_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt5_2); var44/*s*/=it;;
 bind_aset(bind2,1,var43/*prefix*/);bind_aset(bind2,2,var44/*s*/);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);var43/*prefix*/=bind_aget(bind2,1);;var44/*s*/=bind_aget(bind2,2);; arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt5_2); var45/*_result*/=it;;

;goto accept7;
alt5_2: ptr->pos=oldpos7;it=ame_curobj2(ptr)               ;ptr->pos++; var46/*autovar*/=it;;
cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var46/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2); var47/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass18;
                   goto success18;
                   pass18: *ptr=oldpass18; goto alt5_3;
                   success18: *ptr=oldpass18;
                it=rb_ary_new3(0); var48/*autovar*/=it;;
int oldpos8;  while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); var49/*autovar*/=it;;
bind_aset(bind2,1,var48/*autovar*/);bind_aset(bind2,2,var49/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);var48/*autovar*/=bind_aget(bind2,1);;var49/*autovar*/=bind_aget(bind2,2);; } break3: ptr->pos=oldpos8;   it=var48/*autovar*/; var50/*rest*/=it;;
bind_aset(bind2,1,var47/*ary*/);bind_aset(bind2,2,var43/*prefix*/);bind_aset(bind2,3,var50/*rest*/);it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_6c19,1,bind2);var47/*ary*/=bind_aget(bind2,1);;var43/*prefix*/=bind_aget(bind2,2);;var50/*rest*/=bind_aget(bind2,3);; var45/*_result*/=it;;

;goto accept7;
alt5_3: ptr->pos=oldpos7;it=rb_ary_new3(0); var51/*autovar*/=it;;
int oldpos9;  while(1){oldpos9=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break4); var52/*autovar*/=it;;
bind_aset(bind2,1,var51/*autovar*/);bind_aset(bind2,2,var52/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);var51/*autovar*/=bind_aget(bind2,1);;var52/*autovar*/=bind_aget(bind2,2);; } break4: ptr->pos=oldpos9;   it=var51/*autovar*/; var47/*ary*/=it;;
bind_aset(bind2,1,var43/*prefix*/);bind_aset(bind2,2,var47/*ary*/);it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321,1,bind2);var43/*prefix*/=bind_aget(bind2,1);;var47/*ary*/=bind_aget(bind2,2);; var45/*_result*/=it;;

;goto accept7;
alt5_4: ptr->pos=oldpos7;goto pass17;
 accept7:;
it=var45/*_result*/; var53/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass17; break;
case 1/*Object*/:; it=rb_ary_new3(0); var43/*prefix*/=it;;
int oldpos10=ptr->pos;int cut6=0;
alt6_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt6_2); var44/*s*/=it;;
 bind_aset(bind2,1,var43/*prefix*/);bind_aset(bind2,2,var44/*s*/);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);var43/*prefix*/=bind_aget(bind2,1);;var44/*s*/=bind_aget(bind2,2);; arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt6_2); var45/*_result*/=it;;

;goto accept10;
alt6_2: ptr->pos=oldpos10;it=rb_ary_new3(0); var51/*autovar*/=it;;
int oldpos11;  while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break5); var52/*autovar*/=it;;
bind_aset(bind2,1,var51/*autovar*/);bind_aset(bind2,2,var52/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);var51/*autovar*/=bind_aget(bind2,1);;var52/*autovar*/=bind_aget(bind2,2);; } break5: ptr->pos=oldpos11;   it=var51/*autovar*/; var47/*ary*/=it;;
bind_aset(bind2,1,var43/*prefix*/);bind_aset(bind2,2,var47/*ary*/);it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321,1,bind2);var43/*prefix*/=bind_aget(bind2,1);;var47/*ary*/=bind_aget(bind2,2);; var45/*_result*/=it;;

;goto accept10;
alt6_3: ptr->pos=oldpos10;goto pass17;
 accept10:;
it=var45/*_result*/; var53/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass17; break;
}
                   goto success17;
                   pass17: *ptr=oldpass17; goto pass16;
                   success17: *ptr=oldpass17;
                it=var53/*autovar*/; var54/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass16;
                   goto success16;
                   pass16: *ptr=oldpass16; goto pass15;
                   success16: *ptr=oldpass16;
                it=var54/*autovar*/; var55/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
                   goto success15;
                   pass15: *ptr=oldpass15; goto fail;
                   success15: *ptr=oldpass15;
                it=var55/*autovar*/; var8/*_result*/=it;;
 break;
case 4/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }VALUE cls_Detect_Switch_Clas;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_First_must_empty(VALUE self );
VALUE Detect_Switch_Clas_combine_or(VALUE self ,VALUE a0);
VALUE Detect_Switch_Clas_combine_or(VALUE self ,VALUE);
VALUE Detect_Switch_Clas_combine_seq(VALUE self ,VALUE a0);
VALUE Detect_Switch_Clas_combine_seq(VALUE self ,VALUE);
VALUE Detect_Switch_Clas_itrans(VALUE self );
VALUE Detect_Switch_Clas_root(VALUE self );
VALUE Detect_Switch_Clas_traverse(VALUE self );
VALUE Detect_Switch_Clas_traverse_item(VALUE self );
VALUE Detect_Switch_Clas_visit(VALUE self );
VALUE switchhash_Detect_Switch_Clas_10;
VALUE switchhash_Detect_Switch_Clas_1;
VALUE switchhash_Detect_Switch_Clas_2;
VALUE switchhash_Detect_Switch_Clas_3;
VALUE switchhash_Detect_Switch_Clas_4;
VALUE switchhash_Detect_Switch_Clas_5;
VALUE switchhash_Detect_Switch_Clas_6;
VALUE switchhash_Detect_Switch_Clas_7;
VALUE switchhash_Detect_Switch_Clas_8;
VALUE switchhash_Detect_Switch_Clas_9;
static VALUE sy_Detect_Switch_Clas_Or_lb__ti_bind_d486;
static VALUE sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321;
static VALUE sy_Detect_Switch_Clas_Switch_C_06c2;
static VALUE sy_Detect_Switch_Clas_Switch_C_63f7;
static VALUE sy_Detect_Switch_Clas_Switch_C_7ba7;
static VALUE sy_Detect_Switch_Clas__append_lp__d113;
static VALUE sy_Detect_Switch_Clas__at_changed_5352;
static VALUE sy_Detect_Switch_Clas__at_changed_b885;
static VALUE sy_Detect_Switch_Clas__at_changed_c681;
static VALUE sy_Detect_Switch_Clas__at_name_eq_sr_362f;
static VALUE sy_Detect_Switch_Clas__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch_Clas__lb__lb_Lattic_62e5;
static VALUE sy_Detect_Switch_Clas__lp_2;
static VALUE sy_Detect_Switch_Clas__lp_;
static VALUE sy_Detect_Switch_Clas__lp_bind_lb_1_rb__ee3d;
static VALUE sy_Detect_Switch_Clas__lp_src_dot_ins_6a75;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__dot__6945;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__dot__76da;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__lt__7b20;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651;
static VALUE sy_Detect_Switch_Clas_c_eq_Switch_4e5f;
static VALUE sy_Detect_Switch_Clas_if_sp_bind_lb__8e0b;
static VALUE sy_Detect_Switch_Clas_src_25d9;
static VALUE sy_Detect_Switch_Clas_src_dot_ary_d5cf;
static VALUE sy_Detect_Switch_Clas_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_Clas_src_dot_rule_a719;
static VALUE sy_first;
VALUE Detect_Switch_Clas_combine_or(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5; ;VALUE bind2=bind_new2(16); var3/*list*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Clas*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind2); var1/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=rb_ary_new3(0); var2/*newlist*/=it;;
bind_aset(bind2,1,var3/*list*/);bind_aset(bind2,2,var1/*ary*/);bind_aset(bind2,3,var2/*newlist*/);it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__6945,1,bind2);var3/*list*/=bind_aget(bind2,1);;var1/*ary*/=bind_aget(bind2,2);;var2/*newlist*/=bind_aget(bind2,3);; it=var2/*newlist*/; arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt1_2); var4/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); var5/*n*/=it;;
bind_aset(bind2,1,var3/*list*/);bind_aset(bind2,2,var5/*n*/);it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482,1,bind2);var3/*list*/=bind_aget(bind2,1);;var5/*n*/=bind_aget(bind2,2);; var2/*newlist*/=it;;
 it=var2/*newlist*/; arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt1_3); var4/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=Qnil;if (ptr->pos<ptr->len) goto alt1_4;bind_aset(bind2,1,var3/*list*/);it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_06c2,1,bind2);var3/*list*/=bind_aget(bind2,1);; var4/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); var5/*n*/=it;;
bind_aset(bind2,1,var3/*list*/);bind_aset(bind2,2,var5/*n*/);it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482,1,bind2);var3/*list*/=bind_aget(bind2,1);;var5/*n*/=bind_aget(bind2,2);; var2/*newlist*/=it;;
 it=var2/*newlist*/; arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt2_2); var4/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=Qnil;if (ptr->pos<ptr->len) goto alt2_3;bind_aset(bind2,1,var3/*list*/);it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_06c2,1,bind2);var3/*list*/=bind_aget(bind2,1);; var4/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_combine_seq(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9; ;VALUE bind2=bind_new2(16); var1/*prefix*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Clas*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt1_2); var0/*s*/=it;;
 bind_aset(bind2,1,var1/*prefix*/);bind_aset(bind2,2,var0/*s*/);it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651,1,bind2);var1/*prefix*/=bind_aget(bind2,1);;var0/*s*/=bind_aget(bind2,2);; arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt1_2); var2/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind2); var4/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_3;
                   success1: *ptr=oldpass1;
                it=rb_ary_new3(0); var5/*autovar*/=it;;
int oldpos2;  while(1){oldpos2=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); var6/*autovar*/=it;;
bind_aset(bind2,1,var5/*autovar*/);bind_aset(bind2,2,var6/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);var5/*autovar*/=bind_aget(bind2,1);;var6/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos2;   it=var5/*autovar*/; var7/*rest*/=it;;
bind_aset(bind2,1,var4/*ary*/);bind_aset(bind2,2,var1/*prefix*/);bind_aset(bind2,3,var7/*rest*/);it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_7ba7,1,bind2);var4/*ary*/=bind_aget(bind2,1);;var1/*prefix*/=bind_aget(bind2,2);;var7/*rest*/=bind_aget(bind2,3);; var2/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=rb_ary_new3(0); var8/*autovar*/=it;;
int oldpos3;  while(1){oldpos3=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); var9/*autovar*/=it;;
bind_aset(bind2,1,var8/*autovar*/);bind_aset(bind2,2,var9/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);var8/*autovar*/=bind_aget(bind2,1);;var9/*autovar*/=bind_aget(bind2,2);; } break2: ptr->pos=oldpos3;   it=var8/*autovar*/; var4/*ary*/=it;;
bind_aset(bind2,1,var1/*prefix*/);bind_aset(bind2,2,var4/*ary*/);it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321,1,bind2);var1/*prefix*/=bind_aget(bind2,1);;var4/*ary*/=bind_aget(bind2,2);; var2/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; int oldpos4=ptr->pos;int cut2=0;
alt2_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt2_2); var0/*s*/=it;;
 bind_aset(bind2,1,var1/*prefix*/);bind_aset(bind2,2,var0/*s*/);it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651,1,bind2);var1/*prefix*/=bind_aget(bind2,1);;var0/*s*/=bind_aget(bind2,2);; arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt2_2); var2/*_result*/=it;;

;goto accept4;
alt2_2: ptr->pos=oldpos4;it=rb_ary_new3(0); var8/*autovar*/=it;;
int oldpos5;  while(1){oldpos5=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); var9/*autovar*/=it;;
bind_aset(bind2,1,var8/*autovar*/);bind_aset(bind2,2,var9/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);var8/*autovar*/=bind_aget(bind2,1);;var9/*autovar*/=bind_aget(bind2,2);; } break3: ptr->pos=oldpos5;   it=var8/*autovar*/; var4/*ary*/=it;;
bind_aset(bind2,1,var1/*prefix*/);bind_aset(bind2,2,var4/*ary*/);it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321,1,bind2);var1/*prefix*/=bind_aget(bind2,1);;var4/*ary*/=bind_aget(bind2,2);; var2/*_result*/=it;;

;goto accept4;
alt2_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_itrans(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); var0/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_9,rb_obj_class(ame_curobj2(ptr))))){case 0/*Grammar*/:; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Detect_Switch_Clas__at_name_eq_sr_362f,1,bind2);it=rb_funcall(self,sy_Detect_Switch_Clas__do_rules_eq__le__ab16,1,bind2);it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_rule_5acf,1,bind2); var2/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var2/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var3/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var4/*autovar*/=it;;
int oldpos3;  while(1){oldpos3=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_10,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var5/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Detect_Switch_Clas_root(self ); FAILTEST(pass4); var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto break2;
                   success4: *ptr=oldpass4;
                it=var6/*autovar*/; var7/*autovar*/=it;;
bind_aset(bind2,1,var4/*autovar*/);bind_aset(bind2,2,var7/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);var4/*autovar*/=bind_aget(bind2,1);;var7/*autovar*/=bind_aget(bind2,2);; break;
case 1/*Object*/:; goto break2; break;
} } break2: ptr->pos=oldpos3;   it=var4/*autovar*/; var8/*rules*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                bind_aset(bind2,1,var8/*rules*/);it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_rule_a719,1,bind2);var8/*rules*/=bind_aget(bind2,1);;it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind2); var9/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var9/*autovar*/; var10/*autovar*/=it;;

;goto accept2;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); var10/*autovar*/=it;;

;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var10/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var10/*autovar*/=bind_aget(bind2,2);; break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); var10/*autovar*/=it;;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var10/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var10/*autovar*/=bind_aget(bind2,2);; break;
} } break1: ptr->pos=oldpos1;   it=var0/*autovar*/; var11/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_root(VALUE self ){VALUE vals[0];  VALUE var0; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=Detect_Switch_Clas_traverse(self ); FAILTEST(fail); var0/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_traverse(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_c681,1,bind2); var0/*oldchanged*/=it;;
it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind2); var1/*this*/=it;;
it=Qnil; var2/*clon*/=it;;
it=Qfalse; var3/*changed*/=it;;
it=rb_funcall(self,sy_Detect_Switch_Clas__lp_src_dot_ins_6a75,1,bind2); var4/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var4/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var5/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); var6/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); var7/*key*/=it;;
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_b885,1,bind2);  it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(pass3); var8/*val*/=it;;
bind_aset(bind2,1,var2/*clon*/);bind_aset(bind2,2,var1/*this*/);bind_aset(bind2,3,var3/*changed*/);bind_aset(bind2,4,var7/*key*/);bind_aset(bind2,5,var8/*val*/);it=rb_funcall(self,sy_Detect_Switch_Clas__lp_bind_lb_1_rb__ee3d,1,bind2);var2/*clon*/=bind_aget(bind2,1);;var1/*this*/=bind_aget(bind2,2);;var3/*changed*/=bind_aget(bind2,3);;var7/*key*/=bind_aget(bind2,4);;var8/*val*/=bind_aget(bind2,5);;it=Qnil;if (ptr->pos<ptr->len) goto pass3;
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
                bind_aset(bind2,1,var3/*changed*/);bind_aset(bind2,2,var2/*clon*/);bind_aset(bind2,3,var0/*oldchanged*/);it=rb_funcall(self,sy_Detect_Switch_Clas_if_sp_bind_lb__8e0b,1,bind2);var3/*changed*/=bind_aget(bind2,1);;var2/*clon*/=bind_aget(bind2,2);;var0/*oldchanged*/=bind_aget(bind2,3);; var9/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_traverse_item(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Detect_Switch_Clas_visit(self ); FAILTEST(alt1_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; var2/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Detect_Switch_Clas_traverse(self ); FAILTEST(pass1); var3/*autovar*/=it;;
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
alt2_1:;  it=Detect_Switch_Clas_visit(self ); FAILTEST(alt2_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var5/*ar*/=it;;
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(break1); var6/*it*/=it;;
bind_aset(bind2,1,var5/*ar*/);bind_aset(bind2,2,var6/*it*/);it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__lt__7b20,1,bind2);var5/*ar*/=bind_aget(bind2,1);;var6/*it*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos3;   it=var5/*ar*/; var7/*autovar*/=it;;
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
case 2/*Object*/:; int oldpos4=ptr->pos;int cut3=0;
alt3_1:;  it=Detect_Switch_Clas_visit(self ); FAILTEST(alt3_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); var1/*_result*/=it;;

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_visit(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17;VALUE var18;VALUE var19;VALUE var20;VALUE var21;VALUE var22;VALUE var23;VALUE var24;VALUE var25;VALUE var26;VALUE var27;VALUE var28;VALUE var29;VALUE var30;VALUE var31;VALUE var32;VALUE var33;VALUE var34;VALUE var35;VALUE var36;VALUE var37;VALUE var38;VALUE var39;VALUE var40;VALUE var41;VALUE var42;VALUE var43;VALUE var44;VALUE var45;VALUE var46;VALUE var47;VALUE var48; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
it=var0/*autovar*/; var1/*autovar*/=it;;
it=var1/*autovar*/; var2/*autovar*/=it;;
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=var2/*autovar*/; var3/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'b':;case 'd' ... UC(255):; goto pass2; break;
case 'c' ... 'c':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3; else goto pass2; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var5/*autovar*/=it;;
 break;
case 1/*Object*/:; goto pass1; break;
}cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Class*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var6/*clas*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
case 1/*Object*/:; goto pass3; break;
}
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass1;
                   success3: *ptr=oldpass3;
                bind_aset(bind2,1,var6/*clas*/);it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_63f7,1,bind2);var6/*clas*/=bind_aget(bind2,1);; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var7/*autovar*/; var8/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=var2/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); var10/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass5; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass5; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass4;
                   success5: *ptr=oldpass5;
                it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind2); var11/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt1_3;
                   success4: *ptr=oldpass4;
                it=var11/*autovar*/; var8/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=var2/*autovar*/; var12/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var12/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len; it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind2); arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(pass6); var13/*firs*/=it;;
bind_aset(bind2,1,var13/*firs*/);it=rb_funcall(self,sy_Detect_Switch_Clas__lp_,1,bind2);var13/*firs*/=bind_aget(bind2,1);;FAILTEST(pass6);bind_aset(bind2,1,var13/*firs*/);it=rb_funcall(self,sy_Detect_Switch_Clas_c_eq_Switch_4e5f,1,bind2);var13/*firs*/=bind_aget(bind2,1);; var14/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt1_4;
                   success6: *ptr=oldpass6;
                it=var14/*autovar*/; var8/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Or*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var15/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var15/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var16/*autovar*/=it;;
int oldpos2;  while(1){oldpos2=ptr->pos;   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(break1); var17/*autovar*/=it;;
bind_aset(bind2,1,var16/*autovar*/);bind_aset(bind2,2,var17/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);var16/*autovar*/=bind_aget(bind2,1);;var17/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos2;   it=var16/*autovar*/; var18/*items*/=it;;
it=Qfalse; var19/*aswitch*/=it;;
bind_aset(bind2,1,var18/*items*/);bind_aset(bind2,2,var19/*aswitch*/);it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__76da,1,bind2);var18/*items*/=bind_aget(bind2,1);;var19/*aswitch*/=bind_aget(bind2,2);;int oldpos3=ptr->pos;int cut2=0;
alt2_1:;bind_aset(bind2,1,var19/*aswitch*/);it=rb_funcall(self,sy_Detect_Switch_Clas__lp_2,1,bind2);var19/*aswitch*/=bind_aget(bind2,1);;FAILTEST(alt2_2);bind_aset(bind2,1,var18/*items*/);it=rb_funcall(self,sy_Detect_Switch_Clas_Or_lb__ti_bind_d486,1,bind2);var18/*items*/=bind_aget(bind2,1);; var20/*autovar*/=it;;

;goto accept3;
alt2_2: ptr->pos=oldpos3;it=var18/*items*/; var21/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var21/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass8); var22/*autovar*/=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var22/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Clas*/:; it=rb_funcall(self,sy_Detect_Switch_Clas__lb__lb_Lattic_62e5,1,bind2); var23/*list*/=it;;
int oldpos4=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var24/*autovar*/=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var24/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind2); var25/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto alt3_2;
                   success10: *ptr=oldpass10;
                it=rb_ary_new3(0); var26/*newlist*/=it;;
bind_aset(bind2,1,var23/*list*/);bind_aset(bind2,2,var25/*ary*/);bind_aset(bind2,3,var26/*newlist*/);it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__6945,1,bind2);var23/*list*/=bind_aget(bind2,1);;var25/*ary*/=bind_aget(bind2,2);;var26/*newlist*/=bind_aget(bind2,3);; it=var26/*newlist*/; arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt3_2); var27/*_result*/=it;;

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); var28/*n*/=it;;
bind_aset(bind2,1,var23/*list*/);bind_aset(bind2,2,var28/*n*/);it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482,1,bind2);var23/*list*/=bind_aget(bind2,1);;var28/*n*/=bind_aget(bind2,2);; var26/*newlist*/=it;;
 it=var26/*newlist*/; arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt3_3); var27/*_result*/=it;;

;goto accept4;
alt3_3: ptr->pos=oldpos4;it=Qnil;if (ptr->pos<ptr->len) goto alt3_4;bind_aset(bind2,1,var23/*list*/);it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_06c2,1,bind2);var23/*list*/=bind_aget(bind2,1);; var27/*_result*/=it;;

;goto accept4;
alt3_4: ptr->pos=oldpos4;goto pass9;
 accept4:;
it=var27/*_result*/; var29/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass9; break;
case 1/*Object*/:; it=rb_funcall(self,sy_Detect_Switch_Clas__lb__lb_Lattic_62e5,1,bind2); var23/*list*/=it;;
int oldpos5=ptr->pos;int cut4=0;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); var28/*n*/=it;;
bind_aset(bind2,1,var23/*list*/);bind_aset(bind2,2,var28/*n*/);it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482,1,bind2);var23/*list*/=bind_aget(bind2,1);;var28/*n*/=bind_aget(bind2,2);; var26/*newlist*/=it;;
 it=var26/*newlist*/; arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt4_2); var27/*_result*/=it;;

;goto accept5;
alt4_2: ptr->pos=oldpos5;it=Qnil;if (ptr->pos<ptr->len) goto alt4_3;bind_aset(bind2,1,var23/*list*/);it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_06c2,1,bind2);var23/*list*/=bind_aget(bind2,1);; var27/*_result*/=it;;

;goto accept5;
alt4_3: ptr->pos=oldpos5;goto pass9;
 accept5:;
it=var27/*_result*/; var29/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass9; break;
}
                   goto success9;
                   pass9: *ptr=oldpass9; goto pass8;
                   success9: *ptr=oldpass9;
                it=var29/*autovar*/; var30/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt2_3;
                   success8: *ptr=oldpass8;
                it=var30/*autovar*/; var20/*autovar*/=it;;

;goto accept3;
alt2_3: ptr->pos=oldpos3;goto pass7;
 accept3:;
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto fail;
                   success7: *ptr=oldpass7;
                it=var20/*autovar*/; var8/*_result*/=it;;
 break;
case 2/*Seq*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var31/*autovar*/=it;;
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var31/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var32/*autovar*/=it;;
int oldpos6;  while(1){oldpos6=ptr->pos;   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(break2); var33/*autovar*/=it;;
bind_aset(bind2,1,var32/*autovar*/);bind_aset(bind2,2,var33/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);var32/*autovar*/=bind_aget(bind2,1);;var33/*autovar*/=bind_aget(bind2,2);; } break2: ptr->pos=oldpos6;   it=var32/*autovar*/; var34/*autovar*/=it;;
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var34/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass12); var35/*autovar*/=it;;
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var35/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Clas*/:; it=rb_ary_new3(0); var36/*prefix*/=it;;
int oldpos7=ptr->pos;int cut5=0;
alt5_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt5_2); var37/*s*/=it;;
 bind_aset(bind2,1,var36/*prefix*/);bind_aset(bind2,2,var37/*s*/);it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651,1,bind2);var36/*prefix*/=bind_aget(bind2,1);;var37/*s*/=bind_aget(bind2,2);; arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt5_2); var38/*_result*/=it;;

;goto accept7;
alt5_2: ptr->pos=oldpos7;it=ame_curobj2(ptr)               ;ptr->pos++; var39/*autovar*/=it;;
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var39/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind2); var40/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto alt5_3;
                   success14: *ptr=oldpass14;
                it=rb_ary_new3(0); var41/*autovar*/=it;;
int oldpos8;  while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); var42/*autovar*/=it;;
bind_aset(bind2,1,var41/*autovar*/);bind_aset(bind2,2,var42/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);var41/*autovar*/=bind_aget(bind2,1);;var42/*autovar*/=bind_aget(bind2,2);; } break3: ptr->pos=oldpos8;   it=var41/*autovar*/; var43/*rest*/=it;;
bind_aset(bind2,1,var40/*ary*/);bind_aset(bind2,2,var36/*prefix*/);bind_aset(bind2,3,var43/*rest*/);it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_7ba7,1,bind2);var40/*ary*/=bind_aget(bind2,1);;var36/*prefix*/=bind_aget(bind2,2);;var43/*rest*/=bind_aget(bind2,3);; var38/*_result*/=it;;

;goto accept7;
alt5_3: ptr->pos=oldpos7;it=rb_ary_new3(0); var44/*autovar*/=it;;
int oldpos9;  while(1){oldpos9=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break4); var45/*autovar*/=it;;
bind_aset(bind2,1,var44/*autovar*/);bind_aset(bind2,2,var45/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);var44/*autovar*/=bind_aget(bind2,1);;var45/*autovar*/=bind_aget(bind2,2);; } break4: ptr->pos=oldpos9;   it=var44/*autovar*/; var40/*ary*/=it;;
bind_aset(bind2,1,var36/*prefix*/);bind_aset(bind2,2,var40/*ary*/);it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321,1,bind2);var36/*prefix*/=bind_aget(bind2,1);;var40/*ary*/=bind_aget(bind2,2);; var38/*_result*/=it;;

;goto accept7;
alt5_4: ptr->pos=oldpos7;goto pass13;
 accept7:;
it=var38/*_result*/; var46/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass13; break;
case 1/*Object*/:; it=rb_ary_new3(0); var36/*prefix*/=it;;
int oldpos10=ptr->pos;int cut6=0;
alt6_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt6_2); var37/*s*/=it;;
 bind_aset(bind2,1,var36/*prefix*/);bind_aset(bind2,2,var37/*s*/);it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651,1,bind2);var36/*prefix*/=bind_aget(bind2,1);;var37/*s*/=bind_aget(bind2,2);; arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt6_2); var38/*_result*/=it;;

;goto accept10;
alt6_2: ptr->pos=oldpos10;it=rb_ary_new3(0); var44/*autovar*/=it;;
int oldpos11;  while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break5); var45/*autovar*/=it;;
bind_aset(bind2,1,var44/*autovar*/);bind_aset(bind2,2,var45/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);var44/*autovar*/=bind_aget(bind2,1);;var45/*autovar*/=bind_aget(bind2,2);; } break5: ptr->pos=oldpos11;   it=var44/*autovar*/; var40/*ary*/=it;;
bind_aset(bind2,1,var36/*prefix*/);bind_aset(bind2,2,var40/*ary*/);it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321,1,bind2);var36/*prefix*/=bind_aget(bind2,1);;var40/*ary*/=bind_aget(bind2,2);; var38/*_result*/=it;;

;goto accept10;
alt6_3: ptr->pos=oldpos10;goto pass13;
 accept10:;
it=var38/*_result*/; var46/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass13; break;
}
                   goto success13;
                   pass13: *ptr=oldpass13; goto pass12;
                   success13: *ptr=oldpass13;
                it=var46/*autovar*/; var47/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto pass11;
                   success12: *ptr=oldpass12;
                it=var47/*autovar*/; var48/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto fail;
                   success11: *ptr=oldpass11;
                it=var48/*autovar*/; var8/*_result*/=it;;
 break;
case 3/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }VALUE cls_Detect_Size;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_Size_predicate(VALUE self ,VALUE a0);
VALUE Detect_Size_predicate2(VALUE self ,VALUE a0);
VALUE Detect_Size_predicate2(VALUE self ,VALUE);
VALUE switchhash_Detect_Size_1;
VALUE switchhash_Detect_Size_2;
static VALUE sy_Detect_Size_Or_dot_creat_49b2;
static VALUE sy_Detect_Size_Seq_dot_crea_bfbb;
static VALUE sy_Detect_Size__append_lp__d113;
static VALUE sy_Detect_Size__lb_bind_lb_1_rb__2d76;
static VALUE sy_Detect_Size__sh_lowleve_46e8;
static VALUE sy_Detect_Size_bind_lb_1_rb__eq__28f0;
static VALUE sy_Detect_Size_bind_lb_1_rb__gt__f573;
static VALUE sy_Detect_Size_minsize_lp__01f0;
VALUE Detect_Size_predicate(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16; ;VALUE bind2=bind_new2(16); var3/*s*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); var0/*el*/=it;;
bind_aset(bind2,1,var0/*el*/);it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);var0/*el*/=bind_aget(bind2,1);; var1/*msize*/=it;;
it=var0/*el*/; var2/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var2/*autovar*/;ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Size_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; bind_aset(bind2,1,var3/*s*/);bind_aset(bind2,2,var1/*msize*/);it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);var3/*s*/=bind_aget(bind2,1);;var1/*msize*/=bind_aget(bind2,2);;it=ame_curobj2(ptr)               ;ptr->pos++; var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass2; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7; else goto pass2; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=rb_funcall(self,sy_Detect_Size__sh_lowleve_46e8,1,bind2); var5/*_result*/=it;;
it=var5/*_result*/; var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Or*/:; bind_aset(bind2,1,var3/*s*/);bind_aset(bind2,2,var1/*msize*/);it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);var3/*s*/=bind_aget(bind2,1);;var1/*msize*/=bind_aget(bind2,2);; var7/*s*/=it;;
it=ame_curobj2(ptr)               ;ptr->pos++; var8/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var8/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var9/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos; it=var7/*s*/; var3/*s*/=it;;
  it=AmethystCore_anything(self ); FAILTEST(break1); var0/*el*/=it;;
bind_aset(bind2,1,var0/*el*/);it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);var0/*el*/=bind_aget(bind2,1);; var1/*msize*/=it;;
it=var0/*el*/; var2/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var2/*autovar*/;ptr->len=1;
                    bind_aset(bind2,1,var3/*s*/);bind_aset(bind2,2,var1/*msize*/);it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);var3/*s*/=bind_aget(bind2,1);;var1/*msize*/=bind_aget(bind2,2);; arg0=it; it=Detect_Size_predicate2(self ,arg0); FAILTEST(pass4); var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto break1;
                   success4: *ptr=oldpass4;
                it=var6/*autovar*/; var0/*el*/=it;;
bind_aset(bind2,1,var1/*msize*/);bind_aset(bind2,2,var3/*s*/);bind_aset(bind2,3,var0/*el*/);it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);var1/*msize*/=bind_aget(bind2,1);;var3/*s*/=bind_aget(bind2,2);;var0/*el*/=bind_aget(bind2,3);; var10/*_result*/=it;;
it=var10/*_result*/; var11/*autovar*/=it;;
bind_aset(bind2,1,var9/*autovar*/);bind_aset(bind2,2,var11/*autovar*/);it=rb_funcall(self,sy_Detect_Size__append_lp__d113,1,bind2);var9/*autovar*/=bind_aget(bind2,1);;var11/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos1;   it=var9/*autovar*/; var12/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass1;
                   success3: *ptr=oldpass3;
                bind_aset(bind2,1,var12/*ary*/);it=rb_funcall(self,sy_Detect_Size_Or_dot_creat_49b2,1,bind2);var12/*ary*/=bind_aget(bind2,1);; var5/*_result*/=it;;
it=var5/*_result*/; var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 2/*Seq*/:; bind_aset(bind2,1,var3/*s*/);bind_aset(bind2,2,var1/*msize*/);it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);var3/*s*/=bind_aget(bind2,1);;var1/*msize*/=bind_aget(bind2,2);; var7/*s*/=it;;
it=ame_curobj2(ptr)               ;ptr->pos++; var13/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var13/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var14/*autovar*/=it;;
int oldpos2;  while(1){oldpos2=ptr->pos; it=var7/*s*/; var3/*s*/=it;;
  it=AmethystCore_anything(self ); FAILTEST(break2); var0/*el*/=it;;
bind_aset(bind2,1,var0/*el*/);it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);var0/*el*/=bind_aget(bind2,1);; var1/*msize*/=it;;
it=var0/*el*/; var2/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var2/*autovar*/;ptr->len=1;
                    bind_aset(bind2,1,var3/*s*/);bind_aset(bind2,2,var1/*msize*/);it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);var3/*s*/=bind_aget(bind2,1);;var1/*msize*/=bind_aget(bind2,2);; arg0=it; it=Detect_Size_predicate2(self ,arg0); FAILTEST(pass6); var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto break2;
                   success6: *ptr=oldpass6;
                it=var6/*autovar*/; var0/*el*/=it;;
bind_aset(bind2,1,var1/*msize*/);bind_aset(bind2,2,var3/*s*/);bind_aset(bind2,3,var0/*el*/);it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);var1/*msize*/=bind_aget(bind2,1);;var3/*s*/=bind_aget(bind2,2);;var0/*el*/=bind_aget(bind2,3);; var10/*_result*/=it;;
it=var10/*_result*/; var15/*el*/=it;;
bind_aset(bind2,1,var7/*s*/);bind_aset(bind2,2,var15/*el*/);it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__eq__28f0,1,bind2);var7/*s*/=bind_aget(bind2,1);;var15/*el*/=bind_aget(bind2,2);;it=var15/*el*/; var16/*autovar*/=it;;
bind_aset(bind2,1,var14/*autovar*/);bind_aset(bind2,2,var16/*autovar*/);it=rb_funcall(self,sy_Detect_Size__append_lp__d113,1,bind2);var14/*autovar*/=bind_aget(bind2,1);;var16/*autovar*/=bind_aget(bind2,2);; } break2: ptr->pos=oldpos2;   it=var14/*autovar*/; var12/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass1;
                   success5: *ptr=oldpass5;
                bind_aset(bind2,1,var12/*ary*/);it=rb_funcall(self,sy_Detect_Size_Seq_dot_crea_bfbb,1,bind2);var12/*ary*/=bind_aget(bind2,1);; var5/*_result*/=it;;
it=var5/*_result*/; var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 3/*Object*/:; bind_aset(bind2,1,var3/*s*/);bind_aset(bind2,2,var1/*msize*/);it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);var3/*s*/=bind_aget(bind2,1);;var1/*msize*/=bind_aget(bind2,2);;goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var6/*autovar*/; var0/*el*/=it;;
bind_aset(bind2,1,var1/*msize*/);bind_aset(bind2,2,var3/*s*/);bind_aset(bind2,3,var0/*el*/);it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);var1/*msize*/=bind_aget(bind2,1);;var3/*s*/=bind_aget(bind2,2);;var0/*el*/=bind_aget(bind2,3);; var10/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Detect_Size_predicate2(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16; ;VALUE bind2=bind_new2(16); var4/*s*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Size_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass1);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass1; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7; else goto pass1; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=rb_funcall(self,sy_Detect_Size__sh_lowleve_46e8,1,bind2); var1/*_result*/=it;;
 break;
case 1/*Or*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var2/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var3/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos; it=var4/*s*/; var5/*s*/=it;;
  it=AmethystCore_anything(self ); FAILTEST(break1); var6/*el*/=it;;
bind_aset(bind2,1,var6/*el*/);it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);var6/*el*/=bind_aget(bind2,1);; var7/*msize*/=it;;
it=var6/*el*/; var8/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var8/*autovar*/;ptr->len=1;
                    bind_aset(bind2,1,var5/*s*/);bind_aset(bind2,2,var7/*msize*/);it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);var5/*s*/=bind_aget(bind2,1);;var7/*msize*/=bind_aget(bind2,2);; arg0=it; it=Detect_Size_predicate2(self ,arg0); FAILTEST(pass3); var9/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto break1;
                   success3: *ptr=oldpass3;
                it=var9/*autovar*/; var6/*el*/=it;;
bind_aset(bind2,1,var7/*msize*/);bind_aset(bind2,2,var5/*s*/);bind_aset(bind2,3,var6/*el*/);it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);var7/*msize*/=bind_aget(bind2,1);;var5/*s*/=bind_aget(bind2,2);;var6/*el*/=bind_aget(bind2,3);; var10/*_result*/=it;;
it=var10/*_result*/; var11/*autovar*/=it;;
bind_aset(bind2,1,var3/*autovar*/);bind_aset(bind2,2,var11/*autovar*/);it=rb_funcall(self,sy_Detect_Size__append_lp__d113,1,bind2);var3/*autovar*/=bind_aget(bind2,1);;var11/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos1;   it=var3/*autovar*/; var12/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto fail;
                   success2: *ptr=oldpass2;
                bind_aset(bind2,1,var12/*ary*/);it=rb_funcall(self,sy_Detect_Size_Or_dot_creat_49b2,1,bind2);var12/*ary*/=bind_aget(bind2,1);; var1/*_result*/=it;;
 break;
case 2/*Seq*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var13/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var13/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var14/*autovar*/=it;;
int oldpos2;  while(1){oldpos2=ptr->pos; it=var4/*s*/; var5/*s*/=it;;
  it=AmethystCore_anything(self ); FAILTEST(break2); var6/*el*/=it;;
bind_aset(bind2,1,var6/*el*/);it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);var6/*el*/=bind_aget(bind2,1);; var7/*msize*/=it;;
it=var6/*el*/; var8/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var8/*autovar*/;ptr->len=1;
                    bind_aset(bind2,1,var5/*s*/);bind_aset(bind2,2,var7/*msize*/);it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);var5/*s*/=bind_aget(bind2,1);;var7/*msize*/=bind_aget(bind2,2);; arg0=it; it=Detect_Size_predicate2(self ,arg0); FAILTEST(pass5); var9/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto break2;
                   success5: *ptr=oldpass5;
                it=var9/*autovar*/; var6/*el*/=it;;
bind_aset(bind2,1,var7/*msize*/);bind_aset(bind2,2,var5/*s*/);bind_aset(bind2,3,var6/*el*/);it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);var7/*msize*/=bind_aget(bind2,1);;var5/*s*/=bind_aget(bind2,2);;var6/*el*/=bind_aget(bind2,3);; var10/*_result*/=it;;
it=var10/*_result*/; var15/*el*/=it;;
bind_aset(bind2,1,var4/*s*/);bind_aset(bind2,2,var15/*el*/);it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__eq__28f0,1,bind2);var4/*s*/=bind_aget(bind2,1);;var15/*el*/=bind_aget(bind2,2);;it=var15/*el*/; var16/*autovar*/=it;;
bind_aset(bind2,1,var14/*autovar*/);bind_aset(bind2,2,var16/*autovar*/);it=rb_funcall(self,sy_Detect_Size__append_lp__d113,1,bind2);var14/*autovar*/=bind_aget(bind2,1);;var16/*autovar*/=bind_aget(bind2,2);; } break2: ptr->pos=oldpos2;   it=var14/*autovar*/; var12/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto fail;
                   success4: *ptr=oldpass4;
                bind_aset(bind2,1,var12/*ary*/);it=rb_funcall(self,sy_Detect_Size_Seq_dot_crea_bfbb,1,bind2);var12/*ary*/=bind_aget(bind2,1);; var1/*_result*/=it;;
 break;
case 3/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_detect_switch_c(){ 
 cls_First_Dataflow=rb_define_class("First_Dataflow",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_First_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch\nnext h[k]=14 if k<=Object\n}");rb_global_variable(&switchhash_First_Dataflow_1);;
sy_First_Dataflow_Compiler_558e=rb_intern("First_Dataflow_Compiler_558e");
sy_First_Dataflow__append_lp__d113=rb_intern("First_Dataflow__append_lp__d113");
sy_First_Dataflow__at_vis_eq_bin_8b89=rb_intern("First_Dataflow__at_vis_eq_bin_8b89");
sy_First_Dataflow__d41d=rb_intern("First_Dataflow__d41d");
sy_First_Dataflow__lp_=rb_intern("First_Dataflow__lp_");
sy_First_Dataflow__lp_Compile_7f7b=rb_intern("First_Dataflow__lp_Compile_7f7b");
sy_First_Dataflow_bind_lb_1_rb_=rb_intern("First_Dataflow_bind_lb_1_rb_");
sy_First_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("First_Dataflow_bind_lb_1_rb__dot__159a");
sy_First_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("First_Dataflow_bind_lb_1_rb__dot__a37c");
sy_First_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("First_Dataflow_bind_lb_1_rb__dot__c5d5");
sy_First_Dataflow_depends_lp__7463=rb_intern("First_Dataflow_depends_lp__7463");
sy_First_Dataflow_lattice_dot__5a9e=rb_intern("First_Dataflow_lattice_dot__5a9e");
sy_First_Dataflow_lattice_dot__b0f6=rb_intern("First_Dataflow_lattice_dot__b0f6");
sy_analyze=rb_intern("analyze");
                    rb_define_method(cls_First_Dataflow,"first",First_Dataflow_first,0);
rb_define_method(cls_First_Dataflow,"getvalue",First_Dataflow_getvalue,1);
rb_define_method(cls_First_Dataflow,"root",First_Dataflow_root,0);
rb_define_method(cls_First_Dataflow,"value",First_Dataflow_value,0);
                   
 cls_Minsize_Dataflow=rb_define_class("Minsize_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Minsize_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Minsize_Dataflow_1);;
switchhash_Minsize_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Minsize_Dataflow_2);;
switchhash_Minsize_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch\nnext h[k]=14 if k<=Object\n}");rb_global_variable(&switchhash_Minsize_Dataflow_3);;
sy_Minsize_Dataflow_Compiler_558e=rb_intern("Minsize_Dataflow_Compiler_558e");
sy_Minsize_Dataflow__append_lp__d113=rb_intern("Minsize_Dataflow__append_lp__d113");
sy_Minsize_Dataflow__at_vis_eq_bin_8b89=rb_intern("Minsize_Dataflow__at_vis_eq_bin_8b89");
sy_Minsize_Dataflow__d41d=rb_intern("Minsize_Dataflow__d41d");
sy_Minsize_Dataflow__lp_=rb_intern("Minsize_Dataflow__lp_");
sy_Minsize_Dataflow__lp_Compile_7f7b=rb_intern("Minsize_Dataflow__lp_Compile_7f7b");
sy_Minsize_Dataflow_bind_lb_1_rb_=rb_intern("Minsize_Dataflow_bind_lb_1_rb_");
sy_Minsize_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("Minsize_Dataflow_bind_lb_1_rb__dot__159a");
sy_Minsize_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("Minsize_Dataflow_bind_lb_1_rb__dot__a37c");
sy_Minsize_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("Minsize_Dataflow_bind_lb_1_rb__dot__c5d5");
sy_Minsize_Dataflow_lattice_dot__5a9e=rb_intern("Minsize_Dataflow_lattice_dot__5a9e");
sy_Minsize_Dataflow_lattice_dot__b0f6=rb_intern("Minsize_Dataflow_lattice_dot__b0f6");
sy_Minsize_Dataflow_lattice_dot__e0e5=rb_intern("Minsize_Dataflow_lattice_dot__e0e5");
sy_Minsize_Dataflow_lattice_lb__bbba=rb_intern("Minsize_Dataflow_lattice_lb__bbba");
sy_Minsize_Dataflow_lattice_lb__fdee=rb_intern("Minsize_Dataflow_lattice_lb__fdee");
                    rb_define_method(cls_Minsize_Dataflow,"first",Minsize_Dataflow_first,0);
rb_define_method(cls_Minsize_Dataflow,"first_Minsize_Dataflow",Minsize_Dataflow_first_Minsize_Dataflow,0);
rb_define_method(cls_Minsize_Dataflow,"getvalue",Minsize_Dataflow_getvalue,1);
                   
 cls_Maxsize_Dataflow=rb_define_class("Maxsize_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Maxsize_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Maxsize_Dataflow_1);;
switchhash_Maxsize_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Maxsize_Dataflow_2);;
switchhash_Maxsize_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch\nnext h[k]=14 if k<=Object\n}");rb_global_variable(&switchhash_Maxsize_Dataflow_3);;
sy_Maxsize_Dataflow_Compiler_558e=rb_intern("Maxsize_Dataflow_Compiler_558e");
sy_Maxsize_Dataflow__append_lp__d113=rb_intern("Maxsize_Dataflow__append_lp__d113");
sy_Maxsize_Dataflow__at_vis_eq_bin_8b89=rb_intern("Maxsize_Dataflow__at_vis_eq_bin_8b89");
sy_Maxsize_Dataflow__d41d=rb_intern("Maxsize_Dataflow__d41d");
sy_Maxsize_Dataflow__lp_=rb_intern("Maxsize_Dataflow__lp_");
sy_Maxsize_Dataflow__lp_Compile_7f7b=rb_intern("Maxsize_Dataflow__lp_Compile_7f7b");
sy_Maxsize_Dataflow_bind_lb_1_rb_=rb_intern("Maxsize_Dataflow_bind_lb_1_rb_");
sy_Maxsize_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("Maxsize_Dataflow_bind_lb_1_rb__dot__159a");
sy_Maxsize_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("Maxsize_Dataflow_bind_lb_1_rb__dot__a37c");
sy_Maxsize_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("Maxsize_Dataflow_bind_lb_1_rb__dot__c5d5");
sy_Maxsize_Dataflow_lattice_dot__5a9e=rb_intern("Maxsize_Dataflow_lattice_dot__5a9e");
sy_Maxsize_Dataflow_lattice_dot__b0f6=rb_intern("Maxsize_Dataflow_lattice_dot__b0f6");
sy_Maxsize_Dataflow_lattice_dot__e0e5=rb_intern("Maxsize_Dataflow_lattice_dot__e0e5");
sy_Maxsize_Dataflow_lattice_lb__bbba=rb_intern("Maxsize_Dataflow_lattice_lb__bbba");
sy_Maxsize_Dataflow_lattice_lb__fdee=rb_intern("Maxsize_Dataflow_lattice_lb__fdee");
                    rb_define_method(cls_Maxsize_Dataflow,"first",Maxsize_Dataflow_first,0);
rb_define_method(cls_Maxsize_Dataflow,"first_Maxsize_Dataflow",Maxsize_Dataflow_first_Maxsize_Dataflow,0);
rb_define_method(cls_Maxsize_Dataflow,"getvalue",Maxsize_Dataflow_getvalue,1);
                   
 cls_Switch_Char_Dataflow=rb_define_class("Switch_Char_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Switch_Char_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Switch_Char_Dataflow_1);;
switchhash_Switch_Char_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Switch_Char_Dataflow_2);;
switchhash_Switch_Char_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch\nnext h[k]=14 if k<=Object\n}");rb_global_variable(&switchhash_Switch_Char_Dataflow_3);;
sy_Switch_Char_Dataflow_Compiler_558e=rb_intern("Switch_Char_Dataflow_Compiler_558e");
sy_Switch_Char_Dataflow__append_lp__d113=rb_intern("Switch_Char_Dataflow__append_lp__d113");
sy_Switch_Char_Dataflow__at_vis_eq_bin_8b89=rb_intern("Switch_Char_Dataflow__at_vis_eq_bin_8b89");
sy_Switch_Char_Dataflow__d41d=rb_intern("Switch_Char_Dataflow__d41d");
sy_Switch_Char_Dataflow__lp_=rb_intern("Switch_Char_Dataflow__lp_");
sy_Switch_Char_Dataflow__lp_Compile_7f7b=rb_intern("Switch_Char_Dataflow__lp_Compile_7f7b");
sy_Switch_Char_Dataflow_bind_lb_1_rb_=rb_intern("Switch_Char_Dataflow_bind_lb_1_rb_");
sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("Switch_Char_Dataflow_bind_lb_1_rb__dot__159a");
sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("Switch_Char_Dataflow_bind_lb_1_rb__dot__a37c");
sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("Switch_Char_Dataflow_bind_lb_1_rb__dot__c5d5");
sy_Switch_Char_Dataflow_firstcha_f284=rb_intern("Switch_Char_Dataflow_firstcha_f284");
sy_Switch_Char_Dataflow_lattice_dot__5a9e=rb_intern("Switch_Char_Dataflow_lattice_dot__5a9e");
sy_Switch_Char_Dataflow_lattice_dot__b0f6=rb_intern("Switch_Char_Dataflow_lattice_dot__b0f6");
sy_Switch_Char_Dataflow_lattice_dot__e0e5=rb_intern("Switch_Char_Dataflow_lattice_dot__e0e5");
sy_Switch_Char_Dataflow_regchar_lp__90af=rb_intern("Switch_Char_Dataflow_regchar_lp__90af");
                    rb_define_method(cls_Switch_Char_Dataflow,"first",Switch_Char_Dataflow_first,0);
rb_define_method(cls_Switch_Char_Dataflow,"first_Switch_Char_Dataflow",Switch_Char_Dataflow_first_Switch_Char_Dataflow,0);
rb_define_method(cls_Switch_Char_Dataflow,"getvalue",Switch_Char_Dataflow_getvalue,1);
                   
 cls_Switch_Clas_Dataflow=rb_define_class("Switch_Clas_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Switch_Clas_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Switch_Clas_Dataflow_1);;
switchhash_Switch_Clas_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Switch_Clas_Dataflow_2);;
switchhash_Switch_Clas_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Class\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Switch_Clas_Dataflow_3);;
switchhash_Switch_Clas_Dataflow_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch\nnext h[k]=14 if k<=Object\n}");rb_global_variable(&switchhash_Switch_Clas_Dataflow_4);;
sy_Switch_Clas_Dataflow_Compiler_558e=rb_intern("Switch_Clas_Dataflow_Compiler_558e");
sy_Switch_Clas_Dataflow__append_lp__d113=rb_intern("Switch_Clas_Dataflow__append_lp__d113");
sy_Switch_Clas_Dataflow__at_vis_eq_bin_8b89=rb_intern("Switch_Clas_Dataflow__at_vis_eq_bin_8b89");
sy_Switch_Clas_Dataflow__d41d=rb_intern("Switch_Clas_Dataflow__d41d");
sy_Switch_Clas_Dataflow__lp_=rb_intern("Switch_Clas_Dataflow__lp_");
sy_Switch_Clas_Dataflow__lp_Compile_7f7b=rb_intern("Switch_Clas_Dataflow__lp_Compile_7f7b");
sy_Switch_Clas_Dataflow_bind_lb_1_rb_=rb_intern("Switch_Clas_Dataflow_bind_lb_1_rb_");
sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("Switch_Clas_Dataflow_bind_lb_1_rb__dot__159a");
sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c");
sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("Switch_Clas_Dataflow_bind_lb_1_rb__dot__c5d5");
sy_Switch_Clas_Dataflow_lattice_dot__5a9e=rb_intern("Switch_Clas_Dataflow_lattice_dot__5a9e");
sy_Switch_Clas_Dataflow_lattice_dot__b0f6=rb_intern("Switch_Clas_Dataflow_lattice_dot__b0f6");
sy_Switch_Clas_Dataflow_lattice_lb__78fa=rb_intern("Switch_Clas_Dataflow_lattice_lb__78fa");
                    rb_define_method(cls_Switch_Clas_Dataflow,"first",Switch_Clas_Dataflow_first,0);
rb_define_method(cls_Switch_Clas_Dataflow,"first_Switch_Clas_Dataflow",Switch_Clas_Dataflow_first_Switch_Clas_Dataflow,0);
rb_define_method(cls_Switch_Clas_Dataflow,"getvalue",Switch_Clas_Dataflow_getvalue,1);
                   
 cls_Cant_Fail_Dataflow=rb_define_class("Cant_Fail_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Cant_Fail_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Lookahead\nnext h[k]=3 if k<=Pass\nnext h[k]=4 if k<=Object\n}");rb_global_variable(&switchhash_Cant_Fail_Dataflow_1);;
switchhash_Cant_Fail_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch\nnext h[k]=14 if k<=Object\n}");rb_global_variable(&switchhash_Cant_Fail_Dataflow_2);;
sy_Cant_Fail_Dataflow_Compiler_558e=rb_intern("Cant_Fail_Dataflow_Compiler_558e");
sy_Cant_Fail_Dataflow__append_lp__d113=rb_intern("Cant_Fail_Dataflow__append_lp__d113");
sy_Cant_Fail_Dataflow__at_vis_eq_bin_8b89=rb_intern("Cant_Fail_Dataflow__at_vis_eq_bin_8b89");
sy_Cant_Fail_Dataflow__d41d=rb_intern("Cant_Fail_Dataflow__d41d");
sy_Cant_Fail_Dataflow__lp_=rb_intern("Cant_Fail_Dataflow__lp_");
sy_Cant_Fail_Dataflow__lp_Compile_7f7b=rb_intern("Cant_Fail_Dataflow__lp_Compile_7f7b");
sy_Cant_Fail_Dataflow__lp_src_dot_pre_c6b8=rb_intern("Cant_Fail_Dataflow__lp_src_dot_pre_c6b8");
sy_Cant_Fail_Dataflow_bind_lb_1_rb_=rb_intern("Cant_Fail_Dataflow_bind_lb_1_rb_");
sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("Cant_Fail_Dataflow_bind_lb_1_rb__dot__159a");
sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("Cant_Fail_Dataflow_bind_lb_1_rb__dot__a37c");
sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("Cant_Fail_Dataflow_bind_lb_1_rb__dot__c5d5");
sy_Cant_Fail_Dataflow_lattice_dot__3340=rb_intern("Cant_Fail_Dataflow_lattice_dot__3340");
sy_Cant_Fail_Dataflow_lattice_dot__4869=rb_intern("Cant_Fail_Dataflow_lattice_dot__4869");
sy_Cant_Fail_Dataflow_lattice_dot__5a9e=rb_intern("Cant_Fail_Dataflow_lattice_dot__5a9e");
sy_Cant_Fail_Dataflow_lattice_dot__b0f6=rb_intern("Cant_Fail_Dataflow_lattice_dot__b0f6");
sy_Cant_Fail_Dataflow_src_dot_to_5e99=rb_intern("Cant_Fail_Dataflow_src_dot_to_5e99");
                    rb_define_method(cls_Cant_Fail_Dataflow,"first",Cant_Fail_Dataflow_first,0);
rb_define_method(cls_Cant_Fail_Dataflow,"first_Cant_Fail_Dataflow",Cant_Fail_Dataflow_first_Cant_Fail_Dataflow,0);
rb_define_method(cls_Cant_Fail_Dataflow,"getvalue",Cant_Fail_Dataflow_getvalue,1);
                   
 cls_Detect_First=rb_define_class("Detect_First",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Detect_First_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_First_1);;
switchhash_Detect_First_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_First_2);;
switchhash_Detect_First_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_First_3);;
switchhash_Detect_First_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_First_4);;
sy_Detect_First__append_lp__d113=rb_intern("Detect_First__append_lp__d113");
sy_Detect_First__at_name_eq_sr_362f=rb_intern("Detect_First__at_name_eq_sr_362f");
sy_Detect_First__do_rules_eq__le__ab16=rb_intern("Detect_First__do_rules_eq__le__ab16");
sy_Detect_First__lp_cant_fa_17ef=rb_intern("Detect_First__lp_cant_fa_17ef");
sy_Detect_First__lp_must_em_43e9=rb_intern("Detect_First__lp_must_em_43e9");
sy_Detect_First_src_25d9=rb_intern("Detect_First_src_25d9");
sy_Detect_First_src_dot_rule_5acf=rb_intern("Detect_First_src_dot_rule_5acf");
sy_Detect_First_src_dot_rule_a719=rb_intern("Detect_First_src_dot_rule_a719");
                    rb_define_method(cls_Detect_First,"cant_fail",Detect_First_cant_fail,0);
rb_define_method(cls_Detect_First,"itrans",Detect_First_itrans,0);
rb_define_method(cls_Detect_First,"must_empty",Detect_First_must_empty,0);
rb_define_method(cls_Detect_First,"object_only",Detect_First_object_only,0);
rb_define_method(cls_Detect_First,"root",Detect_First_root,0);
rb_define_method(cls_Detect_First,"string_only",Detect_First_string_only,0);
                   
 cls_Detect_Switch_Char=rb_define_class("Detect_Switch_Char",rb_const_get(rb_cObject,rb_intern("Detect_First"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Detect_Switch_Char_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_10);;
switchhash_Detect_Switch_Char_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Many\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_1);;
switchhash_Detect_Switch_Char_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_2);;
switchhash_Detect_Switch_Char_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_3);;
switchhash_Detect_Switch_Char_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_4);;
switchhash_Detect_Switch_Char_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_5);;
switchhash_Detect_Switch_Char_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_6);;
switchhash_Detect_Switch_Char_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_7);;
switchhash_Detect_Switch_Char_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_8);;
switchhash_Detect_Switch_Char_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_9);;
sy_Detect_Switch_Char_Or_lb__ti_bind_d486=rb_intern("Detect_Switch_Char_Or_lb__ti_bind_d486");
sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321=rb_intern("Detect_Switch_Char_Seq_lb__ti__lp_bi_a321");
sy_Detect_Switch_Char_Switch_C_6b05=rb_intern("Detect_Switch_Char_Switch_C_6b05");
sy_Detect_Switch_Char_Switch_C_6c19=rb_intern("Detect_Switch_Char_Switch_C_6c19");
sy_Detect_Switch_Char__append_lp__d113=rb_intern("Detect_Switch_Char__append_lp__d113");
sy_Detect_Switch_Char__at_changed_5352=rb_intern("Detect_Switch_Char__at_changed_5352");
sy_Detect_Switch_Char__at_changed_b885=rb_intern("Detect_Switch_Char__at_changed_b885");
sy_Detect_Switch_Char__at_changed_c681=rb_intern("Detect_Switch_Char__at_changed_c681");
sy_Detect_Switch_Char__at_name_eq_sr_362f=rb_intern("Detect_Switch_Char__at_name_eq_sr_362f");
sy_Detect_Switch_Char__do_rules_eq__le__ab16=rb_intern("Detect_Switch_Char__do_rules_eq__le__ab16");
sy_Detect_Switch_Char__lb__lb_Lattic_d322=rb_intern("Detect_Switch_Char__lb__lb_Lattic_d322");
sy_Detect_Switch_Char__lp_2=rb_intern("Detect_Switch_Char__lp_2");
sy_Detect_Switch_Char__lp_=rb_intern("Detect_Switch_Char__lp_");
sy_Detect_Switch_Char__lp_bind_lb_1_rb__ee3d=rb_intern("Detect_Switch_Char__lp_bind_lb_1_rb__ee3d");
sy_Detect_Switch_Char__lp_src_dot_ins_6a75=rb_intern("Detect_Switch_Char__lp_src_dot_ins_6a75");
sy_Detect_Switch_Char_bind_lb_1_rb__dot__0b68=rb_intern("Detect_Switch_Char_bind_lb_1_rb__dot__0b68");
sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482=rb_intern("Detect_Switch_Char_bind_lb_1_rb__dot__a482");
sy_Detect_Switch_Char_bind_lb_1_rb__dot__bb04=rb_intern("Detect_Switch_Char_bind_lb_1_rb__dot__bb04");
sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20=rb_intern("Detect_Switch_Char_bind_lb_1_rb__lt__7b20");
sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651=rb_intern("Detect_Switch_Char_bind_lb_1_rb__pl__4651");
sy_Detect_Switch_Char_first_lp_sr_3298=rb_intern("Detect_Switch_Char_first_lp_sr_3298");
sy_Detect_Switch_Char_if_sp_bind_lb__8e0b=rb_intern("Detect_Switch_Char_if_sp_bind_lb__8e0b");
sy_Detect_Switch_Char_s_eq_Switch_78a6=rb_intern("Detect_Switch_Char_s_eq_Switch_78a6");
sy_Detect_Switch_Char_s_eq_Switch_7c35=rb_intern("Detect_Switch_Char_s_eq_Switch_7c35");
sy_Detect_Switch_Char_s_eq_Switch_df23=rb_intern("Detect_Switch_Char_s_eq_Switch_df23");
sy_Detect_Switch_Char_s_eq_Switch_eb1e=rb_intern("Detect_Switch_Char_s_eq_Switch_eb1e");
sy_Detect_Switch_Char_src_25d9=rb_intern("Detect_Switch_Char_src_25d9");
sy_Detect_Switch_Char_src_dot_ary_d5cf=rb_intern("Detect_Switch_Char_src_dot_ary_d5cf");
sy_Detect_Switch_Char_src_dot_rule_5acf=rb_intern("Detect_Switch_Char_src_dot_rule_5acf");
sy_Detect_Switch_Char_src_dot_rule_a719=rb_intern("Detect_Switch_Char_src_dot_rule_a719");
sy_first=rb_intern("first");
                    rb_define_method(cls_Detect_Switch_Char,"combine_or",Detect_Switch_Char_combine_or,1);
rb_define_method(cls_Detect_Switch_Char,"combine_seq",Detect_Switch_Char_combine_seq,1);
rb_define_method(cls_Detect_Switch_Char,"itrans",Detect_Switch_Char_itrans,0);
rb_define_method(cls_Detect_Switch_Char,"root",Detect_Switch_Char_root,0);
rb_define_method(cls_Detect_Switch_Char,"traverse",Detect_Switch_Char_traverse,0);
rb_define_method(cls_Detect_Switch_Char,"traverse_item",Detect_Switch_Char_traverse_item,0);
rb_define_method(cls_Detect_Switch_Char,"visit",Detect_Switch_Char_visit,0);
                   
 cls_Detect_Switch_Clas=rb_define_class("Detect_Switch_Clas",rb_const_get(rb_cObject,rb_intern("Detect_First"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Detect_Switch_Clas_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Clas_10);;
switchhash_Detect_Switch_Clas_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Clas_1);;
switchhash_Detect_Switch_Clas_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Clas_2);;
switchhash_Detect_Switch_Clas_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Class\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Clas_3);;
switchhash_Detect_Switch_Clas_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Clas_4);;
switchhash_Detect_Switch_Clas_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Clas_5);;
switchhash_Detect_Switch_Clas_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Clas_6);;
switchhash_Detect_Switch_Clas_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Clas_7);;
switchhash_Detect_Switch_Clas_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Clas_8);;
switchhash_Detect_Switch_Clas_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Clas_9);;
sy_Detect_Switch_Clas_Or_lb__ti_bind_d486=rb_intern("Detect_Switch_Clas_Or_lb__ti_bind_d486");
sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321=rb_intern("Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321");
sy_Detect_Switch_Clas_Switch_C_06c2=rb_intern("Detect_Switch_Clas_Switch_C_06c2");
sy_Detect_Switch_Clas_Switch_C_63f7=rb_intern("Detect_Switch_Clas_Switch_C_63f7");
sy_Detect_Switch_Clas_Switch_C_7ba7=rb_intern("Detect_Switch_Clas_Switch_C_7ba7");
sy_Detect_Switch_Clas__append_lp__d113=rb_intern("Detect_Switch_Clas__append_lp__d113");
sy_Detect_Switch_Clas__at_changed_5352=rb_intern("Detect_Switch_Clas__at_changed_5352");
sy_Detect_Switch_Clas__at_changed_b885=rb_intern("Detect_Switch_Clas__at_changed_b885");
sy_Detect_Switch_Clas__at_changed_c681=rb_intern("Detect_Switch_Clas__at_changed_c681");
sy_Detect_Switch_Clas__at_name_eq_sr_362f=rb_intern("Detect_Switch_Clas__at_name_eq_sr_362f");
sy_Detect_Switch_Clas__do_rules_eq__le__ab16=rb_intern("Detect_Switch_Clas__do_rules_eq__le__ab16");
sy_Detect_Switch_Clas__lb__lb_Lattic_62e5=rb_intern("Detect_Switch_Clas__lb__lb_Lattic_62e5");
sy_Detect_Switch_Clas__lp_2=rb_intern("Detect_Switch_Clas__lp_2");
sy_Detect_Switch_Clas__lp_=rb_intern("Detect_Switch_Clas__lp_");
sy_Detect_Switch_Clas__lp_bind_lb_1_rb__ee3d=rb_intern("Detect_Switch_Clas__lp_bind_lb_1_rb__ee3d");
sy_Detect_Switch_Clas__lp_src_dot_ins_6a75=rb_intern("Detect_Switch_Clas__lp_src_dot_ins_6a75");
sy_Detect_Switch_Clas_bind_lb_1_rb__dot__6945=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__dot__6945");
sy_Detect_Switch_Clas_bind_lb_1_rb__dot__76da=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__dot__76da");
sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__dot__a482");
sy_Detect_Switch_Clas_bind_lb_1_rb__lt__7b20=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__lt__7b20");
sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__pl__4651");
sy_Detect_Switch_Clas_c_eq_Switch_4e5f=rb_intern("Detect_Switch_Clas_c_eq_Switch_4e5f");
sy_Detect_Switch_Clas_if_sp_bind_lb__8e0b=rb_intern("Detect_Switch_Clas_if_sp_bind_lb__8e0b");
sy_Detect_Switch_Clas_src_25d9=rb_intern("Detect_Switch_Clas_src_25d9");
sy_Detect_Switch_Clas_src_dot_ary_d5cf=rb_intern("Detect_Switch_Clas_src_dot_ary_d5cf");
sy_Detect_Switch_Clas_src_dot_rule_5acf=rb_intern("Detect_Switch_Clas_src_dot_rule_5acf");
sy_Detect_Switch_Clas_src_dot_rule_a719=rb_intern("Detect_Switch_Clas_src_dot_rule_a719");
sy_first=rb_intern("first");
                    rb_define_method(cls_Detect_Switch_Clas,"combine_or",Detect_Switch_Clas_combine_or,1);
rb_define_method(cls_Detect_Switch_Clas,"combine_seq",Detect_Switch_Clas_combine_seq,1);
rb_define_method(cls_Detect_Switch_Clas,"itrans",Detect_Switch_Clas_itrans,0);
rb_define_method(cls_Detect_Switch_Clas,"root",Detect_Switch_Clas_root,0);
rb_define_method(cls_Detect_Switch_Clas,"traverse",Detect_Switch_Clas_traverse,0);
rb_define_method(cls_Detect_Switch_Clas,"traverse_item",Detect_Switch_Clas_traverse_item,0);
rb_define_method(cls_Detect_Switch_Clas,"visit",Detect_Switch_Clas_visit,0);
                   
 cls_Detect_Size=rb_define_class("Detect_Size",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Detect_Size_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Size_1);;
switchhash_Detect_Size_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Size_2);;
sy_Detect_Size_Or_dot_creat_49b2=rb_intern("Detect_Size_Or_dot_creat_49b2");
sy_Detect_Size_Seq_dot_crea_bfbb=rb_intern("Detect_Size_Seq_dot_crea_bfbb");
sy_Detect_Size__append_lp__d113=rb_intern("Detect_Size__append_lp__d113");
sy_Detect_Size__lb_bind_lb_1_rb__2d76=rb_intern("Detect_Size__lb_bind_lb_1_rb__2d76");
sy_Detect_Size__sh_lowleve_46e8=rb_intern("Detect_Size__sh_lowleve_46e8");
sy_Detect_Size_bind_lb_1_rb__eq__28f0=rb_intern("Detect_Size_bind_lb_1_rb__eq__28f0");
sy_Detect_Size_bind_lb_1_rb__gt__f573=rb_intern("Detect_Size_bind_lb_1_rb__gt__f573");
sy_Detect_Size_minsize_lp__01f0=rb_intern("Detect_Size_minsize_lp__01f0");
                    rb_define_method(cls_Detect_Size,"predicate",Detect_Size_predicate,1);
rb_define_method(cls_Detect_Size,"predicate2",Detect_Size_predicate2,1);
                    rb_eval_string("testversiondetect_switch('23f0f68fc1fb80155942d80e35e0c28a')");}
