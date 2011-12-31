#include "cthyst.h"
VALUE cls_AmethystParser;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE AmethystCore_anything(VALUE self );
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser___args(VALUE self ,VALUE,VALUE);
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_argsOpt(VALUE self );
VALUE AmethystParser_call(VALUE self );
VALUE AmethystParser_choice(VALUE self );
VALUE AmethystParser_className(VALUE self );
VALUE AmethystParser_collect(VALUE self ,VALUE a0);
VALUE AmethystParser_eChar(VALUE self );
VALUE AmethystParser_expression(VALUE self );
VALUE AmethystParser_grammar(VALUE self );
VALUE AmethystParser_host_expr(VALUE self );
VALUE AmethystParser_igrammar(VALUE self );
VALUE AmethystParser_key(VALUE self );
VALUE AmethystParser_line_host_expr(VALUE self );
VALUE AmethystParser_name(VALUE self );
VALUE AmethystParser_nr(VALUE self );
VALUE AmethystParser_postfixed(VALUE self );
VALUE AmethystParser_prefixed(VALUE self );
VALUE AmethystParser_procargs(VALUE self );
VALUE AmethystParser_procargs2(VALUE self );
VALUE AmethystParser_rubyarg(VALUE self );
VALUE AmethystParser_rule(VALUE self );
VALUE AmethystParser_ruleargs(VALUE self );
VALUE AmethystParser_sequence(VALUE self );
VALUE AmethystParser_term(VALUE self );
VALUE Amethyst__(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_endline(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_number(VALUE self );
VALUE Amethyst_regch(VALUE self ,VALUE);
VALUE Amethyst_spaces(VALUE self );
VALUE Amethyst_token(VALUE self ,VALUE);
VALUE switchhashAmethystParser1;
static VALUE c_Args;
static VALUE s_2;
static VALUE s_;
static VALUE s__bs__dq__3bd8;
static VALUE s__co__at__4bf0;
static VALUE s__dot__dot__58b9;
static VALUE s__dot__dot__dot__2f43;
static VALUE s__gt__cedf;
static VALUE s__lb__8154;
static VALUE s__lb__rb__d751;
static VALUE s__le__f95b;
static VALUE s__lp__84c4;
static VALUE s__lt__524a;
static VALUE s__qu__3590;
static VALUE s__rb__0fbd;
static VALUE s__re__cbb1;
static VALUE s__rp__9371;
static VALUE s__td__4c76;
static VALUE sy_AmethystParser_Act_lb_Args_245f;
static VALUE sy_AmethystParser_Act_lb_bind_3e5d;
static VALUE sy_AmethystParser_Apply_lb__dq_a_1437;
static VALUE sy_AmethystParser_Apply_lb__dq_c_6e5e;
static VALUE sy_AmethystParser_Apply_lb__dq_m_9e45;
static VALUE sy_AmethystParser_Apply_lb__dq_r_7fae;
static VALUE sy_AmethystParser_Apply_lb__dq_s_59f4;
static VALUE sy_AmethystParser_Apply_lb__dq_t_bf73;
static VALUE sy_AmethystParser_Apply_lb__lb_b_9fd2;
static VALUE sy_AmethystParser_Apply_lb_bi_999a;
static VALUE sy_AmethystParser_Args_lb__le__co_a_37e6;
static VALUE sy_AmethystParser_Args_lb__le__co_a_cb1b;
static VALUE sy_AmethystParser_Args_lb__le__co_a_f34c;
static VALUE sy_AmethystParser_Comment_lb__cc4d;
static VALUE sy_AmethystParser_Enter_lb_Ap_64c7;
static VALUE sy_AmethystParser_Global_lb_b_8edb;
static VALUE sy_AmethystParser_Grammar_dot__80c6;
static VALUE sy_AmethystParser_Key_lb_bind_20b7;
static VALUE sy_AmethystParser_Lambda_lb___9c37;
static VALUE sy_AmethystParser_Lookahea_d7b5;
static VALUE sy_AmethystParser_Many_lb_bin_33ac;
static VALUE sy_AmethystParser_Nested_lb_b_9cc8;
static VALUE sy_AmethystParser_Or_dot_creat_67f0;
static VALUE sy_AmethystParser_Or_lb_bind_lb__cb4a;
static VALUE sy_AmethystParser_Pass_lb_bin_2967;
static VALUE sy_AmethystParser_Pred_lb_bin_0c20;
static VALUE sy_AmethystParser_Result_lb__le__5876;
static VALUE sy_AmethystParser_Rule_dot_cre_e3af;
static VALUE sy_AmethystParser_Seq_dot_crea_abce;
static VALUE sy_AmethystParser_Seq_lb_Cut_lb__3505;
static VALUE sy_AmethystParser_Seq_lb__Bin_6d20;
static VALUE sy_AmethystParser_Strin_lb_co_0638;
static VALUE sy_AmethystParser__Bind_lp_bi_3fe9;
static VALUE sy_AmethystParser__Local_lp_b_cc09;
static VALUE sy_AmethystParser__append_lp__01d0;
static VALUE sy_AmethystParser__append_lp__0605;
static VALUE sy_AmethystParser__append_lp__0e08;
static VALUE sy_AmethystParser__append_lp__3aef;
static VALUE sy_AmethystParser__append_lp__40ba;
static VALUE sy_AmethystParser__append_lp__473a;
static VALUE sy_AmethystParser__append_lp__4de3;
static VALUE sy_AmethystParser__append_lp__66a2;
static VALUE sy_AmethystParser__append_lp__6f56;
static VALUE sy_AmethystParser__append_lp__8061;
static VALUE sy_AmethystParser__append_lp__80de;
static VALUE sy_AmethystParser__append_lp__81ec;
static VALUE sy_AmethystParser__append_lp__835a;
static VALUE sy_AmethystParser__append_lp__9ca5;
static VALUE sy_AmethystParser__append_lp__b2a5;
static VALUE sy_AmethystParser__append_lp__be4f;
static VALUE sy_AmethystParser__append_lp__cbd1;
static VALUE sy_AmethystParser__append_lp__d113;
static VALUE sy_AmethystParser__at_ary_eq__lb__rb_;
static VALUE sy_AmethystParser__at_ary_ff69;
static VALUE sy_AmethystParser__at_ary_lt__lt_Ar_59e3;
static VALUE sy_AmethystParser__at_bnding_7d3c;
static VALUE sy_AmethystParser__at_locals_dot__bdc6;
static VALUE sy_AmethystParser__at_locals_eq__94df;
static VALUE sy_AmethystParser__at_tmp_lt__lt_bi_2afb;
static VALUE sy_AmethystParser__body_lp_bi_152d;
static VALUE sy_AmethystParser__di__lb_;
static VALUE sy_AmethystParser__di__lb_A_mi_Z_rb__di__05b6;
static VALUE sy_AmethystParser__di__lb__a_mi_zA_mi__6e11;
static VALUE sy_AmethystParser__di__lb__a_mi_zA_mi__d9bf;
static VALUE sy_AmethystParser__di__lb__do__dot__co__rb__di__68eb;
static VALUE sy_AmethystParser__di__lb__dot__co__rb__di__8a62;
static VALUE sy_AmethystParser__di__lb__pl__ti__rb__di__c64d;
static VALUE sy_AmethystParser__dq__bs__bs__sh__le_bin_f4bd;
static VALUE sy_AmethystParser__dq__le__dq__pl_bind_eece;
static VALUE sy_AmethystParser__dq__sh__dq__b65f;
static VALUE sy_AmethystParser__lb__rb_;
static VALUE sy_AmethystParser__lp_bind_lb_0_rb__418b;
static VALUE sy_AmethystParser__lp_bind_lb_5_rb__7170;
static VALUE sy_AmethystParser__qu__sh__qu__pl__qu__le__qu__b26e;
static VALUE sy_AmethystParser_a_eq_autova_7996;
static VALUE sy_AmethystParser_a_eq_autova_91af;
static VALUE sy_AmethystParser_bind_lb_0_rb_;
static VALUE sy_AmethystParser_bind_lb_0_rb__eq__5e66;
static VALUE sy_AmethystParser_bind_lb_0_rb__sp__f854;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__e879;
static VALUE sy_AmethystParser_bind_lb_1_rb__eq__4ab4;
static VALUE sy_AmethystParser_bind_lb_2_rb_;
static VALUE sy_AmethystParser_bind_lb_3_rb__eq__507c;
static VALUE sy_AmethystParser_bind_lb_4_rb_;
static VALUE sy_AmethystParser_bind_lb_4_rb__dot__e4b4;
static VALUE sy_AmethystParser_bind_lb_4_rb__pl__13b0;
static VALUE sy_AmethystParser_bind_lb_5_rb_;
static VALUE sy_AmethystParser_bind_lb_5_rb__dot__028b;
static VALUE sy_AmethystParser_bind_lb_6_rb_;
static VALUE sy_AmethystParser_bind_lb_7_rb_;
static VALUE sy_AmethystParser_bind_lb_9_rb__pl__82ef;
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(7); bind_aset(bind,0/*o*/,a0);bind_aset(bind,5/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*o*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail);it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*r*/,it);
it=bind_aget(bind,5/*c*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(4); bind_aset(bind,0/*o*/,a0);bind_aset(bind,1/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=bind_aget(bind,0/*o*/); arg0=it;it=bind_aget(bind,1/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(fail); bind_aset(bind,2/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_f34c,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(15); bind_aset(bind,2/*o*/,a0);bind_aset(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*c*/); bind_aset(bind,1/*c*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,3/*o*/,it);
it=bind_aget(bind,3/*o*/); bind_aset(bind,4/*s*/,it);
 it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail);it=rb_ary_new3(0); bind_aset(bind,5/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__6f56,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,5/*autovar*/); bind_aset(bind,7/*r*/,it);
it=bind_aget(bind,1/*c*/); bind_aset(bind,4/*s*/,it);
 it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_7_rb_,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_9_rb__pl__82ef,1,bind);  bind_aset(bind,10/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,10/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystParser_procargs(self ); FAILTEST(pass2); bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_argsOpt(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=Amethyst__(self ); FAILTEST(alt2_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt2_2); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
if (strncmp(ame_curstr(self),"(",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1);  it=Amethyst_spaces(self ); FAILTEST(alt1_2);it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*r*/,it);
if (strncmp(ame_curstr(self),")",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_funcall(self,sy_AmethystParser_bind_lb_2_rb_,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__pl__13b0,1,bind);  bind_aset(bind,5/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystParser_procargs(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/); bind_aset(bind,10/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_ary_new3(0); bind_aset(bind,10/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,10/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_call(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_className(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*klas*/,it);
if (strncmp(ame_curstr(self),"::",2)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+2);  it=AmethystParser_name(self ); FAILTEST(alt2_2); bind_aset(bind,4/*name*/,it);
  it=AmethystParser_argsOpt(self ); FAILTEST(alt2_2); bind_aset(bind,5/*arg*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__lb_b_9fd2,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*klas*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_c_6e5e,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_3); bind_aset(bind,4/*name*/,it);
  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_3); bind_aset(bind,5/*arg*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb_bi_999a,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_choice(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*f*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_sequence(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_obj_clone(s_); arg0=it; it=Amethyst_token(self ,arg0); FAILTEST(break1);  it=AmethystParser_sequence(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb_,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_AmethystParser__lb__rb_,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*ary*/,it);
it=rb_funcall(self,sy_AmethystParser_Or_dot_creat_67f0,1,bind);  bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
 it=rb_funcall(self,sy_AmethystParser__di__lb_A_mi_Z_rb__di__05b6,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);  it=rb_funcall(self,sy_AmethystParser__di__lb__a_mi_zA_mi__6e11,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,5/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb__dot__028b,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*ors*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystParser_a_eq_autova_91af,1,bind);  bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_eChar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(91):;case UC(93) ... UC(255):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,0/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__qu__pl__qu__le__qu__b26e,1,bind);  bind_aset(bind,1/*o*/,it);
 it=bind_aget(bind,1/*o*/); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2); bind_aset(bind,2/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_cb1b,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__lp_bind_lb_5_rb__7170,1,bind); FAILTEST(alt1_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC(92) ... UC(92):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"\\",1)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__lp_bind_lb_5_rb__7170,1,bind); FAILTEST(alt2_2);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__dq__bs__bs__sh__le_bin_f4bd,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,0/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__qu__pl__qu__le__qu__b26e,1,bind);  bind_aset(bind,1/*o*/,it);
 it=bind_aget(bind,1/*o*/); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt2_3); bind_aset(bind,2/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_cb1b,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,5/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__lp_bind_lb_5_rb__7170,1,bind); FAILTEST(alt2_4);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;}it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystParser_choice(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Amethyst_spaces(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),"amethyst",8)) goto fail; else ame_setpos(self,ame_getpos(self)+8);  it=Amethyst_spaces(self ); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail); bind_aset(bind,0/*name*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2);if (strncmp(ame_curstr(self),"<",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1);  it=Amethyst_spaces(self ); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2); bind_aset(bind,1/*parent*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__4ab4,1,bind);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
  it=Amethyst_spaces(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),"{",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rule(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*rules*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),"}",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);it=rb_funcall(self,sy_AmethystParser_Grammar_dot__80c6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_host_expr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

if (strncmp(ame_curstr(self),"{",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);  it=Amethyst_spaces(self ); FAILTEST(fail);it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*r*/,it);
if (strncmp(ame_curstr(self),"}",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);it=rb_funcall(self,sy_AmethystParser_bind_lb_2_rb_,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_Args_245f,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(96):;case UC(98) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt1_2); break;case UC(97) ... UC(97):; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 if (strncmp(ame_curstr(self),"amethyst",8)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+8);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt2_2); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_2;
 accept2:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(0) ... UC(96):;case UC(98) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break2); break;case UC(97) ... UC(97):; int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 if (strncmp(ame_curstr(self),"amethyst",8)) goto alt3_2; else ame_setpos(self,ame_getpos(self)+8);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt3_2); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break2;
 accept3:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__8061,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__dot__e4b4,1,bind);  bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_grammar(self ); FAILTEST(alt1_3); bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,sy_AmethystParser__append_lp__81ec,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,6/*a*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_6_rb_,1,bind);  bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_key(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"@",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1);int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=AmethystParser_className(self ); FAILTEST(alt2_2); bind_aset(bind,0/*name*/,it);
it=rb_funcall(self,sy_AmethystParser_Result_lb__le__5876,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=AmethystParser_name(self ); FAILTEST(alt2_3); bind_aset(bind,0/*name*/,it);
  it=AmethystParser_argsOpt(self ); FAILTEST(alt2_3); bind_aset(bind,2/*arg*/,it);
it=rb_funcall(self,sy_AmethystParser_Key_lb_bind_20b7,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"@@",2)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+2);  it=AmethystParser_name(self ); FAILTEST(alt1_3); bind_aset(bind,0/*name*/,it);
it=rb_funcall(self,sy_AmethystParser_Global_lb_b_8edb,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_line_host_expr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

if (strncmp(ame_curstr(self),"->",2)) goto fail; else ame_setpos(self,ame_getpos(self)+2);it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_endline(self ); FAILTEST(alt1_2);ame_setcut(self,Qtrue); bind_aset(bind,1/*autovar*/,it);
ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,1/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser__dq__le__dq__pl_bind_eece,1,bind);  bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,3/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystParser_host_expr(self ); FAILTEST(pass2); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
 it=rb_funcall(self,sy_AmethystParser__di__lb__a_mi_zA_mi__d9bf,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);  it=rb_funcall(self,sy_AmethystParser__di__lb__a_mi_zA_mi__6e11,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,5/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb__dot__028b,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_2);  it=Amethyst_spaces(self ); FAILTEST(alt1_2);if (strncmp(ame_curstr(self),"=",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_postfixed(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystParser_term(self ); FAILTEST(fail); bind_aset(bind,0/*from*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst__(self ); FAILTEST(alt1_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2); 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3); 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(57):;case UC(59) ... UC(60):;case UC(62) ... UC(62):;case UC(64) ... UC(90):;case UC(92) ... UC(255):;  it=rb_funcall(self,sy_AmethystParser__di__lb__pl__ti__rb__di__c64d,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(break1); bind_aset(bind,1/*one*/,it);
it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_33ac,1,bind);  bind_aset(bind,0/*from*/,it);
 break;case UC(58) ... UC(58):; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_funcall(self,sy_AmethystParser__di__lb__pl__ti__rb__di__c64d,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,1/*one*/,it);
it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_33ac,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 if (strncmp(ame_curstr(self),":",1)) goto alt2_3; else ame_setpos(self,ame_getpos(self)+1);int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
 int oldpos5=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
   it=AmethystParser_key(self ); FAILTEST(alt4_2); bind_aset(bind,2/*name*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
   it=AmethystParser_name(self ); FAILTEST(alt4_3); bind_aset(bind,2/*name*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos5); goto alt3_2;
 accept4:;
unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(0) ... UC(90):;case UC(92) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt3_2); bind_aset(bind,3/*append*/,it);
 break;case UC(91) ... UC(91):; int oldpos6=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
 if (strncmp(ame_curstr(self),"[]",2)) goto alt5_2; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__lb__rb__d751); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,3/*append*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
   it=Amethyst_empty(self ); FAILTEST(alt5_3); bind_aset(bind,3/*append*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos6); goto alt3_2;
 accept5:;
 break;}it=rb_funcall(self,sy_AmethystParser__Bind_lp_bi_3fe9,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
   it=AmethystParser_host_expr(self ); FAILTEST(alt3_3); bind_aset(bind,5/*e*/,it);
it=rb_funcall(self,sy_AmethystParser_Seq_lb__Bin_6d20,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_3;
 accept3:;
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
 break;case UC(61) ... UC(61):; int oldpos7=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 if (strncmp(ame_curstr(self),"=>",2)) goto alt6_2; else ame_setpos(self,ame_getpos(self)+2);  it=AmethystParser_term(self ); FAILTEST(alt6_2); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Pass_lb_bin_2967,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_funcall(self,sy_AmethystParser__di__lb__pl__ti__rb__di__c64d,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt6_3); bind_aset(bind,1/*one*/,it);
it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_33ac,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;case UC(63) ... UC(63):; int oldpos8=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_funcall(self,sy_AmethystParser__di__lb__pl__ti__rb__di__c64d,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt7_2); bind_aset(bind,1/*one*/,it);
it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_33ac,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 if (strncmp(ame_curstr(self),"?",1)) goto alt7_3; else ame_setpos(self,ame_getpos(self)+1);it=rb_funcall(self,sy_AmethystParser_Or_lb_bind_lb__cb4a,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos8); goto break1;
 accept7:;
 break;case UC(91) ... UC(91):; int oldpos9=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 if (strncmp(ame_curstr(self),"[",1)) goto alt8_2; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_expression(self ); FAILTEST(alt8_2); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__eq__5e66,1,bind);   it=Amethyst_spaces(self ); FAILTEST(alt8_2);if (strncmp(ame_curstr(self),"]",1)) goto alt8_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb_,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_funcall(self,sy_AmethystParser__di__lb__pl__ti__rb__di__c64d,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt8_3); bind_aset(bind,1/*one*/,it);
it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_33ac,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos9); goto break1;
 accept8:;
 break;} if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*from*/); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Amethyst_spaces(self ); FAILTEST(fail);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(37):;case UC(39) ... UC(125):;case UC(127) ... UC(255):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr2=*ame_curstr(self);  switch(chr2){default:;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=AmethystParser_host_expr(self ); FAILTEST(alt2_2); bind_aset(bind,0/*expr*/,it);
it=rb_funcall(self,sy_AmethystParser_Pred_lb_bin_0c20,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=AmethystParser_prefixed(self ); FAILTEST(alt2_3); bind_aset(bind,3/*m*/,it);
it=rb_funcall(self,sy_AmethystParser_Lookahea_d7b5,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_postfixed(self ); FAILTEST(alt1_3); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC(38) ... UC(38):;case UC(126) ... UC(126):; int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(126) ... UC(126):; if (strncmp(ame_curstr(self),"~",1)) goto alt3_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__td__4c76); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,1/*neg*/,it);
 break;case UC(38) ... UC(38):; if (strncmp(ame_curstr(self),"&",1)) goto alt3_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s_2); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,1/*neg*/,it);
 break;default:;   it=Amethyst_fails(self ); FAILTEST(alt3_2); break;}int oldpos4=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
   it=AmethystParser_host_expr(self ); FAILTEST(alt4_2); bind_aset(bind,0/*expr*/,it);
it=rb_funcall(self,sy_AmethystParser_Pred_lb_bin_0c20,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
   it=AmethystParser_prefixed(self ); FAILTEST(alt4_3); bind_aset(bind,3/*m*/,it);
it=rb_funcall(self,sy_AmethystParser_Lookahea_d7b5,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos4); goto alt3_2;
 accept4:;
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_postfixed(self ); FAILTEST(alt3_3); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto fail;
 accept3:;
 break;}it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystParser__at_ary_eq__lb__rb_,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__lp_bind_lb_0_rb__418b,1,bind); FAILTEST(alt1_2);it=rb_funcall(self,sy_AmethystParser__at_ary_lt__lt_Ar_59e3,1,bind);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_procargs2(self ); FAILTEST(alt1_3); 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_AmethystParser__at_ary_ff69,1,bind);  bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashAmethystParser1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_procargs2(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*autovar*/); bind_aset(bind,6/*a*/,it);
it=rb_funcall(self,sy_AmethystParser__at_tmp_lt__lt_bi_2afb,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,6/*a*/,it);
it=rb_funcall(self,sy_AmethystParser__at_tmp_lt__lt_bi_2afb,1,bind);  bind_aset(bind,5/*_result*/,it);
 break;}it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(21);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*n*/,it);
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(33):;case UC(35) ... UC(38):;case UC(40) ... UC(45):;case UC(47) ... UC(95):;case UC(97) ... UC(255):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_3); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_4); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
   it=Amethyst_spaces(self ); FAILTEST(alt2_2);if (strncmp(ame_curstr(self),":@",2)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
  it=rb_funcall(self,sy_AmethystParser__di__lb__do__dot__co__rb__di__68eb,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt2_3); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__be4f,1,bind);  
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
   it=Amethyst_empty(self ); FAILTEST(alt2_4); 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto alt1_5;
 accept2:;
int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
   it=Amethyst__(self ); FAILTEST(alt3_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt3_2); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto alt1_5;
 accept3:;
  it=AmethystParser_name(self ); FAILTEST(alt1_5); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__40ba,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt1_6); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,sy_AmethystParser__di__lb_,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt1_7); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_7:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC(34) ... UC(34):; int oldpos4=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt4_2); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt4_3); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_3: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt4_4); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_4: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"\"",1)) goto alt4_5; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__66a2,1,bind); it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(0) ... UC(33):;case UC(35) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break1); bind_aset(bind,14/*autovar*/,it);
 break;case UC(34) ... UC(34):; int oldpos6=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 if (strncmp(ame_curstr(self),"\"",1)) goto alt5_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/);ame_setcut(self,Qtrue); bind_aset(bind,14/*autovar*/,it);
ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt5_3); bind_aset(bind,14/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos6); goto break1;
 accept5:;
 break;}it=rb_funcall(self,sy_AmethystParser__append_lp__473a,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,13/*autovar*/); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__80de,1,bind); it=rb_funcall(self,sy_AmethystParser_Strin_lb_co_0638,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_5: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos7=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt4_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt6_2);if (strncmp(ame_curstr(self),":@",2)) goto alt6_2; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt4_6;}
  it=rb_funcall(self,sy_AmethystParser__di__lb__do__dot__co__rb__di__68eb,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt6_3); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__be4f,1,bind);  
ame_setcut(self,Qnil);goto accept6;
alt6_3: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt4_6;}
   it=Amethyst_empty(self ); FAILTEST(alt6_4); 
ame_setcut(self,Qnil);goto accept6;
  alt6_4:  ame_setpos(self,oldpos7); goto alt4_6;
 accept6:;
int oldpos8=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt4_6;}
   it=Amethyst__(self ); FAILTEST(alt7_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt7_2); 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt4_6;}
   it=Amethyst_empty(self ); FAILTEST(alt7_3); 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos8); goto alt4_6;
 accept7:;
  it=AmethystParser_name(self ); FAILTEST(alt4_6); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__40ba,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_6: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt4_7); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_7: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,sy_AmethystParser__di__lb_,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt4_8); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_8:  ame_setpos(self,oldpos4); goto fail;
 accept4:;
 break;case UC(39) ... UC(39):; int oldpos9=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt8_2); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt8_3); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_3: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt8_4); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_4: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"'",1)) goto alt8_5; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__qu__3590); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0605,1,bind); it=rb_ary_new3(0); bind_aset(bind,17/*autovar*/,it);
int oldpos10; while(1){oldpos10=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(0) ... UC(38):;case UC(40) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break2); bind_aset(bind,18/*autovar*/,it);
 break;case UC(39) ... UC(39):; int oldpos11=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 if (strncmp(ame_curstr(self),"'",1)) goto alt9_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__qu__3590); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/);ame_setcut(self,Qtrue); bind_aset(bind,18/*autovar*/,it);
ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt9_3); bind_aset(bind,18/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos11); goto break2;
 accept9:;
 break;}it=rb_funcall(self,sy_AmethystParser__append_lp__835a,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos10=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos10); it=bind_aget(bind,17/*autovar*/); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0e08,1,bind); it=rb_funcall(self,sy_AmethystParser_Strin_lb_co_0638,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_5: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos12=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt8_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt10_2);if (strncmp(ame_curstr(self),":@",2)) goto alt10_2; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt8_6;}
  it=rb_funcall(self,sy_AmethystParser__di__lb__do__dot__co__rb__di__68eb,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt10_3); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__be4f,1,bind);  
ame_setcut(self,Qnil);goto accept10;
alt10_3: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt8_6;}
   it=Amethyst_empty(self ); FAILTEST(alt10_4); 
ame_setcut(self,Qnil);goto accept10;
  alt10_4:  ame_setpos(self,oldpos12); goto alt8_6;
 accept10:;
int oldpos13=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt8_6;}
   it=Amethyst__(self ); FAILTEST(alt11_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt11_2); 
ame_setcut(self,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt8_6;}
   it=Amethyst_empty(self ); FAILTEST(alt11_3); 
ame_setcut(self,Qnil);goto accept11;
  alt11_3:  ame_setpos(self,oldpos13); goto alt8_6;
 accept11:;
  it=AmethystParser_name(self ); FAILTEST(alt8_6); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__40ba,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_6: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt8_7); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_7: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,sy_AmethystParser__di__lb_,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt8_8); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt8_8:  ame_setpos(self,oldpos9); goto fail;
 accept8:;
 break;case UC(46) ... UC(46):; int oldpos14=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt12_2); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
alt12_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt12_3); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
alt12_3: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt12_4); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
alt12_4: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"...",3)) goto alt12_5; else ame_setpos(self,ame_getpos(self)+3);it=rb_obj_clone(s__dot__dot__dot__2f43); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
alt12_5: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"..",2)) goto alt12_6; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__dot__dot__58b9); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
alt12_6: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos15=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt12_7;}
   it=Amethyst_spaces(self ); FAILTEST(alt13_2);if (strncmp(ame_curstr(self),":@",2)) goto alt13_2; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept13;
alt13_2: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt12_7;}
  it=rb_funcall(self,sy_AmethystParser__di__lb__do__dot__co__rb__di__68eb,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt13_3); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__be4f,1,bind);  
ame_setcut(self,Qnil);goto accept13;
alt13_3: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt12_7;}
   it=Amethyst_empty(self ); FAILTEST(alt13_4); 
ame_setcut(self,Qnil);goto accept13;
  alt13_4:  ame_setpos(self,oldpos15); goto alt12_7;
 accept13:;
int oldpos16=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt12_7;}
   it=Amethyst__(self ); FAILTEST(alt14_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt14_2); 
ame_setcut(self,Qnil);goto accept14;
alt14_2: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt12_7;}
   it=Amethyst_empty(self ); FAILTEST(alt14_3); 
ame_setcut(self,Qnil);goto accept14;
  alt14_3:  ame_setpos(self,oldpos16); goto alt12_7;
 accept14:;
  it=AmethystParser_name(self ); FAILTEST(alt12_7); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__40ba,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
alt12_7: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt12_8); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
alt12_8: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,sy_AmethystParser__di__lb_,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt12_9); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept12;
  alt12_9:  ame_setpos(self,oldpos14); goto fail;
 accept12:;
 break;case UC(96) ... UC(96):; int oldpos17=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"`",1)) goto alt15_2; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_expression(self ); FAILTEST(alt15_2); bind_aset(bind,20/*e*/,it);
if (strncmp(ame_curstr(self),"`",1)) goto alt15_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_funcall(self,sy_AmethystParser_Lambda_lb___9c37,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_3); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_3: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_4); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_4: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_5); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_37e6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_5: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos18=ame_getpos(self);
alt16_1: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt16_2);if (strncmp(ame_curstr(self),":@",2)) goto alt16_2; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept16;
alt16_2: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_6;}
  it=rb_funcall(self,sy_AmethystParser__di__lb__do__dot__co__rb__di__68eb,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt16_3); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__be4f,1,bind);  
ame_setcut(self,Qnil);goto accept16;
alt16_3: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_6;}
   it=Amethyst_empty(self ); FAILTEST(alt16_4); 
ame_setcut(self,Qnil);goto accept16;
  alt16_4:  ame_setpos(self,oldpos18); goto alt15_6;
 accept16:;
int oldpos19=ame_getpos(self);
alt17_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_6;}
   it=Amethyst__(self ); FAILTEST(alt17_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt17_2); 
ame_setcut(self,Qnil);goto accept17;
alt17_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_6;}
   it=Amethyst_empty(self ); FAILTEST(alt17_3); 
ame_setcut(self,Qnil);goto accept17;
  alt17_3:  ame_setpos(self,oldpos19); goto alt15_6;
 accept17:;
  it=AmethystParser_name(self ); FAILTEST(alt15_6); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__40ba,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_6: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt15_7); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_7: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,sy_AmethystParser__di__lb_,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt15_8); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
  alt15_8:  ame_setpos(self,oldpos17); goto fail;
 accept15:;
 break;}it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystParser__at_locals_eq__94df,1,bind); it=rb_funcall(self,sy_AmethystParser__at_bnding_7d3c,1,bind);  bind_aset(bind,0/*bnding*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail); bind_aset(bind,1/*name*/,it);
  it=AmethystParser_ruleargs(self ); FAILTEST(fail); bind_aset(bind,2/*args*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),"=",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_expression(self ); FAILTEST(fail); bind_aset(bind,3/*body*/,it);
it=rb_funcall(self,sy_AmethystParser__body_lp_bi_152d,1,bind);  bind_aset(bind,3/*body*/,it);
it=rb_funcall(self,sy_AmethystParser__at_locals_dot__bdc6,1,bind);  bind_aset(bind,4/*locals*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_3_rb__eq__507c,1,bind); it=rb_funcall(self,sy_AmethystParser_Rule_dot_cre_e3af,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*result*/,it);
  it=AmethystParser_argsOpt(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos1; while(1){oldpos1=ame_getpos(self);  it=c_Args; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,4/*name*/,it);
it=rb_funcall(self,sy_AmethystParser__Local_lp_b_cc09,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__81ec,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break1;
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__sp__f854,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nr(self ); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*ary*/,it);
it=rb_funcall(self,sy_AmethystParser_Seq_dot_crea_abce,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(25);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*x*/,it);
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(33):;case UC(35) ... UC(38):;case UC(41) ... UC(90):;case UC(92) ... UC(97):;case UC(99) ... UC(109):;case UC(111) ... UC(255):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_call(self ); FAILTEST(alt1_2); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
  it=rb_funcall(self,sy_AmethystParser__di__lb__dot__co__rb__di__8a62,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(reject1); x=1; goto accept2;  reject1: x=0; accept2: it=Qnil; ame_setpos(self,oldpos2); if (x==0) goto alt1_3;unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(0) ... UC(45):;case UC(47) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt1_3); break;case UC(46) ... UC(46):; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_3;}
 if (strncmp(ame_curstr(self),".",1)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+1); 
ame_setcut(self,Qnil);goto accept3;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_3;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept3;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_3;
 accept3:;
 break;}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt1_4); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_3e5d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_host_expr(self ); FAILTEST(alt1_5); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_line_host_expr(self ); FAILTEST(alt1_6); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt1_7); bind_aset(bind,4/*autovar*/,it);
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_7;}
 it=bind_aget(bind,6/*autovar*/);int oldpos5=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
 if (strncmp(ame_curstr(self),"...",3)) goto alt4_2; else ame_setpos(self,ame_getpos(self)+3); 
ame_setcut(self,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
 if (strncmp(ame_curstr(self),"..",2)) goto alt4_3; else ame_setpos(self,ame_getpos(self)+2); 
ame_setcut(self,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos5); goto alt3_2;
 accept5:;
  it=Amethyst_number(self ); FAILTEST(alt3_2); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_7;}
 it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt3_3:  ame_setpos(self,oldpos4); goto alt1_7;
 accept4:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_m_9e45,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__lt__524a); bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_8);it=bind_aget(bind,8/*s*/);int oldpos6; while(1){oldpos6=ame_getpos(self); int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_spaces(self ); FAILTEST(alt5_2);it=rb_obj_clone(s__gt__cedf); bind_aset(bind,8/*s*/,it);
if (strncmp(ame_curstr(self),">",1)) goto alt5_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept6;
alt5_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt5_3); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept6;
  alt5_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_7fae,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_9);it=bind_aget(bind,8/*s*/);it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos8; while(1){oldpos8=ame_getpos(self); int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_endline(self ); FAILTEST(alt6_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt6_2); 
ame_setcut(self,Qnil);goto accept7;
alt6_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt6_3); 
ame_setcut(self,Qnil);goto accept7;
  alt6_3:  ame_setpos(self,oldpos9); goto break2;
 accept7:;
  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*c*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__cc4d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_9:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC(110) ... UC(110):; int oldpos10=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"nested(",7)) goto alt7_2; else ame_setpos(self,ame_getpos(self)+7);  it=AmethystParser_expression(self ); FAILTEST(alt7_2); bind_aset(bind,13/*expr*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt7_2);if (strncmp(ame_curstr(self),")",1)) goto alt7_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_funcall(self,sy_AmethystParser_Nested_lb_b_9cc8,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt7_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_call(self ); FAILTEST(alt7_3); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt7_3: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos11=ame_getpos(self);
  it=rb_funcall(self,sy_AmethystParser__di__lb__dot__co__rb__di__8a62,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(reject2); x=1; goto accept9;  reject2: x=0; accept9: it=Qnil; ame_setpos(self,oldpos11); if (x==0) goto alt7_4;unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(0) ... UC(45):;case UC(47) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt7_4); break;case UC(46) ... UC(46):; int oldpos12=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_4;}
 if (strncmp(ame_curstr(self),".",1)) goto alt8_2; else ame_setpos(self,ame_getpos(self)+1); 
ame_setcut(self,Qnil);goto accept10;
alt8_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_4;}
   it=Amethyst_empty(self ); FAILTEST(alt8_3); 
ame_setcut(self,Qnil);goto accept10;
  alt8_3:  ame_setpos(self,oldpos12); goto alt7_4;
 accept10:;
 break;}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt7_4: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt7_5); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_3e5d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt7_5: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_host_expr(self ); FAILTEST(alt7_6); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt7_6: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_line_host_expr(self ); FAILTEST(alt7_7); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt7_7: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt7_8); bind_aset(bind,4/*autovar*/,it);
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,14/*autovar*/,it);
int oldpos13=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_8;}
 it=bind_aget(bind,14/*autovar*/);int oldpos14=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt9_2;}
 if (strncmp(ame_curstr(self),"...",3)) goto alt10_2; else ame_setpos(self,ame_getpos(self)+3); 
ame_setcut(self,Qnil);goto accept12;
alt10_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt9_2;}
 if (strncmp(ame_curstr(self),"..",2)) goto alt10_3; else ame_setpos(self,ame_getpos(self)+2); 
ame_setcut(self,Qnil);goto accept12;
  alt10_3:  ame_setpos(self,oldpos14); goto alt9_2;
 accept12:;
  it=Amethyst_number(self ); FAILTEST(alt9_2); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept11;
alt9_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_8;}
 it=bind_aget(bind,14/*autovar*/); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept11;
  alt9_3:  ame_setpos(self,oldpos13); goto alt7_8;
 accept11:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_m_9e45,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt7_8: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__lt__524a); bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_9);it=bind_aget(bind,8/*s*/);int oldpos15; while(1){oldpos15=ame_getpos(self); int oldpos16=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
   it=Amethyst_spaces(self ); FAILTEST(alt11_2);it=rb_obj_clone(s__gt__cedf); bind_aset(bind,8/*s*/,it);
if (strncmp(ame_curstr(self),">",1)) goto alt11_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept13;
alt11_2: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
   it=AmethystParser_eChar(self ); FAILTEST(alt11_3); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept13;
  alt11_3:  ame_setpos(self,oldpos16); goto break3;
 accept13:;
 if (ame_getstop(self)!=Qnil){{oldpos15=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos15); it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_7fae,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt7_9: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_10);it=bind_aget(bind,8/*s*/);it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos17; while(1){oldpos17=ame_getpos(self); int oldpos18=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break4;}
   it=Amethyst_endline(self ); FAILTEST(alt12_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt12_2); 
ame_setcut(self,Qnil);goto accept14;
alt12_2: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break4;}
   it=Amethyst_empty(self ); FAILTEST(alt12_3); 
ame_setcut(self,Qnil);goto accept14;
  alt12_3:  ame_setpos(self,oldpos18); goto break4;
 accept14:;
  it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos17=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos17); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*c*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__cc4d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt7_10:  ame_setpos(self,oldpos10); goto fail;
 accept8:;
 break;case UC(34) ... UC(34):; int oldpos19=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_call(self ); FAILTEST(alt13_2); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt13_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos20=ame_getpos(self);
  it=rb_funcall(self,sy_AmethystParser__di__lb__dot__co__rb__di__8a62,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(reject3); x=1; goto accept16;  reject3: x=0; accept16: it=Qnil; ame_setpos(self,oldpos20); if (x==0) goto alt13_3;unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC(0) ... UC(45):;case UC(47) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt13_3); break;case UC(46) ... UC(46):; int oldpos21=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt13_3;}
 if (strncmp(ame_curstr(self),".",1)) goto alt14_2; else ame_setpos(self,ame_getpos(self)+1); 
ame_setcut(self,Qnil);goto accept17;
alt14_2: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt13_3;}
   it=Amethyst_empty(self ); FAILTEST(alt14_3); 
ame_setcut(self,Qnil);goto accept17;
  alt14_3:  ame_setpos(self,oldpos21); goto alt13_3;
 accept17:;
 break;}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt13_3: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt13_4); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_3e5d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt13_4: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_host_expr(self ); FAILTEST(alt13_5); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt13_5: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_line_host_expr(self ); FAILTEST(alt13_6); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt13_6: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"\"",1)) goto alt13_7; else ame_setpos(self,ame_getpos(self)+1);int oldpos22; while(1){oldpos22=ame_getpos(self); unsigned char chr5=*ame_curstr(self);  switch(chr5){case UC(0) ... UC(33):;case UC(35) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break5); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__80de,1,bind);  break;case UC(34) ... UC(34):; int oldpos23=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
 if (strncmp(ame_curstr(self),"\"",1)) goto alt15_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept18;
alt15_2: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break5;}
   it=AmethystParser_eChar(self ); FAILTEST(alt15_3); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__80de,1,bind);  
ame_setcut(self,Qnil);goto accept18;
  alt15_3:  ame_setpos(self,oldpos23); goto break5;
 accept18:;
 break;} if (ame_getstop(self)!=Qnil){{oldpos22=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos22); it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_t_bf73,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt13_7: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt13_8); bind_aset(bind,4/*autovar*/,it);
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,16/*autovar*/,it);
int oldpos24=ame_getpos(self);
alt16_1: ame_setpos(self,oldpos24);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt13_8;}
 it=bind_aget(bind,16/*autovar*/);int oldpos25=ame_getpos(self);
alt17_1: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt16_2;}
 if (strncmp(ame_curstr(self),"...",3)) goto alt17_2; else ame_setpos(self,ame_getpos(self)+3); 
ame_setcut(self,Qnil);goto accept20;
alt17_2: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt16_2;}
 if (strncmp(ame_curstr(self),"..",2)) goto alt17_3; else ame_setpos(self,ame_getpos(self)+2); 
ame_setcut(self,Qnil);goto accept20;
  alt17_3:  ame_setpos(self,oldpos25); goto alt16_2;
 accept20:;
  it=Amethyst_number(self ); FAILTEST(alt16_2); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept19;
alt16_2: ame_setpos(self,oldpos24);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt13_8;}
 it=bind_aget(bind,16/*autovar*/); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept19;
  alt16_3:  ame_setpos(self,oldpos24); goto alt13_8;
 accept19:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_m_9e45,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt13_8: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__lt__524a); bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt13_9);it=bind_aget(bind,8/*s*/);int oldpos26; while(1){oldpos26=ame_getpos(self); int oldpos27=ame_getpos(self);
alt18_1: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break6;}
   it=Amethyst_spaces(self ); FAILTEST(alt18_2);it=rb_obj_clone(s__gt__cedf); bind_aset(bind,8/*s*/,it);
if (strncmp(ame_curstr(self),">",1)) goto alt18_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept21;
alt18_2: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break6;}
   it=AmethystParser_eChar(self ); FAILTEST(alt18_3); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept21;
  alt18_3:  ame_setpos(self,oldpos27); goto break6;
 accept21:;
 if (ame_getstop(self)!=Qnil){{oldpos26=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos26); it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_7fae,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt13_9: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt13_10);it=bind_aget(bind,8/*s*/);it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos28; while(1){oldpos28=ame_getpos(self); int oldpos29=ame_getpos(self);
alt19_1: ame_setpos(self,oldpos29);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break7;}
   it=Amethyst_endline(self ); FAILTEST(alt19_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt19_2); 
ame_setcut(self,Qnil);goto accept22;
alt19_2: ame_setpos(self,oldpos29);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break7;}
   it=Amethyst_empty(self ); FAILTEST(alt19_3); 
ame_setcut(self,Qnil);goto accept22;
  alt19_3:  ame_setpos(self,oldpos29); goto break7;
 accept22:;
  it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos28=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos28); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*c*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__cc4d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
  alt13_10:  ame_setpos(self,oldpos19); goto fail;
 accept15:;
 break;case UC(39) ... UC(39):; int oldpos30=ame_getpos(self);
alt20_1: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_call(self ); FAILTEST(alt20_2); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept23;
alt20_2: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos31=ame_getpos(self);
  it=rb_funcall(self,sy_AmethystParser__di__lb__dot__co__rb__di__8a62,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(reject4); x=1; goto accept24;  reject4: x=0; accept24: it=Qnil; ame_setpos(self,oldpos31); if (x==0) goto alt20_3;unsigned char chr6=*ame_curstr(self);  switch(chr6){case UC(0) ... UC(45):;case UC(47) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt20_3); break;case UC(46) ... UC(46):; int oldpos32=ame_getpos(self);
alt21_1: ame_setpos(self,oldpos32);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt20_3;}
 if (strncmp(ame_curstr(self),".",1)) goto alt21_2; else ame_setpos(self,ame_getpos(self)+1); 
ame_setcut(self,Qnil);goto accept25;
alt21_2: ame_setpos(self,oldpos32);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt20_3;}
   it=Amethyst_empty(self ); FAILTEST(alt21_3); 
ame_setcut(self,Qnil);goto accept25;
  alt21_3:  ame_setpos(self,oldpos32); goto alt20_3;
 accept25:;
 break;}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept23;
alt20_3: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt20_4); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_3e5d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept23;
alt20_4: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_host_expr(self ); FAILTEST(alt20_5); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept23;
alt20_5: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_line_host_expr(self ); FAILTEST(alt20_6); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept23;
alt20_6: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"'",1)) goto alt20_7; else ame_setpos(self,ame_getpos(self)+1);int oldpos33; while(1){oldpos33=ame_getpos(self); unsigned char chr7=*ame_curstr(self);  switch(chr7){case UC(0) ... UC(38):;case UC(40) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break8); bind_aset(bind,17/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__3aef,1,bind);  break;case UC(39) ... UC(39):; int oldpos34=ame_getpos(self);
alt22_1: ame_setpos(self,oldpos34);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break8;}
 if (strncmp(ame_curstr(self),"'",1)) goto alt22_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept26;
alt22_2: ame_setpos(self,oldpos34);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break8;}
   it=AmethystParser_eChar(self ); FAILTEST(alt22_3); bind_aset(bind,17/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__3aef,1,bind);  
ame_setcut(self,Qnil);goto accept26;
  alt22_3:  ame_setpos(self,oldpos34); goto break8;
 accept26:;
 break;} if (ame_getstop(self)!=Qnil){{oldpos33=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos33); it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_s_59f4,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept23;
alt20_7: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt20_8); bind_aset(bind,4/*autovar*/,it);
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,18/*autovar*/,it);
int oldpos35=ame_getpos(self);
alt23_1: ame_setpos(self,oldpos35);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt20_8;}
 it=bind_aget(bind,18/*autovar*/);int oldpos36=ame_getpos(self);
alt24_1: ame_setpos(self,oldpos36);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt23_2;}
 if (strncmp(ame_curstr(self),"...",3)) goto alt24_2; else ame_setpos(self,ame_getpos(self)+3); 
ame_setcut(self,Qnil);goto accept28;
alt24_2: ame_setpos(self,oldpos36);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt23_2;}
 if (strncmp(ame_curstr(self),"..",2)) goto alt24_3; else ame_setpos(self,ame_getpos(self)+2); 
ame_setcut(self,Qnil);goto accept28;
  alt24_3:  ame_setpos(self,oldpos36); goto alt23_2;
 accept28:;
  it=Amethyst_number(self ); FAILTEST(alt23_2); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept27;
alt23_2: ame_setpos(self,oldpos35);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt20_8;}
 it=bind_aget(bind,18/*autovar*/); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept27;
  alt23_3:  ame_setpos(self,oldpos35); goto alt20_8;
 accept27:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_m_9e45,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept23;
alt20_8: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__lt__524a); bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt20_9);it=bind_aget(bind,8/*s*/);int oldpos37; while(1){oldpos37=ame_getpos(self); int oldpos38=ame_getpos(self);
alt25_1: ame_setpos(self,oldpos38);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break9;}
   it=Amethyst_spaces(self ); FAILTEST(alt25_2);it=rb_obj_clone(s__gt__cedf); bind_aset(bind,8/*s*/,it);
if (strncmp(ame_curstr(self),">",1)) goto alt25_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept29;
alt25_2: ame_setpos(self,oldpos38);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break9;}
   it=AmethystParser_eChar(self ); FAILTEST(alt25_3); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept29;
  alt25_3:  ame_setpos(self,oldpos38); goto break9;
 accept29:;
 if (ame_getstop(self)!=Qnil){{oldpos37=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos37); it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_7fae,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept23;
alt20_9: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt20_10);it=bind_aget(bind,8/*s*/);it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos39; while(1){oldpos39=ame_getpos(self); int oldpos40=ame_getpos(self);
alt26_1: ame_setpos(self,oldpos40);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break10;}
   it=Amethyst_endline(self ); FAILTEST(alt26_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt26_2); 
ame_setcut(self,Qnil);goto accept30;
alt26_2: ame_setpos(self,oldpos40);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break10;}
   it=Amethyst_empty(self ); FAILTEST(alt26_3); 
ame_setcut(self,Qnil);goto accept30;
  alt26_3:  ame_setpos(self,oldpos40); goto break10;
 accept30:;
  it=AmethystCore_anything(self ); FAILTEST(break10); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos39=ame_getpos(self);goto break10;} } } break10: ame_setstop(self,Qnil);  ame_setpos(self,oldpos39); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*c*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__cc4d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept23;
  alt20_10:  ame_setpos(self,oldpos30); goto fail;
 accept23:;
 break;case UC(40) ... UC(40):; int oldpos41=ame_getpos(self);
alt27_1: ame_setpos(self,oldpos41);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_call(self ); FAILTEST(alt27_2); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept31;
alt27_2: ame_setpos(self,oldpos41);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos42=ame_getpos(self);
  it=rb_funcall(self,sy_AmethystParser__di__lb__dot__co__rb__di__8a62,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(reject5); x=1; goto accept32;  reject5: x=0; accept32: it=Qnil; ame_setpos(self,oldpos42); if (x==0) goto alt27_3;unsigned char chr8=*ame_curstr(self);  switch(chr8){case UC(0) ... UC(45):;case UC(47) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt27_3); break;case UC(46) ... UC(46):; int oldpos43=ame_getpos(self);
alt28_1: ame_setpos(self,oldpos43);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt27_3;}
 if (strncmp(ame_curstr(self),".",1)) goto alt28_2; else ame_setpos(self,ame_getpos(self)+1); 
ame_setcut(self,Qnil);goto accept33;
alt28_2: ame_setpos(self,oldpos43);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt27_3;}
   it=Amethyst_empty(self ); FAILTEST(alt28_3); 
ame_setcut(self,Qnil);goto accept33;
  alt28_3:  ame_setpos(self,oldpos43); goto alt27_3;
 accept33:;
 break;}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept31;
alt27_3: ame_setpos(self,oldpos41);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt27_4); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_3e5d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept31;
alt27_4: ame_setpos(self,oldpos41);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_host_expr(self ); FAILTEST(alt27_5); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept31;
alt27_5: ame_setpos(self,oldpos41);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_line_host_expr(self ); FAILTEST(alt27_6); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept31;
alt27_6: ame_setpos(self,oldpos41);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt27_7); bind_aset(bind,4/*autovar*/,it);
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,19/*autovar*/,it);
int oldpos44=ame_getpos(self);
alt29_1: ame_setpos(self,oldpos44);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt27_7;}
 it=bind_aget(bind,19/*autovar*/);int oldpos45=ame_getpos(self);
alt30_1: ame_setpos(self,oldpos45);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt29_2;}
 if (strncmp(ame_curstr(self),"...",3)) goto alt30_2; else ame_setpos(self,ame_getpos(self)+3); 
ame_setcut(self,Qnil);goto accept35;
alt30_2: ame_setpos(self,oldpos45);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt29_2;}
 if (strncmp(ame_curstr(self),"..",2)) goto alt30_3; else ame_setpos(self,ame_getpos(self)+2); 
ame_setcut(self,Qnil);goto accept35;
  alt30_3:  ame_setpos(self,oldpos45); goto alt29_2;
 accept35:;
  it=Amethyst_number(self ); FAILTEST(alt29_2); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept34;
alt29_2: ame_setpos(self,oldpos44);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt27_7;}
 it=bind_aget(bind,19/*autovar*/); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept34;
  alt29_3:  ame_setpos(self,oldpos44); goto alt27_7;
 accept34:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_m_9e45,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept31;
alt27_7: ame_setpos(self,oldpos41);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__lt__524a); bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt27_8);it=bind_aget(bind,8/*s*/);int oldpos46; while(1){oldpos46=ame_getpos(self); int oldpos47=ame_getpos(self);
alt31_1: ame_setpos(self,oldpos47);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break11;}
   it=Amethyst_spaces(self ); FAILTEST(alt31_2);it=rb_obj_clone(s__gt__cedf); bind_aset(bind,8/*s*/,it);
if (strncmp(ame_curstr(self),">",1)) goto alt31_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept36;
alt31_2: ame_setpos(self,oldpos47);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break11;}
   it=AmethystParser_eChar(self ); FAILTEST(alt31_3); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept36;
  alt31_3:  ame_setpos(self,oldpos47); goto break11;
 accept36:;
 if (ame_getstop(self)!=Qnil){{oldpos46=ame_getpos(self);goto break11;} } } break11: ame_setstop(self,Qnil);  ame_setpos(self,oldpos46); it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_7fae,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept31;
alt27_8: ame_setpos(self,oldpos41);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"(",1)) goto alt27_9; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_expression(self ); FAILTEST(alt27_9); bind_aset(bind,1/*x*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt27_9);if (strncmp(ame_curstr(self),")",1)) goto alt27_9; else ame_setpos(self,ame_getpos(self)+1);unsigned char chr9=*ame_curstr(self);  switch(chr9){case UC(0) ... UC(90):;case UC(92) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt27_9);it=bind_aget(bind,1/*x*/); bind_aset(bind,2/*_result*/,it);
 break;case UC(91) ... UC(91):; int oldpos48=ame_getpos(self);
alt32_1: ame_setpos(self,oldpos48);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt27_9;}
 if (strncmp(ame_curstr(self),"[]",2)) goto alt32_2; else ame_setpos(self,ame_getpos(self)+2);it=bind_aget(bind,1/*x*/); bind_aset(bind,20/*ors*/,it);
it=rb_funcall(self,sy_AmethystParser_a_eq_autova_7996,1,bind);  bind_aset(bind,21/*_result*/,it);
it=bind_aget(bind,21/*_result*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept37;
alt32_2: ame_setpos(self,oldpos48);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt27_9;}
   it=Amethyst_empty(self ); FAILTEST(alt32_3);it=bind_aget(bind,1/*x*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept37;
  alt32_3:  ame_setpos(self,oldpos48); goto alt27_9;
 accept37:;
 break;} 
ame_setcut(self,Qnil);goto accept31;
alt27_9: ame_setpos(self,oldpos41);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt27_10);it=bind_aget(bind,8/*s*/);it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos49; while(1){oldpos49=ame_getpos(self); int oldpos50=ame_getpos(self);
alt33_1: ame_setpos(self,oldpos50);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break12;}
   it=Amethyst_endline(self ); FAILTEST(alt33_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt33_2); 
ame_setcut(self,Qnil);goto accept38;
alt33_2: ame_setpos(self,oldpos50);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break12;}
   it=Amethyst_empty(self ); FAILTEST(alt33_3); 
ame_setcut(self,Qnil);goto accept38;
  alt33_3:  ame_setpos(self,oldpos50); goto break12;
 accept38:;
  it=AmethystCore_anything(self ); FAILTEST(break12); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos49=ame_getpos(self);goto break12;} } } break12: ame_setstop(self,Qnil);  ame_setpos(self,oldpos49); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*c*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__cc4d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept31;
  alt27_10:  ame_setpos(self,oldpos41); goto fail;
 accept31:;
 break;case UC(91) ... UC(91):; int oldpos51=ame_getpos(self);
alt34_1: ame_setpos(self,oldpos51);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_call(self ); FAILTEST(alt34_2); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept39;
alt34_2: ame_setpos(self,oldpos51);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos52=ame_getpos(self);
  it=rb_funcall(self,sy_AmethystParser__di__lb__dot__co__rb__di__8a62,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(reject6); x=1; goto accept40;  reject6: x=0; accept40: it=Qnil; ame_setpos(self,oldpos52); if (x==0) goto alt34_3;unsigned char chr10=*ame_curstr(self);  switch(chr10){case UC(0) ... UC(45):;case UC(47) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt34_3); break;case UC(46) ... UC(46):; int oldpos53=ame_getpos(self);
alt35_1: ame_setpos(self,oldpos53);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt34_3;}
 if (strncmp(ame_curstr(self),".",1)) goto alt35_2; else ame_setpos(self,ame_getpos(self)+1); 
ame_setcut(self,Qnil);goto accept41;
alt35_2: ame_setpos(self,oldpos53);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt34_3;}
   it=Amethyst_empty(self ); FAILTEST(alt35_3); 
ame_setcut(self,Qnil);goto accept41;
  alt35_3:  ame_setpos(self,oldpos53); goto alt34_3;
 accept41:;
 break;}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept39;
alt34_3: ame_setpos(self,oldpos51);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"[",1)) goto alt34_4; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_expression(self ); FAILTEST(alt34_4); bind_aset(bind,22/*e*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt34_4);if (strncmp(ame_curstr(self),"]",1)) goto alt34_4; else ame_setpos(self,ame_getpos(self)+1);it=rb_funcall(self,sy_AmethystParser_Enter_lb_Ap_64c7,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept39;
alt34_4: ame_setpos(self,oldpos51);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt34_5); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_3e5d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept39;
alt34_5: ame_setpos(self,oldpos51);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_host_expr(self ); FAILTEST(alt34_6); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept39;
alt34_6: ame_setpos(self,oldpos51);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_line_host_expr(self ); FAILTEST(alt34_7); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept39;
alt34_7: ame_setpos(self,oldpos51);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt34_8); bind_aset(bind,4/*autovar*/,it);
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,23/*autovar*/,it);
int oldpos54=ame_getpos(self);
alt36_1: ame_setpos(self,oldpos54);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt34_8;}
 it=bind_aget(bind,23/*autovar*/);int oldpos55=ame_getpos(self);
alt37_1: ame_setpos(self,oldpos55);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt36_2;}
 if (strncmp(ame_curstr(self),"...",3)) goto alt37_2; else ame_setpos(self,ame_getpos(self)+3); 
ame_setcut(self,Qnil);goto accept43;
alt37_2: ame_setpos(self,oldpos55);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt36_2;}
 if (strncmp(ame_curstr(self),"..",2)) goto alt37_3; else ame_setpos(self,ame_getpos(self)+2); 
ame_setcut(self,Qnil);goto accept43;
  alt37_3:  ame_setpos(self,oldpos55); goto alt36_2;
 accept43:;
  it=Amethyst_number(self ); FAILTEST(alt36_2); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept42;
alt36_2: ame_setpos(self,oldpos54);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt34_8;}
 it=bind_aget(bind,23/*autovar*/); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept42;
  alt36_3:  ame_setpos(self,oldpos54); goto alt34_8;
 accept42:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_m_9e45,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept39;
alt34_8: ame_setpos(self,oldpos51);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__lt__524a); bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt34_9);it=bind_aget(bind,8/*s*/);int oldpos56; while(1){oldpos56=ame_getpos(self); int oldpos57=ame_getpos(self);
alt38_1: ame_setpos(self,oldpos57);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break13;}
   it=Amethyst_spaces(self ); FAILTEST(alt38_2);it=rb_obj_clone(s__gt__cedf); bind_aset(bind,8/*s*/,it);
if (strncmp(ame_curstr(self),">",1)) goto alt38_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept44;
alt38_2: ame_setpos(self,oldpos57);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break13;}
   it=AmethystParser_eChar(self ); FAILTEST(alt38_3); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept44;
  alt38_3:  ame_setpos(self,oldpos57); goto break13;
 accept44:;
 if (ame_getstop(self)!=Qnil){{oldpos56=ame_getpos(self);goto break13;} } } break13: ame_setstop(self,Qnil);  ame_setpos(self,oldpos56); it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_7fae,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept39;
alt34_9: ame_setpos(self,oldpos51);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt34_10);it=bind_aget(bind,8/*s*/);it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos58; while(1){oldpos58=ame_getpos(self); int oldpos59=ame_getpos(self);
alt39_1: ame_setpos(self,oldpos59);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break14;}
   it=Amethyst_endline(self ); FAILTEST(alt39_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt39_2); 
ame_setcut(self,Qnil);goto accept45;
alt39_2: ame_setpos(self,oldpos59);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break14;}
   it=Amethyst_empty(self ); FAILTEST(alt39_3); 
ame_setcut(self,Qnil);goto accept45;
  alt39_3:  ame_setpos(self,oldpos59); goto break14;
 accept45:;
  it=AmethystCore_anything(self ); FAILTEST(break14); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos58=ame_getpos(self);goto break14;} } } break14: ame_setstop(self,Qnil);  ame_setpos(self,oldpos58); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*c*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__cc4d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept39;
  alt34_10:  ame_setpos(self,oldpos51); goto fail;
 accept39:;
 break;case UC(98) ... UC(98):; int oldpos60=ame_getpos(self);
alt40_1: ame_setpos(self,oldpos60);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"break",5)) goto alt40_2; else ame_setpos(self,ame_getpos(self)+5);it=rb_funcall(self,sy_AmethystParser_Seq_lb_Cut_lb__3505,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept46;
alt40_2: ame_setpos(self,oldpos60);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_call(self ); FAILTEST(alt40_3); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept46;
alt40_3: ame_setpos(self,oldpos60);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos61=ame_getpos(self);
  it=rb_funcall(self,sy_AmethystParser__di__lb__dot__co__rb__di__8a62,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(reject7); x=1; goto accept47;  reject7: x=0; accept47: it=Qnil; ame_setpos(self,oldpos61); if (x==0) goto alt40_4;unsigned char chr11=*ame_curstr(self);  switch(chr11){case UC(0) ... UC(45):;case UC(47) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt40_4); break;case UC(46) ... UC(46):; int oldpos62=ame_getpos(self);
alt41_1: ame_setpos(self,oldpos62);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt40_4;}
 if (strncmp(ame_curstr(self),".",1)) goto alt41_2; else ame_setpos(self,ame_getpos(self)+1); 
ame_setcut(self,Qnil);goto accept48;
alt41_2: ame_setpos(self,oldpos62);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt40_4;}
   it=Amethyst_empty(self ); FAILTEST(alt41_3); 
ame_setcut(self,Qnil);goto accept48;
  alt41_3:  ame_setpos(self,oldpos62); goto alt40_4;
 accept48:;
 break;}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept46;
alt40_4: ame_setpos(self,oldpos60);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt40_5); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_3e5d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept46;
alt40_5: ame_setpos(self,oldpos60);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_host_expr(self ); FAILTEST(alt40_6); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept46;
alt40_6: ame_setpos(self,oldpos60);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_line_host_expr(self ); FAILTEST(alt40_7); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept46;
alt40_7: ame_setpos(self,oldpos60);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt40_8); bind_aset(bind,4/*autovar*/,it);
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,24/*autovar*/,it);
int oldpos63=ame_getpos(self);
alt42_1: ame_setpos(self,oldpos63);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt40_8;}
 it=bind_aget(bind,24/*autovar*/);int oldpos64=ame_getpos(self);
alt43_1: ame_setpos(self,oldpos64);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt42_2;}
 if (strncmp(ame_curstr(self),"...",3)) goto alt43_2; else ame_setpos(self,ame_getpos(self)+3); 
ame_setcut(self,Qnil);goto accept50;
alt43_2: ame_setpos(self,oldpos64);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt42_2;}
 if (strncmp(ame_curstr(self),"..",2)) goto alt43_3; else ame_setpos(self,ame_getpos(self)+2); 
ame_setcut(self,Qnil);goto accept50;
  alt43_3:  ame_setpos(self,oldpos64); goto alt42_2;
 accept50:;
  it=Amethyst_number(self ); FAILTEST(alt42_2); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept49;
alt42_2: ame_setpos(self,oldpos63);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt40_8;}
 it=bind_aget(bind,24/*autovar*/); bind_aset(bind,7/*num*/,it);
 
ame_setcut(self,Qnil);goto accept49;
  alt42_3:  ame_setpos(self,oldpos63); goto alt40_8;
 accept49:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_m_9e45,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept46;
alt40_8: ame_setpos(self,oldpos60);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__lt__524a); bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt40_9);it=bind_aget(bind,8/*s*/);int oldpos65; while(1){oldpos65=ame_getpos(self); int oldpos66=ame_getpos(self);
alt44_1: ame_setpos(self,oldpos66);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break15;}
   it=Amethyst_spaces(self ); FAILTEST(alt44_2);it=rb_obj_clone(s__gt__cedf); bind_aset(bind,8/*s*/,it);
if (strncmp(ame_curstr(self),">",1)) goto alt44_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept51;
alt44_2: ame_setpos(self,oldpos66);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break15;}
   it=AmethystParser_eChar(self ); FAILTEST(alt44_3); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept51;
  alt44_3:  ame_setpos(self,oldpos66); goto break15;
 accept51:;
 if (ame_getstop(self)!=Qnil){{oldpos65=ame_getpos(self);goto break15;} } } break15: ame_setstop(self,Qnil);  ame_setpos(self,oldpos65); it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_7fae,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept46;
alt40_9: ame_setpos(self,oldpos60);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,8/*s*/,it);
 it=bind_aget(bind,8/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt40_10);it=bind_aget(bind,8/*s*/);it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos67; while(1){oldpos67=ame_getpos(self); int oldpos68=ame_getpos(self);
alt45_1: ame_setpos(self,oldpos68);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break16;}
   it=Amethyst_endline(self ); FAILTEST(alt45_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt45_2); 
ame_setcut(self,Qnil);goto accept52;
alt45_2: ame_setpos(self,oldpos68);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break16;}
   it=Amethyst_empty(self ); FAILTEST(alt45_3); 
ame_setcut(self,Qnil);goto accept52;
  alt45_3:  ame_setpos(self,oldpos68); goto break16;
 accept52:;
  it=AmethystCore_anything(self ); FAILTEST(break16); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9ca5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos67=ame_getpos(self);goto break16;} } } break16: ame_setstop(self,Qnil);  ame_setpos(self,oldpos67); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,12/*c*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__cc4d,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept46;
  alt40_10:  ame_setpos(self,oldpos60); goto fail;
 accept46:;
 break;}it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_Args=rb_const_get(rb_cObject, rb_intern("Args"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Args);
s_2=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_2);
s_=rb_str_new2("|");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_);
s__bs__dq__3bd8=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs__dq__3bd8);
s__co__at__4bf0=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__co__at__4bf0);
s__dot__dot__58b9=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__dot__dot__58b9);
s__dot__dot__dot__2f43=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__dot__dot__dot__2f43);
s__gt__cedf=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__gt__cedf);
s__lb__8154=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lb__8154);
s__lb__rb__d751=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lb__rb__d751);
s__le__f95b=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__le__f95b);
s__lp__84c4=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lp__84c4);
s__lt__524a=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lt__524a);
s__qu__3590=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__qu__3590);
s__rb__0fbd=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__rb__0fbd);
s__re__cbb1=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__re__cbb1);
s__rp__9371=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__rp__9371);
s__td__4c76=rb_str_new2("~");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__td__4c76);
switchhashAmethystParser1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashAmethystParser1);
sy_AmethystParser_Act_lb_Args_245f=rb_intern("AmethystParser_Act_lb_Args_245f");
sy_AmethystParser_Act_lb_bind_3e5d=rb_intern("AmethystParser_Act_lb_bind_3e5d");
sy_AmethystParser_Apply_lb__dq_a_1437=rb_intern("AmethystParser_Apply_lb__dq_a_1437");
sy_AmethystParser_Apply_lb__dq_c_6e5e=rb_intern("AmethystParser_Apply_lb__dq_c_6e5e");
sy_AmethystParser_Apply_lb__dq_m_9e45=rb_intern("AmethystParser_Apply_lb__dq_m_9e45");
sy_AmethystParser_Apply_lb__dq_r_7fae=rb_intern("AmethystParser_Apply_lb__dq_r_7fae");
sy_AmethystParser_Apply_lb__dq_s_59f4=rb_intern("AmethystParser_Apply_lb__dq_s_59f4");
sy_AmethystParser_Apply_lb__dq_t_bf73=rb_intern("AmethystParser_Apply_lb__dq_t_bf73");
sy_AmethystParser_Apply_lb__lb_b_9fd2=rb_intern("AmethystParser_Apply_lb__lb_b_9fd2");
sy_AmethystParser_Apply_lb_bi_999a=rb_intern("AmethystParser_Apply_lb_bi_999a");
sy_AmethystParser_Args_lb__le__co_a_37e6=rb_intern("AmethystParser_Args_lb__le__co_a_37e6");
sy_AmethystParser_Args_lb__le__co_a_cb1b=rb_intern("AmethystParser_Args_lb__le__co_a_cb1b");
sy_AmethystParser_Args_lb__le__co_a_f34c=rb_intern("AmethystParser_Args_lb__le__co_a_f34c");
sy_AmethystParser_Comment_lb__cc4d=rb_intern("AmethystParser_Comment_lb__cc4d");
sy_AmethystParser_Enter_lb_Ap_64c7=rb_intern("AmethystParser_Enter_lb_Ap_64c7");
sy_AmethystParser_Global_lb_b_8edb=rb_intern("AmethystParser_Global_lb_b_8edb");
sy_AmethystParser_Grammar_dot__80c6=rb_intern("AmethystParser_Grammar_dot__80c6");
sy_AmethystParser_Key_lb_bind_20b7=rb_intern("AmethystParser_Key_lb_bind_20b7");
sy_AmethystParser_Lambda_lb___9c37=rb_intern("AmethystParser_Lambda_lb___9c37");
sy_AmethystParser_Lookahea_d7b5=rb_intern("AmethystParser_Lookahea_d7b5");
sy_AmethystParser_Many_lb_bin_33ac=rb_intern("AmethystParser_Many_lb_bin_33ac");
sy_AmethystParser_Nested_lb_b_9cc8=rb_intern("AmethystParser_Nested_lb_b_9cc8");
sy_AmethystParser_Or_dot_creat_67f0=rb_intern("AmethystParser_Or_dot_creat_67f0");
sy_AmethystParser_Or_lb_bind_lb__cb4a=rb_intern("AmethystParser_Or_lb_bind_lb__cb4a");
sy_AmethystParser_Pass_lb_bin_2967=rb_intern("AmethystParser_Pass_lb_bin_2967");
sy_AmethystParser_Pred_lb_bin_0c20=rb_intern("AmethystParser_Pred_lb_bin_0c20");
sy_AmethystParser_Result_lb__le__5876=rb_intern("AmethystParser_Result_lb__le__5876");
sy_AmethystParser_Rule_dot_cre_e3af=rb_intern("AmethystParser_Rule_dot_cre_e3af");
sy_AmethystParser_Seq_dot_crea_abce=rb_intern("AmethystParser_Seq_dot_crea_abce");
sy_AmethystParser_Seq_lb_Cut_lb__3505=rb_intern("AmethystParser_Seq_lb_Cut_lb__3505");
sy_AmethystParser_Seq_lb__Bin_6d20=rb_intern("AmethystParser_Seq_lb__Bin_6d20");
sy_AmethystParser_Strin_lb_co_0638=rb_intern("AmethystParser_Strin_lb_co_0638");
sy_AmethystParser__Bind_lp_bi_3fe9=rb_intern("AmethystParser__Bind_lp_bi_3fe9");
sy_AmethystParser__Local_lp_b_cc09=rb_intern("AmethystParser__Local_lp_b_cc09");
sy_AmethystParser__append_lp__01d0=rb_intern("AmethystParser__append_lp__01d0");
sy_AmethystParser__append_lp__0605=rb_intern("AmethystParser__append_lp__0605");
sy_AmethystParser__append_lp__0e08=rb_intern("AmethystParser__append_lp__0e08");
sy_AmethystParser__append_lp__3aef=rb_intern("AmethystParser__append_lp__3aef");
sy_AmethystParser__append_lp__40ba=rb_intern("AmethystParser__append_lp__40ba");
sy_AmethystParser__append_lp__473a=rb_intern("AmethystParser__append_lp__473a");
sy_AmethystParser__append_lp__4de3=rb_intern("AmethystParser__append_lp__4de3");
sy_AmethystParser__append_lp__66a2=rb_intern("AmethystParser__append_lp__66a2");
sy_AmethystParser__append_lp__6f56=rb_intern("AmethystParser__append_lp__6f56");
sy_AmethystParser__append_lp__8061=rb_intern("AmethystParser__append_lp__8061");
sy_AmethystParser__append_lp__80de=rb_intern("AmethystParser__append_lp__80de");
sy_AmethystParser__append_lp__81ec=rb_intern("AmethystParser__append_lp__81ec");
sy_AmethystParser__append_lp__835a=rb_intern("AmethystParser__append_lp__835a");
sy_AmethystParser__append_lp__9ca5=rb_intern("AmethystParser__append_lp__9ca5");
sy_AmethystParser__append_lp__b2a5=rb_intern("AmethystParser__append_lp__b2a5");
sy_AmethystParser__append_lp__be4f=rb_intern("AmethystParser__append_lp__be4f");
sy_AmethystParser__append_lp__cbd1=rb_intern("AmethystParser__append_lp__cbd1");
sy_AmethystParser__append_lp__d113=rb_intern("AmethystParser__append_lp__d113");
sy_AmethystParser__at_ary_eq__lb__rb_=rb_intern("AmethystParser__at_ary_eq__lb__rb_");
sy_AmethystParser__at_ary_ff69=rb_intern("AmethystParser__at_ary_ff69");
sy_AmethystParser__at_ary_lt__lt_Ar_59e3=rb_intern("AmethystParser__at_ary_lt__lt_Ar_59e3");
sy_AmethystParser__at_bnding_7d3c=rb_intern("AmethystParser__at_bnding_7d3c");
sy_AmethystParser__at_locals_dot__bdc6=rb_intern("AmethystParser__at_locals_dot__bdc6");
sy_AmethystParser__at_locals_eq__94df=rb_intern("AmethystParser__at_locals_eq__94df");
sy_AmethystParser__at_tmp_lt__lt_bi_2afb=rb_intern("AmethystParser__at_tmp_lt__lt_bi_2afb");
sy_AmethystParser__body_lp_bi_152d=rb_intern("AmethystParser__body_lp_bi_152d");
sy_AmethystParser__di__lb_=rb_intern("AmethystParser__di__lb_");
sy_AmethystParser__di__lb_A_mi_Z_rb__di__05b6=rb_intern("AmethystParser__di__lb_A_mi_Z_rb__di__05b6");
sy_AmethystParser__di__lb__a_mi_zA_mi__6e11=rb_intern("AmethystParser__di__lb__a_mi_zA_mi__6e11");
sy_AmethystParser__di__lb__a_mi_zA_mi__d9bf=rb_intern("AmethystParser__di__lb__a_mi_zA_mi__d9bf");
sy_AmethystParser__di__lb__do__dot__co__rb__di__68eb=rb_intern("AmethystParser__di__lb__do__dot__co__rb__di__68eb");
sy_AmethystParser__di__lb__dot__co__rb__di__8a62=rb_intern("AmethystParser__di__lb__dot__co__rb__di__8a62");
sy_AmethystParser__di__lb__pl__ti__rb__di__c64d=rb_intern("AmethystParser__di__lb__pl__ti__rb__di__c64d");
sy_AmethystParser__dq__bs__bs__sh__le_bin_f4bd=rb_intern("AmethystParser__dq__bs__bs__sh__le_bin_f4bd");
sy_AmethystParser__dq__le__dq__pl_bind_eece=rb_intern("AmethystParser__dq__le__dq__pl_bind_eece");
sy_AmethystParser__dq__sh__dq__b65f=rb_intern("AmethystParser__dq__sh__dq__b65f");
sy_AmethystParser__lb__rb_=rb_intern("AmethystParser__lb__rb_");
sy_AmethystParser__lp_bind_lb_0_rb__418b=rb_intern("AmethystParser__lp_bind_lb_0_rb__418b");
sy_AmethystParser__lp_bind_lb_5_rb__7170=rb_intern("AmethystParser__lp_bind_lb_5_rb__7170");
sy_AmethystParser__qu__sh__qu__pl__qu__le__qu__b26e=rb_intern("AmethystParser__qu__sh__qu__pl__qu__le__qu__b26e");
sy_AmethystParser_a_eq_autova_7996=rb_intern("AmethystParser_a_eq_autova_7996");
sy_AmethystParser_a_eq_autova_91af=rb_intern("AmethystParser_a_eq_autova_91af");
sy_AmethystParser_bind_lb_0_rb_=rb_intern("AmethystParser_bind_lb_0_rb_");
sy_AmethystParser_bind_lb_0_rb__eq__5e66=rb_intern("AmethystParser_bind_lb_0_rb__eq__5e66");
sy_AmethystParser_bind_lb_0_rb__sp__f854=rb_intern("AmethystParser_bind_lb_0_rb__sp__f854");
sy_AmethystParser_bind_lb_1_rb__dot__e879=rb_intern("AmethystParser_bind_lb_1_rb__dot__e879");
sy_AmethystParser_bind_lb_1_rb__eq__4ab4=rb_intern("AmethystParser_bind_lb_1_rb__eq__4ab4");
sy_AmethystParser_bind_lb_2_rb_=rb_intern("AmethystParser_bind_lb_2_rb_");
sy_AmethystParser_bind_lb_3_rb__eq__507c=rb_intern("AmethystParser_bind_lb_3_rb__eq__507c");
sy_AmethystParser_bind_lb_4_rb_=rb_intern("AmethystParser_bind_lb_4_rb_");
sy_AmethystParser_bind_lb_4_rb__dot__e4b4=rb_intern("AmethystParser_bind_lb_4_rb__dot__e4b4");
sy_AmethystParser_bind_lb_4_rb__pl__13b0=rb_intern("AmethystParser_bind_lb_4_rb__pl__13b0");
sy_AmethystParser_bind_lb_5_rb_=rb_intern("AmethystParser_bind_lb_5_rb_");
sy_AmethystParser_bind_lb_5_rb__dot__028b=rb_intern("AmethystParser_bind_lb_5_rb__dot__028b");
sy_AmethystParser_bind_lb_6_rb_=rb_intern("AmethystParser_bind_lb_6_rb_");
sy_AmethystParser_bind_lb_7_rb_=rb_intern("AmethystParser_bind_lb_7_rb_");
sy_AmethystParser_bind_lb_9_rb__pl__82ef=rb_intern("AmethystParser_bind_lb_9_rb__pl__82ef");
rb_define_method(cls_AmethystParser,"__args",AmethystParser___args,2);
rb_define_method(cls_AmethystParser,"_args",AmethystParser__args,2);
rb_define_method(cls_AmethystParser,"args",AmethystParser_args,2);
rb_define_method(cls_AmethystParser,"argsOpt",AmethystParser_argsOpt,0);
rb_define_method(cls_AmethystParser,"call",AmethystParser_call,0);
rb_define_method(cls_AmethystParser,"choice",AmethystParser_choice,0);
rb_define_method(cls_AmethystParser,"className",AmethystParser_className,0);
rb_define_method(cls_AmethystParser,"collect",AmethystParser_collect,1);
rb_define_method(cls_AmethystParser,"eChar",AmethystParser_eChar,0);
rb_define_method(cls_AmethystParser,"expression",AmethystParser_expression,0);
rb_define_method(cls_AmethystParser,"grammar",AmethystParser_grammar,0);
rb_define_method(cls_AmethystParser,"host_expr",AmethystParser_host_expr,0);
rb_define_method(cls_AmethystParser,"igrammar",AmethystParser_igrammar,0);
rb_define_method(cls_AmethystParser,"key",AmethystParser_key,0);
rb_define_method(cls_AmethystParser,"line_host_expr",AmethystParser_line_host_expr,0);
rb_define_method(cls_AmethystParser,"name",AmethystParser_name,0);
rb_define_method(cls_AmethystParser,"nr",AmethystParser_nr,0);
rb_define_method(cls_AmethystParser,"postfixed",AmethystParser_postfixed,0);
rb_define_method(cls_AmethystParser,"prefixed",AmethystParser_prefixed,0);
rb_define_method(cls_AmethystParser,"procargs",AmethystParser_procargs,0);
rb_define_method(cls_AmethystParser,"procargs2",AmethystParser_procargs2,0);
rb_define_method(cls_AmethystParser,"rubyarg",AmethystParser_rubyarg,0);
rb_define_method(cls_AmethystParser,"rule",AmethystParser_rule,0);
rb_define_method(cls_AmethystParser,"ruleargs",AmethystParser_ruleargs,0);
rb_define_method(cls_AmethystParser,"sequence",AmethystParser_sequence,0);
rb_define_method(cls_AmethystParser,"term",AmethystParser_term,0);
 rb_eval_string("testversionparser('f7bf03c48eb94ce967b1d3e78373350e')");}
