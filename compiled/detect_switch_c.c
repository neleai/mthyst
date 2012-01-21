#include "cthyst.h"
VALUE cls_First_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE First_Dataflow_first(VALUE self );
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE First_Dataflow_root(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE switchhashFirst_Dataflow1;
VALUE switchhashFirst_Dataflow2;
static VALUE sy_First_Dataflow__append_lp__473a;
static VALUE sy_First_Dataflow__append_lp__89bf;
static VALUE sy_First_Dataflow__append_lp__b494;
static VALUE sy_First_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_First_Dataflow__lp_;
static VALUE sy_First_Dataflow__lp_bind_lb_9_rb__9f2a;
static VALUE sy_First_Dataflow__lp_src_dot_fir_1e1a;
static VALUE sy_First_Dataflow_bind_lb_0_rb__dot__b660;
static VALUE sy_First_Dataflow_bind_lb_15_rb__dd25;
static VALUE sy_First_Dataflow_bind_lb_20_rb__1677;
static VALUE sy_First_Dataflow_bind_lb_20_rb__ee36;
static VALUE sy_First_Dataflow_depends_lp__b4cd;
static VALUE sy_First_Dataflow_lattice_dot__2c4f;
static VALUE sy_First_Dataflow_lattice_dot__2ce9;
static VALUE sy_First_Dataflow_puts_sp__dq__sh__le__1220;
static VALUE sy_First_Dataflow_src_dot_firs_8482;
static VALUE sy_analyze;
VALUE First_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(32);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*vals*/,it);
unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 11:;case 2:;case 3:;case 4:;case 7:;case 9:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr2=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 10:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,4/*autovar*/,it);
int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_2;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_First_Dataflow__lp_src_dot_fir_1e1a,1,bind); FAILTEST(pass2);int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_First_Dataflow_src_dot_firs_8482,1,bind);  bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt3_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_2;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,9/*e*/,it);
int oldpos7=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass4;}
 it=rb_funcall(self,sy_First_Dataflow__lp_bind_lb_9_rb__9f2a,1,bind); FAILTEST(alt4_2);  it=First_Dataflow_value(self ); FAILTEST(alt4_2); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__b494,1,bind);  
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass4;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3); 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos7); goto pass4;
 accept4:;
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break3;
 if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=rb_funcall(self,sy_First_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_3;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_2;
 accept3:;
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos8; while(1){oldpos8=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__473a,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=bind_aget(bind,13/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_15_rb__dd25,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt2_3;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr3=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr3){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt2_4); break;}cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt2_4;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_4: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_5);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_5:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 1:; int oldpos10=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass7); bind_aset(bind,18/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt5_2;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr4=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr4){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt5_3); break;}cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt5_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_3: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_4);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_4:  ame_setpos(self,oldpos10); goto fail;
 accept5:;
 break;case 5:; int oldpos12=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass9); bind_aset(bind,20/*val*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_20_rb__1677,1,bind);  bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt6_2;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr5=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr5){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt6_3); break;}cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos13; while(1){oldpos13=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break7); if (ame_getstop(self)!=Qnil){{oldpos13=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos13); it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto alt6_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_3: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_4);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_4:  ame_setpos(self,oldpos12); goto fail;
 accept6:;
 break;case 6:; int oldpos14=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2); bind_aset(bind,22/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,22/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,23/*autovar*/,it);
int oldpos15; while(1){oldpos15=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break8); bind_aset(bind,24/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__89bf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos15=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos15); it=bind_aget(bind,23/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_15_rb__dd25,1,bind);  bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto alt7_2;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr6=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr6){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt7_3); break;}cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos16; while(1){oldpos16=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break9); if (ame_getstop(self)!=Qnil){{oldpos16=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos16); it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto alt7_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_3: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_4);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_4:  ame_setpos(self,oldpos14); goto fail;
 accept7:;
 break;case 8:; int oldpos17=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,20/*val*/,it);
int oldpos18; while(1){oldpos18=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break10); bind_aset(bind,27/*el*/,it);
it=bind_aget(bind,27/*el*/); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,28/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass14); bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto break10;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,30/*nev*/,it);
it=rb_funcall(self,sy_First_Dataflow_puts_sp__dq__sh__le__1220,1,bind); it=rb_funcall(self,sy_First_Dataflow_bind_lb_20_rb__ee36,1,bind);  bind_aset(bind,20/*val*/,it);
int oldpos19=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break10;}
 it=rb_funcall(self,sy_First_Dataflow__lp_,1,bind); FAILTEST(alt9_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break10;}
   it=Amethyst_empty(self ); FAILTEST(alt9_3); 
ame_setcut(self,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos19); goto break10;
 accept9:;
 if (ame_getstop(self)!=Qnil){{oldpos18=ame_getpos(self);goto break10;} } } break10: ame_setstop(self,Qnil);  ame_setpos(self,oldpos18); int oldpos20; while(1){oldpos20=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break11); if (ame_getstop(self)!=Qnil){{oldpos20=ame_getpos(self);goto break11;} } } break11: ame_setstop(self,Qnil);  ame_setpos(self,oldpos20); it=bind_aget(bind,20/*val*/); bind_aset(bind,31/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto alt8_2;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr7=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr7){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt8_3); break;}cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos21; while(1){oldpos21=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break12); if (ame_getstop(self)!=Qnil){{oldpos21=ame_getpos(self);goto break12;} } } break12: ame_setstop(self,Qnil);  ame_setpos(self,oldpos21); it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto alt8_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_3: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_4);it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt8_4:  ame_setpos(self,oldpos17); goto fail;
 accept8:;
 break;}it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_First_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=First_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE First_Dataflow_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*x*/,it);
 it=bind_aget(bind,0/*x*/); arg0=it; it=rb_funcall(self,sy_analyze,1,arg0); FAILTEST(fail); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE First_Dataflow_value(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*x*/,it);
it=rb_funcall(self,sy_First_Dataflow_depends_lp__b4cd,1,bind);  bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }VALUE cls_Sizes_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Sizes_Dataflow_first(VALUE self );
VALUE Sizes_Dataflow_first_Sizes_Dataflow(VALUE self );
VALUE Sizes_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhashFirst_Dataflow1;
VALUE switchhashFirst_Dataflow2;
VALUE switchhashSizes_Dataflow2;
VALUE switchhashSizes_Dataflow3;
static VALUE c_CAct;
static VALUE sy_Sizes_Dataflow_Compiler_f995;
static VALUE sy_Sizes_Dataflow__append_lp__473a;
static VALUE sy_Sizes_Dataflow__append_lp__89bf;
static VALUE sy_Sizes_Dataflow__append_lp__b494;
static VALUE sy_Sizes_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Sizes_Dataflow__lp_;
static VALUE sy_Sizes_Dataflow__lp_Compile_b85e;
static VALUE sy_Sizes_Dataflow__lp_bind_lb_9_rb__9f2a;
static VALUE sy_Sizes_Dataflow__lp_src_dot_fir_1e1a;
static VALUE sy_Sizes_Dataflow_bind_lb_0_rb__dot__b660;
static VALUE sy_Sizes_Dataflow_bind_lb_15_rb__dd25;
static VALUE sy_Sizes_Dataflow_bind_lb_20_rb__1677;
static VALUE sy_Sizes_Dataflow_bind_lb_20_rb__ee36;
static VALUE sy_Sizes_Dataflow_lattice_dot__2c4f;
static VALUE sy_Sizes_Dataflow_lattice_dot__2ce9;
static VALUE sy_Sizes_Dataflow_lattice_lb__4678;
static VALUE sy_Sizes_Dataflow_lattice_lb__fdee;
static VALUE sy_Sizes_Dataflow_puts_sp__dq__sh__le__1220;
static VALUE sy_Sizes_Dataflow_src_dot_firs_8482;
VALUE Sizes_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashSizes_Dataflow3,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
unsigned char chr2=FIX2LONG(rb_hash_aref(switchhashSizes_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:; int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"_seq",4)) goto pass2; else ame_setpos(self,ame_getpos(self)+4);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt3_2;
 it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_2;
it=rb_funcall(self,sy_Sizes_Dataflow_lattice_lb__4678,1,bind);  bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass4);unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(114) ... UC(114):; if (strncmp(ame_curstr(self),"regch",5)) goto pass4; else ame_setpos(self,ame_getpos(self)+5); break;case UC(97) ... UC(97):; if (strncmp(ame_curstr(self),"anything",8)) goto pass4; else ame_setpos(self,ame_getpos(self)+8); break;case UC(99) ... UC(99):; if (strncmp(ame_curstr(self),"clas",4)) goto pass4; else ame_setpos(self,ame_getpos(self)+4); break;default:;   it=Amethyst_fails(self ); FAILTEST(pass4); break;}  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt3_3;
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_lb__fdee,1,bind);  bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto pass1;
 accept3:;
 break;}  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt2_2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,10/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,12/*name*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__lp_Compile_b85e,1,bind); FAILTEST(pass5);it=rb_funcall(self,sy_Sizes_Dataflow_Compiler_f995,1,bind);  bind_aset(bind,13/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,13/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass6); bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto pass5;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,15/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt2_3;
it=bind_aget(bind,15/*autovar*/); bind_aset(bind,10/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Sizes_Dataflow_first_Sizes_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,10/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=Sizes_Dataflow_first_Sizes_Dataflow(self ); FAILTEST(fail); bind_aset(bind,10/*_result*/,it);
 break;}it=bind_aget(bind,10/*_result*/);
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_first_Sizes_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(32);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*vals*/,it);
unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 11:;case 2:;case 3:;case 4:;case 7:;case 9:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr2=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 10:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,4/*autovar*/,it);
int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_2;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Sizes_Dataflow__lp_src_dot_fir_1e1a,1,bind); FAILTEST(pass2);int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_Sizes_Dataflow_src_dot_firs_8482,1,bind);  bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt3_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_2;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,9/*e*/,it);
int oldpos7=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass4;}
 it=rb_funcall(self,sy_Sizes_Dataflow__lp_bind_lb_9_rb__9f2a,1,bind); FAILTEST(alt4_2);  it=First_Dataflow_value(self ); FAILTEST(alt4_2); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__b494,1,bind);  
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass4;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3); 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos7); goto pass4;
 accept4:;
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break3;
 if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_3;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_2;
 accept3:;
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos8; while(1){oldpos8=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__473a,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=bind_aget(bind,13/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_15_rb__dd25,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt2_3;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr3=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr3){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt2_4); break;}cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt2_4;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_4: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_5);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_5:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 1:; int oldpos10=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass7); bind_aset(bind,18/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt5_2;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr4=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr4){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt5_3); break;}cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt5_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_3: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_4);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_4:  ame_setpos(self,oldpos10); goto fail;
 accept5:;
 break;case 5:; int oldpos12=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass9); bind_aset(bind,20/*val*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_20_rb__1677,1,bind);  bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt6_2;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr5=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr5){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt6_3); break;}cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos13; while(1){oldpos13=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break7); if (ame_getstop(self)!=Qnil){{oldpos13=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos13); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto alt6_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_3: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_4);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_4:  ame_setpos(self,oldpos12); goto fail;
 accept6:;
 break;case 6:; int oldpos14=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2); bind_aset(bind,22/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,22/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,23/*autovar*/,it);
int oldpos15; while(1){oldpos15=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break8); bind_aset(bind,24/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__89bf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos15=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos15); it=bind_aget(bind,23/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_15_rb__dd25,1,bind);  bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto alt7_2;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr6=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr6){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt7_3); break;}cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos16; while(1){oldpos16=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break9); if (ame_getstop(self)!=Qnil){{oldpos16=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos16); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto alt7_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_3: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_4);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_4:  ame_setpos(self,oldpos14); goto fail;
 accept7:;
 break;case 8:; int oldpos17=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,20/*val*/,it);
int oldpos18; while(1){oldpos18=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break10); bind_aset(bind,27/*el*/,it);
it=bind_aget(bind,27/*el*/); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,28/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass14); bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto break10;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,30/*nev*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_puts_sp__dq__sh__le__1220,1,bind); it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_20_rb__ee36,1,bind);  bind_aset(bind,20/*val*/,it);
int oldpos19=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break10;}
 it=rb_funcall(self,sy_Sizes_Dataflow__lp_,1,bind); FAILTEST(alt9_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break10;}
   it=Amethyst_empty(self ); FAILTEST(alt9_3); 
ame_setcut(self,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos19); goto break10;
 accept9:;
 if (ame_getstop(self)!=Qnil){{oldpos18=ame_getpos(self);goto break10;} } } break10: ame_setstop(self,Qnil);  ame_setpos(self,oldpos18); int oldpos20; while(1){oldpos20=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break11); if (ame_getstop(self)!=Qnil){{oldpos20=ame_getpos(self);goto break11;} } } break11: ame_setstop(self,Qnil);  ame_setpos(self,oldpos20); it=bind_aget(bind,20/*val*/); bind_aset(bind,31/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto alt8_2;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr7=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr7){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt8_3); break;}cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos21; while(1){oldpos21=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break12); if (ame_getstop(self)!=Qnil){{oldpos21=ame_getpos(self);goto break12;} } } break12: ame_setstop(self,Qnil);  ame_setpos(self,oldpos21); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto alt8_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_3: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_4);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt8_4:  ame_setpos(self,oldpos17); goto fail;
 accept8:;
 break;}it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Sizes_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=Sizes_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }VALUE cls_Switch_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Switch_Dataflow_first(VALUE self );
VALUE Switch_Dataflow_first_Switch_Dataflow(VALUE self );
VALUE Switch_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhashFirst_Dataflow1;
VALUE switchhashFirst_Dataflow2;
VALUE switchhashSwitch_Dataflow2;
VALUE switchhashSwitch_Dataflow3;
static VALUE c_Act;
static VALUE c_CAct;
static VALUE sy_Switch_Dataflow_Compiler_8ba0;
static VALUE sy_Switch_Dataflow__append_lp__473a;
static VALUE sy_Switch_Dataflow__append_lp__89bf;
static VALUE sy_Switch_Dataflow__append_lp__b494;
static VALUE sy_Switch_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Switch_Dataflow__lp_;
static VALUE sy_Switch_Dataflow__lp_Compile_8180;
static VALUE sy_Switch_Dataflow__lp_bind_lb_9_rb__9f2a;
static VALUE sy_Switch_Dataflow__lp_src_dot_fir_1e1a;
static VALUE sy_Switch_Dataflow_bind_lb_0_rb__dot__b660;
static VALUE sy_Switch_Dataflow_bind_lb_15_rb__dd25;
static VALUE sy_Switch_Dataflow_bind_lb_20_rb__1677;
static VALUE sy_Switch_Dataflow_bind_lb_20_rb__ee36;
static VALUE sy_Switch_Dataflow_firstcha_c300;
static VALUE sy_Switch_Dataflow_lattice_dot__2c4f;
static VALUE sy_Switch_Dataflow_lattice_dot__2ce9;
static VALUE sy_Switch_Dataflow_lattice_dot__e0e5;
static VALUE sy_Switch_Dataflow_puts_sp__dq__sh__le__1220;
static VALUE sy_Switch_Dataflow_regchar_lp__9b27;
static VALUE sy_Switch_Dataflow_src_dot_firs_8482;
VALUE Switch_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(18);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashSwitch_Dataflow3,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
unsigned char chr2=FIX2LONG(rb_hash_aref(switchhashSwitch_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:; int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"_seq",4)) goto pass2; else ame_setpos(self,ame_getpos(self)+4);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt3_2;
 it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_2;
it=rb_funcall(self,sy_Switch_Dataflow_firstcha_c300,1,bind);  bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass4);if (strncmp(ame_curstr(self),"regch",5)) goto pass4; else ame_setpos(self,ame_getpos(self)+5);  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt3_3;
 it=c_Act; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_3); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,7/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt3_3;
it=rb_funcall(self,sy_Switch_Dataflow_regchar_lp__9b27,1,bind);  bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass6);if (strncmp(ame_curstr(self),"anything",8)) goto pass6; else ame_setpos(self,ame_getpos(self)+8);  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt3_4;
it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__e0e5,1,bind);  bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_4:  ame_setpos(self,oldpos3); goto pass1;
 accept3:;
 break;}  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt2_2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass7); bind_aset(bind,14/*name*/,it);
it=rb_funcall(self,sy_Switch_Dataflow__lp_Compile_8180,1,bind); FAILTEST(pass7);it=rb_funcall(self,sy_Switch_Dataflow_Compiler_8ba0,1,bind);  bind_aset(bind,15/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,15/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto pass7;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,17/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt2_3;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Switch_Dataflow_first_Switch_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=Switch_Dataflow_first_Switch_Dataflow(self ); FAILTEST(fail); bind_aset(bind,12/*_result*/,it);
 break;}it=bind_aget(bind,12/*_result*/);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_first_Switch_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(32);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*vals*/,it);
unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 11:;case 2:;case 3:;case 4:;case 7:;case 9:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr2=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 10:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,4/*autovar*/,it);
int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_2;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Switch_Dataflow__lp_src_dot_fir_1e1a,1,bind); FAILTEST(pass2);int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_Switch_Dataflow_src_dot_firs_8482,1,bind);  bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt3_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_2;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,9/*e*/,it);
int oldpos7=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass4;}
 it=rb_funcall(self,sy_Switch_Dataflow__lp_bind_lb_9_rb__9f2a,1,bind); FAILTEST(alt4_2);  it=First_Dataflow_value(self ); FAILTEST(alt4_2); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Dataflow__append_lp__b494,1,bind);  
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass4;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3); 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos7); goto pass4;
 accept4:;
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break3;
 if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_3;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_2;
 accept3:;
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos8; while(1){oldpos8=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Dataflow__append_lp__473a,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=bind_aget(bind,13/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_15_rb__dd25,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt2_3;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr3=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr3){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt2_4); break;}cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt2_4;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_4: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_5);it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_5:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 1:; int oldpos10=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass7); bind_aset(bind,18/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt5_2;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr4=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr4){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt5_3); break;}cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt5_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_3: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_4);it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_4:  ame_setpos(self,oldpos10); goto fail;
 accept5:;
 break;case 5:; int oldpos12=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass9); bind_aset(bind,20/*val*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_20_rb__1677,1,bind);  bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt6_2;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr5=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr5){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt6_3); break;}cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos13; while(1){oldpos13=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break7); if (ame_getstop(self)!=Qnil){{oldpos13=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos13); it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto alt6_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_3: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_4);it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_4:  ame_setpos(self,oldpos12); goto fail;
 accept6:;
 break;case 6:; int oldpos14=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2); bind_aset(bind,22/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,22/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,23/*autovar*/,it);
int oldpos15; while(1){oldpos15=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break8); bind_aset(bind,24/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Dataflow__append_lp__89bf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos15=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos15); it=bind_aget(bind,23/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_15_rb__dd25,1,bind);  bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto alt7_2;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr6=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr6){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt7_3); break;}cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos16; while(1){oldpos16=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break9); if (ame_getstop(self)!=Qnil){{oldpos16=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos16); it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto alt7_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_3: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_4);it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_4:  ame_setpos(self,oldpos14); goto fail;
 accept7:;
 break;case 8:; int oldpos17=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,20/*val*/,it);
int oldpos18; while(1){oldpos18=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break10); bind_aset(bind,27/*el*/,it);
it=bind_aget(bind,27/*el*/); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,28/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass14); bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto break10;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,30/*nev*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_puts_sp__dq__sh__le__1220,1,bind); it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_20_rb__ee36,1,bind);  bind_aset(bind,20/*val*/,it);
int oldpos19=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break10;}
 it=rb_funcall(self,sy_Switch_Dataflow__lp_,1,bind); FAILTEST(alt9_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break10;}
   it=Amethyst_empty(self ); FAILTEST(alt9_3); 
ame_setcut(self,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos19); goto break10;
 accept9:;
 if (ame_getstop(self)!=Qnil){{oldpos18=ame_getpos(self);goto break10;} } } break10: ame_setstop(self,Qnil);  ame_setpos(self,oldpos18); int oldpos20; while(1){oldpos20=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break11); if (ame_getstop(self)!=Qnil){{oldpos20=ame_getpos(self);goto break11;} } } break11: ame_setstop(self,Qnil);  ame_setpos(self,oldpos20); it=bind_aget(bind,20/*val*/); bind_aset(bind,31/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto alt8_2;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr7=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr7){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt8_3); break;}cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos21; while(1){oldpos21=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break12); if (ame_getstop(self)!=Qnil){{oldpos21=ame_getpos(self);goto break12;} } } break12: ame_setstop(self,Qnil);  ame_setpos(self,oldpos21); it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto alt8_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_3: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_4);it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt8_4:  ame_setpos(self,oldpos17); goto fail;
 accept8:;
 break;}it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Switch_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=Switch_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }VALUE cls_ClasSwitch_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE ClasSwitch_Dataflow_first(VALUE self );
VALUE ClasSwitch_Dataflow_first_ClasSwitch_Dataflow(VALUE self );
VALUE ClasSwitch_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE First_Dataflow_value(VALUE self );
VALUE switchhashClasSwitch_Dataflow1;
VALUE switchhashFirst_Dataflow1;
VALUE switchhashFirst_Dataflow2;
static VALUE c_CAct;
static VALUE sy_ClasSwitch_Dataflow_Compiler_3aee;
static VALUE sy_ClasSwitch_Dataflow__append_lp__473a;
static VALUE sy_ClasSwitch_Dataflow__append_lp__89bf;
static VALUE sy_ClasSwitch_Dataflow__append_lp__b494;
static VALUE sy_ClasSwitch_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_ClasSwitch_Dataflow__lp_;
static VALUE sy_ClasSwitch_Dataflow__lp_Compile_aae6;
static VALUE sy_ClasSwitch_Dataflow__lp_bind_lb_9_rb__9f2a;
static VALUE sy_ClasSwitch_Dataflow__lp_src_dot_fir_1e1a;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_0_rb__dot__b660;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_15_rb__dd25;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_20_rb__1677;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_20_rb__ee36;
static VALUE sy_ClasSwitch_Dataflow_lattice_dot__2c4f;
static VALUE sy_ClasSwitch_Dataflow_lattice_dot__2ce9;
static VALUE sy_ClasSwitch_Dataflow_lattice_lb__cb21;
static VALUE sy_ClasSwitch_Dataflow_puts_sp__dq__sh__le__1220;
static VALUE sy_ClasSwitch_Dataflow_src_dot_firs_8482;
VALUE ClasSwitch_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashClasSwitch_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"clas",4)) goto pass2; else ame_setpos(self,ame_getpos(self)+4);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
 it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,5/*cls*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass1;
it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_lb__cb21,1,bind);  bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt2_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,9/*name*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__lp_Compile_aae6,1,bind); FAILTEST(pass4);it=rb_funcall(self,sy_ClasSwitch_Dataflow_Compiler_3aee,1,bind);  bind_aset(bind,10/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,10/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto pass4;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt2_3;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=ClasSwitch_Dataflow_first_ClasSwitch_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=ClasSwitch_Dataflow_first_ClasSwitch_Dataflow(self ); FAILTEST(fail); bind_aset(bind,7/*_result*/,it);
 break;}it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_first_ClasSwitch_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(32);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*vals*/,it);
unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 11:;case 2:;case 3:;case 4:;case 7:;case 9:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr2=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 10:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,4/*autovar*/,it);
int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_2;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_ClasSwitch_Dataflow__lp_src_dot_fir_1e1a,1,bind); FAILTEST(pass2);int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_ClasSwitch_Dataflow_src_dot_firs_8482,1,bind);  bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt3_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_2;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,9/*e*/,it);
int oldpos7=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass4;}
 it=rb_funcall(self,sy_ClasSwitch_Dataflow__lp_bind_lb_9_rb__9f2a,1,bind); FAILTEST(alt4_2);  it=First_Dataflow_value(self ); FAILTEST(alt4_2); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__append_lp__b494,1,bind);  
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass4;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3); 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos7); goto pass4;
 accept4:;
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break3;
 if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_3;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_2;
 accept3:;
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos8; while(1){oldpos8=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__append_lp__473a,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=bind_aget(bind,13/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_15_rb__dd25,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt2_3;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr3=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr3){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt2_4); break;}cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt2_4;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_4: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_5);it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_5:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 1:; int oldpos10=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass7); bind_aset(bind,18/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt5_2;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr4=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr4){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt5_3); break;}cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt5_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_3: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_4);it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_4:  ame_setpos(self,oldpos10); goto fail;
 accept5:;
 break;case 5:; int oldpos12=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass9); bind_aset(bind,20/*val*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_20_rb__1677,1,bind);  bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt6_2;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr5=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr5){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt6_3); break;}cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos13; while(1){oldpos13=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break7); if (ame_getstop(self)!=Qnil){{oldpos13=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos13); it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto alt6_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_3: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_4);it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_4:  ame_setpos(self,oldpos12); goto fail;
 accept6:;
 break;case 6:; int oldpos14=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2); bind_aset(bind,22/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,22/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,23/*autovar*/,it);
int oldpos15; while(1){oldpos15=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break8); bind_aset(bind,24/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__append_lp__89bf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos15=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos15); it=bind_aget(bind,23/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_15_rb__dd25,1,bind);  bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto alt7_2;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr6=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr6){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt7_3); break;}cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos16; while(1){oldpos16=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break9); if (ame_getstop(self)!=Qnil){{oldpos16=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos16); it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto alt7_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_3: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_4);it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_4:  ame_setpos(self,oldpos14); goto fail;
 accept7:;
 break;case 8:; int oldpos17=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,20/*val*/,it);
int oldpos18; while(1){oldpos18=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break10); bind_aset(bind,27/*el*/,it);
it=bind_aget(bind,27/*el*/); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,28/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass14); bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto break10;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,30/*nev*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_puts_sp__dq__sh__le__1220,1,bind); it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_20_rb__ee36,1,bind);  bind_aset(bind,20/*val*/,it);
int oldpos19=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break10;}
 it=rb_funcall(self,sy_ClasSwitch_Dataflow__lp_,1,bind); FAILTEST(alt9_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break10;}
   it=Amethyst_empty(self ); FAILTEST(alt9_3); 
ame_setcut(self,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos19); goto break10;
 accept9:;
 if (ame_getstop(self)!=Qnil){{oldpos18=ame_getpos(self);goto break10;} } } break10: ame_setstop(self,Qnil);  ame_setpos(self,oldpos18); int oldpos20; while(1){oldpos20=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break11); if (ame_getstop(self)!=Qnil){{oldpos20=ame_getpos(self);goto break11;} } } break11: ame_setstop(self,Qnil);  ame_setpos(self,oldpos20); it=bind_aget(bind,20/*val*/); bind_aset(bind,31/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto alt8_2;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr7=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr7){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,1/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt8_3); break;}cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos21; while(1){oldpos21=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break12); if (ame_getstop(self)!=Qnil){{oldpos21=ame_getpos(self);goto break12;} } } break12: ame_setstop(self,Qnil);  ame_setpos(self,oldpos21); it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto alt8_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_3: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_4);it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2ce9,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt8_4:  ame_setpos(self,oldpos17); goto fail;
 accept8:;
 break;}it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_ClasSwitch_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=ClasSwitch_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }VALUE cls_Detect_First;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Detect_First_itrans(VALUE self );
VALUE Detect_First_root(VALUE self );
VALUE Traverser_Clone2_traverse(VALUE self );
VALUE switchhashDetect_First1;
static VALUE c_Rule;
static VALUE sy_Detect_First__append_lp__7352;
static VALUE sy_Detect_First__append_lp__b494;
static VALUE sy_Detect_First__at_name_eq_sr_362f;
static VALUE sy_Detect_First__do_rules_eq__le__ab16;
static VALUE sy_Detect_First_src_25d9;
static VALUE sy_Detect_First_src_dot_rule_5acf;
static VALUE sy_Detect_First_src_dot_rule_d270;
VALUE Detect_First_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDetect_First1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_First__at_name_eq_sr_362f,1,bind); it=rb_funcall(self,sy_Detect_First__do_rules_eq__le__ab16,1,bind); it=rb_funcall(self,sy_Detect_First_src_dot_rule_5acf,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_First_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_First__append_lp__7352,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=rb_funcall(self,sy_Detect_First_src_dot_rule_d270,1,bind); it=rb_funcall(self,sy_Detect_First_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,10/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Detect_First__append_lp__b494,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_First_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Traverser_Clone2_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }VALUE cls_Detect_Switch;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Detect_Switch_itrans(VALUE self );
VALUE Detect_Switch_predicate(VALUE self ,VALUE a0,VALUE a1);
VALUE Detect_Switch_predicate(VALUE self ,VALUE,VALUE);
VALUE Detect_Switch_root(VALUE self );
VALUE Detect_Switch_split(VALUE self );
VALUE Detect_Switch_traverse(VALUE self );
VALUE Detect_Switch_traverse_item(VALUE self );
VALUE Detect_Switch_visit(VALUE self );
VALUE switchhashDetect_First1;
VALUE switchhashDetect_Switch1;
VALUE switchhashDetect_Switch3;
VALUE switchhashTraverser_Clone21;
static VALUE c_Or;
static VALUE c_Rule;
static VALUE sy_Detect_Switch_CharLatt_66f5;
static VALUE sy_Detect_Switch_Or_lb__ti_bind_d995;
static VALUE sy_Detect_Switch_Or_lb__ti_bind_ffe5;
static VALUE sy_Detect_Switch_Placehol_6875;
static VALUE sy_Detect_Switch_Seq_lb__ti__lp__lb_b_c8d6;
static VALUE sy_Detect_Switch__append_lp__31c3;
static VALUE sy_Detect_Switch__append_lp__473a;
static VALUE sy_Detect_Switch__append_lp__6adb;
static VALUE sy_Detect_Switch__append_lp__7352;
static VALUE sy_Detect_Switch__append_lp__9ca5;
static VALUE sy_Detect_Switch__append_lp__b494;
static VALUE sy_Detect_Switch__append_lp__d472;
static VALUE sy_Detect_Switch__at_cases_dot_e_04b0;
static VALUE sy_Detect_Switch__at_cases_eq__at__ee05;
static VALUE sy_Detect_Switch__at_cases_eq__lb__023f;
static VALUE sy_Detect_Switch__at_changed_5352;
static VALUE sy_Detect_Switch__at_changed_b885;
static VALUE sy_Detect_Switch__at_changed_c681;
static VALUE sy_Detect_Switch__at_name_eq_sr_362f;
static VALUE sy_Detect_Switch__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch__lp_;
static VALUE sy_Detect_Switch__lp_bind_lb_0_rb__2cee;
static VALUE sy_Detect_Switch__lp_bind_lb_1_rb__a6f6;
static VALUE sy_Detect_Switch__lp_bind_lb_2_rb__6693;
static VALUE sy_Detect_Switch__lp_bind_lb_2_rb__8459;
static VALUE sy_Detect_Switch__lp_bind_lb_7_rb__a3be;
static VALUE sy_Detect_Switch__lp_first_lp_b_1c32;
static VALUE sy_Detect_Switch__lp_src_dot_ins_6a75;
static VALUE sy_Detect_Switch_bind_lb_1_rb_;
static VALUE sy_Detect_Switch_bind_lb_1_rb__eq__7b3d;
static VALUE sy_Detect_Switch_bind_lb_2_rb__eq__0b39;
static VALUE sy_Detect_Switch_bind_lb_2_rb__lt__9f51;
static VALUE sy_Detect_Switch_bind_lb_5_rb__lt__1671;
static VALUE sy_Detect_Switch_bind_lb_6_rb__eq__2cd6;
static VALUE sy_Detect_Switch_if_sp_bind_lb__f1e9;
static VALUE sy_Detect_Switch_nary_eq_bin_3073;
static VALUE sy_Detect_Switch_s_eq_Switch_8871;
static VALUE sy_Detect_Switch_src_25d9;
static VALUE sy_Detect_Switch_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_src_dot_rule_d270;
static VALUE sy_first;
VALUE Detect_Switch_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDetect_First1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_Switch__at_name_eq_sr_362f,1,bind); it=rb_funcall(self,sy_Detect_Switch__do_rules_eq__le__ab16,1,bind); it=rb_funcall(self,sy_Detect_Switch_src_dot_rule_5acf,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp__7352,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=rb_funcall(self,sy_Detect_Switch_src_dot_rule_d270,1,bind); it=rb_funcall(self,sy_Detect_Switch_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,10/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Detect_Switch__append_lp__b494,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_predicate(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(19); bind_aset(bind,0/*chr*/,a0);bind_aset(bind,1/*p*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_Detect_Switch__lp_bind_lb_0_rb__2cee,1,bind); FAILTEST(alt1_2);it=bind_aget(bind,1/*p*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_Detect_Switch__lp_,1,bind); FAILTEST(alt1_3);it=rb_funcall(self,sy_Detect_Switch_Placehol_6875,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*p*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,3/*autovar*/);ptr->len=1;
 unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDetect_Switch3,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,5/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*e*/,it);
 it=bind_aget(bind,0/*chr*/); arg0=it;it=bind_aget(bind,6/*e*/); arg1=it; it=Detect_Switch_predicate(self ,arg0,arg1); FAILTEST(break1); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp__31c3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,5/*autovar*/); bind_aset(bind,8/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Or_lb__ti_bind_d995,1,bind);  bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto pass1;
 accept2:;
 break;case 1:; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*e*/,it);
 it=bind_aget(bind,0/*chr*/); arg0=it;it=bind_aget(bind,6/*e*/); arg1=it; it=Detect_Switch_predicate(self ,arg0,arg1); FAILTEST(pass3); bind_aset(bind,12/*f*/,it);
it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp__473a,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,13/*autovar*/); bind_aset(bind,15/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Seq_lb__ti__lp__lb_b_c8d6,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_2;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto pass1;
 accept3:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=rb_funcall(self,sy_Detect_Switch_nary_eq_bin_3073,1,bind);  bind_aset(bind,18/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt4_2;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos6); goto pass1;
 accept4:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,10/*autovar*/,it);
 break;}  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_4;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Detect_Switch_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_split(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDetect_Switch1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_split(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*el*/,it);
 it=bind_aget(bind,3/*el*/); arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(alt1_3); bind_aset(bind,4/*f*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_cases_eq__at__ee05,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Detect_Switch_split(self ); FAILTEST(break1); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp__d472,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,6/*autovar*/); bind_aset(bind,8/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,3/*el*/,it);
 it=bind_aget(bind,3/*el*/); arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(alt2_3); bind_aset(bind,4/*f*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_cases_eq__at__ee05,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;case 2:; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Detect_Switch_split(self ); FAILTEST(break2); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,3/*el*/,it);
 it=bind_aget(bind,3/*el*/); arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(alt3_3); bind_aset(bind,4/*f*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_cases_eq__at__ee05,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*el*/,it);
 it=bind_aget(bind,3/*el*/); arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(fail); bind_aset(bind,4/*f*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_cases_eq__at__ee05,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;}it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Detect_Switch__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Detect_Switch_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Detect_Switch__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_changed_b885,1,bind);   it=Detect_Switch_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Detect_Switch__lp_bind_lb_2_rb__6693,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break2;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_Detect_Switch_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashTraverser_Clone21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Switch_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Switch_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Detect_Switch_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_Detect_Switch_bind_lb_5_rb__lt__1671,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_3;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;case 2:; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Switch_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=c_Or; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_Switch_CharLatt_66f5,1,bind);  bind_aset(bind,1/*ary2*/,it);
it=rb_ary_new3(0); bind_aset(bind,2/*ary3*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*els*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=Detect_Switch_traverse_item(self ); FAILTEST(break1); bind_aset(bind,4/*e*/,it);
it=rb_funcall(self,sy_Detect_Switch__lp_first_lp_b_1c32,1,bind); FAILTEST(break1);it=bind_aget(bind,4/*e*/); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp__6adb,1,bind); it=rb_funcall(self,sy_Detect_Switch_bind_lb_1_rb_,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); int oldpos2=ame_getpos(self);
   it=Amethyst_eof(self ); FAILTEST(reject1); x=1; goto accept1;  reject1: x=0; accept1: it=Qnil; ame_setpos(self,oldpos2); if (x==0) goto pass1;it=bind_aget(bind,1/*ary2*/); bind_aset(bind,6/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_bind_lb_1_rb__eq__7b3d,1,bind); it=rb_funcall(self,sy_Detect_Switch__lp_bind_lb_1_rb__a6f6,1,bind); FAILTEST(pass1);it=rb_funcall(self,sy_Detect_Switch_Or_lb__ti_bind_ffe5,1,bind);  bind_aset(bind,7/*new_or*/,it);
it=rb_funcall(self,sy_Detect_Switch__lp_bind_lb_7_rb__a3be,1,bind); FAILTEST(pass1);it=rb_funcall(self,sy_Detect_Switch_bind_lb_6_rb__eq__2cd6,1,bind); it=rb_funcall(self,sy_Detect_Switch__at_cases_eq__lb__023f,1,bind); it=bind_aget(bind,7/*new_or*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,8/*autovar*/);ptr->len=1;
   it=Detect_Switch_split(self ); FAILTEST(pass2);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=rb_funcall(self,sy_Detect_Switch__at_cases_dot_e_04b0,1,bind); it=rb_funcall(self,sy_Detect_Switch_bind_lb_2_rb__eq__0b39,1,bind); it=rb_funcall(self,sy_Detect_Switch_bind_lb_2_rb__lt__9f51,1,bind); it=rb_funcall(self,sy_Detect_Switch__lp_bind_lb_2_rb__8459,1,bind); FAILTEST(pass1);it=rb_funcall(self,sy_Detect_Switch_s_eq_Switch_8871,1,bind);  bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*_result*/,it);
it=bind_aget(bind,10/*_result*/);
return it;
fail: return failobj; }VALUE cls_Detect_ClasSwitch;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Detect_ClasSwitch_itrans(VALUE self );
VALUE Detect_ClasSwitch_predicate(VALUE self ,VALUE a0,VALUE a1,VALUE a2);
VALUE Detect_ClasSwitch_predicate(VALUE self ,VALUE,VALUE,VALUE);
VALUE Detect_ClasSwitch_root(VALUE self );
VALUE Detect_ClasSwitch_traverse(VALUE self );
VALUE Detect_ClasSwitch_traverse_item(VALUE self );
VALUE Detect_ClasSwitch_visit(VALUE self );
VALUE switchhashDetect_ClasSwitch2;
VALUE switchhashDetect_First1;
VALUE switchhashTraverser_Clone21;
static VALUE c_CAct;
static VALUE c_Or;
static VALUE c_Rule;
static VALUE sy_Detect_ClasSwitch_Apply_lb__dq_a_eeac;
static VALUE sy_Detect_ClasSwitch_Bind_lb_bin_90e6;
static VALUE sy_Detect_ClasSwitch_ClasLatt_1dca;
static VALUE sy_Detect_ClasSwitch_Or_lb__ti_bind_c8d4;
static VALUE sy_Detect_ClasSwitch_Or_lb__ti_bind_ffe5;
static VALUE sy_Detect_ClasSwitch_Placehol_6875;
static VALUE sy_Detect_ClasSwitch_Seq_lb__ti__lp__lb_b_f88d;
static VALUE sy_Detect_ClasSwitch__append_lp__6adb;
static VALUE sy_Detect_ClasSwitch__append_lp__7352;
static VALUE sy_Detect_ClasSwitch__append_lp__89bf;
static VALUE sy_Detect_ClasSwitch__append_lp__b068;
static VALUE sy_Detect_ClasSwitch__append_lp__b494;
static VALUE sy_Detect_ClasSwitch__at_changed_5352;
static VALUE sy_Detect_ClasSwitch__at_changed_b885;
static VALUE sy_Detect_ClasSwitch__at_changed_c681;
static VALUE sy_Detect_ClasSwitch__at_name_eq_sr_362f;
static VALUE sy_Detect_ClasSwitch__do_rules_eq__le__ab16;
static VALUE sy_Detect_ClasSwitch__lp_;
static VALUE sy_Detect_ClasSwitch__lp_bind_lb_0_rb__30a7;
static VALUE sy_Detect_ClasSwitch__lp_bind_lb_1_rb__a6f6;
static VALUE sy_Detect_ClasSwitch__lp_bind_lb_2_rb__6693;
static VALUE sy_Detect_ClasSwitch__lp_bind_lb_6_rb__4b40;
static VALUE sy_Detect_ClasSwitch__lp_child_lp_b_8f81;
static VALUE sy_Detect_ClasSwitch__lp_first_lp_b_1c32;
static VALUE sy_Detect_ClasSwitch__lp_src_dot_ins_6a75;
static VALUE sy_Detect_ClasSwitch_bind_lb_1_rb_;
static VALUE sy_Detect_ClasSwitch_bind_lb_1_rb__dot__cd74;
static VALUE sy_Detect_ClasSwitch_bind_lb_1_rb__eq__bfd4;
static VALUE sy_Detect_ClasSwitch_bind_lb_2_rb__eq__6851;
static VALUE sy_Detect_ClasSwitch_bind_lb_2_rb__eq__b94b;
static VALUE sy_Detect_ClasSwitch_bind_lb_2_rb__eq__dbd4;
static VALUE sy_Detect_ClasSwitch_bind_lb_5_rb__lt__1671;
static VALUE sy_Detect_ClasSwitch_c_eq_classs_1d9a;
static VALUE sy_Detect_ClasSwitch_if_sp_bind_lb__f1e9;
static VALUE sy_Detect_ClasSwitch_predicat_fb16;
static VALUE sy_Detect_ClasSwitch_src_25d9;
static VALUE sy_Detect_ClasSwitch_src_dot_name_80f3;
static VALUE sy_Detect_ClasSwitch_src_dot_rule_5acf;
static VALUE sy_Detect_ClasSwitch_src_dot_rule_d270;
VALUE Detect_ClasSwitch_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDetect_First1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_ClasSwitch__at_name_eq_sr_362f,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch__do_rules_eq__le__ab16,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_src_dot_rule_5acf,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_ClasSwitch_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp__7352,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=rb_funcall(self,sy_Detect_ClasSwitch_src_dot_rule_d270,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,10/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp__b494,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_predicate(VALUE self ,VALUE a0,VALUE a1,VALUE a2){VALUE vals[3]; VALUE bind=bind_new2(27); bind_aset(bind,0/*clas*/,a0);bind_aset(bind,1/*i*/,a1);bind_aset(bind,2/*p*/,a2); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_Detect_ClasSwitch__lp_bind_lb_0_rb__30a7,1,bind); FAILTEST(alt1_2);it=bind_aget(bind,2/*p*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_Detect_ClasSwitch__lp_,1,bind); FAILTEST(alt1_3);it=rb_funcall(self,sy_Detect_ClasSwitch_Placehol_6875,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,2/*p*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
 unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDetect_ClasSwitch2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,6/*name*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__lp_bind_lb_6_rb__4b40,1,bind); FAILTEST(pass2); it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,8/*match*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
it=rb_funcall(self,sy_Detect_ClasSwitch__lp_child_lp_b_8f81,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_Detect_ClasSwitch_Apply_lb__dq_a_eeac,1,bind);  bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto pass1;
 accept2:;
 break;case 1:; int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_ClasSwitch_src_dot_name_80f3,1,bind);  bind_aset(bind,6/*name*/,it);
  it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,12/*exp*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_predicat_fb16,1,bind);  bind_aset(bind,13/*expr*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_Bind_lb_bin_90e6,1,bind);  bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt3_2;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto pass1;
 accept3:;
 break;case 2:; int oldpos4=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,16/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,17/*e*/,it);
 it=bind_aget(bind,0/*clas*/); arg0=it;it=bind_aget(bind,1/*i*/); arg1=it;it=bind_aget(bind,17/*e*/); arg2=it; it=Detect_ClasSwitch_predicate(self ,arg0,arg1,arg2); FAILTEST(break1); bind_aset(bind,18/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp__b068,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,16/*autovar*/); bind_aset(bind,19/*ary*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_Or_lb__ti_bind_c8d4,1,bind);  bind_aset(bind,20/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt4_2;
it=bind_aget(bind,20/*autovar*/); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos4); goto pass1;
 accept4:;
 break;case 3:; int oldpos6=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,21/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,21/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,17/*e*/,it);
 it=bind_aget(bind,0/*clas*/); arg0=it;it=bind_aget(bind,1/*i*/); arg1=it;it=bind_aget(bind,17/*e*/); arg2=it; it=Detect_ClasSwitch_predicate(self ,arg0,arg1,arg2); FAILTEST(pass6); bind_aset(bind,22/*f*/,it);
it=rb_ary_new3(0); bind_aset(bind,23/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,24/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp__89bf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,23/*autovar*/); bind_aset(bind,25/*rest*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_Seq_lb__ti__lp__lb_b_f88d,1,bind);  bind_aset(bind,26/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt5_2;
it=bind_aget(bind,26/*autovar*/); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos6); goto pass1;
 accept5:;
 break;case 4:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,10/*autovar*/,it);
 break;}  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_4;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Detect_ClasSwitch_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Detect_ClasSwitch__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__at_changed_b885,1,bind);   it=Detect_ClasSwitch_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__lp_bind_lb_2_rb__6693,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break2;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_Detect_ClasSwitch_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashTraverser_Clone21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_ClasSwitch_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_ClasSwitch_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_ClasSwitch_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Detect_ClasSwitch_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_5_rb__lt__1671,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_3;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;case 2:; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_ClasSwitch_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=c_Or; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_ClasSwitch_ClasLatt_1dca,1,bind);  bind_aset(bind,1/*ary2*/,it);
it=rb_ary_new3(0); bind_aset(bind,2/*ary3*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*els*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=Detect_ClasSwitch_traverse_item(self ); FAILTEST(break1); bind_aset(bind,4/*e*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__lp_first_lp_b_1c32,1,bind); FAILTEST(break1);it=bind_aget(bind,4/*e*/); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp__6adb,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_1_rb_,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); int oldpos2=ame_getpos(self);
   it=Amethyst_eof(self ); FAILTEST(reject1); x=1; goto accept1;  reject1: x=0; accept1: it=Qnil; ame_setpos(self,oldpos2); if (x==0) goto pass1;it=bind_aget(bind,1/*ary2*/); bind_aset(bind,6/*firs*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_1_rb__eq__bfd4,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch__lp_bind_lb_1_rb__a6f6,1,bind); FAILTEST(pass1);it=rb_funcall(self,sy_Detect_ClasSwitch_Or_lb__ti_bind_ffe5,1,bind);  bind_aset(bind,7/*new_or*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_1_rb__dot__cd74,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_2_rb__eq__b94b,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_2_rb__eq__6851,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_2_rb__eq__dbd4,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_c_eq_classs_1d9a,1,bind);  bind_aset(bind,8/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
void Init_detect_switch_c(){ 
 cls_First_Dataflow=rb_define_class("First_Dataflow",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
switchhashFirst_Dataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow1);
switchhashFirst_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Cut\nnext h[k]=4 if k<=Local\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Seq\nnext h[k]=9 if k<=Stop\nnext h[k]=10 if k<=Switch\nnext h[k]=11 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow2);
sy_First_Dataflow__append_lp__473a=rb_intern("First_Dataflow__append_lp__473a");
sy_First_Dataflow__append_lp__89bf=rb_intern("First_Dataflow__append_lp__89bf");
sy_First_Dataflow__append_lp__b494=rb_intern("First_Dataflow__append_lp__b494");
sy_First_Dataflow__at_vis_eq_bin_af53=rb_intern("First_Dataflow__at_vis_eq_bin_af53");
sy_First_Dataflow__lp_=rb_intern("First_Dataflow__lp_");
sy_First_Dataflow__lp_bind_lb_9_rb__9f2a=rb_intern("First_Dataflow__lp_bind_lb_9_rb__9f2a");
sy_First_Dataflow__lp_src_dot_fir_1e1a=rb_intern("First_Dataflow__lp_src_dot_fir_1e1a");
sy_First_Dataflow_bind_lb_0_rb__dot__b660=rb_intern("First_Dataflow_bind_lb_0_rb__dot__b660");
sy_First_Dataflow_bind_lb_15_rb__dd25=rb_intern("First_Dataflow_bind_lb_15_rb__dd25");
sy_First_Dataflow_bind_lb_20_rb__1677=rb_intern("First_Dataflow_bind_lb_20_rb__1677");
sy_First_Dataflow_bind_lb_20_rb__ee36=rb_intern("First_Dataflow_bind_lb_20_rb__ee36");
sy_First_Dataflow_depends_lp__b4cd=rb_intern("First_Dataflow_depends_lp__b4cd");
sy_First_Dataflow_lattice_dot__2c4f=rb_intern("First_Dataflow_lattice_dot__2c4f");
sy_First_Dataflow_lattice_dot__2ce9=rb_intern("First_Dataflow_lattice_dot__2ce9");
sy_First_Dataflow_puts_sp__dq__sh__le__1220=rb_intern("First_Dataflow_puts_sp__dq__sh__le__1220");
sy_First_Dataflow_src_dot_firs_8482=rb_intern("First_Dataflow_src_dot_firs_8482");
sy_analyze=rb_intern("analyze");
rb_define_method(cls_First_Dataflow,"first",First_Dataflow_first,0);
rb_define_method(cls_First_Dataflow,"getvalue",First_Dataflow_getvalue,1);
rb_define_method(cls_First_Dataflow,"root",First_Dataflow_root,0);
rb_define_method(cls_First_Dataflow,"value",First_Dataflow_value,0);

 cls_Sizes_Dataflow=rb_define_class("Sizes_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
switchhashFirst_Dataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow1);
switchhashFirst_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Cut\nnext h[k]=4 if k<=Local\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Seq\nnext h[k]=9 if k<=Stop\nnext h[k]=10 if k<=Switch\nnext h[k]=11 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow2);
switchhashSizes_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSizes_Dataflow2);
switchhashSizes_Dataflow3=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSizes_Dataflow3);
sy_Sizes_Dataflow_Compiler_f995=rb_intern("Sizes_Dataflow_Compiler_f995");
sy_Sizes_Dataflow__append_lp__473a=rb_intern("Sizes_Dataflow__append_lp__473a");
sy_Sizes_Dataflow__append_lp__89bf=rb_intern("Sizes_Dataflow__append_lp__89bf");
sy_Sizes_Dataflow__append_lp__b494=rb_intern("Sizes_Dataflow__append_lp__b494");
sy_Sizes_Dataflow__at_vis_eq_bin_af53=rb_intern("Sizes_Dataflow__at_vis_eq_bin_af53");
sy_Sizes_Dataflow__lp_=rb_intern("Sizes_Dataflow__lp_");
sy_Sizes_Dataflow__lp_Compile_b85e=rb_intern("Sizes_Dataflow__lp_Compile_b85e");
sy_Sizes_Dataflow__lp_bind_lb_9_rb__9f2a=rb_intern("Sizes_Dataflow__lp_bind_lb_9_rb__9f2a");
sy_Sizes_Dataflow__lp_src_dot_fir_1e1a=rb_intern("Sizes_Dataflow__lp_src_dot_fir_1e1a");
sy_Sizes_Dataflow_bind_lb_0_rb__dot__b660=rb_intern("Sizes_Dataflow_bind_lb_0_rb__dot__b660");
sy_Sizes_Dataflow_bind_lb_15_rb__dd25=rb_intern("Sizes_Dataflow_bind_lb_15_rb__dd25");
sy_Sizes_Dataflow_bind_lb_20_rb__1677=rb_intern("Sizes_Dataflow_bind_lb_20_rb__1677");
sy_Sizes_Dataflow_bind_lb_20_rb__ee36=rb_intern("Sizes_Dataflow_bind_lb_20_rb__ee36");
sy_Sizes_Dataflow_lattice_dot__2c4f=rb_intern("Sizes_Dataflow_lattice_dot__2c4f");
sy_Sizes_Dataflow_lattice_dot__2ce9=rb_intern("Sizes_Dataflow_lattice_dot__2ce9");
sy_Sizes_Dataflow_lattice_lb__4678=rb_intern("Sizes_Dataflow_lattice_lb__4678");
sy_Sizes_Dataflow_lattice_lb__fdee=rb_intern("Sizes_Dataflow_lattice_lb__fdee");
sy_Sizes_Dataflow_puts_sp__dq__sh__le__1220=rb_intern("Sizes_Dataflow_puts_sp__dq__sh__le__1220");
sy_Sizes_Dataflow_src_dot_firs_8482=rb_intern("Sizes_Dataflow_src_dot_firs_8482");
rb_define_method(cls_Sizes_Dataflow,"first",Sizes_Dataflow_first,0);
rb_define_method(cls_Sizes_Dataflow,"first_Sizes_Dataflow",Sizes_Dataflow_first_Sizes_Dataflow,0);
rb_define_method(cls_Sizes_Dataflow,"getvalue",Sizes_Dataflow_getvalue,1);

 cls_Switch_Dataflow=rb_define_class("Switch_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
c_Act=rb_const_get(rb_cObject, rb_intern("Act"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Act);
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
switchhashFirst_Dataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow1);
switchhashFirst_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Cut\nnext h[k]=4 if k<=Local\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Seq\nnext h[k]=9 if k<=Stop\nnext h[k]=10 if k<=Switch\nnext h[k]=11 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow2);
switchhashSwitch_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSwitch_Dataflow2);
switchhashSwitch_Dataflow3=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSwitch_Dataflow3);
sy_Switch_Dataflow_Compiler_8ba0=rb_intern("Switch_Dataflow_Compiler_8ba0");
sy_Switch_Dataflow__append_lp__473a=rb_intern("Switch_Dataflow__append_lp__473a");
sy_Switch_Dataflow__append_lp__89bf=rb_intern("Switch_Dataflow__append_lp__89bf");
sy_Switch_Dataflow__append_lp__b494=rb_intern("Switch_Dataflow__append_lp__b494");
sy_Switch_Dataflow__at_vis_eq_bin_af53=rb_intern("Switch_Dataflow__at_vis_eq_bin_af53");
sy_Switch_Dataflow__lp_=rb_intern("Switch_Dataflow__lp_");
sy_Switch_Dataflow__lp_Compile_8180=rb_intern("Switch_Dataflow__lp_Compile_8180");
sy_Switch_Dataflow__lp_bind_lb_9_rb__9f2a=rb_intern("Switch_Dataflow__lp_bind_lb_9_rb__9f2a");
sy_Switch_Dataflow__lp_src_dot_fir_1e1a=rb_intern("Switch_Dataflow__lp_src_dot_fir_1e1a");
sy_Switch_Dataflow_bind_lb_0_rb__dot__b660=rb_intern("Switch_Dataflow_bind_lb_0_rb__dot__b660");
sy_Switch_Dataflow_bind_lb_15_rb__dd25=rb_intern("Switch_Dataflow_bind_lb_15_rb__dd25");
sy_Switch_Dataflow_bind_lb_20_rb__1677=rb_intern("Switch_Dataflow_bind_lb_20_rb__1677");
sy_Switch_Dataflow_bind_lb_20_rb__ee36=rb_intern("Switch_Dataflow_bind_lb_20_rb__ee36");
sy_Switch_Dataflow_firstcha_c300=rb_intern("Switch_Dataflow_firstcha_c300");
sy_Switch_Dataflow_lattice_dot__2c4f=rb_intern("Switch_Dataflow_lattice_dot__2c4f");
sy_Switch_Dataflow_lattice_dot__2ce9=rb_intern("Switch_Dataflow_lattice_dot__2ce9");
sy_Switch_Dataflow_lattice_dot__e0e5=rb_intern("Switch_Dataflow_lattice_dot__e0e5");
sy_Switch_Dataflow_puts_sp__dq__sh__le__1220=rb_intern("Switch_Dataflow_puts_sp__dq__sh__le__1220");
sy_Switch_Dataflow_regchar_lp__9b27=rb_intern("Switch_Dataflow_regchar_lp__9b27");
sy_Switch_Dataflow_src_dot_firs_8482=rb_intern("Switch_Dataflow_src_dot_firs_8482");
rb_define_method(cls_Switch_Dataflow,"first",Switch_Dataflow_first,0);
rb_define_method(cls_Switch_Dataflow,"first_Switch_Dataflow",Switch_Dataflow_first_Switch_Dataflow,0);
rb_define_method(cls_Switch_Dataflow,"getvalue",Switch_Dataflow_getvalue,1);

 cls_ClasSwitch_Dataflow=rb_define_class("ClasSwitch_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
switchhashClasSwitch_Dataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashClasSwitch_Dataflow1);
switchhashFirst_Dataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow1);
switchhashFirst_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Cut\nnext h[k]=4 if k<=Local\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Seq\nnext h[k]=9 if k<=Stop\nnext h[k]=10 if k<=Switch\nnext h[k]=11 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow2);
sy_ClasSwitch_Dataflow_Compiler_3aee=rb_intern("ClasSwitch_Dataflow_Compiler_3aee");
sy_ClasSwitch_Dataflow__append_lp__473a=rb_intern("ClasSwitch_Dataflow__append_lp__473a");
sy_ClasSwitch_Dataflow__append_lp__89bf=rb_intern("ClasSwitch_Dataflow__append_lp__89bf");
sy_ClasSwitch_Dataflow__append_lp__b494=rb_intern("ClasSwitch_Dataflow__append_lp__b494");
sy_ClasSwitch_Dataflow__at_vis_eq_bin_af53=rb_intern("ClasSwitch_Dataflow__at_vis_eq_bin_af53");
sy_ClasSwitch_Dataflow__lp_=rb_intern("ClasSwitch_Dataflow__lp_");
sy_ClasSwitch_Dataflow__lp_Compile_aae6=rb_intern("ClasSwitch_Dataflow__lp_Compile_aae6");
sy_ClasSwitch_Dataflow__lp_bind_lb_9_rb__9f2a=rb_intern("ClasSwitch_Dataflow__lp_bind_lb_9_rb__9f2a");
sy_ClasSwitch_Dataflow__lp_src_dot_fir_1e1a=rb_intern("ClasSwitch_Dataflow__lp_src_dot_fir_1e1a");
sy_ClasSwitch_Dataflow_bind_lb_0_rb__dot__b660=rb_intern("ClasSwitch_Dataflow_bind_lb_0_rb__dot__b660");
sy_ClasSwitch_Dataflow_bind_lb_15_rb__dd25=rb_intern("ClasSwitch_Dataflow_bind_lb_15_rb__dd25");
sy_ClasSwitch_Dataflow_bind_lb_20_rb__1677=rb_intern("ClasSwitch_Dataflow_bind_lb_20_rb__1677");
sy_ClasSwitch_Dataflow_bind_lb_20_rb__ee36=rb_intern("ClasSwitch_Dataflow_bind_lb_20_rb__ee36");
sy_ClasSwitch_Dataflow_lattice_dot__2c4f=rb_intern("ClasSwitch_Dataflow_lattice_dot__2c4f");
sy_ClasSwitch_Dataflow_lattice_dot__2ce9=rb_intern("ClasSwitch_Dataflow_lattice_dot__2ce9");
sy_ClasSwitch_Dataflow_lattice_lb__cb21=rb_intern("ClasSwitch_Dataflow_lattice_lb__cb21");
sy_ClasSwitch_Dataflow_puts_sp__dq__sh__le__1220=rb_intern("ClasSwitch_Dataflow_puts_sp__dq__sh__le__1220");
sy_ClasSwitch_Dataflow_src_dot_firs_8482=rb_intern("ClasSwitch_Dataflow_src_dot_firs_8482");
rb_define_method(cls_ClasSwitch_Dataflow,"first",ClasSwitch_Dataflow_first,0);
rb_define_method(cls_ClasSwitch_Dataflow,"first_ClasSwitch_Dataflow",ClasSwitch_Dataflow_first_ClasSwitch_Dataflow,0);
rb_define_method(cls_ClasSwitch_Dataflow,"getvalue",ClasSwitch_Dataflow_getvalue,1);

 cls_Detect_First=rb_define_class("Detect_First",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
switchhashDetect_First1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_First1);
sy_Detect_First__append_lp__7352=rb_intern("Detect_First__append_lp__7352");
sy_Detect_First__append_lp__b494=rb_intern("Detect_First__append_lp__b494");
sy_Detect_First__at_name_eq_sr_362f=rb_intern("Detect_First__at_name_eq_sr_362f");
sy_Detect_First__do_rules_eq__le__ab16=rb_intern("Detect_First__do_rules_eq__le__ab16");
sy_Detect_First_src_25d9=rb_intern("Detect_First_src_25d9");
sy_Detect_First_src_dot_rule_5acf=rb_intern("Detect_First_src_dot_rule_5acf");
sy_Detect_First_src_dot_rule_d270=rb_intern("Detect_First_src_dot_rule_d270");
rb_define_method(cls_Detect_First,"itrans",Detect_First_itrans,0);
rb_define_method(cls_Detect_First,"root",Detect_First_root,0);

 cls_Detect_Switch=rb_define_class("Detect_Switch",rb_const_get(rb_cObject,rb_intern("Detect_First"))); 
failobj=rb_eval_string("FAIL");
c_Or=rb_const_get(rb_cObject, rb_intern("Or"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Or);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
switchhashDetect_First1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_First1);
switchhashDetect_Switch1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_Switch1);
switchhashDetect_Switch3=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Or\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Switch\nnext h[k]=3 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_Switch3);
switchhashTraverser_Clone21=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashTraverser_Clone21);
sy_Detect_Switch_CharLatt_66f5=rb_intern("Detect_Switch_CharLatt_66f5");
sy_Detect_Switch_Or_lb__ti_bind_d995=rb_intern("Detect_Switch_Or_lb__ti_bind_d995");
sy_Detect_Switch_Or_lb__ti_bind_ffe5=rb_intern("Detect_Switch_Or_lb__ti_bind_ffe5");
sy_Detect_Switch_Placehol_6875=rb_intern("Detect_Switch_Placehol_6875");
sy_Detect_Switch_Seq_lb__ti__lp__lb_b_c8d6=rb_intern("Detect_Switch_Seq_lb__ti__lp__lb_b_c8d6");
sy_Detect_Switch__append_lp__31c3=rb_intern("Detect_Switch__append_lp__31c3");
sy_Detect_Switch__append_lp__473a=rb_intern("Detect_Switch__append_lp__473a");
sy_Detect_Switch__append_lp__6adb=rb_intern("Detect_Switch__append_lp__6adb");
sy_Detect_Switch__append_lp__7352=rb_intern("Detect_Switch__append_lp__7352");
sy_Detect_Switch__append_lp__9ca5=rb_intern("Detect_Switch__append_lp__9ca5");
sy_Detect_Switch__append_lp__b494=rb_intern("Detect_Switch__append_lp__b494");
sy_Detect_Switch__append_lp__d472=rb_intern("Detect_Switch__append_lp__d472");
sy_Detect_Switch__at_cases_dot_e_04b0=rb_intern("Detect_Switch__at_cases_dot_e_04b0");
sy_Detect_Switch__at_cases_eq__at__ee05=rb_intern("Detect_Switch__at_cases_eq__at__ee05");
sy_Detect_Switch__at_cases_eq__lb__023f=rb_intern("Detect_Switch__at_cases_eq__lb__023f");
sy_Detect_Switch__at_changed_5352=rb_intern("Detect_Switch__at_changed_5352");
sy_Detect_Switch__at_changed_b885=rb_intern("Detect_Switch__at_changed_b885");
sy_Detect_Switch__at_changed_c681=rb_intern("Detect_Switch__at_changed_c681");
sy_Detect_Switch__at_name_eq_sr_362f=rb_intern("Detect_Switch__at_name_eq_sr_362f");
sy_Detect_Switch__do_rules_eq__le__ab16=rb_intern("Detect_Switch__do_rules_eq__le__ab16");
sy_Detect_Switch__lp_=rb_intern("Detect_Switch__lp_");
sy_Detect_Switch__lp_bind_lb_0_rb__2cee=rb_intern("Detect_Switch__lp_bind_lb_0_rb__2cee");
sy_Detect_Switch__lp_bind_lb_1_rb__a6f6=rb_intern("Detect_Switch__lp_bind_lb_1_rb__a6f6");
sy_Detect_Switch__lp_bind_lb_2_rb__6693=rb_intern("Detect_Switch__lp_bind_lb_2_rb__6693");
sy_Detect_Switch__lp_bind_lb_2_rb__8459=rb_intern("Detect_Switch__lp_bind_lb_2_rb__8459");
sy_Detect_Switch__lp_bind_lb_7_rb__a3be=rb_intern("Detect_Switch__lp_bind_lb_7_rb__a3be");
sy_Detect_Switch__lp_first_lp_b_1c32=rb_intern("Detect_Switch__lp_first_lp_b_1c32");
sy_Detect_Switch__lp_src_dot_ins_6a75=rb_intern("Detect_Switch__lp_src_dot_ins_6a75");
sy_Detect_Switch_bind_lb_1_rb_=rb_intern("Detect_Switch_bind_lb_1_rb_");
sy_Detect_Switch_bind_lb_1_rb__eq__7b3d=rb_intern("Detect_Switch_bind_lb_1_rb__eq__7b3d");
sy_Detect_Switch_bind_lb_2_rb__eq__0b39=rb_intern("Detect_Switch_bind_lb_2_rb__eq__0b39");
sy_Detect_Switch_bind_lb_2_rb__lt__9f51=rb_intern("Detect_Switch_bind_lb_2_rb__lt__9f51");
sy_Detect_Switch_bind_lb_5_rb__lt__1671=rb_intern("Detect_Switch_bind_lb_5_rb__lt__1671");
sy_Detect_Switch_bind_lb_6_rb__eq__2cd6=rb_intern("Detect_Switch_bind_lb_6_rb__eq__2cd6");
sy_Detect_Switch_if_sp_bind_lb__f1e9=rb_intern("Detect_Switch_if_sp_bind_lb__f1e9");
sy_Detect_Switch_nary_eq_bin_3073=rb_intern("Detect_Switch_nary_eq_bin_3073");
sy_Detect_Switch_s_eq_Switch_8871=rb_intern("Detect_Switch_s_eq_Switch_8871");
sy_Detect_Switch_src_25d9=rb_intern("Detect_Switch_src_25d9");
sy_Detect_Switch_src_dot_rule_5acf=rb_intern("Detect_Switch_src_dot_rule_5acf");
sy_Detect_Switch_src_dot_rule_d270=rb_intern("Detect_Switch_src_dot_rule_d270");
sy_first=rb_intern("first");
rb_define_method(cls_Detect_Switch,"itrans",Detect_Switch_itrans,0);
rb_define_method(cls_Detect_Switch,"predicate",Detect_Switch_predicate,2);
rb_define_method(cls_Detect_Switch,"root",Detect_Switch_root,0);
rb_define_method(cls_Detect_Switch,"split",Detect_Switch_split,0);
rb_define_method(cls_Detect_Switch,"traverse",Detect_Switch_traverse,0);
rb_define_method(cls_Detect_Switch,"traverse_item",Detect_Switch_traverse_item,0);
rb_define_method(cls_Detect_Switch,"visit",Detect_Switch_visit,0);

 cls_Detect_ClasSwitch=rb_define_class("Detect_ClasSwitch",rb_const_get(rb_cObject,rb_intern("Detect_First"))); 
failobj=rb_eval_string("FAIL");
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
c_Or=rb_const_get(rb_cObject, rb_intern("Or"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Or);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
switchhashDetect_ClasSwitch2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_ClasSwitch2);
switchhashDetect_First1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_First1);
switchhashTraverser_Clone21=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashTraverser_Clone21);
sy_Detect_ClasSwitch_Apply_lb__dq_a_eeac=rb_intern("Detect_ClasSwitch_Apply_lb__dq_a_eeac");
sy_Detect_ClasSwitch_Bind_lb_bin_90e6=rb_intern("Detect_ClasSwitch_Bind_lb_bin_90e6");
sy_Detect_ClasSwitch_ClasLatt_1dca=rb_intern("Detect_ClasSwitch_ClasLatt_1dca");
sy_Detect_ClasSwitch_Or_lb__ti_bind_c8d4=rb_intern("Detect_ClasSwitch_Or_lb__ti_bind_c8d4");
sy_Detect_ClasSwitch_Or_lb__ti_bind_ffe5=rb_intern("Detect_ClasSwitch_Or_lb__ti_bind_ffe5");
sy_Detect_ClasSwitch_Placehol_6875=rb_intern("Detect_ClasSwitch_Placehol_6875");
sy_Detect_ClasSwitch_Seq_lb__ti__lp__lb_b_f88d=rb_intern("Detect_ClasSwitch_Seq_lb__ti__lp__lb_b_f88d");
sy_Detect_ClasSwitch__append_lp__6adb=rb_intern("Detect_ClasSwitch__append_lp__6adb");
sy_Detect_ClasSwitch__append_lp__7352=rb_intern("Detect_ClasSwitch__append_lp__7352");
sy_Detect_ClasSwitch__append_lp__89bf=rb_intern("Detect_ClasSwitch__append_lp__89bf");
sy_Detect_ClasSwitch__append_lp__b068=rb_intern("Detect_ClasSwitch__append_lp__b068");
sy_Detect_ClasSwitch__append_lp__b494=rb_intern("Detect_ClasSwitch__append_lp__b494");
sy_Detect_ClasSwitch__at_changed_5352=rb_intern("Detect_ClasSwitch__at_changed_5352");
sy_Detect_ClasSwitch__at_changed_b885=rb_intern("Detect_ClasSwitch__at_changed_b885");
sy_Detect_ClasSwitch__at_changed_c681=rb_intern("Detect_ClasSwitch__at_changed_c681");
sy_Detect_ClasSwitch__at_name_eq_sr_362f=rb_intern("Detect_ClasSwitch__at_name_eq_sr_362f");
sy_Detect_ClasSwitch__do_rules_eq__le__ab16=rb_intern("Detect_ClasSwitch__do_rules_eq__le__ab16");
sy_Detect_ClasSwitch__lp_=rb_intern("Detect_ClasSwitch__lp_");
sy_Detect_ClasSwitch__lp_bind_lb_0_rb__30a7=rb_intern("Detect_ClasSwitch__lp_bind_lb_0_rb__30a7");
sy_Detect_ClasSwitch__lp_bind_lb_1_rb__a6f6=rb_intern("Detect_ClasSwitch__lp_bind_lb_1_rb__a6f6");
sy_Detect_ClasSwitch__lp_bind_lb_2_rb__6693=rb_intern("Detect_ClasSwitch__lp_bind_lb_2_rb__6693");
sy_Detect_ClasSwitch__lp_bind_lb_6_rb__4b40=rb_intern("Detect_ClasSwitch__lp_bind_lb_6_rb__4b40");
sy_Detect_ClasSwitch__lp_child_lp_b_8f81=rb_intern("Detect_ClasSwitch__lp_child_lp_b_8f81");
sy_Detect_ClasSwitch__lp_first_lp_b_1c32=rb_intern("Detect_ClasSwitch__lp_first_lp_b_1c32");
sy_Detect_ClasSwitch__lp_src_dot_ins_6a75=rb_intern("Detect_ClasSwitch__lp_src_dot_ins_6a75");
sy_Detect_ClasSwitch_bind_lb_1_rb_=rb_intern("Detect_ClasSwitch_bind_lb_1_rb_");
sy_Detect_ClasSwitch_bind_lb_1_rb__dot__cd74=rb_intern("Detect_ClasSwitch_bind_lb_1_rb__dot__cd74");
sy_Detect_ClasSwitch_bind_lb_1_rb__eq__bfd4=rb_intern("Detect_ClasSwitch_bind_lb_1_rb__eq__bfd4");
sy_Detect_ClasSwitch_bind_lb_2_rb__eq__6851=rb_intern("Detect_ClasSwitch_bind_lb_2_rb__eq__6851");
sy_Detect_ClasSwitch_bind_lb_2_rb__eq__b94b=rb_intern("Detect_ClasSwitch_bind_lb_2_rb__eq__b94b");
sy_Detect_ClasSwitch_bind_lb_2_rb__eq__dbd4=rb_intern("Detect_ClasSwitch_bind_lb_2_rb__eq__dbd4");
sy_Detect_ClasSwitch_bind_lb_5_rb__lt__1671=rb_intern("Detect_ClasSwitch_bind_lb_5_rb__lt__1671");
sy_Detect_ClasSwitch_c_eq_classs_1d9a=rb_intern("Detect_ClasSwitch_c_eq_classs_1d9a");
sy_Detect_ClasSwitch_if_sp_bind_lb__f1e9=rb_intern("Detect_ClasSwitch_if_sp_bind_lb__f1e9");
sy_Detect_ClasSwitch_predicat_fb16=rb_intern("Detect_ClasSwitch_predicat_fb16");
sy_Detect_ClasSwitch_src_25d9=rb_intern("Detect_ClasSwitch_src_25d9");
sy_Detect_ClasSwitch_src_dot_name_80f3=rb_intern("Detect_ClasSwitch_src_dot_name_80f3");
sy_Detect_ClasSwitch_src_dot_rule_5acf=rb_intern("Detect_ClasSwitch_src_dot_rule_5acf");
sy_Detect_ClasSwitch_src_dot_rule_d270=rb_intern("Detect_ClasSwitch_src_dot_rule_d270");
rb_define_method(cls_Detect_ClasSwitch,"itrans",Detect_ClasSwitch_itrans,0);
rb_define_method(cls_Detect_ClasSwitch,"predicate",Detect_ClasSwitch_predicate,3);
rb_define_method(cls_Detect_ClasSwitch,"root",Detect_ClasSwitch_root,0);
rb_define_method(cls_Detect_ClasSwitch,"traverse",Detect_ClasSwitch_traverse,0);
rb_define_method(cls_Detect_ClasSwitch,"traverse_item",Detect_ClasSwitch_traverse_item,0);
rb_define_method(cls_Detect_ClasSwitch,"visit",Detect_ClasSwitch_visit,0);
 rb_eval_string("testversiondetect_switch('67199632cf613bea524a6e155cccf33c')");}
