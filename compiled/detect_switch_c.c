#include "cthyst.h"
VALUE cls_First_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE First_Dataflow_first(VALUE self );
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE First_Dataflow_root(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE switchhash_First_Dataflow_1;
static VALUE sy_First_Dataflow_Compiler_46ba;
static VALUE sy_First_Dataflow__append_lp__2a35;
static VALUE sy_First_Dataflow__append_lp__4297;
static VALUE sy_First_Dataflow__append_lp__9ca5;
static VALUE sy_First_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_First_Dataflow__lp_;
static VALUE sy_First_Dataflow__lp_Compile_8023;
static VALUE sy_First_Dataflow_bind_lb_0_rb__dot__b660;
static VALUE sy_First_Dataflow_bind_lb_12_rb__900a;
static VALUE sy_First_Dataflow_bind_lb_19_rb__2b52;
static VALUE sy_First_Dataflow_bind_lb_19_rb__e313;
static VALUE sy_First_Dataflow_bind_lb_4_rb__dot__2651;
static VALUE sy_First_Dataflow_depends_lp__5009;
static VALUE sy_First_Dataflow_empty;
static VALUE sy_First_Dataflow_lattice_dot__5a9e;
static VALUE sy_analyze;
VALUE First_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(35);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*vals*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_First_Dataflow_1,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass2); bind_aset(bind,5/*v*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_4_rb__dot__2651,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__4297,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto break1;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_First_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break2); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*it*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_12_rb__900a,1,bind);  bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_3;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,4/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,5/*v*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_4_rb__dot__2651,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__4297,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto break3;
 if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_First_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt2_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;
case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__2a35,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,12/*it*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_12_rb__900a,1,bind);  bind_aset(bind,17/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt3_2;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;
case 3:; int oldpos8=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,18/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,19/*val*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,14/*el*/,it);
it=bind_aget(bind,14/*el*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,20/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto break5;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,22/*nev*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_19_rb__e313,1,bind);  bind_aset(bind,19/*val*/,it);
int oldpos10=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
 it=rb_funcall(self,sy_First_Dataflow__lp_,1,bind); FAILTEST(alt5_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
   it=Amethyst_empty(self ); FAILTEST(alt5_3); 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos10); goto break5;
 accept5:;
 if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=bind_aget(bind,19/*val*/); bind_aset(bind,23/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt4_2;
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos8); goto fail;
 accept4:;
 break;
case 4:; int oldpos12=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass9); bind_aset(bind,19/*val*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_19_rb__2b52,1,bind);  bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt6_2;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos12); goto fail;
 accept6:;
 break;
case 5:; int oldpos13=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,27/*name*/,it);
it=rb_funcall(self,sy_First_Dataflow__lp_Compile_8023,1,bind); FAILTEST(pass10);it=rb_funcall(self,sy_First_Dataflow_Compiler_46ba,1,bind);  bind_aset(bind,28/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,28/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass11); bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto pass10;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,30/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto alt7_2;
it=bind_aget(bind,30/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos13); goto fail;
 accept7:;
 break;
case 6:; int oldpos14=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos15; while(1){oldpos15=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break7); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos15=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos15); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*it*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_12_rb__900a,1,bind);  bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto alt8_2;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos14); goto fail;
 accept8:;
 break;
case 7:; int oldpos16=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_2); bind_aset(bind,31/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,31/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass13); bind_aset(bind,32/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto alt9_2;
it=bind_aget(bind,32/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos16); goto fail;
 accept9:;
 break;
case 8:; int oldpos17=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt10_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos18; while(1){oldpos18=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break8); if (ame_getstop(self)!=Qnil){{oldpos18=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos18); it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto alt10_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt10_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
  alt10_3:  ame_setpos(self,oldpos17); goto fail;
 accept10:;
 break;
case 9:; int oldpos19=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt11_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos20; while(1){oldpos20=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break9); if (ame_getstop(self)!=Qnil){{oldpos20=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos20); it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto alt11_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt11_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept11;
  alt11_3:  ame_setpos(self,oldpos19); goto fail;
 accept11:;
 break;
case 10:; int oldpos21=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt12_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass16=*ptr; int fail16=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos22; while(1){oldpos22=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break10); if (ame_getstop(self)!=Qnil){{oldpos22=ame_getpos(self);goto break10;} } } break10: ame_setstop(self,Qnil);  ame_setpos(self,oldpos22); it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass16);
	goto success16;
	pass16: fail16=1;
	success16: *ptr=oldpass16;
	if(fail16) goto alt12_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
alt12_2: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt12_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
  alt12_3:  ame_setpos(self,oldpos21); goto fail;
 accept12:;
 break;
case 11:; int oldpos23=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt13_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass17=*ptr; int fail17=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos24; while(1){oldpos24=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break11); if (ame_getstop(self)!=Qnil){{oldpos24=ame_getpos(self);goto break11;} } } break11: ame_setstop(self,Qnil);  ame_setpos(self,oldpos24); it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass17);
	goto success17;
	pass17: fail17=1;
	success17: *ptr=oldpass17;
	if(fail17) goto alt13_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept13;
alt13_2: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt13_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept13;
  alt13_3:  ame_setpos(self,oldpos23); goto fail;
 accept13:;
 break;
case 12:; int oldpos25=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt14_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass18=*ptr; int fail18=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos26; while(1){oldpos26=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break12); if (ame_getstop(self)!=Qnil){{oldpos26=ame_getpos(self);goto break12;} } } break12: ame_setstop(self,Qnil);  ame_setpos(self,oldpos26); it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass18);
	goto success18;
	pass18: fail18=1;
	success18: *ptr=oldpass18;
	if(fail18) goto alt14_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept14;
alt14_2: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt14_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept14;
  alt14_3:  ame_setpos(self,oldpos25); goto fail;
 accept14:;
 break;
case 13:; int oldpos27=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt15_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass19=*ptr; int fail19=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos28; while(1){oldpos28=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break13); if (ame_getstop(self)!=Qnil){{oldpos28=ame_getpos(self);goto break13;} } } break13: ame_setstop(self,Qnil);  ame_setpos(self,oldpos28); it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass19);
	goto success19;
	pass19: fail19=1;
	success19: *ptr=oldpass19;
	if(fail19) goto alt15_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt15_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
  alt15_3:  ame_setpos(self,oldpos27); goto fail;
 accept15:;
 break;
case 14:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 break;
}
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
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Sizes_Dataflow_first(VALUE self );
VALUE Sizes_Dataflow_first_Sizes_Dataflow(VALUE self );
VALUE Sizes_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Sizes_Dataflow_1;
VALUE switchhash_Sizes_Dataflow_2;
VALUE switchhash_Sizes_Dataflow_3;
static VALUE sy_Sizes_Dataflow_Compiler_46ba;
static VALUE sy_Sizes_Dataflow__append_lp__2a35;
static VALUE sy_Sizes_Dataflow__append_lp__4297;
static VALUE sy_Sizes_Dataflow__append_lp__9ca5;
static VALUE sy_Sizes_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Sizes_Dataflow__lp_;
static VALUE sy_Sizes_Dataflow__lp_Compile_8023;
static VALUE sy_Sizes_Dataflow_bind_lb_0_rb__dot__b660;
static VALUE sy_Sizes_Dataflow_bind_lb_12_rb__900a;
static VALUE sy_Sizes_Dataflow_bind_lb_19_rb__2b52;
static VALUE sy_Sizes_Dataflow_bind_lb_19_rb__e313;
static VALUE sy_Sizes_Dataflow_bind_lb_4_rb__dot__2651;
static VALUE sy_Sizes_Dataflow_empty;
static VALUE sy_Sizes_Dataflow_lattice_dot__5a9e;
static VALUE sy_Sizes_Dataflow_lattice_dot__e0e5;
static VALUE sy_Sizes_Dataflow_lattice_lb__fdc8;
static VALUE sy_Sizes_Dataflow_lattice_lb__fdee;
VALUE Sizes_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Sizes_Dataflow_1,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr(self)){case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"seq",3)) goto pass2; else ame_setpos(self,ame_getpos(self)+3); break;
case UC(0) ... '^':;case '`' ... UC(255):; goto pass2; break;
}  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
switch(FIX2LONG(rb_hash_aref(switchhash_Sizes_Dataflow_2,rb_obj_class(ame_curobj(self))))){case 0:;   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,4/*autovar*/,it);
 break;
case 1:; goto alt2_2; break;
}cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,5/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt2_2;
it=rb_funcall(self,sy_Sizes_Dataflow_lattice_lb__fdc8,1,bind);  bind_aset(bind,6/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass4);switch((unsigned char)*ame_curstr(self)){case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr(self),"egch",4)) goto pass4; else ame_setpos(self,ame_getpos(self)+4); break;
case 'c' ... 'c':;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr(self),"las",3)) goto pass4; else ame_setpos(self,ame_getpos(self)+3); break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr(self),"nything",7)) goto pass4; else ame_setpos(self,ame_getpos(self)+7); break;
case UC(0) ... '`':;case 'b' ... 'b':;case 'd' ... 'q':;case 's' ... UC(255):; goto pass4; break;
}  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt2_3;
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_lb__fdee,1,bind);  bind_aset(bind,6/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr(self)){case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr(self),"ails",4)) goto pass5; else ame_setpos(self,ame_getpos(self)+4); break;
case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass5; break;
}  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt2_4;
it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__e0e5,1,bind);  bind_aset(bind,6/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto pass1;
 accept2:;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Sizes_Dataflow_first_Sizes_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:;   it=Sizes_Dataflow_first_Sizes_Dataflow(self ); FAILTEST(fail); bind_aset(bind,9/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_first_Sizes_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(35);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*vals*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_Sizes_Dataflow_3,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass2); bind_aset(bind,5/*v*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_4_rb__dot__2651,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__4297,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto break1;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break2); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*it*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_12_rb__900a,1,bind);  bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_3;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,4/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,5/*v*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_4_rb__dot__2651,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__4297,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto break3;
 if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt2_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;
case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__2a35,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,12/*it*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_12_rb__900a,1,bind);  bind_aset(bind,17/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt3_2;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;
case 3:; int oldpos8=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,18/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,19/*val*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,14/*el*/,it);
it=bind_aget(bind,14/*el*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,20/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto break5;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,22/*nev*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_19_rb__e313,1,bind);  bind_aset(bind,19/*val*/,it);
int oldpos10=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
 it=rb_funcall(self,sy_Sizes_Dataflow__lp_,1,bind); FAILTEST(alt5_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
   it=Amethyst_empty(self ); FAILTEST(alt5_3); 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos10); goto break5;
 accept5:;
 if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=bind_aget(bind,19/*val*/); bind_aset(bind,23/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt4_2;
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos8); goto fail;
 accept4:;
 break;
case 4:; int oldpos12=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass9); bind_aset(bind,19/*val*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_19_rb__2b52,1,bind);  bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt6_2;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos12); goto fail;
 accept6:;
 break;
case 5:; int oldpos13=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,27/*name*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__lp_Compile_8023,1,bind); FAILTEST(pass10);it=rb_funcall(self,sy_Sizes_Dataflow_Compiler_46ba,1,bind);  bind_aset(bind,28/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,28/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass11); bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto pass10;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,30/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto alt7_2;
it=bind_aget(bind,30/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos13); goto fail;
 accept7:;
 break;
case 6:; int oldpos14=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos15; while(1){oldpos15=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break7); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos15=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos15); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*it*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_12_rb__900a,1,bind);  bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto alt8_2;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos14); goto fail;
 accept8:;
 break;
case 7:; int oldpos16=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_2); bind_aset(bind,31/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,31/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass13); bind_aset(bind,32/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto alt9_2;
it=bind_aget(bind,32/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos16); goto fail;
 accept9:;
 break;
case 8:; int oldpos17=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt10_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos18; while(1){oldpos18=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break8); if (ame_getstop(self)!=Qnil){{oldpos18=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos18); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto alt10_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt10_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
  alt10_3:  ame_setpos(self,oldpos17); goto fail;
 accept10:;
 break;
case 9:; int oldpos19=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt11_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos20; while(1){oldpos20=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break9); if (ame_getstop(self)!=Qnil){{oldpos20=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos20); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto alt11_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt11_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept11;
  alt11_3:  ame_setpos(self,oldpos19); goto fail;
 accept11:;
 break;
case 10:; int oldpos21=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt12_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass16=*ptr; int fail16=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos22; while(1){oldpos22=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break10); if (ame_getstop(self)!=Qnil){{oldpos22=ame_getpos(self);goto break10;} } } break10: ame_setstop(self,Qnil);  ame_setpos(self,oldpos22); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass16);
	goto success16;
	pass16: fail16=1;
	success16: *ptr=oldpass16;
	if(fail16) goto alt12_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
alt12_2: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt12_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
  alt12_3:  ame_setpos(self,oldpos21); goto fail;
 accept12:;
 break;
case 11:; int oldpos23=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt13_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass17=*ptr; int fail17=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos24; while(1){oldpos24=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break11); if (ame_getstop(self)!=Qnil){{oldpos24=ame_getpos(self);goto break11;} } } break11: ame_setstop(self,Qnil);  ame_setpos(self,oldpos24); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass17);
	goto success17;
	pass17: fail17=1;
	success17: *ptr=oldpass17;
	if(fail17) goto alt13_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept13;
alt13_2: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt13_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept13;
  alt13_3:  ame_setpos(self,oldpos23); goto fail;
 accept13:;
 break;
case 12:; int oldpos25=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt14_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass18=*ptr; int fail18=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos26; while(1){oldpos26=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break12); if (ame_getstop(self)!=Qnil){{oldpos26=ame_getpos(self);goto break12;} } } break12: ame_setstop(self,Qnil);  ame_setpos(self,oldpos26); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass18);
	goto success18;
	pass18: fail18=1;
	success18: *ptr=oldpass18;
	if(fail18) goto alt14_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept14;
alt14_2: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt14_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept14;
  alt14_3:  ame_setpos(self,oldpos25); goto fail;
 accept14:;
 break;
case 13:; int oldpos27=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt15_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass19=*ptr; int fail19=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos28; while(1){oldpos28=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break13); if (ame_getstop(self)!=Qnil){{oldpos28=ame_getpos(self);goto break13;} } } break13: ame_setstop(self,Qnil);  ame_setpos(self,oldpos28); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass19);
	goto success19;
	pass19: fail19=1;
	success19: *ptr=oldpass19;
	if(fail19) goto alt15_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt15_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
  alt15_3:  ame_setpos(self,oldpos27); goto fail;
 accept15:;
 break;
case 14:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 break;
}
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

return it;
fail: return failobj; }VALUE cls_Switch_Char_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Switch_Char_Dataflow_first(VALUE self );
VALUE Switch_Char_Dataflow_first_Switch_Char_Dataflow(VALUE self );
VALUE Switch_Char_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Switch_Char_Dataflow_1;
VALUE switchhash_Switch_Char_Dataflow_2;
VALUE switchhash_Switch_Char_Dataflow_3;
VALUE switchhash_Switch_Char_Dataflow_4;
static VALUE sy_Switch_Char_Dataflow_Compiler_46ba;
static VALUE sy_Switch_Char_Dataflow__append_lp__2a35;
static VALUE sy_Switch_Char_Dataflow__append_lp__4297;
static VALUE sy_Switch_Char_Dataflow__append_lp__9ca5;
static VALUE sy_Switch_Char_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Switch_Char_Dataflow__lp_;
static VALUE sy_Switch_Char_Dataflow__lp_Compile_8023;
static VALUE sy_Switch_Char_Dataflow_bind_lb_0_rb__dot__b660;
static VALUE sy_Switch_Char_Dataflow_bind_lb_12_rb__900a;
static VALUE sy_Switch_Char_Dataflow_bind_lb_19_rb__2b52;
static VALUE sy_Switch_Char_Dataflow_bind_lb_19_rb__e313;
static VALUE sy_Switch_Char_Dataflow_bind_lb_4_rb__dot__2651;
static VALUE sy_Switch_Char_Dataflow_empty;
static VALUE sy_Switch_Char_Dataflow_firstcha_647d;
static VALUE sy_Switch_Char_Dataflow_lattice_dot__5a9e;
static VALUE sy_Switch_Char_Dataflow_lattice_dot__e0e5;
static VALUE sy_Switch_Char_Dataflow_regchar_lp__96c7;
VALUE Switch_Char_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_1,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr(self)){case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"seq",3)) goto pass2; else ame_setpos(self,ame_getpos(self)+3); break;
case UC(0) ... '^':;case '`' ... UC(255):; goto pass2; break;
}  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_2,rb_obj_class(ame_curobj(self))))){case 0:;   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,4/*autovar*/,it);
 break;
case 1:; goto alt2_2; break;
}cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,5/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt2_2;
it=rb_funcall(self,sy_Switch_Char_Dataflow_firstcha_647d,1,bind);  bind_aset(bind,6/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass4);switch((unsigned char)*ame_curstr(self)){case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr(self),"egch",4)) goto pass4; else ame_setpos(self,ame_getpos(self)+4); break;
case UC(0) ... 'q':;case 's' ... UC(255):; goto pass4; break;
}  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt2_3;
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_3,rb_obj_class(ame_curobj(self))))){case 0:;   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,8/*autovar*/,it);
 break;
case 1:; goto alt2_3; break;
}cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,5/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt2_3;
it=rb_funcall(self,sy_Switch_Char_Dataflow_regchar_lp__96c7,1,bind);  bind_aset(bind,6/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass6);switch((unsigned char)*ame_curstr(self)){case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass6);if (strncmp(ame_curstr(self),"nything",7)) goto pass6; else ame_setpos(self,ame_getpos(self)+7); break;
case UC(0) ... '`':;case 'b' ... UC(255):; goto pass6; break;
}  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt2_4;
it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__e0e5,1,bind);  bind_aset(bind,6/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_4: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass7);switch((unsigned char)*ame_curstr(self)){case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass7);if (strncmp(ame_curstr(self),"ails",4)) goto pass7; else ame_setpos(self,ame_getpos(self)+4); break;
case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass7; break;
}  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt2_5;
it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,6/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_5:  ame_setpos(self,oldpos2); goto pass1;
 accept2:;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,11/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Switch_Char_Dataflow_first_Switch_Char_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,11/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:;   it=Switch_Char_Dataflow_first_Switch_Char_Dataflow(self ); FAILTEST(fail); bind_aset(bind,11/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Char_Dataflow_first_Switch_Char_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(35);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*vals*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_4,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass2); bind_aset(bind,5/*v*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_4_rb__dot__2651,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__4297,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto break1;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break2); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*it*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_12_rb__900a,1,bind);  bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_3;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,4/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,5/*v*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_4_rb__dot__2651,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__4297,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto break3;
 if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt2_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;
case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__2a35,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,12/*it*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_12_rb__900a,1,bind);  bind_aset(bind,17/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt3_2;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;
case 3:; int oldpos8=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,18/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,19/*val*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,14/*el*/,it);
it=bind_aget(bind,14/*el*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,20/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto break5;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,22/*nev*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_19_rb__e313,1,bind);  bind_aset(bind,19/*val*/,it);
int oldpos10=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
 it=rb_funcall(self,sy_Switch_Char_Dataflow__lp_,1,bind); FAILTEST(alt5_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
   it=Amethyst_empty(self ); FAILTEST(alt5_3); 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos10); goto break5;
 accept5:;
 if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=bind_aget(bind,19/*val*/); bind_aset(bind,23/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt4_2;
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos8); goto fail;
 accept4:;
 break;
case 4:; int oldpos12=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass9); bind_aset(bind,19/*val*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_19_rb__2b52,1,bind);  bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt6_2;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos12); goto fail;
 accept6:;
 break;
case 5:; int oldpos13=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,27/*name*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__lp_Compile_8023,1,bind); FAILTEST(pass10);it=rb_funcall(self,sy_Switch_Char_Dataflow_Compiler_46ba,1,bind);  bind_aset(bind,28/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,28/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass11); bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto pass10;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,30/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto alt7_2;
it=bind_aget(bind,30/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos13); goto fail;
 accept7:;
 break;
case 6:; int oldpos14=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos15; while(1){oldpos15=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break7); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos15=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos15); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*it*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_12_rb__900a,1,bind);  bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto alt8_2;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos14); goto fail;
 accept8:;
 break;
case 7:; int oldpos16=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_2); bind_aset(bind,31/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,31/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass13); bind_aset(bind,32/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto alt9_2;
it=bind_aget(bind,32/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos16); goto fail;
 accept9:;
 break;
case 8:; int oldpos17=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt10_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos18; while(1){oldpos18=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break8); if (ame_getstop(self)!=Qnil){{oldpos18=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos18); it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto alt10_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt10_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
  alt10_3:  ame_setpos(self,oldpos17); goto fail;
 accept10:;
 break;
case 9:; int oldpos19=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt11_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos20; while(1){oldpos20=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break9); if (ame_getstop(self)!=Qnil){{oldpos20=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos20); it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto alt11_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt11_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept11;
  alt11_3:  ame_setpos(self,oldpos19); goto fail;
 accept11:;
 break;
case 10:; int oldpos21=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt12_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass16=*ptr; int fail16=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos22; while(1){oldpos22=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break10); if (ame_getstop(self)!=Qnil){{oldpos22=ame_getpos(self);goto break10;} } } break10: ame_setstop(self,Qnil);  ame_setpos(self,oldpos22); it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass16);
	goto success16;
	pass16: fail16=1;
	success16: *ptr=oldpass16;
	if(fail16) goto alt12_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
alt12_2: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt12_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
  alt12_3:  ame_setpos(self,oldpos21); goto fail;
 accept12:;
 break;
case 11:; int oldpos23=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt13_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass17=*ptr; int fail17=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos24; while(1){oldpos24=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break11); if (ame_getstop(self)!=Qnil){{oldpos24=ame_getpos(self);goto break11;} } } break11: ame_setstop(self,Qnil);  ame_setpos(self,oldpos24); it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass17);
	goto success17;
	pass17: fail17=1;
	success17: *ptr=oldpass17;
	if(fail17) goto alt13_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept13;
alt13_2: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt13_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept13;
  alt13_3:  ame_setpos(self,oldpos23); goto fail;
 accept13:;
 break;
case 12:; int oldpos25=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt14_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass18=*ptr; int fail18=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos26; while(1){oldpos26=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break12); if (ame_getstop(self)!=Qnil){{oldpos26=ame_getpos(self);goto break12;} } } break12: ame_setstop(self,Qnil);  ame_setpos(self,oldpos26); it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass18);
	goto success18;
	pass18: fail18=1;
	success18: *ptr=oldpass18;
	if(fail18) goto alt14_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept14;
alt14_2: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt14_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept14;
  alt14_3:  ame_setpos(self,oldpos25); goto fail;
 accept14:;
 break;
case 13:; int oldpos27=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt15_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass19=*ptr; int fail19=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos28; while(1){oldpos28=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break13); if (ame_getstop(self)!=Qnil){{oldpos28=ame_getpos(self);goto break13;} } } break13: ame_setstop(self,Qnil);  ame_setpos(self,oldpos28); it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass19);
	goto success19;
	pass19: fail19=1;
	success19: *ptr=oldpass19;
	if(fail19) goto alt15_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt15_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
  alt15_3:  ame_setpos(self,oldpos27); goto fail;
 accept15:;
 break;
case 14:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Char_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Switch_Char_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=Switch_Char_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Switch_Clas_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Switch_Clas_Dataflow_first(VALUE self );
VALUE Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(VALUE self );
VALUE Switch_Clas_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Switch_Clas_Dataflow_1;
VALUE switchhash_Switch_Clas_Dataflow_2;
VALUE switchhash_Switch_Clas_Dataflow_3;
static VALUE sy_Switch_Clas_Dataflow_Compiler_46ba;
static VALUE sy_Switch_Clas_Dataflow__append_lp__2a35;
static VALUE sy_Switch_Clas_Dataflow__append_lp__4297;
static VALUE sy_Switch_Clas_Dataflow__append_lp__9ca5;
static VALUE sy_Switch_Clas_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Switch_Clas_Dataflow__lp_;
static VALUE sy_Switch_Clas_Dataflow__lp_Compile_8023;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_0_rb__dot__b660;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_12_rb__900a;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_19_rb__2b52;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_19_rb__e313;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_4_rb__dot__2651;
static VALUE sy_Switch_Clas_Dataflow_empty;
static VALUE sy_Switch_Clas_Dataflow_lattice_dot__5a9e;
static VALUE sy_Switch_Clas_Dataflow_lattice_lb__d8d7;
VALUE Switch_Clas_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_1,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr(self)){case 'c' ... 'c':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"las",3)) goto pass2; else ame_setpos(self,ame_getpos(self)+3); break;
case UC(0) ... 'b':;case 'd' ... UC(255):; goto pass2; break;
}  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_2,rb_obj_class(ame_curobj(self))))){case 0:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
 break;
case 1:; goto pass1; break;
}cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,3/*cls*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass1;
it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_lb__d8d7,1,bind);  bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:;   it=Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(self ); FAILTEST(fail); bind_aset(bind,5/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(35);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*vals*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_3,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass2); bind_aset(bind,5/*v*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_4_rb__dot__2651,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__4297,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto break1;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break2); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*it*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_12_rb__900a,1,bind);  bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_3;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,4/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,5/*v*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_4_rb__dot__2651,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__4297,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto break3;
 if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt2_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;
case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__2a35,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,12/*it*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_12_rb__900a,1,bind);  bind_aset(bind,17/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt3_2;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;
case 3:; int oldpos8=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,18/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,19/*val*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,14/*el*/,it);
it=bind_aget(bind,14/*el*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,20/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto break5;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,22/*nev*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_19_rb__e313,1,bind);  bind_aset(bind,19/*val*/,it);
int oldpos10=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
 it=rb_funcall(self,sy_Switch_Clas_Dataflow__lp_,1,bind); FAILTEST(alt5_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
   it=Amethyst_empty(self ); FAILTEST(alt5_3); 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos10); goto break5;
 accept5:;
 if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=bind_aget(bind,19/*val*/); bind_aset(bind,23/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt4_2;
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos8); goto fail;
 accept4:;
 break;
case 4:; int oldpos12=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass9); bind_aset(bind,19/*val*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_19_rb__2b52,1,bind);  bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt6_2;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos12); goto fail;
 accept6:;
 break;
case 5:; int oldpos13=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,27/*name*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__lp_Compile_8023,1,bind); FAILTEST(pass10);it=rb_funcall(self,sy_Switch_Clas_Dataflow_Compiler_46ba,1,bind);  bind_aset(bind,28/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,28/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass11); bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto pass10;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,30/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto alt7_2;
it=bind_aget(bind,30/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos13); goto fail;
 accept7:;
 break;
case 6:; int oldpos14=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos15; while(1){oldpos15=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break7); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos15=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos15); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*it*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_12_rb__900a,1,bind);  bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto alt8_2;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos14); goto fail;
 accept8:;
 break;
case 7:; int oldpos16=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_2); bind_aset(bind,31/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,31/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass13); bind_aset(bind,32/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto alt9_2;
it=bind_aget(bind,32/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos16); goto fail;
 accept9:;
 break;
case 8:; int oldpos17=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt10_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos18; while(1){oldpos18=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break8); if (ame_getstop(self)!=Qnil){{oldpos18=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos18); it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto alt10_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt10_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
  alt10_3:  ame_setpos(self,oldpos17); goto fail;
 accept10:;
 break;
case 9:; int oldpos19=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt11_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos20; while(1){oldpos20=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break9); if (ame_getstop(self)!=Qnil){{oldpos20=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos20); it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto alt11_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt11_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept11;
  alt11_3:  ame_setpos(self,oldpos19); goto fail;
 accept11:;
 break;
case 10:; int oldpos21=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt12_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass16=*ptr; int fail16=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos22; while(1){oldpos22=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break10); if (ame_getstop(self)!=Qnil){{oldpos22=ame_getpos(self);goto break10;} } } break10: ame_setstop(self,Qnil);  ame_setpos(self,oldpos22); it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass16);
	goto success16;
	pass16: fail16=1;
	success16: *ptr=oldpass16;
	if(fail16) goto alt12_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
alt12_2: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt12_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
  alt12_3:  ame_setpos(self,oldpos21); goto fail;
 accept12:;
 break;
case 11:; int oldpos23=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt13_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass17=*ptr; int fail17=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos24; while(1){oldpos24=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break11); if (ame_getstop(self)!=Qnil){{oldpos24=ame_getpos(self);goto break11;} } } break11: ame_setstop(self,Qnil);  ame_setpos(self,oldpos24); it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass17);
	goto success17;
	pass17: fail17=1;
	success17: *ptr=oldpass17;
	if(fail17) goto alt13_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept13;
alt13_2: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt13_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept13;
  alt13_3:  ame_setpos(self,oldpos23); goto fail;
 accept13:;
 break;
case 12:; int oldpos25=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt14_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass18=*ptr; int fail18=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos26; while(1){oldpos26=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break12); if (ame_getstop(self)!=Qnil){{oldpos26=ame_getpos(self);goto break12;} } } break12: ame_setstop(self,Qnil);  ame_setpos(self,oldpos26); it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass18);
	goto success18;
	pass18: fail18=1;
	success18: *ptr=oldpass18;
	if(fail18) goto alt14_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept14;
alt14_2: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt14_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept14;
  alt14_3:  ame_setpos(self,oldpos25); goto fail;
 accept14:;
 break;
case 13:; int oldpos27=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt15_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass19=*ptr; int fail19=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos28; while(1){oldpos28=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break13); if (ame_getstop(self)!=Qnil){{oldpos28=ame_getpos(self);goto break13;} } } break13: ame_setstop(self,Qnil);  ame_setpos(self,oldpos28); it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass19);
	goto success19;
	pass19: fail19=1;
	success19: *ptr=oldpass19;
	if(fail19) goto alt15_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt15_3); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
  alt15_3:  ame_setpos(self,oldpos27); goto fail;
 accept15:;
 break;
case 14:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,14/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,8/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Clas_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Switch_Clas_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=Switch_Clas_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Detect_First;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Detect_First_itrans(VALUE self );
VALUE Detect_First_root(VALUE self );
VALUE Traverser_Clone2_traverse(VALUE self );
VALUE switchhash_Detect_First_1;
VALUE switchhash_Detect_First_2;
static VALUE sy_Detect_First__append_lp__7352;
static VALUE sy_Detect_First__append_lp__b494;
static VALUE sy_Detect_First__at_name_eq_sr_362f;
static VALUE sy_Detect_First__do_rules_eq__le__ab16;
static VALUE sy_Detect_First_src_25d9;
static VALUE sy_Detect_First_src_dot_rule_5acf;
static VALUE sy_Detect_First_src_dot_rule_d270;
VALUE Detect_First_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_1,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos2=ame_getpos(self);
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
int oldpos3; while(1){oldpos3=ame_getpos(self); switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_2,rb_obj_class(ame_curobj(self))))){case 0:;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_First_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_First__append_lp__7352,1,bind);  break;
case 1:; goto break2; break;
} if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
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
it=rb_funcall(self,sy_Detect_First__append_lp__b494,1,bind);  break;
case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Detect_First__append_lp__b494,1,bind);  break;
} if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_First_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Traverser_Clone2_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Detect_Switch_Char;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_spaces(VALUE self );
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
VALUE switchhash_Detect_Switch_Char_11;
VALUE switchhash_Detect_Switch_Char_12;
VALUE switchhash_Detect_Switch_Char_1;
VALUE switchhash_Detect_Switch_Char_2;
VALUE switchhash_Detect_Switch_Char_3;
VALUE switchhash_Detect_Switch_Char_4;
VALUE switchhash_Detect_Switch_Char_5;
VALUE switchhash_Detect_Switch_Char_6;
VALUE switchhash_Detect_Switch_Char_7;
VALUE switchhash_Detect_Switch_Char_8;
VALUE switchhash_Detect_Switch_Char_9;
static VALUE sy_Detect_Switch_Char_Or_lb__ti_bind_0681;
static VALUE sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_3f6c;
static VALUE sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_abc9;
static VALUE sy_Detect_Switch_Char_Switch_C_4c55;
static VALUE sy_Detect_Switch_Char_Switch_C_7a94;
static VALUE sy_Detect_Switch_Char_Switch_C_901e;
static VALUE sy_Detect_Switch_Char_Switch_C_fe8b;
static VALUE sy_Detect_Switch_Char__append_lp__0bcf;
static VALUE sy_Detect_Switch_Char__append_lp__51dc;
static VALUE sy_Detect_Switch_Char__append_lp__58ed;
static VALUE sy_Detect_Switch_Char__append_lp__7352;
static VALUE sy_Detect_Switch_Char__append_lp__b494;
static VALUE sy_Detect_Switch_Char__append_lp__b6c7;
static VALUE sy_Detect_Switch_Char__append_lp__c7ad;
static VALUE sy_Detect_Switch_Char__append_lp__dd73;
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
static VALUE sy_Detect_Switch_Char_bind_lb_26_rb__abbd;
static VALUE sy_Detect_Switch_Char_bind_lb_3_rb__dot__2d57;
static VALUE sy_Detect_Switch_Char_bind_lb_3_rb__dot__8725;
static VALUE sy_Detect_Switch_Char_bind_lb_3_rb__lt__bb51;
static VALUE sy_Detect_Switch_Char_bind_lb_42_rb__08d4;
static VALUE sy_Detect_Switch_Char_bind_lb_47_rb__0480;
static VALUE sy_Detect_Switch_Char_bind_lb_47_rb__fc21;
static VALUE sy_Detect_Switch_Char_first_lp_sr_3298;
static VALUE sy_Detect_Switch_Char_if_sp_bind_lb__f1e9;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_24ae;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_3dce;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_a564;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_f987;
static VALUE sy_Detect_Switch_Char_src_25d9;
static VALUE sy_Detect_Switch_Char_src_dot_ary_d5cf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_d270;
static VALUE sy_first;
VALUE Detect_Switch_Char_combine_or(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(6); bind_aset(bind,3/*list*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_9,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind);  bind_aset(bind,1/*ary*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=rb_ary_new3(0); bind_aset(bind,2/*newlist*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_3_rb__dot__8725,1,bind);  it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_3_rb__dot__2d57,1,bind);  bind_aset(bind,2/*newlist*/,it);
 it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_eof(self ); FAILTEST(alt1_4);it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_fe8b,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_3_rb__dot__2d57,1,bind);  bind_aset(bind,2/*newlist*/,it);
 it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_eof(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_fe8b,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Char_combine_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(10); bind_aset(bind,1/*prefix*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_8,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__42be,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__dd73,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_abc9,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,0/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__42be,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__dd73,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_abc9,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;
case 2:; int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,0/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__42be,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt3_2); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__dd73,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_abc9,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto fail;
 accept3:;
 break;
case 3:; int oldpos7=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos8; while(1){oldpos8=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind);  bind_aset(bind,5/*ary*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt4_2;
it=rb_ary_new3(0); bind_aset(bind,7/*autovar*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__b6c7,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=bind_aget(bind,7/*autovar*/); bind_aset(bind,9/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_4c55,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos10; while(1){oldpos10=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__dd73,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos10=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos10); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_abc9,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos7); goto fail;
 accept4:;
 break;
case 4:; it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__dd73,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_abc9,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Char_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_11,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_Switch_Char__at_name_eq_sr_362f,1,bind); it=rb_funcall(self,sy_Detect_Switch_Char__do_rules_eq__le__ab16,1,bind); it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_5acf,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self); switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_12,rb_obj_class(ame_curobj(self))))){case 0:;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_Char_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__7352,1,bind);  break;
case 1:; goto break2; break;
} if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
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
it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_d270,1,bind); it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
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
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__b494,1,bind);  break;
case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__b494,1,bind);  break;
} if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Char_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Detect_Switch_Char_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Char_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_b885,1,bind);   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_2_rb__6693,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
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
it=rb_funcall(self,sy_Detect_Switch_Char_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Char_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_10,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Switch_Char_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,3/*ar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(break1); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_3_rb__lt__bb51,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*ar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Switch_Char_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_Char_traverse(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_3;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;
case 2:; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Switch_Char_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Char_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(55);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_1,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
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
   it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr(self)){case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"egch",4)) goto pass2; else ame_setpos(self,ame_getpos(self)+4); break;
case UC(0) ... 'q':;case 's' ... UC(255):; goto pass2; break;
}  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_2,rb_obj_class(ame_curobj(self))))){case 0:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
 break;
case 1:; goto pass1; break;
}cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass1;
it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,5/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_3dce,1,bind);  bind_aset(bind,6/*autovar*/,it);
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
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr(self)){case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr(self),"seq",3)) goto pass5; else ame_setpos(self,ame_getpos(self)+3); break;
case UC(0) ... '^':;case '`' ... UC(255):; goto pass5; break;
}  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto pass4;
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_3,rb_obj_class(ame_curobj(self))))){case 0:;   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,10/*autovar*/,it);
 break;
case 1:; goto pass4; break;
}cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,11/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto pass4;
it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,5/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_24ae,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt2_3;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass7); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass8);switch((unsigned char)*ame_curstr(self)){case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass8);if (strncmp(ame_curstr(self),"ails",4)) goto pass8; else ame_setpos(self,ame_getpos(self)+4); break;
case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass8; break;
}  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto pass7;
it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind);  bind_aset(bind,15/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt2_4;
it=bind_aget(bind,15/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,16/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,16/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,5/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind); FAILTEST(pass9);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_a564,1,bind);  bind_aset(bind,17/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt1_3;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass11);switch((unsigned char)*ame_curstr(self)){case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass11);if (strncmp(ame_curstr(self),"egch",4)) goto pass11; else ame_setpos(self,ame_getpos(self)+4); break;
case UC(0) ... 'q':;case 's' ... UC(255):; goto pass11; break;
}  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto pass10;
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_4,rb_obj_class(ame_curobj(self))))){case 0:;   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,4/*autovar*/,it);
 break;
case 1:; goto pass10; break;
}cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6);   it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto pass10;
it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,5/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_3dce,1,bind);  bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto alt3_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass13); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass14);switch((unsigned char)*ame_curstr(self)){case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass14);if (strncmp(ame_curstr(self),"seq",3)) goto pass14; else ame_setpos(self,ame_getpos(self)+3); break;
case UC(0) ... '^':;case '`' ... UC(255):; goto pass14; break;
}  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto pass13;
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_5,rb_obj_class(ame_curobj(self))))){case 0:;   it=AmethystCore_anything(self ); FAILTEST(pass13); bind_aset(bind,10/*autovar*/,it);
 break;
case 1:; goto pass13; break;
}cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass15); bind_aset(bind,11/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto pass13;
it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,5/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_24ae,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto alt3_3;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_3: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass16=*ptr; int fail16=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass16); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass17=*ptr; int fail17=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass17);switch((unsigned char)*ame_curstr(self)){case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass17);if (strncmp(ame_curstr(self),"ails",4)) goto pass17; else ame_setpos(self,ame_getpos(self)+4); break;
case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass17; break;
}  it=Amethyst_eof(self ); FAILTEST(pass17);
	goto success17;
	pass17: fail17=1;
	success17: *ptr=oldpass17;
	if(fail17) goto pass16;
it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind);  bind_aset(bind,15/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass16);
	goto success16;
	pass16: fail16=1;
	success16: *ptr=oldpass16;
	if(fail16) goto alt3_4;
it=bind_aget(bind,15/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_4:  ame_setpos(self,oldpos5); goto fail;
 accept3:;
 break;
case 2:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass18=*ptr; int fail18=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,18/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_Char_traverse(self ); FAILTEST(pass18); bind_aset(bind,19/*t*/,it);
 it=bind_aget(bind,19/*t*/); arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(pass18); bind_aset(bind,5/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind); FAILTEST(pass18);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_f987,1,bind);  bind_aset(bind,20/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass18);
	goto success18;
	pass18: fail18=1;
	success18: *ptr=oldpass18;
	if(fail18) goto fail;
it=bind_aget(bind,20/*autovar*/); bind_aset(bind,7/*_result*/,it);
 break;
case 3:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,16/*autovar*/,it);
cstruct oldpass19=*ptr; int fail19=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,16/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,5/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind); FAILTEST(pass19);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_a564,1,bind);  bind_aset(bind,17/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass19);
	goto success19;
	pass19: fail19=1;
	success19: *ptr=oldpass19;
	if(fail19) goto fail;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,7/*_result*/,it);
 break;
case 4:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,21/*autovar*/,it);
cstruct oldpass20=*ptr; int fail20=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,21/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,22/*autovar*/,it);
int oldpos8; while(1){oldpos8=ame_getpos(self);   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(break5); bind_aset(bind,23/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__58ed,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=bind_aget(bind,22/*autovar*/); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass21=*ptr; int fail21=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,24/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass21); bind_aset(bind,25/*autovar*/,it);
cstruct oldpass22=*ptr; int fail22=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,25/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,26/*prefix*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_6,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos9=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass22;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,27/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_26_rb__abbd,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt4_2); bind_aset(bind,28/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass22;}
 it=rb_ary_new3(0); bind_aset(bind,29/*autovar*/,it);
int oldpos10; while(1){oldpos10=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__0bcf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos10=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos10); it=bind_aget(bind,29/*autovar*/); bind_aset(bind,31/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_3f6c,1,bind);  bind_aset(bind,28/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos9); goto pass22;
 accept4:;
 break;
case 1:; int oldpos11=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass22;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,27/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_26_rb__abbd,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt5_2); bind_aset(bind,28/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass22;}
 it=rb_ary_new3(0); bind_aset(bind,29/*autovar*/,it);
int oldpos12; while(1){oldpos12=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__0bcf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos12=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos12); it=bind_aget(bind,29/*autovar*/); bind_aset(bind,31/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_3f6c,1,bind);  bind_aset(bind,28/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos11); goto pass22;
 accept5:;
 break;
case 2:; int oldpos13=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass22;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,27/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_26_rb__abbd,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt6_2); bind_aset(bind,28/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass22;}
 it=rb_ary_new3(0); bind_aset(bind,29/*autovar*/,it);
int oldpos14; while(1){oldpos14=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break8); bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__0bcf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos14=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos14); it=bind_aget(bind,29/*autovar*/); bind_aset(bind,31/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_3f6c,1,bind);  bind_aset(bind,28/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos13); goto pass22;
 accept6:;
 break;
case 3:; int oldpos15=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass22;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2); bind_aset(bind,32/*autovar*/,it);
cstruct oldpass23=*ptr; int fail23=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,32/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos16; while(1){oldpos16=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break9); if (ame_getstop(self)!=Qnil){{oldpos16=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos16); it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind);  bind_aset(bind,31/*ary*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass23);
	goto success23;
	pass23: fail23=1;
	success23: *ptr=oldpass23;
	if(fail23) goto alt7_2;
it=rb_ary_new3(0); bind_aset(bind,33/*autovar*/,it);
int oldpos17; while(1){oldpos17=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break10); bind_aset(bind,34/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__51dc,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos17=ame_getpos(self);goto break10;} } } break10: ame_setstop(self,Qnil);  ame_setpos(self,oldpos17); it=bind_aget(bind,33/*autovar*/); bind_aset(bind,35/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_901e,1,bind);  bind_aset(bind,28/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass22;}
 it=rb_ary_new3(0); bind_aset(bind,29/*autovar*/,it);
int oldpos18; while(1){oldpos18=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break11); bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__0bcf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos18=ame_getpos(self);goto break11;} } } break11: ame_setstop(self,Qnil);  ame_setpos(self,oldpos18); it=bind_aget(bind,29/*autovar*/); bind_aset(bind,31/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_3f6c,1,bind);  bind_aset(bind,28/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos15); goto pass22;
 accept7:;
 break;
case 4:; it=rb_ary_new3(0); bind_aset(bind,29/*autovar*/,it);
int oldpos19; while(1){oldpos19=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break12); bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__0bcf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos19=ame_getpos(self);goto break12;} } } break12: ame_setstop(self,Qnil);  ame_setpos(self,oldpos19); it=bind_aget(bind,29/*autovar*/); bind_aset(bind,31/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_3f6c,1,bind);  bind_aset(bind,28/*_result*/,it);
 break;
}it=bind_aget(bind,28/*_result*/); bind_aset(bind,36/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass22);
	goto success22;
	pass22: fail22=1;
	success22: *ptr=oldpass22;
	if(fail22) goto pass21;
it=bind_aget(bind,36/*autovar*/); bind_aset(bind,37/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass21);
	goto success21;
	pass21: fail21=1;
	success21: *ptr=oldpass21;
	if(fail21) goto pass20;
it=bind_aget(bind,37/*autovar*/); bind_aset(bind,38/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass20);
	goto success20;
	pass20: fail20=1;
	success20: *ptr=oldpass20;
	if(fail20) goto fail;
it=bind_aget(bind,38/*autovar*/); bind_aset(bind,7/*_result*/,it);
 break;
case 5:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,39/*autovar*/,it);
cstruct oldpass24=*ptr; int fail24=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,39/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,40/*autovar*/,it);
int oldpos20; while(1){oldpos20=ame_getpos(self);   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(break13); bind_aset(bind,41/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__c7ad,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos20=ame_getpos(self);goto break13;} } } break13: ame_setstop(self,Qnil);  ame_setpos(self,oldpos20); it=bind_aget(bind,40/*autovar*/); bind_aset(bind,42/*items*/,it);
it=Qfalse; bind_aset(bind,43/*aswitch*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_42_rb__08d4,1,bind); int oldpos21=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass24;}
 it=rb_funcall(self,sy_Detect_Switch_Char__lp_2,1,bind); FAILTEST(alt8_2);it=rb_funcall(self,sy_Detect_Switch_Char_Or_lb__ti_bind_0681,1,bind);  bind_aset(bind,44/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass24;}
 it=bind_aget(bind,42/*items*/); bind_aset(bind,45/*autovar*/,it);
cstruct oldpass25=*ptr; int fail25=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,45/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass25); bind_aset(bind,46/*autovar*/,it);
cstruct oldpass26=*ptr; int fail26=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,46/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind);  bind_aset(bind,47/*list*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_7,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos22=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass26;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_2); bind_aset(bind,48/*autovar*/,it);
cstruct oldpass27=*ptr; int fail27=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,48/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos23; while(1){oldpos23=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break14); if (ame_getstop(self)!=Qnil){{oldpos23=ame_getpos(self);goto break14;} } } break14: ame_setstop(self,Qnil);  ame_setpos(self,oldpos23); it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind);  bind_aset(bind,49/*ary*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass27);
	goto success27;
	pass27: fail27=1;
	success27: *ptr=oldpass27;
	if(fail27) goto alt9_2;
it=rb_ary_new3(0); bind_aset(bind,50/*newlist*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_47_rb__fc21,1,bind);  it=bind_aget(bind,50/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt9_2); bind_aset(bind,51/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass26;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_3); bind_aset(bind,52/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_47_rb__0480,1,bind);  bind_aset(bind,50/*newlist*/,it);
 it=bind_aget(bind,50/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt9_3); bind_aset(bind,51/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept9;
alt9_3: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass26;}
   it=Amethyst_eof(self ); FAILTEST(alt9_4);it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_7a94,1,bind);  bind_aset(bind,51/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept9;
  alt9_4:  ame_setpos(self,oldpos22); goto pass26;
 accept9:;
 break;
case 1:; int oldpos24=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos24);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass26;}
   it=AmethystCore_anything(self ); FAILTEST(alt10_2); bind_aset(bind,52/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_47_rb__0480,1,bind);  bind_aset(bind,50/*newlist*/,it);
 it=bind_aget(bind,50/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt10_2); bind_aset(bind,51/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos24);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass26;}
   it=Amethyst_eof(self ); FAILTEST(alt10_3);it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_7a94,1,bind);  bind_aset(bind,51/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
  alt10_3:  ame_setpos(self,oldpos24); goto pass26;
 accept10:;
 break;
}it=bind_aget(bind,51/*_result*/); bind_aset(bind,53/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass26);
	goto success26;
	pass26: fail26=1;
	success26: *ptr=oldpass26;
	if(fail26) goto pass25;
it=bind_aget(bind,53/*autovar*/); bind_aset(bind,54/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass25);
	goto success25;
	pass25: fail25=1;
	success25: *ptr=oldpass25;
	if(fail25) goto alt8_3;
it=bind_aget(bind,54/*autovar*/); bind_aset(bind,44/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos21); goto pass24;
 accept8:;
  it=Amethyst_eof(self ); FAILTEST(pass24);
	goto success24;
	pass24: fail24=1;
	success24: *ptr=oldpass24;
	if(fail24) goto fail;
it=bind_aget(bind,44/*autovar*/); bind_aset(bind,7/*_result*/,it);
 break;
case 6:; goto fail; break;
}
return it;
fail: return failobj; }VALUE cls_Detect_Switch_Clas;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_Switch_Clas_combine_or(VALUE self ,VALUE a0);
VALUE Detect_Switch_Clas_combine_or(VALUE self ,VALUE);
VALUE Detect_Switch_Clas_combine_seq(VALUE self ,VALUE a0);
VALUE Detect_Switch_Clas_combine_seq(VALUE self ,VALUE);
VALUE Detect_Switch_Clas_itrans(VALUE self );
VALUE Detect_Switch_Clas_root(VALUE self );
VALUE Detect_Switch_Clas_traverse(VALUE self );
VALUE Detect_Switch_Clas_traverse_item(VALUE self );
VALUE Detect_Switch_Clas_visit(VALUE self );
VALUE switchhash_Detect_Switch_Clas_1;
VALUE switchhash_Detect_Switch_Clas_2;
VALUE switchhash_Detect_Switch_Clas_3;
VALUE switchhash_Detect_Switch_Clas_4;
VALUE switchhash_Detect_Switch_Clas_5;
VALUE switchhash_Detect_Switch_Clas_6;
VALUE switchhash_Detect_Switch_Clas_7;
VALUE switchhash_Detect_Switch_Clas_8;
static VALUE sy_Detect_Switch_Clas_Or_lb__ti_bind_d3ee;
static VALUE sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a0ca;
static VALUE sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_abc9;
static VALUE sy_Detect_Switch_Clas_Switch_C_0e01;
static VALUE sy_Detect_Switch_Clas_Switch_C_3637;
static VALUE sy_Detect_Switch_Clas_Switch_C_a9b5;
static VALUE sy_Detect_Switch_Clas_Switch_C_b0fb;
static VALUE sy_Detect_Switch_Clas_Switch_C_ddef;
static VALUE sy_Detect_Switch_Clas__append_lp__0bcf;
static VALUE sy_Detect_Switch_Clas__append_lp__26c5;
static VALUE sy_Detect_Switch_Clas__append_lp__58ed;
static VALUE sy_Detect_Switch_Clas__append_lp__7352;
static VALUE sy_Detect_Switch_Clas__append_lp__b494;
static VALUE sy_Detect_Switch_Clas__append_lp__b6c7;
static VALUE sy_Detect_Switch_Clas__append_lp__be78;
static VALUE sy_Detect_Switch_Clas__append_lp__dd73;
static VALUE sy_Detect_Switch_Clas__at_changed_5352;
static VALUE sy_Detect_Switch_Clas__at_changed_b885;
static VALUE sy_Detect_Switch_Clas__at_changed_c681;
static VALUE sy_Detect_Switch_Clas__at_name_eq_sr_362f;
static VALUE sy_Detect_Switch_Clas__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch_Clas__lb__lb_Lattic_62e5;
static VALUE sy_Detect_Switch_Clas__lp_;
static VALUE sy_Detect_Switch_Clas__lp_bind_lb_2_rb__6693;
static VALUE sy_Detect_Switch_Clas__lp_src_dot_ins_6a75;
static VALUE sy_Detect_Switch_Clas_bind_lb_15_rb__e3d5;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__pl__42be;
static VALUE sy_Detect_Switch_Clas_bind_lb_31_rb__1592;
static VALUE sy_Detect_Switch_Clas_bind_lb_36_rb__456b;
static VALUE sy_Detect_Switch_Clas_bind_lb_36_rb__91e3;
static VALUE sy_Detect_Switch_Clas_bind_lb_3_rb__dot__2d57;
static VALUE sy_Detect_Switch_Clas_bind_lb_3_rb__dot__991d;
static VALUE sy_Detect_Switch_Clas_bind_lb_3_rb__lt__bb51;
static VALUE sy_Detect_Switch_Clas_if_sp_bind_lb__f1e9;
static VALUE sy_Detect_Switch_Clas_src_25d9;
static VALUE sy_Detect_Switch_Clas_src_dot_ary_d5cf;
static VALUE sy_Detect_Switch_Clas_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_Clas_src_dot_rule_d270;
VALUE Detect_Switch_Clas_combine_or(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(6); bind_aset(bind,3/*list*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_5,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind);  bind_aset(bind,1/*ary*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=rb_ary_new3(0); bind_aset(bind,2/*newlist*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_3_rb__dot__991d,1,bind);  it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_3_rb__dot__2d57,1,bind);  bind_aset(bind,2/*newlist*/,it);
 it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_eof(self ); FAILTEST(alt1_4);it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_0e01,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_3_rb__dot__2d57,1,bind);  bind_aset(bind,2/*newlist*/,it);
 it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_eof(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_0e01,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_combine_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(10); bind_aset(bind,1/*prefix*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_4,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__42be,1,bind);  arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__dd73,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_abc9,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,0/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__42be,1,bind);  arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__dd73,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_abc9,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;
case 2:; int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind);  bind_aset(bind,5/*ary*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt3_2;
it=rb_ary_new3(0); bind_aset(bind,7/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__b6c7,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,7/*autovar*/); bind_aset(bind,9/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_a9b5,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos8; while(1){oldpos8=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__dd73,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_abc9,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto fail;
 accept3:;
 break;
case 3:; it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__dd73,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_abc9,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_7,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_Switch_Clas__at_name_eq_sr_362f,1,bind); it=rb_funcall(self,sy_Detect_Switch_Clas__do_rules_eq__le__ab16,1,bind); it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_rule_5acf,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self); switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_8,rb_obj_class(ame_curobj(self))))){case 0:;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_Clas_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__7352,1,bind);  break;
case 1:; goto break2; break;
} if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
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
it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_rule_d270,1,bind); it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
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
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__b494,1,bind);  break;
case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__b494,1,bind);  break;
} if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Detect_Switch_Clas_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_b885,1,bind);   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__lp_bind_lb_2_rb__6693,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
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
it=rb_funcall(self,sy_Detect_Switch_Clas_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_6,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Switch_Clas_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,3/*ar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(break1); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_3_rb__lt__bb51,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*ar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Switch_Clas_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_Clas_traverse(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_3;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;
case 2:; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Switch_Clas_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(44);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_1,rb_obj_class(ame_curobj(self))))){case 0:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr(self)){case 'c' ... 'c':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"las",3)) goto pass2; else ame_setpos(self,ame_getpos(self)+3); break;
case UC(0) ... 'b':;case 'd' ... UC(255):; goto pass2; break;
}  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*clas*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_b0fb,1,bind);  bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass4);switch((unsigned char)*ame_curstr(self)){case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr(self),"ails",4)) goto pass4; else ame_setpos(self,ame_getpos(self)+4); break;
case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass4; break;
}  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto pass3;
it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_3;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,11/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(break1); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__be78,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,11/*autovar*/); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,13/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,15/*prefix*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_2,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass7;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,16/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_15_rb__e3d5,1,bind);  arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,17/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass7;}
 it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__26c5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,18/*autovar*/); bind_aset(bind,20/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a0ca,1,bind);  bind_aset(bind,17/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto pass7;
 accept2:;
 break;
case 1:; int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass7;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,16/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_15_rb__e3d5,1,bind);  arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt3_2); bind_aset(bind,17/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass7;}
 it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__26c5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,18/*autovar*/); bind_aset(bind,20/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a0ca,1,bind);  bind_aset(bind,17/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto pass7;
 accept3:;
 break;
case 2:; int oldpos7=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass7;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,21/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,21/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos8; while(1){oldpos8=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind);  bind_aset(bind,20/*ary*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt4_2;
it=rb_ary_new3(0); bind_aset(bind,22/*autovar*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,23/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__58ed,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=bind_aget(bind,22/*autovar*/); bind_aset(bind,24/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_ddef,1,bind);  bind_aset(bind,17/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass7;}
 it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
int oldpos10; while(1){oldpos10=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__26c5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos10=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos10); it=bind_aget(bind,18/*autovar*/); bind_aset(bind,20/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a0ca,1,bind);  bind_aset(bind,17/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos7); goto pass7;
 accept4:;
 break;
case 3:; it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__26c5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=bind_aget(bind,18/*autovar*/); bind_aset(bind,20/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a0ca,1,bind);  bind_aset(bind,17/*_result*/,it);
 break;
}it=bind_aget(bind,17/*_result*/); bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto pass6;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,26/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto pass5;
it=bind_aget(bind,26/*autovar*/); bind_aset(bind,27/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto fail;
it=bind_aget(bind,27/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 2:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,28/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,29/*autovar*/,it);
int oldpos12; while(1){oldpos12=ame_getpos(self);   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(break8); bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__0bcf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos12=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos12); it=bind_aget(bind,29/*autovar*/); bind_aset(bind,31/*items*/,it);
it=Qfalse; bind_aset(bind,32/*aswitch*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_31_rb__1592,1,bind); int oldpos13=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass9;}
 it=rb_funcall(self,sy_Detect_Switch_Clas__lp_,1,bind); FAILTEST(alt5_2);it=rb_funcall(self,sy_Detect_Switch_Clas_Or_lb__ti_bind_d3ee,1,bind);  bind_aset(bind,33/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass9;}
 it=bind_aget(bind,31/*items*/); bind_aset(bind,34/*autovar*/,it);
cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,34/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,35/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,35/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_Switch_Clas__lb__lb_Lattic_62e5,1,bind);  bind_aset(bind,36/*list*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_3,rb_obj_class(ame_curobj(self))))){case 0:; int oldpos14=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass11;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,37/*autovar*/,it);
cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,37/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos15; while(1){oldpos15=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break9); if (ame_getstop(self)!=Qnil){{oldpos15=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos15); it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind);  bind_aset(bind,38/*ary*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto alt6_2;
it=rb_ary_new3(0); bind_aset(bind,39/*newlist*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_36_rb__456b,1,bind);  it=bind_aget(bind,39/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt6_2); bind_aset(bind,40/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass11;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,41/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_36_rb__91e3,1,bind);  bind_aset(bind,39/*newlist*/,it);
 it=bind_aget(bind,39/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt6_3); bind_aset(bind,40/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_3: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass11;}
   it=Amethyst_eof(self ); FAILTEST(alt6_4);it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_3637,1,bind);  bind_aset(bind,40/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_4:  ame_setpos(self,oldpos14); goto pass11;
 accept6:;
 break;
case 1:; int oldpos16=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass11;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2); bind_aset(bind,41/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_36_rb__91e3,1,bind);  bind_aset(bind,39/*newlist*/,it);
 it=bind_aget(bind,39/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt7_2); bind_aset(bind,40/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass11;}
   it=Amethyst_eof(self ); FAILTEST(alt7_3);it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_3637,1,bind);  bind_aset(bind,40/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos16); goto pass11;
 accept7:;
 break;
}it=bind_aget(bind,40/*_result*/); bind_aset(bind,42/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto pass10;
it=bind_aget(bind,42/*autovar*/); bind_aset(bind,43/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto alt5_3;
it=bind_aget(bind,43/*autovar*/); bind_aset(bind,33/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos13); goto pass9;
 accept5:;
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto fail;
it=bind_aget(bind,33/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 3:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_detect_switch_c(){ 
 cls_First_Dataflow=rb_define_class("First_Dataflow",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
switchhash_First_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch\nnext h[k]=1 if k<=Switch\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Many\nnext h[k]=5 if k<=Apply\nnext h[k]=6 if k<=Switch\nnext h[k]=7 if k<=Bind\nnext h[k]=8 if k<=Act\nnext h[k]=9 if k<=CAct\nnext h[k]=10 if k<=Local\nnext h[k]=11 if k<=Result\nnext h[k]=12 if k<=Cut\nnext h[k]=13 if k<=Stop\nnext h[k]=14 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_First_Dataflow_1);;
sy_First_Dataflow_Compiler_46ba=rb_intern("First_Dataflow_Compiler_46ba");
sy_First_Dataflow__append_lp__2a35=rb_intern("First_Dataflow__append_lp__2a35");
sy_First_Dataflow__append_lp__4297=rb_intern("First_Dataflow__append_lp__4297");
sy_First_Dataflow__append_lp__9ca5=rb_intern("First_Dataflow__append_lp__9ca5");
sy_First_Dataflow__at_vis_eq_bin_af53=rb_intern("First_Dataflow__at_vis_eq_bin_af53");
sy_First_Dataflow__lp_=rb_intern("First_Dataflow__lp_");
sy_First_Dataflow__lp_Compile_8023=rb_intern("First_Dataflow__lp_Compile_8023");
sy_First_Dataflow_bind_lb_0_rb__dot__b660=rb_intern("First_Dataflow_bind_lb_0_rb__dot__b660");
sy_First_Dataflow_bind_lb_12_rb__900a=rb_intern("First_Dataflow_bind_lb_12_rb__900a");
sy_First_Dataflow_bind_lb_19_rb__2b52=rb_intern("First_Dataflow_bind_lb_19_rb__2b52");
sy_First_Dataflow_bind_lb_19_rb__e313=rb_intern("First_Dataflow_bind_lb_19_rb__e313");
sy_First_Dataflow_bind_lb_4_rb__dot__2651=rb_intern("First_Dataflow_bind_lb_4_rb__dot__2651");
sy_First_Dataflow_depends_lp__5009=rb_intern("First_Dataflow_depends_lp__5009");
sy_First_Dataflow_empty=rb_intern("First_Dataflow_empty");
sy_First_Dataflow_lattice_dot__5a9e=rb_intern("First_Dataflow_lattice_dot__5a9e");
sy_analyze=rb_intern("analyze");
rb_define_method(cls_First_Dataflow,"first",First_Dataflow_first,0);
rb_define_method(cls_First_Dataflow,"getvalue",First_Dataflow_getvalue,1);
rb_define_method(cls_First_Dataflow,"root",First_Dataflow_root,0);
rb_define_method(cls_First_Dataflow,"value",First_Dataflow_value,0);

 cls_Sizes_Dataflow=rb_define_class("Sizes_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
switchhash_Sizes_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Sizes_Dataflow_1);;
switchhash_Sizes_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Sizes_Dataflow_2);;
switchhash_Sizes_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch\nnext h[k]=1 if k<=Switch\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Many\nnext h[k]=5 if k<=Apply\nnext h[k]=6 if k<=Switch\nnext h[k]=7 if k<=Bind\nnext h[k]=8 if k<=Act\nnext h[k]=9 if k<=CAct\nnext h[k]=10 if k<=Local\nnext h[k]=11 if k<=Result\nnext h[k]=12 if k<=Cut\nnext h[k]=13 if k<=Stop\nnext h[k]=14 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Sizes_Dataflow_3);;
sy_Sizes_Dataflow_Compiler_46ba=rb_intern("Sizes_Dataflow_Compiler_46ba");
sy_Sizes_Dataflow__append_lp__2a35=rb_intern("Sizes_Dataflow__append_lp__2a35");
sy_Sizes_Dataflow__append_lp__4297=rb_intern("Sizes_Dataflow__append_lp__4297");
sy_Sizes_Dataflow__append_lp__9ca5=rb_intern("Sizes_Dataflow__append_lp__9ca5");
sy_Sizes_Dataflow__at_vis_eq_bin_af53=rb_intern("Sizes_Dataflow__at_vis_eq_bin_af53");
sy_Sizes_Dataflow__lp_=rb_intern("Sizes_Dataflow__lp_");
sy_Sizes_Dataflow__lp_Compile_8023=rb_intern("Sizes_Dataflow__lp_Compile_8023");
sy_Sizes_Dataflow_bind_lb_0_rb__dot__b660=rb_intern("Sizes_Dataflow_bind_lb_0_rb__dot__b660");
sy_Sizes_Dataflow_bind_lb_12_rb__900a=rb_intern("Sizes_Dataflow_bind_lb_12_rb__900a");
sy_Sizes_Dataflow_bind_lb_19_rb__2b52=rb_intern("Sizes_Dataflow_bind_lb_19_rb__2b52");
sy_Sizes_Dataflow_bind_lb_19_rb__e313=rb_intern("Sizes_Dataflow_bind_lb_19_rb__e313");
sy_Sizes_Dataflow_bind_lb_4_rb__dot__2651=rb_intern("Sizes_Dataflow_bind_lb_4_rb__dot__2651");
sy_Sizes_Dataflow_empty=rb_intern("Sizes_Dataflow_empty");
sy_Sizes_Dataflow_lattice_dot__5a9e=rb_intern("Sizes_Dataflow_lattice_dot__5a9e");
sy_Sizes_Dataflow_lattice_dot__e0e5=rb_intern("Sizes_Dataflow_lattice_dot__e0e5");
sy_Sizes_Dataflow_lattice_lb__fdc8=rb_intern("Sizes_Dataflow_lattice_lb__fdc8");
sy_Sizes_Dataflow_lattice_lb__fdee=rb_intern("Sizes_Dataflow_lattice_lb__fdee");
rb_define_method(cls_Sizes_Dataflow,"first",Sizes_Dataflow_first,0);
rb_define_method(cls_Sizes_Dataflow,"first_Sizes_Dataflow",Sizes_Dataflow_first_Sizes_Dataflow,0);
rb_define_method(cls_Sizes_Dataflow,"getvalue",Sizes_Dataflow_getvalue,1);

 cls_Switch_Char_Dataflow=rb_define_class("Switch_Char_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
switchhash_Switch_Char_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Char_Dataflow_1);;
switchhash_Switch_Char_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Char_Dataflow_2);;
switchhash_Switch_Char_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Char_Dataflow_3);;
switchhash_Switch_Char_Dataflow_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch\nnext h[k]=1 if k<=Switch\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Many\nnext h[k]=5 if k<=Apply\nnext h[k]=6 if k<=Switch\nnext h[k]=7 if k<=Bind\nnext h[k]=8 if k<=Act\nnext h[k]=9 if k<=CAct\nnext h[k]=10 if k<=Local\nnext h[k]=11 if k<=Result\nnext h[k]=12 if k<=Cut\nnext h[k]=13 if k<=Stop\nnext h[k]=14 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Char_Dataflow_4);;
sy_Switch_Char_Dataflow_Compiler_46ba=rb_intern("Switch_Char_Dataflow_Compiler_46ba");
sy_Switch_Char_Dataflow__append_lp__2a35=rb_intern("Switch_Char_Dataflow__append_lp__2a35");
sy_Switch_Char_Dataflow__append_lp__4297=rb_intern("Switch_Char_Dataflow__append_lp__4297");
sy_Switch_Char_Dataflow__append_lp__9ca5=rb_intern("Switch_Char_Dataflow__append_lp__9ca5");
sy_Switch_Char_Dataflow__at_vis_eq_bin_af53=rb_intern("Switch_Char_Dataflow__at_vis_eq_bin_af53");
sy_Switch_Char_Dataflow__lp_=rb_intern("Switch_Char_Dataflow__lp_");
sy_Switch_Char_Dataflow__lp_Compile_8023=rb_intern("Switch_Char_Dataflow__lp_Compile_8023");
sy_Switch_Char_Dataflow_bind_lb_0_rb__dot__b660=rb_intern("Switch_Char_Dataflow_bind_lb_0_rb__dot__b660");
sy_Switch_Char_Dataflow_bind_lb_12_rb__900a=rb_intern("Switch_Char_Dataflow_bind_lb_12_rb__900a");
sy_Switch_Char_Dataflow_bind_lb_19_rb__2b52=rb_intern("Switch_Char_Dataflow_bind_lb_19_rb__2b52");
sy_Switch_Char_Dataflow_bind_lb_19_rb__e313=rb_intern("Switch_Char_Dataflow_bind_lb_19_rb__e313");
sy_Switch_Char_Dataflow_bind_lb_4_rb__dot__2651=rb_intern("Switch_Char_Dataflow_bind_lb_4_rb__dot__2651");
sy_Switch_Char_Dataflow_empty=rb_intern("Switch_Char_Dataflow_empty");
sy_Switch_Char_Dataflow_firstcha_647d=rb_intern("Switch_Char_Dataflow_firstcha_647d");
sy_Switch_Char_Dataflow_lattice_dot__5a9e=rb_intern("Switch_Char_Dataflow_lattice_dot__5a9e");
sy_Switch_Char_Dataflow_lattice_dot__e0e5=rb_intern("Switch_Char_Dataflow_lattice_dot__e0e5");
sy_Switch_Char_Dataflow_regchar_lp__96c7=rb_intern("Switch_Char_Dataflow_regchar_lp__96c7");
rb_define_method(cls_Switch_Char_Dataflow,"first",Switch_Char_Dataflow_first,0);
rb_define_method(cls_Switch_Char_Dataflow,"first_Switch_Char_Dataflow",Switch_Char_Dataflow_first_Switch_Char_Dataflow,0);
rb_define_method(cls_Switch_Char_Dataflow,"getvalue",Switch_Char_Dataflow_getvalue,1);

 cls_Switch_Clas_Dataflow=rb_define_class("Switch_Clas_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
switchhash_Switch_Clas_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Clas_Dataflow_1);;
switchhash_Switch_Clas_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Clas_Dataflow_2);;
switchhash_Switch_Clas_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch\nnext h[k]=1 if k<=Switch\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Many\nnext h[k]=5 if k<=Apply\nnext h[k]=6 if k<=Switch\nnext h[k]=7 if k<=Bind\nnext h[k]=8 if k<=Act\nnext h[k]=9 if k<=CAct\nnext h[k]=10 if k<=Local\nnext h[k]=11 if k<=Result\nnext h[k]=12 if k<=Cut\nnext h[k]=13 if k<=Stop\nnext h[k]=14 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Clas_Dataflow_3);;
sy_Switch_Clas_Dataflow_Compiler_46ba=rb_intern("Switch_Clas_Dataflow_Compiler_46ba");
sy_Switch_Clas_Dataflow__append_lp__2a35=rb_intern("Switch_Clas_Dataflow__append_lp__2a35");
sy_Switch_Clas_Dataflow__append_lp__4297=rb_intern("Switch_Clas_Dataflow__append_lp__4297");
sy_Switch_Clas_Dataflow__append_lp__9ca5=rb_intern("Switch_Clas_Dataflow__append_lp__9ca5");
sy_Switch_Clas_Dataflow__at_vis_eq_bin_af53=rb_intern("Switch_Clas_Dataflow__at_vis_eq_bin_af53");
sy_Switch_Clas_Dataflow__lp_=rb_intern("Switch_Clas_Dataflow__lp_");
sy_Switch_Clas_Dataflow__lp_Compile_8023=rb_intern("Switch_Clas_Dataflow__lp_Compile_8023");
sy_Switch_Clas_Dataflow_bind_lb_0_rb__dot__b660=rb_intern("Switch_Clas_Dataflow_bind_lb_0_rb__dot__b660");
sy_Switch_Clas_Dataflow_bind_lb_12_rb__900a=rb_intern("Switch_Clas_Dataflow_bind_lb_12_rb__900a");
sy_Switch_Clas_Dataflow_bind_lb_19_rb__2b52=rb_intern("Switch_Clas_Dataflow_bind_lb_19_rb__2b52");
sy_Switch_Clas_Dataflow_bind_lb_19_rb__e313=rb_intern("Switch_Clas_Dataflow_bind_lb_19_rb__e313");
sy_Switch_Clas_Dataflow_bind_lb_4_rb__dot__2651=rb_intern("Switch_Clas_Dataflow_bind_lb_4_rb__dot__2651");
sy_Switch_Clas_Dataflow_empty=rb_intern("Switch_Clas_Dataflow_empty");
sy_Switch_Clas_Dataflow_lattice_dot__5a9e=rb_intern("Switch_Clas_Dataflow_lattice_dot__5a9e");
sy_Switch_Clas_Dataflow_lattice_lb__d8d7=rb_intern("Switch_Clas_Dataflow_lattice_lb__d8d7");
rb_define_method(cls_Switch_Clas_Dataflow,"first",Switch_Clas_Dataflow_first,0);
rb_define_method(cls_Switch_Clas_Dataflow,"first_Switch_Clas_Dataflow",Switch_Clas_Dataflow_first_Switch_Clas_Dataflow,0);
rb_define_method(cls_Switch_Clas_Dataflow,"getvalue",Switch_Clas_Dataflow_getvalue,1);

 cls_Detect_First=rb_define_class("Detect_First",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
switchhash_Detect_First_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_First_1);;
switchhash_Detect_First_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_First_2);;
sy_Detect_First__append_lp__7352=rb_intern("Detect_First__append_lp__7352");
sy_Detect_First__append_lp__b494=rb_intern("Detect_First__append_lp__b494");
sy_Detect_First__at_name_eq_sr_362f=rb_intern("Detect_First__at_name_eq_sr_362f");
sy_Detect_First__do_rules_eq__le__ab16=rb_intern("Detect_First__do_rules_eq__le__ab16");
sy_Detect_First_src_25d9=rb_intern("Detect_First_src_25d9");
sy_Detect_First_src_dot_rule_5acf=rb_intern("Detect_First_src_dot_rule_5acf");
sy_Detect_First_src_dot_rule_d270=rb_intern("Detect_First_src_dot_rule_d270");
rb_define_method(cls_Detect_First,"itrans",Detect_First_itrans,0);
rb_define_method(cls_Detect_First,"root",Detect_First_root,0);

 cls_Detect_Switch_Char=rb_define_class("Detect_Switch_Char",rb_const_get(rb_cObject,rb_intern("Detect_First"))); 
failobj=rb_eval_string("FAIL");
switchhash_Detect_Switch_Char_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Array\nnext h[k]=1 if k<=AmethystAST\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_10);;
switchhash_Detect_Switch_Char_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_11);;
switchhash_Detect_Switch_Char_12=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_12);;
switchhash_Detect_Switch_Char_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Many\nnext h[k]=3 if k<=Apply\nnext h[k]=4 if k<=Seq\nnext h[k]=5 if k<=Or\nnext h[k]=6 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_1);;
switchhash_Detect_Switch_Char_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_2);;
switchhash_Detect_Switch_Char_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_3);;
switchhash_Detect_Switch_Char_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_4);;
switchhash_Detect_Switch_Char_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_5);;
switchhash_Detect_Switch_Char_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=Switch\nnext h[k]=4 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_6);;
switchhash_Detect_Switch_Char_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_7);;
switchhash_Detect_Switch_Char_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=Switch\nnext h[k]=4 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_8);;
switchhash_Detect_Switch_Char_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_9);;
sy_Detect_Switch_Char_Or_lb__ti_bind_0681=rb_intern("Detect_Switch_Char_Or_lb__ti_bind_0681");
sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_3f6c=rb_intern("Detect_Switch_Char_Seq_lb__ti__lp_bi_3f6c");
sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_abc9=rb_intern("Detect_Switch_Char_Seq_lb__ti__lp_bi_abc9");
sy_Detect_Switch_Char_Switch_C_4c55=rb_intern("Detect_Switch_Char_Switch_C_4c55");
sy_Detect_Switch_Char_Switch_C_7a94=rb_intern("Detect_Switch_Char_Switch_C_7a94");
sy_Detect_Switch_Char_Switch_C_901e=rb_intern("Detect_Switch_Char_Switch_C_901e");
sy_Detect_Switch_Char_Switch_C_fe8b=rb_intern("Detect_Switch_Char_Switch_C_fe8b");
sy_Detect_Switch_Char__append_lp__0bcf=rb_intern("Detect_Switch_Char__append_lp__0bcf");
sy_Detect_Switch_Char__append_lp__51dc=rb_intern("Detect_Switch_Char__append_lp__51dc");
sy_Detect_Switch_Char__append_lp__58ed=rb_intern("Detect_Switch_Char__append_lp__58ed");
sy_Detect_Switch_Char__append_lp__7352=rb_intern("Detect_Switch_Char__append_lp__7352");
sy_Detect_Switch_Char__append_lp__b494=rb_intern("Detect_Switch_Char__append_lp__b494");
sy_Detect_Switch_Char__append_lp__b6c7=rb_intern("Detect_Switch_Char__append_lp__b6c7");
sy_Detect_Switch_Char__append_lp__c7ad=rb_intern("Detect_Switch_Char__append_lp__c7ad");
sy_Detect_Switch_Char__append_lp__dd73=rb_intern("Detect_Switch_Char__append_lp__dd73");
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
sy_Detect_Switch_Char_bind_lb_26_rb__abbd=rb_intern("Detect_Switch_Char_bind_lb_26_rb__abbd");
sy_Detect_Switch_Char_bind_lb_3_rb__dot__2d57=rb_intern("Detect_Switch_Char_bind_lb_3_rb__dot__2d57");
sy_Detect_Switch_Char_bind_lb_3_rb__dot__8725=rb_intern("Detect_Switch_Char_bind_lb_3_rb__dot__8725");
sy_Detect_Switch_Char_bind_lb_3_rb__lt__bb51=rb_intern("Detect_Switch_Char_bind_lb_3_rb__lt__bb51");
sy_Detect_Switch_Char_bind_lb_42_rb__08d4=rb_intern("Detect_Switch_Char_bind_lb_42_rb__08d4");
sy_Detect_Switch_Char_bind_lb_47_rb__0480=rb_intern("Detect_Switch_Char_bind_lb_47_rb__0480");
sy_Detect_Switch_Char_bind_lb_47_rb__fc21=rb_intern("Detect_Switch_Char_bind_lb_47_rb__fc21");
sy_Detect_Switch_Char_first_lp_sr_3298=rb_intern("Detect_Switch_Char_first_lp_sr_3298");
sy_Detect_Switch_Char_if_sp_bind_lb__f1e9=rb_intern("Detect_Switch_Char_if_sp_bind_lb__f1e9");
sy_Detect_Switch_Char_s_eq_Switch_24ae=rb_intern("Detect_Switch_Char_s_eq_Switch_24ae");
sy_Detect_Switch_Char_s_eq_Switch_3dce=rb_intern("Detect_Switch_Char_s_eq_Switch_3dce");
sy_Detect_Switch_Char_s_eq_Switch_a564=rb_intern("Detect_Switch_Char_s_eq_Switch_a564");
sy_Detect_Switch_Char_s_eq_Switch_f987=rb_intern("Detect_Switch_Char_s_eq_Switch_f987");
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
switchhash_Detect_Switch_Clas_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_1);;
switchhash_Detect_Switch_Clas_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Switch_Clas\nnext h[k]=3 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_2);;
switchhash_Detect_Switch_Clas_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_3);;
switchhash_Detect_Switch_Clas_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Switch_Clas\nnext h[k]=3 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_4);;
switchhash_Detect_Switch_Clas_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_5);;
switchhash_Detect_Switch_Clas_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Array\nnext h[k]=1 if k<=AmethystAST\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_6);;
switchhash_Detect_Switch_Clas_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_7);;
switchhash_Detect_Switch_Clas_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_8);;
sy_Detect_Switch_Clas_Or_lb__ti_bind_d3ee=rb_intern("Detect_Switch_Clas_Or_lb__ti_bind_d3ee");
sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a0ca=rb_intern("Detect_Switch_Clas_Seq_lb__ti__lp_bi_a0ca");
sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_abc9=rb_intern("Detect_Switch_Clas_Seq_lb__ti__lp_bi_abc9");
sy_Detect_Switch_Clas_Switch_C_0e01=rb_intern("Detect_Switch_Clas_Switch_C_0e01");
sy_Detect_Switch_Clas_Switch_C_3637=rb_intern("Detect_Switch_Clas_Switch_C_3637");
sy_Detect_Switch_Clas_Switch_C_a9b5=rb_intern("Detect_Switch_Clas_Switch_C_a9b5");
sy_Detect_Switch_Clas_Switch_C_b0fb=rb_intern("Detect_Switch_Clas_Switch_C_b0fb");
sy_Detect_Switch_Clas_Switch_C_ddef=rb_intern("Detect_Switch_Clas_Switch_C_ddef");
sy_Detect_Switch_Clas__append_lp__0bcf=rb_intern("Detect_Switch_Clas__append_lp__0bcf");
sy_Detect_Switch_Clas__append_lp__26c5=rb_intern("Detect_Switch_Clas__append_lp__26c5");
sy_Detect_Switch_Clas__append_lp__58ed=rb_intern("Detect_Switch_Clas__append_lp__58ed");
sy_Detect_Switch_Clas__append_lp__7352=rb_intern("Detect_Switch_Clas__append_lp__7352");
sy_Detect_Switch_Clas__append_lp__b494=rb_intern("Detect_Switch_Clas__append_lp__b494");
sy_Detect_Switch_Clas__append_lp__b6c7=rb_intern("Detect_Switch_Clas__append_lp__b6c7");
sy_Detect_Switch_Clas__append_lp__be78=rb_intern("Detect_Switch_Clas__append_lp__be78");
sy_Detect_Switch_Clas__append_lp__dd73=rb_intern("Detect_Switch_Clas__append_lp__dd73");
sy_Detect_Switch_Clas__at_changed_5352=rb_intern("Detect_Switch_Clas__at_changed_5352");
sy_Detect_Switch_Clas__at_changed_b885=rb_intern("Detect_Switch_Clas__at_changed_b885");
sy_Detect_Switch_Clas__at_changed_c681=rb_intern("Detect_Switch_Clas__at_changed_c681");
sy_Detect_Switch_Clas__at_name_eq_sr_362f=rb_intern("Detect_Switch_Clas__at_name_eq_sr_362f");
sy_Detect_Switch_Clas__do_rules_eq__le__ab16=rb_intern("Detect_Switch_Clas__do_rules_eq__le__ab16");
sy_Detect_Switch_Clas__lb__lb_Lattic_62e5=rb_intern("Detect_Switch_Clas__lb__lb_Lattic_62e5");
sy_Detect_Switch_Clas__lp_=rb_intern("Detect_Switch_Clas__lp_");
sy_Detect_Switch_Clas__lp_bind_lb_2_rb__6693=rb_intern("Detect_Switch_Clas__lp_bind_lb_2_rb__6693");
sy_Detect_Switch_Clas__lp_src_dot_ins_6a75=rb_intern("Detect_Switch_Clas__lp_src_dot_ins_6a75");
sy_Detect_Switch_Clas_bind_lb_15_rb__e3d5=rb_intern("Detect_Switch_Clas_bind_lb_15_rb__e3d5");
sy_Detect_Switch_Clas_bind_lb_1_rb__pl__42be=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__pl__42be");
sy_Detect_Switch_Clas_bind_lb_31_rb__1592=rb_intern("Detect_Switch_Clas_bind_lb_31_rb__1592");
sy_Detect_Switch_Clas_bind_lb_36_rb__456b=rb_intern("Detect_Switch_Clas_bind_lb_36_rb__456b");
sy_Detect_Switch_Clas_bind_lb_36_rb__91e3=rb_intern("Detect_Switch_Clas_bind_lb_36_rb__91e3");
sy_Detect_Switch_Clas_bind_lb_3_rb__dot__2d57=rb_intern("Detect_Switch_Clas_bind_lb_3_rb__dot__2d57");
sy_Detect_Switch_Clas_bind_lb_3_rb__dot__991d=rb_intern("Detect_Switch_Clas_bind_lb_3_rb__dot__991d");
sy_Detect_Switch_Clas_bind_lb_3_rb__lt__bb51=rb_intern("Detect_Switch_Clas_bind_lb_3_rb__lt__bb51");
sy_Detect_Switch_Clas_if_sp_bind_lb__f1e9=rb_intern("Detect_Switch_Clas_if_sp_bind_lb__f1e9");
sy_Detect_Switch_Clas_src_25d9=rb_intern("Detect_Switch_Clas_src_25d9");
sy_Detect_Switch_Clas_src_dot_ary_d5cf=rb_intern("Detect_Switch_Clas_src_dot_ary_d5cf");
sy_Detect_Switch_Clas_src_dot_rule_5acf=rb_intern("Detect_Switch_Clas_src_dot_rule_5acf");
sy_Detect_Switch_Clas_src_dot_rule_d270=rb_intern("Detect_Switch_Clas_src_dot_rule_d270");
rb_define_method(cls_Detect_Switch_Clas,"combine_or",Detect_Switch_Clas_combine_or,1);
rb_define_method(cls_Detect_Switch_Clas,"combine_seq",Detect_Switch_Clas_combine_seq,1);
rb_define_method(cls_Detect_Switch_Clas,"itrans",Detect_Switch_Clas_itrans,0);
rb_define_method(cls_Detect_Switch_Clas,"root",Detect_Switch_Clas_root,0);
rb_define_method(cls_Detect_Switch_Clas,"traverse",Detect_Switch_Clas_traverse,0);
rb_define_method(cls_Detect_Switch_Clas,"traverse_item",Detect_Switch_Clas_traverse_item,0);
rb_define_method(cls_Detect_Switch_Clas,"visit",Detect_Switch_Clas_visit,0);
 rb_eval_string("testversiondetect_switch('5b2f06ae8be6f30b598106da722e5a83')");}
