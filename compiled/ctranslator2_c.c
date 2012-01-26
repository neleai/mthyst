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
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_spaces(VALUE self );
static VALUE c_Act;
static VALUE c_Apply;
static VALUE c_Args;
static VALUE c_Array;
static VALUE c_Bind;
static VALUE c_CAct;
static VALUE c_Cut;
static VALUE c_Global;
static VALUE c_Grammar;
static VALUE c_Key;
static VALUE c_Lambda;
static VALUE c_Local;
static VALUE c_Lookahead;
static VALUE c_Many;
static VALUE c_Or;
static VALUE c_Pass;
static VALUE c_Result;
static VALUE c_Rule;
static VALUE c_Seq;
static VALUE c_Stop;
static VALUE c_Switch;
static VALUE c_Switch_Clas;
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
static VALUE s_switchha_a329;
static VALUE sy_AmethystCTranslator__append_lp__00d5;
static VALUE sy_AmethystCTranslator__append_lp__19cb;
static VALUE sy_AmethystCTranslator__append_lp__5e3c;
static VALUE sy_AmethystCTranslator__append_lp__81ec;
static VALUE sy_AmethystCTranslator__append_lp__9708;
static VALUE sy_AmethystCTranslator__append_lp__cbd1;
static VALUE sy_AmethystCTranslator__append_lp__dd73;
static VALUE sy_AmethystCTranslator__append_lp__de6a;
static VALUE sy_AmethystCTranslator__at_callbac_2d11;
static VALUE sy_AmethystCTranslator__at_callbac_e37c;
static VALUE sy_AmethystCTranslator__at_defmeth_456b;
static VALUE sy_AmethystCTranslator__at_defs_eq__lb__rb__188f;
static VALUE sy_AmethystCTranslator__at_defs_lt__lt_s_1286;
static VALUE sy_AmethystCTranslator__at_faillab_1610;
static VALUE sy_AmethystCTranslator__at_faillab_37e7;
static VALUE sy_AmethystCTranslator__at_faillab_585c;
static VALUE sy_AmethystCTranslator__at_faillab_5d21;
static VALUE sy_AmethystCTranslator__at_faillab_74ee;
static VALUE sy_AmethystCTranslator__at_faillab_8142;
static VALUE sy_AmethystCTranslator__at_faillab_e643;
static VALUE sy_AmethystCTranslator__at_grammar_1337;
static VALUE sy_AmethystCTranslator__at_header_eq__7aa9;
static VALUE sy_AmethystCTranslator__at_header_lt__09ca;
static VALUE sy_AmethystCTranslator__at_header_lt__4f97;
static VALUE sy_AmethystCTranslator__at_header_lt__fff4;
static VALUE sy_AmethystCTranslator__at_init_eq__lb__rb__47da;
static VALUE sy_AmethystCTranslator__at_init_lt__lt_s_a51d;
static VALUE sy_AmethystCTranslator__at_init_sp__sp__lt__6af7;
static VALUE sy_AmethystCTranslator__at_lambdas_ecda;
static VALUE sy_AmethystCTranslator__at_rulenam_7d01;
static VALUE sy_AmethystCTranslator__dq_Amethys_8b00;
static VALUE sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf;
static VALUE sy_AmethystCTranslator__dq__at__sh__le_bind_65a6;
static VALUE sy_AmethystCTranslator__dq__sh__le__at_gram_5de9;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__055d;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__2326;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__5b0a;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__5cd5;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__9cc7;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__cfe2;
static VALUE sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf;
static VALUE sy_AmethystCTranslator__dq__sp__sh__le_bind_68f7;
static VALUE sy_AmethystCTranslator__dq_class_sp__sh__0b62;
static VALUE sy_AmethystCTranslator__dq_cstruct_166b;
static VALUE sy_AmethystCTranslator__dq_def_sp__sh__le_b_5b6b;
static VALUE sy_AmethystCTranslator__dq_goto_sp__sh__le__f772;
static VALUE sy_AmethystCTranslator__dq_if_sp__lp_str_1ff2;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_b_2409;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_b_5826;
static VALUE sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f;
static VALUE sy_AmethystCTranslator__dq_it_eq__sh__le_rb_2ee5;
static VALUE sy_AmethystCTranslator__dq_switch_lp__1ed6;
static VALUE sy_AmethystCTranslator__dq_switch_lp__3276;
static VALUE sy_AmethystCTranslator__lb_bind_lb_1_rb__8404;
static VALUE sy_AmethystCTranslator__lp_bind_lb_3_rb__e49d;
static VALUE sy_AmethystCTranslator__lp_bind_lb_8_rb__731e;
static VALUE sy_AmethystCTranslator_addcallb_441b;
static VALUE sy_AmethystCTranslator_addcallb_dcd7;
static VALUE sy_AmethystCTranslator_ar_eq__ti_src_dot__efea;
static VALUE sy_AmethystCTranslator_bind_lb_0_rb__lt__cac1;
static VALUE sy_AmethystCTranslator_bind_lb_0_rb__pl__40f3;
static VALUE sy_AmethystCTranslator_bind_lb_0_rb__pl__c1a5;
static VALUE sy_AmethystCTranslator_bind_lb_10_rb__8094;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__lt__2f50;
static VALUE sy_AmethystCTranslator_bind_lb_2_rb__ti__e7b8;
static VALUE sy_AmethystCTranslator_bind_lb_39_rb__7e24;
static VALUE sy_AmethystCTranslator_bind_lb_3_rb_;
static VALUE sy_AmethystCTranslator_bind_lb_59_rb__d84d;
static VALUE sy_AmethystCTranslator_bind_lb_7_rb__ti__a05a;
static VALUE sy_AmethystCTranslator_bind_lb_9_rb__eq__1a30;
static VALUE sy_AmethystCTranslator_bind_lb_9_rb__eq__1ce7;
static VALUE sy_AmethystCTranslator_bind_lb_9_rb__lt__4c8f;
static VALUE sy_AmethystCTranslator_bind_lb_9_rb__pl__69a7;
static VALUE sy_AmethystCTranslator_bind_lb_9_rb__pl__9cee;
static VALUE sy_AmethystCTranslator_bind_lb_9_rb__pl__a579;
static VALUE sy_AmethystCTranslator_bind_lb_9_rb__pl__bf3f;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_394b;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_c569;
static VALUE sy_AmethystCTranslator_i_pl__eq_1_e43a;
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

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Local; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_AmethystCTranslator_rbbget_lp_s_68a8,1,bind);  bind_aset(bind,1/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Args; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_3;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Array; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_4;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Key; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_5); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,8/*name*/,it);
  it=AmethystCTranslator_rbtrans(self ); FAILTEST(pass4); bind_aset(bind,9/*args*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt1_5;
it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_8_rb__731e,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Global; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_6); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,8/*name*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt1_6;
it=rb_funcall(self,sy_AmethystCTranslator__dq__at__sh__le_bind_65a6,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Lambda; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_7); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCTranslator_addlambda(self ); FAILTEST(pass6); bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt1_7;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Result; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_8); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf,1,bind);  bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt1_8;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_9); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_9:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

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
VALUE AmethystCTranslator_trans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(95);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Grammar; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator__at_grammar_1337,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_lambdas_ecda,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_defs_eq__lb__rb__188f,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_defmeth_456b,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_8142,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_callbac_e37c,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_mktable_lp__ea79,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_header_eq__7aa9,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_init_eq__lb__rb__47da,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_rule_5acf,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCTranslator_trans(self ); FAILTEST(break1); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__dd73,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*t*/,it);
  it=AmethystCTranslator_rbcode(self ); FAILTEST(pass1); bind_aset(bind,8/*rbcode*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf,1,bind);  bind_aset(bind,9/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_9_rb__lt__4c8f,1,bind);  bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_src_dot_name_80f3,1,bind);  bind_aset(bind,14/*name*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_rulenam_7d01,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_body_519e,1,bind);  bind_aset(bind,15/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,15/*autovar*/);ptr->len=1;
   it=AmethystCTranslator_trans(self ); FAILTEST(pass5); bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto pass4;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,17/*body*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_c569,1,bind);  bind_aset(bind,18/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt1_3;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Act; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,20/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__19cb,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,20/*autovar*/); bind_aset(bind,22/*it*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_addcallb_441b,1,bind);  bind_aset(bind,23/*cbno*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq__sh__le_rb_2ee5,1,bind);  bind_aset(bind,24/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt1_4;
it=bind_aget(bind,24/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_5); bind_aset(bind,25/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,25/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=rb_funcall(self,sy_AmethystCTranslator_ar_eq__ti_src_dot__efea,1,bind);  bind_aset(bind,26/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt1_5;
it=bind_aget(bind,26/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_6); bind_aset(bind,27/*autovar*/,it);
it=bind_aget(bind,27/*autovar*/); bind_aset(bind,28/*autovar*/,it);
int oldpos5=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_6;}
 it=bind_aget(bind,28/*autovar*/); bind_aset(bind,29/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,29/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass8); bind_aset(bind,30/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,30/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass9);switch((unsigned char)*ame_curstr(self)){case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass9);if (strncmp(ame_curstr(self),"find",4)) goto pass9; else ame_setpos(self,ame_getpos(self)+4); break;
case UC(0) ... '^':;case '`' ... UC(255):; goto pass9; break;
}  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto pass8;
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt2_2;
it=rb_obj_clone(s__find_a2c7); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_6;}
 it=bind_aget(bind,28/*autovar*/); bind_aset(bind,31/*autovar*/,it);
cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,31/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,32/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,32/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass11);switch((unsigned char)*ame_curstr(self)){case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass11);if (strncmp(ame_curstr(self),"ails",4)) goto pass11; else ame_setpos(self,ame_getpos(self)+4); break;
case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass11; break;
}  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto pass10;
it=rb_funcall(self,sy_AmethystCTranslator__dq_goto_sp__sh__le__f772,1,bind);  bind_aset(bind,33/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto alt2_3;
it=bind_aget(bind,33/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_6;}
 it=bind_aget(bind,28/*autovar*/); bind_aset(bind,34/*autovar*/,it);
cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,34/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass12); bind_aset(bind,35/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,35/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass13);switch((unsigned char)*ame_curstr(self)){case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass13);if (strncmp(ame_curstr(self),"seq",3)) goto pass13; else ame_setpos(self,ame_getpos(self)+3); break;
case UC(0) ... '^':;case '`' ... UC(255):; goto pass13; break;
}  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto pass12;
 it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass12); bind_aset(bind,36/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,36/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass14); bind_aset(bind,9/*s*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto pass12;
it=rb_funcall(self,sy_AmethystCTranslator__dq_if_sp__lp_str_1ff2,1,bind);  bind_aset(bind,37/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto alt2_4;
it=bind_aget(bind,37/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_4: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_6;}
 it=bind_aget(bind,28/*autovar*/); bind_aset(bind,38/*autovar*/,it);
cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,38/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass15); bind_aset(bind,14/*name*/,it);
it=i_0; bind_aset(bind,39/*ii*/,it);
it=rb_ary_new3(0); bind_aset(bind,40/*autovar*/,it);
int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCTranslator_trans(self ); FAILTEST(break4); bind_aset(bind,41/*aa*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_39_rb__7e24,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__cfe2,1,bind);  bind_aset(bind,42/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__00d5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,40/*autovar*/); bind_aset(bind,43/*args*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq__sp__sh__le_bind_68f7,1,bind);  bind_aset(bind,44/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__5b0a,1,bind);  bind_aset(bind,45/*_result*/,it);
it=bind_aget(bind,45/*_result*/); bind_aset(bind,46/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto alt2_5;
it=bind_aget(bind,46/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_5:  ame_setpos(self,oldpos5); goto alt1_6;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Seq; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_7); bind_aset(bind,47/*autovar*/,it);
cstruct oldpass16=*ptr; int fail16=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,47/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,48/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCTranslator_trans(self ); FAILTEST(break5); bind_aset(bind,49/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__9708,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,48/*autovar*/); bind_aset(bind,7/*t*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_7_rb__ti__a05a,1,bind);  bind_aset(bind,50/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass16);
	goto success16;
	pass16: fail16=1;
	success16: *ptr=oldpass16;
	if(fail16) goto alt1_7;
it=bind_aget(bind,50/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Bind; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_8); bind_aset(bind,51/*autovar*/,it);
cstruct oldpass17=*ptr; int fail17=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,51/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCTranslator_trans(self ); FAILTEST(pass17); bind_aset(bind,52/*e*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__5cd5,1,bind);  bind_aset(bind,53/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass17);
	goto success17;
	pass17: fail17=1;
	success17: *ptr=oldpass17;
	if(fail17) goto alt1_8;
it=bind_aget(bind,53/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Or; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_9); bind_aset(bind,54/*autovar*/,it);
cstruct oldpass18=*ptr; int fail18=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,54/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind);  bind_aset(bind,55/*accept*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,56/*fail*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind);  bind_aset(bind,57/*oldpos*/,it);
 it=rb_obj_clone(s_alt_3482); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass18); bind_aset(bind,58/*alt*/,it);
it=i_0; bind_aset(bind,59/*altno*/,it);
it=rb_ary_new3(0); bind_aset(bind,60/*autovar*/,it);
int oldpos8; while(1){oldpos8=ame_getpos(self); int oldpos9=ame_getpos(self);
   it=AmethystCore_anything(self ); FAILTEST(reject1); x=1; goto accept3;  reject1: x=0; accept3: it=Qnil; ame_setpos(self,oldpos9); if (x==0) goto break6;it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_59_rb__d84d,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__9cc7,1,bind);  bind_aset(bind,61/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,62/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_585c,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(break6); bind_aset(bind,12/*_result*/,it);
 bind_aset(bind,63/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_5d21,1,bind);  bind_aset(bind,64/*_result*/,it);
it=bind_aget(bind,64/*_result*/); bind_aset(bind,65/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__de6a,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=bind_aget(bind,60/*autovar*/); bind_aset(bind,7/*t*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_9_rb__eq__1ce7,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_9_rb__pl__bf3f,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__2326,1,bind);  bind_aset(bind,66/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass18);
	goto success18;
	pass18: fail18=1;
	success18: *ptr=oldpass18;
	if(fail18) goto alt1_9;
it=bind_aget(bind,66/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Cut; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_10); bind_aset(bind,67/*autovar*/,it);
cstruct oldpass19=*ptr; int fail19=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,67/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_eof(self ); FAILTEST(pass19);
	goto success19;
	pass19: fail19=1;
	success19: *ptr=oldpass19;
	if(fail19) goto alt1_10;
it=rb_obj_clone(s_ame_setc_af44); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Stop; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_11); bind_aset(bind,68/*autovar*/,it);
cstruct oldpass20=*ptr; int fail20=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,68/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_eof(self ); FAILTEST(pass20);
	goto success20;
	pass20: fail20=1;
	success20: *ptr=oldpass20;
	if(fail20) goto alt1_11;
it=rb_obj_clone(s_ame_sets_fef4); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Many; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_12); bind_aset(bind,69/*autovar*/,it);
cstruct oldpass21=*ptr; int fail21=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,69/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_b_6df7,1,bind);  bind_aset(bind,70/*brk*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind);  bind_aset(bind,57/*oldpos*/,it);
it=bind_aget(bind,70/*brk*/); bind_aset(bind,61/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,62/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_585c,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(pass21); bind_aset(bind,7/*t*/,it);
 bind_aset(bind,63/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_5d21,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_b_2409,1,bind);  bind_aset(bind,71/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass21);
	goto success21;
	pass21: fail21=1;
	success21: *ptr=oldpass21;
	if(fail21) goto alt1_12;
it=bind_aget(bind,71/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_12: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Lookahead; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_13); bind_aset(bind,72/*autovar*/,it);
cstruct oldpass22=*ptr; int fail22=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,72/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind);  bind_aset(bind,55/*accept*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_r_95b2,1,bind);  bind_aset(bind,73/*reject*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind);  bind_aset(bind,57/*oldpos*/,it);
it=bind_aget(bind,73/*reject*/); bind_aset(bind,61/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,62/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_585c,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(pass22); bind_aset(bind,7/*t*/,it);
 bind_aset(bind,63/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_5d21,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_b_5826,1,bind);  bind_aset(bind,74/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass22);
	goto success22;
	pass22: fail22=1;
	success22: *ptr=oldpass22;
	if(fail22) goto alt1_13;
it=bind_aget(bind,74/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_13: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Local; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_14); bind_aset(bind,75/*autovar*/,it);
cstruct oldpass23=*ptr; int fail23=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,75/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos10; while(1){oldpos10=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break7); if (ame_getstop(self)!=Qnil){{oldpos10=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos10); it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f,1,bind);  bind_aset(bind,76/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass23);
	goto success23;
	pass23: fail23=1;
	success23: *ptr=oldpass23;
	if(fail23) goto alt1_14;
it=bind_aget(bind,76/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_14: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Result; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_15); bind_aset(bind,77/*autovar*/,it);
cstruct oldpass24=*ptr; int fail24=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,77/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_9_rb__eq__1a30,1,bind);  bind_aset(bind,78/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass24);
	goto success24;
	pass24: fail24=1;
	success24: *ptr=oldpass24;
	if(fail24) goto alt1_15;
it=bind_aget(bind,78/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_15: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Pass; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_16); bind_aset(bind,79/*autovar*/,it);
cstruct oldpass25=*ptr; int fail25=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,79/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
  it=rb_obj_clone(s_pass_1a1d); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass25); bind_aset(bind,80/*pass*/,it);
 it=rb_obj_clone(s_oldpass_6559); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass25); bind_aset(bind,81/*oldpass*/,it);
 it=rb_obj_clone(s_success_260c); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass25); bind_aset(bind,82/*success*/,it);
 it=rb_obj_clone(s_fail_e111); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass25); bind_aset(bind,56/*fail*/,it);
it=bind_aget(bind,80/*pass*/); bind_aset(bind,61/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,62/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_585c,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_to_5e99,1,bind);  bind_aset(bind,83/*autovar*/,it);
cstruct oldpass26=*ptr; int fail26=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,83/*autovar*/);ptr->len=1;
   it=AmethystCTranslator_trans(self ); FAILTEST(pass26); bind_aset(bind,84/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass26);
	goto success26;
	pass26: fail26=1;
	success26: *ptr=oldpass26;
	if(fail26) goto pass25;
it=bind_aget(bind,84/*autovar*/); bind_aset(bind,85/*to*/,it);
 bind_aset(bind,63/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_5d21,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_cstruct_166b,1,bind);  bind_aset(bind,86/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass25);
	goto success25;
	pass25: fail25=1;
	success25: *ptr=oldpass25;
	if(fail25) goto alt1_16;
it=bind_aget(bind,86/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_16: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Switch; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_17); bind_aset(bind,87/*autovar*/,it);
cstruct oldpass27=*ptr; int fail27=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,87/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator__at_defs_lt__lt_s_1286,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_header_lt__fff4,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_init_lt__lt_s_a51d,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_switch_lp__3276,1,bind);  bind_aset(bind,9/*s*/,it);
int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break8); bind_aset(bind,88/*autovar*/,it);
cstruct oldpass28=*ptr; int fail28=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,88/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass28); bind_aset(bind,89/*c*/,it);
  it=AmethystCTranslator_trans(self ); FAILTEST(pass28); bind_aset(bind,7/*t*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass28);
	goto success28;
	pass28: fail28=1;
	success28: *ptr=oldpass28;
	if(fail28) goto break8;
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_9_rb__pl__a579,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_9_rb__pl__9cee,1,bind);  bind_aset(bind,90/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass27);
	goto success27;
	pass27: fail27=1;
	success27: *ptr=oldpass27;
	if(fail27) goto alt1_17;
it=bind_aget(bind,90/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_17: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Switch_Clas; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_18); bind_aset(bind,91/*autovar*/,it);
cstruct oldpass29=*ptr; int fail29=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,91/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
  it=rb_obj_clone(s_switchha_a329); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass29); bind_aset(bind,92/*sh*/,it);
it=i_0; bind_aset(bind,39/*ii*/,it);
it=rb_obj_clone(s__d41d); bind_aset(bind,10/*init*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_header_lt__4f97,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_switch_lp__1ed6,1,bind);  bind_aset(bind,9/*s*/,it);
int oldpos12; while(1){oldpos12=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break9); bind_aset(bind,93/*autovar*/,it);
cstruct oldpass30=*ptr; int fail30=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,93/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass30); bind_aset(bind,89/*c*/,it);
  it=AmethystCTranslator_trans(self ); FAILTEST(pass30); bind_aset(bind,7/*t*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass30);
	goto success30;
	pass30: fail30=1;
	success30: *ptr=oldpass30;
	if(fail30) goto break9;
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_9_rb__pl__69a7,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_10_rb__8094,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_i_pl__eq_1_e43a,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos12=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos12); it=rb_funcall(self,sy_AmethystCTranslator__at_init_sp__sp__lt__6af7,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_9_rb__pl__9cee,1,bind);  bind_aset(bind,94/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass29);
	goto success29;
	pass29: fail29=1;
	success29: *ptr=oldpass29;
	if(fail29) goto alt1_18;
it=bind_aget(bind,94/*autovar*/); bind_aset(bind,12/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_18:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

return it;
fail: return failobj; }
void Init_ctranslator2_c(){ 
 cls_AmethystCTranslator=rb_define_class("AmethystCTranslator",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_Act=rb_const_get(rb_cObject, rb_intern("Act"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Act);
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Args=rb_const_get(rb_cObject, rb_intern("Args"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Args);
c_Array=rb_const_get(rb_cObject, rb_intern("Array"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Array);
c_Bind=rb_const_get(rb_cObject, rb_intern("Bind"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Bind);
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
c_Cut=rb_const_get(rb_cObject, rb_intern("Cut"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Cut);
c_Global=rb_const_get(rb_cObject, rb_intern("Global"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Global);
c_Grammar=rb_const_get(rb_cObject, rb_intern("Grammar"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Grammar);
c_Key=rb_const_get(rb_cObject, rb_intern("Key"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Key);
c_Lambda=rb_const_get(rb_cObject, rb_intern("Lambda"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Lambda);
c_Local=rb_const_get(rb_cObject, rb_intern("Local"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Local);
c_Lookahead=rb_const_get(rb_cObject, rb_intern("Lookahead"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Lookahead);
c_Many=rb_const_get(rb_cObject, rb_intern("Many"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Many);
c_Or=rb_const_get(rb_cObject, rb_intern("Or"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Or);
c_Pass=rb_const_get(rb_cObject, rb_intern("Pass"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Pass);
c_Result=rb_const_get(rb_cObject, rb_intern("Result"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Result);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
c_Seq=rb_const_get(rb_cObject, rb_intern("Seq"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Seq);
c_Stop=rb_const_get(rb_cObject, rb_intern("Stop"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Stop);
c_Switch=rb_const_get(rb_cObject, rb_intern("Switch"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Switch);
c_Switch_Clas=rb_const_get(rb_cObject, rb_intern("Switch_Clas"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Switch_Clas);
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
s_switchha_a329=rb_str_new2("switchhash");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_switchha_a329);
sy_AmethystCTranslator__append_lp__00d5=rb_intern("AmethystCTranslator__append_lp__00d5");
sy_AmethystCTranslator__append_lp__19cb=rb_intern("AmethystCTranslator__append_lp__19cb");
sy_AmethystCTranslator__append_lp__5e3c=rb_intern("AmethystCTranslator__append_lp__5e3c");
sy_AmethystCTranslator__append_lp__81ec=rb_intern("AmethystCTranslator__append_lp__81ec");
sy_AmethystCTranslator__append_lp__9708=rb_intern("AmethystCTranslator__append_lp__9708");
sy_AmethystCTranslator__append_lp__cbd1=rb_intern("AmethystCTranslator__append_lp__cbd1");
sy_AmethystCTranslator__append_lp__dd73=rb_intern("AmethystCTranslator__append_lp__dd73");
sy_AmethystCTranslator__append_lp__de6a=rb_intern("AmethystCTranslator__append_lp__de6a");
sy_AmethystCTranslator__at_callbac_2d11=rb_intern("AmethystCTranslator__at_callbac_2d11");
sy_AmethystCTranslator__at_callbac_e37c=rb_intern("AmethystCTranslator__at_callbac_e37c");
sy_AmethystCTranslator__at_defmeth_456b=rb_intern("AmethystCTranslator__at_defmeth_456b");
sy_AmethystCTranslator__at_defs_eq__lb__rb__188f=rb_intern("AmethystCTranslator__at_defs_eq__lb__rb__188f");
sy_AmethystCTranslator__at_defs_lt__lt_s_1286=rb_intern("AmethystCTranslator__at_defs_lt__lt_s_1286");
sy_AmethystCTranslator__at_faillab_1610=rb_intern("AmethystCTranslator__at_faillab_1610");
sy_AmethystCTranslator__at_faillab_37e7=rb_intern("AmethystCTranslator__at_faillab_37e7");
sy_AmethystCTranslator__at_faillab_585c=rb_intern("AmethystCTranslator__at_faillab_585c");
sy_AmethystCTranslator__at_faillab_5d21=rb_intern("AmethystCTranslator__at_faillab_5d21");
sy_AmethystCTranslator__at_faillab_74ee=rb_intern("AmethystCTranslator__at_faillab_74ee");
sy_AmethystCTranslator__at_faillab_8142=rb_intern("AmethystCTranslator__at_faillab_8142");
sy_AmethystCTranslator__at_faillab_e643=rb_intern("AmethystCTranslator__at_faillab_e643");
sy_AmethystCTranslator__at_grammar_1337=rb_intern("AmethystCTranslator__at_grammar_1337");
sy_AmethystCTranslator__at_header_eq__7aa9=rb_intern("AmethystCTranslator__at_header_eq__7aa9");
sy_AmethystCTranslator__at_header_lt__09ca=rb_intern("AmethystCTranslator__at_header_lt__09ca");
sy_AmethystCTranslator__at_header_lt__4f97=rb_intern("AmethystCTranslator__at_header_lt__4f97");
sy_AmethystCTranslator__at_header_lt__fff4=rb_intern("AmethystCTranslator__at_header_lt__fff4");
sy_AmethystCTranslator__at_init_eq__lb__rb__47da=rb_intern("AmethystCTranslator__at_init_eq__lb__rb__47da");
sy_AmethystCTranslator__at_init_lt__lt_s_a51d=rb_intern("AmethystCTranslator__at_init_lt__lt_s_a51d");
sy_AmethystCTranslator__at_init_sp__sp__lt__6af7=rb_intern("AmethystCTranslator__at_init_sp__sp__lt__6af7");
sy_AmethystCTranslator__at_lambdas_ecda=rb_intern("AmethystCTranslator__at_lambdas_ecda");
sy_AmethystCTranslator__at_rulenam_7d01=rb_intern("AmethystCTranslator__at_rulenam_7d01");
sy_AmethystCTranslator__dq_Amethys_8b00=rb_intern("AmethystCTranslator__dq_Amethys_8b00");
sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf=rb_intern("AmethystCTranslator__dq_VALUE_sp_c_8bbf");
sy_AmethystCTranslator__dq__at__sh__le_bind_65a6=rb_intern("AmethystCTranslator__dq__at__sh__le_bind_65a6");
sy_AmethystCTranslator__dq__sh__le__at_gram_5de9=rb_intern("AmethystCTranslator__dq__sh__le__at_gram_5de9");
sy_AmethystCTranslator__dq__sh__le_bind_lb__055d=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__055d");
sy_AmethystCTranslator__dq__sh__le_bind_lb__2326=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__2326");
sy_AmethystCTranslator__dq__sh__le_bind_lb__5b0a=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__5b0a");
sy_AmethystCTranslator__dq__sh__le_bind_lb__5cd5=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__5cd5");
sy_AmethystCTranslator__dq__sh__le_bind_lb__9cc7=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__9cc7");
sy_AmethystCTranslator__dq__sh__le_bind_lb__cfe2=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__cfe2");
sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf=rb_intern("AmethystCTranslator__dq__sh__le_src_dot_n_9acf");
sy_AmethystCTranslator__dq__sp__sh__le_bind_68f7=rb_intern("AmethystCTranslator__dq__sp__sh__le_bind_68f7");
sy_AmethystCTranslator__dq_class_sp__sh__0b62=rb_intern("AmethystCTranslator__dq_class_sp__sh__0b62");
sy_AmethystCTranslator__dq_cstruct_166b=rb_intern("AmethystCTranslator__dq_cstruct_166b");
sy_AmethystCTranslator__dq_def_sp__sh__le_b_5b6b=rb_intern("AmethystCTranslator__dq_def_sp__sh__le_b_5b6b");
sy_AmethystCTranslator__dq_goto_sp__sh__le__f772=rb_intern("AmethystCTranslator__dq_goto_sp__sh__le__f772");
sy_AmethystCTranslator__dq_if_sp__lp_str_1ff2=rb_intern("AmethystCTranslator__dq_if_sp__lp_str_1ff2");
sy_AmethystCTranslator__dq_int_sp__sh__le_b_2409=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_b_2409");
sy_AmethystCTranslator__dq_int_sp__sh__le_b_5826=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_b_5826");
sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f=rb_intern("AmethystCTranslator__dq_it_eq__sh__le_bg_281f");
sy_AmethystCTranslator__dq_it_eq__sh__le_rb_2ee5=rb_intern("AmethystCTranslator__dq_it_eq__sh__le_rb_2ee5");
sy_AmethystCTranslator__dq_switch_lp__1ed6=rb_intern("AmethystCTranslator__dq_switch_lp__1ed6");
sy_AmethystCTranslator__dq_switch_lp__3276=rb_intern("AmethystCTranslator__dq_switch_lp__3276");
sy_AmethystCTranslator__lb_bind_lb_1_rb__8404=rb_intern("AmethystCTranslator__lb_bind_lb_1_rb__8404");
sy_AmethystCTranslator__lp_bind_lb_3_rb__e49d=rb_intern("AmethystCTranslator__lp_bind_lb_3_rb__e49d");
sy_AmethystCTranslator__lp_bind_lb_8_rb__731e=rb_intern("AmethystCTranslator__lp_bind_lb_8_rb__731e");
sy_AmethystCTranslator_addcallb_441b=rb_intern("AmethystCTranslator_addcallb_441b");
sy_AmethystCTranslator_addcallb_dcd7=rb_intern("AmethystCTranslator_addcallb_dcd7");
sy_AmethystCTranslator_ar_eq__ti_src_dot__efea=rb_intern("AmethystCTranslator_ar_eq__ti_src_dot__efea");
sy_AmethystCTranslator_bind_lb_0_rb__lt__cac1=rb_intern("AmethystCTranslator_bind_lb_0_rb__lt__cac1");
sy_AmethystCTranslator_bind_lb_0_rb__pl__40f3=rb_intern("AmethystCTranslator_bind_lb_0_rb__pl__40f3");
sy_AmethystCTranslator_bind_lb_0_rb__pl__c1a5=rb_intern("AmethystCTranslator_bind_lb_0_rb__pl__c1a5");
sy_AmethystCTranslator_bind_lb_10_rb__8094=rb_intern("AmethystCTranslator_bind_lb_10_rb__8094");
sy_AmethystCTranslator_bind_lb_1_rb__lt__2f50=rb_intern("AmethystCTranslator_bind_lb_1_rb__lt__2f50");
sy_AmethystCTranslator_bind_lb_2_rb__ti__e7b8=rb_intern("AmethystCTranslator_bind_lb_2_rb__ti__e7b8");
sy_AmethystCTranslator_bind_lb_39_rb__7e24=rb_intern("AmethystCTranslator_bind_lb_39_rb__7e24");
sy_AmethystCTranslator_bind_lb_3_rb_=rb_intern("AmethystCTranslator_bind_lb_3_rb_");
sy_AmethystCTranslator_bind_lb_59_rb__d84d=rb_intern("AmethystCTranslator_bind_lb_59_rb__d84d");
sy_AmethystCTranslator_bind_lb_7_rb__ti__a05a=rb_intern("AmethystCTranslator_bind_lb_7_rb__ti__a05a");
sy_AmethystCTranslator_bind_lb_9_rb__eq__1a30=rb_intern("AmethystCTranslator_bind_lb_9_rb__eq__1a30");
sy_AmethystCTranslator_bind_lb_9_rb__eq__1ce7=rb_intern("AmethystCTranslator_bind_lb_9_rb__eq__1ce7");
sy_AmethystCTranslator_bind_lb_9_rb__lt__4c8f=rb_intern("AmethystCTranslator_bind_lb_9_rb__lt__4c8f");
sy_AmethystCTranslator_bind_lb_9_rb__pl__69a7=rb_intern("AmethystCTranslator_bind_lb_9_rb__pl__69a7");
sy_AmethystCTranslator_bind_lb_9_rb__pl__9cee=rb_intern("AmethystCTranslator_bind_lb_9_rb__pl__9cee");
sy_AmethystCTranslator_bind_lb_9_rb__pl__a579=rb_intern("AmethystCTranslator_bind_lb_9_rb__pl__a579");
sy_AmethystCTranslator_bind_lb_9_rb__pl__bf3f=rb_intern("AmethystCTranslator_bind_lb_9_rb__pl__bf3f");
sy_AmethystCTranslator_h_eq__dq_VALUE_394b=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_394b");
sy_AmethystCTranslator_h_eq__dq_VALUE_c569=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_c569");
sy_AmethystCTranslator_i_pl__eq_1_e43a=rb_intern("AmethystCTranslator_i_pl__eq_1_e43a");
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
 rb_eval_string("testversionctranslator2('541fd651ec371c23d605e861e067c452')");}
