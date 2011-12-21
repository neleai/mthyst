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
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE switchhashAmethystCTranslator1;
VALUE switchhashAmethystCTranslator2;
static VALUE c_CAct;
static VALUE i_0;
static VALUE s__find;
static VALUE s_alt;
static VALUE s_ame_setcut_lp_s;
static VALUE s_ame_setstop_lp_;
static VALUE s_chr;
static VALUE s_fail;
static VALUE s_oldpass;
static VALUE s_pass;
static VALUE s_success;
static VALUE sy_AmethystCTranslator__append_lp_bind10;
static VALUE sy_AmethystCTranslator__append_lp_bind11;
static VALUE sy_AmethystCTranslator__append_lp_bind12;
static VALUE sy_AmethystCTranslator__append_lp_bind2;
static VALUE sy_AmethystCTranslator__append_lp_bind3;
static VALUE sy_AmethystCTranslator__append_lp_bind4;
static VALUE sy_AmethystCTranslator__append_lp_bind5;
static VALUE sy_AmethystCTranslator__append_lp_bind6;
static VALUE sy_AmethystCTranslator__append_lp_bind7;
static VALUE sy_AmethystCTranslator__append_lp_bind8;
static VALUE sy_AmethystCTranslator__append_lp_bind9;
static VALUE sy_AmethystCTranslator__append_lp_bind;
static VALUE sy_AmethystCTranslator__at_callbacks_dot_t;
static VALUE sy_AmethystCTranslator__at_callbacks_eq__le_;
static VALUE sy_AmethystCTranslator__at_defmethods_eq_;
static VALUE sy_AmethystCTranslator__at_defs_eq__lb__rb_;
static VALUE sy_AmethystCTranslator__at_defs_lt__lt_src_dot_d;
static VALUE sy_AmethystCTranslator__at_faillabel;
static VALUE sy_AmethystCTranslator__at_faillabel_eq__dq_;
static VALUE sy_AmethystCTranslator__at_faillabel_eq_b2;
static VALUE sy_AmethystCTranslator__at_faillabel_eq_b3;
static VALUE sy_AmethystCTranslator__at_faillabel_eq_b4;
static VALUE sy_AmethystCTranslator__at_faillabel_eq_b5;
static VALUE sy_AmethystCTranslator__at_faillabel_eq_b;
static VALUE sy_AmethystCTranslator__at_grammar_eq_src;
static VALUE sy_AmethystCTranslator__at_header_eq__lb__rb_;
static VALUE sy_AmethystCTranslator__at_header_lt__lt__dq_st;
static VALUE sy_AmethystCTranslator__at_header_lt__lt_src;
static VALUE sy_AmethystCTranslator__at_init_eq__lb__rb_;
static VALUE sy_AmethystCTranslator__at_init_lt__lt_src_dot_i;
static VALUE sy_AmethystCTranslator__at_lambdas_eq__lb__rb__sp_;
static VALUE sy_AmethystCTranslator__at_rulename_eq_bi;
static VALUE sy_AmethystCTranslator__dq_AmethystLam;
static VALUE sy_AmethystCTranslator__dq_VALUE_sp_cls__sh_;
static VALUE sy_AmethystCTranslator__dq__at__sh__le_bind_lb_12_rb_;
static VALUE sy_AmethystCTranslator__dq__sh__le__at_grammar_re_;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb_0_rb__re__sp_;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb_20_rb__re_;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb_50_rb__re_;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb_53_rb__re_;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb_57_rb__re_;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb_85_rb__re_;
static VALUE sy_AmethystCTranslator__dq__sh__le_src_dot_name_re_;
static VALUE sy_AmethystCTranslator__dq__sp__sh__le_bind_lb_52_rb_;
static VALUE sy_AmethystCTranslator__dq_class_sp__sh__le__at_gr;
static VALUE sy_AmethystCTranslator__dq_cstruct_sp__sh__le_b;
static VALUE sy_AmethystCTranslator__dq_def_sp__sh__le_bind_lb_;
static VALUE sy_AmethystCTranslator__dq_if_sp__lp_strncmp;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_bind_lb_2;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_bind_lb_;
static VALUE sy_AmethystCTranslator__dq_it_eq__sh__le_bget_lp_s;
static VALUE sy_AmethystCTranslator__dq_it_eq__sh__le_rbcall;
static VALUE sy_AmethystCTranslator__dq_unsigned_sp_ch;
static VALUE sy_AmethystCTranslator__lb_bind_lb_1_rb_;
static VALUE sy_AmethystCTranslator__lp_bind_lb_12_rb__eq__eq__dq_;
static VALUE sy_AmethystCTranslator__lp_bind_lb_4_rb__dot_is_;
static VALUE sy_AmethystCTranslator_addcallback2;
static VALUE sy_AmethystCTranslator_addcallback_lp_;
static VALUE sy_AmethystCTranslator_ar_eq__ti_src_dot_ccod;
static VALUE sy_AmethystCTranslator_bind_lb_0_rb__lt__lt__at_de;
static VALUE sy_AmethystCTranslator_bind_lb_0_rb__pl__eq__dq__bs_n;
static VALUE sy_AmethystCTranslator_bind_lb_0_rb__pl__eq_bin;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__lt__lt_bin;
static VALUE sy_AmethystCTranslator_bind_lb_20_rb__eq__dq__sh__le_;
static VALUE sy_AmethystCTranslator_bind_lb_20_rb__eq__dq_in;
static VALUE sy_AmethystCTranslator_bind_lb_20_rb__lt__lt__at_h;
static VALUE sy_AmethystCTranslator_bind_lb_20_rb__pl__dq__re__dq_;
static VALUE sy_AmethystCTranslator_bind_lb_20_rb__pl__eq_bi;
static VALUE sy_AmethystCTranslator_bind_lb_20_rb__pl__eq_ma;
static VALUE sy_AmethystCTranslator_bind_lb_2_rb__ti__dq__dq_;
static VALUE sy_AmethystCTranslator_bind_lb_30_rb__ti__dq__dq_;
static VALUE sy_AmethystCTranslator_bind_lb_48_rb__pl__eq_1;
static VALUE sy_AmethystCTranslator_bind_lb_86_rb__pl__eq_1;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_sp__sh__le__at_;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_sp__sh__le_b;
static VALUE sy_AmethystCTranslator_label_lp__dq_accep;
static VALUE sy_AmethystCTranslator_label_lp__dq_break;
static VALUE sy_AmethystCTranslator_label_lp__dq_oldpo;
static VALUE sy_AmethystCTranslator_label_lp__dq_rejec;
static VALUE sy_AmethystCTranslator_mktable_lp_src_dot_;
static VALUE sy_AmethystCTranslator_rbbget_lp_src_rp_;
static VALUE sy_AmethystCTranslator_src_dot_body;
static VALUE sy_AmethystCTranslator_src_dot_name;
static VALUE sy_AmethystCTranslator_src_dot_rules;
static VALUE sy_AmethystCTranslator_src_dot_to;
static VALUE sy_apply;
static VALUE sy_label;
VALUE AmethystCTranslator_add_c_global(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(3); bind_aset(bind,0/*name*/,a0);bind_aset(bind,1/*expr*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystCTranslator__at_header_lt__lt__dq_st,1,bind);  bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_addcallback(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(3); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass1); bind_aset(bind,0/*s*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_AmethystCTranslator_addcallback2,1,bind);  bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_addlambda(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le__at_grammar_re_,1,bind);  bind_aset(bind,0/*lambd*/,it);
it=rb_obj_clone(s_fail); bind_aset(bind,1/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel,1,bind);  bind_aset(bind,2/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel_eq_b3,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(fail); bind_aset(bind,3/*body*/,it);
 bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel_eq_b4,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_sp__sh__le_b,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_AmethystLam,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_failwrap(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb_0_rb__re__sp_,1,bind);  bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*ruby*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*c*/,it);
it=rb_ary_new3(0); bind_aset(bind,2/*init*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,4/*c*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_4_rb__dot_is_,1,bind); FAILTEST(alt1_2);it=bind_aget(bind,4/*c*/); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp_bind,1,bind); it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCTranslator_trans(self ); FAILTEST(alt1_3); bind_aset(bind,8/*it*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__lt__lt_bin,1,bind);  bind_aset(bind,7/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,sy_AmethystCTranslator__append_lp_bind2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,3/*autovar*/);it=rb_funcall(self,sy_AmethystCTranslator__lb_bind_lb_1_rb_,1,bind);  bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbcode(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystCTranslator__dq_class_sp__sh__le__at_gr,1,bind);  bind_aset(bind,0/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_0_rb__lt__lt__at_de,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_callbacks_dot_t,1,bind);  bind_aset(bind,1/*autovar*/,it);
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
it=rb_funcall(self,sy_AmethystCTranslator__dq_def_sp__sh__le_bind_lb_,1,bind);  bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp_bind2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,8/*x*/,it);
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
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_0_rb__pl__eq_bin,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_0_rb__pl__eq__dq__bs_n,1,bind);  bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbtrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(23);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashAmethystCTranslator2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,4/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass2); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,4/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,7/*autovar*/,it);
int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCTranslator_addlambda(self ); FAILTEST(pass3); bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_2;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,7/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto fail;
 accept3:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,10/*autovar*/,it);
int oldpos4=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,12/*name*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt4_2;
it=rb_funcall(self,sy_AmethystCTranslator__dq__at__sh__le_bind_lb_12_rb_,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,10/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos4); goto fail;
 accept4:;
 break;case 4:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,13/*autovar*/,it);
int oldpos5=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,13/*autovar*/); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,12/*name*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt5_2;
it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_12_rb__eq__eq__dq_,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,13/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos5); goto fail;
 accept5:;
 break;case 5:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,15/*autovar*/,it);
int oldpos6=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,15/*autovar*/); bind_aset(bind,16/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,16/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,17/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,18/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp_bind3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,17/*autovar*/);it=rb_funcall(self,sy_AmethystCTranslator_rbbget_lp_src_rp_,1,bind);  bind_aset(bind,19/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt6_2;
it=bind_aget(bind,19/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,15/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos6); goto fail;
 accept6:;
 break;case 6:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,20/*autovar*/,it);
int oldpos8=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,20/*autovar*/); bind_aset(bind,21/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,21/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_src_dot_name_re_,1,bind);  bind_aset(bind,22/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt7_2;
it=bind_aget(bind,22/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,20/*autovar*/); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos8); goto fail;
 accept7:;
 break;case 7:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*_result*/,it);
 break;}it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbtrans2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCTranslator_rbtrans(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp_bind4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*it*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_2_rb__ti__dq__dq_,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(5); bind_aset(bind,1/*word*/,a0);bind_aset(bind,2/*prc*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel,1,bind);  bind_aset(bind,0/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel_eq_b3,1,bind);  it=bind_aget(bind,2/*prc*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(fail); bind_aset(bind,3/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel_eq_b5,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_trans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(91);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashAmethystCTranslator1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp_bind5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_addcallback_lp_,1,bind);  bind_aset(bind,4/*cbno*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq__sh__le_rbcall,1,bind);  bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;case 10:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
  it=rb_obj_clone(s_pass); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass2); bind_aset(bind,8/*pass*/,it);
 it=rb_obj_clone(s_oldpass); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass2); bind_aset(bind,9/*oldpass*/,it);
 it=rb_obj_clone(s_success); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass2); bind_aset(bind,10/*success*/,it);
 it=rb_obj_clone(s_fail); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass2); bind_aset(bind,11/*fail*/,it);
it=bind_aget(bind,8/*pass*/); bind_aset(bind,12/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel,1,bind);  bind_aset(bind,13/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel_eq_b,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_to,1,bind);  bind_aset(bind,14/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,14/*autovar*/);ptr->len=1;
   it=AmethystCTranslator_trans(self ); FAILTEST(pass3); bind_aset(bind,15/*to*/,it);
 bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,17/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel_eq_b2,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_cstruct_sp__sh__le_b,1,bind);  bind_aset(bind,18/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto fail;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;case 11:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_20_rb__eq__dq__sh__le_,1,bind);  bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto fail;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;case 12:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,22/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,22/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_src_dot_name,1,bind);  bind_aset(bind,23/*name*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_rulename_eq_bi,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_body,1,bind);  bind_aset(bind,24/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,24/*autovar*/);ptr->len=1;
   it=AmethystCTranslator_trans(self ); FAILTEST(pass6); bind_aset(bind,25/*body*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto pass5;
it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_sp__sh__le__at_,1,bind);  bind_aset(bind,26/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto fail;
it=bind_aget(bind,26/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;case 13:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,27/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,27/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,28/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCTranslator_trans(self ); FAILTEST(break2); bind_aset(bind,29/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp_bind6,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,28/*autovar*/); bind_aset(bind,30/*t*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_30_rb__ti__dq__dq_,1,bind);  bind_aset(bind,31/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto fail;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;case 14:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,32/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,32/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto fail;
it=rb_obj_clone(s_ame_setstop_lp_); bind_aset(bind,6/*_result*/,it);
 break;case 15:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
  it=rb_obj_clone(s_chr); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass9); bind_aset(bind,34/*chr*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_defs_lt__lt_src_dot_d,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_header_lt__lt_src,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_init_lt__lt_src_dot_i,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_unsigned_sp_ch,1,bind);  bind_aset(bind,20/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,35/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,36/*autovar*/,it);
cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,36/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,37/*c*/,it);
  it=AmethystCTranslator_trans(self ); FAILTEST(pass10); bind_aset(bind,30/*t*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto break3;
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_20_rb__pl__eq_bi,1,bind);  bind_aset(bind,38/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp_bind7,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,35/*autovar*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_20_rb__pl__dq__re__dq_,1,bind);  bind_aset(bind,39/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto fail;
it=bind_aget(bind,39/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;case 16:;   it=Amethyst_fails(self ); FAILTEST(fail); break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,40/*autovar*/,it);
int oldpos4=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,40/*autovar*/); bind_aset(bind,41/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,41/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass11); bind_aset(bind,42/*autovar*/,it);
cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,42/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass12);if (strncmp(ame_curstr(self),"_find",5)) goto pass12; else ame_setpos(self,ame_getpos(self)+5);  it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto pass11;
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto alt1_2;
it=rb_obj_clone(s__find); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,40/*autovar*/); bind_aset(bind,43/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,43/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass13); bind_aset(bind,44/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,44/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass14);if (strncmp(ame_curstr(self),"_seq",4)) goto pass14; else ame_setpos(self,ame_getpos(self)+4);  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto pass13;
 it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass13); bind_aset(bind,45/*autovar*/,it);
cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,45/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass15); bind_aset(bind,20/*s*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto pass13;
it=rb_funcall(self,sy_AmethystCTranslator__dq_if_sp__lp_strncmp,1,bind);  bind_aset(bind,46/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto alt1_3;
it=bind_aget(bind,46/*autovar*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,40/*autovar*/); bind_aset(bind,47/*autovar*/,it);
cstruct oldpass16=*ptr; int fail16=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,47/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass16); bind_aset(bind,23/*name*/,it);
it=i_0; bind_aset(bind,48/*ii*/,it);
it=rb_ary_new3(0); bind_aset(bind,49/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCTranslator_trans(self ); FAILTEST(break4); bind_aset(bind,50/*aa*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_48_rb__pl__eq_1,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb_50_rb__re_,1,bind);  bind_aset(bind,51/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp_bind8,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,49/*autovar*/); bind_aset(bind,52/*args*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq__sp__sh__le_bind_lb_52_rb_,1,bind);  bind_aset(bind,53/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb_53_rb__re_,1,bind);  bind_aset(bind,54/*_result*/,it);
it=bind_aget(bind,54/*_result*/); bind_aset(bind,55/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass16);
	goto success16;
	pass16: fail16=1;
	success16: *ptr=oldpass16;
	if(fail16) goto alt1_4;
it=bind_aget(bind,55/*autovar*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos4); goto fail;
 accept1:;
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,56/*autovar*/,it);
cstruct oldpass17=*ptr; int fail17=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,56/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCTranslator_trans(self ); FAILTEST(pass17); bind_aset(bind,57/*e*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb_57_rb__re_,1,bind);  bind_aset(bind,58/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass17);
	goto success17;
	pass17: fail17=1;
	success17: *ptr=oldpass17;
	if(fail17) goto fail;
it=bind_aget(bind,58/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,59/*autovar*/,it);
cstruct oldpass18=*ptr; int fail18=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,59/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,60/*autovar*/,it);
int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,61/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp_bind9,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,60/*autovar*/);it=rb_funcall(self,sy_AmethystCTranslator_ar_eq__ti_src_dot_ccod,1,bind);  bind_aset(bind,62/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass18);
	goto success18;
	pass18: fail18=1;
	success18: *ptr=oldpass18;
	if(fail18) goto fail;
it=bind_aget(bind,62/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;case 4:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,63/*autovar*/,it);
cstruct oldpass19=*ptr; int fail19=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,63/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_eof(self ); FAILTEST(pass19);
	goto success19;
	pass19: fail19=1;
	success19: *ptr=oldpass19;
	if(fail19) goto fail;
it=rb_obj_clone(s_ame_setcut_lp_s); bind_aset(bind,6/*_result*/,it);
 break;case 5:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,64/*autovar*/,it);
cstruct oldpass20=*ptr; int fail20=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,64/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator__at_grammar_eq_src,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_lambdas_eq__lb__rb__sp_,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_defs_eq__lb__rb_,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_defmethods_eq_,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel_eq__dq_,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_callbacks_eq__le_,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_mktable_lp_src_dot_,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_header_eq__lb__rb_,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_init_eq__lb__rb_,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_rules,1,bind);  bind_aset(bind,65/*autovar*/,it);
cstruct oldpass21=*ptr; int fail21=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,65/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass21); bind_aset(bind,66/*autovar*/,it);
cstruct oldpass22=*ptr; int fail22=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,66/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,67/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCTranslator_trans(self ); FAILTEST(break6); bind_aset(bind,68/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp_bind10,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,67/*autovar*/); bind_aset(bind,69/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass22);
	goto success22;
	pass22: fail22=1;
	success22: *ptr=oldpass22;
	if(fail22) goto pass21;
it=bind_aget(bind,69/*autovar*/); bind_aset(bind,30/*t*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass21);
	goto success21;
	pass21: fail21=1;
	success21: *ptr=oldpass21;
	if(fail21) goto pass20;
  it=AmethystCTranslator_rbcode(self ); FAILTEST(pass20); bind_aset(bind,70/*rbcode*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq_VALUE_sp_cls__sh_,1,bind);  bind_aset(bind,20/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_20_rb__lt__lt__at_h,1,bind);  bind_aset(bind,71/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass20);
	goto success20;
	pass20: fail20=1;
	success20: *ptr=oldpass20;
	if(fail20) goto fail;
it=bind_aget(bind,71/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;case 6:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,72/*autovar*/,it);
cstruct oldpass23=*ptr; int fail23=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,72/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,73/*autovar*/,it);
int oldpos8; while(1){oldpos8=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,74/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp_bind11,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=bind_aget(bind,73/*autovar*/);it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq__sh__le_bget_lp_s,1,bind);  bind_aset(bind,75/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass23);
	goto success23;
	pass23: fail23=1;
	success23: *ptr=oldpass23;
	if(fail23) goto fail;
it=bind_aget(bind,75/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;case 7:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,76/*autovar*/,it);
cstruct oldpass24=*ptr; int fail24=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,76/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_accep,1,bind);  bind_aset(bind,77/*accept*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_rejec,1,bind);  bind_aset(bind,78/*reject*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_oldpo,1,bind);  bind_aset(bind,79/*oldpos*/,it);
it=bind_aget(bind,78/*reject*/); bind_aset(bind,12/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel,1,bind);  bind_aset(bind,13/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel_eq_b,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(pass24); bind_aset(bind,30/*t*/,it);
 bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,17/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel_eq_b2,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_bind_lb_,1,bind);  bind_aset(bind,80/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass24);
	goto success24;
	pass24: fail24=1;
	success24: *ptr=oldpass24;
	if(fail24) goto fail;
it=bind_aget(bind,80/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;case 8:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,81/*autovar*/,it);
cstruct oldpass25=*ptr; int fail25=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,81/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_break,1,bind);  bind_aset(bind,82/*brk*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_oldpo,1,bind);  bind_aset(bind,79/*oldpos*/,it);
it=bind_aget(bind,82/*brk*/); bind_aset(bind,12/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel,1,bind);  bind_aset(bind,13/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel_eq_b,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(pass25); bind_aset(bind,30/*t*/,it);
 bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,17/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel_eq_b2,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_bind_lb_2,1,bind);  bind_aset(bind,83/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass25);
	goto success25;
	pass25: fail25=1;
	success25: *ptr=oldpass25;
	if(fail25) goto fail;
it=bind_aget(bind,83/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;case 9:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,84/*autovar*/,it);
cstruct oldpass26=*ptr; int fail26=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,84/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_accep,1,bind);  bind_aset(bind,77/*accept*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel,1,bind);  bind_aset(bind,11/*fail*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_oldpo,1,bind);  bind_aset(bind,79/*oldpos*/,it);
 it=rb_obj_clone(s_alt); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass26); bind_aset(bind,85/*alt*/,it);
it=i_0; bind_aset(bind,86/*altno*/,it);
it=rb_ary_new3(0); bind_aset(bind,87/*autovar*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self); int oldpos10=ame_getpos(self);
   it=AmethystCore_anything(self ); FAILTEST(reject1); x=1; goto accept2;  reject1: x=0; accept2: it=Qnil; ame_setpos(self,oldpos10); if (x==0) goto break8;it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_86_rb__pl__eq_1,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb_85_rb__re_,1,bind);  bind_aset(bind,12/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel,1,bind);  bind_aset(bind,13/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel_eq_b,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(break8); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,17/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillabel_eq_b2,1,bind);  bind_aset(bind,88/*_result*/,it);
it=bind_aget(bind,88/*_result*/); bind_aset(bind,89/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp_bind12,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=bind_aget(bind,87/*autovar*/); bind_aset(bind,30/*t*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_20_rb__eq__dq_in,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_20_rb__pl__eq_ma,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb_20_rb__re_,1,bind);  bind_aset(bind,90/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass26);
	goto success26;
	pass26: fail26=1;
	success26: *ptr=oldpass26;
	if(fail26) goto fail;
it=bind_aget(bind,90/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;}it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
void Init_ctranslator2_c(){ 
 cls_AmethystCTranslator=rb_define_class("AmethystCTranslator",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
i_0=rb_funcall(rb_str_new2("0"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),i_0);
s__find=rb_str_new2("_find");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__find);
s_alt=rb_str_new2("alt");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_alt);
s_ame_setcut_lp_s=rb_str_new2("ame_setcut(self,Qtrue);");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_ame_setcut_lp_s);
s_ame_setstop_lp_=rb_str_new2("ame_setstop(self,Qtrue);");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_ame_setstop_lp_);
s_chr=rb_str_new2("chr");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_chr);
s_fail=rb_str_new2("fail");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_fail);
s_oldpass=rb_str_new2("oldpass");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_oldpass);
s_pass=rb_str_new2("pass");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_pass);
s_success=rb_str_new2("success");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_success);
switchhashAmethystCTranslator1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Or\nnext h[k]=10 if k<=Pass\nnext h[k]=11 if k<=Result\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch\nnext h[k]=16 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashAmethystCTranslator1);
switchhashAmethystCTranslator2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Args\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Exp\nnext h[k]=3 if k<=Global\nnext h[k]=4 if k<=Key\nnext h[k]=5 if k<=Local\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashAmethystCTranslator2);
sy_AmethystCTranslator__append_lp_bind10=rb_intern("AmethystCTranslator__append_lp_bind10");
sy_AmethystCTranslator__append_lp_bind11=rb_intern("AmethystCTranslator__append_lp_bind11");
sy_AmethystCTranslator__append_lp_bind12=rb_intern("AmethystCTranslator__append_lp_bind12");
sy_AmethystCTranslator__append_lp_bind2=rb_intern("AmethystCTranslator__append_lp_bind2");
sy_AmethystCTranslator__append_lp_bind3=rb_intern("AmethystCTranslator__append_lp_bind3");
sy_AmethystCTranslator__append_lp_bind4=rb_intern("AmethystCTranslator__append_lp_bind4");
sy_AmethystCTranslator__append_lp_bind5=rb_intern("AmethystCTranslator__append_lp_bind5");
sy_AmethystCTranslator__append_lp_bind6=rb_intern("AmethystCTranslator__append_lp_bind6");
sy_AmethystCTranslator__append_lp_bind7=rb_intern("AmethystCTranslator__append_lp_bind7");
sy_AmethystCTranslator__append_lp_bind8=rb_intern("AmethystCTranslator__append_lp_bind8");
sy_AmethystCTranslator__append_lp_bind9=rb_intern("AmethystCTranslator__append_lp_bind9");
sy_AmethystCTranslator__append_lp_bind=rb_intern("AmethystCTranslator__append_lp_bind");
sy_AmethystCTranslator__at_callbacks_dot_t=rb_intern("AmethystCTranslator__at_callbacks_dot_t");
sy_AmethystCTranslator__at_callbacks_eq__le_=rb_intern("AmethystCTranslator__at_callbacks_eq__le_");
sy_AmethystCTranslator__at_defmethods_eq_=rb_intern("AmethystCTranslator__at_defmethods_eq_");
sy_AmethystCTranslator__at_defs_eq__lb__rb_=rb_intern("AmethystCTranslator__at_defs_eq__lb__rb_");
sy_AmethystCTranslator__at_defs_lt__lt_src_dot_d=rb_intern("AmethystCTranslator__at_defs_lt__lt_src_dot_d");
sy_AmethystCTranslator__at_faillabel=rb_intern("AmethystCTranslator__at_faillabel");
sy_AmethystCTranslator__at_faillabel_eq__dq_=rb_intern("AmethystCTranslator__at_faillabel_eq__dq_");
sy_AmethystCTranslator__at_faillabel_eq_b2=rb_intern("AmethystCTranslator__at_faillabel_eq_b2");
sy_AmethystCTranslator__at_faillabel_eq_b3=rb_intern("AmethystCTranslator__at_faillabel_eq_b3");
sy_AmethystCTranslator__at_faillabel_eq_b4=rb_intern("AmethystCTranslator__at_faillabel_eq_b4");
sy_AmethystCTranslator__at_faillabel_eq_b5=rb_intern("AmethystCTranslator__at_faillabel_eq_b5");
sy_AmethystCTranslator__at_faillabel_eq_b=rb_intern("AmethystCTranslator__at_faillabel_eq_b");
sy_AmethystCTranslator__at_grammar_eq_src=rb_intern("AmethystCTranslator__at_grammar_eq_src");
sy_AmethystCTranslator__at_header_eq__lb__rb_=rb_intern("AmethystCTranslator__at_header_eq__lb__rb_");
sy_AmethystCTranslator__at_header_lt__lt__dq_st=rb_intern("AmethystCTranslator__at_header_lt__lt__dq_st");
sy_AmethystCTranslator__at_header_lt__lt_src=rb_intern("AmethystCTranslator__at_header_lt__lt_src");
sy_AmethystCTranslator__at_init_eq__lb__rb_=rb_intern("AmethystCTranslator__at_init_eq__lb__rb_");
sy_AmethystCTranslator__at_init_lt__lt_src_dot_i=rb_intern("AmethystCTranslator__at_init_lt__lt_src_dot_i");
sy_AmethystCTranslator__at_lambdas_eq__lb__rb__sp_=rb_intern("AmethystCTranslator__at_lambdas_eq__lb__rb__sp_");
sy_AmethystCTranslator__at_rulename_eq_bi=rb_intern("AmethystCTranslator__at_rulename_eq_bi");
sy_AmethystCTranslator__dq_AmethystLam=rb_intern("AmethystCTranslator__dq_AmethystLam");
sy_AmethystCTranslator__dq_VALUE_sp_cls__sh_=rb_intern("AmethystCTranslator__dq_VALUE_sp_cls__sh_");
sy_AmethystCTranslator__dq__at__sh__le_bind_lb_12_rb_=rb_intern("AmethystCTranslator__dq__at__sh__le_bind_lb_12_rb_");
sy_AmethystCTranslator__dq__sh__le__at_grammar_re_=rb_intern("AmethystCTranslator__dq__sh__le__at_grammar_re_");
sy_AmethystCTranslator__dq__sh__le_bind_lb_0_rb__re__sp_=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb_0_rb__re__sp_");
sy_AmethystCTranslator__dq__sh__le_bind_lb_20_rb__re_=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb_20_rb__re_");
sy_AmethystCTranslator__dq__sh__le_bind_lb_50_rb__re_=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb_50_rb__re_");
sy_AmethystCTranslator__dq__sh__le_bind_lb_53_rb__re_=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb_53_rb__re_");
sy_AmethystCTranslator__dq__sh__le_bind_lb_57_rb__re_=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb_57_rb__re_");
sy_AmethystCTranslator__dq__sh__le_bind_lb_85_rb__re_=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb_85_rb__re_");
sy_AmethystCTranslator__dq__sh__le_src_dot_name_re_=rb_intern("AmethystCTranslator__dq__sh__le_src_dot_name_re_");
sy_AmethystCTranslator__dq__sp__sh__le_bind_lb_52_rb_=rb_intern("AmethystCTranslator__dq__sp__sh__le_bind_lb_52_rb_");
sy_AmethystCTranslator__dq_class_sp__sh__le__at_gr=rb_intern("AmethystCTranslator__dq_class_sp__sh__le__at_gr");
sy_AmethystCTranslator__dq_cstruct_sp__sh__le_b=rb_intern("AmethystCTranslator__dq_cstruct_sp__sh__le_b");
sy_AmethystCTranslator__dq_def_sp__sh__le_bind_lb_=rb_intern("AmethystCTranslator__dq_def_sp__sh__le_bind_lb_");
sy_AmethystCTranslator__dq_if_sp__lp_strncmp=rb_intern("AmethystCTranslator__dq_if_sp__lp_strncmp");
sy_AmethystCTranslator__dq_int_sp__sh__le_bind_lb_2=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_bind_lb_2");
sy_AmethystCTranslator__dq_int_sp__sh__le_bind_lb_=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_bind_lb_");
sy_AmethystCTranslator__dq_it_eq__sh__le_bget_lp_s=rb_intern("AmethystCTranslator__dq_it_eq__sh__le_bget_lp_s");
sy_AmethystCTranslator__dq_it_eq__sh__le_rbcall=rb_intern("AmethystCTranslator__dq_it_eq__sh__le_rbcall");
sy_AmethystCTranslator__dq_unsigned_sp_ch=rb_intern("AmethystCTranslator__dq_unsigned_sp_ch");
sy_AmethystCTranslator__lb_bind_lb_1_rb_=rb_intern("AmethystCTranslator__lb_bind_lb_1_rb_");
sy_AmethystCTranslator__lp_bind_lb_12_rb__eq__eq__dq_=rb_intern("AmethystCTranslator__lp_bind_lb_12_rb__eq__eq__dq_");
sy_AmethystCTranslator__lp_bind_lb_4_rb__dot_is_=rb_intern("AmethystCTranslator__lp_bind_lb_4_rb__dot_is_");
sy_AmethystCTranslator_addcallback2=rb_intern("AmethystCTranslator_addcallback2");
sy_AmethystCTranslator_addcallback_lp_=rb_intern("AmethystCTranslator_addcallback_lp_");
sy_AmethystCTranslator_ar_eq__ti_src_dot_ccod=rb_intern("AmethystCTranslator_ar_eq__ti_src_dot_ccod");
sy_AmethystCTranslator_bind_lb_0_rb__lt__lt__at_de=rb_intern("AmethystCTranslator_bind_lb_0_rb__lt__lt__at_de");
sy_AmethystCTranslator_bind_lb_0_rb__pl__eq__dq__bs_n=rb_intern("AmethystCTranslator_bind_lb_0_rb__pl__eq__dq__bs_n");
sy_AmethystCTranslator_bind_lb_0_rb__pl__eq_bin=rb_intern("AmethystCTranslator_bind_lb_0_rb__pl__eq_bin");
sy_AmethystCTranslator_bind_lb_1_rb__lt__lt_bin=rb_intern("AmethystCTranslator_bind_lb_1_rb__lt__lt_bin");
sy_AmethystCTranslator_bind_lb_20_rb__eq__dq__sh__le_=rb_intern("AmethystCTranslator_bind_lb_20_rb__eq__dq__sh__le_");
sy_AmethystCTranslator_bind_lb_20_rb__eq__dq_in=rb_intern("AmethystCTranslator_bind_lb_20_rb__eq__dq_in");
sy_AmethystCTranslator_bind_lb_20_rb__lt__lt__at_h=rb_intern("AmethystCTranslator_bind_lb_20_rb__lt__lt__at_h");
sy_AmethystCTranslator_bind_lb_20_rb__pl__dq__re__dq_=rb_intern("AmethystCTranslator_bind_lb_20_rb__pl__dq__re__dq_");
sy_AmethystCTranslator_bind_lb_20_rb__pl__eq_bi=rb_intern("AmethystCTranslator_bind_lb_20_rb__pl__eq_bi");
sy_AmethystCTranslator_bind_lb_20_rb__pl__eq_ma=rb_intern("AmethystCTranslator_bind_lb_20_rb__pl__eq_ma");
sy_AmethystCTranslator_bind_lb_2_rb__ti__dq__dq_=rb_intern("AmethystCTranslator_bind_lb_2_rb__ti__dq__dq_");
sy_AmethystCTranslator_bind_lb_30_rb__ti__dq__dq_=rb_intern("AmethystCTranslator_bind_lb_30_rb__ti__dq__dq_");
sy_AmethystCTranslator_bind_lb_48_rb__pl__eq_1=rb_intern("AmethystCTranslator_bind_lb_48_rb__pl__eq_1");
sy_AmethystCTranslator_bind_lb_86_rb__pl__eq_1=rb_intern("AmethystCTranslator_bind_lb_86_rb__pl__eq_1");
sy_AmethystCTranslator_h_eq__dq_VALUE_sp__sh__le__at_=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_sp__sh__le__at_");
sy_AmethystCTranslator_h_eq__dq_VALUE_sp__sh__le_b=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_sp__sh__le_b");
sy_AmethystCTranslator_label_lp__dq_accep=rb_intern("AmethystCTranslator_label_lp__dq_accep");
sy_AmethystCTranslator_label_lp__dq_break=rb_intern("AmethystCTranslator_label_lp__dq_break");
sy_AmethystCTranslator_label_lp__dq_oldpo=rb_intern("AmethystCTranslator_label_lp__dq_oldpo");
sy_AmethystCTranslator_label_lp__dq_rejec=rb_intern("AmethystCTranslator_label_lp__dq_rejec");
sy_AmethystCTranslator_mktable_lp_src_dot_=rb_intern("AmethystCTranslator_mktable_lp_src_dot_");
sy_AmethystCTranslator_rbbget_lp_src_rp_=rb_intern("AmethystCTranslator_rbbget_lp_src_rp_");
sy_AmethystCTranslator_src_dot_body=rb_intern("AmethystCTranslator_src_dot_body");
sy_AmethystCTranslator_src_dot_name=rb_intern("AmethystCTranslator_src_dot_name");
sy_AmethystCTranslator_src_dot_rules=rb_intern("AmethystCTranslator_src_dot_rules");
sy_AmethystCTranslator_src_dot_to=rb_intern("AmethystCTranslator_src_dot_to");
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
 rb_eval_string("testversionctranslator2('d05858c8634b2d6f28c3c715920564d8')");}
