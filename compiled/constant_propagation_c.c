#include "cthyst.h"
VALUE cls_Constant_Propagator;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Constant_Propagator_root(VALUE self );
VALUE Constant_Propagator_step(VALUE self ,VALUE a0);
VALUE switchhash_Constant_Propagator_1;
VALUE switchhash_Constant_Propagator_2;
VALUE switchhash_Constant_Propagator_3;
VALUE switchhash_Constant_Propagator_4;
VALUE switchhash_Constant_Propagator_5;
VALUE switchhash_Constant_Propagator_6;
static VALUE sy_Constant_Propagator_Constant_1f68;
static VALUE sy_Constant_Propagator_Constant_8840;
static VALUE sy_Constant_Propagator_Constant_bf42;
static VALUE sy_Constant_Propagator__at_depend_eq__f9fc;
static VALUE sy_Constant_Propagator_a_eq_Consta_dc3b;
static VALUE sy_Constant_Propagator_src_25d9;
static VALUE sy_valof;
VALUE Constant_Propagator_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*it*/,it);
it=rb_funcall(self,sy_Constant_Propagator__at_depend_eq__f9fc,1,bind);  bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE Constant_Propagator_step(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(18); bind_aset(bind,0/*el*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*el*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
 int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Propagator_1,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Constant_Propagator_a_eq_Consta_dc3b,1,bind);  bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_2;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
 break;
case 1: goto alt1_2; break;
} 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Propagator_2,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*expr*/,it);
 it=bind_aget(bind,6/*expr*/); arg0=it; it=rb_funcall(self,sy_valof,1,arg0); FAILTEST(pass3); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_3;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,4/*autovar*/,it);
 break;
case 1: goto alt1_3; break;
} 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Propagator_3,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass4;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Propagator_4,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4);  it=rb_funcall(self,sy_Constant_Propagator_src_25d9,1,bind);  arg0=it; it=rb_funcall(self,sy_valof,1,arg0); FAILTEST(pass5); bind_aset(bind,10/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt2_2;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 break;
case 1: goto alt2_2; break;
} 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass4;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Propagator_5,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_Constant_Propagator_Constant_8840,1,bind);  bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt2_3;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 break;
case 1: goto alt2_3; break;
} 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto pass4;
 accept2:;
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt1_4;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,4/*autovar*/,it);
 break;
case 1: goto alt1_4; break;
} 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Propagator_6,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_5); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=rb_funcall(self,sy_Constant_Propagator_src_25d9,1,bind);  bind_aset(bind,15/*val*/,it);
it=rb_funcall(self,sy_Constant_Propagator_Constant_1f68,1,bind);  bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt1_5;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,4/*autovar*/,it);
 break;
case 1: goto alt1_5; break;
} 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_6);it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind);  bind_aset(bind,4/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_6:  ame_setpos(self,oldpos1); goto pass1;
 accept1:;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,17/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Constant_Traverser;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Constant_Traverser_root(VALUE self );
VALUE Constant_Traverser_traverse(VALUE self );
VALUE Constant_Traverser_traverse_item(VALUE self );
VALUE Constant_Traverser_visit(VALUE self );
VALUE switchhash_Constant_Traverser_1;
VALUE switchhash_Constant_Traverser_2;
VALUE switchhash_Constant_Traverser_3;
VALUE switchhash_Constant_Traverser_4;
VALUE switchhash_Constant_Traverser_5;
VALUE switchhash_Constant_Traverser_6;
static VALUE sy_Constant_Traverser_Bind_lb_src_66c4;
static VALUE sy_Constant_Traverser__at_changed_5352;
static VALUE sy_Constant_Traverser__at_changed_b885;
static VALUE sy_Constant_Traverser__at_changed_c681;
static VALUE sy_Constant_Traverser__at_consts_eq__b621;
static VALUE sy_Constant_Traverser__lp__at_consts_080b;
static VALUE sy_Constant_Traverser__lp_bind_lb_2_rb__6693;
static VALUE sy_Constant_Traverser__lp_src_dot_ins_6a75;
static VALUE sy_Constant_Traverser_bind_lb_3_rb__lt__bb51;
static VALUE sy_Constant_Traverser_if_sp_bind_lb__f1e9;
static VALUE sy_Constant_Traverser_src_25d9;
static VALUE sy_Constant_Traverser_src_dot_cfg_eq__15aa;
VALUE Constant_Traverser_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Constant_Traverser__at_consts_eq__b621,1,bind); it=rb_funcall(self,sy_Constant_Traverser_src_dot_cfg_eq__15aa,1,bind);   it=Constant_Traverser_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Constant_Traverser_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Constant_Traverser__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Constant_Traverser_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Constant_Traverser__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Constant_Traverser__at_changed_b885,1,bind);   it=Constant_Traverser_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Constant_Traverser__lp_bind_lb_2_rb__6693,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
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
it=rb_funcall(self,sy_Constant_Traverser_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Constant_Traverser_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Constant_Traverser_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Constant_Traverser__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_5,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,3/*ar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Constant_Traverser_traverse_item(self ); FAILTEST(break1); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_Constant_Traverser_bind_lb_3_rb__lt__bb51,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*ar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,1/*_result*/,it);
 break;
case 1: goto alt1_3; break;
} 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_6,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Constant_Traverser_traverse(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_4;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,1/*_result*/,it);
 break;
case 1: goto alt1_4; break;
} 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE Constant_Traverser_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_1,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Constant_Traverser_traverse_item(self ); FAILTEST(pass1); bind_aset(bind,1/*expr*/,it);
it=rb_funcall(self,sy_Constant_Traverser_Bind_lb_src_66c4,1,bind);  bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 break;
case 1: goto alt1_2; break;
} 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_2,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Constant_Traverser_src_25d9,1,bind);  bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_3;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,3/*_result*/,it);
 break;
case 1: goto alt1_3; break;
} 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_3,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=rb_funcall(self,sy_Constant_Traverser_src_25d9,1,bind);  bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_4;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,3/*_result*/,it);
 break;
case 1: goto alt1_4; break;
} 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_4,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_5); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=rb_funcall(self,sy_Constant_Traverser__lp__at_consts_080b,1,bind);  bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt1_5;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,3/*_result*/,it);
 break;
case 1: goto alt1_5; break;
} 
ame_setcut(self,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

return it;
fail: return failobj; }
void Init_constant_propagation_c(){ 
 cls_Constant_Propagator=rb_define_class("Constant_Propagator",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
switchhash_Constant_Propagator_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Propagator_1);;
switchhash_Constant_Propagator_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Propagator_2);;
switchhash_Constant_Propagator_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Propagator_3);;
switchhash_Constant_Propagator_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Propagator_4);;
switchhash_Constant_Propagator_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Lambda\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Propagator_5);;
switchhash_Constant_Propagator_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Propagator_6);;
sy_Constant_Propagator_Constant_1f68=rb_intern("Constant_Propagator_Constant_1f68");
sy_Constant_Propagator_Constant_8840=rb_intern("Constant_Propagator_Constant_8840");
sy_Constant_Propagator_Constant_bf42=rb_intern("Constant_Propagator_Constant_bf42");
sy_Constant_Propagator__at_depend_eq__f9fc=rb_intern("Constant_Propagator__at_depend_eq__f9fc");
sy_Constant_Propagator_a_eq_Consta_dc3b=rb_intern("Constant_Propagator_a_eq_Consta_dc3b");
sy_Constant_Propagator_src_25d9=rb_intern("Constant_Propagator_src_25d9");
sy_valof=rb_intern("valof");
rb_define_method(cls_Constant_Propagator,"root",Constant_Propagator_root,0);
rb_define_method(cls_Constant_Propagator,"step",Constant_Propagator_step,1);

 cls_Constant_Traverser=rb_define_class("Constant_Traverser",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
switchhash_Constant_Traverser_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Traverser_1);;
switchhash_Constant_Traverser_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Traverser_2);;
switchhash_Constant_Traverser_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Result\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Traverser_3);;
switchhash_Constant_Traverser_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Traverser_4);;
switchhash_Constant_Traverser_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Array\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Traverser_5);;
switchhash_Constant_Traverser_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Traverser_6);;
sy_Constant_Traverser_Bind_lb_src_66c4=rb_intern("Constant_Traverser_Bind_lb_src_66c4");
sy_Constant_Traverser__at_changed_5352=rb_intern("Constant_Traverser__at_changed_5352");
sy_Constant_Traverser__at_changed_b885=rb_intern("Constant_Traverser__at_changed_b885");
sy_Constant_Traverser__at_changed_c681=rb_intern("Constant_Traverser__at_changed_c681");
sy_Constant_Traverser__at_consts_eq__b621=rb_intern("Constant_Traverser__at_consts_eq__b621");
sy_Constant_Traverser__lp__at_consts_080b=rb_intern("Constant_Traverser__lp__at_consts_080b");
sy_Constant_Traverser__lp_bind_lb_2_rb__6693=rb_intern("Constant_Traverser__lp_bind_lb_2_rb__6693");
sy_Constant_Traverser__lp_src_dot_ins_6a75=rb_intern("Constant_Traverser__lp_src_dot_ins_6a75");
sy_Constant_Traverser_bind_lb_3_rb__lt__bb51=rb_intern("Constant_Traverser_bind_lb_3_rb__lt__bb51");
sy_Constant_Traverser_if_sp_bind_lb__f1e9=rb_intern("Constant_Traverser_if_sp_bind_lb__f1e9");
sy_Constant_Traverser_src_25d9=rb_intern("Constant_Traverser_src_25d9");
sy_Constant_Traverser_src_dot_cfg_eq__15aa=rb_intern("Constant_Traverser_src_dot_cfg_eq__15aa");
rb_define_method(cls_Constant_Traverser,"root",Constant_Traverser_root,0);
rb_define_method(cls_Constant_Traverser,"traverse",Constant_Traverser_traverse,0);
rb_define_method(cls_Constant_Traverser,"traverse_item",Constant_Traverser_traverse_item,0);
rb_define_method(cls_Constant_Traverser,"visit",Constant_Traverser_visit,0);
 rb_eval_string("testversionconstant_propagation('4cd5bac71e085ee7df09e58869fae93d')");}
