#include "cthyst.h"
VALUE cls_AmethystParser;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE AmethystCore_anything(VALUE self );
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser___args(VALUE self ,VALUE,VALUE);
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_addargs(VALUE self );
VALUE AmethystParser_application(VALUE self );
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_argsOpt(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_atomicHostExpr(VALUE self );
VALUE AmethystParser_choice(VALUE self );
VALUE AmethystParser_className(VALUE self );
VALUE AmethystParser_collect(VALUE self ,VALUE a0);
VALUE AmethystParser_eChar(VALUE self );
VALUE AmethystParser_expression(VALUE self );
VALUE AmethystParser_grammar(VALUE self );
VALUE AmethystParser_igrammar(VALUE self );
VALUE AmethystParser_inlineHostExpr(VALUE self );
VALUE AmethystParser_key(VALUE self );
VALUE AmethystParser_modifier(VALUE self );
VALUE AmethystParser_name(VALUE self );
VALUE AmethystParser_nr(VALUE self );
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
static VALUE s__pl__26b1;
static VALUE s__qu__3590;
static VALUE s__rb__0fbd;
static VALUE s__re__cbb1;
static VALUE s__rp__9371;
static VALUE s__td__4c76;
static VALUE s__ti__3389;
static VALUE sy_AmethystParser_Act_lb_Args_140b;
static VALUE sy_AmethystParser_Act_lb_bind_3e5d;
static VALUE sy_AmethystParser_Apply_lb__dq_a_eeac;
static VALUE sy_AmethystParser_Apply_lb__dq_c_efc7;
static VALUE sy_AmethystParser_Apply_lb__dq_e_84a7;
static VALUE sy_AmethystParser_Apply_lb__dq_r_7dcf;
static VALUE sy_AmethystParser_Apply_lb__dq_r_8a32;
static VALUE sy_AmethystParser_Apply_lb__dq_r_9307;
static VALUE sy_AmethystParser_Apply_lb__dq_s_e377;
static VALUE sy_AmethystParser_Apply_lb__dq_t_f6cb;
static VALUE sy_AmethystParser_Apply_lb_bi_9e40;
static VALUE sy_AmethystParser_Args_lb__le__co_a_727b;
static VALUE sy_AmethystParser_Args_lb__le__co_a_8e59;
static VALUE sy_AmethystParser_Args_lb__le__co_a_8ff0;
static VALUE sy_AmethystParser_Comment_lb__ff7a;
static VALUE sy_AmethystParser_Exp_lb__bod_727d;
static VALUE sy_AmethystParser_Global_lb_b_5e6a;
static VALUE sy_AmethystParser_Grammar_dot__80c6;
static VALUE sy_AmethystParser_Key_lb_bind_41d1;
static VALUE sy_AmethystParser_Lookahea_8dff;
static VALUE sy_AmethystParser_Many_lb_bin_8cb5;
static VALUE sy_AmethystParser_Nested_lb_b_be01;
static VALUE sy_AmethystParser_Or_dot_creat_67f0;
static VALUE sy_AmethystParser_Or_lb_bind_lb__b09f;
static VALUE sy_AmethystParser_Pass_lb_bin_5be3;
static VALUE sy_AmethystParser_Pred_lb_bin_c1a5;
static VALUE sy_AmethystParser_Result_lb__le__834d;
static VALUE sy_AmethystParser_Rule_dot_cre_e3af;
static VALUE sy_AmethystParser_Seq_dot_crea_abce;
static VALUE sy_AmethystParser_Seq_lb_Cut_lb__44e6;
static VALUE sy_AmethystParser_Seq_lb__Bin_9066;
static VALUE sy_AmethystParser_Strin_lb_co_86e5;
static VALUE sy_AmethystParser__Bind_lp_bi_186a;
static VALUE sy_AmethystParser__Local_lp_b_a39a;
static VALUE sy_AmethystParser__append_lp__01d0;
static VALUE sy_AmethystParser__append_lp__0605;
static VALUE sy_AmethystParser__append_lp__0e08;
static VALUE sy_AmethystParser__append_lp__0eeb;
static VALUE sy_AmethystParser__append_lp__1023;
static VALUE sy_AmethystParser__append_lp__29a3;
static VALUE sy_AmethystParser__append_lp__2bd5;
static VALUE sy_AmethystParser__append_lp__40ba;
static VALUE sy_AmethystParser__append_lp__473a;
static VALUE sy_AmethystParser__append_lp__4de3;
static VALUE sy_AmethystParser__append_lp__4f82;
static VALUE sy_AmethystParser__append_lp__54e8;
static VALUE sy_AmethystParser__append_lp__66a2;
static VALUE sy_AmethystParser__append_lp__6f56;
static VALUE sy_AmethystParser__append_lp__8061;
static VALUE sy_AmethystParser__append_lp__80de;
static VALUE sy_AmethystParser__append_lp__81ec;
static VALUE sy_AmethystParser__append_lp__835a;
static VALUE sy_AmethystParser__append_lp__b2a5;
static VALUE sy_AmethystParser__append_lp__b494;
static VALUE sy_AmethystParser__append_lp__b6c7;
static VALUE sy_AmethystParser__append_lp__be4f;
static VALUE sy_AmethystParser__append_lp__cbd1;
static VALUE sy_AmethystParser__append_lp__d113;
static VALUE sy_AmethystParser__append_lp__d472;
static VALUE sy_AmethystParser__append_lp__dd73;
static VALUE sy_AmethystParser__append_lp__f46e;
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
static VALUE sy_AmethystParser__di__lb__dot__co__bs__lb__rb__di__d117;
static VALUE sy_AmethystParser__dq__bs__bs__sh__le_bin_d412;
static VALUE sy_AmethystParser__dq__le__sh__le_bind_8330;
static VALUE sy_AmethystParser__dq__sh__dq__b65f;
static VALUE sy_AmethystParser__lb_Args_lb__le__co__7a9f;
static VALUE sy_AmethystParser__lb_bind_lb_3_rb__d9c4;
static VALUE sy_AmethystParser__lp_bind_lb_1_rb__a724;
static VALUE sy_AmethystParser__lp_bind_lb_5_rb__7170;
static VALUE sy_AmethystParser__qu__sh__qu__pl__qu__le__qu__b26e;
static VALUE sy_AmethystParser_a_eq_autova_9797;
static VALUE sy_AmethystParser_a_eq_autova_ece2;
static VALUE sy_AmethystParser_bind_lb_0_rb__sp__f8b9;
static VALUE sy_AmethystParser_bind_lb_10_rb__6884;
static VALUE sy_AmethystParser_bind_lb_11_rb__37a8;
static VALUE sy_AmethystParser_bind_lb_1_rb__eq__4ab4;
static VALUE sy_AmethystParser_bind_lb_1_rb__ti__cfcb;
static VALUE sy_AmethystParser_bind_lb_3_rb__eq__507c;
static VALUE sy_AmethystParser_bind_lb_4_rb__pl__13b0;
static VALUE sy_AmethystParser_bind_lb_4_rb__ti__18da;
static VALUE sy_AmethystParser_bind_lb_5_rb__pl__5627;
static VALUE sy_AmethystParser_bind_lb_5_rb__ti__66be;
static VALUE sy_AmethystParser_bind_lb_6_rb__eq__9525;
static VALUE sy_AmethystParser_bind_lb_9_rb__pl__82ef;
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(7); bind_aset(bind,0/*o*/,a0);bind_aset(bind,5/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*o*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),"",0)) goto fail; else ame_setpos(self,ame_getpos(self)+0);it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*r*/,it);
it=bind_aget(bind,5/*c*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);it=bind_aget(bind,4/*r*/); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(4); bind_aset(bind,0/*o*/,a0);bind_aset(bind,1/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=bind_aget(bind,0/*o*/); arg0=it;it=bind_aget(bind,1/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(fail); bind_aset(bind,2/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_8ff0,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_addargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*result*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);  it=c_Args; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,3/*name*/,it);
it=rb_funcall(self,sy_AmethystParser__Local_lp_b_a39a,1,bind);  bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto break1;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__1023,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,1/*autovar*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__sp__f8b9,1,bind);  bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_application(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(18);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Amethyst_spaces(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),"",0)) goto fail; else ame_setpos(self,ame_getpos(self)+0);  it=AmethystParser_name(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*klas*/,it);
if (strncmp(ame_curstr(self),"::",2)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+2);  it=AmethystParser_name(self ); FAILTEST(alt1_2); bind_aset(bind,4/*rule*/,it);
it=rb_funcall(self,sy_AmethystParser__lb_bind_lb_3_rb__d9c4,1,bind);  bind_aset(bind,4/*rule*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*rule*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(39):;case UC(41) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(fail);it=rb_ary_new3(0); bind_aset(bind,5/*_result*/,it);
 break;case UC(40) ... UC(40):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"(",1)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+1);  it=Amethyst_spaces(self ); FAILTEST(alt2_2);if (strncmp(ame_curstr(self),"",0)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+0);it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d472,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,6/*autovar*/); bind_aset(bind,8/*r*/,it);
if (strncmp(ame_curstr(self),")",1)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+1);it=bind_aget(bind,8/*r*/); bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/); bind_aset(bind,10/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_10_rb__6884,1,bind);  bind_aset(bind,11/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,11/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystParser_procargs(self ); FAILTEST(pass2); bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt2_2;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3);it=rb_ary_new3(0); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;}it=bind_aget(bind,5/*_result*/); bind_aset(bind,16/*arg*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb_bi_9e40,1,bind);  bind_aset(bind,17/*_result*/,it);
it=bind_aget(bind,17/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(15); bind_aset(bind,2/*o*/,a0);bind_aset(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*c*/); bind_aset(bind,1/*c*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,3/*o*/,it);
it=bind_aget(bind,3/*o*/); bind_aset(bind,4/*s*/,it);
 it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),"",0)) goto fail; else ame_setpos(self,ame_getpos(self)+0);it=rb_ary_new3(0); bind_aset(bind,5/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__6f56,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,5/*autovar*/); bind_aset(bind,7/*r*/,it);
it=bind_aget(bind,1/*c*/); bind_aset(bind,4/*s*/,it);
 it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);it=bind_aget(bind,7/*r*/); bind_aset(bind,8/*_result*/,it);
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
VALUE AmethystParser_argsOpt(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(18); bind_aset(bind,2/*o*/,a0);bind_aset(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*c*/); bind_aset(bind,1/*c*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,3/*o*/,it);
it=bind_aget(bind,1/*c*/); bind_aset(bind,4/*c*/,it);
it=bind_aget(bind,3/*o*/); bind_aset(bind,5/*o*/,it);
it=bind_aget(bind,5/*o*/); bind_aset(bind,6/*s*/,it);
 it=bind_aget(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,6/*s*/);  it=Amethyst_spaces(self ); FAILTEST(alt1_2);if (strncmp(ame_curstr(self),"",0)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+0);it=rb_ary_new3(0); bind_aset(bind,7/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b6c7,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,7/*autovar*/); bind_aset(bind,9/*r*/,it);
it=bind_aget(bind,4/*c*/); bind_aset(bind,6/*s*/,it);
 it=bind_aget(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,6/*s*/);it=bind_aget(bind,9/*r*/); bind_aset(bind,10/*_result*/,it);
it=bind_aget(bind,10/*_result*/); bind_aset(bind,11/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_11_rb__37a8,1,bind);  bind_aset(bind,12/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,12/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystParser_procargs(self ); FAILTEST(pass2); bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,15/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,15/*autovar*/); bind_aset(bind,16/*_result*/,it);
it=bind_aget(bind,16/*_result*/); bind_aset(bind,17/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0); bind_aset(bind,17/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,17/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_atomicHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_endline(self ); FAILTEST(alt1_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2); 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3); 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
  it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser__dq__le__sh__le_bind_8330,1,bind);  bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,3/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(pass2); bind_aset(bind,5/*autovar*/,it);
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
VALUE AmethystParser_choice(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*f*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_sequence(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_obj_clone(s_); arg0=it; it=Amethyst_token(self ,arg0); FAILTEST(break1);  it=AmethystParser_sequence(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=bind_aget(bind,0/*f*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0); bind_aset(bind,5/*_result*/,it);
 
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
it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb__ti__66be,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*ors*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystParser_a_eq_autova_ece2,1,bind);  bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_eChar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(91):;case UC(93) ... UC(255):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,0/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__qu__pl__qu__le__qu__b26e,1,bind);  bind_aset(bind,1/*o*/,it);
 it=bind_aget(bind,1/*o*/); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2); bind_aset(bind,2/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_8e59,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__lp_bind_lb_5_rb__7170,1,bind); FAILTEST(alt1_3);it=bind_aget(bind,5/*c*/); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC(92) ... UC(92):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"\\",1)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__lp_bind_lb_5_rb__7170,1,bind); FAILTEST(alt2_2);it=bind_aget(bind,5/*c*/); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__dq__bs__bs__sh__le_bin_d412,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,0/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__qu__pl__qu__le__qu__b26e,1,bind);  bind_aset(bind,1/*o*/,it);
 it=bind_aget(bind,1/*o*/); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt2_3); bind_aset(bind,2/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_8e59,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,5/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__lp_bind_lb_5_rb__7170,1,bind); FAILTEST(alt2_4);it=bind_aget(bind,5/*c*/); bind_aset(bind,6/*_result*/,it);
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

  it=Amethyst_spaces(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),"amethyst",8)) goto fail; else ame_setpos(self,ame_getpos(self)+8);  it=Amethyst_spaces(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),"",0)) goto fail; else ame_setpos(self,ame_getpos(self)+0);  it=AmethystParser_name(self ); FAILTEST(fail); bind_aset(bind,0/*name*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2);if (strncmp(ame_curstr(self),"<",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1);  it=Amethyst_spaces(self ); FAILTEST(alt1_2);if (strncmp(ame_curstr(self),"",0)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+0);  it=AmethystParser_name(self ); FAILTEST(alt1_2); bind_aset(bind,1/*parent*/,it);
 
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
it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__ti__18da,1,bind);  bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_grammar(self ); FAILTEST(alt1_3); bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,sy_AmethystParser__append_lp__81ec,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,6/*a*/,it);
it=bind_aget(bind,6/*a*/); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_inlineHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

if (strncmp(ame_curstr(self),"{",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);  it=Amethyst_spaces(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),"",0)) goto fail; else ame_setpos(self,ame_getpos(self)+0);it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*r*/,it);
if (strncmp(ame_curstr(self),"}",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);it=bind_aget(bind,2/*r*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser__lb_Args_lb__le__co__7a9f,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_key(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Amethyst_spaces(self ); FAILTEST(fail);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"@",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_className(self ); FAILTEST(alt1_2); bind_aset(bind,0/*name*/,it);
it=rb_funcall(self,sy_AmethystParser_Result_lb__le__834d,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"@",1)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_name(self ); FAILTEST(alt1_3); bind_aset(bind,0/*name*/,it);
it=rb_funcall(self,sy_AmethystParser_Key_lb_bind_41d1,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"@@",2)) goto alt1_4; else ame_setpos(self,ame_getpos(self)+2);  it=AmethystParser_name(self ); FAILTEST(alt1_4); bind_aset(bind,0/*name*/,it);
it=rb_funcall(self,sy_AmethystParser_Global_lb_b_5e6a,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_modifier(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_term(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,1/*s*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt1_3);it=bind_aget(bind,1/*s*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=bind_aget(bind,2/*s*/);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_endline(self ); FAILTEST(alt2_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt2_2); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
  it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*c*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__ff7a,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
 it=rb_funcall(self,sy_AmethystParser__di__lb__a_mi_zA_mi__d9bf,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);  it=rb_funcall(self,sy_AmethystParser__di__lb__a_mi_zA_mi__6e11,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,5/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb__ti__66be,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2);if (strncmp(ame_curstr(self),"",0)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+0);  it=AmethystParser_name(self ); FAILTEST(alt1_2);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(39):;case UC(41) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt1_2); break;case UC(40) ... UC(40):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 if (strncmp(ame_curstr(self),"(",1)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+1);  it=Amethyst_spaces(self ); FAILTEST(alt2_2);if (strncmp(ame_curstr(self),"",0)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+0);it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*r*/,it);
if (strncmp(ame_curstr(self),")",1)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+1);it=bind_aget(bind,2/*r*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__pl__13b0,1,bind);  bind_aset(bind,5/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystParser_procargs(self ); FAILTEST(pass2);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt2_2;
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 break;}  it=Amethyst_spaces(self ); FAILTEST(alt1_2);if (strncmp(ame_curstr(self),"=",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(14);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2);if (strncmp(ame_curstr(self),"&",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_2); bind_aset(bind,0/*expr*/,it);
it=rb_funcall(self,sy_AmethystParser_Pred_lb_bin_c1a5,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_3);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(126) ... UC(126):; if (strncmp(ame_curstr(self),"~",1)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__td__4c76); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*neg*/,it);
 break;case UC(38) ... UC(38):; if (strncmp(ame_curstr(self),"&",1)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s_2); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*neg*/,it);
 break;default:;   it=Amethyst_fails(self ); FAILTEST(alt1_3); break;}  it=AmethystParser_prefixed(self ); FAILTEST(alt1_3); bind_aset(bind,5/*m*/,it);
it=rb_funcall(self,sy_AmethystParser_Lookahea_8dff,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_4;}
   it=AmethystParser_modifier(self ); FAILTEST(alt2_2); bind_aset(bind,6/*from*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_4;}
   it=Amethyst_spaces(self ); FAILTEST(alt2_3);if (strncmp(ame_curstr(self),"",0)) goto alt2_3; else ame_setpos(self,ame_getpos(self)+0);int oldpos3=ame_getpos(self);
  it=rb_funcall(self,sy_AmethystParser__di__lb__dot__co__bs__lb__rb__di__d117,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(reject1); x=1; goto accept3;  reject1: x=0; accept3: it=Qnil; ame_setpos(self,oldpos3); if (x==0) goto alt2_3;int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
   it=Amethyst_spaces(self ); FAILTEST(alt3_2);if (strncmp(ame_curstr(self),".",1)) goto alt3_2; else ame_setpos(self,ame_getpos(self)+1); 
ame_setcut(self,Qnil);goto accept4;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept4;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_3;
 accept4:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_eeac,1,bind);  bind_aset(bind,6/*from*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_4;
 accept2:;
it=rb_ary_new3(0); bind_aset(bind,7/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self); int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst__(self ); FAILTEST(alt4_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt4_2); 
ame_setcut(self,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt4_3); 
ame_setcut(self,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos6); goto break1;
 accept5:;
  it=Amethyst_spaces(self ); FAILTEST(break1);unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(42) ... UC(42):; if (strncmp(ame_curstr(self),"*",1)) goto break1; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__ti__3389); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,8/*one*/,it);
it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_8cb5,1,bind);  bind_aset(bind,6/*from*/,it);
 bind_aset(bind,9/*autovar*/,it);
 break;case UC(43) ... UC(43):; if (strncmp(ame_curstr(self),"+",1)) goto break1; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__pl__26b1); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,8/*one*/,it);
it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_8cb5,1,bind);  bind_aset(bind,6/*from*/,it);
 bind_aset(bind,9/*autovar*/,it);
 break;case UC(58) ... UC(58):; if (strncmp(ame_curstr(self),":",1)) goto break1; else ame_setpos(self,ame_getpos(self)+1);int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos8=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
   it=AmethystParser_key(self ); FAILTEST(alt6_2); bind_aset(bind,10/*name*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt6_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
   it=AmethystParser_name(self ); FAILTEST(alt6_3); bind_aset(bind,10/*name*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt6_3:  ame_setpos(self,oldpos8); goto alt5_2;
 accept7:;
unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(0) ... UC(90):;case UC(92) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt5_2); bind_aset(bind,11/*append*/,it);
 break;case UC(91) ... UC(91):; int oldpos9=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
 if (strncmp(ame_curstr(self),"[]",2)) goto alt7_2; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__lb__rb__d751); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,11/*append*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt7_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
   it=Amethyst_empty(self ); FAILTEST(alt7_3); bind_aset(bind,11/*append*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt7_3:  ame_setpos(self,oldpos9); goto alt5_2;
 accept8:;
 break;}it=rb_funcall(self,sy_AmethystParser__Bind_lp_bi_186a,1,bind);  bind_aset(bind,6/*from*/,it);
 bind_aset(bind,9/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt5_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt5_3); bind_aset(bind,12/*e*/,it);
it=rb_funcall(self,sy_AmethystParser_Seq_lb__Bin_9066,1,bind);  bind_aset(bind,6/*from*/,it);
 bind_aset(bind,9/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt5_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;case UC(61) ... UC(61):; if (strncmp(ame_curstr(self),"=>",2)) goto break1; else ame_setpos(self,ame_getpos(self)+2);  it=AmethystParser_prefixed(self ); FAILTEST(break1); bind_aset(bind,13/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Pass_lb_bin_5be3,1,bind);  bind_aset(bind,6/*from*/,it);
 bind_aset(bind,9/*autovar*/,it);
 break;case UC(63) ... UC(63):; if (strncmp(ame_curstr(self),"?",1)) goto break1; else ame_setpos(self,ame_getpos(self)+1);it=rb_funcall(self,sy_AmethystParser_Or_lb_bind_lb__b09f,1,bind);  bind_aset(bind,6/*from*/,it);
 bind_aset(bind,9/*autovar*/,it);
 break;case UC(91) ... UC(91):; if (strncmp(ame_curstr(self),"[",1)) goto break1; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_expression(self ); FAILTEST(break1); bind_aset(bind,13/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_6_rb__eq__9525,1,bind);   it=Amethyst_spaces(self ); FAILTEST(break1);if (strncmp(ame_curstr(self),"]",1)) goto break1; else ame_setpos(self,ame_getpos(self)+1);it=bind_aget(bind,6/*from*/); bind_aset(bind,6/*from*/,it);
 bind_aset(bind,9/*autovar*/,it);
 break;default:;   it=Amethyst_fails(self ); FAILTEST(break1); break;}it=rb_funcall(self,sy_AmethystParser__append_lp__4f82,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,7/*autovar*/);it=bind_aget(bind,6/*from*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystParser__at_ary_eq__lb__rb_,1,bind); it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__lp_bind_lb_1_rb__a724,1,bind); FAILTEST(alt1_2);it=rb_funcall(self,sy_AmethystParser__at_ary_lt__lt_Ar_59e3,1,bind);  bind_aset(bind,2/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_procargs2(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,sy_AmethystParser__append_lp__29a3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,sy_AmethystParser__at_ary_ff69,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
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
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_3); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_4); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
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
it=rb_funcall(self,sy_AmethystParser__append_lp__40ba,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__ti__cfcb,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos4=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_6;}
   it=Amethyst__(self ); FAILTEST(alt4_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt4_2); 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_6;}
   it=Amethyst_empty(self ); FAILTEST(alt4_3); 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos4); goto alt1_6;
 accept4:;
  it=AmethystParser_key(self ); FAILTEST(alt1_6); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,sy_AmethystParser__di__lb_,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt1_7); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_7:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC(34) ... UC(34):; int oldpos5=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_2); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_3); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_3: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_4); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_4: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"\"",1)) goto alt5_5; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__66a2,1,bind); it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos6; while(1){oldpos6=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(0) ... UC(33):;case UC(35) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break1); bind_aset(bind,14/*autovar*/,it);
 break;case UC(34) ... UC(34):; int oldpos7=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 if (strncmp(ame_curstr(self),"\"",1)) goto alt6_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/);ame_setcut(self,Qtrue); bind_aset(bind,14/*autovar*/,it);
ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt6_3); bind_aset(bind,14/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;}it=rb_funcall(self,sy_AmethystParser__append_lp__473a,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,13/*autovar*/); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__80de,1,bind); it=rb_funcall(self,sy_AmethystParser_Strin_lb_co_86e5,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_5: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt7_2);if (strncmp(ame_curstr(self),":@",2)) goto alt7_2; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_6;}
  it=rb_funcall(self,sy_AmethystParser__di__lb__do__dot__co__rb__di__68eb,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt7_3); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__be4f,1,bind);  
ame_setcut(self,Qnil);goto accept7;
alt7_3: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_6;}
   it=Amethyst_empty(self ); FAILTEST(alt7_4); 
ame_setcut(self,Qnil);goto accept7;
  alt7_4:  ame_setpos(self,oldpos8); goto alt5_6;
 accept7:;
int oldpos9=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_6;}
   it=Amethyst__(self ); FAILTEST(alt8_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt8_2); 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_6;}
   it=Amethyst_empty(self ); FAILTEST(alt8_3); 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos9); goto alt5_6;
 accept8:;
  it=AmethystParser_name(self ); FAILTEST(alt5_6); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__40ba,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__ti__cfcb,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_6: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos10=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_7;}
   it=Amethyst__(self ); FAILTEST(alt9_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt9_2); 
ame_setcut(self,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_7;}
   it=Amethyst_empty(self ); FAILTEST(alt9_3); 
ame_setcut(self,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos10); goto alt5_7;
 accept9:;
  it=AmethystParser_key(self ); FAILTEST(alt5_7); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_7: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,sy_AmethystParser__di__lb_,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt5_8); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_8:  ame_setpos(self,oldpos5); goto fail;
 accept5:;
 break;case UC(39) ... UC(39):; int oldpos11=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_2); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_3); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
alt10_3: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_4); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
alt10_4: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"'",1)) goto alt10_5; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__qu__3590); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0605,1,bind); it=rb_ary_new3(0); bind_aset(bind,17/*autovar*/,it);
int oldpos12; while(1){oldpos12=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(0) ... UC(38):;case UC(40) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break2); bind_aset(bind,18/*autovar*/,it);
 break;case UC(39) ... UC(39):; int oldpos13=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 if (strncmp(ame_curstr(self),"'",1)) goto alt11_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__qu__3590); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/);ame_setcut(self,Qtrue); bind_aset(bind,18/*autovar*/,it);
ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt11_3); bind_aset(bind,18/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept11;
  alt11_3:  ame_setpos(self,oldpos13); goto break2;
 accept11:;
 break;}it=rb_funcall(self,sy_AmethystParser__append_lp__835a,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos12=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos12); it=bind_aget(bind,17/*autovar*/); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0e08,1,bind); it=rb_funcall(self,sy_AmethystParser_Strin_lb_co_86e5,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
alt10_5: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos14=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt10_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt12_2);if (strncmp(ame_curstr(self),":@",2)) goto alt12_2; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept12;
alt12_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt10_6;}
  it=rb_funcall(self,sy_AmethystParser__di__lb__do__dot__co__rb__di__68eb,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt12_3); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__be4f,1,bind);  
ame_setcut(self,Qnil);goto accept12;
alt12_3: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt10_6;}
   it=Amethyst_empty(self ); FAILTEST(alt12_4); 
ame_setcut(self,Qnil);goto accept12;
  alt12_4:  ame_setpos(self,oldpos14); goto alt10_6;
 accept12:;
int oldpos15=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt10_6;}
   it=Amethyst__(self ); FAILTEST(alt13_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt13_2); 
ame_setcut(self,Qnil);goto accept13;
alt13_2: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt10_6;}
   it=Amethyst_empty(self ); FAILTEST(alt13_3); 
ame_setcut(self,Qnil);goto accept13;
  alt13_3:  ame_setpos(self,oldpos15); goto alt10_6;
 accept13:;
  it=AmethystParser_name(self ); FAILTEST(alt10_6); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__40ba,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__ti__cfcb,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
alt10_6: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos16=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt10_7;}
   it=Amethyst__(self ); FAILTEST(alt14_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt14_2); 
ame_setcut(self,Qnil);goto accept14;
alt14_2: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt10_7;}
   it=Amethyst_empty(self ); FAILTEST(alt14_3); 
ame_setcut(self,Qnil);goto accept14;
  alt14_3:  ame_setpos(self,oldpos16); goto alt10_7;
 accept14:;
  it=AmethystParser_key(self ); FAILTEST(alt10_7); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
alt10_7: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,sy_AmethystParser__di__lb_,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt10_8); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept10;
  alt10_8:  ame_setpos(self,oldpos11); goto fail;
 accept10:;
 break;case UC(46) ... UC(46):; int oldpos17=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_2); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_3); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_3: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_4); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_4: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"...",3)) goto alt15_5; else ame_setpos(self,ame_getpos(self)+3);it=rb_obj_clone(s__dot__dot__dot__2f43); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_5: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"..",2)) goto alt15_6; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__dot__dot__58b9); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_6: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos18=ame_getpos(self);
alt16_1: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_7;}
   it=Amethyst_spaces(self ); FAILTEST(alt16_2);if (strncmp(ame_curstr(self),":@",2)) goto alt16_2; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept16;
alt16_2: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_7;}
  it=rb_funcall(self,sy_AmethystParser__di__lb__do__dot__co__rb__di__68eb,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt16_3); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__be4f,1,bind);  
ame_setcut(self,Qnil);goto accept16;
alt16_3: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_7;}
   it=Amethyst_empty(self ); FAILTEST(alt16_4); 
ame_setcut(self,Qnil);goto accept16;
  alt16_4:  ame_setpos(self,oldpos18); goto alt15_7;
 accept16:;
int oldpos19=ame_getpos(self);
alt17_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_7;}
   it=Amethyst__(self ); FAILTEST(alt17_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt17_2); 
ame_setcut(self,Qnil);goto accept17;
alt17_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_7;}
   it=Amethyst_empty(self ); FAILTEST(alt17_3); 
ame_setcut(self,Qnil);goto accept17;
  alt17_3:  ame_setpos(self,oldpos19); goto alt15_7;
 accept17:;
  it=AmethystParser_name(self ); FAILTEST(alt15_7); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__40ba,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__ti__cfcb,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_7: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos20=ame_getpos(self);
alt18_1: ame_setpos(self,oldpos20);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_8;}
   it=Amethyst__(self ); FAILTEST(alt18_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt18_2); 
ame_setcut(self,Qnil);goto accept18;
alt18_2: ame_setpos(self,oldpos20);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_8;}
   it=Amethyst_empty(self ); FAILTEST(alt18_3); 
ame_setcut(self,Qnil);goto accept18;
  alt18_3:  ame_setpos(self,oldpos20); goto alt15_8;
 accept18:;
  it=AmethystParser_key(self ); FAILTEST(alt15_8); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
alt15_8: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,sy_AmethystParser__di__lb_,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt15_9); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept15;
  alt15_9:  ame_setpos(self,oldpos17); goto fail;
 accept15:;
 break;case UC(96) ... UC(96):; int oldpos21=ame_getpos(self);
alt19_1: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"`",1)) goto alt19_2; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_expression(self ); FAILTEST(alt19_2); bind_aset(bind,20/*e*/,it);
if (strncmp(ame_curstr(self),"`",1)) goto alt19_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_funcall(self,sy_AmethystParser_Exp_lb__bod_727d,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept19;
alt19_2: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_3); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept19;
alt19_3: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_4); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept19;
alt19_4: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,2/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,3/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_5); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_727b,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept19;
alt19_5: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos22=ame_getpos(self);
alt20_1: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt20_2);if (strncmp(ame_curstr(self),":@",2)) goto alt20_2; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  
ame_setcut(self,Qnil);goto accept20;
alt20_2: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_6;}
  it=rb_funcall(self,sy_AmethystParser__di__lb__do__dot__co__rb__di__68eb,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt20_3); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__be4f,1,bind);  
ame_setcut(self,Qnil);goto accept20;
alt20_3: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_6;}
   it=Amethyst_empty(self ); FAILTEST(alt20_4); 
ame_setcut(self,Qnil);goto accept20;
  alt20_4:  ame_setpos(self,oldpos22); goto alt19_6;
 accept20:;
int oldpos23=ame_getpos(self);
alt21_1: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_6;}
   it=Amethyst__(self ); FAILTEST(alt21_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt21_2); 
ame_setcut(self,Qnil);goto accept21;
alt21_2: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_6;}
   it=Amethyst_empty(self ); FAILTEST(alt21_3); 
ame_setcut(self,Qnil);goto accept21;
  alt21_3:  ame_setpos(self,oldpos23); goto alt19_6;
 accept21:;
  it=AmethystParser_name(self ); FAILTEST(alt19_6); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__40ba,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__ti__cfcb,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept19;
alt19_6: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos24=ame_getpos(self);
alt22_1: ame_setpos(self,oldpos24);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_7;}
   it=Amethyst__(self ); FAILTEST(alt22_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt22_2); 
ame_setcut(self,Qnil);goto accept22;
alt22_2: ame_setpos(self,oldpos24);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_7;}
   it=Amethyst_empty(self ); FAILTEST(alt22_3); 
ame_setcut(self,Qnil);goto accept22;
  alt22_3:  ame_setpos(self,oldpos24); goto alt19_7;
 accept22:;
  it=AmethystParser_key(self ); FAILTEST(alt19_7); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept19;
alt19_7: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,sy_AmethystParser__di__lb_,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt19_8); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept19;
  alt19_8:  ame_setpos(self,oldpos21); goto fail;
 accept19:;
 break;}it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystParser__at_locals_eq__94df,1,bind); it=rb_funcall(self,sy_AmethystParser__at_bnding_7d3c,1,bind);  bind_aset(bind,0/*bnding*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),"",0)) goto fail; else ame_setpos(self,ame_getpos(self)+0);  it=AmethystParser_name(self ); FAILTEST(fail); bind_aset(bind,1/*name*/,it);
  it=AmethystParser_ruleargs(self ); FAILTEST(fail); bind_aset(bind,2/*args*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),"=",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_expression(self ); FAILTEST(fail); bind_aset(bind,3/*body*/,it);
it=rb_funcall(self,sy_AmethystParser__body_lp_bi_152d,1,bind);  bind_aset(bind,3/*body*/,it);
it=rb_funcall(self,sy_AmethystParser__at_locals_dot__bdc6,1,bind);  bind_aset(bind,4/*locals*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_3_rb__eq__507c,1,bind); it=rb_funcall(self,sy_AmethystParser_Rule_dot_cre_e3af,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(39):;case UC(41) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(fail);it=rb_ary_new3(0); bind_aset(bind,0/*_result*/,it);
 break;case UC(40) ... UC(40):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"(",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1);  it=Amethyst_spaces(self ); FAILTEST(alt1_2);if (strncmp(ame_curstr(self),"",0)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+0);it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,3/*r*/,it);
if (strncmp(ame_curstr(self),")",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1);it=bind_aget(bind,3/*r*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb__pl__5627,1,bind);  bind_aset(bind,6/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,6/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystParser_procargs(self ); FAILTEST(pass2); bind_aset(bind,8/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*_result*/,it);
it=bind_aget(bind,10/*_result*/); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;}it=bind_aget(bind,0/*_result*/); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,11/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystParser_addargs(self ); FAILTEST(pass4); bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto pass3;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto fail;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/);
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
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(21);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*x*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2);if (strncmp(ame_curstr(self),"",0)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+0);  it=AmethystParser_className(self ); FAILTEST(alt1_2); bind_aset(bind,4/*cls*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_c_efc7,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_3);if (strncmp(ame_curstr(self),"nested",6)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+6);if (strncmp(ame_curstr(self),"(",1)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_expression(self ); FAILTEST(alt1_3); bind_aset(bind,6/*expr*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt1_3);if (strncmp(ame_curstr(self),")",1)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+1);it=rb_funcall(self,sy_AmethystParser_Nested_lb_b_be01,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_4);if (strncmp(ame_curstr(self),"break",5)) goto alt1_4; else ame_setpos(self,ame_getpos(self)+5);it=rb_funcall(self,sy_AmethystParser_Seq_lb_Cut_lb__44e6,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_application(self ); FAILTEST(alt1_5); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt1_6); bind_aset(bind,7/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_Args_140b,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_7);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(44):;case UC(46) ... UC(255):; if (strncmp(ame_curstr(self),"",0)) goto alt1_7; else ame_setpos(self,ame_getpos(self)+0);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_7); bind_aset(bind,3/*x*/,it);
 break;case UC(45) ... UC(45):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_7;}
 if (strncmp(ame_curstr(self),"->",2)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+2);  it=AmethystParser_atomicHostExpr(self ); FAILTEST(alt2_2); bind_aset(bind,3/*x*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_7;}
 if (strncmp(ame_curstr(self),"",0)) goto alt2_3; else ame_setpos(self,ame_getpos(self)+0);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt2_3); bind_aset(bind,3/*x*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_7;
 accept2:;
 break;}it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_3e5d,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_8);if (strncmp(ame_curstr(self),"\"",1)) goto alt1_8; else ame_setpos(self,ame_getpos(self)+1);it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(0) ... UC(33):;case UC(35) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break1); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0eeb,1,bind); it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*autovar*/,it);
 break;case UC(34) ... UC(34):; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 if (strncmp(ame_curstr(self),"\"",1)) goto alt3_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue); bind_aset(bind,9/*autovar*/,it);
ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt3_3); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0eeb,1,bind); it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto break1;
 accept3:;
 break;}it=rb_funcall(self,sy_AmethystParser__append_lp__01d0,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,1/*autovar*/);it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_t_f6cb,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_9);if (strncmp(ame_curstr(self),"'",1)) goto alt1_9; else ame_setpos(self,ame_getpos(self)+1);it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(0) ... UC(38):;case UC(40) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break2); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b494,1,bind); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 break;case UC(39) ... UC(39):; int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 if (strncmp(ame_curstr(self),"'",1)) goto alt4_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue); bind_aset(bind,11/*autovar*/,it);
ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt4_3); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b494,1,bind); it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos6); goto break2;
 accept4:;
 break;}it=rb_funcall(self,sy_AmethystParser__append_lp__f46e,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,2/*autovar*/);it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_s_e377,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt1_10); bind_aset(bind,12/*a*/,it);
if (strncmp(ame_curstr(self),"...",3)) goto alt1_10; else ame_setpos(self,ame_getpos(self)+3);  it=Amethyst_number(self ); FAILTEST(alt1_10); bind_aset(bind,13/*b*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_9307,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt1_11); bind_aset(bind,12/*a*/,it);
if (strncmp(ame_curstr(self),"..",2)) goto alt1_11; else ame_setpos(self,ame_getpos(self)+2);  it=Amethyst_number(self ); FAILTEST(alt1_11); bind_aset(bind,13/*b*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_8a32,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt1_12); bind_aset(bind,7/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_e_84a7,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_12: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__lt__524a); bind_aset(bind,14/*s*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt1_13);it=bind_aget(bind,14/*s*/); bind_aset(bind,15/*s*/,it);
 it=bind_aget(bind,15/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_13);it=bind_aget(bind,15/*s*/);it=rb_ary_new3(0); bind_aset(bind,16/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self); int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,14/*s*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt5_2);it=rb_obj_clone(s__gt__cedf); bind_aset(bind,15/*s*/,it);
if (strncmp(ame_curstr(self),">",1)) goto alt5_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue); bind_aset(bind,17/*autovar*/,it);
ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
   it=AmethystParser_eChar(self ); FAILTEST(alt5_3); bind_aset(bind,18/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__2bd5,1,bind); it=bind_aget(bind,18/*autovar*/); bind_aset(bind,17/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto break3;
 accept5:;
it=rb_funcall(self,sy_AmethystParser__append_lp__54e8,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,16/*autovar*/);it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_7dcf,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_13: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_14);if (strncmp(ame_curstr(self),"(",1)) goto alt1_14; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_expression(self ); FAILTEST(alt1_14); bind_aset(bind,3/*x*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt1_14);if (strncmp(ame_curstr(self),")",1)) goto alt1_14; else ame_setpos(self,ame_getpos(self)+1);unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC(0) ... UC(90):;case UC(92) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt1_14);it=bind_aget(bind,3/*x*/); bind_aset(bind,5/*_result*/,it);
 break;case UC(91) ... UC(91):; int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_14;}
 if (strncmp(ame_curstr(self),"[]",2)) goto alt6_2; else ame_setpos(self,ame_getpos(self)+2);it=bind_aget(bind,3/*x*/); bind_aset(bind,19/*ors*/,it);
it=rb_funcall(self,sy_AmethystParser_a_eq_autova_9797,1,bind);  bind_aset(bind,20/*_result*/,it);
it=bind_aget(bind,20/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_14;}
   it=Amethyst_empty(self ); FAILTEST(alt6_3);it=bind_aget(bind,3/*x*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos9); goto alt1_14;
 accept6:;
 break;} 
ame_setcut(self,Qnil);goto accept1;
  alt1_14:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,5/*_result*/);
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
s__pl__26b1=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__pl__26b1);
s__qu__3590=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__qu__3590);
s__rb__0fbd=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__rb__0fbd);
s__re__cbb1=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__re__cbb1);
s__rp__9371=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__rp__9371);
s__td__4c76=rb_str_new2("~");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__td__4c76);
s__ti__3389=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__ti__3389);
switchhashAmethystParser1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashAmethystParser1);
sy_AmethystParser_Act_lb_Args_140b=rb_intern("AmethystParser_Act_lb_Args_140b");
sy_AmethystParser_Act_lb_bind_3e5d=rb_intern("AmethystParser_Act_lb_bind_3e5d");
sy_AmethystParser_Apply_lb__dq_a_eeac=rb_intern("AmethystParser_Apply_lb__dq_a_eeac");
sy_AmethystParser_Apply_lb__dq_c_efc7=rb_intern("AmethystParser_Apply_lb__dq_c_efc7");
sy_AmethystParser_Apply_lb__dq_e_84a7=rb_intern("AmethystParser_Apply_lb__dq_e_84a7");
sy_AmethystParser_Apply_lb__dq_r_7dcf=rb_intern("AmethystParser_Apply_lb__dq_r_7dcf");
sy_AmethystParser_Apply_lb__dq_r_8a32=rb_intern("AmethystParser_Apply_lb__dq_r_8a32");
sy_AmethystParser_Apply_lb__dq_r_9307=rb_intern("AmethystParser_Apply_lb__dq_r_9307");
sy_AmethystParser_Apply_lb__dq_s_e377=rb_intern("AmethystParser_Apply_lb__dq_s_e377");
sy_AmethystParser_Apply_lb__dq_t_f6cb=rb_intern("AmethystParser_Apply_lb__dq_t_f6cb");
sy_AmethystParser_Apply_lb_bi_9e40=rb_intern("AmethystParser_Apply_lb_bi_9e40");
sy_AmethystParser_Args_lb__le__co_a_727b=rb_intern("AmethystParser_Args_lb__le__co_a_727b");
sy_AmethystParser_Args_lb__le__co_a_8e59=rb_intern("AmethystParser_Args_lb__le__co_a_8e59");
sy_AmethystParser_Args_lb__le__co_a_8ff0=rb_intern("AmethystParser_Args_lb__le__co_a_8ff0");
sy_AmethystParser_Comment_lb__ff7a=rb_intern("AmethystParser_Comment_lb__ff7a");
sy_AmethystParser_Exp_lb__bod_727d=rb_intern("AmethystParser_Exp_lb__bod_727d");
sy_AmethystParser_Global_lb_b_5e6a=rb_intern("AmethystParser_Global_lb_b_5e6a");
sy_AmethystParser_Grammar_dot__80c6=rb_intern("AmethystParser_Grammar_dot__80c6");
sy_AmethystParser_Key_lb_bind_41d1=rb_intern("AmethystParser_Key_lb_bind_41d1");
sy_AmethystParser_Lookahea_8dff=rb_intern("AmethystParser_Lookahea_8dff");
sy_AmethystParser_Many_lb_bin_8cb5=rb_intern("AmethystParser_Many_lb_bin_8cb5");
sy_AmethystParser_Nested_lb_b_be01=rb_intern("AmethystParser_Nested_lb_b_be01");
sy_AmethystParser_Or_dot_creat_67f0=rb_intern("AmethystParser_Or_dot_creat_67f0");
sy_AmethystParser_Or_lb_bind_lb__b09f=rb_intern("AmethystParser_Or_lb_bind_lb__b09f");
sy_AmethystParser_Pass_lb_bin_5be3=rb_intern("AmethystParser_Pass_lb_bin_5be3");
sy_AmethystParser_Pred_lb_bin_c1a5=rb_intern("AmethystParser_Pred_lb_bin_c1a5");
sy_AmethystParser_Result_lb__le__834d=rb_intern("AmethystParser_Result_lb__le__834d");
sy_AmethystParser_Rule_dot_cre_e3af=rb_intern("AmethystParser_Rule_dot_cre_e3af");
sy_AmethystParser_Seq_dot_crea_abce=rb_intern("AmethystParser_Seq_dot_crea_abce");
sy_AmethystParser_Seq_lb_Cut_lb__44e6=rb_intern("AmethystParser_Seq_lb_Cut_lb__44e6");
sy_AmethystParser_Seq_lb__Bin_9066=rb_intern("AmethystParser_Seq_lb__Bin_9066");
sy_AmethystParser_Strin_lb_co_86e5=rb_intern("AmethystParser_Strin_lb_co_86e5");
sy_AmethystParser__Bind_lp_bi_186a=rb_intern("AmethystParser__Bind_lp_bi_186a");
sy_AmethystParser__Local_lp_b_a39a=rb_intern("AmethystParser__Local_lp_b_a39a");
sy_AmethystParser__append_lp__01d0=rb_intern("AmethystParser__append_lp__01d0");
sy_AmethystParser__append_lp__0605=rb_intern("AmethystParser__append_lp__0605");
sy_AmethystParser__append_lp__0e08=rb_intern("AmethystParser__append_lp__0e08");
sy_AmethystParser__append_lp__0eeb=rb_intern("AmethystParser__append_lp__0eeb");
sy_AmethystParser__append_lp__1023=rb_intern("AmethystParser__append_lp__1023");
sy_AmethystParser__append_lp__29a3=rb_intern("AmethystParser__append_lp__29a3");
sy_AmethystParser__append_lp__2bd5=rb_intern("AmethystParser__append_lp__2bd5");
sy_AmethystParser__append_lp__40ba=rb_intern("AmethystParser__append_lp__40ba");
sy_AmethystParser__append_lp__473a=rb_intern("AmethystParser__append_lp__473a");
sy_AmethystParser__append_lp__4de3=rb_intern("AmethystParser__append_lp__4de3");
sy_AmethystParser__append_lp__4f82=rb_intern("AmethystParser__append_lp__4f82");
sy_AmethystParser__append_lp__54e8=rb_intern("AmethystParser__append_lp__54e8");
sy_AmethystParser__append_lp__66a2=rb_intern("AmethystParser__append_lp__66a2");
sy_AmethystParser__append_lp__6f56=rb_intern("AmethystParser__append_lp__6f56");
sy_AmethystParser__append_lp__8061=rb_intern("AmethystParser__append_lp__8061");
sy_AmethystParser__append_lp__80de=rb_intern("AmethystParser__append_lp__80de");
sy_AmethystParser__append_lp__81ec=rb_intern("AmethystParser__append_lp__81ec");
sy_AmethystParser__append_lp__835a=rb_intern("AmethystParser__append_lp__835a");
sy_AmethystParser__append_lp__b2a5=rb_intern("AmethystParser__append_lp__b2a5");
sy_AmethystParser__append_lp__b494=rb_intern("AmethystParser__append_lp__b494");
sy_AmethystParser__append_lp__b6c7=rb_intern("AmethystParser__append_lp__b6c7");
sy_AmethystParser__append_lp__be4f=rb_intern("AmethystParser__append_lp__be4f");
sy_AmethystParser__append_lp__cbd1=rb_intern("AmethystParser__append_lp__cbd1");
sy_AmethystParser__append_lp__d113=rb_intern("AmethystParser__append_lp__d113");
sy_AmethystParser__append_lp__d472=rb_intern("AmethystParser__append_lp__d472");
sy_AmethystParser__append_lp__dd73=rb_intern("AmethystParser__append_lp__dd73");
sy_AmethystParser__append_lp__f46e=rb_intern("AmethystParser__append_lp__f46e");
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
sy_AmethystParser__di__lb__dot__co__bs__lb__rb__di__d117=rb_intern("AmethystParser__di__lb__dot__co__bs__lb__rb__di__d117");
sy_AmethystParser__dq__bs__bs__sh__le_bin_d412=rb_intern("AmethystParser__dq__bs__bs__sh__le_bin_d412");
sy_AmethystParser__dq__le__sh__le_bind_8330=rb_intern("AmethystParser__dq__le__sh__le_bind_8330");
sy_AmethystParser__dq__sh__dq__b65f=rb_intern("AmethystParser__dq__sh__dq__b65f");
sy_AmethystParser__lb_Args_lb__le__co__7a9f=rb_intern("AmethystParser__lb_Args_lb__le__co__7a9f");
sy_AmethystParser__lb_bind_lb_3_rb__d9c4=rb_intern("AmethystParser__lb_bind_lb_3_rb__d9c4");
sy_AmethystParser__lp_bind_lb_1_rb__a724=rb_intern("AmethystParser__lp_bind_lb_1_rb__a724");
sy_AmethystParser__lp_bind_lb_5_rb__7170=rb_intern("AmethystParser__lp_bind_lb_5_rb__7170");
sy_AmethystParser__qu__sh__qu__pl__qu__le__qu__b26e=rb_intern("AmethystParser__qu__sh__qu__pl__qu__le__qu__b26e");
sy_AmethystParser_a_eq_autova_9797=rb_intern("AmethystParser_a_eq_autova_9797");
sy_AmethystParser_a_eq_autova_ece2=rb_intern("AmethystParser_a_eq_autova_ece2");
sy_AmethystParser_bind_lb_0_rb__sp__f8b9=rb_intern("AmethystParser_bind_lb_0_rb__sp__f8b9");
sy_AmethystParser_bind_lb_10_rb__6884=rb_intern("AmethystParser_bind_lb_10_rb__6884");
sy_AmethystParser_bind_lb_11_rb__37a8=rb_intern("AmethystParser_bind_lb_11_rb__37a8");
sy_AmethystParser_bind_lb_1_rb__eq__4ab4=rb_intern("AmethystParser_bind_lb_1_rb__eq__4ab4");
sy_AmethystParser_bind_lb_1_rb__ti__cfcb=rb_intern("AmethystParser_bind_lb_1_rb__ti__cfcb");
sy_AmethystParser_bind_lb_3_rb__eq__507c=rb_intern("AmethystParser_bind_lb_3_rb__eq__507c");
sy_AmethystParser_bind_lb_4_rb__pl__13b0=rb_intern("AmethystParser_bind_lb_4_rb__pl__13b0");
sy_AmethystParser_bind_lb_4_rb__ti__18da=rb_intern("AmethystParser_bind_lb_4_rb__ti__18da");
sy_AmethystParser_bind_lb_5_rb__pl__5627=rb_intern("AmethystParser_bind_lb_5_rb__pl__5627");
sy_AmethystParser_bind_lb_5_rb__ti__66be=rb_intern("AmethystParser_bind_lb_5_rb__ti__66be");
sy_AmethystParser_bind_lb_6_rb__eq__9525=rb_intern("AmethystParser_bind_lb_6_rb__eq__9525");
sy_AmethystParser_bind_lb_9_rb__pl__82ef=rb_intern("AmethystParser_bind_lb_9_rb__pl__82ef");
rb_define_method(cls_AmethystParser,"__args",AmethystParser___args,2);
rb_define_method(cls_AmethystParser,"_args",AmethystParser__args,2);
rb_define_method(cls_AmethystParser,"addargs",AmethystParser_addargs,0);
rb_define_method(cls_AmethystParser,"application",AmethystParser_application,0);
rb_define_method(cls_AmethystParser,"args",AmethystParser_args,2);
rb_define_method(cls_AmethystParser,"argsOpt",AmethystParser_argsOpt,2);
rb_define_method(cls_AmethystParser,"atomicHostExpr",AmethystParser_atomicHostExpr,0);
rb_define_method(cls_AmethystParser,"choice",AmethystParser_choice,0);
rb_define_method(cls_AmethystParser,"className",AmethystParser_className,0);
rb_define_method(cls_AmethystParser,"collect",AmethystParser_collect,1);
rb_define_method(cls_AmethystParser,"eChar",AmethystParser_eChar,0);
rb_define_method(cls_AmethystParser,"expression",AmethystParser_expression,0);
rb_define_method(cls_AmethystParser,"grammar",AmethystParser_grammar,0);
rb_define_method(cls_AmethystParser,"igrammar",AmethystParser_igrammar,0);
rb_define_method(cls_AmethystParser,"inlineHostExpr",AmethystParser_inlineHostExpr,0);
rb_define_method(cls_AmethystParser,"key",AmethystParser_key,0);
rb_define_method(cls_AmethystParser,"modifier",AmethystParser_modifier,0);
rb_define_method(cls_AmethystParser,"name",AmethystParser_name,0);
rb_define_method(cls_AmethystParser,"nr",AmethystParser_nr,0);
rb_define_method(cls_AmethystParser,"prefixed",AmethystParser_prefixed,0);
rb_define_method(cls_AmethystParser,"procargs",AmethystParser_procargs,0);
rb_define_method(cls_AmethystParser,"procargs2",AmethystParser_procargs2,0);
rb_define_method(cls_AmethystParser,"rubyarg",AmethystParser_rubyarg,0);
rb_define_method(cls_AmethystParser,"rule",AmethystParser_rule,0);
rb_define_method(cls_AmethystParser,"ruleargs",AmethystParser_ruleargs,0);
rb_define_method(cls_AmethystParser,"sequence",AmethystParser_sequence,0);
rb_define_method(cls_AmethystParser,"term",AmethystParser_term,0);
 rb_eval_string("testversionparser('8dfa53739657e70633300a2752966083')");}
