#include "cthyst.h"
VALUE cls_AmethystCTranslator;
VALUE AmethystCTranslator_add_c_global(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystCTranslator_addcallback(VALUE self ,VALUE a0);
VALUE AmethystCTranslator_addlambda(VALUE self );
VALUE AmethystCTranslator_failwrap(VALUE self ,VALUE a0);
VALUE AmethystCTranslator_itrans(VALUE self );
VALUE AmethystCTranslator_rbcode(VALUE self );
VALUE AmethystCTranslator_rbtrans(VALUE self );
VALUE AmethystCTranslator_rbtrans2(VALUE self );
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystCTranslator_trans(VALUE self );
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE switchhash_AmethystCTranslator_1;
VALUE switchhash_AmethystCTranslator_2;
VALUE switchhash_AmethystCTranslator_3;
static VALUE i_0;
static VALUE s__d41d;
static VALUE s__find_a2c7;
static VALUE s_alt_3482;
static VALUE s_ame_setc_af44;
static VALUE s_ame_sets_fef4;
static VALUE s_fail_e111;
static VALUE s_oldpass_6559;
static VALUE s_pass_1a1d;
static VALUE s_success_260c;
static VALUE s_switch_lp__lp__8d89;
static VALUE sy_AmethystCTranslator__append_lp__38b7;
static VALUE sy_AmethystCTranslator__append_lp__403b;
static VALUE sy_AmethystCTranslator__append_lp__5e3c;
static VALUE sy_AmethystCTranslator__append_lp__81ec;
static VALUE sy_AmethystCTranslator__append_lp__9a6f;
static VALUE sy_AmethystCTranslator__append_lp__b24c;
static VALUE sy_AmethystCTranslator__append_lp__cbd1;
static VALUE sy_AmethystCTranslator__append_lp__d113;
static VALUE sy_AmethystCTranslator__at_callbac_2d11;
static VALUE sy_AmethystCTranslator__at_callbac_e37c;
static VALUE sy_AmethystCTranslator__at_defmeth_456b;
static VALUE sy_AmethystCTranslator__at_defs_eq__lb__rb__188f;
static VALUE sy_AmethystCTranslator__at_defs_lt__lt_s_1286;
static VALUE sy_AmethystCTranslator__at_faillab_1610;
static VALUE sy_AmethystCTranslator__at_faillab_1e7d;
static VALUE sy_AmethystCTranslator__at_faillab_37e7;
static VALUE sy_AmethystCTranslator__at_faillab_602d;
static VALUE sy_AmethystCTranslator__at_faillab_74ee;
static VALUE sy_AmethystCTranslator__at_faillab_8142;
static VALUE sy_AmethystCTranslator__at_faillab_e643;
static VALUE sy_AmethystCTranslator__at_grammar_1337;
static VALUE sy_AmethystCTranslator__at_header_eq__7aa9;
static VALUE sy_AmethystCTranslator__at_header_lt__09ca;
static VALUE sy_AmethystCTranslator__at_header_lt__26bb;
static VALUE sy_AmethystCTranslator__at_header_lt__fff4;
static VALUE sy_AmethystCTranslator__at_init_eq__lb__rb__47da;
static VALUE sy_AmethystCTranslator__at_init_lt__lt_s_a51d;
static VALUE sy_AmethystCTranslator__at_init_sp__sp__lt__1ca0;
static VALUE sy_AmethystCTranslator__at_lambdas_ecda;
static VALUE sy_AmethystCTranslator__at_rulenam_713e;
static VALUE sy_AmethystCTranslator__dq_Amethys_8b00;
static VALUE sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf;
static VALUE sy_AmethystCTranslator__dq__at__sh__le_bind_f173;
static VALUE sy_AmethystCTranslator__dq__sh__le__at_gram_5de9;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__055d;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__4b45;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__81e2;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__9560;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__99c9;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__9b54;
static VALUE sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf;
static VALUE sy_AmethystCTranslator__dq__sp__sh__le_bind_c2ea;
static VALUE sy_AmethystCTranslator__dq_class_sp__sh__0b62;
static VALUE sy_AmethystCTranslator__dq_cstruct_9fd5;
static VALUE sy_AmethystCTranslator__dq_def_sp__sh__le_b_5b6b;
static VALUE sy_AmethystCTranslator__dq_goto_sp__sh__le__f772;
static VALUE sy_AmethystCTranslator__dq_if_sp__lp_str_086f;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_b_6371;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_b_ef9c;
static VALUE sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f;
static VALUE sy_AmethystCTranslator__dq_it_eq__sh__le_rb_79a3;
static VALUE sy_AmethystCTranslator__dq_switch_lp__b8f1;
static VALUE sy_AmethystCTranslator__dq_switchh_f207;
static VALUE sy_AmethystCTranslator__lb_bind_lb_1_rb__8404;
static VALUE sy_AmethystCTranslator__lp_bind_lb_3_rb__e49d;
static VALUE sy_AmethystCTranslator__lp_bind_lb_6_rb__79e0;
static VALUE sy_AmethystCTranslator_addcallb_68bb;
static VALUE sy_AmethystCTranslator_addcallb_dcd7;
static VALUE sy_AmethystCTranslator_ar_eq__ti_src_dot__efea;
static VALUE sy_AmethystCTranslator_bind_lb_0_rb__lt__cac1;
static VALUE sy_AmethystCTranslator_bind_lb_0_rb__pl__40f3;
static VALUE sy_AmethystCTranslator_bind_lb_0_rb__pl__c1a5;
static VALUE sy_AmethystCTranslator_bind_lb_18_rb__0027;
static VALUE sy_AmethystCTranslator_bind_lb_18_rb__3741;
static VALUE sy_AmethystCTranslator_bind_lb_18_rb__6a92;
static VALUE sy_AmethystCTranslator_bind_lb_18_rb__7b0e;
static VALUE sy_AmethystCTranslator_bind_lb_18_rb__7e00;
static VALUE sy_AmethystCTranslator_bind_lb_18_rb__88ca;
static VALUE sy_AmethystCTranslator_bind_lb_18_rb__c661;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__lt__2f50;
static VALUE sy_AmethystCTranslator_bind_lb_22_rb__8e1b;
static VALUE sy_AmethystCTranslator_bind_lb_2_rb__ti__e7b8;
static VALUE sy_AmethystCTranslator_bind_lb_3_rb_;
static VALUE sy_AmethystCTranslator_bind_lb_43_rb__cb8e;
static VALUE sy_AmethystCTranslator_bind_lb_63_rb__908e;
static VALUE sy_AmethystCTranslator_bind_lb_90_rb__3516;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_00cd;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_394b;
static VALUE sy_AmethystCTranslator_label_lp__dq_a_f49c;
static VALUE sy_AmethystCTranslator_label_lp__dq_b_6df7;
static VALUE sy_AmethystCTranslator_label_lp__dq_o_c187;
static VALUE sy_AmethystCTranslator_label_lp__dq_r_95b2;
static VALUE sy_AmethystCTranslator_mktable_lp__ea79;
static VALUE sy_AmethystCTranslator_rbbget_lp_s_68a8;
static VALUE sy_AmethystCTranslator_src_dot_body_519e;
static VALUE sy_AmethystCTranslator_src_dot_name_80f3;
static VALUE sy_AmethystCTranslator_src_dot_rule_5acf;
static VALUE sy_AmethystCTranslator_src_dot_to_5e99;
static VALUE sy_apply;
static VALUE sy_label;
VALUE AmethystCTranslator_add_c_global(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(3); bind_aset(bind,0/*name*/,a0);bind_aset(bind,1/*expr*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystCTranslator__at_header_lt__09ca,1,bind);  bind_aset(bind,2/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_addcallback(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,0/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_addcallb_dcd7,1,bind);  bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_addlambda(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le__at_gram_5de9,1,bind);  bind_aset(bind,0/*lambd*/,it);
it=rb_obj_clone(s_fail_e111); bind_aset(bind,1/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,2/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(fail); bind_aset(bind,3/*body*/,it);
 bind_aset(bind,4/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_74ee,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_394b,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_Amethys_8b00,1,bind);  bind_aset(bind,5/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_failwrap(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__055d,1,bind);  bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*ruby*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*c*/,it);
it=rb_ary_new3(0); bind_aset(bind,2/*init*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,3/*c*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_3_rb__e49d,1,bind); FAILTEST(alt1_2);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_3_rb_,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__81ec,1,bind);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCTranslator_trans(self ); FAILTEST(alt1_3); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__lt__2f50,1,bind);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_AmethystCTranslator__lb_bind_lb_1_rb__8404,1,bind);  bind_aset(bind,7/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbcode(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystCTranslator__dq_class_sp__sh__0b62,1,bind);  bind_aset(bind,0/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_0_rb__lt__cac1,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_callbac_2d11,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,5/*k*/,it);
  it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*v*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break1;
it=rb_funcall(self,sy_AmethystCTranslator__dq_def_sp__sh__le_b_5b6b,1,bind);  bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__5e3c,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,8/*x*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_0_rb__pl__c1a5,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_0_rb__pl__40f3,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbtrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_1,rb_obj_class(ame_curobj(self))))){case 0/*Args*/:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;
case 2/*Global*/:; int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*name*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_2;
it=rb_funcall(self,sy_AmethystCTranslator__dq__at__sh__le_bind_f173,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto fail;
 accept3:;
 break;
case 3/*Key*/:; int oldpos4=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,6/*name*/,it);
  it=AmethystCTranslator_rbtrans(self ); FAILTEST(pass4); bind_aset(bind,8/*args*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt4_2;
it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_6_rb__79e0,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos4); goto fail;
 accept4:;
 break;
case 4/*Lambda*/:; int oldpos5=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCTranslator_addlambda(self ); FAILTEST(pass5); bind_aset(bind,10/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt5_2;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos5); goto fail;
 accept5:;
 break;
case 5/*Local*/:; int oldpos6=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=rb_funcall(self,sy_AmethystCTranslator_rbbget_lp_s_68a8,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt6_2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos6); goto fail;
 accept6:;
 break;
case 6/*Result*/:; int oldpos8=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf,1,bind);  bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt7_2;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos8); goto fail;
 accept7:;
 break;
case 7/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbtrans2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCTranslator_rbtrans(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*it*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_2_rb__ti__e7b8,1,bind);  bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(5); bind_aset(bind,1/*word*/,a0);bind_aset(bind,2/*prc*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,0/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind);  it=bind_aget(bind,2/*prc*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(fail); bind_aset(bind,3/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_37e7,1,bind);  bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_trans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(96);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_2,rb_obj_class(ame_curobj(self))))){case 0/*Act*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__d113,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_addcallb_68bb,1,bind);  bind_aset(bind,4/*cbno*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq__sh__le_rb_79a3,1,bind);  bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 1/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,7/*autovar*/,it);
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass3; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass3);if (strncmp(ame_curstr(self),"find",4)) goto pass3; else ame_setpos(self,ame_getpos(self)+4); break;
}  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_2;
it=rb_obj_clone(s__find_a2c7); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,9/*autovar*/); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr(self)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass5; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr(self),"ails",4)) goto pass5; else ame_setpos(self,ame_getpos(self)+4); break;
}  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto pass4;
it=rb_funcall(self,sy_AmethystCTranslator__dq_goto_sp__sh__le__f772,1,bind);  bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt1_3;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,9/*autovar*/); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,16/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,16/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass7);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass7; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass7);if (strncmp(ame_curstr(self),"seq",3)) goto pass7; else ame_setpos(self,ame_getpos(self)+3); break;
}  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto pass6;
switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_3,rb_obj_class(ame_curobj(self))))){case 0/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,17/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass6; break;
}cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass8); bind_aset(bind,18/*s*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto pass6;
it=rb_funcall(self,sy_AmethystCTranslator__dq_if_sp__lp_str_086f,1,bind);  bind_aset(bind,19/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt1_4;
it=bind_aget(bind,19/*autovar*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,9/*autovar*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,20/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass9); bind_aset(bind,21/*name*/,it);
it=i_0; bind_aset(bind,22/*ii*/,it);
it=rb_ary_new3(0); bind_aset(bind,23/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCTranslator_trans(self ); FAILTEST(break2); bind_aset(bind,24/*aa*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_22_rb__8e1b,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__9b54,1,bind);  bind_aset(bind,25/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__b24c,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,23/*autovar*/); bind_aset(bind,26/*args*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq__sp__sh__le_bind_c2ea,1,bind);  bind_aset(bind,27/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__99c9,1,bind);  bind_aset(bind,28/*_result*/,it);
it=bind_aget(bind,28/*_result*/); bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt1_5;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos2); goto fail;
 accept1:;
 break;
case 2/*Bind*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,30/*autovar*/,it);
cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,30/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCTranslator_trans(self ); FAILTEST(pass10); bind_aset(bind,31/*e*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__81e2,1,bind);  bind_aset(bind,32/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto fail;
it=bind_aget(bind,32/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 3/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=rb_funcall(self,sy_AmethystCTranslator_ar_eq__ti_src_dot__efea,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto fail;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 4/*Cut*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,35/*autovar*/,it);
cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,35/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto fail;
it=rb_obj_clone(s_ame_setc_af44); bind_aset(bind,6/*_result*/,it);
 break;
case 5/*Grammar*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,36/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,36/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator__at_grammar_1337,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_lambdas_ecda,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_defs_eq__lb__rb__188f,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_defmeth_456b,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_8142,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_callbac_e37c,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_mktable_lp__ea79,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_header_eq__7aa9,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_init_eq__lb__rb__47da,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_rule_5acf,1,bind);  bind_aset(bind,37/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,37/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass14); bind_aset(bind,38/*autovar*/,it);
cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,38/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,39/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCTranslator_trans(self ); FAILTEST(break4); bind_aset(bind,40/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__403b,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,39/*autovar*/); bind_aset(bind,41/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto pass14;
it=bind_aget(bind,41/*autovar*/); bind_aset(bind,42/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto pass13;
it=bind_aget(bind,42/*autovar*/); bind_aset(bind,43/*t*/,it);
  it=AmethystCTranslator_rbcode(self ); FAILTEST(pass13); bind_aset(bind,44/*rbcode*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf,1,bind);  bind_aset(bind,18/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_18_rb__6a92,1,bind);  bind_aset(bind,46/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto fail;
it=bind_aget(bind,46/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 6/*Local*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,47/*autovar*/,it);
cstruct oldpass16=*ptr; int fail16=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,47/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f,1,bind);  bind_aset(bind,48/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass16);
	goto success16;
	pass16: fail16=1;
	success16: *ptr=oldpass16;
	if(fail16) goto fail;
it=bind_aget(bind,48/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 7/*Lookahead*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,49/*autovar*/,it);
cstruct oldpass17=*ptr; int fail17=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,49/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind);  bind_aset(bind,50/*accept*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_r_95b2,1,bind);  bind_aset(bind,51/*reject*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind);  bind_aset(bind,52/*oldpos*/,it);
it=bind_aget(bind,51/*reject*/); bind_aset(bind,53/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,54/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1e7d,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(pass17); bind_aset(bind,43/*t*/,it);
 bind_aset(bind,55/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_602d,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_b_ef9c,1,bind);  bind_aset(bind,56/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass17);
	goto success17;
	pass17: fail17=1;
	success17: *ptr=oldpass17;
	if(fail17) goto fail;
it=bind_aget(bind,56/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 8/*Many*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,57/*autovar*/,it);
cstruct oldpass18=*ptr; int fail18=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,57/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_b_6df7,1,bind);  bind_aset(bind,58/*brk*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind);  bind_aset(bind,52/*oldpos*/,it);
it=bind_aget(bind,58/*brk*/); bind_aset(bind,53/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,54/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1e7d,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(pass18); bind_aset(bind,43/*t*/,it);
 bind_aset(bind,55/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_602d,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_b_6371,1,bind);  bind_aset(bind,59/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass18);
	goto success18;
	pass18: fail18=1;
	success18: *ptr=oldpass18;
	if(fail18) goto fail;
it=bind_aget(bind,59/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 9/*Or*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,60/*autovar*/,it);
cstruct oldpass19=*ptr; int fail19=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,60/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind);  bind_aset(bind,50/*accept*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,61/*fail*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind);  bind_aset(bind,52/*oldpos*/,it);
 it=rb_obj_clone(s_alt_3482); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass19); bind_aset(bind,62/*alt*/,it);
it=i_0; bind_aset(bind,63/*altno*/,it);
it=rb_ary_new3(0); bind_aset(bind,64/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self); int oldpos8=ame_getpos(self);
   it=AmethystCore_anything(self ); FAILTEST(reject1); x=1; goto accept2;  reject1: x=0; accept2: it=Qnil; ame_setpos(self,oldpos8); if (x==0) goto break6;it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_63_rb__908e,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__9560,1,bind);  bind_aset(bind,53/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,54/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1e7d,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(break6); bind_aset(bind,6/*_result*/,it);
 bind_aset(bind,55/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_602d,1,bind);  bind_aset(bind,65/*_result*/,it);
it=bind_aget(bind,65/*_result*/); bind_aset(bind,66/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__38b7,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,64/*autovar*/); bind_aset(bind,43/*t*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_18_rb__7b0e,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_18_rb__7e00,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__4b45,1,bind);  bind_aset(bind,67/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass19);
	goto success19;
	pass19: fail19=1;
	success19: *ptr=oldpass19;
	if(fail19) goto fail;
it=bind_aget(bind,67/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 10/*Pass*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,68/*autovar*/,it);
cstruct oldpass20=*ptr; int fail20=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,68/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
  it=rb_obj_clone(s_pass_1a1d); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass20); bind_aset(bind,69/*pass*/,it);
 it=rb_obj_clone(s_oldpass_6559); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass20); bind_aset(bind,70/*oldpass*/,it);
 it=rb_obj_clone(s_success_260c); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass20); bind_aset(bind,71/*success*/,it);
 it=rb_obj_clone(s_fail_e111); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass20); bind_aset(bind,61/*fail*/,it);
it=bind_aget(bind,69/*pass*/); bind_aset(bind,53/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,54/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1e7d,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_to_5e99,1,bind);  bind_aset(bind,72/*autovar*/,it);
cstruct oldpass21=*ptr; int fail21=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,72/*autovar*/);ptr->len=1;
   it=AmethystCTranslator_trans(self ); FAILTEST(pass21); bind_aset(bind,73/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass21);
	goto success21;
	pass21: fail21=1;
	success21: *ptr=oldpass21;
	if(fail21) goto pass20;
it=bind_aget(bind,73/*autovar*/); bind_aset(bind,74/*to*/,it);
 bind_aset(bind,55/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_602d,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_cstruct_9fd5,1,bind);  bind_aset(bind,75/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass20);
	goto success20;
	pass20: fail20=1;
	success20: *ptr=oldpass20;
	if(fail20) goto fail;
it=bind_aget(bind,75/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 11/*Result*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,76/*autovar*/,it);
cstruct oldpass22=*ptr; int fail22=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,76/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_18_rb__0027,1,bind);  bind_aset(bind,77/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass22);
	goto success22;
	pass22: fail22=1;
	success22: *ptr=oldpass22;
	if(fail22) goto fail;
it=bind_aget(bind,77/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 12/*Rule*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,78/*autovar*/,it);
cstruct oldpass23=*ptr; int fail23=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,78/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_src_dot_name_80f3,1,bind);  bind_aset(bind,21/*name*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_rulenam_713e,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_body_519e,1,bind);  bind_aset(bind,79/*autovar*/,it);
cstruct oldpass24=*ptr; int fail24=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,79/*autovar*/);ptr->len=1;
   it=AmethystCTranslator_trans(self ); FAILTEST(pass24); bind_aset(bind,80/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass24);
	goto success24;
	pass24: fail24=1;
	success24: *ptr=oldpass24;
	if(fail24) goto pass23;
it=bind_aget(bind,80/*autovar*/); bind_aset(bind,81/*body*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_00cd,1,bind);  bind_aset(bind,82/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass23);
	goto success23;
	pass23: fail23=1;
	success23: *ptr=oldpass23;
	if(fail23) goto fail;
it=bind_aget(bind,82/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 13/*Seq*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,83/*autovar*/,it);
cstruct oldpass25=*ptr; int fail25=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,83/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,84/*autovar*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCTranslator_trans(self ); FAILTEST(break7); bind_aset(bind,85/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__9a6f,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=bind_aget(bind,84/*autovar*/); bind_aset(bind,43/*t*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_43_rb__cb8e,1,bind);  bind_aset(bind,86/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass25);
	goto success25;
	pass25: fail25=1;
	success25: *ptr=oldpass25;
	if(fail25) goto fail;
it=bind_aget(bind,86/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 14/*Stop*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,87/*autovar*/,it);
cstruct oldpass26=*ptr; int fail26=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,87/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_eof(self ); FAILTEST(pass26);
	goto success26;
	pass26: fail26=1;
	success26: *ptr=oldpass26;
	if(fail26) goto fail;
it=rb_obj_clone(s_ame_sets_fef4); bind_aset(bind,6/*_result*/,it);
 break;
case 15/*Switch*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,88/*autovar*/,it);
cstruct oldpass27=*ptr; int fail27=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,88/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator__at_defs_lt__lt_s_1286,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_header_lt__fff4,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_init_lt__lt_s_a51d,1,bind); it=rb_obj_clone(s_switch_lp__lp__8d89); bind_aset(bind,18/*s*/,it);
int oldpos10; while(1){oldpos10=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break8); bind_aset(bind,89/*autovar*/,it);
cstruct oldpass28=*ptr; int fail28=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,89/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass28); bind_aset(bind,90/*c*/,it);
  it=AmethystCTranslator_trans(self ); FAILTEST(pass28); bind_aset(bind,43/*t*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass28);
	goto success28;
	pass28: fail28=1;
	success28: *ptr=oldpass28;
	if(fail28) goto break8;
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_18_rb__c661,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos10=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos10); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_18_rb__3741,1,bind);  bind_aset(bind,91/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass27);
	goto success27;
	pass27: fail27=1;
	success27: *ptr=oldpass27;
	if(fail27) goto fail;
it=bind_aget(bind,91/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 16/*Switch_Clas*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,92/*autovar*/,it);
cstruct oldpass29=*ptr; int fail29=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,92/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator__dq_switchh_f207,1,bind);  bind_aset(bind,93/*sh*/,it);
it=i_0; bind_aset(bind,22/*ii*/,it);
it=rb_obj_clone(s__d41d); bind_aset(bind,45/*init*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_header_lt__26bb,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_switch_lp__b8f1,1,bind);  bind_aset(bind,18/*s*/,it);
int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break9); bind_aset(bind,94/*autovar*/,it);
cstruct oldpass30=*ptr; int fail30=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,94/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass30); bind_aset(bind,90/*c*/,it);
  it=AmethystCTranslator_trans(self ); FAILTEST(pass30); bind_aset(bind,43/*t*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass30);
	goto success30;
	pass30: fail30=1;
	success30: *ptr=oldpass30;
	if(fail30) goto break9;
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_90_rb__3516,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_18_rb__88ca,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=rb_funcall(self,sy_AmethystCTranslator__at_init_sp__sp__lt__1ca0,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_18_rb__3741,1,bind);  bind_aset(bind,95/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass29);
	goto success29;
	pass29: fail29=1;
	success29: *ptr=oldpass29;
	if(fail29) goto fail;
it=bind_aget(bind,95/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 17/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_ctranslator2_c(){ 
 cls_AmethystCTranslator=rb_define_class("AmethystCTranslator",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
i_0=rb_funcall(rb_str_new2("0"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),i_0);
s__d41d=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__d41d);
s__find_a2c7=rb_str_new2("_find");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__find_a2c7);
s_alt_3482=rb_str_new2("alt");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_alt_3482);
s_ame_setc_af44=rb_str_new2("ame_setcut(self,Qtrue);");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_ame_setc_af44);
s_ame_sets_fef4=rb_str_new2("ame_setstop(self,Qtrue);");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_ame_sets_fef4);
s_fail_e111=rb_str_new2("fail");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_fail_e111);
s_oldpass_6559=rb_str_new2("oldpass");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_oldpass_6559);
s_pass_1a1d=rb_str_new2("pass");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_pass_1a1d);
s_success_260c=rb_str_new2("success");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_success_260c);
s_switch_lp__lp__8d89=rb_str_new2("switch((unsigned char)*ame_curstr(self)){");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_switch_lp__lp__8d89);
switchhash_AmethystCTranslator_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Global\nnext h[k]=3 if k<=Key\nnext h[k]=4 if k<=Lambda\nnext h[k]=5 if k<=Local\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_1);;
switchhash_AmethystCTranslator_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Or\nnext h[k]=10 if k<=Pass\nnext h[k]=11 if k<=Result\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_2);;
switchhash_AmethystCTranslator_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_3);;
sy_AmethystCTranslator__append_lp__38b7=rb_intern("AmethystCTranslator__append_lp__38b7");
sy_AmethystCTranslator__append_lp__403b=rb_intern("AmethystCTranslator__append_lp__403b");
sy_AmethystCTranslator__append_lp__5e3c=rb_intern("AmethystCTranslator__append_lp__5e3c");
sy_AmethystCTranslator__append_lp__81ec=rb_intern("AmethystCTranslator__append_lp__81ec");
sy_AmethystCTranslator__append_lp__9a6f=rb_intern("AmethystCTranslator__append_lp__9a6f");
sy_AmethystCTranslator__append_lp__b24c=rb_intern("AmethystCTranslator__append_lp__b24c");
sy_AmethystCTranslator__append_lp__cbd1=rb_intern("AmethystCTranslator__append_lp__cbd1");
sy_AmethystCTranslator__append_lp__d113=rb_intern("AmethystCTranslator__append_lp__d113");
sy_AmethystCTranslator__at_callbac_2d11=rb_intern("AmethystCTranslator__at_callbac_2d11");
sy_AmethystCTranslator__at_callbac_e37c=rb_intern("AmethystCTranslator__at_callbac_e37c");
sy_AmethystCTranslator__at_defmeth_456b=rb_intern("AmethystCTranslator__at_defmeth_456b");
sy_AmethystCTranslator__at_defs_eq__lb__rb__188f=rb_intern("AmethystCTranslator__at_defs_eq__lb__rb__188f");
sy_AmethystCTranslator__at_defs_lt__lt_s_1286=rb_intern("AmethystCTranslator__at_defs_lt__lt_s_1286");
sy_AmethystCTranslator__at_faillab_1610=rb_intern("AmethystCTranslator__at_faillab_1610");
sy_AmethystCTranslator__at_faillab_1e7d=rb_intern("AmethystCTranslator__at_faillab_1e7d");
sy_AmethystCTranslator__at_faillab_37e7=rb_intern("AmethystCTranslator__at_faillab_37e7");
sy_AmethystCTranslator__at_faillab_602d=rb_intern("AmethystCTranslator__at_faillab_602d");
sy_AmethystCTranslator__at_faillab_74ee=rb_intern("AmethystCTranslator__at_faillab_74ee");
sy_AmethystCTranslator__at_faillab_8142=rb_intern("AmethystCTranslator__at_faillab_8142");
sy_AmethystCTranslator__at_faillab_e643=rb_intern("AmethystCTranslator__at_faillab_e643");
sy_AmethystCTranslator__at_grammar_1337=rb_intern("AmethystCTranslator__at_grammar_1337");
sy_AmethystCTranslator__at_header_eq__7aa9=rb_intern("AmethystCTranslator__at_header_eq__7aa9");
sy_AmethystCTranslator__at_header_lt__09ca=rb_intern("AmethystCTranslator__at_header_lt__09ca");
sy_AmethystCTranslator__at_header_lt__26bb=rb_intern("AmethystCTranslator__at_header_lt__26bb");
sy_AmethystCTranslator__at_header_lt__fff4=rb_intern("AmethystCTranslator__at_header_lt__fff4");
sy_AmethystCTranslator__at_init_eq__lb__rb__47da=rb_intern("AmethystCTranslator__at_init_eq__lb__rb__47da");
sy_AmethystCTranslator__at_init_lt__lt_s_a51d=rb_intern("AmethystCTranslator__at_init_lt__lt_s_a51d");
sy_AmethystCTranslator__at_init_sp__sp__lt__1ca0=rb_intern("AmethystCTranslator__at_init_sp__sp__lt__1ca0");
sy_AmethystCTranslator__at_lambdas_ecda=rb_intern("AmethystCTranslator__at_lambdas_ecda");
sy_AmethystCTranslator__at_rulenam_713e=rb_intern("AmethystCTranslator__at_rulenam_713e");
sy_AmethystCTranslator__dq_Amethys_8b00=rb_intern("AmethystCTranslator__dq_Amethys_8b00");
sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf=rb_intern("AmethystCTranslator__dq_VALUE_sp_c_8bbf");
sy_AmethystCTranslator__dq__at__sh__le_bind_f173=rb_intern("AmethystCTranslator__dq__at__sh__le_bind_f173");
sy_AmethystCTranslator__dq__sh__le__at_gram_5de9=rb_intern("AmethystCTranslator__dq__sh__le__at_gram_5de9");
sy_AmethystCTranslator__dq__sh__le_bind_lb__055d=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__055d");
sy_AmethystCTranslator__dq__sh__le_bind_lb__4b45=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__4b45");
sy_AmethystCTranslator__dq__sh__le_bind_lb__81e2=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__81e2");
sy_AmethystCTranslator__dq__sh__le_bind_lb__9560=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__9560");
sy_AmethystCTranslator__dq__sh__le_bind_lb__99c9=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__99c9");
sy_AmethystCTranslator__dq__sh__le_bind_lb__9b54=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__9b54");
sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf=rb_intern("AmethystCTranslator__dq__sh__le_src_dot_n_9acf");
sy_AmethystCTranslator__dq__sp__sh__le_bind_c2ea=rb_intern("AmethystCTranslator__dq__sp__sh__le_bind_c2ea");
sy_AmethystCTranslator__dq_class_sp__sh__0b62=rb_intern("AmethystCTranslator__dq_class_sp__sh__0b62");
sy_AmethystCTranslator__dq_cstruct_9fd5=rb_intern("AmethystCTranslator__dq_cstruct_9fd5");
sy_AmethystCTranslator__dq_def_sp__sh__le_b_5b6b=rb_intern("AmethystCTranslator__dq_def_sp__sh__le_b_5b6b");
sy_AmethystCTranslator__dq_goto_sp__sh__le__f772=rb_intern("AmethystCTranslator__dq_goto_sp__sh__le__f772");
sy_AmethystCTranslator__dq_if_sp__lp_str_086f=rb_intern("AmethystCTranslator__dq_if_sp__lp_str_086f");
sy_AmethystCTranslator__dq_int_sp__sh__le_b_6371=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_b_6371");
sy_AmethystCTranslator__dq_int_sp__sh__le_b_ef9c=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_b_ef9c");
sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f=rb_intern("AmethystCTranslator__dq_it_eq__sh__le_bg_281f");
sy_AmethystCTranslator__dq_it_eq__sh__le_rb_79a3=rb_intern("AmethystCTranslator__dq_it_eq__sh__le_rb_79a3");
sy_AmethystCTranslator__dq_switch_lp__b8f1=rb_intern("AmethystCTranslator__dq_switch_lp__b8f1");
sy_AmethystCTranslator__dq_switchh_f207=rb_intern("AmethystCTranslator__dq_switchh_f207");
sy_AmethystCTranslator__lb_bind_lb_1_rb__8404=rb_intern("AmethystCTranslator__lb_bind_lb_1_rb__8404");
sy_AmethystCTranslator__lp_bind_lb_3_rb__e49d=rb_intern("AmethystCTranslator__lp_bind_lb_3_rb__e49d");
sy_AmethystCTranslator__lp_bind_lb_6_rb__79e0=rb_intern("AmethystCTranslator__lp_bind_lb_6_rb__79e0");
sy_AmethystCTranslator_addcallb_68bb=rb_intern("AmethystCTranslator_addcallb_68bb");
sy_AmethystCTranslator_addcallb_dcd7=rb_intern("AmethystCTranslator_addcallb_dcd7");
sy_AmethystCTranslator_ar_eq__ti_src_dot__efea=rb_intern("AmethystCTranslator_ar_eq__ti_src_dot__efea");
sy_AmethystCTranslator_bind_lb_0_rb__lt__cac1=rb_intern("AmethystCTranslator_bind_lb_0_rb__lt__cac1");
sy_AmethystCTranslator_bind_lb_0_rb__pl__40f3=rb_intern("AmethystCTranslator_bind_lb_0_rb__pl__40f3");
sy_AmethystCTranslator_bind_lb_0_rb__pl__c1a5=rb_intern("AmethystCTranslator_bind_lb_0_rb__pl__c1a5");
sy_AmethystCTranslator_bind_lb_18_rb__0027=rb_intern("AmethystCTranslator_bind_lb_18_rb__0027");
sy_AmethystCTranslator_bind_lb_18_rb__3741=rb_intern("AmethystCTranslator_bind_lb_18_rb__3741");
sy_AmethystCTranslator_bind_lb_18_rb__6a92=rb_intern("AmethystCTranslator_bind_lb_18_rb__6a92");
sy_AmethystCTranslator_bind_lb_18_rb__7b0e=rb_intern("AmethystCTranslator_bind_lb_18_rb__7b0e");
sy_AmethystCTranslator_bind_lb_18_rb__7e00=rb_intern("AmethystCTranslator_bind_lb_18_rb__7e00");
sy_AmethystCTranslator_bind_lb_18_rb__88ca=rb_intern("AmethystCTranslator_bind_lb_18_rb__88ca");
sy_AmethystCTranslator_bind_lb_18_rb__c661=rb_intern("AmethystCTranslator_bind_lb_18_rb__c661");
sy_AmethystCTranslator_bind_lb_1_rb__lt__2f50=rb_intern("AmethystCTranslator_bind_lb_1_rb__lt__2f50");
sy_AmethystCTranslator_bind_lb_22_rb__8e1b=rb_intern("AmethystCTranslator_bind_lb_22_rb__8e1b");
sy_AmethystCTranslator_bind_lb_2_rb__ti__e7b8=rb_intern("AmethystCTranslator_bind_lb_2_rb__ti__e7b8");
sy_AmethystCTranslator_bind_lb_3_rb_=rb_intern("AmethystCTranslator_bind_lb_3_rb_");
sy_AmethystCTranslator_bind_lb_43_rb__cb8e=rb_intern("AmethystCTranslator_bind_lb_43_rb__cb8e");
sy_AmethystCTranslator_bind_lb_63_rb__908e=rb_intern("AmethystCTranslator_bind_lb_63_rb__908e");
sy_AmethystCTranslator_bind_lb_90_rb__3516=rb_intern("AmethystCTranslator_bind_lb_90_rb__3516");
sy_AmethystCTranslator_h_eq__dq_VALUE_00cd=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_00cd");
sy_AmethystCTranslator_h_eq__dq_VALUE_394b=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_394b");
sy_AmethystCTranslator_label_lp__dq_a_f49c=rb_intern("AmethystCTranslator_label_lp__dq_a_f49c");
sy_AmethystCTranslator_label_lp__dq_b_6df7=rb_intern("AmethystCTranslator_label_lp__dq_b_6df7");
sy_AmethystCTranslator_label_lp__dq_o_c187=rb_intern("AmethystCTranslator_label_lp__dq_o_c187");
sy_AmethystCTranslator_label_lp__dq_r_95b2=rb_intern("AmethystCTranslator_label_lp__dq_r_95b2");
sy_AmethystCTranslator_mktable_lp__ea79=rb_intern("AmethystCTranslator_mktable_lp__ea79");
sy_AmethystCTranslator_rbbget_lp_s_68a8=rb_intern("AmethystCTranslator_rbbget_lp_s_68a8");
sy_AmethystCTranslator_src_dot_body_519e=rb_intern("AmethystCTranslator_src_dot_body_519e");
sy_AmethystCTranslator_src_dot_name_80f3=rb_intern("AmethystCTranslator_src_dot_name_80f3");
sy_AmethystCTranslator_src_dot_rule_5acf=rb_intern("AmethystCTranslator_src_dot_rule_5acf");
sy_AmethystCTranslator_src_dot_to_5e99=rb_intern("AmethystCTranslator_src_dot_to_5e99");
sy_apply=rb_intern("apply");
sy_label=rb_intern("label");
rb_define_method(cls_AmethystCTranslator,"add_c_global",AmethystCTranslator_add_c_global,2);
rb_define_method(cls_AmethystCTranslator,"addcallback",AmethystCTranslator_addcallback,1);
rb_define_method(cls_AmethystCTranslator,"addlambda",AmethystCTranslator_addlambda,0);
rb_define_method(cls_AmethystCTranslator,"failwrap",AmethystCTranslator_failwrap,1);
rb_define_method(cls_AmethystCTranslator,"itrans",AmethystCTranslator_itrans,0);
rb_define_method(cls_AmethystCTranslator,"rbcode",AmethystCTranslator_rbcode,0);
rb_define_method(cls_AmethystCTranslator,"rbtrans",AmethystCTranslator_rbtrans,0);
rb_define_method(cls_AmethystCTranslator,"rbtrans2",AmethystCTranslator_rbtrans2,0);
rb_define_method(cls_AmethystCTranslator,"rw",AmethystCTranslator_rw,2);
rb_define_method(cls_AmethystCTranslator,"trans",AmethystCTranslator_trans,0);
 rb_eval_string("testversionctranslator2('0828ae0c6ab0aed2822640580fbf2554')");}
