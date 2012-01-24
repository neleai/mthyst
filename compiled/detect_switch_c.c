#include "cthyst.h"
VALUE cls_First_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE First_Dataflow_first(VALUE self );
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE First_Dataflow_root(VALUE self );
VALUE First_Dataflow_value(VALUE self );
static VALUE c_Act;
static VALUE c_Bind;
static VALUE c_CAct;
static VALUE c_Cut;
static VALUE c_Local;
static VALUE c_Many;
static VALUE c_Or;
static VALUE c_Result;
static VALUE c_Seq;
static VALUE c_Stop;
static VALUE c_Switch;
static VALUE sy_First_Dataflow__append_lp__26c5;
static VALUE sy_First_Dataflow__append_lp__81ec;
static VALUE sy_First_Dataflow__append_lp__89bf;
static VALUE sy_First_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_First_Dataflow__lp_;
static VALUE sy_First_Dataflow_bind_lb_0_rb__dot__b660;
static VALUE sy_First_Dataflow_bind_lb_20_rb__9f79;
static VALUE sy_First_Dataflow_bind_lb_3_rb__dot__c064;
static VALUE sy_First_Dataflow_bind_lb_9_rb_;
static VALUE sy_First_Dataflow_bind_lb_9_rb__dot__b02f;
static VALUE sy_First_Dataflow_depends_lp__0807;
static VALUE sy_First_Dataflow_empty;
static VALUE sy_First_Dataflow_lattice_dot__2c4f;
static VALUE sy_analyze;
VALUE First_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(30);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*vals*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Switch; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass2); bind_aset(bind,4/*v*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_3_rb__dot__c064,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__81ec,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto break1;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_First_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Seq; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,9/*val*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,10/*el*/,it);
it=bind_aget(bind,10/*el*/); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,11/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*nev*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_9_rb__dot__b02f,1,bind);  bind_aset(bind,9/*val*/,it);
int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 it=rb_funcall(self,sy_First_Dataflow__lp_,1,bind); FAILTEST(alt2_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto break2;
 accept2:;
 if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,9/*val*/); bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_3;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Many; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,9/*val*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_9_rb_,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt1_4;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Or; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_5); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
int oldpos6; while(1){oldpos6=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__26c5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,18/*autovar*/); bind_aset(bind,20/*it*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_20_rb__9f79,1,bind);  bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt1_5;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Switch; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_6); bind_aset(bind,22/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,22/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,23/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break5); bind_aset(bind,24/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__89bf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,23/*autovar*/); bind_aset(bind,20/*it*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_20_rb__9f79,1,bind);  bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt1_6;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Bind; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_7); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,27/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt1_7;
it=bind_aget(bind,27/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Act; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_2); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_3); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_3: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Local; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_4); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_4: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Result; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_5); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_5: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Cut; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_6); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_6: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Stop; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_7); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_7:  ame_setpos(self,oldpos8); goto alt1_8;
 accept3:;
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,28/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=rb_funcall(self,sy_First_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt1_8;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_9); bind_aset(bind,10/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_9:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,7/*_result*/);
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
it=rb_funcall(self,sy_First_Dataflow_depends_lp__0807,1,bind);  bind_aset(bind,1/*_result*/,it);
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
static VALUE c_Act;
static VALUE c_Apply;
static VALUE c_Bind;
static VALUE c_CAct;
static VALUE c_Cut;
static VALUE c_Local;
static VALUE c_Many;
static VALUE c_Or;
static VALUE c_Result;
static VALUE c_Seq;
static VALUE c_Stop;
static VALUE c_Switch;
static VALUE sy_Sizes_Dataflow_Compiler_825f;
static VALUE sy_Sizes_Dataflow__append_lp__26c5;
static VALUE sy_Sizes_Dataflow__append_lp__81ec;
static VALUE sy_Sizes_Dataflow__append_lp__89bf;
static VALUE sy_Sizes_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Sizes_Dataflow__lp_;
static VALUE sy_Sizes_Dataflow__lp_Compile_2942;
static VALUE sy_Sizes_Dataflow_bind_lb_0_rb__dot__b660;
static VALUE sy_Sizes_Dataflow_bind_lb_20_rb__9f79;
static VALUE sy_Sizes_Dataflow_bind_lb_3_rb__dot__c064;
static VALUE sy_Sizes_Dataflow_bind_lb_9_rb_;
static VALUE sy_Sizes_Dataflow_bind_lb_9_rb__dot__b02f;
static VALUE sy_Sizes_Dataflow_empty;
static VALUE sy_Sizes_Dataflow_lattice_dot__2c4f;
static VALUE sy_Sizes_Dataflow_lattice_dot__e0e5;
static VALUE sy_Sizes_Dataflow_lattice_lb__655f;
static VALUE sy_Sizes_Dataflow_lattice_lb__fdee;
VALUE Sizes_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(19);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(95) ... UC(95):;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"seq",3)) goto pass2; else ame_setpos(self,ame_getpos(self)+3); break;case UC(0) ... UC(94):;case UC(96) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(pass2); break;}  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt3_2;
 it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_2); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,9/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_2;
it=rb_funcall(self,sy_Sizes_Dataflow_lattice_lb__655f,1,bind);  bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,6/*autovar*/); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass4);int oldpos4=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass4;}
 unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(114) ... UC(114):;   it=AmethystCore_anything(self ); FAILTEST(alt4_2);if (strncmp(ame_curstr(self),"egch",4)) goto alt4_2; else ame_setpos(self,ame_getpos(self)+4); break;case UC(0) ... UC(113):;case UC(115) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt4_2); break;} 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass4;}
 unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(99) ... UC(99):;   it=AmethystCore_anything(self ); FAILTEST(alt4_3);if (strncmp(ame_curstr(self),"las",3)) goto alt4_3; else ame_setpos(self,ame_getpos(self)+3); break;case UC(0) ... UC(98):;case UC(100) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt4_3); break;} 
ame_setcut(self,Qnil);goto accept4;
alt4_3: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass4;}
 unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC(97) ... UC(97):;   it=AmethystCore_anything(self ); FAILTEST(alt4_4);if (strncmp(ame_curstr(self),"nything",7)) goto alt4_4; else ame_setpos(self,ame_getpos(self)+7); break;case UC(0) ... UC(96):;case UC(98) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt4_4); break;} 
ame_setcut(self,Qnil);goto accept4;
  alt4_4:  ame_setpos(self,oldpos4); goto pass4;
 accept4:;
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt3_3;
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_lb__fdee,1,bind);  bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,6/*autovar*/); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass5);unsigned char chr5=*ame_curstr(self);  switch(chr5){case UC(102) ... UC(102):;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr(self),"ails",4)) goto pass5; else ame_setpos(self,ame_getpos(self)+4); break;case UC(0) ... UC(101):;case UC(103) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(pass5); break;}  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt3_4;
it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__e0e5,1,bind);  bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_4:  ame_setpos(self,oldpos3); goto pass1;
 accept3:;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt2_2;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,13/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,15/*name*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__lp_Compile_2942,1,bind); FAILTEST(pass6);it=rb_funcall(self,sy_Sizes_Dataflow_Compiler_825f,1,bind);  bind_aset(bind,16/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,16/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass7); bind_aset(bind,17/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto pass6;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,18/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt2_3;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,13/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Sizes_Dataflow_first_Sizes_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,13/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,13/*_result*/);
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_first_Sizes_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(30);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*vals*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Switch; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass2); bind_aset(bind,4/*v*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_3_rb__dot__c064,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__81ec,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto break1;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Seq; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,9/*val*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,10/*el*/,it);
it=bind_aget(bind,10/*el*/); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,11/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*nev*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_9_rb__dot__b02f,1,bind);  bind_aset(bind,9/*val*/,it);
int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 it=rb_funcall(self,sy_Sizes_Dataflow__lp_,1,bind); FAILTEST(alt2_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto break2;
 accept2:;
 if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,9/*val*/); bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_3;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Many; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,9/*val*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_9_rb_,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt1_4;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Or; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_5); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
int oldpos6; while(1){oldpos6=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__26c5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,18/*autovar*/); bind_aset(bind,20/*it*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_20_rb__9f79,1,bind);  bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt1_5;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Switch; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_6); bind_aset(bind,22/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,22/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,23/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break5); bind_aset(bind,24/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__89bf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,23/*autovar*/); bind_aset(bind,20/*it*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_20_rb__9f79,1,bind);  bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt1_6;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Bind; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_7); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,27/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt1_7;
it=bind_aget(bind,27/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Act; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_2); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_3); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_3: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Local; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_4); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_4: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Result; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_5); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_5: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Cut; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_6); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_6: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Stop; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_7); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_7:  ame_setpos(self,oldpos8); goto alt1_8;
 accept3:;
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,28/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt1_8;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_9); bind_aset(bind,10/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_9:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,7/*_result*/);
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
static VALUE c_Act;
static VALUE c_Apply;
static VALUE c_Bind;
static VALUE c_CAct;
static VALUE c_Cut;
static VALUE c_Local;
static VALUE c_Many;
static VALUE c_Or;
static VALUE c_Result;
static VALUE c_Seq;
static VALUE c_Stop;
static VALUE c_Switch;
static VALUE sy_Switch_Dataflow_Compiler_af65;
static VALUE sy_Switch_Dataflow__append_lp__26c5;
static VALUE sy_Switch_Dataflow__append_lp__81ec;
static VALUE sy_Switch_Dataflow__append_lp__89bf;
static VALUE sy_Switch_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Switch_Dataflow__lp_;
static VALUE sy_Switch_Dataflow__lp_Compile_d907;
static VALUE sy_Switch_Dataflow_bind_lb_0_rb__dot__b660;
static VALUE sy_Switch_Dataflow_bind_lb_20_rb__9f79;
static VALUE sy_Switch_Dataflow_bind_lb_3_rb__dot__c064;
static VALUE sy_Switch_Dataflow_bind_lb_9_rb_;
static VALUE sy_Switch_Dataflow_bind_lb_9_rb__dot__b02f;
static VALUE sy_Switch_Dataflow_empty;
static VALUE sy_Switch_Dataflow_firstcha_ec42;
static VALUE sy_Switch_Dataflow_lattice_dot__2c4f;
static VALUE sy_Switch_Dataflow_lattice_dot__5a9e;
static VALUE sy_Switch_Dataflow_lattice_dot__e0e5;
static VALUE sy_Switch_Dataflow_regchar_lp__dfee;
VALUE Switch_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(21);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(95) ... UC(95):;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"seq",3)) goto pass2; else ame_setpos(self,ame_getpos(self)+3); break;case UC(0) ... UC(94):;case UC(96) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(pass2); break;}  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt3_2;
 it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_2); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,9/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_2;
it=rb_funcall(self,sy_Switch_Dataflow_firstcha_ec42,1,bind);  bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,6/*autovar*/); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass4);unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(114) ... UC(114):;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr(self),"egch",4)) goto pass4; else ame_setpos(self,ame_getpos(self)+4); break;case UC(0) ... UC(113):;case UC(115) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(pass4); break;}  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt3_3;
 it=c_Act; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_3); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,9/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt3_3;
it=rb_funcall(self,sy_Switch_Dataflow_regchar_lp__dfee,1,bind);  bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,6/*autovar*/); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass6);unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(97) ... UC(97):;   it=AmethystCore_anything(self ); FAILTEST(pass6);if (strncmp(ame_curstr(self),"nything",7)) goto pass6; else ame_setpos(self,ame_getpos(self)+7); break;case UC(0) ... UC(96):;case UC(98) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(pass6); break;}  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt3_4;
it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__e0e5,1,bind);  bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_4: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,6/*autovar*/); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass7);unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC(102) ... UC(102):;   it=AmethystCore_anything(self ); FAILTEST(pass7);if (strncmp(ame_curstr(self),"ails",4)) goto pass7; else ame_setpos(self,ame_getpos(self)+4); break;case UC(0) ... UC(101):;case UC(103) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(pass7); break;}  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt3_5;
it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_5:  ame_setpos(self,oldpos3); goto pass1;
 accept3:;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt2_2;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,15/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,16/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,16/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass8); bind_aset(bind,17/*name*/,it);
it=rb_funcall(self,sy_Switch_Dataflow__lp_Compile_d907,1,bind); FAILTEST(pass8);it=rb_funcall(self,sy_Switch_Dataflow_Compiler_af65,1,bind);  bind_aset(bind,18/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,18/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass9); bind_aset(bind,19/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto pass8;
it=bind_aget(bind,19/*autovar*/); bind_aset(bind,20/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt2_3;
it=bind_aget(bind,20/*autovar*/); bind_aset(bind,15/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Switch_Dataflow_first_Switch_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,15/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,15/*_result*/);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_first_Switch_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(30);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*vals*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Switch; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass2); bind_aset(bind,4/*v*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_3_rb__dot__c064,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Dataflow__append_lp__81ec,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto break1;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Seq; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,9/*val*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,10/*el*/,it);
it=bind_aget(bind,10/*el*/); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,11/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*nev*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_9_rb__dot__b02f,1,bind);  bind_aset(bind,9/*val*/,it);
int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 it=rb_funcall(self,sy_Switch_Dataflow__lp_,1,bind); FAILTEST(alt2_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto break2;
 accept2:;
 if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,9/*val*/); bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_3;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Many; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,9/*val*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_9_rb_,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt1_4;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Or; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_5); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
int oldpos6; while(1){oldpos6=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Dataflow__append_lp__26c5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,18/*autovar*/); bind_aset(bind,20/*it*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_20_rb__9f79,1,bind);  bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt1_5;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Switch; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_6); bind_aset(bind,22/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,22/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,23/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break5); bind_aset(bind,24/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Dataflow__append_lp__89bf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,23/*autovar*/); bind_aset(bind,20/*it*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_bind_lb_20_rb__9f79,1,bind);  bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt1_6;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Bind; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_7); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,27/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt1_7;
it=bind_aget(bind,27/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Act; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_2); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_3); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_3: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Local; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_4); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_4: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Result; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_5); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_5: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Cut; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_6); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_6: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Stop; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_7); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_7:  ame_setpos(self,oldpos8); goto alt1_8;
 accept3:;
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,28/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=rb_funcall(self,sy_Switch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt1_8;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_9); bind_aset(bind,10/*el*/,it);
it=rb_funcall(self,sy_Switch_Dataflow_empty,1,bind);  bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_9:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,7/*_result*/);
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
static VALUE c_Act;
static VALUE c_Apply;
static VALUE c_Bind;
static VALUE c_CAct;
static VALUE c_Cut;
static VALUE c_Local;
static VALUE c_Many;
static VALUE c_Or;
static VALUE c_Result;
static VALUE c_Seq;
static VALUE c_Stop;
static VALUE c_Switch;
static VALUE sy_ClasSwitch_Dataflow_Compiler_6acb;
static VALUE sy_ClasSwitch_Dataflow__append_lp__26c5;
static VALUE sy_ClasSwitch_Dataflow__append_lp__81ec;
static VALUE sy_ClasSwitch_Dataflow__append_lp__89bf;
static VALUE sy_ClasSwitch_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_ClasSwitch_Dataflow__lp_;
static VALUE sy_ClasSwitch_Dataflow__lp_Compile_bcde;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_0_rb__dot__b660;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_20_rb__9f79;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_3_rb__dot__c064;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_9_rb_;
static VALUE sy_ClasSwitch_Dataflow_bind_lb_9_rb__dot__b02f;
static VALUE sy_ClasSwitch_Dataflow_empty;
static VALUE sy_ClasSwitch_Dataflow_lattice_dot__2c4f;
static VALUE sy_ClasSwitch_Dataflow_lattice_lb__6173;
VALUE ClasSwitch_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(14);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(99) ... UC(99):;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"las",3)) goto pass2; else ame_setpos(self,ame_getpos(self)+3); break;case UC(0) ... UC(98):;case UC(100) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(pass2); break;}  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
 it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*cls*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass1;
it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_lb__6173,1,bind);  bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt2_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,10/*name*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__lp_Compile_bcde,1,bind); FAILTEST(pass4);it=rb_funcall(self,sy_ClasSwitch_Dataflow_Compiler_6acb,1,bind);  bind_aset(bind,11/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,11/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto pass4;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt2_3;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=ClasSwitch_Dataflow_first_ClasSwitch_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,8/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_first_ClasSwitch_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(30);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*vals*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Switch; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass2); bind_aset(bind,4/*v*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_3_rb__dot__c064,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__append_lp__81ec,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto break1;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_0_rb__dot__b660,1,bind);  bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Seq; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,9/*val*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,10/*el*/,it);
it=bind_aget(bind,10/*el*/); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,11/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*nev*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_9_rb__dot__b02f,1,bind);  bind_aset(bind,9/*val*/,it);
int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 it=rb_funcall(self,sy_ClasSwitch_Dataflow__lp_,1,bind); FAILTEST(alt2_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto break2;
 accept2:;
 if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,9/*val*/); bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_3;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Many; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,9/*val*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_9_rb_,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt1_4;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Or; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_5); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
int oldpos6; while(1){oldpos6=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__append_lp__26c5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,18/*autovar*/); bind_aset(bind,20/*it*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_20_rb__9f79,1,bind);  bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt1_5;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Switch; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_6); bind_aset(bind,22/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,22/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,23/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break5); bind_aset(bind,24/*autovar*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow__append_lp__89bf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,23/*autovar*/); bind_aset(bind,20/*it*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_bind_lb_20_rb__9f79,1,bind);  bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt1_6;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Bind; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_7); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,27/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt1_7;
it=bind_aget(bind,27/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Act; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_2); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_3); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_3: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Local; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_4); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_4: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Result; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_5); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_5: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Cut; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_6); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_6: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_8;}
  it=c_Stop; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_7); bind_aset(bind,28/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_7:  ame_setpos(self,oldpos8); goto alt1_8;
 accept3:;
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,28/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=rb_funcall(self,sy_ClasSwitch_Dataflow_lattice_dot__2c4f,1,bind);  bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt1_8;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_9); bind_aset(bind,10/*el*/,it);
it=rb_funcall(self,sy_ClasSwitch_Dataflow_empty,1,bind);  bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_9:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,7/*_result*/);
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
static VALUE c_Grammar;
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
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=c_Grammar; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
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
it=rb_funcall(self,sy_Detect_First__append_lp__b494,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);
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
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_Switch_itrans(VALUE self );
VALUE Detect_Switch_root(VALUE self );
VALUE Detect_Switch_traverse(VALUE self );
VALUE Detect_Switch_traverse_item(VALUE self );
VALUE Detect_Switch_visit(VALUE self );
static VALUE c_Act;
static VALUE c_AmethystAST;
static VALUE c_Apply;
static VALUE c_Array;
static VALUE c_CAct;
static VALUE c_Grammar;
static VALUE c_Rule;
static VALUE sy_Detect_Switch__append_lp__7352;
static VALUE sy_Detect_Switch__append_lp__b494;
static VALUE sy_Detect_Switch__at_changed_5352;
static VALUE sy_Detect_Switch__at_changed_b885;
static VALUE sy_Detect_Switch__at_changed_c681;
static VALUE sy_Detect_Switch__at_name_eq_sr_362f;
static VALUE sy_Detect_Switch__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch__lp_;
static VALUE sy_Detect_Switch__lp_bind_lb_2_rb__6693;
static VALUE sy_Detect_Switch__lp_src_dot_ins_6a75;
static VALUE sy_Detect_Switch_bind_lb_3_rb__lt__bb51;
static VALUE sy_Detect_Switch_first_lp_sr_3298;
static VALUE sy_Detect_Switch_if_sp_bind_lb__f1e9;
static VALUE sy_Detect_Switch_s_eq_Switch_2d14;
static VALUE sy_Detect_Switch_s_eq_Switch_7fbd;
static VALUE sy_Detect_Switch_s_eq_Switch_ce93;
static VALUE sy_Detect_Switch_src_25d9;
static VALUE sy_Detect_Switch_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_src_dot_rule_d270;
VALUE Detect_Switch_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=c_Grammar; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
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
it=rb_funcall(self,sy_Detect_Switch__append_lp__b494,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Detect_Switch_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
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

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Switch_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Array; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,3/*ar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Detect_Switch_traverse_item(self ); FAILTEST(break1); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_Detect_Switch_bind_lb_3_rb__lt__bb51,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*ar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_AmethystAST; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_traverse(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_4;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(19);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(114) ... UC(114):;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"egch",4)) goto pass2; else ame_setpos(self,ame_getpos(self)+4); break;case UC(0) ... UC(113):;case UC(115) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(pass2); break;}  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
 it=c_Act; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass1;
it=rb_funcall(self,sy_Detect_Switch_first_lp_sr_3298,1,bind);  bind_aset(bind,6/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_s_eq_Switch_2d14,1,bind);  bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass5);unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(95) ... UC(95):;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr(self),"seq",3)) goto pass5; else ame_setpos(self,ame_getpos(self)+3); break;case UC(0) ... UC(94):;case UC(96) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(pass5); break;}  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto pass4;
 it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass4); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,12/*str*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto pass4;
it=rb_funcall(self,sy_Detect_Switch_first_lp_sr_3298,1,bind);  bind_aset(bind,6/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_s_eq_Switch_ce93,1,bind);  bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt1_3;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass7); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass8);unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(102) ... UC(102):;   it=AmethystCore_anything(self ); FAILTEST(pass8);if (strncmp(ame_curstr(self),"ails",4)) goto pass8; else ame_setpos(self,ame_getpos(self)+4); break;case UC(0) ... UC(101):;case UC(103) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(pass8); break;}  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto pass7;
it=rb_funcall(self,sy_Detect_Switch_src_25d9,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt1_4;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=rb_funcall(self,sy_Detect_Switch_first_lp_sr_3298,1,bind);  bind_aset(bind,6/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch__lp_,1,bind); FAILTEST(pass9);it=rb_funcall(self,sy_Detect_Switch_s_eq_Switch_7fbd,1,bind);  bind_aset(bind,18/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt1_5;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,8/*_result*/);
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
static VALUE c_AmethystAST;
static VALUE c_Apply;
static VALUE c_Array;
static VALUE c_Bind;
static VALUE c_CAct;
static VALUE c_Grammar;
static VALUE c_Or;
static VALUE c_Rule;
static VALUE c_Seq;
static VALUE sy_Detect_ClasSwitch_Apply_lb__dq_a_eeac;
static VALUE sy_Detect_ClasSwitch_Bind_lb_bin_aa12;
static VALUE sy_Detect_ClasSwitch_ClasLatt_1dca;
static VALUE sy_Detect_ClasSwitch_Or_lb__ti_bind_a0c4;
static VALUE sy_Detect_ClasSwitch_Or_lb__ti_bind_ffe5;
static VALUE sy_Detect_ClasSwitch_Placehol_6875;
static VALUE sy_Detect_ClasSwitch_Seq_lb__ti__lp__lb_b_70e1;
static VALUE sy_Detect_ClasSwitch__append_lp__6adb;
static VALUE sy_Detect_ClasSwitch__append_lp__7352;
static VALUE sy_Detect_ClasSwitch__append_lp__a474;
static VALUE sy_Detect_ClasSwitch__append_lp__b375;
static VALUE sy_Detect_ClasSwitch__append_lp__b494;
static VALUE sy_Detect_ClasSwitch__at_changed_5352;
static VALUE sy_Detect_ClasSwitch__at_changed_b885;
static VALUE sy_Detect_ClasSwitch__at_changed_c681;
static VALUE sy_Detect_ClasSwitch__at_name_eq_sr_362f;
static VALUE sy_Detect_ClasSwitch__do_rules_eq__le__ab16;
static VALUE sy_Detect_ClasSwitch__lp_;
static VALUE sy_Detect_ClasSwitch__lp_bind_lb_19_a8b7;
static VALUE sy_Detect_ClasSwitch__lp_bind_lb_1_rb__a6f6;
static VALUE sy_Detect_ClasSwitch__lp_bind_lb_2_rb__6693;
static VALUE sy_Detect_ClasSwitch__lp_child_lp_b_f23c;
static VALUE sy_Detect_ClasSwitch__lp_first_lp_b_1c32;
static VALUE sy_Detect_ClasSwitch__lp_src_dot_ins_6a75;
static VALUE sy_Detect_ClasSwitch_bind_lb_1_rb_;
static VALUE sy_Detect_ClasSwitch_bind_lb_1_rb__dot__cd74;
static VALUE sy_Detect_ClasSwitch_bind_lb_1_rb__eq__bfd4;
static VALUE sy_Detect_ClasSwitch_bind_lb_2_rb__eq__6851;
static VALUE sy_Detect_ClasSwitch_bind_lb_2_rb__eq__b94b;
static VALUE sy_Detect_ClasSwitch_bind_lb_2_rb__eq__dbd4;
static VALUE sy_Detect_ClasSwitch_bind_lb_3_rb__lt__bb51;
static VALUE sy_Detect_ClasSwitch_c_eq_classs_c612;
static VALUE sy_Detect_ClasSwitch_if_sp_bind_lb__f1e9;
static VALUE sy_Detect_ClasSwitch_predicat_7e3a;
static VALUE sy_Detect_ClasSwitch_src_25d9;
static VALUE sy_Detect_ClasSwitch_src_dot_name_80f3;
static VALUE sy_Detect_ClasSwitch_src_dot_rule_5acf;
static VALUE sy_Detect_ClasSwitch_src_dot_rule_d270;
VALUE Detect_ClasSwitch_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=c_Grammar; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
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
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp__b494,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_predicate(VALUE self ,VALUE a0,VALUE a1,VALUE a2){VALUE vals[3]; VALUE bind=bind_new2(27); bind_aset(bind,1/*clas*/,a0);bind_aset(bind,2/*i*/,a1);bind_aset(bind,0/*p*/,a2); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_Detect_ClasSwitch__lp_,1,bind); FAILTEST(alt1_2);it=rb_funcall(self,sy_Detect_ClasSwitch_Placehol_6875,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*p*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
  it=c_Seq; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,6/*e*/,it);
 it=bind_aget(bind,1/*clas*/); arg0=it;it=bind_aget(bind,2/*i*/); arg1=it;it=bind_aget(bind,6/*e*/); arg2=it; it=Detect_ClasSwitch_predicate(self ,arg0,arg1,arg2); FAILTEST(pass2); bind_aset(bind,7/*f*/,it);
it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp__b375,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,8/*autovar*/); bind_aset(bind,10/*rest*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_Seq_lb__ti__lp__lb_b_70e1,1,bind);  bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
  it=c_Or; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_3); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*e*/,it);
 it=bind_aget(bind,1/*clas*/); arg0=it;it=bind_aget(bind,2/*i*/); arg1=it;it=bind_aget(bind,6/*e*/); arg2=it; it=Detect_ClasSwitch_predicate(self ,arg0,arg1,arg2); FAILTEST(break2); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__append_lp__a474,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,14/*autovar*/); bind_aset(bind,16/*ary*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_Or_lb__ti_bind_a0c4,1,bind);  bind_aset(bind,17/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt2_3;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,12/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
  it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_4); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,18/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,19/*name*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__lp_bind_lb_19_a8b7,1,bind); FAILTEST(pass4); it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass4); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,20/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,21/*match*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto pass4;
it=rb_funcall(self,sy_Detect_ClasSwitch__lp_child_lp_b_f23c,1,bind); FAILTEST(pass4);it=rb_funcall(self,sy_Detect_ClasSwitch_Apply_lb__dq_a_eeac,1,bind);  bind_aset(bind,22/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt2_4;
it=bind_aget(bind,22/*autovar*/); bind_aset(bind,12/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_4: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
  it=c_Bind; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_5); bind_aset(bind,23/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_ClasSwitch_src_dot_name_80f3,1,bind);  bind_aset(bind,19/*name*/,it);
  it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,24/*exp*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_predicat_7e3a,1,bind);  bind_aset(bind,25/*expr*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_Bind_lb_bin_aa12,1,bind);  bind_aset(bind,26/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt2_5;
it=bind_aget(bind,26/*autovar*/); bind_aset(bind,12/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_5: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_6); bind_aset(bind,12/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_6:  ame_setpos(self,oldpos2); goto pass1;
 accept2:;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
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

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_ClasSwitch_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Array; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,3/*ar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Detect_ClasSwitch_traverse_item(self ); FAILTEST(break1); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_3_rb__lt__bb51,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*ar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_AmethystAST; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_ClasSwitch_traverse(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_4;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,1/*_result*/);
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
it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_1_rb__dot__cd74,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_2_rb__eq__b94b,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_2_rb__eq__6851,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_bind_lb_2_rb__eq__dbd4,1,bind); it=rb_funcall(self,sy_Detect_ClasSwitch_c_eq_classs_c612,1,bind);  bind_aset(bind,8/*autovar*/,it);
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
c_Act=rb_const_get(rb_cObject, rb_intern("Act"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Act);
c_Bind=rb_const_get(rb_cObject, rb_intern("Bind"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Bind);
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
c_Cut=rb_const_get(rb_cObject, rb_intern("Cut"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Cut);
c_Local=rb_const_get(rb_cObject, rb_intern("Local"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Local);
c_Many=rb_const_get(rb_cObject, rb_intern("Many"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Many);
c_Or=rb_const_get(rb_cObject, rb_intern("Or"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Or);
c_Result=rb_const_get(rb_cObject, rb_intern("Result"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Result);
c_Seq=rb_const_get(rb_cObject, rb_intern("Seq"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Seq);
c_Stop=rb_const_get(rb_cObject, rb_intern("Stop"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Stop);
c_Switch=rb_const_get(rb_cObject, rb_intern("Switch"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Switch);
sy_First_Dataflow__append_lp__26c5=rb_intern("First_Dataflow__append_lp__26c5");
sy_First_Dataflow__append_lp__81ec=rb_intern("First_Dataflow__append_lp__81ec");
sy_First_Dataflow__append_lp__89bf=rb_intern("First_Dataflow__append_lp__89bf");
sy_First_Dataflow__at_vis_eq_bin_af53=rb_intern("First_Dataflow__at_vis_eq_bin_af53");
sy_First_Dataflow__lp_=rb_intern("First_Dataflow__lp_");
sy_First_Dataflow_bind_lb_0_rb__dot__b660=rb_intern("First_Dataflow_bind_lb_0_rb__dot__b660");
sy_First_Dataflow_bind_lb_20_rb__9f79=rb_intern("First_Dataflow_bind_lb_20_rb__9f79");
sy_First_Dataflow_bind_lb_3_rb__dot__c064=rb_intern("First_Dataflow_bind_lb_3_rb__dot__c064");
sy_First_Dataflow_bind_lb_9_rb_=rb_intern("First_Dataflow_bind_lb_9_rb_");
sy_First_Dataflow_bind_lb_9_rb__dot__b02f=rb_intern("First_Dataflow_bind_lb_9_rb__dot__b02f");
sy_First_Dataflow_depends_lp__0807=rb_intern("First_Dataflow_depends_lp__0807");
sy_First_Dataflow_empty=rb_intern("First_Dataflow_empty");
sy_First_Dataflow_lattice_dot__2c4f=rb_intern("First_Dataflow_lattice_dot__2c4f");
sy_analyze=rb_intern("analyze");
rb_define_method(cls_First_Dataflow,"first",First_Dataflow_first,0);
rb_define_method(cls_First_Dataflow,"getvalue",First_Dataflow_getvalue,1);
rb_define_method(cls_First_Dataflow,"root",First_Dataflow_root,0);
rb_define_method(cls_First_Dataflow,"value",First_Dataflow_value,0);

 cls_Sizes_Dataflow=rb_define_class("Sizes_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
c_Act=rb_const_get(rb_cObject, rb_intern("Act"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Act);
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Bind=rb_const_get(rb_cObject, rb_intern("Bind"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Bind);
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
c_Cut=rb_const_get(rb_cObject, rb_intern("Cut"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Cut);
c_Local=rb_const_get(rb_cObject, rb_intern("Local"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Local);
c_Many=rb_const_get(rb_cObject, rb_intern("Many"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Many);
c_Or=rb_const_get(rb_cObject, rb_intern("Or"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Or);
c_Result=rb_const_get(rb_cObject, rb_intern("Result"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Result);
c_Seq=rb_const_get(rb_cObject, rb_intern("Seq"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Seq);
c_Stop=rb_const_get(rb_cObject, rb_intern("Stop"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Stop);
c_Switch=rb_const_get(rb_cObject, rb_intern("Switch"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Switch);
sy_Sizes_Dataflow_Compiler_825f=rb_intern("Sizes_Dataflow_Compiler_825f");
sy_Sizes_Dataflow__append_lp__26c5=rb_intern("Sizes_Dataflow__append_lp__26c5");
sy_Sizes_Dataflow__append_lp__81ec=rb_intern("Sizes_Dataflow__append_lp__81ec");
sy_Sizes_Dataflow__append_lp__89bf=rb_intern("Sizes_Dataflow__append_lp__89bf");
sy_Sizes_Dataflow__at_vis_eq_bin_af53=rb_intern("Sizes_Dataflow__at_vis_eq_bin_af53");
sy_Sizes_Dataflow__lp_=rb_intern("Sizes_Dataflow__lp_");
sy_Sizes_Dataflow__lp_Compile_2942=rb_intern("Sizes_Dataflow__lp_Compile_2942");
sy_Sizes_Dataflow_bind_lb_0_rb__dot__b660=rb_intern("Sizes_Dataflow_bind_lb_0_rb__dot__b660");
sy_Sizes_Dataflow_bind_lb_20_rb__9f79=rb_intern("Sizes_Dataflow_bind_lb_20_rb__9f79");
sy_Sizes_Dataflow_bind_lb_3_rb__dot__c064=rb_intern("Sizes_Dataflow_bind_lb_3_rb__dot__c064");
sy_Sizes_Dataflow_bind_lb_9_rb_=rb_intern("Sizes_Dataflow_bind_lb_9_rb_");
sy_Sizes_Dataflow_bind_lb_9_rb__dot__b02f=rb_intern("Sizes_Dataflow_bind_lb_9_rb__dot__b02f");
sy_Sizes_Dataflow_empty=rb_intern("Sizes_Dataflow_empty");
sy_Sizes_Dataflow_lattice_dot__2c4f=rb_intern("Sizes_Dataflow_lattice_dot__2c4f");
sy_Sizes_Dataflow_lattice_dot__e0e5=rb_intern("Sizes_Dataflow_lattice_dot__e0e5");
sy_Sizes_Dataflow_lattice_lb__655f=rb_intern("Sizes_Dataflow_lattice_lb__655f");
sy_Sizes_Dataflow_lattice_lb__fdee=rb_intern("Sizes_Dataflow_lattice_lb__fdee");
rb_define_method(cls_Sizes_Dataflow,"first",Sizes_Dataflow_first,0);
rb_define_method(cls_Sizes_Dataflow,"first_Sizes_Dataflow",Sizes_Dataflow_first_Sizes_Dataflow,0);
rb_define_method(cls_Sizes_Dataflow,"getvalue",Sizes_Dataflow_getvalue,1);

 cls_Switch_Dataflow=rb_define_class("Switch_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
c_Act=rb_const_get(rb_cObject, rb_intern("Act"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Act);
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Bind=rb_const_get(rb_cObject, rb_intern("Bind"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Bind);
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
c_Cut=rb_const_get(rb_cObject, rb_intern("Cut"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Cut);
c_Local=rb_const_get(rb_cObject, rb_intern("Local"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Local);
c_Many=rb_const_get(rb_cObject, rb_intern("Many"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Many);
c_Or=rb_const_get(rb_cObject, rb_intern("Or"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Or);
c_Result=rb_const_get(rb_cObject, rb_intern("Result"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Result);
c_Seq=rb_const_get(rb_cObject, rb_intern("Seq"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Seq);
c_Stop=rb_const_get(rb_cObject, rb_intern("Stop"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Stop);
c_Switch=rb_const_get(rb_cObject, rb_intern("Switch"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Switch);
sy_Switch_Dataflow_Compiler_af65=rb_intern("Switch_Dataflow_Compiler_af65");
sy_Switch_Dataflow__append_lp__26c5=rb_intern("Switch_Dataflow__append_lp__26c5");
sy_Switch_Dataflow__append_lp__81ec=rb_intern("Switch_Dataflow__append_lp__81ec");
sy_Switch_Dataflow__append_lp__89bf=rb_intern("Switch_Dataflow__append_lp__89bf");
sy_Switch_Dataflow__at_vis_eq_bin_af53=rb_intern("Switch_Dataflow__at_vis_eq_bin_af53");
sy_Switch_Dataflow__lp_=rb_intern("Switch_Dataflow__lp_");
sy_Switch_Dataflow__lp_Compile_d907=rb_intern("Switch_Dataflow__lp_Compile_d907");
sy_Switch_Dataflow_bind_lb_0_rb__dot__b660=rb_intern("Switch_Dataflow_bind_lb_0_rb__dot__b660");
sy_Switch_Dataflow_bind_lb_20_rb__9f79=rb_intern("Switch_Dataflow_bind_lb_20_rb__9f79");
sy_Switch_Dataflow_bind_lb_3_rb__dot__c064=rb_intern("Switch_Dataflow_bind_lb_3_rb__dot__c064");
sy_Switch_Dataflow_bind_lb_9_rb_=rb_intern("Switch_Dataflow_bind_lb_9_rb_");
sy_Switch_Dataflow_bind_lb_9_rb__dot__b02f=rb_intern("Switch_Dataflow_bind_lb_9_rb__dot__b02f");
sy_Switch_Dataflow_empty=rb_intern("Switch_Dataflow_empty");
sy_Switch_Dataflow_firstcha_ec42=rb_intern("Switch_Dataflow_firstcha_ec42");
sy_Switch_Dataflow_lattice_dot__2c4f=rb_intern("Switch_Dataflow_lattice_dot__2c4f");
sy_Switch_Dataflow_lattice_dot__5a9e=rb_intern("Switch_Dataflow_lattice_dot__5a9e");
sy_Switch_Dataflow_lattice_dot__e0e5=rb_intern("Switch_Dataflow_lattice_dot__e0e5");
sy_Switch_Dataflow_regchar_lp__dfee=rb_intern("Switch_Dataflow_regchar_lp__dfee");
rb_define_method(cls_Switch_Dataflow,"first",Switch_Dataflow_first,0);
rb_define_method(cls_Switch_Dataflow,"first_Switch_Dataflow",Switch_Dataflow_first_Switch_Dataflow,0);
rb_define_method(cls_Switch_Dataflow,"getvalue",Switch_Dataflow_getvalue,1);

 cls_ClasSwitch_Dataflow=rb_define_class("ClasSwitch_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
c_Act=rb_const_get(rb_cObject, rb_intern("Act"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Act);
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Bind=rb_const_get(rb_cObject, rb_intern("Bind"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Bind);
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
c_Cut=rb_const_get(rb_cObject, rb_intern("Cut"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Cut);
c_Local=rb_const_get(rb_cObject, rb_intern("Local"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Local);
c_Many=rb_const_get(rb_cObject, rb_intern("Many"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Many);
c_Or=rb_const_get(rb_cObject, rb_intern("Or"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Or);
c_Result=rb_const_get(rb_cObject, rb_intern("Result"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Result);
c_Seq=rb_const_get(rb_cObject, rb_intern("Seq"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Seq);
c_Stop=rb_const_get(rb_cObject, rb_intern("Stop"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Stop);
c_Switch=rb_const_get(rb_cObject, rb_intern("Switch"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Switch);
sy_ClasSwitch_Dataflow_Compiler_6acb=rb_intern("ClasSwitch_Dataflow_Compiler_6acb");
sy_ClasSwitch_Dataflow__append_lp__26c5=rb_intern("ClasSwitch_Dataflow__append_lp__26c5");
sy_ClasSwitch_Dataflow__append_lp__81ec=rb_intern("ClasSwitch_Dataflow__append_lp__81ec");
sy_ClasSwitch_Dataflow__append_lp__89bf=rb_intern("ClasSwitch_Dataflow__append_lp__89bf");
sy_ClasSwitch_Dataflow__at_vis_eq_bin_af53=rb_intern("ClasSwitch_Dataflow__at_vis_eq_bin_af53");
sy_ClasSwitch_Dataflow__lp_=rb_intern("ClasSwitch_Dataflow__lp_");
sy_ClasSwitch_Dataflow__lp_Compile_bcde=rb_intern("ClasSwitch_Dataflow__lp_Compile_bcde");
sy_ClasSwitch_Dataflow_bind_lb_0_rb__dot__b660=rb_intern("ClasSwitch_Dataflow_bind_lb_0_rb__dot__b660");
sy_ClasSwitch_Dataflow_bind_lb_20_rb__9f79=rb_intern("ClasSwitch_Dataflow_bind_lb_20_rb__9f79");
sy_ClasSwitch_Dataflow_bind_lb_3_rb__dot__c064=rb_intern("ClasSwitch_Dataflow_bind_lb_3_rb__dot__c064");
sy_ClasSwitch_Dataflow_bind_lb_9_rb_=rb_intern("ClasSwitch_Dataflow_bind_lb_9_rb_");
sy_ClasSwitch_Dataflow_bind_lb_9_rb__dot__b02f=rb_intern("ClasSwitch_Dataflow_bind_lb_9_rb__dot__b02f");
sy_ClasSwitch_Dataflow_empty=rb_intern("ClasSwitch_Dataflow_empty");
sy_ClasSwitch_Dataflow_lattice_dot__2c4f=rb_intern("ClasSwitch_Dataflow_lattice_dot__2c4f");
sy_ClasSwitch_Dataflow_lattice_lb__6173=rb_intern("ClasSwitch_Dataflow_lattice_lb__6173");
rb_define_method(cls_ClasSwitch_Dataflow,"first",ClasSwitch_Dataflow_first,0);
rb_define_method(cls_ClasSwitch_Dataflow,"first_ClasSwitch_Dataflow",ClasSwitch_Dataflow_first_ClasSwitch_Dataflow,0);
rb_define_method(cls_ClasSwitch_Dataflow,"getvalue",ClasSwitch_Dataflow_getvalue,1);

 cls_Detect_First=rb_define_class("Detect_First",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_Grammar=rb_const_get(rb_cObject, rb_intern("Grammar"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Grammar);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
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
c_Act=rb_const_get(rb_cObject, rb_intern("Act"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Act);
c_AmethystAST=rb_const_get(rb_cObject, rb_intern("AmethystAST"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_AmethystAST);
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Array=rb_const_get(rb_cObject, rb_intern("Array"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Array);
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
c_Grammar=rb_const_get(rb_cObject, rb_intern("Grammar"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Grammar);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
sy_Detect_Switch__append_lp__7352=rb_intern("Detect_Switch__append_lp__7352");
sy_Detect_Switch__append_lp__b494=rb_intern("Detect_Switch__append_lp__b494");
sy_Detect_Switch__at_changed_5352=rb_intern("Detect_Switch__at_changed_5352");
sy_Detect_Switch__at_changed_b885=rb_intern("Detect_Switch__at_changed_b885");
sy_Detect_Switch__at_changed_c681=rb_intern("Detect_Switch__at_changed_c681");
sy_Detect_Switch__at_name_eq_sr_362f=rb_intern("Detect_Switch__at_name_eq_sr_362f");
sy_Detect_Switch__do_rules_eq__le__ab16=rb_intern("Detect_Switch__do_rules_eq__le__ab16");
sy_Detect_Switch__lp_=rb_intern("Detect_Switch__lp_");
sy_Detect_Switch__lp_bind_lb_2_rb__6693=rb_intern("Detect_Switch__lp_bind_lb_2_rb__6693");
sy_Detect_Switch__lp_src_dot_ins_6a75=rb_intern("Detect_Switch__lp_src_dot_ins_6a75");
sy_Detect_Switch_bind_lb_3_rb__lt__bb51=rb_intern("Detect_Switch_bind_lb_3_rb__lt__bb51");
sy_Detect_Switch_first_lp_sr_3298=rb_intern("Detect_Switch_first_lp_sr_3298");
sy_Detect_Switch_if_sp_bind_lb__f1e9=rb_intern("Detect_Switch_if_sp_bind_lb__f1e9");
sy_Detect_Switch_s_eq_Switch_2d14=rb_intern("Detect_Switch_s_eq_Switch_2d14");
sy_Detect_Switch_s_eq_Switch_7fbd=rb_intern("Detect_Switch_s_eq_Switch_7fbd");
sy_Detect_Switch_s_eq_Switch_ce93=rb_intern("Detect_Switch_s_eq_Switch_ce93");
sy_Detect_Switch_src_25d9=rb_intern("Detect_Switch_src_25d9");
sy_Detect_Switch_src_dot_rule_5acf=rb_intern("Detect_Switch_src_dot_rule_5acf");
sy_Detect_Switch_src_dot_rule_d270=rb_intern("Detect_Switch_src_dot_rule_d270");
rb_define_method(cls_Detect_Switch,"itrans",Detect_Switch_itrans,0);
rb_define_method(cls_Detect_Switch,"root",Detect_Switch_root,0);
rb_define_method(cls_Detect_Switch,"traverse",Detect_Switch_traverse,0);
rb_define_method(cls_Detect_Switch,"traverse_item",Detect_Switch_traverse_item,0);
rb_define_method(cls_Detect_Switch,"visit",Detect_Switch_visit,0);

 cls_Detect_ClasSwitch=rb_define_class("Detect_ClasSwitch",rb_const_get(rb_cObject,rb_intern("Detect_First"))); 
failobj=rb_eval_string("FAIL");
c_AmethystAST=rb_const_get(rb_cObject, rb_intern("AmethystAST"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_AmethystAST);
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Array=rb_const_get(rb_cObject, rb_intern("Array"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Array);
c_Bind=rb_const_get(rb_cObject, rb_intern("Bind"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Bind);
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
c_Grammar=rb_const_get(rb_cObject, rb_intern("Grammar"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Grammar);
c_Or=rb_const_get(rb_cObject, rb_intern("Or"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Or);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
c_Seq=rb_const_get(rb_cObject, rb_intern("Seq"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Seq);
sy_Detect_ClasSwitch_Apply_lb__dq_a_eeac=rb_intern("Detect_ClasSwitch_Apply_lb__dq_a_eeac");
sy_Detect_ClasSwitch_Bind_lb_bin_aa12=rb_intern("Detect_ClasSwitch_Bind_lb_bin_aa12");
sy_Detect_ClasSwitch_ClasLatt_1dca=rb_intern("Detect_ClasSwitch_ClasLatt_1dca");
sy_Detect_ClasSwitch_Or_lb__ti_bind_a0c4=rb_intern("Detect_ClasSwitch_Or_lb__ti_bind_a0c4");
sy_Detect_ClasSwitch_Or_lb__ti_bind_ffe5=rb_intern("Detect_ClasSwitch_Or_lb__ti_bind_ffe5");
sy_Detect_ClasSwitch_Placehol_6875=rb_intern("Detect_ClasSwitch_Placehol_6875");
sy_Detect_ClasSwitch_Seq_lb__ti__lp__lb_b_70e1=rb_intern("Detect_ClasSwitch_Seq_lb__ti__lp__lb_b_70e1");
sy_Detect_ClasSwitch__append_lp__6adb=rb_intern("Detect_ClasSwitch__append_lp__6adb");
sy_Detect_ClasSwitch__append_lp__7352=rb_intern("Detect_ClasSwitch__append_lp__7352");
sy_Detect_ClasSwitch__append_lp__a474=rb_intern("Detect_ClasSwitch__append_lp__a474");
sy_Detect_ClasSwitch__append_lp__b375=rb_intern("Detect_ClasSwitch__append_lp__b375");
sy_Detect_ClasSwitch__append_lp__b494=rb_intern("Detect_ClasSwitch__append_lp__b494");
sy_Detect_ClasSwitch__at_changed_5352=rb_intern("Detect_ClasSwitch__at_changed_5352");
sy_Detect_ClasSwitch__at_changed_b885=rb_intern("Detect_ClasSwitch__at_changed_b885");
sy_Detect_ClasSwitch__at_changed_c681=rb_intern("Detect_ClasSwitch__at_changed_c681");
sy_Detect_ClasSwitch__at_name_eq_sr_362f=rb_intern("Detect_ClasSwitch__at_name_eq_sr_362f");
sy_Detect_ClasSwitch__do_rules_eq__le__ab16=rb_intern("Detect_ClasSwitch__do_rules_eq__le__ab16");
sy_Detect_ClasSwitch__lp_=rb_intern("Detect_ClasSwitch__lp_");
sy_Detect_ClasSwitch__lp_bind_lb_19_a8b7=rb_intern("Detect_ClasSwitch__lp_bind_lb_19_a8b7");
sy_Detect_ClasSwitch__lp_bind_lb_1_rb__a6f6=rb_intern("Detect_ClasSwitch__lp_bind_lb_1_rb__a6f6");
sy_Detect_ClasSwitch__lp_bind_lb_2_rb__6693=rb_intern("Detect_ClasSwitch__lp_bind_lb_2_rb__6693");
sy_Detect_ClasSwitch__lp_child_lp_b_f23c=rb_intern("Detect_ClasSwitch__lp_child_lp_b_f23c");
sy_Detect_ClasSwitch__lp_first_lp_b_1c32=rb_intern("Detect_ClasSwitch__lp_first_lp_b_1c32");
sy_Detect_ClasSwitch__lp_src_dot_ins_6a75=rb_intern("Detect_ClasSwitch__lp_src_dot_ins_6a75");
sy_Detect_ClasSwitch_bind_lb_1_rb_=rb_intern("Detect_ClasSwitch_bind_lb_1_rb_");
sy_Detect_ClasSwitch_bind_lb_1_rb__dot__cd74=rb_intern("Detect_ClasSwitch_bind_lb_1_rb__dot__cd74");
sy_Detect_ClasSwitch_bind_lb_1_rb__eq__bfd4=rb_intern("Detect_ClasSwitch_bind_lb_1_rb__eq__bfd4");
sy_Detect_ClasSwitch_bind_lb_2_rb__eq__6851=rb_intern("Detect_ClasSwitch_bind_lb_2_rb__eq__6851");
sy_Detect_ClasSwitch_bind_lb_2_rb__eq__b94b=rb_intern("Detect_ClasSwitch_bind_lb_2_rb__eq__b94b");
sy_Detect_ClasSwitch_bind_lb_2_rb__eq__dbd4=rb_intern("Detect_ClasSwitch_bind_lb_2_rb__eq__dbd4");
sy_Detect_ClasSwitch_bind_lb_3_rb__lt__bb51=rb_intern("Detect_ClasSwitch_bind_lb_3_rb__lt__bb51");
sy_Detect_ClasSwitch_c_eq_classs_c612=rb_intern("Detect_ClasSwitch_c_eq_classs_c612");
sy_Detect_ClasSwitch_if_sp_bind_lb__f1e9=rb_intern("Detect_ClasSwitch_if_sp_bind_lb__f1e9");
sy_Detect_ClasSwitch_predicat_7e3a=rb_intern("Detect_ClasSwitch_predicat_7e3a");
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
 rb_eval_string("testversiondetect_switch('95e84881fe7c5bc231672b0bd4536a1e')");}
