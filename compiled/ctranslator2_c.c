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
VALUE Amethyst_spaces(VALUE self );
VALUE switchhash_AmethystCTranslator_10;
VALUE switchhash_AmethystCTranslator_11;
VALUE switchhash_AmethystCTranslator_12;
VALUE switchhash_AmethystCTranslator_13;
VALUE switchhash_AmethystCTranslator_14;
VALUE switchhash_AmethystCTranslator_15;
VALUE switchhash_AmethystCTranslator_1;
VALUE switchhash_AmethystCTranslator_2;
VALUE switchhash_AmethystCTranslator_3;
VALUE switchhash_AmethystCTranslator_4;
VALUE switchhash_AmethystCTranslator_5;
VALUE switchhash_AmethystCTranslator_6;
VALUE switchhash_AmethystCTranslator_7;
VALUE switchhash_AmethystCTranslator_8;
VALUE switchhash_AmethystCTranslator_9;
static VALUE i_0;
static VALUE i_1;
static VALUE s__d41d;
static VALUE s_alt_3482;
static VALUE s_fail_e111;
static VALUE s_oldpass_6559;
static VALUE s_pass_1a1d;
static VALUE s_ptr_mi__gt_pos_db4c;
static VALUE s_success_260c;
static VALUE s_switch_lp__lp__a839;
static VALUE sy_AmethystCTranslator__append_lp__5e3c;
static VALUE sy_AmethystCTranslator__append_lp__81ec;
static VALUE sy_AmethystCTranslator__append_lp__cbd1;
static VALUE sy_AmethystCTranslator__append_lp__d113;
static VALUE sy_AmethystCTranslator__append_lp__d82a;
static VALUE sy_AmethystCTranslator__append_lp__e512;
static VALUE sy_AmethystCTranslator__append_lp__ffb2;
static VALUE sy_AmethystCTranslator__at_callbac_2d11;
static VALUE sy_AmethystCTranslator__at_callbac_e37c;
static VALUE sy_AmethystCTranslator__at_cuts_eq_tr_8a4f;
static VALUE sy_AmethystCTranslator__at_defmeth_456b;
static VALUE sy_AmethystCTranslator__at_defs_eq__lb__rb__188f;
static VALUE sy_AmethystCTranslator__at_faillab_1610;
static VALUE sy_AmethystCTranslator__at_faillab_37e7;
static VALUE sy_AmethystCTranslator__at_faillab_628e;
static VALUE sy_AmethystCTranslator__at_faillab_74ee;
static VALUE sy_AmethystCTranslator__at_faillab_8142;
static VALUE sy_AmethystCTranslator__at_faillab_9ef5;
static VALUE sy_AmethystCTranslator__at_faillab_e643;
static VALUE sy_AmethystCTranslator__at_grammar_1337;
static VALUE sy_AmethystCTranslator__at_header_eq__7aa9;
static VALUE sy_AmethystCTranslator__at_header_lt__09ca;
static VALUE sy_AmethystCTranslator__at_header_lt__eba3;
static VALUE sy_AmethystCTranslator__at_init_eq__lb__rb__47da;
static VALUE sy_AmethystCTranslator__at_init_sp__sp__lt__807c;
static VALUE sy_AmethystCTranslator__at_lambdas_ecda;
static VALUE sy_AmethystCTranslator__at_rulenam_9a09;
static VALUE sy_AmethystCTranslator__at_stops_eq_t_70dd;
static VALUE sy_AmethystCTranslator__dq_Amethys_8b00;
static VALUE sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf;
static VALUE sy_AmethystCTranslator__dq__at__sh__le_bind_f173;
static VALUE sy_AmethystCTranslator__dq__sh__le__at_gram_5de9;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__055d;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__15a1;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__5c45;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__931f;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__bb53;
static VALUE sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf;
static VALUE sy_AmethystCTranslator__dq__sp__sh__le_bind_7194;
static VALUE sy_AmethystCTranslator__dq_class_sp__sh__0b62;
static VALUE sy_AmethystCTranslator__dq_cstruct_c931;
static VALUE sy_AmethystCTranslator__dq_def_sp__sh__le_b_5b6b;
static VALUE sy_AmethystCTranslator__dq_goto_sp__sh__le__f772;
static VALUE sy_AmethystCTranslator__dq_if_sp__lp_str_5004;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_b_38ad;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_b_479f;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_b_edcd;
static VALUE sy_AmethystCTranslator__dq_it_eq_Qnil_8464;
static VALUE sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f;
static VALUE sy_AmethystCTranslator__dq_it_eq__sh__le_rb_79a3;
static VALUE sy_AmethystCTranslator__dq_switch_lp__0fc0;
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
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__lt__2f50;
static VALUE sy_AmethystCTranslator_bind_lb_22_rb__2594;
static VALUE sy_AmethystCTranslator_bind_lb_22_rb__336a;
static VALUE sy_AmethystCTranslator_bind_lb_22_rb__40fa;
static VALUE sy_AmethystCTranslator_bind_lb_22_rb__5156;
static VALUE sy_AmethystCTranslator_bind_lb_22_rb__59b2;
static VALUE sy_AmethystCTranslator_bind_lb_22_rb__6b71;
static VALUE sy_AmethystCTranslator_bind_lb_22_rb__8251;
static VALUE sy_AmethystCTranslator_bind_lb_26_rb__7728;
static VALUE sy_AmethystCTranslator_bind_lb_2_rb__ti__e7b8;
static VALUE sy_AmethystCTranslator_bind_lb_3_rb_;
static VALUE sy_AmethystCTranslator_bind_lb_47_rb__d405;
static VALUE sy_AmethystCTranslator_bind_lb_74_rb__945f;
static VALUE sy_AmethystCTranslator_bind_lb_97_rb__769d;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_ed4e;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_f86b;
static VALUE sy_AmethystCTranslator_label_lp__dq_a_f49c;
static VALUE sy_AmethystCTranslator_label_lp__dq_b_6df7;
static VALUE sy_AmethystCTranslator_label_lp__dq_o_c187;
static VALUE sy_AmethystCTranslator_label_lp__dq_r_95b2;
static VALUE sy_AmethystCTranslator_mktable_lp__ea79;
static VALUE sy_AmethystCTranslator_raise_sp__dq_T_0ab1;
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
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                     it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
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
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_74ee,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_f86b,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_Amethys_8b00,1,bind);  bind_aset(bind,5/*_result*/,it);

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
int oldpos1; while(1){oldpos1=ptr->pos; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,3/*c*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_3_rb__e49d,1,bind); FAILTEST(alt1_2);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_3_rb_,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__81ec,1,bind); 
;goto accept1;
alt1_2: ptr->pos=oldpos2;  it=AmethystCTranslator_trans(self ); FAILTEST(alt1_3); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__lt__2f50,1,bind); 
;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=rb_funcall(self,sy_AmethystCTranslator__lb_bind_lb_1_rb__8404,1,bind);  bind_aset(bind,7/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbcode(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystCTranslator__dq_class_sp__sh__0b62,1,bind);  bind_aset(bind,0/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_0_rb__lt__cac1,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_callbac_2d11,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,5/*k*/,it);
  it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*v*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto break1;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_AmethystCTranslator__dq_def_sp__sh__le_b_5b6b,1,bind);  bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__5e3c,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,3/*autovar*/); bind_aset(bind,8/*x*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_0_rb__pl__c1a5,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_0_rb__pl__40f3,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbtrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Args*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,4/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Global*/:; int oldpos3=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*name*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt3_2;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_AmethystCTranslator__dq__at__sh__le_bind_f173,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 3/*Key*/:; int oldpos4=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,6/*name*/,it);
  it=AmethystCTranslator_rbtrans(self ); FAILTEST(pass4); bind_aset(bind,8/*args*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt4_2;
                   success4: *ptr=oldpass4;
                it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_6_rb__79e0,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 4/*Lambda*/:; int oldpos5=ptr->pos;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCTranslator_addlambda(self ); FAILTEST(pass5); bind_aset(bind,10/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt5_2;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,10/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 5/*Local*/:; int oldpos6=ptr->pos;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_AmethystCTranslator_rbbget_lp_s_68a8,1,bind);  bind_aset(bind,12/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt6_2;
                   success6: *ptr=oldpass6;
                it=bind_aget(bind,12/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos6;  it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos6;goto fail;
 accept6:;
 break;
case 6/*Result*/:; int oldpos7=ptr->pos;
alt7_1:;  it=AmethystCore_anything(self ); FAILTEST(alt7_2); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf,1,bind);  bind_aset(bind,14/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt7_2;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,14/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept7;
alt7_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,2/*_result*/,it);

;goto accept7;
alt7_3: ptr->pos=oldpos7;goto fail;
 accept7:;
 break;
case 7/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbtrans2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos;   it=AmethystCTranslator_rbtrans(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__cbd1,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*it*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_2_rb__ti__e7b8,1,bind);  bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(5); bind_aset(bind,1/*word*/,a0);bind_aset(bind,2/*prc*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,0/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind);  it=bind_aget(bind,2/*prc*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(fail); bind_aset(bind,3/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_37e7,1,bind);  bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_trans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(103);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__d113,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,1/*autovar*/); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_addcallb_68bb,1,bind);  bind_aset(bind,4/*cbno*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq__sh__le_rb_79a3,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 1/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,7/*autovar*/,it);
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*autovar*/,it);
int oldpos2=ptr->pos;
alt1_1:;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass3; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass3);if (strncmp(ame_curstr2(ptr),"find",4)) goto pass3; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_AmethystCTranslator_raise_sp__dq_T_0ab1,1,bind);  bind_aset(bind,12/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,12/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos2;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass5; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass5; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass4;
                   success5: *ptr=oldpass5;
                it=rb_funcall(self,sy_AmethystCTranslator__dq_goto_sp__sh__le__f772,1,bind);  bind_aset(bind,15/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt1_3;
                   success4: *ptr=oldpass4;
                it=bind_aget(bind,15/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos2;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,16/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,16/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass7);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'd':;case 'f' ... UC(255):; goto pass7; break;
case 'e' ... 'e':;   it=AmethystCore_anything(self ); FAILTEST(pass7);if (strncmp(ame_curstr2(ptr),"of",2)) goto pass7; else ptr->pos+=2; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto pass6;
                   success7: *ptr=oldpass7;
                it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq_Qnil_8464,1,bind);  bind_aset(bind,18/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt1_4;
                   success6: *ptr=oldpass6;
                it=bind_aget(bind,18/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos2;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass8); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,20/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass9);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass9; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass9);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass9; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto pass8;
                   success9: *ptr=oldpass9;
                switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(pass8); bind_aset(bind,21/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass8; break;
}cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,21/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,22/*s*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto pass8;
                   success10: *ptr=oldpass10;
                it=rb_funcall(self,sy_AmethystCTranslator__dq_if_sp__lp_str_5004,1,bind);  bind_aset(bind,23/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt1_5;
                   success8: *ptr=oldpass8;
                it=bind_aget(bind,23/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept1;
alt1_5: ptr->pos=oldpos2;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass11); bind_aset(bind,25/*name*/,it);
it=i_0; bind_aset(bind,26/*ii*/,it);
it=rb_ary_new3(0); bind_aset(bind,27/*autovar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*CAct*/:case 4/*Cut*/:case 5/*Grammar*/:case 6/*Local*/:case 7/*Lookahead*/:case 8/*Many*/:case 9/*Memo*/:case 10/*Or*/:case 11/*Pass*/:case 12/*Rule*/:case 13/*Seq*/:case 14/*Stop*/:case 15/*Switch_Char*/:case 16/*Switch_Clas*/:;   it=AmethystCTranslator_trans(self ); FAILTEST(break2); bind_aset(bind,28/*aa*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_26_rb__7728,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__931f,1,bind);  bind_aset(bind,29/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__d82a,1,bind);  break;
case 17/*Object*/:; goto break2; break;
}  } break2: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,27/*autovar*/); bind_aset(bind,30/*args*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq__sp__sh__le_bind_7194,1,bind);  bind_aset(bind,31/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__bb53,1,bind);  bind_aset(bind,32/*_result*/,it);
it=bind_aget(bind,32/*_result*/); bind_aset(bind,33/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto alt1_6;
                   success11: *ptr=oldpass11;
                it=bind_aget(bind,33/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept1;
alt1_6: ptr->pos=oldpos2;goto fail;
 accept1:;
 break;
case 2/*Bind*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,34/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,34/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*CAct*/:case 4/*Cut*/:case 5/*Grammar*/:case 6/*Local*/:case 7/*Lookahead*/:case 8/*Many*/:case 9/*Memo*/:case 10/*Or*/:case 11/*Pass*/:case 12/*Rule*/:case 13/*Seq*/:case 14/*Stop*/:case 15/*Switch_Char*/:case 16/*Switch_Clas*/:;   it=AmethystCTranslator_trans(self ); FAILTEST(pass12); bind_aset(bind,35/*e*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__5c45,1,bind);  bind_aset(bind,36/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass12; break;
case 17/*Object*/:; goto pass12; break;
}
                   goto success12;
                   pass12: *ptr=oldpass12; goto fail;
                   success12: *ptr=oldpass12;
                it=bind_aget(bind,36/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 3/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,37/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,37/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_AmethystCTranslator_ar_eq__ti_src_dot__efea,1,bind);  bind_aset(bind,38/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13;
                   goto success13;
                   pass13: *ptr=oldpass13; goto fail;
                   success13: *ptr=oldpass13;
                it=bind_aget(bind,38/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 4/*Cut*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,39/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,39/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto fail;
                   success14: *ptr=oldpass14;
                it=rb_funcall(self,sy_AmethystCTranslator__at_cuts_eq_tr_8a4f,1,bind);  bind_aset(bind,6/*_result*/,it);
 break;
case 5/*Grammar*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,40/*autovar*/,it);
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,40/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator__at_grammar_1337,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_lambdas_ecda,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_defs_eq__lb__rb__188f,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_defmeth_456b,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_8142,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_callbac_e37c,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_mktable_lp__ea79,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_header_eq__7aa9,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_init_eq__lb__rb__47da,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_rule_5acf,1,bind);  bind_aset(bind,41/*autovar*/,it);
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,41/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass16); bind_aset(bind,42/*autovar*/,it);
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,42/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,43/*autovar*/,it);
int oldpos4; while(1){oldpos4=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*CAct*/:case 4/*Cut*/:case 5/*Grammar*/:case 6/*Local*/:case 7/*Lookahead*/:case 8/*Many*/:case 9/*Memo*/:case 10/*Or*/:case 11/*Pass*/:case 12/*Rule*/:case 13/*Seq*/:case 14/*Stop*/:case 15/*Switch_Char*/:case 16/*Switch_Clas*/:;   it=AmethystCTranslator_trans(self ); FAILTEST(break3); bind_aset(bind,44/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__e512,1,bind);  break;
case 17/*Object*/:; goto break3; break;
}  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos4; it=bind_aget(bind,43/*autovar*/); bind_aset(bind,45/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass17;
                   goto success17;
                   pass17: *ptr=oldpass17; goto pass16;
                   success17: *ptr=oldpass17;
                it=bind_aget(bind,45/*autovar*/); bind_aset(bind,46/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass16;
                   goto success16;
                   pass16: *ptr=oldpass16; goto pass15;
                   success16: *ptr=oldpass16;
                it=bind_aget(bind,46/*autovar*/); bind_aset(bind,47/*t*/,it);
  it=AmethystCTranslator_rbcode(self ); FAILTEST(pass15); bind_aset(bind,48/*rbcode*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf,1,bind);  bind_aset(bind,22/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_22_rb__6b71,1,bind);  bind_aset(bind,50/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
                   goto success15;
                   pass15: *ptr=oldpass15; goto fail;
                   success15: *ptr=oldpass15;
                it=bind_aget(bind,50/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 6/*Local*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,51/*autovar*/,it);
cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,51/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f,1,bind);  bind_aset(bind,52/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass18;
                   goto success18;
                   pass18: *ptr=oldpass18; goto fail;
                   success18: *ptr=oldpass18;
                it=bind_aget(bind,52/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 7/*Lookahead*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,53/*autovar*/,it);
cstruct oldpass19=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,53/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*CAct*/:case 4/*Cut*/:case 5/*Grammar*/:case 6/*Local*/:case 7/*Lookahead*/:case 8/*Many*/:case 9/*Memo*/:case 10/*Or*/:case 11/*Pass*/:case 12/*Rule*/:case 13/*Seq*/:case 14/*Stop*/:case 15/*Switch_Char*/:case 16/*Switch_Clas*/:; it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind);  bind_aset(bind,54/*accept*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_r_95b2,1,bind);  bind_aset(bind,55/*reject*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind);  bind_aset(bind,56/*oldpos*/,it);
it=bind_aget(bind,55/*reject*/); bind_aset(bind,57/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,58/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_9ef5,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(pass19); bind_aset(bind,47/*t*/,it);
 bind_aset(bind,59/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_628e,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_b_38ad,1,bind);  bind_aset(bind,60/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass19; break;
case 17/*Object*/:; it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_r_95b2,1,bind);  bind_aset(bind,55/*reject*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind); it=bind_aget(bind,55/*reject*/); bind_aset(bind,57/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_9ef5,1,bind); goto pass19; break;
}
                   goto success19;
                   pass19: *ptr=oldpass19; goto fail;
                   success19: *ptr=oldpass19;
                it=bind_aget(bind,60/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 8/*Many*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,61/*autovar*/,it);
it=bind_aget(bind,61/*autovar*/); bind_aset(bind,62/*autovar*/,it);
it=bind_aget(bind,62/*autovar*/); bind_aset(bind,63/*autovar*/,it);
int oldpos5=ptr->pos;
alt2_1:;it=bind_aget(bind,63/*autovar*/); bind_aset(bind,64/*autovar*/,it);
cstruct oldpass20=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,64/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(pass20); bind_aset(bind,65/*autovar*/,it);
cstruct oldpass21=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,65/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass21); bind_aset(bind,66/*autovar*/,it);
cstruct oldpass22=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,66/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass22);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass22; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass22);if (strncmp(ame_curstr2(ptr),"nything",7)) goto pass22; else ptr->pos+=7; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass22;
                   goto success22;
                   pass22: *ptr=oldpass22; goto pass21;
                   success22: *ptr=oldpass22;
                it=Qnil;if (ptr->pos<ptr->len) goto pass21;
                   goto success21;
                   pass21: *ptr=oldpass21; goto pass20;
                   success21: *ptr=oldpass21;
                it=Qnil;if (ptr->pos<ptr->len) goto pass20; break;
case 1/*Object*/:; goto pass20; break;
}
                   goto success20;
                   pass20: *ptr=oldpass20; goto alt2_2;
                   success20: *ptr=oldpass20;
                it=rb_obj_clone(s_ptr_mi__gt_pos_db4c); bind_aset(bind,6/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos5;it=bind_aget(bind,63/*autovar*/); bind_aset(bind,67/*autovar*/,it);
cstruct oldpass23=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,67/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_9,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*CAct*/:case 4/*Cut*/:case 5/*Grammar*/:case 6/*Local*/:case 7/*Lookahead*/:case 8/*Many*/:case 9/*Memo*/:case 10/*Or*/:case 11/*Pass*/:case 12/*Rule*/:case 13/*Seq*/:case 14/*Stop*/:case 15/*Switch_Char*/:case 16/*Switch_Clas*/:; it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_b_6df7,1,bind);  bind_aset(bind,68/*brk*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind);  bind_aset(bind,56/*oldpos*/,it);
it=bind_aget(bind,68/*brk*/); bind_aset(bind,57/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,58/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_9ef5,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(pass23); bind_aset(bind,47/*t*/,it);
 bind_aset(bind,59/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_628e,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_b_479f,1,bind);  bind_aset(bind,69/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass23; break;
case 17/*Object*/:; it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_b_6df7,1,bind);  bind_aset(bind,68/*brk*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind); it=bind_aget(bind,68/*brk*/); bind_aset(bind,57/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_9ef5,1,bind); goto pass23; break;
}
                   goto success23;
                   pass23: *ptr=oldpass23; goto alt2_3;
                   success23: *ptr=oldpass23;
                it=bind_aget(bind,69/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos5;goto fail;
 accept2:;
 break;
case 9/*Memo*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,70/*autovar*/,it);
cstruct oldpass24=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,70/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_AmethystCTranslator_raise_sp__dq_T_0ab1,1,bind);  bind_aset(bind,71/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass24;
                   goto success24;
                   pass24: *ptr=oldpass24; goto fail;
                   success24: *ptr=oldpass24;
                it=bind_aget(bind,71/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 10/*Or*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,72/*autovar*/,it);
cstruct oldpass25=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,72/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind);  bind_aset(bind,54/*accept*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind);  bind_aset(bind,56/*oldpos*/,it);
 it=rb_obj_clone(s_alt_3482); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass25); bind_aset(bind,73/*alt*/,it);
it=i_1; bind_aset(bind,74/*altno*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_b_edcd,1,bind);  bind_aset(bind,22/*s*/,it);
int oldpos6; while(1){oldpos6=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_10,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*CAct*/:case 4/*Cut*/:case 5/*Grammar*/:case 6/*Local*/:case 7/*Lookahead*/:case 8/*Many*/:case 9/*Memo*/:case 10/*Or*/:case 11/*Pass*/:case 12/*Rule*/:case 13/*Seq*/:case 14/*Stop*/:case 15/*Switch_Char*/:case 16/*Switch_Clas*/:; int oldpos7=ptr->pos;
   it=AmethystCore_anything(self ); FAILTEST(reject1); x=1; goto accept3;  reject1: x=0; accept3: it=Qnil; ptr->pos=oldpos7; if (x==0) goto break4;it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_74_rb__945f,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__15a1,1,bind);  bind_aset(bind,57/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,58/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_9ef5,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(break4); bind_aset(bind,6/*_result*/,it);
 bind_aset(bind,59/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_628e,1,bind);  bind_aset(bind,75/*_result*/,it);
it=bind_aget(bind,75/*_result*/); bind_aset(bind,47/*t*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_22_rb__40fa,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_22_rb__8251,1,bind);  break;
case 17/*Object*/:; int oldpos8=ptr->pos;
   it=AmethystCore_anything(self ); FAILTEST(reject2); x=1; goto accept4;  reject2: x=0; accept4: it=Qnil; ptr->pos=oldpos8; if (x==0) goto break4;it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_74_rb__945f,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__15a1,1,bind);  bind_aset(bind,57/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_9ef5,1,bind); goto break4; break;
}  } break4: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_22_rb__59b2,1,bind);  bind_aset(bind,76/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass25;
                   goto success25;
                   pass25: *ptr=oldpass25; goto fail;
                   success25: *ptr=oldpass25;
                it=bind_aget(bind,76/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 11/*Pass*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,77/*autovar*/,it);
cstruct oldpass26=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,77/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                    it=rb_obj_clone(s_pass_1a1d); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass26); bind_aset(bind,78/*pass*/,it);
 it=rb_obj_clone(s_oldpass_6559); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass26); bind_aset(bind,79/*oldpass*/,it);
 it=rb_obj_clone(s_success_260c); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass26); bind_aset(bind,80/*success*/,it);
it=bind_aget(bind,78/*pass*/); bind_aset(bind,57/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,58/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_9ef5,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_to_5e99,1,bind);  bind_aset(bind,81/*autovar*/,it);
cstruct oldpass27=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,81/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_11,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*CAct*/:case 4/*Cut*/:case 5/*Grammar*/:case 6/*Local*/:case 7/*Lookahead*/:case 8/*Many*/:case 9/*Memo*/:case 10/*Or*/:case 11/*Pass*/:case 12/*Rule*/:case 13/*Seq*/:case 14/*Stop*/:case 15/*Switch_Char*/:case 16/*Switch_Clas*/:;   it=AmethystCTranslator_trans(self ); FAILTEST(pass27); bind_aset(bind,82/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass27; break;
case 17/*Object*/:; goto pass27; break;
}
                   goto success27;
                   pass27: *ptr=oldpass27; goto pass26;
                   success27: *ptr=oldpass27;
                it=bind_aget(bind,82/*autovar*/); bind_aset(bind,83/*to*/,it);
 bind_aset(bind,59/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_628e,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_cstruct_c931,1,bind);  bind_aset(bind,84/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass26;
                   goto success26;
                   pass26: *ptr=oldpass26; goto fail;
                   success26: *ptr=oldpass26;
                it=bind_aget(bind,84/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 12/*Rule*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,85/*autovar*/,it);
cstruct oldpass28=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,85/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator_src_dot_name_80f3,1,bind);  bind_aset(bind,25/*name*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_rulenam_9a09,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_body_519e,1,bind);  bind_aset(bind,86/*autovar*/,it);
cstruct oldpass29=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,86/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_12,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*CAct*/:case 4/*Cut*/:case 5/*Grammar*/:case 6/*Local*/:case 7/*Lookahead*/:case 8/*Many*/:case 9/*Memo*/:case 10/*Or*/:case 11/*Pass*/:case 12/*Rule*/:case 13/*Seq*/:case 14/*Stop*/:case 15/*Switch_Char*/:case 16/*Switch_Clas*/:;   it=AmethystCTranslator_trans(self ); FAILTEST(pass29); bind_aset(bind,87/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass29; break;
case 17/*Object*/:; goto pass29; break;
}
                   goto success29;
                   pass29: *ptr=oldpass29; goto pass28;
                   success29: *ptr=oldpass29;
                it=bind_aget(bind,87/*autovar*/); bind_aset(bind,88/*body*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_ed4e,1,bind);  bind_aset(bind,89/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass28;
                   goto success28;
                   pass28: *ptr=oldpass28; goto fail;
                   success28: *ptr=oldpass28;
                it=bind_aget(bind,89/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 13/*Seq*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,90/*autovar*/,it);
cstruct oldpass30=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,90/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,91/*autovar*/,it);
int oldpos9; while(1){oldpos9=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_13,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*CAct*/:case 4/*Cut*/:case 5/*Grammar*/:case 6/*Local*/:case 7/*Lookahead*/:case 8/*Many*/:case 9/*Memo*/:case 10/*Or*/:case 11/*Pass*/:case 12/*Rule*/:case 13/*Seq*/:case 14/*Stop*/:case 15/*Switch_Char*/:case 16/*Switch_Clas*/:;   it=AmethystCTranslator_trans(self ); FAILTEST(break5); bind_aset(bind,92/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__ffb2,1,bind);  break;
case 17/*Object*/:; goto break5; break;
}  } break5: ame_setstop(self,Qnil); ptr->pos=oldpos9; it=bind_aget(bind,91/*autovar*/); bind_aset(bind,47/*t*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_47_rb__d405,1,bind);  bind_aset(bind,93/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass30;
                   goto success30;
                   pass30: *ptr=oldpass30; goto fail;
                   success30: *ptr=oldpass30;
                it=bind_aget(bind,93/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 14/*Stop*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,94/*autovar*/,it);
cstruct oldpass31=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,94/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=Qnil;if (ptr->pos<ptr->len) goto pass31;
                   goto success31;
                   pass31: *ptr=oldpass31; goto fail;
                   success31: *ptr=oldpass31;
                it=rb_funcall(self,sy_AmethystCTranslator__at_stops_eq_t_70dd,1,bind);  bind_aset(bind,6/*_result*/,it);
 break;
case 15/*Switch_Char*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,95/*autovar*/,it);
cstruct oldpass32=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,95/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_obj_clone(s_switch_lp__lp__a839); bind_aset(bind,22/*s*/,it);
int oldpos10; while(1){oldpos10=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,96/*autovar*/,it);
cstruct oldpass33=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,96/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass33); bind_aset(bind,97/*c*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_14,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*CAct*/:case 4/*Cut*/:case 5/*Grammar*/:case 6/*Local*/:case 7/*Lookahead*/:case 8/*Many*/:case 9/*Memo*/:case 10/*Or*/:case 11/*Pass*/:case 12/*Rule*/:case 13/*Seq*/:case 14/*Stop*/:case 15/*Switch_Char*/:case 16/*Switch_Clas*/:;   it=AmethystCTranslator_trans(self ); FAILTEST(pass33); bind_aset(bind,47/*t*/,it);
 break;
case 17/*Object*/:; goto pass33; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass33;
                   goto success33;
                   pass33: *ptr=oldpass33; goto break6;
                   success33: *ptr=oldpass33;
                it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_22_rb__2594,1,bind);   } break6: ame_setstop(self,Qnil); ptr->pos=oldpos10; it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_22_rb__5156,1,bind);  bind_aset(bind,98/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass32;
                   goto success32;
                   pass32: *ptr=oldpass32; goto fail;
                   success32: *ptr=oldpass32;
                it=bind_aget(bind,98/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 16/*Switch_Clas*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,99/*autovar*/,it);
cstruct oldpass34=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,99/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator__dq_switchh_f207,1,bind);  bind_aset(bind,100/*sh*/,it);
it=i_0; bind_aset(bind,26/*ii*/,it);
it=rb_obj_clone(s__d41d); bind_aset(bind,49/*init*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_header_lt__eba3,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_switch_lp__0fc0,1,bind);  bind_aset(bind,22/*s*/,it);
int oldpos11; while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,101/*autovar*/,it);
cstruct oldpass35=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,101/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass35); bind_aset(bind,97/*c*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_15,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*CAct*/:case 4/*Cut*/:case 5/*Grammar*/:case 6/*Local*/:case 7/*Lookahead*/:case 8/*Many*/:case 9/*Memo*/:case 10/*Or*/:case 11/*Pass*/:case 12/*Rule*/:case 13/*Seq*/:case 14/*Stop*/:case 15/*Switch_Char*/:case 16/*Switch_Clas*/:;   it=AmethystCTranslator_trans(self ); FAILTEST(pass35); bind_aset(bind,47/*t*/,it);
 break;
case 17/*Object*/:; goto pass35; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass35;
                   goto success35;
                   pass35: *ptr=oldpass35; goto break7;
                   success35: *ptr=oldpass35;
                it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_97_rb__769d,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_22_rb__336a,1,bind);   } break7: ame_setstop(self,Qnil); ptr->pos=oldpos11; it=rb_funcall(self,sy_AmethystCTranslator__at_init_sp__sp__lt__807c,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_22_rb__5156,1,bind);  bind_aset(bind,102/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass34;
                   goto success34;
                   pass34: *ptr=oldpass34; goto fail;
                   success34: *ptr=oldpass34;
                it=bind_aget(bind,102/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 17/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_ctranslator2_c(){ 
 cls_AmethystCTranslator=rb_define_class("AmethystCTranslator",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    i_0=rb_funcall(rb_str_new2("0"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),i_0);
i_1=rb_funcall(rb_str_new2("1"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),i_1);
s__d41d=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__d41d);
s_alt_3482=rb_str_new2("alt");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_alt_3482);
s_fail_e111=rb_str_new2("fail");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_fail_e111);
s_oldpass_6559=rb_str_new2("oldpass");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_oldpass_6559);
s_pass_1a1d=rb_str_new2("pass");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_pass_1a1d);
s_ptr_mi__gt_pos_db4c=rb_str_new2("ptr->pos=ptr->len;");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_ptr_mi__gt_pos_db4c);
s_success_260c=rb_str_new2("success");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_success_260c);
s_switch_lp__lp__a839=rb_str_new2("switch((unsigned char)*ame_curstr2(ptr)){");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_switch_lp__lp__a839);
switchhash_AmethystCTranslator_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_10);;
switchhash_AmethystCTranslator_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_11);;
switchhash_AmethystCTranslator_12=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_12);;
switchhash_AmethystCTranslator_13=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_13);;
switchhash_AmethystCTranslator_14=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_14);;
switchhash_AmethystCTranslator_15=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_15);;
switchhash_AmethystCTranslator_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Global\nnext h[k]=3 if k<=Key\nnext h[k]=4 if k<=Lambda\nnext h[k]=5 if k<=Local\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_1);;
switchhash_AmethystCTranslator_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_2);;
switchhash_AmethystCTranslator_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_3);;
switchhash_AmethystCTranslator_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_4);;
switchhash_AmethystCTranslator_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_5);;
switchhash_AmethystCTranslator_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_6);;
switchhash_AmethystCTranslator_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_7);;
switchhash_AmethystCTranslator_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_8);;
switchhash_AmethystCTranslator_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_9);;
sy_AmethystCTranslator__append_lp__5e3c=rb_intern("AmethystCTranslator__append_lp__5e3c");
sy_AmethystCTranslator__append_lp__81ec=rb_intern("AmethystCTranslator__append_lp__81ec");
sy_AmethystCTranslator__append_lp__cbd1=rb_intern("AmethystCTranslator__append_lp__cbd1");
sy_AmethystCTranslator__append_lp__d113=rb_intern("AmethystCTranslator__append_lp__d113");
sy_AmethystCTranslator__append_lp__d82a=rb_intern("AmethystCTranslator__append_lp__d82a");
sy_AmethystCTranslator__append_lp__e512=rb_intern("AmethystCTranslator__append_lp__e512");
sy_AmethystCTranslator__append_lp__ffb2=rb_intern("AmethystCTranslator__append_lp__ffb2");
sy_AmethystCTranslator__at_callbac_2d11=rb_intern("AmethystCTranslator__at_callbac_2d11");
sy_AmethystCTranslator__at_callbac_e37c=rb_intern("AmethystCTranslator__at_callbac_e37c");
sy_AmethystCTranslator__at_cuts_eq_tr_8a4f=rb_intern("AmethystCTranslator__at_cuts_eq_tr_8a4f");
sy_AmethystCTranslator__at_defmeth_456b=rb_intern("AmethystCTranslator__at_defmeth_456b");
sy_AmethystCTranslator__at_defs_eq__lb__rb__188f=rb_intern("AmethystCTranslator__at_defs_eq__lb__rb__188f");
sy_AmethystCTranslator__at_faillab_1610=rb_intern("AmethystCTranslator__at_faillab_1610");
sy_AmethystCTranslator__at_faillab_37e7=rb_intern("AmethystCTranslator__at_faillab_37e7");
sy_AmethystCTranslator__at_faillab_628e=rb_intern("AmethystCTranslator__at_faillab_628e");
sy_AmethystCTranslator__at_faillab_74ee=rb_intern("AmethystCTranslator__at_faillab_74ee");
sy_AmethystCTranslator__at_faillab_8142=rb_intern("AmethystCTranslator__at_faillab_8142");
sy_AmethystCTranslator__at_faillab_9ef5=rb_intern("AmethystCTranslator__at_faillab_9ef5");
sy_AmethystCTranslator__at_faillab_e643=rb_intern("AmethystCTranslator__at_faillab_e643");
sy_AmethystCTranslator__at_grammar_1337=rb_intern("AmethystCTranslator__at_grammar_1337");
sy_AmethystCTranslator__at_header_eq__7aa9=rb_intern("AmethystCTranslator__at_header_eq__7aa9");
sy_AmethystCTranslator__at_header_lt__09ca=rb_intern("AmethystCTranslator__at_header_lt__09ca");
sy_AmethystCTranslator__at_header_lt__eba3=rb_intern("AmethystCTranslator__at_header_lt__eba3");
sy_AmethystCTranslator__at_init_eq__lb__rb__47da=rb_intern("AmethystCTranslator__at_init_eq__lb__rb__47da");
sy_AmethystCTranslator__at_init_sp__sp__lt__807c=rb_intern("AmethystCTranslator__at_init_sp__sp__lt__807c");
sy_AmethystCTranslator__at_lambdas_ecda=rb_intern("AmethystCTranslator__at_lambdas_ecda");
sy_AmethystCTranslator__at_rulenam_9a09=rb_intern("AmethystCTranslator__at_rulenam_9a09");
sy_AmethystCTranslator__at_stops_eq_t_70dd=rb_intern("AmethystCTranslator__at_stops_eq_t_70dd");
sy_AmethystCTranslator__dq_Amethys_8b00=rb_intern("AmethystCTranslator__dq_Amethys_8b00");
sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf=rb_intern("AmethystCTranslator__dq_VALUE_sp_c_8bbf");
sy_AmethystCTranslator__dq__at__sh__le_bind_f173=rb_intern("AmethystCTranslator__dq__at__sh__le_bind_f173");
sy_AmethystCTranslator__dq__sh__le__at_gram_5de9=rb_intern("AmethystCTranslator__dq__sh__le__at_gram_5de9");
sy_AmethystCTranslator__dq__sh__le_bind_lb__055d=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__055d");
sy_AmethystCTranslator__dq__sh__le_bind_lb__15a1=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__15a1");
sy_AmethystCTranslator__dq__sh__le_bind_lb__5c45=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__5c45");
sy_AmethystCTranslator__dq__sh__le_bind_lb__931f=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__931f");
sy_AmethystCTranslator__dq__sh__le_bind_lb__bb53=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__bb53");
sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf=rb_intern("AmethystCTranslator__dq__sh__le_src_dot_n_9acf");
sy_AmethystCTranslator__dq__sp__sh__le_bind_7194=rb_intern("AmethystCTranslator__dq__sp__sh__le_bind_7194");
sy_AmethystCTranslator__dq_class_sp__sh__0b62=rb_intern("AmethystCTranslator__dq_class_sp__sh__0b62");
sy_AmethystCTranslator__dq_cstruct_c931=rb_intern("AmethystCTranslator__dq_cstruct_c931");
sy_AmethystCTranslator__dq_def_sp__sh__le_b_5b6b=rb_intern("AmethystCTranslator__dq_def_sp__sh__le_b_5b6b");
sy_AmethystCTranslator__dq_goto_sp__sh__le__f772=rb_intern("AmethystCTranslator__dq_goto_sp__sh__le__f772");
sy_AmethystCTranslator__dq_if_sp__lp_str_5004=rb_intern("AmethystCTranslator__dq_if_sp__lp_str_5004");
sy_AmethystCTranslator__dq_int_sp__sh__le_b_38ad=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_b_38ad");
sy_AmethystCTranslator__dq_int_sp__sh__le_b_479f=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_b_479f");
sy_AmethystCTranslator__dq_int_sp__sh__le_b_edcd=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_b_edcd");
sy_AmethystCTranslator__dq_it_eq_Qnil_8464=rb_intern("AmethystCTranslator__dq_it_eq_Qnil_8464");
sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f=rb_intern("AmethystCTranslator__dq_it_eq__sh__le_bg_281f");
sy_AmethystCTranslator__dq_it_eq__sh__le_rb_79a3=rb_intern("AmethystCTranslator__dq_it_eq__sh__le_rb_79a3");
sy_AmethystCTranslator__dq_switch_lp__0fc0=rb_intern("AmethystCTranslator__dq_switch_lp__0fc0");
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
sy_AmethystCTranslator_bind_lb_1_rb__lt__2f50=rb_intern("AmethystCTranslator_bind_lb_1_rb__lt__2f50");
sy_AmethystCTranslator_bind_lb_22_rb__2594=rb_intern("AmethystCTranslator_bind_lb_22_rb__2594");
sy_AmethystCTranslator_bind_lb_22_rb__336a=rb_intern("AmethystCTranslator_bind_lb_22_rb__336a");
sy_AmethystCTranslator_bind_lb_22_rb__40fa=rb_intern("AmethystCTranslator_bind_lb_22_rb__40fa");
sy_AmethystCTranslator_bind_lb_22_rb__5156=rb_intern("AmethystCTranslator_bind_lb_22_rb__5156");
sy_AmethystCTranslator_bind_lb_22_rb__59b2=rb_intern("AmethystCTranslator_bind_lb_22_rb__59b2");
sy_AmethystCTranslator_bind_lb_22_rb__6b71=rb_intern("AmethystCTranslator_bind_lb_22_rb__6b71");
sy_AmethystCTranslator_bind_lb_22_rb__8251=rb_intern("AmethystCTranslator_bind_lb_22_rb__8251");
sy_AmethystCTranslator_bind_lb_26_rb__7728=rb_intern("AmethystCTranslator_bind_lb_26_rb__7728");
sy_AmethystCTranslator_bind_lb_2_rb__ti__e7b8=rb_intern("AmethystCTranslator_bind_lb_2_rb__ti__e7b8");
sy_AmethystCTranslator_bind_lb_3_rb_=rb_intern("AmethystCTranslator_bind_lb_3_rb_");
sy_AmethystCTranslator_bind_lb_47_rb__d405=rb_intern("AmethystCTranslator_bind_lb_47_rb__d405");
sy_AmethystCTranslator_bind_lb_74_rb__945f=rb_intern("AmethystCTranslator_bind_lb_74_rb__945f");
sy_AmethystCTranslator_bind_lb_97_rb__769d=rb_intern("AmethystCTranslator_bind_lb_97_rb__769d");
sy_AmethystCTranslator_h_eq__dq_VALUE_ed4e=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_ed4e");
sy_AmethystCTranslator_h_eq__dq_VALUE_f86b=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_f86b");
sy_AmethystCTranslator_label_lp__dq_a_f49c=rb_intern("AmethystCTranslator_label_lp__dq_a_f49c");
sy_AmethystCTranslator_label_lp__dq_b_6df7=rb_intern("AmethystCTranslator_label_lp__dq_b_6df7");
sy_AmethystCTranslator_label_lp__dq_o_c187=rb_intern("AmethystCTranslator_label_lp__dq_o_c187");
sy_AmethystCTranslator_label_lp__dq_r_95b2=rb_intern("AmethystCTranslator_label_lp__dq_r_95b2");
sy_AmethystCTranslator_mktable_lp__ea79=rb_intern("AmethystCTranslator_mktable_lp__ea79");
sy_AmethystCTranslator_raise_sp__dq_T_0ab1=rb_intern("AmethystCTranslator_raise_sp__dq_T_0ab1");
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
                    rb_eval_string("testversionctranslator2('9520e1d3d7e1cf9f52ea74f7a96eabae')");}
