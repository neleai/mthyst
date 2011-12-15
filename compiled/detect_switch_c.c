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
static VALUE sy_First_Dataflow__append_lp_2;
static VALUE sy_First_Dataflow__append_lp_3;
static VALUE sy_First_Dataflow__append_lp_4;
static VALUE sy_First_Dataflow__append_lp_5;
static VALUE sy_First_Dataflow__append_lp_6;
static VALUE sy_First_Dataflow__append_lp_;
static VALUE sy_First_Dataflow__at_vis_eq_bin;
static VALUE sy_First_Dataflow__lp_src_dot_fir;
static VALUE sy_First_Dataflow_bind_lb_13_rb_;
static VALUE sy_First_Dataflow_bind_lb_1_rb__eq_;
static VALUE sy_First_Dataflow_bind_lb_20_rb_2;
static VALUE sy_First_Dataflow_bind_lb_20_rb_;
static VALUE sy_First_Dataflow_bind_lb_31_rb_;
static VALUE sy_First_Dataflow_depends_lp_;
static VALUE sy_First_Dataflow_empty;
static VALUE sy_First_Dataflow_lattice_dot_2;
static VALUE sy_First_Dataflow_lattice_dot_;
static VALUE sy_First_Dataflow_src_dot_firs;
static VALUE sy_analyze;
static VALUE sy_size;
static VALUE sy_stop;
VALUE First_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(37);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 11:;case 2:;case 3:;case 4:;case 7:;case 9:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr2=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp_,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,1/*autovar*/);it=rb_funcall(self,sy_First_Dataflow_lattice_dot_,1,bind);  bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_First_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 10:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,5/*autovar*/,it);
int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_First_Dataflow__lp_src_dot_fir,1,bind); FAILTEST(pass2);it=rb_ary_new3(0); bind_aset(bind,7/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,7/*autovar*/);it=rb_funcall(self,sy_First_Dataflow_src_dot_firs,1,bind);  bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,5/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,11/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break3); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp_3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,11/*autovar*/); bind_aset(bind,13/*it*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_13_rb_,1,bind);  bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt2_3;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,5/*autovar*/);it=rb_funcall(self,sy_First_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,15/*autovar*/,it);
int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,15/*autovar*/); bind_aset(bind,16/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0;
ame_setsrc(self,bind_aget(bind,16/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,17/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt3_2;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,15/*autovar*/);it=rb_funcall(self,sy_First_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;case 5:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,18/*autovar*/,it);
int oldpos7=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,18/*autovar*/); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0;
ame_setsrc(self,bind_aget(bind,19/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,20/*val*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_20_rb_,1,bind);  bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt4_2;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,18/*autovar*/);it=rb_funcall(self,sy_First_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos7); goto fail;
 accept4:;
 break;case 6:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,22/*autovar*/,it);
int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,22/*autovar*/); bind_aset(bind,23/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0;
ame_setsrc(self,bind_aget(bind,23/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,24/*autovar*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,25/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp_4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=bind_aget(bind,24/*autovar*/); bind_aset(bind,13/*it*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_13_rb_,1,bind);  bind_aset(bind,26/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt5_2;
it=bind_aget(bind,26/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,22/*autovar*/);it=rb_funcall(self,sy_First_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto fail;
 accept5:;
 break;case 8:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,27/*autovar*/,it);
int oldpos10=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,27/*autovar*/); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0;
ame_setsrc(self,bind_aget(bind,28/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_First_Dataflow_lattice_dot_,1,bind);  bind_aset(bind,20/*val*/,it);
it=rb_ary_new3(0); bind_aset(bind,29/*autovar*/,it);
int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,30/*el*/,it);
it=bind_aget(bind,30/*el*/); bind_aset(bind,31/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_31_rb_,1,bind); cstruct oldpass8=*ptr; int fail8=0;
ame_setsrc(self,bind_aget(bind,31/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,32/*nev*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto break5;
it=rb_funcall(self,sy_First_Dataflow_bind_lb_20_rb_2,1,bind);  bind_aset(bind,20/*val*/,it);
int oldpos12=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
 int oldpos13=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_2;}
 it=rb_funcall(self,sy_First_Dataflow_empty,1,bind); ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt8_2); 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_2;}
   it=Amethyst_empty(self ); FAILTEST(alt8_3); 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos13); goto alt7_2;
 accept8:;
  it=rb_funcall(self,sy_stop,0); FAILTEST(alt7_2); bind_aset(bind,33/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
   it=Amethyst_empty(self ); FAILTEST(alt7_3); bind_aset(bind,33/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos12); goto break5;
 accept7:;
it=rb_funcall(self,sy_First_Dataflow__append_lp_5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=bind_aget(bind,29/*autovar*/);it=rb_ary_new3(0); bind_aset(bind,34/*autovar*/,it);
int oldpos14; while(1){oldpos14=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,35/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp_6,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos14=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos14); it=bind_aget(bind,34/*autovar*/);it=bind_aget(bind,20/*val*/); bind_aset(bind,36/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt6_2;
it=bind_aget(bind,36/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,27/*autovar*/);it=rb_funcall(self,sy_First_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos10); goto fail;
 accept6:;
 break;}it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_First_Dataflow__at_vis_eq_bin,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb__eq_,1,bind); cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
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
it=rb_funcall(self,sy_First_Dataflow_depends_lp_,1,bind);  bind_aset(bind,1/*_result*/,it);
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
VALUE switchhashSizes_Dataflow1;
VALUE switchhashSizes_Dataflow2;
VALUE switchhashSizes_Dataflow3;
static VALUE c_CAct;
static VALUE sy_Sizes_Dataflow__append_lp_2;
static VALUE sy_Sizes_Dataflow__append_lp_3;
static VALUE sy_Sizes_Dataflow__append_lp_4;
static VALUE sy_Sizes_Dataflow__append_lp_5;
static VALUE sy_Sizes_Dataflow__append_lp_6;
static VALUE sy_Sizes_Dataflow__append_lp_;
static VALUE sy_Sizes_Dataflow__at_vis_eq_bin;
static VALUE sy_Sizes_Dataflow__lp_src_dot_fir;
static VALUE sy_Sizes_Dataflow_bind_lb_15_rb_;
static VALUE sy_Sizes_Dataflow_bind_lb_1_rb__eq_;
static VALUE sy_Sizes_Dataflow_bind_lb_26_rb_2;
static VALUE sy_Sizes_Dataflow_bind_lb_26_rb_;
static VALUE sy_Sizes_Dataflow_bind_lb_41_rb_;
static VALUE sy_Sizes_Dataflow_empty;
static VALUE sy_Sizes_Dataflow_lattice_dot_2;
static VALUE sy_Sizes_Dataflow_lattice_dot_;
static VALUE sy_Sizes_Dataflow_lattice_lb_2;
static VALUE sy_Sizes_Dataflow_lattice_lb_;
static VALUE sy_Sizes_Dataflow_src_dot_firs;
static VALUE sy_size;
static VALUE sy_stop;
VALUE Sizes_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashSizes_Dataflow3,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
unsigned char chr2=FIX2LONG(rb_hash_aref(switchhashSizes_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Amethyst_spaces(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"_seq",4)) goto pass2; else ame_setpos(self,ame_getpos(self)+4);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
 it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt2_2;
it=rb_funcall(self,sy_Sizes_Dataflow_lattice_lb_,1,bind);  bind_aset(bind,7/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,3/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0;
ame_setsrc(self,bind_aget(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Amethyst_spaces(self ); FAILTEST(pass4);unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(114) ... UC(114):; if (strncmp(ame_curstr(self),"regch",5)) goto pass4; else ame_setpos(self,ame_getpos(self)+5); break;case UC(97) ... UC(97):; if (strncmp(ame_curstr(self),"anything",8)) goto pass4; else ame_setpos(self,ame_getpos(self)+8); break;case UC(99) ... UC(99):; if (strncmp(ame_curstr(self),"clas",4)) goto pass4; else ame_setpos(self,ame_getpos(self)+4); break;default:;   it=Amethyst_fails(self ); FAILTEST(pass4); break;}  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt2_3;
it=rb_funcall(self,sy_Sizes_Dataflow_lattice_lb_2,1,bind);  bind_aset(bind,7/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto pass1;
 accept2:;
 break;}  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Sizes_Dataflow_first_Sizes_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=Sizes_Dataflow_first_Sizes_Dataflow(self ); FAILTEST(fail); bind_aset(bind,9/*_result*/,it);
 break;}it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_first_Sizes_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(47);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 11:;case 2:;case 3:;case 4:;case 7:;case 9:; unsigned char chr2=FIX2LONG(rb_hash_aref(switchhashSizes_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;case 6:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr3=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr3){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp_,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,1/*autovar*/);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot_,1,bind);  bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;} break;case 10:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_Sizes_Dataflow__lp_src_dot_fir,1,bind); FAILTEST(pass2);it=rb_ary_new3(0); bind_aset(bind,9/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,9/*autovar*/);it=rb_funcall(self,sy_Sizes_Dataflow_src_dot_firs,1,bind);  bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,7/*autovar*/); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break3); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp_3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,13/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_15_rb_,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt2_3;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,7/*autovar*/);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,17/*autovar*/,it);
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,18/*autovar*/,it);
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,19/*autovar*/,it);
int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,19/*autovar*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0;
ame_setsrc(self,bind_aget(bind,20/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt3_2;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,19/*autovar*/);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;case 5:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,22/*autovar*/,it);
it=bind_aget(bind,22/*autovar*/); bind_aset(bind,23/*autovar*/,it);
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,24/*autovar*/,it);
int oldpos7=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,24/*autovar*/); bind_aset(bind,25/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0;
ame_setsrc(self,bind_aget(bind,25/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,26/*val*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_26_rb_,1,bind);  bind_aset(bind,27/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt4_2;
it=bind_aget(bind,27/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,24/*autovar*/);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos7); goto fail;
 accept4:;
 break;case 6:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,28/*autovar*/,it);
it=bind_aget(bind,28/*autovar*/); bind_aset(bind,29/*autovar*/,it);
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,30/*autovar*/,it);
int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,30/*autovar*/); bind_aset(bind,31/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0;
ame_setsrc(self,bind_aget(bind,31/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,32/*autovar*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,33/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp_4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=bind_aget(bind,32/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_15_rb_,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt5_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,30/*autovar*/);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto fail;
 accept5:;
 break;case 8:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,35/*autovar*/,it);
it=bind_aget(bind,35/*autovar*/); bind_aset(bind,36/*autovar*/,it);
it=bind_aget(bind,36/*autovar*/); bind_aset(bind,37/*autovar*/,it);
int oldpos10=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,37/*autovar*/); bind_aset(bind,38/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0;
ame_setsrc(self,bind_aget(bind,38/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot_,1,bind);  bind_aset(bind,26/*val*/,it);
it=rb_ary_new3(0); bind_aset(bind,39/*autovar*/,it);
int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,40/*el*/,it);
it=bind_aget(bind,40/*el*/); bind_aset(bind,41/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_41_rb_,1,bind); cstruct oldpass8=*ptr; int fail8=0;
ame_setsrc(self,bind_aget(bind,41/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,42/*nev*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto break5;
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_26_rb_2,1,bind);  bind_aset(bind,26/*val*/,it);
int oldpos12=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
 int oldpos13=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_2;}
 it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind); ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt8_2); 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_2;}
   it=Amethyst_empty(self ); FAILTEST(alt8_3); 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos13); goto alt7_2;
 accept8:;
  it=rb_funcall(self,sy_stop,0); FAILTEST(alt7_2); bind_aset(bind,43/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
   it=Amethyst_empty(self ); FAILTEST(alt7_3); bind_aset(bind,43/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos12); goto break5;
 accept7:;
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp_5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=bind_aget(bind,39/*autovar*/);it=rb_ary_new3(0); bind_aset(bind,44/*autovar*/,it);
int oldpos14; while(1){oldpos14=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,45/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp_6,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos14=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos14); it=bind_aget(bind,44/*autovar*/);it=bind_aget(bind,26/*val*/); bind_aset(bind,46/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt6_2;
it=bind_aget(bind,46/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,37/*autovar*/);it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos10); goto fail;
 accept6:;
 break;}it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Sizes_Dataflow__at_vis_eq_bin,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_1_rb__eq_,1,bind); cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
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
VALUE switchhashSwitch_Dataflow1;
VALUE switchhashSwitch_Dataflow2;
VALUE switchhashSwitch_Dataflow3;
static VALUE c_Act;
static VALUE c_CAct;
static VALUE sy_Switch_Dataflow__append_lp_2;
static VALUE sy_Switch_Dataflow__append_lp_3;
static VALUE sy_Switch_Dataflow__append_lp_4;
static VALUE sy_Switch_Dataflow__append_lp_5;
static VALUE sy_Switch_Dataflow__append_lp_6;
static VALUE sy_Switch_Dataflow__append_lp_;
static VALUE sy_Switch_Dataflow__at_vis_eq_bin;
static VALUE sy_Switch_Dataflow__lp_src_dot_fir;
static VALUE sy_Switch_Dataflow_bind_lb_15_rb_;
static VALUE sy_Switch_Dataflow_bind_lb_1_rb__eq_;
static VALUE sy_Switch_Dataflow_bind_lb_26_rb_2;
static VALUE sy_Switch_Dataflow_bind_lb_26_rb_;
static VALUE sy_Switch_Dataflow_bind_lb_41_rb_;
static VALUE sy_Switch_Dataflow_empty;
static VALUE sy_Switch_Dataflow_firstcha;
static VALUE sy_Switch_Dataflow_lattice_dot_2;
static VALUE sy_Switch_Dataflow_lattice_dot_3;
static VALUE sy_Switch_Dataflow_lattice_dot_;
static VALUE sy_Switch_Dataflow_regchar_lp_;
static VALUE sy_Switch_Dataflow_src_dot_firs;
static VALUE sy_size;
static VALUE sy_stop;
VALUE Switch_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashSwitch_Dataflow3,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
unsigned char chr2=FIX2LONG(rb_hash_aref(switchhashSwitch_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Amethyst_spaces(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"_seq",4)) goto pass2; else ame_setpos(self,ame_getpos(self)+4);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
 it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt2_2;
it=rb_funcall(self,sy_Switch_Dataflow_firstcha,1,bind);  bind_aset(bind,7/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,3/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0;
ame_setsrc(self,bind_aget(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Amethyst_spaces(self ); FAILTEST(pass4);if (strncmp(ame_curstr(self),"regch",5)) goto pass4; else ame_setpos(self,ame_getpos(self)+5);  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt2_3;
 it=c_Act; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_3); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0;
ame_setsrc(self,bind_aget(bind,9/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,6/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt2_3;
it=rb_funcall(self,sy_Switch_Dataflow_regchar_lp_,1,bind);  bind_aset(bind,7/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,3/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0;
ame_setsrc(self,bind_aget(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Amethyst_spaces(self ); FAILTEST(pass6);if (strncmp(ame_curstr(self),"anything",8)) goto pass6; else ame_setpos(self,ame_getpos(self)+8);  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt2_4;
it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot_,1,bind);  bind_aset(bind,7/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto pass1;
 accept2:;
 break;}  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,11/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Switch_Dataflow_first_Switch_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,11/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=Switch_Dataflow_first_Switch_Dataflow(self ); FAILTEST(fail); bind_aset(bind,11/*_result*/,it);
 break;}it=bind_aget(bind,11/*_result*/);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_first_Switch_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(47);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 11:;case 2:;case 3:;case 4:;case 7:;case 9:; unsigned char chr2=FIX2LONG(rb_hash_aref(switchhashSwitch_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;case 6:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr3=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr3){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Dataflow__append_lp_,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,1/*autovar*/);it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot_3,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;} break;case 10:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_Switch_Dataflow__lp_src_dot_fir,1,bind); FAILTEST(pass2);it=rb_ary_new3(0); bind_aset(bind,9/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Dataflow__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,9/*autovar*/);it=rb_funcall(self,sy_Switch_Dataflow_src_dot_firs,1,bind);  bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,7/*autovar*/); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break3); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Dataflow__append_lp_3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,13/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_15_rb_,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt2_3;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,7/*autovar*/);it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot_3,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,17/*autovar*/,it);
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,18/*autovar*/,it);
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,19/*autovar*/,it);
int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,19/*autovar*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0;
ame_setsrc(self,bind_aget(bind,20/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt3_2;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,19/*autovar*/);it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot_3,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;case 5:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,22/*autovar*/,it);
it=bind_aget(bind,22/*autovar*/); bind_aset(bind,23/*autovar*/,it);
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,24/*autovar*/,it);
int oldpos7=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,24/*autovar*/); bind_aset(bind,25/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0;
ame_setsrc(self,bind_aget(bind,25/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,26/*val*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_26_rb_,1,bind);  bind_aset(bind,27/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt4_2;
it=bind_aget(bind,27/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,24/*autovar*/);it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot_3,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos7); goto fail;
 accept4:;
 break;case 6:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,28/*autovar*/,it);
it=bind_aget(bind,28/*autovar*/); bind_aset(bind,29/*autovar*/,it);
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,30/*autovar*/,it);
int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,30/*autovar*/); bind_aset(bind,31/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0;
ame_setsrc(self,bind_aget(bind,31/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,32/*autovar*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,33/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Dataflow__append_lp_4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=bind_aget(bind,32/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_15_rb_,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt5_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,30/*autovar*/);it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot_3,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto fail;
 accept5:;
 break;case 8:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,35/*autovar*/,it);
it=bind_aget(bind,35/*autovar*/); bind_aset(bind,36/*autovar*/,it);
it=bind_aget(bind,36/*autovar*/); bind_aset(bind,37/*autovar*/,it);
int oldpos10=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,37/*autovar*/); bind_aset(bind,38/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0;
ame_setsrc(self,bind_aget(bind,38/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,26/*val*/,it);
it=rb_ary_new3(0); bind_aset(bind,39/*autovar*/,it);
int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,40/*el*/,it);
it=bind_aget(bind,40/*el*/); bind_aset(bind,41/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_41_rb_,1,bind); cstruct oldpass8=*ptr; int fail8=0;
ame_setsrc(self,bind_aget(bind,41/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,42/*nev*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto break5;
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_26_rb_2,1,bind);  bind_aset(bind,26/*val*/,it);
int oldpos12=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
 int oldpos13=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_2;}
 it=rb_funcall(self,sy_Switch_Dataflow_empty,1,bind); ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt8_2); 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_2;}
   it=Amethyst_empty(self ); FAILTEST(alt8_3); 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos13); goto alt7_2;
 accept8:;
  it=rb_funcall(self,sy_stop,0); FAILTEST(alt7_2); bind_aset(bind,43/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
   it=Amethyst_empty(self ); FAILTEST(alt7_3); bind_aset(bind,43/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos12); goto break5;
 accept7:;
it=rb_funcall(self,sy_Switch_Dataflow__append_lp_5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=bind_aget(bind,39/*autovar*/);it=rb_ary_new3(0); bind_aset(bind,44/*autovar*/,it);
int oldpos14; while(1){oldpos14=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,45/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Dataflow__append_lp_6,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos14=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos14); it=bind_aget(bind,44/*autovar*/);it=bind_aget(bind,26/*val*/); bind_aset(bind,46/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt6_2;
it=bind_aget(bind,46/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,37/*autovar*/);it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot_3,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos10); goto fail;
 accept6:;
 break;}it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Switch_Dataflow__at_vis_eq_bin,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_1_rb__eq_,1,bind); cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
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
VALUE switchhashClasSwitch_Dataflow2;
VALUE switchhashFirst_Dataflow1;
VALUE switchhashFirst_Dataflow2;
static VALUE c_CAct;
static VALUE sy_ClasSwitch_Dataflow__append_lp_2;
static VALUE sy_ClasSwitch_Dataflow__append_lp_3;
static VALUE sy_ClasSwitch_Dataflow__append_lp_4;
static VALUE sy_ClasSwitch_Dataflow__append_lp_5;
static VALUE sy_ClasSwitch_Dataflow__append_lp_6;
static VALUE sy_ClasSwitch_Dataflow__append_lp_7;
static VALUE sy_ClasSwitch_Dataflow__append_lp_;
static VALUE sy_ClasSwitch_Dataflow__at_vis_eq_bin;
static VALUE sy_ClasSwitch_Dataflow__do_rules_lb_b;
static VALUE sy_ClasSwitch_Dataflow__lp__do_rules_lb_;
static VALUE sy_ClasSwitch_Dataflow__lp_src_dot_fir;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_10_rb_;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_15_rb_;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_1_rb__eq_;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_26_rb_2;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_26_rb_;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_41_rb_;
static VALUE sy_ClasSwitch_Dataflow_empty;
static VALUE sy_ClasSwitch_Dataflow_lattice_dot_2;
static VALUE sy_ClasSwitch_Dataflow_lattice_dot_;
static VALUE sy_ClasSwitch_Dataflow_lattice_lb_;
static VALUE sy_ClasSwitch_Dataflow_src_dot_firs;
static VALUE sy_size;
static VALUE sy_stop;
VALUE ClasSwitch_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashClasSwitch_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Amethyst_spaces(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"clas",4)) goto pass2; else ame_setpos(self,ame_getpos(self)+4);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
 it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,3/*cls*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass1;
it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_lb_,1,bind);  bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=ClasSwitch_Dataflow_first_ClasSwitch_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,7/*name*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__lp__do_rules_lb_,1,bind); FAILTEST(pass4);it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__append_lp_,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,8/*autovar*/);it=rb_funcall(self,sy_ClasSwitch_Dataflow__do_rules_lb_b,1,bind);  bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_10_rb_,1,bind); cstruct oldpass5=*ptr; int fail5=0;
ame_setsrc(self,bind_aget(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
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
	if(fail4) goto alt1_4;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=ClasSwitch_Dataflow_first_ClasSwitch_Dataflow(self ); FAILTEST(fail); bind_aset(bind,5/*_result*/,it);
 break;}it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_first_ClasSwitch_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(47);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 11:;case 2:;case 3:;case 4:;case 7:;case 9:; unsigned char chr2=FIX2LONG(rb_hash_aref(switchhashClasSwitch_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;case 6:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr3=FIX2LONG(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr3){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
 break;case 6:;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,1/*autovar*/);it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot_,1,bind);  bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;} break;case 10:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_ClasSwitch_Dataflow__lp_src_dot_fir,1,bind); FAILTEST(pass2);it=rb_ary_new3(0); bind_aset(bind,9/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__append_lp_3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,9/*autovar*/);it=rb_funcall(self,sy_ClasSwitch_Dataflow_src_dot_firs,1,bind);  bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,7/*autovar*/); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break3); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__append_lp_4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,13/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_15_rb_,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt2_3;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,7/*autovar*/);it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,17/*autovar*/,it);
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,18/*autovar*/,it);
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,19/*autovar*/,it);
int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,19/*autovar*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0;
ame_setsrc(self,bind_aget(bind,20/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt3_2;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,19/*autovar*/);it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;case 5:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,22/*autovar*/,it);
it=bind_aget(bind,22/*autovar*/); bind_aset(bind,23/*autovar*/,it);
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,24/*autovar*/,it);
int oldpos7=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,24/*autovar*/); bind_aset(bind,25/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0;
ame_setsrc(self,bind_aget(bind,25/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,26/*val*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_26_rb_,1,bind);  bind_aset(bind,27/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt4_2;
it=bind_aget(bind,27/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,24/*autovar*/);it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos7); goto fail;
 accept4:;
 break;case 6:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,28/*autovar*/,it);
it=bind_aget(bind,28/*autovar*/); bind_aset(bind,29/*autovar*/,it);
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,30/*autovar*/,it);
int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,30/*autovar*/); bind_aset(bind,31/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0;
ame_setsrc(self,bind_aget(bind,31/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,32/*autovar*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,33/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__append_lp_5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=bind_aget(bind,32/*autovar*/); bind_aset(bind,15/*it*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_15_rb_,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt5_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,30/*autovar*/);it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto fail;
 accept5:;
 break;case 8:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,35/*autovar*/,it);
it=bind_aget(bind,35/*autovar*/); bind_aset(bind,36/*autovar*/,it);
it=bind_aget(bind,36/*autovar*/); bind_aset(bind,37/*autovar*/,it);
int oldpos10=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,37/*autovar*/); bind_aset(bind,38/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0;
ame_setsrc(self,bind_aget(bind,38/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot_,1,bind);  bind_aset(bind,26/*val*/,it);
it=rb_ary_new3(0); bind_aset(bind,39/*autovar*/,it);
int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,40/*el*/,it);
it=bind_aget(bind,40/*el*/); bind_aset(bind,41/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_41_rb_,1,bind); cstruct oldpass8=*ptr; int fail8=0;
ame_setsrc(self,bind_aget(bind,41/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,42/*nev*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto break5;
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_26_rb_2,1,bind);  bind_aset(bind,26/*val*/,it);
int oldpos12=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
 int oldpos13=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_2;}
 it=rb_funcall(self,sy_ClasSwitch_Dataflow_empty,1,bind); ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt8_2); 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_2;}
   it=Amethyst_empty(self ); FAILTEST(alt8_3); 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos13); goto alt7_2;
 accept8:;
  it=rb_funcall(self,sy_stop,0); FAILTEST(alt7_2); bind_aset(bind,43/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
   it=Amethyst_empty(self ); FAILTEST(alt7_3); bind_aset(bind,43/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos12); goto break5;
 accept7:;
it=rb_funcall(self,sy_ClasSwitch_Dataflow__append_lp_6,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=bind_aget(bind,39/*autovar*/);it=rb_ary_new3(0); bind_aset(bind,44/*autovar*/,it);
int oldpos14; while(1){oldpos14=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,45/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__append_lp_7,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos14=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos14); it=bind_aget(bind,44/*autovar*/);it=bind_aget(bind,26/*val*/); bind_aset(bind,46/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt6_2;
it=bind_aget(bind,46/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,37/*autovar*/);it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot_2,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos10); goto fail;
 accept6:;
 break;}it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_ClasSwitch_Dataflow__at_vis_eq_bin,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_1_rb__eq_,1,bind); cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
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
static VALUE sy_Detect_First__append_lp_2;
static VALUE sy_Detect_First__append_lp_;
static VALUE sy_Detect_First__at_name_eq_sr;
static VALUE sy_Detect_First__do_rules_eq_;
static VALUE sy_Detect_First_bind_lb_3_rb__eq_;
static VALUE sy_Detect_First_src;
static VALUE sy_Detect_First_src_dot_rule2;
static VALUE sy_Detect_First_src_dot_rule;
static VALUE sy_size;
VALUE Detect_First_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDetect_First1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_Detect_First__at_name_eq_sr,1,bind); it=rb_funcall(self,sy_Detect_First__do_rules_eq_,1,bind); it=rb_funcall(self,sy_Detect_First_src_dot_rule,1,bind);  bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Detect_First_bind_lb_3_rb__eq_,1,bind); cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,5/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Detect_First_root(self ); FAILTEST(pass4); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Detect_First__append_lp_,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,5/*autovar*/); bind_aset(bind,9/*rules*/,it);
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
it=rb_funcall(self,sy_Detect_First_src_dot_rule2,1,bind); it=rb_funcall(self,sy_Detect_First_src,1,bind);  bind_aset(bind,10/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,11/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Detect_First__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,12/*_result*/,it);
it=bind_aget(bind,12/*_result*/);
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
static VALUE sy_Detect_Switch_CharLatt;
static VALUE sy_Detect_Switch_Or_lb__ti_bind2;
static VALUE sy_Detect_Switch_Or_lb__ti_bind;
static VALUE sy_Detect_Switch_Placehol;
static VALUE sy_Detect_Switch_Seq_lb__ti__lp__lb_b;
static VALUE sy_Detect_Switch__append_lp_10;
static VALUE sy_Detect_Switch__append_lp_11;
static VALUE sy_Detect_Switch__append_lp_2;
static VALUE sy_Detect_Switch__append_lp_3;
static VALUE sy_Detect_Switch__append_lp_4;
static VALUE sy_Detect_Switch__append_lp_5;
static VALUE sy_Detect_Switch__append_lp_6;
static VALUE sy_Detect_Switch__append_lp_7;
static VALUE sy_Detect_Switch__append_lp_8;
static VALUE sy_Detect_Switch__append_lp_9;
static VALUE sy_Detect_Switch__append_lp_;
static VALUE sy_Detect_Switch__at_cases_dot_e;
static VALUE sy_Detect_Switch__at_cases_eq__at_;
static VALUE sy_Detect_Switch__at_cases_eq__lb_;
static VALUE sy_Detect_Switch__at_changed2;
static VALUE sy_Detect_Switch__at_changed3;
static VALUE sy_Detect_Switch__at_changed;
static VALUE sy_Detect_Switch__at_name_eq_sr;
static VALUE sy_Detect_Switch__do_rules_eq_;
static VALUE sy_Detect_Switch__lp_;
static VALUE sy_Detect_Switch__lp_bind_lb_0_rb_;
static VALUE sy_Detect_Switch__lp_bind_lb_1_rb_;
static VALUE sy_Detect_Switch__lp_bind_lb_2_rb_;
static VALUE sy_Detect_Switch__lp_bind_lb_4_rb_;
static VALUE sy_Detect_Switch__lp_bind_lb_9_rb_;
static VALUE sy_Detect_Switch__lp_first_lp_b;
static VALUE sy_Detect_Switch__lp_src_dot_ins;
static VALUE sy_Detect_Switch_bind_lb_10_rb_;
static VALUE sy_Detect_Switch_bind_lb_1_rb_;
static VALUE sy_Detect_Switch_bind_lb_1_rb__eq_;
static VALUE sy_Detect_Switch_bind_lb_2_rb__eq_;
static VALUE sy_Detect_Switch_bind_lb_2_rb__lt_;
static VALUE sy_Detect_Switch_bind_lb_3_rb__eq_;
static VALUE sy_Detect_Switch_bind_lb_5_rb__eq_;
static VALUE sy_Detect_Switch_bind_lb_5_rb__lt_;
static VALUE sy_Detect_Switch_bind_lb_6_rb__eq_;
static VALUE sy_Detect_Switch_bind_lb_8_rb__eq_;
static VALUE sy_Detect_Switch_if_sp_bind_lb_;
static VALUE sy_Detect_Switch_nary_eq_bin;
static VALUE sy_Detect_Switch_s_eq_Switch;
static VALUE sy_Detect_Switch_src;
static VALUE sy_Detect_Switch_src_dot_rule2;
static VALUE sy_Detect_Switch_src_dot_rule;
static VALUE sy_first;
static VALUE sy_size;
VALUE Detect_Switch_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDetect_First1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_Detect_Switch__at_name_eq_sr,1,bind); it=rb_funcall(self,sy_Detect_Switch__do_rules_eq_,1,bind); it=rb_funcall(self,sy_Detect_Switch_src_dot_rule,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_bind_lb_5_rb__eq_,1,bind); cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,7/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break2); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0;
ame_setsrc(self,bind_aget(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Detect_Switch_root(self ); FAILTEST(pass4); bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp_10,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,7/*autovar*/); bind_aset(bind,11/*rules*/,it);
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
it=rb_funcall(self,sy_Detect_Switch_src_dot_rule2,1,bind); it=rb_funcall(self,sy_Detect_Switch_src,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,3/*autovar*/); bind_aset(bind,13/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,13/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Detect_Switch__append_lp_11,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_predicate(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(24); bind_aset(bind,0/*chr*/,a0);bind_aset(bind,1/*p*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_Detect_Switch__lp_bind_lb_0_rb_,1,bind); FAILTEST(alt1_2);it=bind_aget(bind,1/*p*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_Detect_Switch__lp_,1,bind); FAILTEST(alt1_3);it=rb_funcall(self,sy_Detect_Switch_Placehol,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*p*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_bind_lb_3_rb__eq_,1,bind); cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDetect_Switch3,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,7/*e*/,it);
 it=bind_aget(bind,0/*chr*/); arg0=it;it=bind_aget(bind,7/*e*/); arg1=it; it=Detect_Switch_predicate(self ,arg0,arg1); FAILTEST(break1); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp_5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,6/*autovar*/); bind_aset(bind,9/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Or_lb__ti_bind2,1,bind);  bind_aset(bind,10/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto pass1;
 accept2:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,12/*autovar*/,it);
int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,13/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*e*/,it);
 it=bind_aget(bind,0/*chr*/); arg0=it;it=bind_aget(bind,7/*e*/); arg1=it; it=Detect_Switch_predicate(self ,arg0,arg1); FAILTEST(pass3); bind_aset(bind,14/*f*/,it);
it=rb_ary_new3(0); bind_aset(bind,15/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp_6,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,15/*autovar*/); bind_aset(bind,17/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Seq_lb__ti__lp__lb_b,1,bind);  bind_aset(bind,18/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_2;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,12/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto pass1;
 accept3:;
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,19/*autovar*/,it);
int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,19/*autovar*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0;
ame_setsrc(self,bind_aget(bind,20/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,21/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,22/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp_7,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,21/*autovar*/);it=rb_funcall(self,sy_Detect_Switch_nary_eq_bin,1,bind);  bind_aset(bind,23/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt4_2;
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,19/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos6); goto pass1;
 accept4:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,11/*autovar*/,it);
 break;}  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_4;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
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
VALUE Detect_Switch_split(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDetect_Switch1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Detect_Switch_split(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*autovar*/); bind_aset(bind,4/*el*/,it);
 it=bind_aget(bind,4/*el*/); arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(alt1_3); bind_aset(bind,5/*f*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_cases_eq__at_,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,6/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Detect_Switch_split(self ); FAILTEST(break1); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp_3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,8/*autovar*/); bind_aset(bind,10/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,6/*autovar*/); bind_aset(bind,4/*el*/,it);
 it=bind_aget(bind,4/*el*/); arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(alt2_3); bind_aset(bind,5/*f*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_cases_eq__at_,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,11/*autovar*/,it);
int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Detect_Switch_split(self ); FAILTEST(pass3);it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp_4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,13/*autovar*/); bind_aset(bind,15/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_2;
it=bind_aget(bind,15/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,11/*autovar*/); bind_aset(bind,4/*el*/,it);
 it=bind_aget(bind,4/*el*/); arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(alt3_3); bind_aset(bind,5/*f*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_cases_eq__at_,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,4/*el*/,it);
 it=bind_aget(bind,4/*el*/); arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(fail); bind_aset(bind,5/*f*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_cases_eq__at_,1,bind);  bind_aset(bind,3/*_result*/,it);
 break;}it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp_8,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,sy_Detect_Switch__at_changed2,1,bind);  bind_aset(bind,2/*oldchanged*/,it);
it=rb_funcall(self,sy_Detect_Switch_src,1,bind);  bind_aset(bind,3/*this*/,it);
it=Qnil; bind_aset(bind,4/*clon*/,it);
it=Qfalse; bind_aset(bind,5/*changed*/,it);
it=rb_funcall(self,sy_Detect_Switch__lp_src_dot_ins,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_bind_lb_6_rb__eq_,1,bind); cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,9/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,10/*key*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_changed3,1,bind);   it=Detect_Switch_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Detect_Switch__lp_bind_lb_4_rb_,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp_9,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,8/*autovar*/);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_Detect_Switch_if_sp_bind_lb_,1,bind);  bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashTraverser_Clone21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Switch_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
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
it=rb_funcall(self,sy_Detect_Switch__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Detect_Switch_traverse_item(self ); FAILTEST(break1); bind_aset(bind,7/*it*/,it);
it=rb_funcall(self,sy_Detect_Switch_bind_lb_5_rb__lt_,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp_5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,6/*autovar*/);it=bind_aget(bind,5/*ar*/); bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_3;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;case 2:; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Switch_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=c_Or; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_Detect_Switch_CharLatt,1,bind);  bind_aset(bind,1/*ary2*/,it);
it=rb_ary_new3(0); bind_aset(bind,2/*ary3*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*els*/,it);
it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=Detect_Switch_traverse_item(self ); FAILTEST(break1); bind_aset(bind,5/*e*/,it);
it=rb_funcall(self,sy_Detect_Switch__lp_first_lp_b,1,bind); FAILTEST(break1);it=bind_aget(bind,5/*e*/); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp_,1,bind); it=rb_funcall(self,sy_Detect_Switch_bind_lb_1_rb_,1,bind);  bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,4/*autovar*/);int oldpos2=ame_getpos(self);
   it=Amethyst_eof(self ); FAILTEST(reject1); x=1; goto accept1;  reject1: x=0; accept1: it=Qnil; ame_setpos(self,oldpos2); if (x==0) goto pass1;it=bind_aget(bind,1/*ary2*/); bind_aset(bind,8/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_bind_lb_1_rb__eq_,1,bind); it=rb_funcall(self,sy_Detect_Switch__lp_bind_lb_1_rb_,1,bind); FAILTEST(pass1);it=rb_funcall(self,sy_Detect_Switch_Or_lb__ti_bind,1,bind);  bind_aset(bind,9/*new_or*/,it);
it=rb_funcall(self,sy_Detect_Switch__lp_bind_lb_9_rb_,1,bind); FAILTEST(pass1);it=rb_funcall(self,sy_Detect_Switch_bind_lb_8_rb__eq_,1,bind); it=rb_funcall(self,sy_Detect_Switch__at_cases_eq__lb_,1,bind); it=bind_aget(bind,9/*new_or*/); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_bind_lb_10_rb_,1,bind); cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Detect_Switch_split(self ); FAILTEST(pass2);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=rb_funcall(self,sy_Detect_Switch__at_cases_dot_e,1,bind); it=rb_funcall(self,sy_Detect_Switch_bind_lb_2_rb__eq_,1,bind); it=rb_funcall(self,sy_Detect_Switch_bind_lb_2_rb__lt_,1,bind); it=rb_funcall(self,sy_Detect_Switch__lp_bind_lb_2_rb_,1,bind); FAILTEST(pass1);it=rb_funcall(self,sy_Detect_Switch_s_eq_Switch,1,bind);  bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*_result*/,it);
it=bind_aget(bind,12/*_result*/);
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
static VALUE sy_Detect_ClasSwitch_Apply_lb_;
static VALUE sy_Detect_ClasSwitch_Bind_lb_bin;
static VALUE sy_Detect_ClasSwitch_ClasLatt;
static VALUE sy_Detect_ClasSwitch_Or_lb__ti_bind2;
static VALUE sy_Detect_ClasSwitch_Or_lb__ti_bind;
static VALUE sy_Detect_ClasSwitch_Placehol;
static VALUE sy_Detect_ClasSwitch_Seq_lb__ti__lp__lb_b;
static VALUE sy_Detect_ClasSwitch__append_lp_2;
static VALUE sy_Detect_ClasSwitch__append_lp_3;
static VALUE sy_Detect_ClasSwitch__append_lp_4;
static VALUE sy_Detect_ClasSwitch__append_lp_5;
static VALUE sy_Detect_ClasSwitch__append_lp_6;
static VALUE sy_Detect_ClasSwitch__append_lp_7;
static VALUE sy_Detect_ClasSwitch__append_lp_8;
static VALUE sy_Detect_ClasSwitch__append_lp_9;
static VALUE sy_Detect_ClasSwitch__append_lp_;
static VALUE sy_Detect_ClasSwitch__at_changed2;
static VALUE sy_Detect_ClasSwitch__at_changed3;
static VALUE sy_Detect_ClasSwitch__at_changed;
static VALUE sy_Detect_ClasSwitch__at_name_eq_sr;
static VALUE sy_Detect_ClasSwitch__do_rules_eq_;
static VALUE sy_Detect_ClasSwitch__lp_;
static VALUE sy_Detect_ClasSwitch__lp_bind_lb_0_rb_;
static VALUE sy_Detect_ClasSwitch__lp_bind_lb_1_rb_;
static VALUE sy_Detect_ClasSwitch__lp_bind_lb_4_rb_;
static VALUE sy_Detect_ClasSwitch__lp_bind_lb_7_rb_;
static VALUE sy_Detect_ClasSwitch__lp_child_lp_b;
static VALUE sy_Detect_ClasSwitch__lp_first_lp_b;
static VALUE sy_Detect_ClasSwitch__lp_src_dot_ins;
static VALUE sy_Detect_ClasSwitch_bind_lb_1_rb_;
static VALUE sy_Detect_ClasSwitch_bind_lb_1_rb__dot_;
static VALUE sy_Detect_ClasSwitch_bind_lb_1_rb__eq_;
static VALUE sy_Detect_ClasSwitch_bind_lb_2_rb__eq_2;
static VALUE sy_Detect_ClasSwitch_bind_lb_2_rb__eq_3;
static VALUE sy_Detect_ClasSwitch_bind_lb_2_rb__eq_;
static VALUE sy_Detect_ClasSwitch_bind_lb_4_rb__eq_;
static VALUE sy_Detect_ClasSwitch_bind_lb_5_rb__eq_;
static VALUE sy_Detect_ClasSwitch_bind_lb_5_rb__lt_;
static VALUE sy_Detect_ClasSwitch_bind_lb_6_rb__eq_;
static VALUE sy_Detect_ClasSwitch_c_eq_classs;
static VALUE sy_Detect_ClasSwitch_if_sp_bind_lb_;
static VALUE sy_Detect_ClasSwitch_predicat;
static VALUE sy_Detect_ClasSwitch_src;
static VALUE sy_Detect_ClasSwitch_src_dot_name;
static VALUE sy_Detect_ClasSwitch_src_dot_rule2;
static VALUE sy_Detect_ClasSwitch_src_dot_rule;
static VALUE sy_size;
VALUE Detect_ClasSwitch_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDetect_First1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_Detect_ClasSwitch__at_name_eq_sr,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch__do_rules_eq_,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_src_dot_rule,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_5_rb__eq_,1,bind); cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,7/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break2); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0;
ame_setsrc(self,bind_aget(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Detect_ClasSwitch_root(self ); FAILTEST(pass4); bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp_8,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,7/*autovar*/); bind_aset(bind,11/*rules*/,it);
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
it=rb_funcall(self,sy_Detect_ClasSwitch_src_dot_rule2,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_src,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,3/*autovar*/); bind_aset(bind,13/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,13/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp_9,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_predicate(VALUE self ,VALUE a0,VALUE a1,VALUE a2){VALUE vals[3]; VALUE bind=bind_new2(31); bind_aset(bind,0/*clas*/,a0);bind_aset(bind,1/*i*/,a1);bind_aset(bind,2/*p*/,a2); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_Detect_ClasSwitch__lp_bind_lb_0_rb_,1,bind); FAILTEST(alt1_2);it=bind_aget(bind,2/*p*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_Detect_ClasSwitch__lp_,1,bind); FAILTEST(alt1_3);it=rb_funcall(self,sy_Detect_ClasSwitch_Placehol,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,2/*p*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_4_rb__eq_,1,bind); cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDetect_ClasSwitch2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,7/*name*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__lp_bind_lb_7_rb_,1,bind); FAILTEST(pass2); it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass2); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,9/*match*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
it=rb_funcall(self,sy_Detect_ClasSwitch__lp_child_lp_b,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_Detect_ClasSwitch_Apply_lb_,1,bind);  bind_aset(bind,10/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,5/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto pass1;
 accept2:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,12/*autovar*/,it);
int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0;
ame_setsrc(self,bind_aget(bind,13/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_Detect_ClasSwitch_src_dot_name,1,bind);  bind_aset(bind,7/*name*/,it);
  it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,14/*exp*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_predicat,1,bind);  bind_aset(bind,15/*expr*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_Bind_lb_bin,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt3_2;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,12/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto pass1;
 accept3:;
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,17/*autovar*/,it);
int oldpos4=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,17/*autovar*/); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0;
ame_setsrc(self,bind_aget(bind,18/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,19/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,20/*e*/,it);
 it=bind_aget(bind,0/*clas*/); arg0=it;it=bind_aget(bind,1/*i*/); arg1=it;it=bind_aget(bind,20/*e*/); arg2=it; it=Detect_ClasSwitch_predicate(self ,arg0,arg1,arg2); FAILTEST(break1); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp_3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,19/*autovar*/); bind_aset(bind,22/*ary*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_Or_lb__ti_bind2,1,bind);  bind_aset(bind,23/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt4_2;
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,17/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos4); goto pass1;
 accept4:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,24/*autovar*/,it);
int oldpos6=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,24/*autovar*/); bind_aset(bind,25/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0;
ame_setsrc(self,bind_aget(bind,25/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,20/*e*/,it);
 it=bind_aget(bind,0/*clas*/); arg0=it;it=bind_aget(bind,1/*i*/); arg1=it;it=bind_aget(bind,20/*e*/); arg2=it; it=Detect_ClasSwitch_predicate(self ,arg0,arg1,arg2); FAILTEST(pass6); bind_aset(bind,26/*f*/,it);
it=rb_ary_new3(0); bind_aset(bind,27/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,28/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp_4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,27/*autovar*/); bind_aset(bind,29/*rest*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_Seq_lb__ti__lp__lb_b,1,bind);  bind_aset(bind,30/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt5_2;
it=bind_aget(bind,30/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,24/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos6); goto pass1;
 accept5:;
 break;case 4:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,11/*autovar*/,it);
 break;}  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_4;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
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
VALUE Detect_ClasSwitch_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp_6,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,sy_Detect_ClasSwitch__at_changed2,1,bind);  bind_aset(bind,2/*oldchanged*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_src,1,bind);  bind_aset(bind,3/*this*/,it);
it=Qnil; bind_aset(bind,4/*clon*/,it);
it=Qfalse; bind_aset(bind,5/*changed*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__lp_src_dot_ins,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_6_rb__eq_,1,bind); cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0;
ame_setsrc(self,bind_aget(bind,9/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,10/*key*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__at_changed3,1,bind);   it=Detect_ClasSwitch_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__lp_bind_lb_4_rb_,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp_7,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,8/*autovar*/);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_Detect_ClasSwitch_if_sp_bind_lb_,1,bind);  bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashTraverser_Clone21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_ClasSwitch_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
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
it=rb_funcall(self,sy_Detect_ClasSwitch__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Detect_ClasSwitch_traverse_item(self ); FAILTEST(break1); bind_aset(bind,7/*it*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_5_rb__lt_,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp_5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,6/*autovar*/);it=bind_aget(bind,5/*ar*/); bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_3;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;case 2:; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_ClasSwitch_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=c_Or; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_Detect_ClasSwitch_ClasLatt,1,bind);  bind_aset(bind,1/*ary2*/,it);
it=rb_ary_new3(0); bind_aset(bind,2/*ary3*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*els*/,it);
it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=Detect_ClasSwitch_traverse_item(self ); FAILTEST(break1); bind_aset(bind,5/*e*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__lp_first_lp_b,1,bind); FAILTEST(break1);it=bind_aget(bind,5/*e*/); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp_,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_1_rb_,1,bind);  bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,4/*autovar*/);int oldpos2=ame_getpos(self);
   it=Amethyst_eof(self ); FAILTEST(reject1); x=1; goto accept1;  reject1: x=0; accept1: it=Qnil; ame_setpos(self,oldpos2); if (x==0) goto pass1;it=bind_aget(bind,1/*ary2*/); bind_aset(bind,8/*firs*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_1_rb__eq_,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch__lp_bind_lb_1_rb_,1,bind); FAILTEST(pass1);it=rb_funcall(self,sy_Detect_ClasSwitch_Or_lb__ti_bind,1,bind);  bind_aset(bind,9/*new_or*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_1_rb__dot_,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_2_rb__eq_,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_2_rb__eq_2,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_2_rb__eq_3,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_c_eq_classs,1,bind);  bind_aset(bind,10/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/);
return it;
fail: return failobj; }
void Init_detect_switch_c(){ 
 cls_First_Dataflow=rb_define_class("First_Dataflow",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
switchhashFirst_Dataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow1);
switchhashFirst_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Cut\nnext h[k]=4 if k<=Local\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Seq\nnext h[k]=9 if k<=Stop\nnext h[k]=10 if k<=Switch\nnext h[k]=11 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow2);
sy_First_Dataflow__append_lp_2=rb_intern("First_Dataflow__append_lp_2");
sy_First_Dataflow__append_lp_3=rb_intern("First_Dataflow__append_lp_3");
sy_First_Dataflow__append_lp_4=rb_intern("First_Dataflow__append_lp_4");
sy_First_Dataflow__append_lp_5=rb_intern("First_Dataflow__append_lp_5");
sy_First_Dataflow__append_lp_6=rb_intern("First_Dataflow__append_lp_6");
sy_First_Dataflow__append_lp_=rb_intern("First_Dataflow__append_lp_");
sy_First_Dataflow__at_vis_eq_bin=rb_intern("First_Dataflow__at_vis_eq_bin");
sy_First_Dataflow__lp_src_dot_fir=rb_intern("First_Dataflow__lp_src_dot_fir");
sy_First_Dataflow_bind_lb_13_rb_=rb_intern("First_Dataflow_bind_lb_13_rb_");
sy_First_Dataflow_bind_lb_1_rb__eq_=rb_intern("First_Dataflow_bind_lb_1_rb__eq_");
sy_First_Dataflow_bind_lb_20_rb_2=rb_intern("First_Dataflow_bind_lb_20_rb_2");
sy_First_Dataflow_bind_lb_20_rb_=rb_intern("First_Dataflow_bind_lb_20_rb_");
sy_First_Dataflow_bind_lb_31_rb_=rb_intern("First_Dataflow_bind_lb_31_rb_");
sy_First_Dataflow_depends_lp_=rb_intern("First_Dataflow_depends_lp_");
sy_First_Dataflow_empty=rb_intern("First_Dataflow_empty");
sy_First_Dataflow_lattice_dot_2=rb_intern("First_Dataflow_lattice_dot_2");
sy_First_Dataflow_lattice_dot_=rb_intern("First_Dataflow_lattice_dot_");
sy_First_Dataflow_src_dot_firs=rb_intern("First_Dataflow_src_dot_firs");
sy_analyze=rb_intern("analyze");
sy_size=rb_intern("size");
sy_stop=rb_intern("stop");
rb_define_method(cls_First_Dataflow,"first",First_Dataflow_first,0);
rb_define_method(cls_First_Dataflow,"getvalue",First_Dataflow_getvalue,1);
rb_define_method(cls_First_Dataflow,"root",First_Dataflow_root,0);
rb_define_method(cls_First_Dataflow,"value",First_Dataflow_value,0);

 cls_Sizes_Dataflow=rb_define_class("Sizes_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
switchhashFirst_Dataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow1);
switchhashFirst_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Cut\nnext h[k]=4 if k<=Local\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Seq\nnext h[k]=9 if k<=Stop\nnext h[k]=10 if k<=Switch\nnext h[k]=11 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow2);
switchhashSizes_Dataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSizes_Dataflow1);
switchhashSizes_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSizes_Dataflow2);
switchhashSizes_Dataflow3=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSizes_Dataflow3);
sy_Sizes_Dataflow__append_lp_2=rb_intern("Sizes_Dataflow__append_lp_2");
sy_Sizes_Dataflow__append_lp_3=rb_intern("Sizes_Dataflow__append_lp_3");
sy_Sizes_Dataflow__append_lp_4=rb_intern("Sizes_Dataflow__append_lp_4");
sy_Sizes_Dataflow__append_lp_5=rb_intern("Sizes_Dataflow__append_lp_5");
sy_Sizes_Dataflow__append_lp_6=rb_intern("Sizes_Dataflow__append_lp_6");
sy_Sizes_Dataflow__append_lp_=rb_intern("Sizes_Dataflow__append_lp_");
sy_Sizes_Dataflow__at_vis_eq_bin=rb_intern("Sizes_Dataflow__at_vis_eq_bin");
sy_Sizes_Dataflow__lp_src_dot_fir=rb_intern("Sizes_Dataflow__lp_src_dot_fir");
sy_Sizes_Dataflow_bind_lb_15_rb_=rb_intern("Sizes_Dataflow_bind_lb_15_rb_");
sy_Sizes_Dataflow_bind_lb_1_rb__eq_=rb_intern("Sizes_Dataflow_bind_lb_1_rb__eq_");
sy_Sizes_Dataflow_bind_lb_26_rb_2=rb_intern("Sizes_Dataflow_bind_lb_26_rb_2");
sy_Sizes_Dataflow_bind_lb_26_rb_=rb_intern("Sizes_Dataflow_bind_lb_26_rb_");
sy_Sizes_Dataflow_bind_lb_41_rb_=rb_intern("Sizes_Dataflow_bind_lb_41_rb_");
sy_Sizes_Dataflow_empty=rb_intern("Sizes_Dataflow_empty");
sy_Sizes_Dataflow_lattice_dot_2=rb_intern("Sizes_Dataflow_lattice_dot_2");
sy_Sizes_Dataflow_lattice_dot_=rb_intern("Sizes_Dataflow_lattice_dot_");
sy_Sizes_Dataflow_lattice_lb_2=rb_intern("Sizes_Dataflow_lattice_lb_2");
sy_Sizes_Dataflow_lattice_lb_=rb_intern("Sizes_Dataflow_lattice_lb_");
sy_Sizes_Dataflow_src_dot_firs=rb_intern("Sizes_Dataflow_src_dot_firs");
sy_size=rb_intern("size");
sy_stop=rb_intern("stop");
rb_define_method(cls_Sizes_Dataflow,"first",Sizes_Dataflow_first,0);
rb_define_method(cls_Sizes_Dataflow,"first_Sizes_Dataflow",Sizes_Dataflow_first_Sizes_Dataflow,0);
rb_define_method(cls_Sizes_Dataflow,"getvalue",Sizes_Dataflow_getvalue,1);

 cls_Switch_Dataflow=rb_define_class("Switch_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
c_Act=rb_const_get(rb_cObject, rb_intern("Act"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Act);
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
switchhashFirst_Dataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow1);
switchhashFirst_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Cut\nnext h[k]=4 if k<=Local\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Seq\nnext h[k]=9 if k<=Stop\nnext h[k]=10 if k<=Switch\nnext h[k]=11 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow2);
switchhashSwitch_Dataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSwitch_Dataflow1);
switchhashSwitch_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSwitch_Dataflow2);
switchhashSwitch_Dataflow3=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSwitch_Dataflow3);
sy_Switch_Dataflow__append_lp_2=rb_intern("Switch_Dataflow__append_lp_2");
sy_Switch_Dataflow__append_lp_3=rb_intern("Switch_Dataflow__append_lp_3");
sy_Switch_Dataflow__append_lp_4=rb_intern("Switch_Dataflow__append_lp_4");
sy_Switch_Dataflow__append_lp_5=rb_intern("Switch_Dataflow__append_lp_5");
sy_Switch_Dataflow__append_lp_6=rb_intern("Switch_Dataflow__append_lp_6");
sy_Switch_Dataflow__append_lp_=rb_intern("Switch_Dataflow__append_lp_");
sy_Switch_Dataflow__at_vis_eq_bin=rb_intern("Switch_Dataflow__at_vis_eq_bin");
sy_Switch_Dataflow__lp_src_dot_fir=rb_intern("Switch_Dataflow__lp_src_dot_fir");
sy_Switch_Dataflow_bind_lb_15_rb_=rb_intern("Switch_Dataflow_bind_lb_15_rb_");
sy_Switch_Dataflow_bind_lb_1_rb__eq_=rb_intern("Switch_Dataflow_bind_lb_1_rb__eq_");
sy_Switch_Dataflow_bind_lb_26_rb_2=rb_intern("Switch_Dataflow_bind_lb_26_rb_2");
sy_Switch_Dataflow_bind_lb_26_rb_=rb_intern("Switch_Dataflow_bind_lb_26_rb_");
sy_Switch_Dataflow_bind_lb_41_rb_=rb_intern("Switch_Dataflow_bind_lb_41_rb_");
sy_Switch_Dataflow_empty=rb_intern("Switch_Dataflow_empty");
sy_Switch_Dataflow_firstcha=rb_intern("Switch_Dataflow_firstcha");
sy_Switch_Dataflow_lattice_dot_2=rb_intern("Switch_Dataflow_lattice_dot_2");
sy_Switch_Dataflow_lattice_dot_3=rb_intern("Switch_Dataflow_lattice_dot_3");
sy_Switch_Dataflow_lattice_dot_=rb_intern("Switch_Dataflow_lattice_dot_");
sy_Switch_Dataflow_regchar_lp_=rb_intern("Switch_Dataflow_regchar_lp_");
sy_Switch_Dataflow_src_dot_firs=rb_intern("Switch_Dataflow_src_dot_firs");
sy_size=rb_intern("size");
sy_stop=rb_intern("stop");
rb_define_method(cls_Switch_Dataflow,"first",Switch_Dataflow_first,0);
rb_define_method(cls_Switch_Dataflow,"first_Switch_Dataflow",Switch_Dataflow_first_Switch_Dataflow,0);
rb_define_method(cls_Switch_Dataflow,"getvalue",Switch_Dataflow_getvalue,1);

 cls_ClasSwitch_Dataflow=rb_define_class("ClasSwitch_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
switchhashClasSwitch_Dataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashClasSwitch_Dataflow1);
switchhashClasSwitch_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashClasSwitch_Dataflow2);
switchhashFirst_Dataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow1);
switchhashFirst_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Cut\nnext h[k]=4 if k<=Local\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Seq\nnext h[k]=9 if k<=Stop\nnext h[k]=10 if k<=Switch\nnext h[k]=11 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow2);
sy_ClasSwitch_Dataflow__append_lp_2=rb_intern("ClasSwitch_Dataflow__append_lp_2");
sy_ClasSwitch_Dataflow__append_lp_3=rb_intern("ClasSwitch_Dataflow__append_lp_3");
sy_ClasSwitch_Dataflow__append_lp_4=rb_intern("ClasSwitch_Dataflow__append_lp_4");
sy_ClasSwitch_Dataflow__append_lp_5=rb_intern("ClasSwitch_Dataflow__append_lp_5");
sy_ClasSwitch_Dataflow__append_lp_6=rb_intern("ClasSwitch_Dataflow__append_lp_6");
sy_ClasSwitch_Dataflow__append_lp_7=rb_intern("ClasSwitch_Dataflow__append_lp_7");
sy_ClasSwitch_Dataflow__append_lp_=rb_intern("ClasSwitch_Dataflow__append_lp_");
sy_ClasSwitch_Dataflow__at_vis_eq_bin=rb_intern("ClasSwitch_Dataflow__at_vis_eq_bin");
sy_ClasSwitch_Dataflow__do_rules_lb_b=rb_intern("ClasSwitch_Dataflow__do_rules_lb_b");
sy_ClasSwitch_Dataflow__lp__do_rules_lb_=rb_intern("ClasSwitch_Dataflow__lp__do_rules_lb_");
sy_ClasSwitch_Dataflow__lp_src_dot_fir=rb_intern("ClasSwitch_Dataflow__lp_src_dot_fir");
sy_ClasSwitch_Dataflow_bind_lb_10_rb_=rb_intern("ClasSwitch_Dataflow_bind_lb_10_rb_");
sy_ClasSwitch_Dataflow_bind_lb_15_rb_=rb_intern("ClasSwitch_Dataflow_bind_lb_15_rb_");
sy_ClasSwitch_Dataflow_bind_lb_1_rb__eq_=rb_intern("ClasSwitch_Dataflow_bind_lb_1_rb__eq_");
sy_ClasSwitch_Dataflow_bind_lb_26_rb_2=rb_intern("ClasSwitch_Dataflow_bind_lb_26_rb_2");
sy_ClasSwitch_Dataflow_bind_lb_26_rb_=rb_intern("ClasSwitch_Dataflow_bind_lb_26_rb_");
sy_ClasSwitch_Dataflow_bind_lb_41_rb_=rb_intern("ClasSwitch_Dataflow_bind_lb_41_rb_");
sy_ClasSwitch_Dataflow_empty=rb_intern("ClasSwitch_Dataflow_empty");
sy_ClasSwitch_Dataflow_lattice_dot_2=rb_intern("ClasSwitch_Dataflow_lattice_dot_2");
sy_ClasSwitch_Dataflow_lattice_dot_=rb_intern("ClasSwitch_Dataflow_lattice_dot_");
sy_ClasSwitch_Dataflow_lattice_lb_=rb_intern("ClasSwitch_Dataflow_lattice_lb_");
sy_ClasSwitch_Dataflow_src_dot_firs=rb_intern("ClasSwitch_Dataflow_src_dot_firs");
sy_size=rb_intern("size");
sy_stop=rb_intern("stop");
rb_define_method(cls_ClasSwitch_Dataflow,"first",ClasSwitch_Dataflow_first,0);
rb_define_method(cls_ClasSwitch_Dataflow,"first_ClasSwitch_Dataflow",ClasSwitch_Dataflow_first_ClasSwitch_Dataflow,0);
rb_define_method(cls_ClasSwitch_Dataflow,"getvalue",ClasSwitch_Dataflow_getvalue,1);

 cls_Detect_First=rb_define_class("Detect_First",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
switchhashDetect_First1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_First1);
sy_Detect_First__append_lp_2=rb_intern("Detect_First__append_lp_2");
sy_Detect_First__append_lp_=rb_intern("Detect_First__append_lp_");
sy_Detect_First__at_name_eq_sr=rb_intern("Detect_First__at_name_eq_sr");
sy_Detect_First__do_rules_eq_=rb_intern("Detect_First__do_rules_eq_");
sy_Detect_First_bind_lb_3_rb__eq_=rb_intern("Detect_First_bind_lb_3_rb__eq_");
sy_Detect_First_src=rb_intern("Detect_First_src");
sy_Detect_First_src_dot_rule2=rb_intern("Detect_First_src_dot_rule2");
sy_Detect_First_src_dot_rule=rb_intern("Detect_First_src_dot_rule");
sy_size=rb_intern("size");
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
sy_Detect_Switch_CharLatt=rb_intern("Detect_Switch_CharLatt");
sy_Detect_Switch_Or_lb__ti_bind2=rb_intern("Detect_Switch_Or_lb__ti_bind2");
sy_Detect_Switch_Or_lb__ti_bind=rb_intern("Detect_Switch_Or_lb__ti_bind");
sy_Detect_Switch_Placehol=rb_intern("Detect_Switch_Placehol");
sy_Detect_Switch_Seq_lb__ti__lp__lb_b=rb_intern("Detect_Switch_Seq_lb__ti__lp__lb_b");
sy_Detect_Switch__append_lp_10=rb_intern("Detect_Switch__append_lp_10");
sy_Detect_Switch__append_lp_11=rb_intern("Detect_Switch__append_lp_11");
sy_Detect_Switch__append_lp_2=rb_intern("Detect_Switch__append_lp_2");
sy_Detect_Switch__append_lp_3=rb_intern("Detect_Switch__append_lp_3");
sy_Detect_Switch__append_lp_4=rb_intern("Detect_Switch__append_lp_4");
sy_Detect_Switch__append_lp_5=rb_intern("Detect_Switch__append_lp_5");
sy_Detect_Switch__append_lp_6=rb_intern("Detect_Switch__append_lp_6");
sy_Detect_Switch__append_lp_7=rb_intern("Detect_Switch__append_lp_7");
sy_Detect_Switch__append_lp_8=rb_intern("Detect_Switch__append_lp_8");
sy_Detect_Switch__append_lp_9=rb_intern("Detect_Switch__append_lp_9");
sy_Detect_Switch__append_lp_=rb_intern("Detect_Switch__append_lp_");
sy_Detect_Switch__at_cases_dot_e=rb_intern("Detect_Switch__at_cases_dot_e");
sy_Detect_Switch__at_cases_eq__at_=rb_intern("Detect_Switch__at_cases_eq__at_");
sy_Detect_Switch__at_cases_eq__lb_=rb_intern("Detect_Switch__at_cases_eq__lb_");
sy_Detect_Switch__at_changed2=rb_intern("Detect_Switch__at_changed2");
sy_Detect_Switch__at_changed3=rb_intern("Detect_Switch__at_changed3");
sy_Detect_Switch__at_changed=rb_intern("Detect_Switch__at_changed");
sy_Detect_Switch__at_name_eq_sr=rb_intern("Detect_Switch__at_name_eq_sr");
sy_Detect_Switch__do_rules_eq_=rb_intern("Detect_Switch__do_rules_eq_");
sy_Detect_Switch__lp_=rb_intern("Detect_Switch__lp_");
sy_Detect_Switch__lp_bind_lb_0_rb_=rb_intern("Detect_Switch__lp_bind_lb_0_rb_");
sy_Detect_Switch__lp_bind_lb_1_rb_=rb_intern("Detect_Switch__lp_bind_lb_1_rb_");
sy_Detect_Switch__lp_bind_lb_2_rb_=rb_intern("Detect_Switch__lp_bind_lb_2_rb_");
sy_Detect_Switch__lp_bind_lb_4_rb_=rb_intern("Detect_Switch__lp_bind_lb_4_rb_");
sy_Detect_Switch__lp_bind_lb_9_rb_=rb_intern("Detect_Switch__lp_bind_lb_9_rb_");
sy_Detect_Switch__lp_first_lp_b=rb_intern("Detect_Switch__lp_first_lp_b");
sy_Detect_Switch__lp_src_dot_ins=rb_intern("Detect_Switch__lp_src_dot_ins");
sy_Detect_Switch_bind_lb_10_rb_=rb_intern("Detect_Switch_bind_lb_10_rb_");
sy_Detect_Switch_bind_lb_1_rb_=rb_intern("Detect_Switch_bind_lb_1_rb_");
sy_Detect_Switch_bind_lb_1_rb__eq_=rb_intern("Detect_Switch_bind_lb_1_rb__eq_");
sy_Detect_Switch_bind_lb_2_rb__eq_=rb_intern("Detect_Switch_bind_lb_2_rb__eq_");
sy_Detect_Switch_bind_lb_2_rb__lt_=rb_intern("Detect_Switch_bind_lb_2_rb__lt_");
sy_Detect_Switch_bind_lb_3_rb__eq_=rb_intern("Detect_Switch_bind_lb_3_rb__eq_");
sy_Detect_Switch_bind_lb_5_rb__eq_=rb_intern("Detect_Switch_bind_lb_5_rb__eq_");
sy_Detect_Switch_bind_lb_5_rb__lt_=rb_intern("Detect_Switch_bind_lb_5_rb__lt_");
sy_Detect_Switch_bind_lb_6_rb__eq_=rb_intern("Detect_Switch_bind_lb_6_rb__eq_");
sy_Detect_Switch_bind_lb_8_rb__eq_=rb_intern("Detect_Switch_bind_lb_8_rb__eq_");
sy_Detect_Switch_if_sp_bind_lb_=rb_intern("Detect_Switch_if_sp_bind_lb_");
sy_Detect_Switch_nary_eq_bin=rb_intern("Detect_Switch_nary_eq_bin");
sy_Detect_Switch_s_eq_Switch=rb_intern("Detect_Switch_s_eq_Switch");
sy_Detect_Switch_src=rb_intern("Detect_Switch_src");
sy_Detect_Switch_src_dot_rule2=rb_intern("Detect_Switch_src_dot_rule2");
sy_Detect_Switch_src_dot_rule=rb_intern("Detect_Switch_src_dot_rule");
sy_first=rb_intern("first");
sy_size=rb_intern("size");
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
sy_Detect_ClasSwitch_Apply_lb_=rb_intern("Detect_ClasSwitch_Apply_lb_");
sy_Detect_ClasSwitch_Bind_lb_bin=rb_intern("Detect_ClasSwitch_Bind_lb_bin");
sy_Detect_ClasSwitch_ClasLatt=rb_intern("Detect_ClasSwitch_ClasLatt");
sy_Detect_ClasSwitch_Or_lb__ti_bind2=rb_intern("Detect_ClasSwitch_Or_lb__ti_bind2");
sy_Detect_ClasSwitch_Or_lb__ti_bind=rb_intern("Detect_ClasSwitch_Or_lb__ti_bind");
sy_Detect_ClasSwitch_Placehol=rb_intern("Detect_ClasSwitch_Placehol");
sy_Detect_ClasSwitch_Seq_lb__ti__lp__lb_b=rb_intern("Detect_ClasSwitch_Seq_lb__ti__lp__lb_b");
sy_Detect_ClasSwitch__append_lp_2=rb_intern("Detect_ClasSwitch__append_lp_2");
sy_Detect_ClasSwitch__append_lp_3=rb_intern("Detect_ClasSwitch__append_lp_3");
sy_Detect_ClasSwitch__append_lp_4=rb_intern("Detect_ClasSwitch__append_lp_4");
sy_Detect_ClasSwitch__append_lp_5=rb_intern("Detect_ClasSwitch__append_lp_5");
sy_Detect_ClasSwitch__append_lp_6=rb_intern("Detect_ClasSwitch__append_lp_6");
sy_Detect_ClasSwitch__append_lp_7=rb_intern("Detect_ClasSwitch__append_lp_7");
sy_Detect_ClasSwitch__append_lp_8=rb_intern("Detect_ClasSwitch__append_lp_8");
sy_Detect_ClasSwitch__append_lp_9=rb_intern("Detect_ClasSwitch__append_lp_9");
sy_Detect_ClasSwitch__append_lp_=rb_intern("Detect_ClasSwitch__append_lp_");
sy_Detect_ClasSwitch__at_changed2=rb_intern("Detect_ClasSwitch__at_changed2");
sy_Detect_ClasSwitch__at_changed3=rb_intern("Detect_ClasSwitch__at_changed3");
sy_Detect_ClasSwitch__at_changed=rb_intern("Detect_ClasSwitch__at_changed");
sy_Detect_ClasSwitch__at_name_eq_sr=rb_intern("Detect_ClasSwitch__at_name_eq_sr");
sy_Detect_ClasSwitch__do_rules_eq_=rb_intern("Detect_ClasSwitch__do_rules_eq_");
sy_Detect_ClasSwitch__lp_=rb_intern("Detect_ClasSwitch__lp_");
sy_Detect_ClasSwitch__lp_bind_lb_0_rb_=rb_intern("Detect_ClasSwitch__lp_bind_lb_0_rb_");
sy_Detect_ClasSwitch__lp_bind_lb_1_rb_=rb_intern("Detect_ClasSwitch__lp_bind_lb_1_rb_");
sy_Detect_ClasSwitch__lp_bind_lb_4_rb_=rb_intern("Detect_ClasSwitch__lp_bind_lb_4_rb_");
sy_Detect_ClasSwitch__lp_bind_lb_7_rb_=rb_intern("Detect_ClasSwitch__lp_bind_lb_7_rb_");
sy_Detect_ClasSwitch__lp_child_lp_b=rb_intern("Detect_ClasSwitch__lp_child_lp_b");
sy_Detect_ClasSwitch__lp_first_lp_b=rb_intern("Detect_ClasSwitch__lp_first_lp_b");
sy_Detect_ClasSwitch__lp_src_dot_ins=rb_intern("Detect_ClasSwitch__lp_src_dot_ins");
sy_Detect_ClasSwitch_bind_lb_1_rb_=rb_intern("Detect_ClasSwitch_bind_lb_1_rb_");
sy_Detect_ClasSwitch_bind_lb_1_rb__dot_=rb_intern("Detect_ClasSwitch_bind_lb_1_rb__dot_");
sy_Detect_ClasSwitch_bind_lb_1_rb__eq_=rb_intern("Detect_ClasSwitch_bind_lb_1_rb__eq_");
sy_Detect_ClasSwitch_bind_lb_2_rb__eq_2=rb_intern("Detect_ClasSwitch_bind_lb_2_rb__eq_2");
sy_Detect_ClasSwitch_bind_lb_2_rb__eq_3=rb_intern("Detect_ClasSwitch_bind_lb_2_rb__eq_3");
sy_Detect_ClasSwitch_bind_lb_2_rb__eq_=rb_intern("Detect_ClasSwitch_bind_lb_2_rb__eq_");
sy_Detect_ClasSwitch_bind_lb_4_rb__eq_=rb_intern("Detect_ClasSwitch_bind_lb_4_rb__eq_");
sy_Detect_ClasSwitch_bind_lb_5_rb__eq_=rb_intern("Detect_ClasSwitch_bind_lb_5_rb__eq_");
sy_Detect_ClasSwitch_bind_lb_5_rb__lt_=rb_intern("Detect_ClasSwitch_bind_lb_5_rb__lt_");
sy_Detect_ClasSwitch_bind_lb_6_rb__eq_=rb_intern("Detect_ClasSwitch_bind_lb_6_rb__eq_");
sy_Detect_ClasSwitch_c_eq_classs=rb_intern("Detect_ClasSwitch_c_eq_classs");
sy_Detect_ClasSwitch_if_sp_bind_lb_=rb_intern("Detect_ClasSwitch_if_sp_bind_lb_");
sy_Detect_ClasSwitch_predicat=rb_intern("Detect_ClasSwitch_predicat");
sy_Detect_ClasSwitch_src=rb_intern("Detect_ClasSwitch_src");
sy_Detect_ClasSwitch_src_dot_name=rb_intern("Detect_ClasSwitch_src_dot_name");
sy_Detect_ClasSwitch_src_dot_rule2=rb_intern("Detect_ClasSwitch_src_dot_rule2");
sy_Detect_ClasSwitch_src_dot_rule=rb_intern("Detect_ClasSwitch_src_dot_rule");
sy_size=rb_intern("size");
rb_define_method(cls_Detect_ClasSwitch,"itrans",Detect_ClasSwitch_itrans,0);
rb_define_method(cls_Detect_ClasSwitch,"predicate",Detect_ClasSwitch_predicate,3);
rb_define_method(cls_Detect_ClasSwitch,"root",Detect_ClasSwitch_root,0);
rb_define_method(cls_Detect_ClasSwitch,"traverse",Detect_ClasSwitch_traverse,0);
rb_define_method(cls_Detect_ClasSwitch,"traverse_item",Detect_ClasSwitch_traverse_item,0);
rb_define_method(cls_Detect_ClasSwitch,"visit",Detect_ClasSwitch_visit,0);
 rb_eval_string("testversiondetect_switch('6e8b2fc030a345e8ecd63888dd94cfc9')");}
