#include "cthyst.h"
VALUE cls_First_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE First_Dataflow_first(VALUE self );
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE First_Dataflow_root(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE switchhash_First_Dataflow_1;
static VALUE sy_First_Dataflow_Compiler_ad51;
static VALUE sy_First_Dataflow__append_lp__3f99;
static VALUE sy_First_Dataflow__append_lp__a474;
static VALUE sy_First_Dataflow__append_lp__e555;
static VALUE sy_First_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_First_Dataflow__d41d;
static VALUE sy_First_Dataflow__lp_;
static VALUE sy_First_Dataflow__lp_Compile_bc2b;
static VALUE sy_First_Dataflow_bind_lb_11_rb__4dc0;
static VALUE sy_First_Dataflow_bind_lb_11_rb__7d69;
static VALUE sy_First_Dataflow_bind_lb_16_rb__6275;
static VALUE sy_First_Dataflow_bind_lb_25_rb__eb7c;
static VALUE sy_First_Dataflow_depends_lp__5009;
static VALUE sy_First_Dataflow_lattice_dot__5a9e;
static VALUE sy_First_Dataflow_lattice_dot__b0f6;
static VALUE sy_analyze;
VALUE First_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(31);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_First_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*name*/,it);
it=rb_funcall(self,sy_First_Dataflow__lp_Compile_bc2b,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_First_Dataflow_Compiler_ad51,1,bind);  bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_11_rb__4dc0,1,bind);  bind_aset(bind,12/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_2;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,12/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
int oldpos6; while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__a474,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,14/*autovar*/); bind_aset(bind,16/*vals*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt5_2;
                   success6: *ptr=oldpass6;
                it=rb_funcall(self,sy_First_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,11/*val*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,18/*el*/,it);
it=bind_aget(bind,18/*el*/); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,19/*autovar*/);ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,20/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break2;
                   success8: *ptr=oldpass8;
                it=bind_aget(bind,20/*autovar*/); bind_aset(bind,21/*nev*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_11_rb__7d69,1,bind);  bind_aset(bind,11/*val*/,it);
int oldpos9=ptr->pos;
alt7_1:;it=rb_funcall(self,sy_First_Dataflow__lp_,1,bind); FAILTEST(alt7_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept7;
alt7_2: ptr->pos=oldpos9;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}it=rb_funcall(self,sy_First_Dataflow__d41d,1,bind); 
;goto accept7;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept7:;
 if (ame_getstop(self)!=Qnil){oldpos8=ptr->pos;goto break2;} } break2: ame_setstop(self,Qnil); ptr->pos=oldpos8; ptr->pos=ptr->len;it=bind_aget(bind,11/*val*/); bind_aset(bind,22/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt6_2;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,22/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept6:;
 break;
case 13/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,16/*vals*/,it);
int oldpos10=ptr->pos;
alt8_1:;  it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,23/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos11; while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,25/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass10); bind_aset(bind,26/*v*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_25_rb__eb7c,1,bind);  bind_aset(bind,27/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__3f99,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto break3;
                   success10: *ptr=oldpass10;
                  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos11; it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt8_2;
                   success9: *ptr=oldpass9;
                it=rb_funcall(self,sy_First_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept8:;
 break;
case 14/*Switch_Clas*/:; it=rb_ary_new3(0); bind_aset(bind,16/*vals*/,it);
int oldpos12=ptr->pos;
alt9_1:;  it=AmethystCore_anything(self ); FAILTEST(alt9_2); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,28/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos13; while(1){oldpos13=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,29/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,29/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass12); bind_aset(bind,25/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass12); bind_aset(bind,26/*v*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_25_rb__eb7c,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__e555,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto break4;
                   success12: *ptr=oldpass12;
                  } break4: ame_setstop(self,Qnil); ptr->pos=oldpos13; it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto alt9_2;
                   success11: *ptr=oldpass11;
                it=rb_funcall(self,sy_First_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_2: ptr->pos=oldpos12;  it=AmethystCore_anything(self ); FAILTEST(alt9_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_3: ptr->pos=oldpos12;goto fail;
 accept9:;
 break;
case 15/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_First_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                     it=First_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE First_Dataflow_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*x*/,it);
 it=bind_aget(bind,0/*x*/); arg0=it; it=rb_funcall(self,sy_analyze,1,arg0); FAILTEST(fail); bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE First_Dataflow_value(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*x*/,it);
it=rb_funcall(self,sy_First_Dataflow_depends_lp__5009,1,bind);  bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Sizes_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Sizes_Dataflow_first(VALUE self );
VALUE Sizes_Dataflow_first_Sizes_Dataflow(VALUE self );
VALUE Sizes_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Sizes_Dataflow_1;
VALUE switchhash_Sizes_Dataflow_2;
VALUE switchhash_Sizes_Dataflow_3;
static VALUE sy_Sizes_Dataflow_Compiler_ad51;
static VALUE sy_Sizes_Dataflow__append_lp__3f99;
static VALUE sy_Sizes_Dataflow__append_lp__a474;
static VALUE sy_Sizes_Dataflow__append_lp__e555;
static VALUE sy_Sizes_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Sizes_Dataflow__d41d;
static VALUE sy_Sizes_Dataflow__lp_;
static VALUE sy_Sizes_Dataflow__lp_Compile_bc2b;
static VALUE sy_Sizes_Dataflow_bind_lb_11_rb__4dc0;
static VALUE sy_Sizes_Dataflow_bind_lb_11_rb__7d69;
static VALUE sy_Sizes_Dataflow_bind_lb_16_rb__6275;
static VALUE sy_Sizes_Dataflow_bind_lb_25_rb__eb7c;
static VALUE sy_Sizes_Dataflow_lattice_dot__5a9e;
static VALUE sy_Sizes_Dataflow_lattice_dot__b0f6;
static VALUE sy_Sizes_Dataflow_lattice_dot__e0e5;
static VALUE sy_Sizes_Dataflow_lattice_lb__cef9;
static VALUE sy_Sizes_Dataflow_lattice_lb__fdee;
VALUE Sizes_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Sizes_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_Sizes_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ptr->pos;
alt2_1:;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass2; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass2; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*str*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt2_2;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Sizes_Dataflow_lattice_lb__cef9,1,bind);  bind_aset(bind,7/*autovar*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... 'b':;case 'd' ... 'q':;case 's' ... UC(255):; goto pass4; break;
case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr2(ptr),"egch",4)) goto pass4; else ptr->pos+=4; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr2(ptr),"nything",7)) goto pass4; else ptr->pos+=7; break;
case 'c' ... 'c':;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr2(ptr),"las",3)) goto pass4; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt2_3;
                   success4: *ptr=oldpass4;
                ptr->pos=ptr->len;it=rb_funcall(self,sy_Sizes_Dataflow_lattice_lb__fdee,1,bind);  bind_aset(bind,7/*autovar*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass5; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass5; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt2_4;
                   success5: *ptr=oldpass5;
                it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__e0e5,1,bind);  bind_aset(bind,7/*autovar*/,it);

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto pass1;
 accept2:;
 break;
case 1/*Object*/:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,10/*autovar*/,it);
int oldpos3=ptr->pos;
alt3_1:;it=bind_aget(bind,10/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass6);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass6; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass6);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass6; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt3_2;
                   success6: *ptr=oldpass6;
                goto alt3_2;
;goto accept3;
alt3_2: ptr->pos=oldpos3;it=bind_aget(bind,10/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass7);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... 'b':;case 'd' ... 'q':;case 's' ... UC(255):; goto pass7; break;
case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass7);if (strncmp(ame_curstr2(ptr),"egch",4)) goto pass7; else ptr->pos+=4; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass7);if (strncmp(ame_curstr2(ptr),"nything",7)) goto pass7; else ptr->pos+=7; break;
case 'c' ... 'c':;   it=AmethystCore_anything(self ); FAILTEST(pass7);if (strncmp(ame_curstr2(ptr),"las",3)) goto pass7; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt3_3;
                   success7: *ptr=oldpass7;
                ptr->pos=ptr->len;it=rb_funcall(self,sy_Sizes_Dataflow_lattice_lb__fdee,1,bind);  bind_aset(bind,7/*autovar*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;it=bind_aget(bind,10/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass8);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass8; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass8);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass8; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt3_4;
                   success8: *ptr=oldpass8;
                it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__e0e5,1,bind);  bind_aset(bind,7/*autovar*/,it);

;goto accept3;
alt3_4: ptr->pos=oldpos3;goto pass1;
 accept3:;
 break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,11/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Sizes_Dataflow_first_Sizes_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,11/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:;   it=Sizes_Dataflow_first_Sizes_Dataflow(self ); FAILTEST(fail); bind_aset(bind,11/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_first_Sizes_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(31);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Sizes_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*name*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__lp_Compile_bc2b,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_Sizes_Dataflow_Compiler_ad51,1,bind);  bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_11_rb__4dc0,1,bind);  bind_aset(bind,12/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_2;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,12/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
int oldpos6; while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__a474,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,14/*autovar*/); bind_aset(bind,16/*vals*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt5_2;
                   success6: *ptr=oldpass6;
                it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,11/*val*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,18/*el*/,it);
it=bind_aget(bind,18/*el*/); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,19/*autovar*/);ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,20/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break2;
                   success8: *ptr=oldpass8;
                it=bind_aget(bind,20/*autovar*/); bind_aset(bind,21/*nev*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_11_rb__7d69,1,bind);  bind_aset(bind,11/*val*/,it);
int oldpos9=ptr->pos;
alt7_1:;it=rb_funcall(self,sy_Sizes_Dataflow__lp_,1,bind); FAILTEST(alt7_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept7;
alt7_2: ptr->pos=oldpos9;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}it=rb_funcall(self,sy_Sizes_Dataflow__d41d,1,bind); 
;goto accept7;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept7:;
 if (ame_getstop(self)!=Qnil){oldpos8=ptr->pos;goto break2;} } break2: ame_setstop(self,Qnil); ptr->pos=oldpos8; ptr->pos=ptr->len;it=bind_aget(bind,11/*val*/); bind_aset(bind,22/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt6_2;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,22/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept6:;
 break;
case 13/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,16/*vals*/,it);
int oldpos10=ptr->pos;
alt8_1:;  it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,23/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos11; while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,25/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass10); bind_aset(bind,26/*v*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_25_rb__eb7c,1,bind);  bind_aset(bind,27/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__3f99,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto break3;
                   success10: *ptr=oldpass10;
                  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos11; it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt8_2;
                   success9: *ptr=oldpass9;
                it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept8:;
 break;
case 14/*Switch_Clas*/:; it=rb_ary_new3(0); bind_aset(bind,16/*vals*/,it);
int oldpos12=ptr->pos;
alt9_1:;  it=AmethystCore_anything(self ); FAILTEST(alt9_2); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,28/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos13; while(1){oldpos13=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,29/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,29/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass12); bind_aset(bind,25/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass12); bind_aset(bind,26/*v*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_25_rb__eb7c,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__e555,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto break4;
                   success12: *ptr=oldpass12;
                  } break4: ame_setstop(self,Qnil); ptr->pos=oldpos13; it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto alt9_2;
                   success11: *ptr=oldpass11;
                it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_2: ptr->pos=oldpos12;  it=AmethystCore_anything(self ); FAILTEST(alt9_3);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_3: ptr->pos=oldpos12;goto fail;
 accept9:;
 break;
case 15/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Sizes_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                     it=Sizes_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);

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
static VALUE sy_Switch_Char_Dataflow_Compiler_ad51;
static VALUE sy_Switch_Char_Dataflow__append_lp__3f99;
static VALUE sy_Switch_Char_Dataflow__append_lp__a474;
static VALUE sy_Switch_Char_Dataflow__append_lp__e555;
static VALUE sy_Switch_Char_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Switch_Char_Dataflow__d41d;
static VALUE sy_Switch_Char_Dataflow__lp_;
static VALUE sy_Switch_Char_Dataflow__lp_Compile_bc2b;
static VALUE sy_Switch_Char_Dataflow_bind_lb_11_rb__4dc0;
static VALUE sy_Switch_Char_Dataflow_bind_lb_11_rb__7d69;
static VALUE sy_Switch_Char_Dataflow_bind_lb_16_rb__6275;
static VALUE sy_Switch_Char_Dataflow_bind_lb_25_rb__eb7c;
static VALUE sy_Switch_Char_Dataflow_firstcha_c300;
static VALUE sy_Switch_Char_Dataflow_lattice_dot__5a9e;
static VALUE sy_Switch_Char_Dataflow_lattice_dot__b0f6;
static VALUE sy_Switch_Char_Dataflow_lattice_dot__e0e5;
static VALUE sy_Switch_Char_Dataflow_regchar_lp__9b27;
VALUE Switch_Char_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ptr->pos;
alt2_1:;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass2; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass2; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                goto alt2_2;
;goto accept2;
alt2_2: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'q':;case 's' ... UC(255):; goto pass3; break;
case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass3);if (strncmp(ame_curstr2(ptr),"egch",4)) goto pass3; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt2_3;
                   success3: *ptr=oldpass3;
                  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,7/*str*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt2_3;
                   success4: *ptr=oldpass4;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_regchar_lp__9b27,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass5; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr2(ptr),"nything",7)) goto pass5; else ptr->pos+=7; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt2_4;
                   success5: *ptr=oldpass5;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__e0e5,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept2;
alt2_4: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass6);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass6; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass6);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass6; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt2_5;
                   success6: *ptr=oldpass6;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept2;
alt2_5: ptr->pos=oldpos2;goto pass1;
 accept2:;
 break;
case 1/*CAct*/:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,11/*autovar*/,it);
int oldpos3=ptr->pos;
alt3_1:;it=bind_aget(bind,11/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass7);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass7; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass7);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass7; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt3_2;
                   success7: *ptr=oldpass7;
                  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass8); bind_aset(bind,7/*str*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt3_2;
                   success8: *ptr=oldpass8;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_firstcha_c300,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;it=bind_aget(bind,11/*autovar*/); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass9);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'q':;case 's' ... UC(255):; goto pass9; break;
case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass9);if (strncmp(ame_curstr2(ptr),"egch",4)) goto pass9; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt3_3;
                   success9: *ptr=oldpass9;
                goto alt3_3;
;goto accept3;
alt3_3: ptr->pos=oldpos3;it=bind_aget(bind,11/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass10);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass10; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass10);if (strncmp(ame_curstr2(ptr),"nything",7)) goto pass10; else ptr->pos+=7; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto alt3_4;
                   success10: *ptr=oldpass10;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__e0e5,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept3;
alt3_4: ptr->pos=oldpos3;it=bind_aget(bind,11/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass11);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass11; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass11);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass11; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto alt3_5;
                   success11: *ptr=oldpass11;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept3;
alt3_5: ptr->pos=oldpos3;goto pass1;
 accept3:;
 break;
case 2/*Object*/:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,13/*autovar*/,it);
int oldpos4=ptr->pos;
alt4_1:;it=bind_aget(bind,13/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass12);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass12; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass12);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass12; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto alt4_2;
                   success12: *ptr=oldpass12;
                goto alt4_2;
;goto accept4;
alt4_2: ptr->pos=oldpos4;it=bind_aget(bind,13/*autovar*/); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass13);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'q':;case 's' ... UC(255):; goto pass13; break;
case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass13);if (strncmp(ame_curstr2(ptr),"egch",4)) goto pass13; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass13;
                   goto success13;
                   pass13: *ptr=oldpass13; goto alt4_3;
                   success13: *ptr=oldpass13;
                goto alt4_3;
;goto accept4;
alt4_3: ptr->pos=oldpos4;it=bind_aget(bind,13/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass14);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass14; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass14);if (strncmp(ame_curstr2(ptr),"nything",7)) goto pass14; else ptr->pos+=7; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto alt4_4;
                   success14: *ptr=oldpass14;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__e0e5,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept4;
alt4_4: ptr->pos=oldpos4;it=bind_aget(bind,13/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass15);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass15; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass15);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass15; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass15;
                   goto success15;
                   pass15: *ptr=oldpass15; goto alt4_5;
                   success15: *ptr=oldpass15;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept4;
alt4_5: ptr->pos=oldpos4;goto pass1;
 accept4:;
 break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,8/*autovar*/); bind_aset(bind,14/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Switch_Char_Dataflow_first_Switch_Char_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,14/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:;   it=Switch_Char_Dataflow_first_Switch_Char_Dataflow(self ); FAILTEST(fail); bind_aset(bind,14/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Char_Dataflow_first_Switch_Char_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(31);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*name*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__lp_Compile_bc2b,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_Switch_Char_Dataflow_Compiler_ad51,1,bind);  bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_11_rb__4dc0,1,bind);  bind_aset(bind,12/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_2;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,12/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
int oldpos6; while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__a474,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,14/*autovar*/); bind_aset(bind,16/*vals*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt5_2;
                   success6: *ptr=oldpass6;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,11/*val*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,18/*el*/,it);
it=bind_aget(bind,18/*el*/); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,19/*autovar*/);ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,20/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break2;
                   success8: *ptr=oldpass8;
                it=bind_aget(bind,20/*autovar*/); bind_aset(bind,21/*nev*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_11_rb__7d69,1,bind);  bind_aset(bind,11/*val*/,it);
int oldpos9=ptr->pos;
alt7_1:;it=rb_funcall(self,sy_Switch_Char_Dataflow__lp_,1,bind); FAILTEST(alt7_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept7;
alt7_2: ptr->pos=oldpos9;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}it=rb_funcall(self,sy_Switch_Char_Dataflow__d41d,1,bind); 
;goto accept7;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept7:;
 if (ame_getstop(self)!=Qnil){oldpos8=ptr->pos;goto break2;} } break2: ame_setstop(self,Qnil); ptr->pos=oldpos8; ptr->pos=ptr->len;it=bind_aget(bind,11/*val*/); bind_aset(bind,22/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt6_2;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,22/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept6:;
 break;
case 13/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,16/*vals*/,it);
int oldpos10=ptr->pos;
alt8_1:;  it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,23/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos11; while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,25/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass10); bind_aset(bind,26/*v*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_25_rb__eb7c,1,bind);  bind_aset(bind,27/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__3f99,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto break3;
                   success10: *ptr=oldpass10;
                  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos11; it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt8_2;
                   success9: *ptr=oldpass9;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept8:;
 break;
case 14/*Switch_Clas*/:; it=rb_ary_new3(0); bind_aset(bind,16/*vals*/,it);
int oldpos12=ptr->pos;
alt9_1:;  it=AmethystCore_anything(self ); FAILTEST(alt9_2); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,28/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos13; while(1){oldpos13=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,29/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,29/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass12); bind_aset(bind,25/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass12); bind_aset(bind,26/*v*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_25_rb__eb7c,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__e555,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto break4;
                   success12: *ptr=oldpass12;
                  } break4: ame_setstop(self,Qnil); ptr->pos=oldpos13; it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto alt9_2;
                   success11: *ptr=oldpass11;
                it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_2: ptr->pos=oldpos12;  it=AmethystCore_anything(self ); FAILTEST(alt9_3);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_3: ptr->pos=oldpos12;goto fail;
 accept9:;
 break;
case 15/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Char_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Switch_Char_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                     it=Switch_Char_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);

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
static VALUE sy_Switch_Clas_Dataflow_Compiler_ad51;
static VALUE sy_Switch_Clas_Dataflow__append_lp__3f99;
static VALUE sy_Switch_Clas_Dataflow__append_lp__a474;
static VALUE sy_Switch_Clas_Dataflow__append_lp__e555;
static VALUE sy_Switch_Clas_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Switch_Clas_Dataflow__d41d;
static VALUE sy_Switch_Clas_Dataflow__lp_;
static VALUE sy_Switch_Clas_Dataflow__lp_Compile_bc2b;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_11_rb__4dc0;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_11_rb__7d69;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_16_rb__6275;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_25_rb__eb7c;
static VALUE sy_Switch_Clas_Dataflow_lattice_dot__5a9e;
static VALUE sy_Switch_Clas_Dataflow_lattice_dot__b0f6;
static VALUE sy_Switch_Clas_Dataflow_lattice_lb__d8d7;
VALUE Switch_Clas_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'b':;case 'd' ... UC(255):; goto pass2; break;
case 'c' ... 'c':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"las",3)) goto pass2; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass1; break;
}cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Class*/:;   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,3/*cls*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
case 1/*Object*/:; goto pass3; break;
}
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass1;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_lb__d8d7,1,bind);  bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,5/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:;   it=Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(self ); FAILTEST(fail); bind_aset(bind,5/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(31);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*name*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__lp_Compile_bc2b,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_Switch_Clas_Dataflow_Compiler_ad51,1,bind);  bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_11_rb__4dc0,1,bind);  bind_aset(bind,12/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_2;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,12/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
int oldpos6; while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__a474,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,14/*autovar*/); bind_aset(bind,16/*vals*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt5_2;
                   success6: *ptr=oldpass6;
                it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,11/*val*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,18/*el*/,it);
it=bind_aget(bind,18/*el*/); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,19/*autovar*/);ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,20/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break2;
                   success8: *ptr=oldpass8;
                it=bind_aget(bind,20/*autovar*/); bind_aset(bind,21/*nev*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_11_rb__7d69,1,bind);  bind_aset(bind,11/*val*/,it);
int oldpos9=ptr->pos;
alt7_1:;it=rb_funcall(self,sy_Switch_Clas_Dataflow__lp_,1,bind); FAILTEST(alt7_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept7;
alt7_2: ptr->pos=oldpos9;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}it=rb_funcall(self,sy_Switch_Clas_Dataflow__d41d,1,bind); 
;goto accept7;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept7:;
 if (ame_getstop(self)!=Qnil){oldpos8=ptr->pos;goto break2;} } break2: ame_setstop(self,Qnil); ptr->pos=oldpos8; ptr->pos=ptr->len;it=bind_aget(bind,11/*val*/); bind_aset(bind,22/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt6_2;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,22/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept6:;
 break;
case 13/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,16/*vals*/,it);
int oldpos10=ptr->pos;
alt8_1:;  it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,23/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos11; while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,25/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass10); bind_aset(bind,26/*v*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_25_rb__eb7c,1,bind);  bind_aset(bind,27/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__3f99,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto break3;
                   success10: *ptr=oldpass10;
                  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos11; it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt8_2;
                   success9: *ptr=oldpass9;
                it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept8:;
 break;
case 14/*Switch_Clas*/:; it=rb_ary_new3(0); bind_aset(bind,16/*vals*/,it);
int oldpos12=ptr->pos;
alt9_1:;  it=AmethystCore_anything(self ); FAILTEST(alt9_2); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,28/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos13; while(1){oldpos13=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,29/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,29/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass12); bind_aset(bind,25/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass12); bind_aset(bind,26/*v*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_25_rb__eb7c,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__e555,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto break4;
                   success12: *ptr=oldpass12;
                  } break4: ame_setstop(self,Qnil); ptr->pos=oldpos13; it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto alt9_2;
                   success11: *ptr=oldpass11;
                it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_2: ptr->pos=oldpos12;  it=AmethystCore_anything(self ); FAILTEST(alt9_3);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_3: ptr->pos=oldpos12;goto fail;
 accept9:;
 break;
case 15/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Clas_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Switch_Clas_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                     it=Switch_Clas_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Must_Empty_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Must_Empty_Dataflow_first(VALUE self );
VALUE Must_Empty_Dataflow_first_Must_Empty_Dataflow(VALUE self );
VALUE Must_Empty_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Must_Empty_Dataflow_1;
static VALUE sy_Must_Empty_Dataflow_Compiler_ad51;
static VALUE sy_Must_Empty_Dataflow__append_lp__3f99;
static VALUE sy_Must_Empty_Dataflow__append_lp__a474;
static VALUE sy_Must_Empty_Dataflow__append_lp__e555;
static VALUE sy_Must_Empty_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Must_Empty_Dataflow__d41d;
static VALUE sy_Must_Empty_Dataflow__lp_;
static VALUE sy_Must_Empty_Dataflow__lp_Compile_bc2b;
static VALUE sy_Must_Empty_Dataflow_bind_lb_11_rb__4dc0;
static VALUE sy_Must_Empty_Dataflow_bind_lb_11_rb__7d69;
static VALUE sy_Must_Empty_Dataflow_bind_lb_16_rb__6275;
static VALUE sy_Must_Empty_Dataflow_bind_lb_25_rb__eb7c;
static VALUE sy_Must_Empty_Dataflow_lattice_dot__5a9e;
static VALUE sy_Must_Empty_Dataflow_lattice_dot__b0f6;
VALUE Must_Empty_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=Must_Empty_Dataflow_first_Must_Empty_Dataflow(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Must_Empty_Dataflow_first_Must_Empty_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(31);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Must_Empty_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Must_Empty_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Must_Empty_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*name*/,it);
it=rb_funcall(self,sy_Must_Empty_Dataflow__lp_Compile_bc2b,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_Must_Empty_Dataflow_Compiler_ad51,1,bind);  bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Must_Empty_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_Must_Empty_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Must_Empty_Dataflow_bind_lb_11_rb__4dc0,1,bind);  bind_aset(bind,12/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_2;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,12/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Must_Empty_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
int oldpos6; while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_Must_Empty_Dataflow__append_lp__a474,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,14/*autovar*/); bind_aset(bind,16/*vals*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt5_2;
                   success6: *ptr=oldpass6;
                it=rb_funcall(self,sy_Must_Empty_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=rb_funcall(self,sy_Must_Empty_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Must_Empty_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,11/*val*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,18/*el*/,it);
it=bind_aget(bind,18/*el*/); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,19/*autovar*/);ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,20/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break2;
                   success8: *ptr=oldpass8;
                it=bind_aget(bind,20/*autovar*/); bind_aset(bind,21/*nev*/,it);
it=rb_funcall(self,sy_Must_Empty_Dataflow_bind_lb_11_rb__7d69,1,bind);  bind_aset(bind,11/*val*/,it);
int oldpos9=ptr->pos;
alt7_1:;it=rb_funcall(self,sy_Must_Empty_Dataflow__lp_,1,bind); FAILTEST(alt7_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept7;
alt7_2: ptr->pos=oldpos9;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}it=rb_funcall(self,sy_Must_Empty_Dataflow__d41d,1,bind); 
;goto accept7;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept7:;
 if (ame_getstop(self)!=Qnil){oldpos8=ptr->pos;goto break2;} } break2: ame_setstop(self,Qnil); ptr->pos=oldpos8; ptr->pos=ptr->len;it=bind_aget(bind,11/*val*/); bind_aset(bind,22/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt6_2;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,22/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_Must_Empty_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept6:;
 break;
case 13/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,16/*vals*/,it);
int oldpos10=ptr->pos;
alt8_1:;  it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,23/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos11; while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,25/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass10); bind_aset(bind,26/*v*/,it);
it=rb_funcall(self,sy_Must_Empty_Dataflow_bind_lb_25_rb__eb7c,1,bind);  bind_aset(bind,27/*autovar*/,it);
it=rb_funcall(self,sy_Must_Empty_Dataflow__append_lp__3f99,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto break3;
                   success10: *ptr=oldpass10;
                  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos11; it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt8_2;
                   success9: *ptr=oldpass9;
                it=rb_funcall(self,sy_Must_Empty_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);it=rb_funcall(self,sy_Must_Empty_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept8:;
 break;
case 14/*Switch_Clas*/:; it=rb_ary_new3(0); bind_aset(bind,16/*vals*/,it);
int oldpos12=ptr->pos;
alt9_1:;  it=AmethystCore_anything(self ); FAILTEST(alt9_2); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,28/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos13; while(1){oldpos13=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,29/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,29/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass12); bind_aset(bind,25/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass12); bind_aset(bind,26/*v*/,it);
it=rb_funcall(self,sy_Must_Empty_Dataflow_bind_lb_25_rb__eb7c,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Must_Empty_Dataflow__append_lp__e555,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto break4;
                   success12: *ptr=oldpass12;
                  } break4: ame_setstop(self,Qnil); ptr->pos=oldpos13; it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto alt9_2;
                   success11: *ptr=oldpass11;
                it=rb_funcall(self,sy_Must_Empty_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_2: ptr->pos=oldpos12;  it=AmethystCore_anything(self ); FAILTEST(alt9_3);it=rb_funcall(self,sy_Must_Empty_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_3: ptr->pos=oldpos12;goto fail;
 accept9:;
 break;
case 15/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_funcall(self,sy_Must_Empty_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Must_Empty_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Must_Empty_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                     it=Must_Empty_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Cant_Fail_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Cant_Fail_Dataflow_first(VALUE self );
VALUE Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(VALUE self );
VALUE Cant_Fail_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE First_Dataflow_value(VALUE self );
VALUE switchhash_Cant_Fail_Dataflow_1;
VALUE switchhash_Cant_Fail_Dataflow_2;
static VALUE sy_Cant_Fail_Dataflow_Compiler_ad51;
static VALUE sy_Cant_Fail_Dataflow__append_lp__3f99;
static VALUE sy_Cant_Fail_Dataflow__append_lp__a474;
static VALUE sy_Cant_Fail_Dataflow__append_lp__e555;
static VALUE sy_Cant_Fail_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Cant_Fail_Dataflow__d41d;
static VALUE sy_Cant_Fail_Dataflow__lp_;
static VALUE sy_Cant_Fail_Dataflow__lp_Compile_bc2b;
static VALUE sy_Cant_Fail_Dataflow__lp_src_dot_pre_c6b8;
static VALUE sy_Cant_Fail_Dataflow_bind_lb_11_rb__4dc0;
static VALUE sy_Cant_Fail_Dataflow_bind_lb_11_rb__7d69;
static VALUE sy_Cant_Fail_Dataflow_bind_lb_16_rb__6275;
static VALUE sy_Cant_Fail_Dataflow_bind_lb_25_rb__eb7c;
static VALUE sy_Cant_Fail_Dataflow_lattice_dot__4869;
static VALUE sy_Cant_Fail_Dataflow_lattice_dot__5a9e;
static VALUE sy_Cant_Fail_Dataflow_lattice_dot__b0f6;
VALUE Cant_Fail_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Cant_Fail_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Cant_Fail_Dataflow__lp_src_dot_pre_c6b8,1,bind); FAILTEST(pass1);it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__4869,1,bind);  bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Pass*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,3/*autovar*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self ); FAILTEST(alt2_3); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Object*/:;   it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self ); FAILTEST(fail); bind_aset(bind,1/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(31);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Cant_Fail_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*name*/,it);
it=rb_funcall(self,sy_Cant_Fail_Dataflow__lp_Compile_bc2b,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_Cant_Fail_Dataflow_Compiler_ad51,1,bind);  bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_11_rb__4dc0,1,bind);  bind_aset(bind,12/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_2;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,12/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
int oldpos6; while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_Cant_Fail_Dataflow__append_lp__a474,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,14/*autovar*/); bind_aset(bind,16/*vals*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt5_2;
                   success6: *ptr=oldpass6;
                it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,11/*val*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,18/*el*/,it);
it=bind_aget(bind,18/*el*/); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,19/*autovar*/);ptr->len=1;
                     it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,20/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break2;
                   success8: *ptr=oldpass8;
                it=bind_aget(bind,20/*autovar*/); bind_aset(bind,21/*nev*/,it);
it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_11_rb__7d69,1,bind);  bind_aset(bind,11/*val*/,it);
int oldpos9=ptr->pos;
alt7_1:;it=rb_funcall(self,sy_Cant_Fail_Dataflow__lp_,1,bind); FAILTEST(alt7_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept7;
alt7_2: ptr->pos=oldpos9;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}it=rb_funcall(self,sy_Cant_Fail_Dataflow__d41d,1,bind); 
;goto accept7;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept7:;
 if (ame_getstop(self)!=Qnil){oldpos8=ptr->pos;goto break2;} } break2: ame_setstop(self,Qnil); ptr->pos=oldpos8; ptr->pos=ptr->len;it=bind_aget(bind,11/*val*/); bind_aset(bind,22/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt6_2;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,22/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept6:;
 break;
case 13/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,16/*vals*/,it);
int oldpos10=ptr->pos;
alt8_1:;  it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,23/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos11; while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,25/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass10); bind_aset(bind,26/*v*/,it);
it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_25_rb__eb7c,1,bind);  bind_aset(bind,27/*autovar*/,it);
it=rb_funcall(self,sy_Cant_Fail_Dataflow__append_lp__3f99,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto break3;
                   success10: *ptr=oldpass10;
                  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos11; it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt8_2;
                   success9: *ptr=oldpass9;
                it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept8:;
 break;
case 14/*Switch_Clas*/:; it=rb_ary_new3(0); bind_aset(bind,16/*vals*/,it);
int oldpos12=ptr->pos;
alt9_1:;  it=AmethystCore_anything(self ); FAILTEST(alt9_2); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,28/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos13; while(1){oldpos13=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,29/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,29/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass12); bind_aset(bind,25/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass12); bind_aset(bind,26/*v*/,it);
it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_25_rb__eb7c,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Cant_Fail_Dataflow__append_lp__e555,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto break4;
                   success12: *ptr=oldpass12;
                  } break4: ame_setstop(self,Qnil); ptr->pos=oldpos13; it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto alt9_2;
                   success11: *ptr=oldpass11;
                it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_16_rb__6275,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_2: ptr->pos=oldpos12;  it=AmethystCore_anything(self ); FAILTEST(alt9_3);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_3: ptr->pos=oldpos12;goto fail;
 accept9:;
 break;
case 15/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Cant_Fail_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Cant_Fail_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                     it=Cant_Fail_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);

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
static VALUE sy_Detect_First__append_lp__4de3;
static VALUE sy_Detect_First__append_lp__7352;
static VALUE sy_Detect_First__append_lp__b494;
static VALUE sy_Detect_First__at_name_eq_sr_362f;
static VALUE sy_Detect_First__do_rules_eq__le__ab16;
static VALUE sy_Detect_First__lp_cant_fa_6b5d;
static VALUE sy_Detect_First__lp_must_em_e2d0;
static VALUE sy_Detect_First_src_25d9;
static VALUE sy_Detect_First_src_dot_rule_5acf;
static VALUE sy_Detect_First_src_dot_rule_d270;
VALUE Detect_First_cant_fail(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*e*/,it);
it=rb_funcall(self,sy_Detect_First__lp_cant_fa_6b5d,1,bind); FAILTEST(fail);it=bind_aget(bind,0/*e*/); bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_First_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Grammar*/:; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Detect_First__at_name_eq_sr_362f,1,bind); it=rb_funcall(self,sy_Detect_First__do_rules_eq__le__ab16,1,bind); it=rb_funcall(self,sy_Detect_First_src_dot_rule_5acf,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Detect_First_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto break2;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_First__append_lp__7352,1,bind);  break;
case 1/*Object*/:; goto break2; break;
}  } break2: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=rb_funcall(self,sy_Detect_First_src_dot_rule_d270,1,bind); it=rb_funcall(self,sy_Detect_First_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,10/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
it=rb_funcall(self,sy_Detect_First__append_lp__b494,1,bind);  break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Detect_First__append_lp__b494,1,bind);  break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_First_must_empty(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*e*/,it);
it=rb_funcall(self,sy_Detect_First__lp_must_em_e2d0,1,bind); FAILTEST(fail);it=bind_aget(bind,0/*e*/); bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_First_object_only(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'b':;case 'd' ... UC(255):; goto pass2; break;
case 'c' ... 'c':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"las",3)) goto pass2; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Detect_First__append_lp__4de3,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Detect_First_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=Traverser_Clone2_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_First_string_only(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... 'q':;case 's' ... UC(255):; goto pass2; break;
case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"egch",4)) goto pass2; else ptr->pos+=4; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass2; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Detect_First__append_lp__4de3,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*_result*/,it);
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
static VALUE sy_Detect_Switch_Char_Or_lb__ti_bind_c2f4;
static VALUE sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_978c;
static VALUE sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_99e6;
static VALUE sy_Detect_Switch_Char_Switch_C_4343;
static VALUE sy_Detect_Switch_Char_Switch_C_525a;
static VALUE sy_Detect_Switch_Char_Switch_C_7979;
static VALUE sy_Detect_Switch_Char_Switch_C_f048;
static VALUE sy_Detect_Switch_Char__append_lp__403b;
static VALUE sy_Detect_Switch_Char__append_lp__6f56;
static VALUE sy_Detect_Switch_Char__append_lp__7352;
static VALUE sy_Detect_Switch_Char__append_lp__89bf;
static VALUE sy_Detect_Switch_Char__append_lp__9708;
static VALUE sy_Detect_Switch_Char__append_lp__a848;
static VALUE sy_Detect_Switch_Char__append_lp__b375;
static VALUE sy_Detect_Switch_Char__append_lp__b494;
static VALUE sy_Detect_Switch_Char__at_changed_5352;
static VALUE sy_Detect_Switch_Char__at_changed_b885;
static VALUE sy_Detect_Switch_Char__at_changed_c681;
static VALUE sy_Detect_Switch_Char__at_name_eq_sr_362f;
static VALUE sy_Detect_Switch_Char__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch_Char__lb__lb_Lattic_d322;
static VALUE sy_Detect_Switch_Char__lp_2;
static VALUE sy_Detect_Switch_Char__lp_;
static VALUE sy_Detect_Switch_Char__lp_bind_lb_2_rb__6693;
static VALUE sy_Detect_Switch_Char__lp_src_dot_ins_6a75;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__pl__42be;
static VALUE sy_Detect_Switch_Char_bind_lb_25_rb__7abb;
static VALUE sy_Detect_Switch_Char_bind_lb_30_rb__6a34;
static VALUE sy_Detect_Switch_Char_bind_lb_30_rb__b007;
static VALUE sy_Detect_Switch_Char_bind_lb_3_rb__dot__2d57;
static VALUE sy_Detect_Switch_Char_bind_lb_3_rb__dot__8725;
static VALUE sy_Detect_Switch_Char_bind_lb_43_rb__7019;
static VALUE sy_Detect_Switch_Char_bind_lb_5_rb__lt__1671;
static VALUE sy_Detect_Switch_Char_first_lp_sr_3298;
static VALUE sy_Detect_Switch_Char_if_sp_bind_lb__f1e9;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_00af;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_a189;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_fa57;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_fcb6;
static VALUE sy_Detect_Switch_Char_src_25d9;
static VALUE sy_Detect_Switch_Char_src_dot_ary_d5cf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_d270;
static VALUE sy_first;
VALUE Detect_Switch_Char_combine_or(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(6); bind_aset(bind,3/*list*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind);  bind_aset(bind,1/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=rb_ary_new3(0); bind_aset(bind,2/*newlist*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_3_rb__dot__8725,1,bind);  it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_3_rb__dot__2d57,1,bind);  bind_aset(bind,2/*newlist*/,it);
 it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=Qnil;if (ptr->pos<ptr->len) goto alt1_4;it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_525a,1,bind);  bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_3_rb__dot__2d57,1,bind);  bind_aset(bind,2/*newlist*/,it);
 it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,4/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=Qnil;if (ptr->pos<ptr->len) goto alt2_3;it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_525a,1,bind);  bind_aset(bind,4/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Char_combine_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(10); bind_aset(bind,1/*prefix*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; int oldpos1=ptr->pos;
alt1_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt1_2); bind_aset(bind,0/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__42be,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind);  bind_aset(bind,4/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_3;
                   success1: *ptr=oldpass1;
                it=rb_ary_new3(0); bind_aset(bind,5/*autovar*/,it);
int oldpos2; while(1){oldpos2=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__6f56,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos2; it=bind_aget(bind,5/*autovar*/); bind_aset(bind,7/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_4343,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__b375,1,bind);   } break2: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,8/*autovar*/); bind_aset(bind,4/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_99e6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; int oldpos4=ptr->pos;
alt2_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt2_2); bind_aset(bind,0/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__42be,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos4;it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos5; while(1){oldpos5=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__b375,1,bind);   } break3: ame_setstop(self,Qnil); ptr->pos=oldpos5; it=bind_aget(bind,8/*autovar*/); bind_aset(bind,4/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_99e6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos4;goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Char_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_9,rb_obj_class(ame_curobj2(ptr))))){case 0/*Grammar*/:; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Detect_Switch_Char__at_name_eq_sr_362f,1,bind); it=rb_funcall(self,sy_Detect_Switch_Char__do_rules_eq__le__ab16,1,bind); it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_5acf,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_10,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Detect_Switch_Char_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto break2;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__7352,1,bind);  break;
case 1/*Object*/:; goto break2; break;
}  } break2: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_d270,1,bind); it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,10/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__b494,1,bind);  break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__b494,1,bind);  break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Char_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=Detect_Switch_Char_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Char_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1; while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_b885,1,bind);   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_2_rb__6693,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto break1;
                   success3: *ptr=oldpass3;
                  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=rb_funcall(self,sy_Detect_Switch_Char_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Char_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;
alt1_1:;  it=Detect_Switch_Char_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Detect_Switch_Char_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
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
case 1/*Array*/:; int oldpos2=ptr->pos;
alt2_1:;  it=Detect_Switch_Char_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos;   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_5_rb__lt__1671,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
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
case 2/*Object*/:; int oldpos4=ptr->pos;
alt3_1:;  it=Detect_Switch_Char_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept3:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Char_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(56);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos1=ptr->pos;
alt1_1:;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'q':;case 's' ... UC(255):; goto pass2; break;
case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"egch",4)) goto pass2; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass1; break;
}cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass1;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,6/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_00af,1,bind);  bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass5; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass5; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass4;
                   success5: *ptr=oldpass5;
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,11/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass4; break;
}cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,12/*str*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto pass4;
                   success6: *ptr=oldpass6;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,6/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_fa57,1,bind);  bind_aset(bind,13/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt1_3;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass7); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass8);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass8; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass8);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass8; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto pass7;
                   success8: *ptr=oldpass8;
                it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind);  bind_aset(bind,16/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt1_4;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,16/*autovar*/); bind_aset(bind,8/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,6/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind); FAILTEST(pass9);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_fcb6,1,bind);  bind_aset(bind,18/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt1_5;
                   success9: *ptr=oldpass9;
                it=bind_aget(bind,18/*autovar*/); bind_aset(bind,8/*_result*/,it);

;goto accept1;
alt1_5: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Many*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Detect_Switch_Char_traverse(self ); FAILTEST(pass10); bind_aset(bind,20/*t*/,it);
 it=bind_aget(bind,20/*t*/); arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(pass10); bind_aset(bind,6/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind); FAILTEST(pass10);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_a189,1,bind);  bind_aset(bind,21/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto fail;
                   success10: *ptr=oldpass10;
                it=bind_aget(bind,21/*autovar*/); bind_aset(bind,8/*_result*/,it);
 break;
case 2/*Or*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,22/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,22/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,23/*autovar*/,it);
int oldpos2; while(1){oldpos2=ptr->pos;   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(break1); bind_aset(bind,24/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__89bf,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos2; it=bind_aget(bind,23/*autovar*/); bind_aset(bind,25/*items*/,it);
it=Qfalse; bind_aset(bind,26/*aswitch*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_25_rb__7abb,1,bind); int oldpos3=ptr->pos;
alt2_1:;it=rb_funcall(self,sy_Detect_Switch_Char__lp_2,1,bind); FAILTEST(alt2_2);it=rb_funcall(self,sy_Detect_Switch_Char_Or_lb__ti_bind_c2f4,1,bind);  bind_aset(bind,27/*autovar*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos3;it=bind_aget(bind,25/*items*/); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,28/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass12); bind_aset(bind,29/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,29/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind);  bind_aset(bind,30/*list*/,it);
int oldpos4=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,31/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,31/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind);  bind_aset(bind,32/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto alt3_2;
                   success14: *ptr=oldpass14;
                it=rb_ary_new3(0); bind_aset(bind,33/*newlist*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_30_rb__b007,1,bind);  it=bind_aget(bind,33/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt3_2); bind_aset(bind,34/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,35/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_30_rb__6a34,1,bind);  bind_aset(bind,33/*newlist*/,it);
 it=bind_aget(bind,33/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt3_3); bind_aset(bind,34/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos4;it=Qnil;if (ptr->pos<ptr->len) goto alt3_4;it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_f048,1,bind);  bind_aset(bind,34/*_result*/,it);

;goto accept3;
alt3_4: ptr->pos=oldpos4;goto pass13;
 accept3:;
it=bind_aget(bind,34/*_result*/); bind_aset(bind,36/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13; break;
case 1/*Object*/:; it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind);  bind_aset(bind,30/*list*/,it);
int oldpos5=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,35/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_30_rb__6a34,1,bind);  bind_aset(bind,33/*newlist*/,it);
 it=bind_aget(bind,33/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt4_2); bind_aset(bind,34/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos5;it=Qnil;if (ptr->pos<ptr->len) goto alt4_3;it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_f048,1,bind);  bind_aset(bind,34/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos5;goto pass13;
 accept4:;
it=bind_aget(bind,34/*_result*/); bind_aset(bind,36/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13; break;
}
                   goto success13;
                   pass13: *ptr=oldpass13; goto pass12;
                   success13: *ptr=oldpass13;
                it=bind_aget(bind,36/*autovar*/); bind_aset(bind,37/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto alt2_3;
                   success12: *ptr=oldpass12;
                it=bind_aget(bind,37/*autovar*/); bind_aset(bind,27/*autovar*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos3;goto pass11;
 accept2:;
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto fail;
                   success11: *ptr=oldpass11;
                it=bind_aget(bind,27/*autovar*/); bind_aset(bind,8/*_result*/,it);
 break;
case 3/*Seq*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,38/*autovar*/,it);
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,38/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,39/*autovar*/,it);
int oldpos6; while(1){oldpos6=ptr->pos;   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(break2); bind_aset(bind,40/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__403b,1,bind);   } break2: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,39/*autovar*/); bind_aset(bind,41/*autovar*/,it);
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,41/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass16); bind_aset(bind,42/*autovar*/,it);
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,42/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,43/*prefix*/,it);
int oldpos7=ptr->pos;
alt5_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt5_2); bind_aset(bind,44/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_43_rb__7019,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt5_2); bind_aset(bind,45/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,46/*autovar*/,it);
cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,46/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind);  bind_aset(bind,47/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass18;
                   goto success18;
                   pass18: *ptr=oldpass18; goto alt5_3;
                   success18: *ptr=oldpass18;
                it=rb_ary_new3(0); bind_aset(bind,48/*autovar*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,49/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__9708,1,bind);   } break3: ame_setstop(self,Qnil); ptr->pos=oldpos8; it=bind_aget(bind,48/*autovar*/); bind_aset(bind,50/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_7979,1,bind);  bind_aset(bind,45/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos7;it=rb_ary_new3(0); bind_aset(bind,51/*autovar*/,it);
int oldpos9; while(1){oldpos9=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,52/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__a848,1,bind);   } break4: ame_setstop(self,Qnil); ptr->pos=oldpos9; it=bind_aget(bind,51/*autovar*/); bind_aset(bind,47/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_978c,1,bind);  bind_aset(bind,45/*_result*/,it);

;goto accept5;
alt5_4: ptr->pos=oldpos7;goto pass17;
 accept5:;
it=bind_aget(bind,45/*_result*/); bind_aset(bind,53/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass17; break;
case 1/*Object*/:; it=rb_ary_new3(0); bind_aset(bind,43/*prefix*/,it);
int oldpos10=ptr->pos;
alt6_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt6_2); bind_aset(bind,44/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_43_rb__7019,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt6_2); bind_aset(bind,45/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos10;it=rb_ary_new3(0); bind_aset(bind,51/*autovar*/,it);
int oldpos11; while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,52/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__a848,1,bind);   } break5: ame_setstop(self,Qnil); ptr->pos=oldpos11; it=bind_aget(bind,51/*autovar*/); bind_aset(bind,47/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_978c,1,bind);  bind_aset(bind,45/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos10;goto pass17;
 accept6:;
it=bind_aget(bind,45/*_result*/); bind_aset(bind,53/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass17; break;
}
                   goto success17;
                   pass17: *ptr=oldpass17; goto pass16;
                   success17: *ptr=oldpass17;
                it=bind_aget(bind,53/*autovar*/); bind_aset(bind,54/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass16;
                   goto success16;
                   pass16: *ptr=oldpass16; goto pass15;
                   success16: *ptr=oldpass16;
                it=bind_aget(bind,54/*autovar*/); bind_aset(bind,55/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
                   goto success15;
                   pass15: *ptr=oldpass15; goto fail;
                   success15: *ptr=oldpass15;
                it=bind_aget(bind,55/*autovar*/); bind_aset(bind,8/*_result*/,it);
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
static VALUE sy_Detect_Switch_Clas_Or_lb__ti_bind_4a6a;
static VALUE sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_99e6;
static VALUE sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_f058;
static VALUE sy_Detect_Switch_Clas_Switch_C_4337;
static VALUE sy_Detect_Switch_Clas_Switch_C_4c94;
static VALUE sy_Detect_Switch_Clas_Switch_C_5249;
static VALUE sy_Detect_Switch_Clas_Switch_C_5685;
static VALUE sy_Detect_Switch_Clas_Switch_C_c382;
static VALUE sy_Detect_Switch_Clas__append_lp__54e8;
static VALUE sy_Detect_Switch_Clas__append_lp__5600;
static VALUE sy_Detect_Switch_Clas__append_lp__599a;
static VALUE sy_Detect_Switch_Clas__append_lp__6f56;
static VALUE sy_Detect_Switch_Clas__append_lp__7352;
static VALUE sy_Detect_Switch_Clas__append_lp__b375;
static VALUE sy_Detect_Switch_Clas__append_lp__b494;
static VALUE sy_Detect_Switch_Clas__append_lp__b601;
static VALUE sy_Detect_Switch_Clas__at_changed_5352;
static VALUE sy_Detect_Switch_Clas__at_changed_b885;
static VALUE sy_Detect_Switch_Clas__at_changed_c681;
static VALUE sy_Detect_Switch_Clas__at_name_eq_sr_362f;
static VALUE sy_Detect_Switch_Clas__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch_Clas__lb__lb_Lattic_62e5;
static VALUE sy_Detect_Switch_Clas__lp_2;
static VALUE sy_Detect_Switch_Clas__lp_;
static VALUE sy_Detect_Switch_Clas__lp_bind_lb_2_rb__6693;
static VALUE sy_Detect_Switch_Clas__lp_src_dot_ins_6a75;
static VALUE sy_Detect_Switch_Clas_bind_lb_18_rb__473b;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__pl__42be;
static VALUE sy_Detect_Switch_Clas_bind_lb_23_rb__a500;
static VALUE sy_Detect_Switch_Clas_bind_lb_23_rb__df0c;
static VALUE sy_Detect_Switch_Clas_bind_lb_36_rb__d467;
static VALUE sy_Detect_Switch_Clas_bind_lb_3_rb__dot__2d57;
static VALUE sy_Detect_Switch_Clas_bind_lb_3_rb__dot__991d;
static VALUE sy_Detect_Switch_Clas_bind_lb_5_rb__lt__1671;
static VALUE sy_Detect_Switch_Clas_c_eq_Switch_95cc;
static VALUE sy_Detect_Switch_Clas_if_sp_bind_lb__f1e9;
static VALUE sy_Detect_Switch_Clas_src_25d9;
static VALUE sy_Detect_Switch_Clas_src_dot_ary_d5cf;
static VALUE sy_Detect_Switch_Clas_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_Clas_src_dot_rule_d270;
static VALUE sy_first;
VALUE Detect_Switch_Clas_combine_or(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(6); bind_aset(bind,3/*list*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Clas*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind);  bind_aset(bind,1/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=rb_ary_new3(0); bind_aset(bind,2/*newlist*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_3_rb__dot__991d,1,bind);  it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_3_rb__dot__2d57,1,bind);  bind_aset(bind,2/*newlist*/,it);
 it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=Qnil;if (ptr->pos<ptr->len) goto alt1_4;it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_c382,1,bind);  bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_3_rb__dot__2d57,1,bind);  bind_aset(bind,2/*newlist*/,it);
 it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,4/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=Qnil;if (ptr->pos<ptr->len) goto alt2_3;it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_c382,1,bind);  bind_aset(bind,4/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_combine_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(10); bind_aset(bind,1/*prefix*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Clas*/:; int oldpos1=ptr->pos;
alt1_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt1_2); bind_aset(bind,0/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__42be,1,bind);  arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind);  bind_aset(bind,4/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_3;
                   success1: *ptr=oldpass1;
                it=rb_ary_new3(0); bind_aset(bind,5/*autovar*/,it);
int oldpos2; while(1){oldpos2=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__6f56,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos2; it=bind_aget(bind,5/*autovar*/); bind_aset(bind,7/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_4c94,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__b375,1,bind);   } break2: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,8/*autovar*/); bind_aset(bind,4/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_99e6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; int oldpos4=ptr->pos;
alt2_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt2_2); bind_aset(bind,0/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__42be,1,bind);  arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos4;it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos5; while(1){oldpos5=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__b375,1,bind);   } break3: ame_setstop(self,Qnil); ptr->pos=oldpos5; it=bind_aget(bind,8/*autovar*/); bind_aset(bind,4/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_99e6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos4;goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_9,rb_obj_class(ame_curobj2(ptr))))){case 0/*Grammar*/:; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Detect_Switch_Clas__at_name_eq_sr_362f,1,bind); it=rb_funcall(self,sy_Detect_Switch_Clas__do_rules_eq__le__ab16,1,bind); it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_rule_5acf,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_10,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Detect_Switch_Clas_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto break2;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__7352,1,bind);  break;
case 1/*Object*/:; goto break2; break;
}  } break2: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_rule_d270,1,bind); it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,10/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__b494,1,bind);  break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__b494,1,bind);  break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=Detect_Switch_Clas_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1; while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_b885,1,bind);   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__lp_bind_lb_2_rb__6693,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto break1;
                   success3: *ptr=oldpass3;
                  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=rb_funcall(self,sy_Detect_Switch_Clas_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;
alt1_1:;  it=Detect_Switch_Clas_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Detect_Switch_Clas_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
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
case 1/*Array*/:; int oldpos2=ptr->pos;
alt2_1:;  it=Detect_Switch_Clas_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos;   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_5_rb__lt__1671,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
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
case 2/*Object*/:; int oldpos4=ptr->pos;
alt3_1:;  it=Detect_Switch_Clas_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept3:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(49);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos1=ptr->pos;
alt1_1:;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'b':;case 'd' ... UC(255):; goto pass2; break;
case 'c' ... 'c':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"las",3)) goto pass2; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass1; break;
}cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Class*/:;   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*clas*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
case 1/*Object*/:; goto pass3; break;
}
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass1;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_4337,1,bind);  bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass5; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass5; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass4;
                   success5: *ptr=oldpass5;
                it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind);  bind_aset(bind,11/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt1_3;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,11/*autovar*/); bind_aset(bind,8/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len; it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind);  arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(pass6); bind_aset(bind,13/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__lp_,1,bind); FAILTEST(pass6);it=rb_funcall(self,sy_Detect_Switch_Clas_c_eq_Switch_95cc,1,bind);  bind_aset(bind,14/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt1_4;
                   success6: *ptr=oldpass6;
                it=bind_aget(bind,14/*autovar*/); bind_aset(bind,8/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Or*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,16/*autovar*/,it);
int oldpos2; while(1){oldpos2=ptr->pos;   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(break1); bind_aset(bind,17/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__54e8,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos2; it=bind_aget(bind,16/*autovar*/); bind_aset(bind,18/*items*/,it);
it=Qfalse; bind_aset(bind,19/*aswitch*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_18_rb__473b,1,bind); int oldpos3=ptr->pos;
alt2_1:;it=rb_funcall(self,sy_Detect_Switch_Clas__lp_2,1,bind); FAILTEST(alt2_2);it=rb_funcall(self,sy_Detect_Switch_Clas_Or_lb__ti_bind_4a6a,1,bind);  bind_aset(bind,20/*autovar*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos3;it=bind_aget(bind,18/*items*/); bind_aset(bind,21/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,21/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass8); bind_aset(bind,22/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,22/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Clas*/:; it=rb_funcall(self,sy_Detect_Switch_Clas__lb__lb_Lattic_62e5,1,bind);  bind_aset(bind,23/*list*/,it);
int oldpos4=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind);  bind_aset(bind,25/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto alt3_2;
                   success10: *ptr=oldpass10;
                it=rb_ary_new3(0); bind_aset(bind,26/*newlist*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_23_rb__df0c,1,bind);  it=bind_aget(bind,26/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt3_2); bind_aset(bind,27/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,28/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_23_rb__a500,1,bind);  bind_aset(bind,26/*newlist*/,it);
 it=bind_aget(bind,26/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt3_3); bind_aset(bind,27/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos4;it=Qnil;if (ptr->pos<ptr->len) goto alt3_4;it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_5685,1,bind);  bind_aset(bind,27/*_result*/,it);

;goto accept3;
alt3_4: ptr->pos=oldpos4;goto pass9;
 accept3:;
it=bind_aget(bind,27/*_result*/); bind_aset(bind,29/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9; break;
case 1/*Object*/:; it=rb_funcall(self,sy_Detect_Switch_Clas__lb__lb_Lattic_62e5,1,bind);  bind_aset(bind,23/*list*/,it);
int oldpos5=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,28/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_23_rb__a500,1,bind);  bind_aset(bind,26/*newlist*/,it);
 it=bind_aget(bind,26/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt4_2); bind_aset(bind,27/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos5;it=Qnil;if (ptr->pos<ptr->len) goto alt4_3;it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_5685,1,bind);  bind_aset(bind,27/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos5;goto pass9;
 accept4:;
it=bind_aget(bind,27/*_result*/); bind_aset(bind,29/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9; break;
}
                   goto success9;
                   pass9: *ptr=oldpass9; goto pass8;
                   success9: *ptr=oldpass9;
                it=bind_aget(bind,29/*autovar*/); bind_aset(bind,30/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt2_3;
                   success8: *ptr=oldpass8;
                it=bind_aget(bind,30/*autovar*/); bind_aset(bind,20/*autovar*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos3;goto pass7;
 accept2:;
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto fail;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,20/*autovar*/); bind_aset(bind,8/*_result*/,it);
 break;
case 2/*Seq*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,31/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,31/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,32/*autovar*/,it);
int oldpos6; while(1){oldpos6=ptr->pos;   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(break2); bind_aset(bind,33/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__b601,1,bind);   } break2: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,32/*autovar*/); bind_aset(bind,34/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,34/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass12); bind_aset(bind,35/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,35/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Clas*/:; it=rb_ary_new3(0); bind_aset(bind,36/*prefix*/,it);
int oldpos7=ptr->pos;
alt5_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt5_2); bind_aset(bind,37/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_36_rb__d467,1,bind);  arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt5_2); bind_aset(bind,38/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,39/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,39/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind);  bind_aset(bind,40/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto alt5_3;
                   success14: *ptr=oldpass14;
                it=rb_ary_new3(0); bind_aset(bind,41/*autovar*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,42/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__599a,1,bind);   } break3: ame_setstop(self,Qnil); ptr->pos=oldpos8; it=bind_aget(bind,41/*autovar*/); bind_aset(bind,43/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_5249,1,bind);  bind_aset(bind,38/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos7;it=rb_ary_new3(0); bind_aset(bind,44/*autovar*/,it);
int oldpos9; while(1){oldpos9=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,45/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__5600,1,bind);   } break4: ame_setstop(self,Qnil); ptr->pos=oldpos9; it=bind_aget(bind,44/*autovar*/); bind_aset(bind,40/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_f058,1,bind);  bind_aset(bind,38/*_result*/,it);

;goto accept5;
alt5_4: ptr->pos=oldpos7;goto pass13;
 accept5:;
it=bind_aget(bind,38/*_result*/); bind_aset(bind,46/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13; break;
case 1/*Object*/:; it=rb_ary_new3(0); bind_aset(bind,36/*prefix*/,it);
int oldpos10=ptr->pos;
alt6_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt6_2); bind_aset(bind,37/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_36_rb__d467,1,bind);  arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt6_2); bind_aset(bind,38/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos10;it=rb_ary_new3(0); bind_aset(bind,44/*autovar*/,it);
int oldpos11; while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,45/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__5600,1,bind);   } break5: ame_setstop(self,Qnil); ptr->pos=oldpos11; it=bind_aget(bind,44/*autovar*/); bind_aset(bind,40/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_f058,1,bind);  bind_aset(bind,38/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos10;goto pass13;
 accept6:;
it=bind_aget(bind,38/*_result*/); bind_aset(bind,46/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13; break;
}
                   goto success13;
                   pass13: *ptr=oldpass13; goto pass12;
                   success13: *ptr=oldpass13;
                it=bind_aget(bind,46/*autovar*/); bind_aset(bind,47/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto pass11;
                   success12: *ptr=oldpass12;
                it=bind_aget(bind,47/*autovar*/); bind_aset(bind,48/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto fail;
                   success11: *ptr=oldpass11;
                it=bind_aget(bind,48/*autovar*/); bind_aset(bind,8/*_result*/,it);
 break;
case 3/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_detect_switch_c(){ 
 cls_First_Dataflow=rb_define_class("First_Dataflow",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_First_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch_Char\nnext h[k]=14 if k<=Switch_Clas\nnext h[k]=15 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_First_Dataflow_1);;
sy_First_Dataflow_Compiler_ad51=rb_intern("First_Dataflow_Compiler_ad51");
sy_First_Dataflow__append_lp__3f99=rb_intern("First_Dataflow__append_lp__3f99");
sy_First_Dataflow__append_lp__a474=rb_intern("First_Dataflow__append_lp__a474");
sy_First_Dataflow__append_lp__e555=rb_intern("First_Dataflow__append_lp__e555");
sy_First_Dataflow__at_vis_eq_bin_af53=rb_intern("First_Dataflow__at_vis_eq_bin_af53");
sy_First_Dataflow__d41d=rb_intern("First_Dataflow__d41d");
sy_First_Dataflow__lp_=rb_intern("First_Dataflow__lp_");
sy_First_Dataflow__lp_Compile_bc2b=rb_intern("First_Dataflow__lp_Compile_bc2b");
sy_First_Dataflow_bind_lb_11_rb__4dc0=rb_intern("First_Dataflow_bind_lb_11_rb__4dc0");
sy_First_Dataflow_bind_lb_11_rb__7d69=rb_intern("First_Dataflow_bind_lb_11_rb__7d69");
sy_First_Dataflow_bind_lb_16_rb__6275=rb_intern("First_Dataflow_bind_lb_16_rb__6275");
sy_First_Dataflow_bind_lb_25_rb__eb7c=rb_intern("First_Dataflow_bind_lb_25_rb__eb7c");
sy_First_Dataflow_depends_lp__5009=rb_intern("First_Dataflow_depends_lp__5009");
sy_First_Dataflow_lattice_dot__5a9e=rb_intern("First_Dataflow_lattice_dot__5a9e");
sy_First_Dataflow_lattice_dot__b0f6=rb_intern("First_Dataflow_lattice_dot__b0f6");
sy_analyze=rb_intern("analyze");
                    rb_define_method(cls_First_Dataflow,"first",First_Dataflow_first,0);
rb_define_method(cls_First_Dataflow,"getvalue",First_Dataflow_getvalue,1);
rb_define_method(cls_First_Dataflow,"root",First_Dataflow_root,0);
rb_define_method(cls_First_Dataflow,"value",First_Dataflow_value,0);
                   
 cls_Sizes_Dataflow=rb_define_class("Sizes_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Sizes_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Sizes_Dataflow_1);;
switchhash_Sizes_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Sizes_Dataflow_2);;
switchhash_Sizes_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch_Char\nnext h[k]=14 if k<=Switch_Clas\nnext h[k]=15 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Sizes_Dataflow_3);;
sy_Sizes_Dataflow_Compiler_ad51=rb_intern("Sizes_Dataflow_Compiler_ad51");
sy_Sizes_Dataflow__append_lp__3f99=rb_intern("Sizes_Dataflow__append_lp__3f99");
sy_Sizes_Dataflow__append_lp__a474=rb_intern("Sizes_Dataflow__append_lp__a474");
sy_Sizes_Dataflow__append_lp__e555=rb_intern("Sizes_Dataflow__append_lp__e555");
sy_Sizes_Dataflow__at_vis_eq_bin_af53=rb_intern("Sizes_Dataflow__at_vis_eq_bin_af53");
sy_Sizes_Dataflow__d41d=rb_intern("Sizes_Dataflow__d41d");
sy_Sizes_Dataflow__lp_=rb_intern("Sizes_Dataflow__lp_");
sy_Sizes_Dataflow__lp_Compile_bc2b=rb_intern("Sizes_Dataflow__lp_Compile_bc2b");
sy_Sizes_Dataflow_bind_lb_11_rb__4dc0=rb_intern("Sizes_Dataflow_bind_lb_11_rb__4dc0");
sy_Sizes_Dataflow_bind_lb_11_rb__7d69=rb_intern("Sizes_Dataflow_bind_lb_11_rb__7d69");
sy_Sizes_Dataflow_bind_lb_16_rb__6275=rb_intern("Sizes_Dataflow_bind_lb_16_rb__6275");
sy_Sizes_Dataflow_bind_lb_25_rb__eb7c=rb_intern("Sizes_Dataflow_bind_lb_25_rb__eb7c");
sy_Sizes_Dataflow_lattice_dot__5a9e=rb_intern("Sizes_Dataflow_lattice_dot__5a9e");
sy_Sizes_Dataflow_lattice_dot__b0f6=rb_intern("Sizes_Dataflow_lattice_dot__b0f6");
sy_Sizes_Dataflow_lattice_dot__e0e5=rb_intern("Sizes_Dataflow_lattice_dot__e0e5");
sy_Sizes_Dataflow_lattice_lb__cef9=rb_intern("Sizes_Dataflow_lattice_lb__cef9");
sy_Sizes_Dataflow_lattice_lb__fdee=rb_intern("Sizes_Dataflow_lattice_lb__fdee");
                    rb_define_method(cls_Sizes_Dataflow,"first",Sizes_Dataflow_first,0);
rb_define_method(cls_Sizes_Dataflow,"first_Sizes_Dataflow",Sizes_Dataflow_first_Sizes_Dataflow,0);
rb_define_method(cls_Sizes_Dataflow,"getvalue",Sizes_Dataflow_getvalue,1);
                   
 cls_Switch_Char_Dataflow=rb_define_class("Switch_Char_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Switch_Char_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Char_Dataflow_1);;
switchhash_Switch_Char_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Char_Dataflow_2);;
switchhash_Switch_Char_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch_Char\nnext h[k]=14 if k<=Switch_Clas\nnext h[k]=15 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Char_Dataflow_3);;
sy_Switch_Char_Dataflow_Compiler_ad51=rb_intern("Switch_Char_Dataflow_Compiler_ad51");
sy_Switch_Char_Dataflow__append_lp__3f99=rb_intern("Switch_Char_Dataflow__append_lp__3f99");
sy_Switch_Char_Dataflow__append_lp__a474=rb_intern("Switch_Char_Dataflow__append_lp__a474");
sy_Switch_Char_Dataflow__append_lp__e555=rb_intern("Switch_Char_Dataflow__append_lp__e555");
sy_Switch_Char_Dataflow__at_vis_eq_bin_af53=rb_intern("Switch_Char_Dataflow__at_vis_eq_bin_af53");
sy_Switch_Char_Dataflow__d41d=rb_intern("Switch_Char_Dataflow__d41d");
sy_Switch_Char_Dataflow__lp_=rb_intern("Switch_Char_Dataflow__lp_");
sy_Switch_Char_Dataflow__lp_Compile_bc2b=rb_intern("Switch_Char_Dataflow__lp_Compile_bc2b");
sy_Switch_Char_Dataflow_bind_lb_11_rb__4dc0=rb_intern("Switch_Char_Dataflow_bind_lb_11_rb__4dc0");
sy_Switch_Char_Dataflow_bind_lb_11_rb__7d69=rb_intern("Switch_Char_Dataflow_bind_lb_11_rb__7d69");
sy_Switch_Char_Dataflow_bind_lb_16_rb__6275=rb_intern("Switch_Char_Dataflow_bind_lb_16_rb__6275");
sy_Switch_Char_Dataflow_bind_lb_25_rb__eb7c=rb_intern("Switch_Char_Dataflow_bind_lb_25_rb__eb7c");
sy_Switch_Char_Dataflow_firstcha_c300=rb_intern("Switch_Char_Dataflow_firstcha_c300");
sy_Switch_Char_Dataflow_lattice_dot__5a9e=rb_intern("Switch_Char_Dataflow_lattice_dot__5a9e");
sy_Switch_Char_Dataflow_lattice_dot__b0f6=rb_intern("Switch_Char_Dataflow_lattice_dot__b0f6");
sy_Switch_Char_Dataflow_lattice_dot__e0e5=rb_intern("Switch_Char_Dataflow_lattice_dot__e0e5");
sy_Switch_Char_Dataflow_regchar_lp__9b27=rb_intern("Switch_Char_Dataflow_regchar_lp__9b27");
                    rb_define_method(cls_Switch_Char_Dataflow,"first",Switch_Char_Dataflow_first,0);
rb_define_method(cls_Switch_Char_Dataflow,"first_Switch_Char_Dataflow",Switch_Char_Dataflow_first_Switch_Char_Dataflow,0);
rb_define_method(cls_Switch_Char_Dataflow,"getvalue",Switch_Char_Dataflow_getvalue,1);
                   
 cls_Switch_Clas_Dataflow=rb_define_class("Switch_Clas_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Switch_Clas_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Clas_Dataflow_1);;
switchhash_Switch_Clas_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Clas_Dataflow_2);;
switchhash_Switch_Clas_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Class\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Clas_Dataflow_3);;
switchhash_Switch_Clas_Dataflow_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch_Char\nnext h[k]=14 if k<=Switch_Clas\nnext h[k]=15 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Clas_Dataflow_4);;
sy_Switch_Clas_Dataflow_Compiler_ad51=rb_intern("Switch_Clas_Dataflow_Compiler_ad51");
sy_Switch_Clas_Dataflow__append_lp__3f99=rb_intern("Switch_Clas_Dataflow__append_lp__3f99");
sy_Switch_Clas_Dataflow__append_lp__a474=rb_intern("Switch_Clas_Dataflow__append_lp__a474");
sy_Switch_Clas_Dataflow__append_lp__e555=rb_intern("Switch_Clas_Dataflow__append_lp__e555");
sy_Switch_Clas_Dataflow__at_vis_eq_bin_af53=rb_intern("Switch_Clas_Dataflow__at_vis_eq_bin_af53");
sy_Switch_Clas_Dataflow__d41d=rb_intern("Switch_Clas_Dataflow__d41d");
sy_Switch_Clas_Dataflow__lp_=rb_intern("Switch_Clas_Dataflow__lp_");
sy_Switch_Clas_Dataflow__lp_Compile_bc2b=rb_intern("Switch_Clas_Dataflow__lp_Compile_bc2b");
sy_Switch_Clas_Dataflow_bind_lb_11_rb__4dc0=rb_intern("Switch_Clas_Dataflow_bind_lb_11_rb__4dc0");
sy_Switch_Clas_Dataflow_bind_lb_11_rb__7d69=rb_intern("Switch_Clas_Dataflow_bind_lb_11_rb__7d69");
sy_Switch_Clas_Dataflow_bind_lb_16_rb__6275=rb_intern("Switch_Clas_Dataflow_bind_lb_16_rb__6275");
sy_Switch_Clas_Dataflow_bind_lb_25_rb__eb7c=rb_intern("Switch_Clas_Dataflow_bind_lb_25_rb__eb7c");
sy_Switch_Clas_Dataflow_lattice_dot__5a9e=rb_intern("Switch_Clas_Dataflow_lattice_dot__5a9e");
sy_Switch_Clas_Dataflow_lattice_dot__b0f6=rb_intern("Switch_Clas_Dataflow_lattice_dot__b0f6");
sy_Switch_Clas_Dataflow_lattice_lb__d8d7=rb_intern("Switch_Clas_Dataflow_lattice_lb__d8d7");
                    rb_define_method(cls_Switch_Clas_Dataflow,"first",Switch_Clas_Dataflow_first,0);
rb_define_method(cls_Switch_Clas_Dataflow,"first_Switch_Clas_Dataflow",Switch_Clas_Dataflow_first_Switch_Clas_Dataflow,0);
rb_define_method(cls_Switch_Clas_Dataflow,"getvalue",Switch_Clas_Dataflow_getvalue,1);
                   
 cls_Must_Empty_Dataflow=rb_define_class("Must_Empty_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Must_Empty_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch_Char\nnext h[k]=14 if k<=Switch_Clas\nnext h[k]=15 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Must_Empty_Dataflow_1);;
sy_Must_Empty_Dataflow_Compiler_ad51=rb_intern("Must_Empty_Dataflow_Compiler_ad51");
sy_Must_Empty_Dataflow__append_lp__3f99=rb_intern("Must_Empty_Dataflow__append_lp__3f99");
sy_Must_Empty_Dataflow__append_lp__a474=rb_intern("Must_Empty_Dataflow__append_lp__a474");
sy_Must_Empty_Dataflow__append_lp__e555=rb_intern("Must_Empty_Dataflow__append_lp__e555");
sy_Must_Empty_Dataflow__at_vis_eq_bin_af53=rb_intern("Must_Empty_Dataflow__at_vis_eq_bin_af53");
sy_Must_Empty_Dataflow__d41d=rb_intern("Must_Empty_Dataflow__d41d");
sy_Must_Empty_Dataflow__lp_=rb_intern("Must_Empty_Dataflow__lp_");
sy_Must_Empty_Dataflow__lp_Compile_bc2b=rb_intern("Must_Empty_Dataflow__lp_Compile_bc2b");
sy_Must_Empty_Dataflow_bind_lb_11_rb__4dc0=rb_intern("Must_Empty_Dataflow_bind_lb_11_rb__4dc0");
sy_Must_Empty_Dataflow_bind_lb_11_rb__7d69=rb_intern("Must_Empty_Dataflow_bind_lb_11_rb__7d69");
sy_Must_Empty_Dataflow_bind_lb_16_rb__6275=rb_intern("Must_Empty_Dataflow_bind_lb_16_rb__6275");
sy_Must_Empty_Dataflow_bind_lb_25_rb__eb7c=rb_intern("Must_Empty_Dataflow_bind_lb_25_rb__eb7c");
sy_Must_Empty_Dataflow_lattice_dot__5a9e=rb_intern("Must_Empty_Dataflow_lattice_dot__5a9e");
sy_Must_Empty_Dataflow_lattice_dot__b0f6=rb_intern("Must_Empty_Dataflow_lattice_dot__b0f6");
                    rb_define_method(cls_Must_Empty_Dataflow,"first",Must_Empty_Dataflow_first,0);
rb_define_method(cls_Must_Empty_Dataflow,"first_Must_Empty_Dataflow",Must_Empty_Dataflow_first_Must_Empty_Dataflow,0);
rb_define_method(cls_Must_Empty_Dataflow,"getvalue",Must_Empty_Dataflow_getvalue,1);
                   
 cls_Cant_Fail_Dataflow=rb_define_class("Cant_Fail_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Cant_Fail_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Pass\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Cant_Fail_Dataflow_1);;
switchhash_Cant_Fail_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch_Char\nnext h[k]=14 if k<=Switch_Clas\nnext h[k]=15 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Cant_Fail_Dataflow_2);;
sy_Cant_Fail_Dataflow_Compiler_ad51=rb_intern("Cant_Fail_Dataflow_Compiler_ad51");
sy_Cant_Fail_Dataflow__append_lp__3f99=rb_intern("Cant_Fail_Dataflow__append_lp__3f99");
sy_Cant_Fail_Dataflow__append_lp__a474=rb_intern("Cant_Fail_Dataflow__append_lp__a474");
sy_Cant_Fail_Dataflow__append_lp__e555=rb_intern("Cant_Fail_Dataflow__append_lp__e555");
sy_Cant_Fail_Dataflow__at_vis_eq_bin_af53=rb_intern("Cant_Fail_Dataflow__at_vis_eq_bin_af53");
sy_Cant_Fail_Dataflow__d41d=rb_intern("Cant_Fail_Dataflow__d41d");
sy_Cant_Fail_Dataflow__lp_=rb_intern("Cant_Fail_Dataflow__lp_");
sy_Cant_Fail_Dataflow__lp_Compile_bc2b=rb_intern("Cant_Fail_Dataflow__lp_Compile_bc2b");
sy_Cant_Fail_Dataflow__lp_src_dot_pre_c6b8=rb_intern("Cant_Fail_Dataflow__lp_src_dot_pre_c6b8");
sy_Cant_Fail_Dataflow_bind_lb_11_rb__4dc0=rb_intern("Cant_Fail_Dataflow_bind_lb_11_rb__4dc0");
sy_Cant_Fail_Dataflow_bind_lb_11_rb__7d69=rb_intern("Cant_Fail_Dataflow_bind_lb_11_rb__7d69");
sy_Cant_Fail_Dataflow_bind_lb_16_rb__6275=rb_intern("Cant_Fail_Dataflow_bind_lb_16_rb__6275");
sy_Cant_Fail_Dataflow_bind_lb_25_rb__eb7c=rb_intern("Cant_Fail_Dataflow_bind_lb_25_rb__eb7c");
sy_Cant_Fail_Dataflow_lattice_dot__4869=rb_intern("Cant_Fail_Dataflow_lattice_dot__4869");
sy_Cant_Fail_Dataflow_lattice_dot__5a9e=rb_intern("Cant_Fail_Dataflow_lattice_dot__5a9e");
sy_Cant_Fail_Dataflow_lattice_dot__b0f6=rb_intern("Cant_Fail_Dataflow_lattice_dot__b0f6");
                    rb_define_method(cls_Cant_Fail_Dataflow,"first",Cant_Fail_Dataflow_first,0);
rb_define_method(cls_Cant_Fail_Dataflow,"first_Cant_Fail_Dataflow",Cant_Fail_Dataflow_first_Cant_Fail_Dataflow,0);
rb_define_method(cls_Cant_Fail_Dataflow,"getvalue",Cant_Fail_Dataflow_getvalue,1);
                   
 cls_Detect_First=rb_define_class("Detect_First",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Detect_First_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_First_1);;
switchhash_Detect_First_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_First_2);;
switchhash_Detect_First_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_First_3);;
switchhash_Detect_First_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_First_4);;
sy_Detect_First__append_lp__4de3=rb_intern("Detect_First__append_lp__4de3");
sy_Detect_First__append_lp__7352=rb_intern("Detect_First__append_lp__7352");
sy_Detect_First__append_lp__b494=rb_intern("Detect_First__append_lp__b494");
sy_Detect_First__at_name_eq_sr_362f=rb_intern("Detect_First__at_name_eq_sr_362f");
sy_Detect_First__do_rules_eq__le__ab16=rb_intern("Detect_First__do_rules_eq__le__ab16");
sy_Detect_First__lp_cant_fa_6b5d=rb_intern("Detect_First__lp_cant_fa_6b5d");
sy_Detect_First__lp_must_em_e2d0=rb_intern("Detect_First__lp_must_em_e2d0");
sy_Detect_First_src_25d9=rb_intern("Detect_First_src_25d9");
sy_Detect_First_src_dot_rule_5acf=rb_intern("Detect_First_src_dot_rule_5acf");
sy_Detect_First_src_dot_rule_d270=rb_intern("Detect_First_src_dot_rule_d270");
                    rb_define_method(cls_Detect_First,"cant_fail",Detect_First_cant_fail,0);
rb_define_method(cls_Detect_First,"itrans",Detect_First_itrans,0);
rb_define_method(cls_Detect_First,"must_empty",Detect_First_must_empty,0);
rb_define_method(cls_Detect_First,"object_only",Detect_First_object_only,0);
rb_define_method(cls_Detect_First,"root",Detect_First_root,0);
rb_define_method(cls_Detect_First,"string_only",Detect_First_string_only,0);
                   
 cls_Detect_Switch_Char=rb_define_class("Detect_Switch_Char",rb_const_get(rb_cObject,rb_intern("Detect_First"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Detect_Switch_Char_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_10);;
switchhash_Detect_Switch_Char_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Many\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_1);;
switchhash_Detect_Switch_Char_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_2);;
switchhash_Detect_Switch_Char_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_3);;
switchhash_Detect_Switch_Char_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_4);;
switchhash_Detect_Switch_Char_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_5);;
switchhash_Detect_Switch_Char_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_6);;
switchhash_Detect_Switch_Char_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_7);;
switchhash_Detect_Switch_Char_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_8);;
switchhash_Detect_Switch_Char_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_9);;
sy_Detect_Switch_Char_Or_lb__ti_bind_c2f4=rb_intern("Detect_Switch_Char_Or_lb__ti_bind_c2f4");
sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_978c=rb_intern("Detect_Switch_Char_Seq_lb__ti__lp_bi_978c");
sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_99e6=rb_intern("Detect_Switch_Char_Seq_lb__ti__lp_bi_99e6");
sy_Detect_Switch_Char_Switch_C_4343=rb_intern("Detect_Switch_Char_Switch_C_4343");
sy_Detect_Switch_Char_Switch_C_525a=rb_intern("Detect_Switch_Char_Switch_C_525a");
sy_Detect_Switch_Char_Switch_C_7979=rb_intern("Detect_Switch_Char_Switch_C_7979");
sy_Detect_Switch_Char_Switch_C_f048=rb_intern("Detect_Switch_Char_Switch_C_f048");
sy_Detect_Switch_Char__append_lp__403b=rb_intern("Detect_Switch_Char__append_lp__403b");
sy_Detect_Switch_Char__append_lp__6f56=rb_intern("Detect_Switch_Char__append_lp__6f56");
sy_Detect_Switch_Char__append_lp__7352=rb_intern("Detect_Switch_Char__append_lp__7352");
sy_Detect_Switch_Char__append_lp__89bf=rb_intern("Detect_Switch_Char__append_lp__89bf");
sy_Detect_Switch_Char__append_lp__9708=rb_intern("Detect_Switch_Char__append_lp__9708");
sy_Detect_Switch_Char__append_lp__a848=rb_intern("Detect_Switch_Char__append_lp__a848");
sy_Detect_Switch_Char__append_lp__b375=rb_intern("Detect_Switch_Char__append_lp__b375");
sy_Detect_Switch_Char__append_lp__b494=rb_intern("Detect_Switch_Char__append_lp__b494");
sy_Detect_Switch_Char__at_changed_5352=rb_intern("Detect_Switch_Char__at_changed_5352");
sy_Detect_Switch_Char__at_changed_b885=rb_intern("Detect_Switch_Char__at_changed_b885");
sy_Detect_Switch_Char__at_changed_c681=rb_intern("Detect_Switch_Char__at_changed_c681");
sy_Detect_Switch_Char__at_name_eq_sr_362f=rb_intern("Detect_Switch_Char__at_name_eq_sr_362f");
sy_Detect_Switch_Char__do_rules_eq__le__ab16=rb_intern("Detect_Switch_Char__do_rules_eq__le__ab16");
sy_Detect_Switch_Char__lb__lb_Lattic_d322=rb_intern("Detect_Switch_Char__lb__lb_Lattic_d322");
sy_Detect_Switch_Char__lp_2=rb_intern("Detect_Switch_Char__lp_2");
sy_Detect_Switch_Char__lp_=rb_intern("Detect_Switch_Char__lp_");
sy_Detect_Switch_Char__lp_bind_lb_2_rb__6693=rb_intern("Detect_Switch_Char__lp_bind_lb_2_rb__6693");
sy_Detect_Switch_Char__lp_src_dot_ins_6a75=rb_intern("Detect_Switch_Char__lp_src_dot_ins_6a75");
sy_Detect_Switch_Char_bind_lb_1_rb__pl__42be=rb_intern("Detect_Switch_Char_bind_lb_1_rb__pl__42be");
sy_Detect_Switch_Char_bind_lb_25_rb__7abb=rb_intern("Detect_Switch_Char_bind_lb_25_rb__7abb");
sy_Detect_Switch_Char_bind_lb_30_rb__6a34=rb_intern("Detect_Switch_Char_bind_lb_30_rb__6a34");
sy_Detect_Switch_Char_bind_lb_30_rb__b007=rb_intern("Detect_Switch_Char_bind_lb_30_rb__b007");
sy_Detect_Switch_Char_bind_lb_3_rb__dot__2d57=rb_intern("Detect_Switch_Char_bind_lb_3_rb__dot__2d57");
sy_Detect_Switch_Char_bind_lb_3_rb__dot__8725=rb_intern("Detect_Switch_Char_bind_lb_3_rb__dot__8725");
sy_Detect_Switch_Char_bind_lb_43_rb__7019=rb_intern("Detect_Switch_Char_bind_lb_43_rb__7019");
sy_Detect_Switch_Char_bind_lb_5_rb__lt__1671=rb_intern("Detect_Switch_Char_bind_lb_5_rb__lt__1671");
sy_Detect_Switch_Char_first_lp_sr_3298=rb_intern("Detect_Switch_Char_first_lp_sr_3298");
sy_Detect_Switch_Char_if_sp_bind_lb__f1e9=rb_intern("Detect_Switch_Char_if_sp_bind_lb__f1e9");
sy_Detect_Switch_Char_s_eq_Switch_00af=rb_intern("Detect_Switch_Char_s_eq_Switch_00af");
sy_Detect_Switch_Char_s_eq_Switch_a189=rb_intern("Detect_Switch_Char_s_eq_Switch_a189");
sy_Detect_Switch_Char_s_eq_Switch_fa57=rb_intern("Detect_Switch_Char_s_eq_Switch_fa57");
sy_Detect_Switch_Char_s_eq_Switch_fcb6=rb_intern("Detect_Switch_Char_s_eq_Switch_fcb6");
sy_Detect_Switch_Char_src_25d9=rb_intern("Detect_Switch_Char_src_25d9");
sy_Detect_Switch_Char_src_dot_ary_d5cf=rb_intern("Detect_Switch_Char_src_dot_ary_d5cf");
sy_Detect_Switch_Char_src_dot_rule_5acf=rb_intern("Detect_Switch_Char_src_dot_rule_5acf");
sy_Detect_Switch_Char_src_dot_rule_d270=rb_intern("Detect_Switch_Char_src_dot_rule_d270");
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
                    switchhash_Detect_Switch_Clas_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_10);;
switchhash_Detect_Switch_Clas_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_1);;
switchhash_Detect_Switch_Clas_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_2);;
switchhash_Detect_Switch_Clas_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Class\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_3);;
switchhash_Detect_Switch_Clas_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_4);;
switchhash_Detect_Switch_Clas_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_5);;
switchhash_Detect_Switch_Clas_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_6);;
switchhash_Detect_Switch_Clas_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_7);;
switchhash_Detect_Switch_Clas_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_8);;
switchhash_Detect_Switch_Clas_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_9);;
sy_Detect_Switch_Clas_Or_lb__ti_bind_4a6a=rb_intern("Detect_Switch_Clas_Or_lb__ti_bind_4a6a");
sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_99e6=rb_intern("Detect_Switch_Clas_Seq_lb__ti__lp_bi_99e6");
sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_f058=rb_intern("Detect_Switch_Clas_Seq_lb__ti__lp_bi_f058");
sy_Detect_Switch_Clas_Switch_C_4337=rb_intern("Detect_Switch_Clas_Switch_C_4337");
sy_Detect_Switch_Clas_Switch_C_4c94=rb_intern("Detect_Switch_Clas_Switch_C_4c94");
sy_Detect_Switch_Clas_Switch_C_5249=rb_intern("Detect_Switch_Clas_Switch_C_5249");
sy_Detect_Switch_Clas_Switch_C_5685=rb_intern("Detect_Switch_Clas_Switch_C_5685");
sy_Detect_Switch_Clas_Switch_C_c382=rb_intern("Detect_Switch_Clas_Switch_C_c382");
sy_Detect_Switch_Clas__append_lp__54e8=rb_intern("Detect_Switch_Clas__append_lp__54e8");
sy_Detect_Switch_Clas__append_lp__5600=rb_intern("Detect_Switch_Clas__append_lp__5600");
sy_Detect_Switch_Clas__append_lp__599a=rb_intern("Detect_Switch_Clas__append_lp__599a");
sy_Detect_Switch_Clas__append_lp__6f56=rb_intern("Detect_Switch_Clas__append_lp__6f56");
sy_Detect_Switch_Clas__append_lp__7352=rb_intern("Detect_Switch_Clas__append_lp__7352");
sy_Detect_Switch_Clas__append_lp__b375=rb_intern("Detect_Switch_Clas__append_lp__b375");
sy_Detect_Switch_Clas__append_lp__b494=rb_intern("Detect_Switch_Clas__append_lp__b494");
sy_Detect_Switch_Clas__append_lp__b601=rb_intern("Detect_Switch_Clas__append_lp__b601");
sy_Detect_Switch_Clas__at_changed_5352=rb_intern("Detect_Switch_Clas__at_changed_5352");
sy_Detect_Switch_Clas__at_changed_b885=rb_intern("Detect_Switch_Clas__at_changed_b885");
sy_Detect_Switch_Clas__at_changed_c681=rb_intern("Detect_Switch_Clas__at_changed_c681");
sy_Detect_Switch_Clas__at_name_eq_sr_362f=rb_intern("Detect_Switch_Clas__at_name_eq_sr_362f");
sy_Detect_Switch_Clas__do_rules_eq__le__ab16=rb_intern("Detect_Switch_Clas__do_rules_eq__le__ab16");
sy_Detect_Switch_Clas__lb__lb_Lattic_62e5=rb_intern("Detect_Switch_Clas__lb__lb_Lattic_62e5");
sy_Detect_Switch_Clas__lp_2=rb_intern("Detect_Switch_Clas__lp_2");
sy_Detect_Switch_Clas__lp_=rb_intern("Detect_Switch_Clas__lp_");
sy_Detect_Switch_Clas__lp_bind_lb_2_rb__6693=rb_intern("Detect_Switch_Clas__lp_bind_lb_2_rb__6693");
sy_Detect_Switch_Clas__lp_src_dot_ins_6a75=rb_intern("Detect_Switch_Clas__lp_src_dot_ins_6a75");
sy_Detect_Switch_Clas_bind_lb_18_rb__473b=rb_intern("Detect_Switch_Clas_bind_lb_18_rb__473b");
sy_Detect_Switch_Clas_bind_lb_1_rb__pl__42be=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__pl__42be");
sy_Detect_Switch_Clas_bind_lb_23_rb__a500=rb_intern("Detect_Switch_Clas_bind_lb_23_rb__a500");
sy_Detect_Switch_Clas_bind_lb_23_rb__df0c=rb_intern("Detect_Switch_Clas_bind_lb_23_rb__df0c");
sy_Detect_Switch_Clas_bind_lb_36_rb__d467=rb_intern("Detect_Switch_Clas_bind_lb_36_rb__d467");
sy_Detect_Switch_Clas_bind_lb_3_rb__dot__2d57=rb_intern("Detect_Switch_Clas_bind_lb_3_rb__dot__2d57");
sy_Detect_Switch_Clas_bind_lb_3_rb__dot__991d=rb_intern("Detect_Switch_Clas_bind_lb_3_rb__dot__991d");
sy_Detect_Switch_Clas_bind_lb_5_rb__lt__1671=rb_intern("Detect_Switch_Clas_bind_lb_5_rb__lt__1671");
sy_Detect_Switch_Clas_c_eq_Switch_95cc=rb_intern("Detect_Switch_Clas_c_eq_Switch_95cc");
sy_Detect_Switch_Clas_if_sp_bind_lb__f1e9=rb_intern("Detect_Switch_Clas_if_sp_bind_lb__f1e9");
sy_Detect_Switch_Clas_src_25d9=rb_intern("Detect_Switch_Clas_src_25d9");
sy_Detect_Switch_Clas_src_dot_ary_d5cf=rb_intern("Detect_Switch_Clas_src_dot_ary_d5cf");
sy_Detect_Switch_Clas_src_dot_rule_5acf=rb_intern("Detect_Switch_Clas_src_dot_rule_5acf");
sy_Detect_Switch_Clas_src_dot_rule_d270=rb_intern("Detect_Switch_Clas_src_dot_rule_d270");
sy_first=rb_intern("first");
                    rb_define_method(cls_Detect_Switch_Clas,"combine_or",Detect_Switch_Clas_combine_or,1);
rb_define_method(cls_Detect_Switch_Clas,"combine_seq",Detect_Switch_Clas_combine_seq,1);
rb_define_method(cls_Detect_Switch_Clas,"itrans",Detect_Switch_Clas_itrans,0);
rb_define_method(cls_Detect_Switch_Clas,"root",Detect_Switch_Clas_root,0);
rb_define_method(cls_Detect_Switch_Clas,"traverse",Detect_Switch_Clas_traverse,0);
rb_define_method(cls_Detect_Switch_Clas,"traverse_item",Detect_Switch_Clas_traverse_item,0);
rb_define_method(cls_Detect_Switch_Clas,"visit",Detect_Switch_Clas_visit,0);
                    rb_eval_string("testversiondetect_switch('7b06577e84e31d635b2247fb552cd710')");}
