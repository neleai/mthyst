#include "cthyst.h"
VALUE cls_AmethystParser;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE AmethystCore_anything(VALUE self );
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser__args(VALUE self ,VALUE,VALUE);
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_argsOpt(VALUE self );
VALUE AmethystParser_call(VALUE self );
VALUE AmethystParser_cases(VALUE self );
VALUE AmethystParser_className(VALUE self );
VALUE AmethystParser_collect(VALUE self ,VALUE a0);
VALUE AmethystParser_expression(VALUE self );
VALUE AmethystParser_grammar(VALUE self );
VALUE AmethystParser_host_expr(VALUE self );
VALUE AmethystParser_igrammar(VALUE self );
VALUE AmethystParser_inline_host_expr(VALUE self );
VALUE AmethystParser_interpolated(VALUE self ,VALUE a0);
VALUE AmethystParser_key(VALUE self );
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
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_line(VALUE self );
VALUE Amethyst_number(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Amethyst_token(VALUE self ,VALUE);
static VALUE c_Args;
static VALUE s_;
static VALUE s_Amethyst_fe41;
static VALUE s__bq__8333;
static VALUE s__bs__bs__7f81;
static VALUE s__co__at__4bf0;
static VALUE s__dot__dot__58b9;
static VALUE s__dot__dot__dot__2f43;
static VALUE s__gt__cedf;
static VALUE s__lb__8154;
static VALUE s__lb__rb__d751;
static VALUE s__le__f95b;
static VALUE s__lp__84c4;
static VALUE s__lt__524a;
static VALUE s__rb__0fbd;
static VALUE s__re__cbb1;
static VALUE s__rp__9371;
static VALUE sy_AmethystParser_Act_lb_Args_245f;
static VALUE sy_AmethystParser_Act_lb_bind_3e5d;
static VALUE sy_AmethystParser_Apply_lb__dq_a_1437;
static VALUE sy_AmethystParser_Apply_lb__dq_c_5c74;
static VALUE sy_AmethystParser_Apply_lb__dq_m_daa5;
static VALUE sy_AmethystParser_Apply_lb__dq_r_1a1d;
static VALUE sy_AmethystParser_Apply_lb__dq_s_e39b;
static VALUE sy_AmethystParser_Apply_lb__dq_t_6e68;
static VALUE sy_AmethystParser_Apply_lb__lb_b_a4cc;
static VALUE sy_AmethystParser_Apply_lb_bi_9146;
static VALUE sy_AmethystParser_Args_lb__le__co_a_defb;
static VALUE sy_AmethystParser_Args_lb__le__co_a_f34c;
static VALUE sy_AmethystParser_Comment_lb__3377;
static VALUE sy_AmethystParser_Enter_lb_Ap_3fc4;
static VALUE sy_AmethystParser_Enter_lb_bi_1b7a;
static VALUE sy_AmethystParser_Global_lb_b_8edb;
static VALUE sy_AmethystParser_Grammar_dot__80c6;
static VALUE sy_AmethystParser_Key_lb_bind_20b7;
static VALUE sy_AmethystParser_Lambda_lb___a752;
static VALUE sy_AmethystParser_Lookahea_b36e;
static VALUE sy_AmethystParser_Many_lb_bin_15c0;
static VALUE sy_AmethystParser_Nested_lb_b_7d5e;
static VALUE sy_AmethystParser_Or_dot_creat_845c;
static VALUE sy_AmethystParser_Or_lb_bind_lb__cb4a;
static VALUE sy_AmethystParser_Pass_lb_bin_562a;
static VALUE sy_AmethystParser_Pred_lb_bin_336a;
static VALUE sy_AmethystParser_Result_lb__le__ae0e;
static VALUE sy_AmethystParser_Rule_dot_cre_e3af;
static VALUE sy_AmethystParser_Seq_dot_crea_abce;
static VALUE sy_AmethystParser_Seq_lb_Cut_lb__3505;
static VALUE sy_AmethystParser_Seq_lb__Bin_1c84;
static VALUE sy_AmethystParser_Strin_lb__lb__dq__66fc;
static VALUE sy_AmethystParser_Strin_lb__lb__qu__15ed;
static VALUE sy_AmethystParser__Bind_lp_bi_00ea;
static VALUE sy_AmethystParser__Local_lp_b_cc09;
static VALUE sy_AmethystParser__append_lp__0e08;
static VALUE sy_AmethystParser__append_lp__1c46;
static VALUE sy_AmethystParser__append_lp__29a3;
static VALUE sy_AmethystParser__append_lp__2bc4;
static VALUE sy_AmethystParser__append_lp__37c5;
static VALUE sy_AmethystParser__append_lp__4584;
static VALUE sy_AmethystParser__append_lp__4de3;
static VALUE sy_AmethystParser__append_lp__50ed;
static VALUE sy_AmethystParser__append_lp__653e;
static VALUE sy_AmethystParser__append_lp__6ac6;
static VALUE sy_AmethystParser__append_lp__7352;
static VALUE sy_AmethystParser__append_lp__8061;
static VALUE sy_AmethystParser__append_lp__81ec;
static VALUE sy_AmethystParser__append_lp__9e15;
static VALUE sy_AmethystParser__append_lp__a474;
static VALUE sy_AmethystParser__append_lp__b2a5;
static VALUE sy_AmethystParser__append_lp__b494;
static VALUE sy_AmethystParser__append_lp__b6c7;
static VALUE sy_AmethystParser__append_lp__b7de;
static VALUE sy_AmethystParser__append_lp__b9cb;
static VALUE sy_AmethystParser__append_lp__cbd1;
static VALUE sy_AmethystParser__append_lp__d113;
static VALUE sy_AmethystParser__append_lp__d1e3;
static VALUE sy_AmethystParser__append_lp__dd73;
static VALUE sy_AmethystParser__at_ary_eq__lb__rb_;
static VALUE sy_AmethystParser__at_ary_ff69;
static VALUE sy_AmethystParser__at_ary_lt__lt_Ar_59e3;
static VALUE sy_AmethystParser__at_bnding_7d3c;
static VALUE sy_AmethystParser__at_locals_dot__bdc6;
static VALUE sy_AmethystParser__at_locals_eq__94df;
static VALUE sy_AmethystParser__at_tmp_lt__lt_bi_c4f3;
static VALUE sy_AmethystParser__body_lp_bi_152d;
static VALUE sy_AmethystParser__dq__le__dq__pl_bind_567e;
static VALUE sy_AmethystParser__dq__sh__dq__b65f;
static VALUE sy_AmethystParser__lb_bind_lb_1_rb__6281;
static VALUE sy_AmethystParser__lp_bind_lb_0_rb__418b;
static VALUE sy_AmethystParser__qu__sh__le__qu__9722;
static VALUE sy_AmethystParser_a_eq_autova_7ead;
static VALUE sy_AmethystParser_a_eq_autova_91af;
static VALUE sy_AmethystParser_bind_lb_0_rb_;
static VALUE sy_AmethystParser_bind_lb_0_rb__dot__206f;
static VALUE sy_AmethystParser_bind_lb_14_rb__88ad;
static VALUE sy_AmethystParser_bind_lb_2_rb_;
static VALUE sy_AmethystParser_bind_lb_3_rb__eq__507c;
static VALUE sy_AmethystParser_bind_lb_4_rb_;
static VALUE sy_AmethystParser_bind_lb_4_rb__dot__1e8d;
static VALUE sy_AmethystParser_bind_lb_4_rb__dot__e4b4;
static VALUE sy_AmethystParser_bind_lb_4_rb__pl__13b0;
static VALUE sy_AmethystParser_bind_lb_5_rb__dot__028b;
static VALUE sy_AmethystParser_bind_lb_6_rb__dot__7ac7;
static VALUE sy_AmethystParser_bind_lb_7_rb_;
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(7); bind_aset(bind,0/*o*/,a0);bind_aset(bind,5/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*o*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail);it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*r*/,it);
it=bind_aget(bind,5/*c*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(4); bind_aset(bind,0/*o*/,a0);bind_aset(bind,1/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=bind_aget(bind,0/*o*/); arg0=it;it=bind_aget(bind,1/*c*/); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(fail); bind_aset(bind,2/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_f34c,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_argsOpt(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

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
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(40) ... UC(40):; if (strncmp(ame_curstr(self),"(",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(39):;case UC(41) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}  it=Amethyst_spaces(self ); FAILTEST(alt1_2);it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*r*/,it);
unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(41) ... UC(41):; if (strncmp(ame_curstr(self),")",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(40):;case UC(42) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}it=rb_funcall(self,sy_AmethystParser_bind_lb_2_rb_,1,bind);  bind_aset(bind,3/*_result*/,it);
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
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_ary_new3(0); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_call(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_className(self ); FAILTEST(alt1_2); bind_aset(bind,0/*klas*/,it);
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(58) ... UC(58):; if (strncmp(ame_curstr(self),"::",2)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(57):;case UC(59) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}  it=AmethystParser_name(self ); FAILTEST(alt1_2); bind_aset(bind,1/*name*/,it);
  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_2); bind_aset(bind,2/*arg*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__lb_b_a4cc,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_3); bind_aset(bind,1/*name*/,it);
  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_3); bind_aset(bind,2/*arg*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb_bi_9146,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_cases(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_className(self ); FAILTEST(alt1_2); bind_aset(bind,0/*clas*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(58) ... UC(58):; if (strncmp(ame_curstr(self),"::",2)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(57):;case UC(59) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_2); break;}ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt2_2); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_c_5c74,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_3;}
 it=bind_aget(bind,3/*autovar*/);int oldpos4=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
 unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(46) ... UC(46):; if (strncmp(ame_curstr(self),"...",3)) goto alt4_2; else ame_setpos(self,ame_getpos(self)+3); break;case UC(0) ... UC(45):;case UC(47) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt4_2); break;} 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
 unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(46) ... UC(46):; if (strncmp(ame_curstr(self),"..",2)) goto alt4_3; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(45):;case UC(47) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt4_3); break;} 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos4); goto alt3_2;
 accept4:;
  it=Amethyst_number(self ); FAILTEST(alt3_2); bind_aset(bind,4/*num*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_3;}
 it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*num*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto alt1_3;
 accept3:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_m_daa5,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__lt__524a); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=bind_aget(bind,5/*s*/);it=rb_ary_new3(0); bind_aset(bind,6/*x*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self); int oldpos6=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,5/*s*/,it);
unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC(62) ... UC(62):; if (strncmp(ame_curstr(self),">",1)) goto alt5_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(61):;case UC(63) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt5_2); break;}ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos7=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_3;}
 unsigned char chr5=*ame_curstr(self);  switch(chr5){case UC(92) ... UC(92):; unsigned char chr6=*ame_curstr(self);  switch(chr6){case UC(92) ... UC(92):; if (strncmp(ame_curstr(self),"\\",1)) goto alt6_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(91):;case UC(93) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt6_2); break;} break;case UC(0) ... UC(91):;case UC(93) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt6_2); break;}it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__37c5,1,bind);  
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_3;}
   it=Amethyst_empty(self ); FAILTEST(alt6_3); 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos7); goto alt5_3;
 accept6:;
  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b7de,1,bind);  
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos6); goto break1;
 accept5:;
 if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_AmethystParser_bind_lb_6_rb__dot__7ac7,1,bind);  bind_aset(bind,10/*_result*/,it);
it=bind_aget(bind,10/*_result*/); bind_aset(bind,11/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_1a1d,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(65) ... UC(90):;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
 break;case UC(0) ... UC(64):;case UC(91) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
 break;}it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(95) ... UC(95):;case UC(97) ... UC(122):;case UC(65) ... UC(90):;case UC(48) ... UC(57):;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
 break;case UC(0) ... UC(47):;case UC(58) ... UC(64):;case UC(91) ... UC(94):;case UC(96) ... UC(96):;case UC(123) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
 break;}it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
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
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*f*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_sequence(self ); FAILTEST(alt1_2); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__29a3,1,bind); it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_obj_clone(s_); arg0=it; it=Amethyst_token(self ,arg0); FAILTEST(break1);  it=AmethystParser_sequence(self ); FAILTEST(break1); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__81ec,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0); bind_aset(bind,6/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*ary*/,it);
it=rb_funcall(self,sy_AmethystParser_Or_dot_creat_845c,1,bind);  bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Amethyst_spaces(self ); FAILTEST(fail);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(97) ... UC(97):; if (strncmp(ame_curstr(self),"amethyst",8)) goto fail; else ame_setpos(self,ame_getpos(self)+8); break;case UC(0) ... UC(96):;case UC(98) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); break;}  it=Amethyst_spaces(self ); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail); bind_aset(bind,0/*name*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2);unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(60) ... UC(60):; if (strncmp(ame_curstr(self),"<",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(59):;case UC(61) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}  it=Amethyst_spaces(self ); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2); bind_aset(bind,1/*parent*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s_Amethyst_fe41); bind_aset(bind,1/*parent*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
  it=Amethyst_spaces(self ); FAILTEST(fail);unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(123) ... UC(123):; if (strncmp(ame_curstr(self),"{",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(122):;case UC(124) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); break;}it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rule(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*rules*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC(125) ... UC(125):; if (strncmp(ame_curstr(self),"}",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(124):;case UC(126) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); break;}it=rb_funcall(self,sy_AmethystParser_Grammar_dot__80c6,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_host_expr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(123) ... UC(123):;   it=AmethystParser_inline_host_expr(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 break;case UC(0) ... UC(122):;case UC(124) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 break;} 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(45) ... UC(45):; if (strncmp(ame_curstr(self),"->",2)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(44):;case UC(46) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_3); break;}  it=Amethyst_line(self ); FAILTEST(alt1_3); bind_aset(bind,1/*s*/,it);
it=rb_funcall(self,sy_AmethystParser__dq__le__dq__pl_bind_567e,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(123) ... UC(123):;   it=AmethystParser_inline_host_expr(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
 break;case UC(0) ... UC(122):;case UC(124) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
 break;}  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(97) ... UC(97):; if (strncmp(ame_curstr(self),"amethyst",8)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+8); break;case UC(0) ... UC(96):;case UC(98) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_2); break;}ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt2_2); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_2;
 accept2:;
  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self); int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(97) ... UC(97):; if (strncmp(ame_curstr(self),"amethyst",8)) goto alt3_2; else ame_setpos(self,ame_getpos(self)+8); break;case UC(0) ... UC(96):;case UC(98) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt3_2); break;}ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt3_2); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break2;
 accept3:;
  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__8061,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__dot__e4b4,1,bind);  bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_grammar(self ); FAILTEST(alt1_3); bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_4);unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(96) ... UC(96):; if (strncmp(ame_curstr(self),"`",1)) goto alt1_4; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(95):;case UC(97) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_4); break;}  it=AmethystParser_expression(self ); FAILTEST(alt1_4);unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC(96) ... UC(96):; if (strncmp(ame_curstr(self),"`",1)) goto alt1_4; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(95):;case UC(97) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_4); break;}it=rb_obj_clone(s__bq__8333); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,sy_AmethystParser__append_lp__81ec,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_inline_host_expr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(123) ... UC(123):; if (strncmp(ame_curstr(self),"{",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(122):;case UC(124) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); break;}  it=Amethyst_spaces(self ); FAILTEST(fail);it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*r*/,it);
unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(125) ... UC(125):; if (strncmp(ame_curstr(self),"}",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(124):;case UC(126) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); break;}it=rb_funcall(self,sy_AmethystParser_bind_lb_2_rb_,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_Args_245f,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_interpolated(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(12); bind_aset(bind,1/*e*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*x*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,1/*e*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,2/*s*/);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,3/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,4/*o*/,it);
 it=bind_aget(bind,4/*o*/); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt1_3); bind_aset(bind,5/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_defb,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__6ac6,1,bind);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_4;}
 unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(92) ... UC(92):; if (strncmp(ame_curstr(self),"\\",1)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(91):;case UC(93) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_2); break;}it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__653e,1,bind);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_4;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_4;
 accept2:;
  it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b494,1,bind);  
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb_,1,bind);  bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_key(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(64) ... UC(64):; if (strncmp(ame_curstr(self),"@",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(63):;case UC(65) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=AmethystParser_className(self ); FAILTEST(alt2_2); bind_aset(bind,0/*name*/,it);
it=rb_funcall(self,sy_AmethystParser_Result_lb__le__ae0e,1,bind);  bind_aset(bind,1/*_result*/,it);
 
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
 unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(64) ... UC(64):; if (strncmp(ame_curstr(self),"@@",2)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(63):;case UC(65) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_3); break;}  it=AmethystParser_name(self ); FAILTEST(alt1_3); bind_aset(bind,0/*name*/,it);
it=rb_funcall(self,sy_AmethystParser_Global_lb_b_8edb,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(95) ... UC(95):;case UC(97) ... UC(122):;case UC(65) ... UC(90):;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
 break;case UC(0) ... UC(64):;case UC(91) ... UC(94):;case UC(96) ... UC(96):;case UC(123) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
 break;}it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(95) ... UC(95):;case UC(97) ... UC(122):;case UC(65) ... UC(90):;case UC(48) ... UC(57):;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
 break;case UC(0) ... UC(47):;case UC(58) ... UC(64):;case UC(91) ... UC(94):;case UC(96) ... UC(96):;case UC(123) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
 break;}it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,5/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb__dot__028b,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_2);  it=Amethyst_spaces(self ); FAILTEST(alt1_2);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(61) ... UC(61):; if (strncmp(ame_curstr(self),"=",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(60):;case UC(62) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_postfixed(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

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
int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(61) ... UC(61):; if (strncmp(ame_curstr(self),"=>",2)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(60):;case UC(62) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_2); break;}  it=AmethystParser_term(self ); FAILTEST(alt2_2); bind_aset(bind,1/*e*/,it);
it=rb_funcall(self,sy_AmethystParser_Pass_lb_bin_562a,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(91) ... UC(91):; if (strncmp(ame_curstr(self),"[",1)) goto alt2_3; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(90):;case UC(92) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_3); break;}  it=AmethystParser_expression(self ); FAILTEST(alt2_3); bind_aset(bind,1/*e*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt2_3);unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(93) ... UC(93):; if (strncmp(ame_curstr(self),"]",1)) goto alt2_3; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(92):;case UC(94) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_3); break;}it=rb_funcall(self,sy_AmethystParser_Enter_lb_bi_1b7a,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC(43) ... UC(43):;case UC(42) ... UC(42):;   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,2/*one*/,it);
 break;case UC(0) ... UC(41):;case UC(44) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_4); bind_aset(bind,2/*one*/,it);
 break;}it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_15c0,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_4: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 unsigned char chr5=*ame_curstr(self);  switch(chr5){case UC(63) ... UC(63):; if (strncmp(ame_curstr(self),"?",1)) goto alt2_5; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(62):;case UC(64) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_5); break;}it=rb_funcall(self,sy_AmethystParser_Or_lb_bind_lb__cb4a,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_5: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 unsigned char chr6=*ame_curstr(self);  switch(chr6){case UC(58) ... UC(58):; if (strncmp(ame_curstr(self),":",1)) goto alt2_6; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(57):;case UC(59) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_6); break;}int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_6;}
 int oldpos5=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
 unsigned char chr7=*ame_curstr(self);  switch(chr7){case UC(64) ... UC(64):;   it=AmethystParser_key(self ); FAILTEST(alt4_2); bind_aset(bind,3/*name*/,it);
 break;case UC(0) ... UC(63):;case UC(65) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt4_2); bind_aset(bind,3/*name*/,it);
 break;} 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
   it=AmethystParser_name(self ); FAILTEST(alt4_3); bind_aset(bind,3/*name*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos5); goto alt3_2;
 accept4:;
int oldpos6=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
 unsigned char chr8=*ame_curstr(self);  switch(chr8){case UC(91) ... UC(91):; if (strncmp(ame_curstr(self),"[]",2)) goto alt5_2; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(90):;case UC(92) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt5_2); break;}it=rb_obj_clone(s__lb__rb__d751); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*append*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_2;}
   it=Amethyst_empty(self ); FAILTEST(alt5_3); bind_aset(bind,5/*append*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos6); goto alt3_2;
 accept5:;
it=rb_funcall(self,sy_AmethystParser__Bind_lp_bi_00ea,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_6;}
 unsigned char chr9=*ame_curstr(self);  switch(chr9){case UC(123) ... UC(123):;   it=AmethystParser_inline_host_expr(self ); FAILTEST(alt3_3); bind_aset(bind,1/*e*/,it);
 break;case UC(0) ... UC(122):;case UC(124) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt3_3); bind_aset(bind,1/*e*/,it);
 break;}it=rb_funcall(self,sy_AmethystParser_Seq_lb__Bin_1c84,1,bind);  bind_aset(bind,0/*from*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_6;
 accept3:;
 
ame_setcut(self,Qnil);goto accept2;
  alt2_6:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*from*/); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(38) ... UC(38):;case UC(126) ... UC(126):;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
 break;case UC(0) ... UC(37):;case UC(39) ... UC(125):;case UC(127) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
 break;}int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*neg*/,it);
unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(123) ... UC(123):;   it=AmethystParser_inline_host_expr(self ); FAILTEST(alt2_2); bind_aset(bind,2/*expr*/,it);
 break;case UC(0) ... UC(122):;case UC(124) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_2); bind_aset(bind,2/*expr*/,it);
 break;}it=rb_funcall(self,sy_AmethystParser_Pred_lb_bin_336a,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*neg*/,it);
  it=AmethystParser_prefixed(self ); FAILTEST(alt2_3); bind_aset(bind,4/*m*/,it);
it=rb_funcall(self,sy_AmethystParser_Lookahea_b36e,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_postfixed(self ); FAILTEST(alt1_3); bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,3/*_result*/);
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
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Args; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_procargs2(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*a*/,it);
it=rb_funcall(self,sy_AmethystParser__at_tmp_lt__lt_bi_c4f3,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(22);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(96) ... UC(96):; if (strncmp(ame_curstr(self),"`",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(95):;case UC(97) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}  it=AmethystParser_expression(self ); FAILTEST(alt1_2); bind_aset(bind,1/*e*/,it);
unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(96) ... UC(96):; if (strncmp(ame_curstr(self),"`",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(95):;case UC(97) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}it=rb_funcall(self,sy_AmethystParser_Lambda_lb___a752,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,3/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,4/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt1_3); bind_aset(bind,5/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_defb,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,3/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,4/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt1_4); bind_aset(bind,5/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_defb,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,3/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,4/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt1_5); bind_aset(bind,5/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_defb,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(34) ... UC(34):; if (strncmp(ame_curstr(self),"\"",1)) goto alt1_6; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(33):;case UC(35) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_6); break;}it=rb_ary_new3(0); bind_aset(bind,7/*x*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC(34) ... UC(34):; if (strncmp(ame_curstr(self),"\"",1)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(33):;case UC(35) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_2); break;}ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,3/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,4/*o*/,it);
 it=bind_aget(bind,4/*o*/); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt2_3); bind_aset(bind,5/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_defb,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b6c7,1,bind);  
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_4;}
 unsigned char chr5=*ame_curstr(self);  switch(chr5){case UC(92) ... UC(92):; unsigned char chr6=*ame_curstr(self);  switch(chr6){case UC(92) ... UC(92):; if (strncmp(ame_curstr(self),"\\",1)) goto alt3_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(91):;case UC(93) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt3_2); break;} break;case UC(0) ... UC(91):;case UC(93) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt3_2); break;}it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__1c46,1,bind);  
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_4;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_4;
 accept3:;
  it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4584,1,bind);  
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_AmethystParser_bind_lb_7_rb_,1,bind);  bind_aset(bind,12/*_result*/,it);
it=bind_aget(bind,12/*_result*/); bind_aset(bind,13/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__qu__15ed,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr7=*ame_curstr(self);  switch(chr7){case UC(97) ... UC(122):;case UC(48) ... UC(57):;case UC(95) ... UC(95):;   it=AmethystCore_anything(self ); FAILTEST(alt1_7); bind_aset(bind,1/*e*/,it);
 break;case UC(0) ... UC(47):;case UC(58) ... UC(94):;case UC(96) ... UC(96):;case UC(123) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_7); bind_aset(bind,1/*e*/,it);
 break;}unsigned char chr8=*ame_curstr(self);  switch(chr8){case UC(60) ... UC(60):; if (strncmp(ame_curstr(self),"<<",2)) goto alt1_7; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(59):;case UC(61) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_7); break;}it=rb_funcall(self,sy_AmethystParser__lb_bind_lb_1_rb__6281,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr9=*ame_curstr(self);  switch(chr9){case UC(39) ... UC(39):; if (strncmp(ame_curstr(self),"'",1)) goto alt1_8; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(38):;case UC(40) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_8); break;}it=rb_ary_new3(0); bind_aset(bind,14/*x*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self); int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 unsigned char chr10=*ame_curstr(self);  switch(chr10){case UC(39) ... UC(39):; if (strncmp(ame_curstr(self),"'",1)) goto alt4_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(38):;case UC(40) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt4_2); break;}ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt4_3;}
 unsigned char chr11=*ame_curstr(self);  switch(chr11){case UC(92) ... UC(92):; unsigned char chr12=*ame_curstr(self);  switch(chr12){case UC(92) ... UC(92):; if (strncmp(ame_curstr(self),"\\",1)) goto alt5_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(91):;case UC(93) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt5_2); break;} break;case UC(0) ... UC(91):;case UC(93) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt5_2); break;}it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__a474,1,bind);  
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt4_3;}
   it=Amethyst_empty(self ); FAILTEST(alt5_3); 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos7); goto alt4_3;
 accept5:;
  it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__50ed,1,bind);  
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos6); goto break2;
 accept4:;
 if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_AmethystParser_bind_lb_14_rb__88ad,1,bind);  bind_aset(bind,17/*_result*/,it);
it=bind_aget(bind,17/*_result*/); bind_aset(bind,13/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__dq__66fc,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr13=*ame_curstr(self);  switch(chr13){case UC(46) ... UC(46):; if (strncmp(ame_curstr(self),"...",3)) goto alt1_9; else ame_setpos(self,ame_getpos(self)+3); break;case UC(0) ... UC(45):;case UC(47) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_9); break;}it=rb_obj_clone(s__dot__dot__dot__2f43); bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr14=*ame_curstr(self);  switch(chr14){case UC(46) ... UC(46):; if (strncmp(ame_curstr(self),"..",2)) goto alt1_10; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(45):;case UC(47) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_10); break;}it=rb_obj_clone(s__dot__dot__58b9); bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_11;}
   it=Amethyst_spaces(self ); FAILTEST(alt6_2);unsigned char chr15=*ame_curstr(self);  switch(chr15){case UC(58) ... UC(58):; if (strncmp(ame_curstr(self),":@",2)) goto alt6_2; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(57):;case UC(59) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt6_2); break;}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/); bind_aset(bind,18/*_result*/,it);
it=bind_aget(bind,18/*_result*/); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0e08,1,bind);  
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_11;}
 unsigned char chr16=*ame_curstr(self);  switch(chr16){case UC(36) ... UC(36):;case UC(46) ... UC(46):;case UC(58) ... UC(58):;   it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,20/*autovar*/,it);
 break;case UC(0) ... UC(35):;case UC(37) ... UC(45):;case UC(47) ... UC(57):;case UC(59) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt6_3); bind_aset(bind,20/*autovar*/,it);
 break;}it=rb_funcall(self,sy_AmethystParser__append_lp__d1e3,1,bind);  
ame_setcut(self,Qnil);goto accept6;
alt6_3: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_11;}
   it=Amethyst_empty(self ); FAILTEST(alt6_4); 
ame_setcut(self,Qnil);goto accept6;
  alt6_4:  ame_setpos(self,oldpos8); goto alt1_11;
 accept6:;
int oldpos9=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_11;}
   it=Amethyst__(self ); FAILTEST(alt7_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt7_2); 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_11;}
   it=Amethyst_empty(self ); FAILTEST(alt7_3); 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos9); goto alt1_11;
 accept7:;
  it=AmethystParser_name(self ); FAILTEST(alt1_11); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__2bc4,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr17=*ame_curstr(self);  switch(chr17){case UC(64) ... UC(64):;   it=AmethystParser_key(self ); FAILTEST(alt1_12); bind_aset(bind,2/*_result*/,it);
 break;case UC(0) ... UC(63):;case UC(65) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_12); bind_aset(bind,2/*_result*/,it);
 break;} 
ame_setcut(self,Qnil);goto accept1;
alt1_12: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr18=*ame_curstr(self);  switch(chr18){case UC(0) ... UC(33):;case UC(35) ... UC(38):;case UC(42) ... UC(90):;case UC(92) ... UC(92):;case UC(94) ... UC(95):;case UC(97) ... UC(122):;case UC(124) ... UC(124):;case UC(126) ... UC(255):;   it=AmethystCore_anything(self ); FAILTEST(alt1_13); bind_aset(bind,2/*_result*/,it);
 break;case UC(34) ... UC(34):;case UC(39) ... UC(41):;case UC(91) ... UC(91):;case UC(93) ... UC(93):;case UC(96) ... UC(96):;case UC(123) ... UC(123):;case UC(125) ... UC(125):;   it=Amethyst_fails(self ); FAILTEST(alt1_13); bind_aset(bind,2/*_result*/,it);
 break;} 
ame_setcut(self,Qnil);goto accept1;
  alt1_13:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystParser__at_locals_eq__94df,1,bind); it=rb_funcall(self,sy_AmethystParser__at_bnding_7d3c,1,bind);  bind_aset(bind,0/*bnding*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail); bind_aset(bind,1/*name*/,it);
  it=AmethystParser_ruleargs(self ); FAILTEST(fail); bind_aset(bind,2/*args*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(61) ... UC(61):; if (strncmp(ame_curstr(self),"=",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(60):;case UC(62) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(fail); break;}  it=AmethystParser_expression(self ); FAILTEST(fail); bind_aset(bind,3/*body*/,it);
it=rb_funcall(self,sy_AmethystParser__body_lp_bi_152d,1,bind);  bind_aset(bind,3/*body*/,it);
it=rb_funcall(self,sy_AmethystParser__at_locals_dot__bdc6,1,bind);  bind_aset(bind,4/*locals*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_3_rb__eq__507c,1,bind); it=rb_funcall(self,sy_AmethystParser_Rule_dot_cre_e3af,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystParser_argsOpt(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);  it=c_Args; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,4/*name*/,it);
it=rb_funcall(self,sy_AmethystParser__Local_lp_b_cc09,1,bind);  bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break1;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9e15,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,7/*autovar*/,it);
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
	if(fail1) goto fail;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nr(self ); FAILTEST(break1);  it=Amethyst_spaces(self ); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*ary*/,it);
it=rb_funcall(self,sy_AmethystParser_Seq_dot_crea_abce,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(14);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(110) ... UC(110):; if (strncmp(ame_curstr(self),"nested(",7)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+7); break;case UC(0) ... UC(109):;case UC(111) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}  it=AmethystParser_expression(self ); FAILTEST(alt1_2); bind_aset(bind,0/*expr*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt1_2);unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(41) ... UC(41):; if (strncmp(ame_curstr(self),")",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(40):;case UC(42) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_2); break;}it=rb_funcall(self,sy_AmethystParser_Nested_lb_b_7d5e,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(98) ... UC(98):; if (strncmp(ame_curstr(self),"break",5)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+5); break;case UC(0) ... UC(97):;case UC(99) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_3); break;}it=rb_funcall(self,sy_AmethystParser_Seq_lb_Cut_lb__3505,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_cases(self ); FAILTEST(alt1_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_call(self ); FAILTEST(alt1_5); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
 unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC(46) ... UC(46):;case UC(58) ... UC(58):;   it=AmethystCore_anything(self ); FAILTEST(reject1); break;case UC(0) ... UC(45):;case UC(47) ... UC(57):;case UC(59) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(reject1); break;} x=1; goto accept2;  reject1: x=0; accept2: it=Qnil; ame_setpos(self,oldpos2); if (x==0) goto alt1_6;int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_6;}
 unsigned char chr5=*ame_curstr(self);  switch(chr5){case UC(46) ... UC(46):; if (strncmp(ame_curstr(self),".",1)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(45):;case UC(47) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt2_2); break;} 
ame_setcut(self,Qnil);goto accept3;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_6;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept3;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_6;
 accept3:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr6=*ame_curstr(self);  switch(chr6){case UC(91) ... UC(91):; if (strncmp(ame_curstr(self),"[",1)) goto alt1_7; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(90):;case UC(92) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_7); break;}  it=AmethystParser_expression(self ); FAILTEST(alt1_7); bind_aset(bind,2/*e*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt1_7);unsigned char chr7=*ame_curstr(self);  switch(chr7){case UC(93) ... UC(93):; if (strncmp(ame_curstr(self),"]",1)) goto alt1_7; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(92):;case UC(94) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_7); break;}it=rb_funcall(self,sy_AmethystParser_Enter_lb_Ap_3fc4,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr8=*ame_curstr(self);  switch(chr8){case UC(64) ... UC(64):;   it=AmethystParser_key(self ); FAILTEST(alt1_8); bind_aset(bind,3/*it*/,it);
 break;case UC(0) ... UC(63):;case UC(65) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_8); bind_aset(bind,3/*it*/,it);
 break;}it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_3e5d,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_host_expr(self ); FAILTEST(alt1_9); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr9=*ame_curstr(self);  switch(chr9){case UC(34) ... UC(34):; if (strncmp(ame_curstr(self),"\"",1)) goto alt1_10; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(33):;case UC(35) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_10); break;}it=rb_ary_new3(0); bind_aset(bind,4/*x*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self); int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 unsigned char chr10=*ame_curstr(self);  switch(chr10){case UC(34) ... UC(34):; if (strncmp(ame_curstr(self),"\"",1)) goto alt3_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(33):;case UC(35) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt3_2); break;}ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept4;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_3;}
 unsigned char chr11=*ame_curstr(self);  switch(chr11){case UC(92) ... UC(92):; unsigned char chr12=*ame_curstr(self);  switch(chr12){case UC(92) ... UC(92):; if (strncmp(ame_curstr(self),"\\",1)) goto alt4_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(91):;case UC(93) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt4_2); break;} break;case UC(0) ... UC(91):;case UC(93) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt4_2); break;}it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b9cb,1,bind);  
ame_setcut(self,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_3;}
   it=Amethyst_empty(self ); FAILTEST(alt4_3); 
ame_setcut(self,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos6); goto alt3_3;
 accept5:;
  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7352,1,bind);  
ame_setcut(self,Qnil);goto accept4;
  alt3_3:  ame_setpos(self,oldpos5); goto break1;
 accept4:;
 if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__dot__1e8d,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_t_6e68,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr13=*ame_curstr(self);  switch(chr13){case UC(39) ... UC(39):; if (strncmp(ame_curstr(self),"'",1)) goto alt1_11; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(38):;case UC(40) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_11); break;}it=rb_ary_new3(0); bind_aset(bind,4/*x*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self); int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 unsigned char chr14=*ame_curstr(self);  switch(chr14){case UC(39) ... UC(39):; if (strncmp(ame_curstr(self),"'",1)) goto alt5_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(38):;case UC(40) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt5_2); break;}ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept6;
alt5_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_3;}
 unsigned char chr15=*ame_curstr(self);  switch(chr15){case UC(92) ... UC(92):; unsigned char chr16=*ame_curstr(self);  switch(chr16){case UC(92) ... UC(92):; if (strncmp(ame_curstr(self),"\\",1)) goto alt6_2; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(91):;case UC(93) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt6_2); break;} break;case UC(0) ... UC(91):;case UC(93) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt6_2); break;}it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b9cb,1,bind);  
ame_setcut(self,Qnil);goto accept7;
alt6_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_3;}
   it=Amethyst_empty(self ); FAILTEST(alt6_3); 
ame_setcut(self,Qnil);goto accept7;
  alt6_3:  ame_setpos(self,oldpos9); goto alt5_3;
 accept7:;
  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7352,1,bind);  
ame_setcut(self,Qnil);goto accept6;
  alt5_3:  ame_setpos(self,oldpos8); goto break2;
 accept6:;
 if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__dot__1e8d,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_s_e39b,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,10/*s*/,it);
 it=bind_aget(bind,10/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);it=bind_aget(bind,10/*s*/);  it=Amethyst_line(self ); FAILTEST(alt1_12); bind_aset(bind,9/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__3377,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_12: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 unsigned char chr17=*ame_curstr(self);  switch(chr17){case UC(40) ... UC(40):; if (strncmp(ame_curstr(self),"(",1)) goto alt1_13; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(39):;case UC(41) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_13); break;}  it=AmethystParser_expression(self ); FAILTEST(alt1_13); bind_aset(bind,11/*x*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt1_13);unsigned char chr18=*ame_curstr(self);  switch(chr18){case UC(41) ... UC(41):; if (strncmp(ame_curstr(self),")",1)) goto alt1_13; else ame_setpos(self,ame_getpos(self)+1); break;case UC(0) ... UC(40):;case UC(42) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt1_13); break;}int oldpos10=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_13;}
 unsigned char chr19=*ame_curstr(self);  switch(chr19){case UC(91) ... UC(91):; if (strncmp(ame_curstr(self),"[]",2)) goto alt7_2; else ame_setpos(self,ame_getpos(self)+2); break;case UC(0) ... UC(90):;case UC(92) ... UC(255):;   it=Amethyst_fails(self ); FAILTEST(alt7_2); break;}it=bind_aget(bind,11/*x*/); bind_aset(bind,12/*ors*/,it);
it=rb_funcall(self,sy_AmethystParser_a_eq_autova_7ead,1,bind);  bind_aset(bind,13/*_result*/,it);
it=bind_aget(bind,13/*_result*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt7_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_13;}
   it=Amethyst_empty(self ); FAILTEST(alt7_3);it=bind_aget(bind,11/*x*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt7_3:  ame_setpos(self,oldpos10); goto alt1_13;
 accept8:;
 
ame_setcut(self,Qnil);goto accept1;
  alt1_13:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_Args=rb_const_get(rb_cObject, rb_intern("Args"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Args);
s_=rb_str_new2("|");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_);
s_Amethyst_fe41=rb_str_new2("Amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_Amethyst_fe41);
s__bq__8333=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bq__8333);
s__bs__bs__7f81=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs__bs__7f81);
s__co__at__4bf0=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__co__at__4bf0);
s__dot__dot__58b9=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__dot__dot__58b9);
s__dot__dot__dot__2f43=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__dot__dot__dot__2f43);
s__gt__cedf=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__gt__cedf);
s__lb__8154=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lb__8154);
s__lb__rb__d751=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lb__rb__d751);
s__le__f95b=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__le__f95b);
s__lp__84c4=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lp__84c4);
s__lt__524a=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lt__524a);
s__rb__0fbd=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__rb__0fbd);
s__re__cbb1=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__re__cbb1);
s__rp__9371=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__rp__9371);
sy_AmethystParser_Act_lb_Args_245f=rb_intern("AmethystParser_Act_lb_Args_245f");
sy_AmethystParser_Act_lb_bind_3e5d=rb_intern("AmethystParser_Act_lb_bind_3e5d");
sy_AmethystParser_Apply_lb__dq_a_1437=rb_intern("AmethystParser_Apply_lb__dq_a_1437");
sy_AmethystParser_Apply_lb__dq_c_5c74=rb_intern("AmethystParser_Apply_lb__dq_c_5c74");
sy_AmethystParser_Apply_lb__dq_m_daa5=rb_intern("AmethystParser_Apply_lb__dq_m_daa5");
sy_AmethystParser_Apply_lb__dq_r_1a1d=rb_intern("AmethystParser_Apply_lb__dq_r_1a1d");
sy_AmethystParser_Apply_lb__dq_s_e39b=rb_intern("AmethystParser_Apply_lb__dq_s_e39b");
sy_AmethystParser_Apply_lb__dq_t_6e68=rb_intern("AmethystParser_Apply_lb__dq_t_6e68");
sy_AmethystParser_Apply_lb__lb_b_a4cc=rb_intern("AmethystParser_Apply_lb__lb_b_a4cc");
sy_AmethystParser_Apply_lb_bi_9146=rb_intern("AmethystParser_Apply_lb_bi_9146");
sy_AmethystParser_Args_lb__le__co_a_defb=rb_intern("AmethystParser_Args_lb__le__co_a_defb");
sy_AmethystParser_Args_lb__le__co_a_f34c=rb_intern("AmethystParser_Args_lb__le__co_a_f34c");
sy_AmethystParser_Comment_lb__3377=rb_intern("AmethystParser_Comment_lb__3377");
sy_AmethystParser_Enter_lb_Ap_3fc4=rb_intern("AmethystParser_Enter_lb_Ap_3fc4");
sy_AmethystParser_Enter_lb_bi_1b7a=rb_intern("AmethystParser_Enter_lb_bi_1b7a");
sy_AmethystParser_Global_lb_b_8edb=rb_intern("AmethystParser_Global_lb_b_8edb");
sy_AmethystParser_Grammar_dot__80c6=rb_intern("AmethystParser_Grammar_dot__80c6");
sy_AmethystParser_Key_lb_bind_20b7=rb_intern("AmethystParser_Key_lb_bind_20b7");
sy_AmethystParser_Lambda_lb___a752=rb_intern("AmethystParser_Lambda_lb___a752");
sy_AmethystParser_Lookahea_b36e=rb_intern("AmethystParser_Lookahea_b36e");
sy_AmethystParser_Many_lb_bin_15c0=rb_intern("AmethystParser_Many_lb_bin_15c0");
sy_AmethystParser_Nested_lb_b_7d5e=rb_intern("AmethystParser_Nested_lb_b_7d5e");
sy_AmethystParser_Or_dot_creat_845c=rb_intern("AmethystParser_Or_dot_creat_845c");
sy_AmethystParser_Or_lb_bind_lb__cb4a=rb_intern("AmethystParser_Or_lb_bind_lb__cb4a");
sy_AmethystParser_Pass_lb_bin_562a=rb_intern("AmethystParser_Pass_lb_bin_562a");
sy_AmethystParser_Pred_lb_bin_336a=rb_intern("AmethystParser_Pred_lb_bin_336a");
sy_AmethystParser_Result_lb__le__ae0e=rb_intern("AmethystParser_Result_lb__le__ae0e");
sy_AmethystParser_Rule_dot_cre_e3af=rb_intern("AmethystParser_Rule_dot_cre_e3af");
sy_AmethystParser_Seq_dot_crea_abce=rb_intern("AmethystParser_Seq_dot_crea_abce");
sy_AmethystParser_Seq_lb_Cut_lb__3505=rb_intern("AmethystParser_Seq_lb_Cut_lb__3505");
sy_AmethystParser_Seq_lb__Bin_1c84=rb_intern("AmethystParser_Seq_lb__Bin_1c84");
sy_AmethystParser_Strin_lb__lb__dq__66fc=rb_intern("AmethystParser_Strin_lb__lb__dq__66fc");
sy_AmethystParser_Strin_lb__lb__qu__15ed=rb_intern("AmethystParser_Strin_lb__lb__qu__15ed");
sy_AmethystParser__Bind_lp_bi_00ea=rb_intern("AmethystParser__Bind_lp_bi_00ea");
sy_AmethystParser__Local_lp_b_cc09=rb_intern("AmethystParser__Local_lp_b_cc09");
sy_AmethystParser__append_lp__0e08=rb_intern("AmethystParser__append_lp__0e08");
sy_AmethystParser__append_lp__1c46=rb_intern("AmethystParser__append_lp__1c46");
sy_AmethystParser__append_lp__29a3=rb_intern("AmethystParser__append_lp__29a3");
sy_AmethystParser__append_lp__2bc4=rb_intern("AmethystParser__append_lp__2bc4");
sy_AmethystParser__append_lp__37c5=rb_intern("AmethystParser__append_lp__37c5");
sy_AmethystParser__append_lp__4584=rb_intern("AmethystParser__append_lp__4584");
sy_AmethystParser__append_lp__4de3=rb_intern("AmethystParser__append_lp__4de3");
sy_AmethystParser__append_lp__50ed=rb_intern("AmethystParser__append_lp__50ed");
sy_AmethystParser__append_lp__653e=rb_intern("AmethystParser__append_lp__653e");
sy_AmethystParser__append_lp__6ac6=rb_intern("AmethystParser__append_lp__6ac6");
sy_AmethystParser__append_lp__7352=rb_intern("AmethystParser__append_lp__7352");
sy_AmethystParser__append_lp__8061=rb_intern("AmethystParser__append_lp__8061");
sy_AmethystParser__append_lp__81ec=rb_intern("AmethystParser__append_lp__81ec");
sy_AmethystParser__append_lp__9e15=rb_intern("AmethystParser__append_lp__9e15");
sy_AmethystParser__append_lp__a474=rb_intern("AmethystParser__append_lp__a474");
sy_AmethystParser__append_lp__b2a5=rb_intern("AmethystParser__append_lp__b2a5");
sy_AmethystParser__append_lp__b494=rb_intern("AmethystParser__append_lp__b494");
sy_AmethystParser__append_lp__b6c7=rb_intern("AmethystParser__append_lp__b6c7");
sy_AmethystParser__append_lp__b7de=rb_intern("AmethystParser__append_lp__b7de");
sy_AmethystParser__append_lp__b9cb=rb_intern("AmethystParser__append_lp__b9cb");
sy_AmethystParser__append_lp__cbd1=rb_intern("AmethystParser__append_lp__cbd1");
sy_AmethystParser__append_lp__d113=rb_intern("AmethystParser__append_lp__d113");
sy_AmethystParser__append_lp__d1e3=rb_intern("AmethystParser__append_lp__d1e3");
sy_AmethystParser__append_lp__dd73=rb_intern("AmethystParser__append_lp__dd73");
sy_AmethystParser__at_ary_eq__lb__rb_=rb_intern("AmethystParser__at_ary_eq__lb__rb_");
sy_AmethystParser__at_ary_ff69=rb_intern("AmethystParser__at_ary_ff69");
sy_AmethystParser__at_ary_lt__lt_Ar_59e3=rb_intern("AmethystParser__at_ary_lt__lt_Ar_59e3");
sy_AmethystParser__at_bnding_7d3c=rb_intern("AmethystParser__at_bnding_7d3c");
sy_AmethystParser__at_locals_dot__bdc6=rb_intern("AmethystParser__at_locals_dot__bdc6");
sy_AmethystParser__at_locals_eq__94df=rb_intern("AmethystParser__at_locals_eq__94df");
sy_AmethystParser__at_tmp_lt__lt_bi_c4f3=rb_intern("AmethystParser__at_tmp_lt__lt_bi_c4f3");
sy_AmethystParser__body_lp_bi_152d=rb_intern("AmethystParser__body_lp_bi_152d");
sy_AmethystParser__dq__le__dq__pl_bind_567e=rb_intern("AmethystParser__dq__le__dq__pl_bind_567e");
sy_AmethystParser__dq__sh__dq__b65f=rb_intern("AmethystParser__dq__sh__dq__b65f");
sy_AmethystParser__lb_bind_lb_1_rb__6281=rb_intern("AmethystParser__lb_bind_lb_1_rb__6281");
sy_AmethystParser__lp_bind_lb_0_rb__418b=rb_intern("AmethystParser__lp_bind_lb_0_rb__418b");
sy_AmethystParser__qu__sh__le__qu__9722=rb_intern("AmethystParser__qu__sh__le__qu__9722");
sy_AmethystParser_a_eq_autova_7ead=rb_intern("AmethystParser_a_eq_autova_7ead");
sy_AmethystParser_a_eq_autova_91af=rb_intern("AmethystParser_a_eq_autova_91af");
sy_AmethystParser_bind_lb_0_rb_=rb_intern("AmethystParser_bind_lb_0_rb_");
sy_AmethystParser_bind_lb_0_rb__dot__206f=rb_intern("AmethystParser_bind_lb_0_rb__dot__206f");
sy_AmethystParser_bind_lb_14_rb__88ad=rb_intern("AmethystParser_bind_lb_14_rb__88ad");
sy_AmethystParser_bind_lb_2_rb_=rb_intern("AmethystParser_bind_lb_2_rb_");
sy_AmethystParser_bind_lb_3_rb__eq__507c=rb_intern("AmethystParser_bind_lb_3_rb__eq__507c");
sy_AmethystParser_bind_lb_4_rb_=rb_intern("AmethystParser_bind_lb_4_rb_");
sy_AmethystParser_bind_lb_4_rb__dot__1e8d=rb_intern("AmethystParser_bind_lb_4_rb__dot__1e8d");
sy_AmethystParser_bind_lb_4_rb__dot__e4b4=rb_intern("AmethystParser_bind_lb_4_rb__dot__e4b4");
sy_AmethystParser_bind_lb_4_rb__pl__13b0=rb_intern("AmethystParser_bind_lb_4_rb__pl__13b0");
sy_AmethystParser_bind_lb_5_rb__dot__028b=rb_intern("AmethystParser_bind_lb_5_rb__dot__028b");
sy_AmethystParser_bind_lb_6_rb__dot__7ac7=rb_intern("AmethystParser_bind_lb_6_rb__dot__7ac7");
sy_AmethystParser_bind_lb_7_rb_=rb_intern("AmethystParser_bind_lb_7_rb_");
rb_define_method(cls_AmethystParser,"_args",AmethystParser__args,2);
rb_define_method(cls_AmethystParser,"args",AmethystParser_args,2);
rb_define_method(cls_AmethystParser,"argsOpt",AmethystParser_argsOpt,0);
rb_define_method(cls_AmethystParser,"call",AmethystParser_call,0);
rb_define_method(cls_AmethystParser,"cases",AmethystParser_cases,0);
rb_define_method(cls_AmethystParser,"className",AmethystParser_className,0);
rb_define_method(cls_AmethystParser,"collect",AmethystParser_collect,1);
rb_define_method(cls_AmethystParser,"expression",AmethystParser_expression,0);
rb_define_method(cls_AmethystParser,"grammar",AmethystParser_grammar,0);
rb_define_method(cls_AmethystParser,"host_expr",AmethystParser_host_expr,0);
rb_define_method(cls_AmethystParser,"igrammar",AmethystParser_igrammar,0);
rb_define_method(cls_AmethystParser,"inline_host_expr",AmethystParser_inline_host_expr,0);
rb_define_method(cls_AmethystParser,"interpolated",AmethystParser_interpolated,1);
rb_define_method(cls_AmethystParser,"key",AmethystParser_key,0);
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
 rb_eval_string("testversionparser('491fedbdc38b4db6c7469aec411ea507')");}
