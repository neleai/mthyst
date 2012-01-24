#include "cthyst.h"
VALUE cls_Amethyst;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst__(VALUE self );
VALUE Amethyst_alnum(VALUE self );
VALUE Amethyst_alpha(VALUE self );
VALUE Amethyst_char(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE a0);
VALUE Amethyst_digit(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_false(VALUE self );
VALUE Amethyst_int(VALUE self );
VALUE Amethyst_line(VALUE self );
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_lower(VALUE self );
VALUE Amethyst_member(VALUE self ,VALUE a0);
VALUE Amethyst_newline(VALUE self );
VALUE Amethyst_nil(VALUE self );
VALUE Amethyst_number(VALUE self );
VALUE Amethyst_parse(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_range_ex(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_range_in(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_regch(VALUE self ,VALUE a0);
VALUE Amethyst_replace(VALUE self ,VALUE a0);
VALUE Amethyst_seq(VALUE self ,VALUE a0);
VALUE Amethyst_space(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Amethyst_token(VALUE self ,VALUE a0);
VALUE Amethyst_true(VALUE self );
VALUE Amethyst_until(VALUE self ,VALUE a0);
VALUE Amethyst_upper(VALUE self );
VALUE Amethyst_word(VALUE self );
VALUE Amethyst_xdigit(VALUE self );
static VALUE s_0b_3470;
static VALUE s_0o_6f57;
static VALUE s_0x_f6f8;
static VALUE s___b14a;
static VALUE s__bs__bs__7f81;
static VALUE s__bs_n_1d78;
static VALUE s__bs_r_8ce5;
static VALUE s__bs_r_bs_n_bdb2;
static VALUE s__d41d;
static VALUE s__mi__336d;
static VALUE sy_Amethyst__append_lp__088f;
static VALUE sy_Amethyst__append_lp__0d86;
static VALUE sy_Amethyst__append_lp__0eeb;
static VALUE sy_Amethyst__append_lp__26c5;
static VALUE sy_Amethyst__append_lp__29a3;
static VALUE sy_Amethyst__append_lp__2bc4;
static VALUE sy_Amethyst__append_lp__3aef;
static VALUE sy_Amethyst__append_lp__50ed;
static VALUE sy_Amethyst__append_lp__66a2;
static VALUE sy_Amethyst__append_lp__6948;
static VALUE sy_Amethyst__append_lp__6ac6;
static VALUE sy_Amethyst__append_lp__73f1;
static VALUE sy_Amethyst__append_lp__81ec;
static VALUE sy_Amethyst__append_lp__a474;
static VALUE sy_Amethyst__append_lp__b2a5;
static VALUE sy_Amethyst__append_lp__b9cb;
static VALUE sy_Amethyst__append_lp__c354;
static VALUE sy_Amethyst__append_lp__cbd1;
static VALUE sy_Amethyst__append_lp__f8f8;
static VALUE sy_Amethyst__append_lp__f960;
static VALUE sy_Amethyst__lp_bind_lb_0_rb__9f45;
static VALUE sy_Amethyst__lp_bind_lb_0_rb__b1f4;
static VALUE sy_Amethyst__lp_bind_lb_1_rb__4329;
static VALUE sy_Amethyst__lp_bind_lb_1_rb__abc3;
static VALUE sy_Amethyst__lp_bind_lb_2_rb__2af3;
static VALUE sy_Amethyst__lp_bind_lb_2_rb__7d6d;
static VALUE sy_Amethyst__lp_false_rp__sp__c3c5;
static VALUE sy_Amethyst_bind_lb_0_rb_;
static VALUE sy_Amethyst_bind_lb_0_rb__dot__206f;
static VALUE sy_Amethyst_bind_lb_0_rb__dot__6a2a;
static VALUE sy_Amethyst_bind_lb_0_rb__dot__ddb4;
static VALUE sy_Amethyst_bind_lb_1_rb__ti__cfcb;
static VALUE sy_Amethyst_bind_lb_2_rb__ti__e7b8;
static VALUE sy_apply;
VALUE Amethyst__(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(32) ... UC(32):;case UC(9) ... UC(9):;case UC(13) ... UC(13):;case UC(10) ... UC(10):;case UC(12) ... UC(12):;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case UC(33) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;}it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_alnum(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_alpha(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_digit(self ); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_alpha(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_lower(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_upper(self ); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_char(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*c*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_0_rb__9f45,1,bind); FAILTEST(fail);it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb_,1,bind);  bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(5); bind_aset(bind,0/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*cls*/); bind_aset(bind,1/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,2/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind); FAILTEST(fail);it=bind_aget(bind,2/*a*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_digit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(48) ... UC(57):;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;case UC(0) ... UC(47):;case UC(58) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;}it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_empty(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=Qnil; bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_eof(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_fails(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Amethyst__lp_false_rp__sp__c3c5,1,bind); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_false(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=Qfalse; bind_aset(bind,0/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_0_rb__b1f4,1,bind); FAILTEST(fail);it=bind_aget(bind,1/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_int(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(24);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(45) ... UC(45):; if (strncmp(ame_curstr(self),"-",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(44):;case UC(46) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}it=rb_obj_clone(s__mi__336d); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*m*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__d41d); bind_aset(bind,2/*m*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(48) ... UC(48):; if (strncmp(ame_curstr(self),"0x",2)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(47):;case UC(49) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_2); break;}it=rb_obj_clone(s_0x_f6f8); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__f8f8,1,bind); it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(48) ... UC(57):;case UC(97) ... UC(102):;case UC(65) ... UC(70):;   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*autovar*/,it);
 break;case UC(0) ... UC(47):;case UC(58) ... UC(64):;case UC(71) ... UC(96):;case UC(103) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_2); bind_aset(bind,5/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Amethyst__append_lp__088f,1,bind); int oldpos3; while(1){oldpos3=ame_getpos(self); unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC(48) ... UC(57):;case UC(97) ... UC(102):;case UC(65) ... UC(70):;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
 break;case UC(0) ... UC(47):;case UC(58) ... UC(64):;case UC(71) ... UC(96):;case UC(103) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Amethyst__append_lp__b9cb,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__6ac6,1,bind);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr5=*ame_curstr(self);  switch(chr5){case UC(48) ... UC(48):; if (strncmp(ame_curstr(self),"0b",2)) goto alt2_3; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(47):;case UC(49) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_3); break;}it=rb_obj_clone(s_0b_3470); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__0eeb,1,bind); it=rb_ary_new3(0); bind_aset(bind,9/*autovar*/,it);
unsigned char chr6=*ame_curstr(self);  switch(chr6){case UC(48) ... UC(48):;case UC(49) ... UC(49):;   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,10/*autovar*/,it);
 break;case UC(0) ... UC(47):;case UC(50) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_3); bind_aset(bind,10/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Amethyst__append_lp__0d86,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self); unsigned char chr7=*ame_curstr(self);  switch(chr7){case UC(48) ... UC(48):;case UC(49) ... UC(49):;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,11/*autovar*/,it);
 break;case UC(0) ... UC(47):;case UC(50) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(break2); bind_aset(bind,11/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Amethyst__append_lp__c354,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,9/*autovar*/); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__66a2,1,bind);  
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr8=*ame_curstr(self);  switch(chr8){case UC(48) ... UC(48):; if (strncmp(ame_curstr(self),"0o",2)) goto alt2_4; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(47):;case UC(49) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_4); break;}it=rb_obj_clone(s_0o_6f57); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__73f1,1,bind); it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
unsigned char chr9=*ame_curstr(self);  switch(chr9){case UC(48) ... UC(55):;   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,15/*autovar*/,it);
 break;case UC(0) ... UC(47):;case UC(56) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_4); bind_aset(bind,15/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Amethyst__append_lp__a474,1,bind); int oldpos5; while(1){oldpos5=ame_getpos(self); unsigned char chr10=*ame_curstr(self);  switch(chr10){case UC(48) ... UC(55):;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,16/*autovar*/,it);
 break;case UC(0) ... UC(47):;case UC(56) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(break3); bind_aset(bind,16/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Amethyst__append_lp__50ed,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,14/*autovar*/); bind_aset(bind,17/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__3aef,1,bind);  
ame_setcut(self,Qnil);goto accept2;
alt2_4: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
unsigned char chr11=*ame_curstr(self);  switch(chr11){case UC(48) ... UC(57):;   it=AmethystCore_anything(self ); FAILTEST(alt2_5); bind_aset(bind,19/*autovar*/,it);
 break;case UC(0) ... UC(47):;case UC(58) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_5); bind_aset(bind,19/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Amethyst__append_lp__26c5,1,bind); int oldpos6; while(1){oldpos6=ame_getpos(self); unsigned char chr12=*ame_curstr(self);  switch(chr12){case UC(48) ... UC(57):;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,20/*autovar*/,it);
 break;case UC(0) ... UC(47):;case UC(58) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(break4); bind_aset(bind,20/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Amethyst__append_lp__f960,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,18/*autovar*/); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__2bc4,1,bind);  
ame_setcut(self,Qnil);goto accept2;
  alt2_5:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,22/*n*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_2_rb__2af3,1,bind);  bind_aset(bind,23/*_result*/,it);
it=bind_aget(bind,23/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_line(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_newline(self ); FAILTEST(alt1_2);ame_setcut(self,Qtrue); bind_aset(bind,1/*autovar*/,it);
ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,1/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,sy_Amethyst__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*it*/,it);
it=rb_funcall(self,sy_Amethyst_bind_lb_2_rb__ti__e7b8,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(9); bind_aset(bind,1/*rule*/,a0);bind_aset(bind,4/*delim*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*f*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=bind_aget(bind,1/*rule*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__29a3,1,bind); it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self); it=bind_aget(bind,4/*delim*/); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=bind_aget(bind,5/*s*/); it=bind_aget(bind,1/*rule*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__6948,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__6ac6,1,bind); it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb_,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,8/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_lower(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(97) ... UC(122):;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;case UC(0) ... UC(96):;case UC(123) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;}it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_member(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(3); bind_aset(bind,1/*x*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__4329,1,bind); FAILTEST(fail);it=bind_aget(bind,0/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_newline(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(13) ... UC(13):; if (strncmp(ame_curstr(self),"\r\n",2)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(12):;case UC(14) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}it=rb_obj_clone(s__bs_r_bs_n_bdb2); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(13) ... UC(13):; if (strncmp(ame_curstr(self),"\r",1)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(12):;case UC(14) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_3); break;}it=rb_obj_clone(s__bs_r_8ce5); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(10) ... UC(10):; if (strncmp(ame_curstr(self),"\n",1)) goto alt1_4; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(9):;case UC(11) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_4); break;}it=rb_obj_clone(s__bs_n_1d78); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_nil(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=Qnil; bind_aset(bind,0/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_0_rb__b1f4,1,bind); FAILTEST(fail);it=bind_aget(bind,1/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_number(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Amethyst_int(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_parse(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(5); bind_aset(bind,2/*rule*/,a0);bind_aset(bind,0/*obj*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*obj*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
  it=bind_aget(bind,2/*rule*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_range_ex(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(6); bind_aset(bind,0/*a*/,a0);bind_aset(bind,1/*b*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb__dot__6a2a,1,bind);  bind_aset(bind,2/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_2_rb__7d6d,1,bind); FAILTEST(fail);it=bind_aget(bind,3/*a*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_range_in(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(6); bind_aset(bind,0/*a*/,a0);bind_aset(bind,1/*b*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb__dot__ddb4,1,bind);  bind_aset(bind,2/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_2_rb__7d6d,1,bind); FAILTEST(fail);it=bind_aget(bind,3/*a*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(5); bind_aset(bind,0/*regex*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*regex*/); bind_aset(bind,1/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,2/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind); FAILTEST(fail);it=bind_aget(bind,2/*a*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_replace(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(3); bind_aset(bind,0/*exp*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=bind_aget(bind,0/*exp*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*it*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,1/*it*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__ti__cfcb,1,bind);  bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=bind_aget(bind,0/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_space(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(32) ... UC(32):;case UC(9) ... UC(9):;case UC(13) ... UC(13):;case UC(10) ... UC(10):;case UC(12) ... UC(12):;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case UC(33) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;}it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_spaces(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(32) ... UC(32):;case UC(9) ... UC(9):;case UC(13) ... UC(13):;case UC(10) ... UC(10):;case UC(12) ... UC(12):;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*_result*/,it);
 break;case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case UC(33) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(break1); bind_aset(bind,1/*_result*/,it);
 break;}it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__29a3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Amethyst_spaces(self ); FAILTEST(fail);it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_true(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=Qtrue; bind_aset(bind,0/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_0_rb__b1f4,1,bind); FAILTEST(fail);it=bind_aget(bind,1/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_until(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(7); bind_aset(bind,1/*e*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*x*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,1/*e*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,2/*s*/);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_3;}
 unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(92) ... UC(92):; if (strncmp(ame_curstr(self),"\\",1)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(91):;case UC(93) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_2); break;}it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__b2a5,1,bind);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_3;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_3;
 accept2:;
  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__81ec,1,bind);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_upper(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(65) ... UC(90):;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;case UC(0) ... UC(64):;case UC(91) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;}it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_word(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_alpha(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(95) ... UC(95):; if (strncmp(ame_curstr(self),"_",1)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(94):;case UC(96) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_3); break;}it=rb_obj_clone(s___b14a); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_xdigit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(48) ... UC(57):;case UC(97) ... UC(102):;case UC(65) ... UC(70):;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;case UC(0) ... UC(47):;case UC(58) ... UC(64):;case UC(71) ... UC(96):;case UC(103) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;}it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
void Init_amethyst_c(){ 
 cls_Amethyst=rb_define_class("Amethyst",rb_const_get(rb_cObject,rb_intern("AmethystCore"))); 
failobj=rb_eval_string("FAIL");
s_0b_3470=rb_str_new2("0b");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_0b_3470);
s_0o_6f57=rb_str_new2("0o");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_0o_6f57);
s_0x_f6f8=rb_str_new2("0x");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_0x_f6f8);
s___b14a=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s___b14a);
s__bs__bs__7f81=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs__bs__7f81);
s__bs_n_1d78=rb_str_new2("\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs_n_1d78);
s__bs_r_8ce5=rb_str_new2("\r");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs_r_8ce5);
s__bs_r_bs_n_bdb2=rb_str_new2("\r\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs_r_bs_n_bdb2);
s__d41d=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__d41d);
s__mi__336d=rb_str_new2("-");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__mi__336d);
sy_Amethyst__append_lp__088f=rb_intern("Amethyst__append_lp__088f");
sy_Amethyst__append_lp__0d86=rb_intern("Amethyst__append_lp__0d86");
sy_Amethyst__append_lp__0eeb=rb_intern("Amethyst__append_lp__0eeb");
sy_Amethyst__append_lp__26c5=rb_intern("Amethyst__append_lp__26c5");
sy_Amethyst__append_lp__29a3=rb_intern("Amethyst__append_lp__29a3");
sy_Amethyst__append_lp__2bc4=rb_intern("Amethyst__append_lp__2bc4");
sy_Amethyst__append_lp__3aef=rb_intern("Amethyst__append_lp__3aef");
sy_Amethyst__append_lp__50ed=rb_intern("Amethyst__append_lp__50ed");
sy_Amethyst__append_lp__66a2=rb_intern("Amethyst__append_lp__66a2");
sy_Amethyst__append_lp__6948=rb_intern("Amethyst__append_lp__6948");
sy_Amethyst__append_lp__6ac6=rb_intern("Amethyst__append_lp__6ac6");
sy_Amethyst__append_lp__73f1=rb_intern("Amethyst__append_lp__73f1");
sy_Amethyst__append_lp__81ec=rb_intern("Amethyst__append_lp__81ec");
sy_Amethyst__append_lp__a474=rb_intern("Amethyst__append_lp__a474");
sy_Amethyst__append_lp__b2a5=rb_intern("Amethyst__append_lp__b2a5");
sy_Amethyst__append_lp__b9cb=rb_intern("Amethyst__append_lp__b9cb");
sy_Amethyst__append_lp__c354=rb_intern("Amethyst__append_lp__c354");
sy_Amethyst__append_lp__cbd1=rb_intern("Amethyst__append_lp__cbd1");
sy_Amethyst__append_lp__f8f8=rb_intern("Amethyst__append_lp__f8f8");
sy_Amethyst__append_lp__f960=rb_intern("Amethyst__append_lp__f960");
sy_Amethyst__lp_bind_lb_0_rb__9f45=rb_intern("Amethyst__lp_bind_lb_0_rb__9f45");
sy_Amethyst__lp_bind_lb_0_rb__b1f4=rb_intern("Amethyst__lp_bind_lb_0_rb__b1f4");
sy_Amethyst__lp_bind_lb_1_rb__4329=rb_intern("Amethyst__lp_bind_lb_1_rb__4329");
sy_Amethyst__lp_bind_lb_1_rb__abc3=rb_intern("Amethyst__lp_bind_lb_1_rb__abc3");
sy_Amethyst__lp_bind_lb_2_rb__2af3=rb_intern("Amethyst__lp_bind_lb_2_rb__2af3");
sy_Amethyst__lp_bind_lb_2_rb__7d6d=rb_intern("Amethyst__lp_bind_lb_2_rb__7d6d");
sy_Amethyst__lp_false_rp__sp__c3c5=rb_intern("Amethyst__lp_false_rp__sp__c3c5");
sy_Amethyst_bind_lb_0_rb_=rb_intern("Amethyst_bind_lb_0_rb_");
sy_Amethyst_bind_lb_0_rb__dot__206f=rb_intern("Amethyst_bind_lb_0_rb__dot__206f");
sy_Amethyst_bind_lb_0_rb__dot__6a2a=rb_intern("Amethyst_bind_lb_0_rb__dot__6a2a");
sy_Amethyst_bind_lb_0_rb__dot__ddb4=rb_intern("Amethyst_bind_lb_0_rb__dot__ddb4");
sy_Amethyst_bind_lb_1_rb__ti__cfcb=rb_intern("Amethyst_bind_lb_1_rb__ti__cfcb");
sy_Amethyst_bind_lb_2_rb__ti__e7b8=rb_intern("Amethyst_bind_lb_2_rb__ti__e7b8");
sy_apply=rb_intern("apply");
rb_define_method(cls_Amethyst,"_",Amethyst__,0);
rb_define_method(cls_Amethyst,"alnum",Amethyst_alnum,0);
rb_define_method(cls_Amethyst,"alpha",Amethyst_alpha,0);
rb_define_method(cls_Amethyst,"char",Amethyst_char,0);
rb_define_method(cls_Amethyst,"clas",Amethyst_clas,1);
rb_define_method(cls_Amethyst,"digit",Amethyst_digit,0);
rb_define_method(cls_Amethyst,"empty",Amethyst_empty,0);
rb_define_method(cls_Amethyst,"eof",Amethyst_eof,0);
rb_define_method(cls_Amethyst,"fails",Amethyst_fails,0);
rb_define_method(cls_Amethyst,"false",Amethyst_false,0);
rb_define_method(cls_Amethyst,"int",Amethyst_int,0);
rb_define_method(cls_Amethyst,"line",Amethyst_line,0);
rb_define_method(cls_Amethyst,"listOf",Amethyst_listOf,2);
rb_define_method(cls_Amethyst,"lower",Amethyst_lower,0);
rb_define_method(cls_Amethyst,"member",Amethyst_member,1);
rb_define_method(cls_Amethyst,"newline",Amethyst_newline,0);
rb_define_method(cls_Amethyst,"nil",Amethyst_nil,0);
rb_define_method(cls_Amethyst,"number",Amethyst_number,0);
rb_define_method(cls_Amethyst,"parse",Amethyst_parse,2);
rb_define_method(cls_Amethyst,"range_ex",Amethyst_range_ex,2);
rb_define_method(cls_Amethyst,"range_in",Amethyst_range_in,2);
rb_define_method(cls_Amethyst,"regch",Amethyst_regch,1);
rb_define_method(cls_Amethyst,"replace",Amethyst_replace,1);
rb_define_method(cls_Amethyst,"seq",Amethyst_seq,1);
rb_define_method(cls_Amethyst,"space",Amethyst_space,0);
rb_define_method(cls_Amethyst,"spaces",Amethyst_spaces,0);
rb_define_method(cls_Amethyst,"token",Amethyst_token,1);
rb_define_method(cls_Amethyst,"true",Amethyst_true,0);
rb_define_method(cls_Amethyst,"until",Amethyst_until,1);
rb_define_method(cls_Amethyst,"upper",Amethyst_upper,0);
rb_define_method(cls_Amethyst,"word",Amethyst_word,0);
rb_define_method(cls_Amethyst,"xdigit",Amethyst_xdigit,0);
 rb_eval_string("testversionamethyst('48740d129118646cf9034a6572a5447a')");}
