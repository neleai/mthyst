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
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_line(VALUE self );
VALUE Amethyst_number(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Amethyst_token(VALUE self ,VALUE);
VALUE switchhash_AmethystParser_1;
VALUE switchhash_AmethystParser_2;
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
static VALUE sy_AmethystParser_Act_lb_bind_23ab;
static VALUE sy_AmethystParser_Apply_lb__dq_a_1437;
static VALUE sy_AmethystParser_Apply_lb__dq_c_21d1;
static VALUE sy_AmethystParser_Apply_lb__dq_m_8cfd;
static VALUE sy_AmethystParser_Apply_lb__dq_r_6064;
static VALUE sy_AmethystParser_Apply_lb__dq_s_319b;
static VALUE sy_AmethystParser_Apply_lb__dq_t_c68e;
static VALUE sy_AmethystParser_Apply_lb__lb_b_a4cc;
static VALUE sy_AmethystParser_Apply_lb_bi_9146;
static VALUE sy_AmethystParser_Args_lb__le__co_a_4968;
static VALUE sy_AmethystParser_Args_lb__le__co_a_defb;
static VALUE sy_AmethystParser_Args_lb__le__co_a_f34c;
static VALUE sy_AmethystParser_Comment_lb__b447;
static VALUE sy_AmethystParser_Enter_lb_Ap_57b6;
static VALUE sy_AmethystParser_Enter_lb_bi_822a;
static VALUE sy_AmethystParser_Global_lb_b_8edb;
static VALUE sy_AmethystParser_Grammar_dot__80c6;
static VALUE sy_AmethystParser_Key_lb_bind_20b7;
static VALUE sy_AmethystParser_Lambda_lb___012f;
static VALUE sy_AmethystParser_Lookahea_b11c;
static VALUE sy_AmethystParser_Many_lb_bin_33ac;
static VALUE sy_AmethystParser_Nested_lb_b_e419;
static VALUE sy_AmethystParser_Or_dot_creat_67f0;
static VALUE sy_AmethystParser_Or_lb_bind_lb__cb4a;
static VALUE sy_AmethystParser_Pass_lb_bin_6bdb;
static VALUE sy_AmethystParser_Pred_lb_bin_4918;
static VALUE sy_AmethystParser_Result_lb__le__ae0e;
static VALUE sy_AmethystParser_Rule_dot_cre_e3af;
static VALUE sy_AmethystParser_Seq_dot_crea_abce;
static VALUE sy_AmethystParser_Seq_lb_Cut_lb__3505;
static VALUE sy_AmethystParser_Seq_lb__Bin_7997;
static VALUE sy_AmethystParser_Strin_lb__lb__dq__b2a2;
static VALUE sy_AmethystParser_Strin_lb__lb__qu__e4e6;
static VALUE sy_AmethystParser__Bind_lp_bi_2082;
static VALUE sy_AmethystParser__Local_lp_b_cc09;
static VALUE sy_AmethystParser__append_lp__0605;
static VALUE sy_AmethystParser__append_lp__088f;
static VALUE sy_AmethystParser__append_lp__0d6a;
static VALUE sy_AmethystParser__append_lp__0eeb;
static VALUE sy_AmethystParser__append_lp__283c;
static VALUE sy_AmethystParser__append_lp__4de3;
static VALUE sy_AmethystParser__append_lp__595b;
static VALUE sy_AmethystParser__append_lp__653e;
static VALUE sy_AmethystParser__append_lp__6ac6;
static VALUE sy_AmethystParser__append_lp__7352;
static VALUE sy_AmethystParser__append_lp__8061;
static VALUE sy_AmethystParser__append_lp__81ec;
static VALUE sy_AmethystParser__append_lp__835a;
static VALUE sy_AmethystParser__append_lp__9ca5;
static VALUE sy_AmethystParser__append_lp__9e15;
static VALUE sy_AmethystParser__append_lp__b2a5;
static VALUE sy_AmethystParser__append_lp__b494;
static VALUE sy_AmethystParser__append_lp__cbd1;
static VALUE sy_AmethystParser__append_lp__d113;
static VALUE sy_AmethystParser__append_lp__d43a;
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
static VALUE sy_AmethystParser__lb_bind_lb_21_9dcf;
static VALUE sy_AmethystParser__lp_bind_lb_0_rb__418b;
static VALUE sy_AmethystParser__qu__sh__le__qu__9722;
static VALUE sy_AmethystParser_a_eq_autova_8222;
static VALUE sy_AmethystParser_a_eq_autova_91af;
static VALUE sy_AmethystParser_bind_lb_0_rb_;
static VALUE sy_AmethystParser_bind_lb_0_rb__dot__206f;
static VALUE sy_AmethystParser_bind_lb_10_rb__ff8c;
static VALUE sy_AmethystParser_bind_lb_17_rb__8424;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__e879;
static VALUE sy_AmethystParser_bind_lb_2_rb_;
static VALUE sy_AmethystParser_bind_lb_3_rb__eq__507c;
static VALUE sy_AmethystParser_bind_lb_4_rb_;
static VALUE sy_AmethystParser_bind_lb_4_rb__dot__1e8d;
static VALUE sy_AmethystParser_bind_lb_4_rb__dot__e4b4;
static VALUE sy_AmethystParser_bind_lb_4_rb__pl__13b0;
static VALUE sy_AmethystParser_bind_lb_5_rb__dot__028b;
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(7); bind_aset(bind,0/*o*/,a0);bind_aset(bind,5/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*o*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail);it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*r*/,it);
it=bind_aget(bind,5/*c*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(4); bind_aset(bind,0/*o*/,a0);bind_aset(bind,1/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=bind_aget(bind,0/*o*/); arg0=it;it=bind_aget(bind,1/*c*/); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(fail); bind_aset(bind,2/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_f34c,1,bind);  bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_argsOpt(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(39):;case ')' ... UC(255):; goto alt1_2; break;
case '(' ... '(':;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); break;
}  it=Amethyst_spaces(self ); FAILTEST(alt1_2);it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*r*/,it);
switch((unsigned char)*ame_curstr(self)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt1_2; break;
case ')' ... ')':;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); break;
}it=rb_funcall(self,sy_AmethystParser_bind_lb_2_rb_,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__pl__13b0,1,bind);  bind_aset(bind,5/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystParser_procargs(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
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
 break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_2;}
   it=Amethyst__(self ); FAILTEST(alt3_2);ame_setcut(self,Qtrue);goto alt3_2; 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_2;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_2;
 accept3:;
switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(39):;case ')' ... UC(255):; goto alt2_2; break;
case '(' ... '(':;   it=AmethystCore_anything(self ); FAILTEST(alt2_2); break;
}  it=Amethyst_spaces(self ); FAILTEST(alt2_2);it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break2); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*r*/,it);
switch((unsigned char)*ame_curstr(self)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt2_2; break;
case ')' ... ')':;   it=AmethystCore_anything(self ); FAILTEST(alt2_2); break;
}it=rb_funcall(self,sy_AmethystParser_bind_lb_2_rb_,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__pl__13b0,1,bind);  bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystParser_procargs(self ); FAILTEST(pass4); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto pass3;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt2_2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_ary_new3(0); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_call(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto fail; break;
case 'A' ... 'Z':; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_className(self ); FAILTEST(alt1_2); bind_aset(bind,0/*klas*/,it);
switch((unsigned char)*ame_curstr(self)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt1_2; break;
case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(alt1_2);if (strncmp(ame_curstr(self),":",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1); break;
}switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt1_2; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt1_2); bind_aset(bind,1/*name*/,it);
 break;
}  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_2); bind_aset(bind,2/*arg*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__lb_b_a4cc,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_3); bind_aset(bind,1/*name*/,it);
  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_3); bind_aset(bind,2/*arg*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb_bi_9146,1,bind);  bind_aset(bind,3/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(fail); bind_aset(bind,1/*name*/,it);
  it=AmethystParser_argsOpt(self ); FAILTEST(fail); bind_aset(bind,2/*arg*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb_bi_9146,1,bind);  bind_aset(bind,3/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_cases(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... ',':;case '.' ... '/':;case ':' ... '@':;case '[' ... UC(255):; it=rb_obj_clone(s__lt__524a); bind_aset(bind,0/*s*/,it);
 it=bind_aget(bind,0/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,0/*s*/);it=rb_ary_new3(0); bind_aset(bind,1/*x*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '=':;case '?' ... UC(255):; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,0/*s*/,it);
goto alt1_2; 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;
case '>' ... '>':; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,0/*s*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt2_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3);  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
 break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '=':;case '?' ... UC(255):; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,0/*s*/,it);
goto alt3_2; 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos5=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0d6a,1,bind);  
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_3;}
   it=Amethyst_empty(self ); FAILTEST(alt4_3); 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos5); goto alt3_3;
 accept4:;
  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto break1;
 accept3:;
 break;
case '>' ... '>':; int oldpos6=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,0/*s*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt5_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos7=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0d6a,1,bind);  
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_3;}
   it=Amethyst_empty(self ); FAILTEST(alt6_3); 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos7); goto alt5_3;
 accept6:;
  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos6); goto break1;
 accept5:;
 break;
} break;
} if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_6064,1,bind);  bind_aset(bind,7/*_result*/,it);
 break;
case '-' ... '-':;case '0' ... '9':; int oldpos8=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt7_2); bind_aset(bind,8/*autovar*/,it);
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*autovar*/,it);
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
int oldpos9=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_2;}
 it=bind_aget(bind,10/*autovar*/);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... UC(255):; goto alt8_2; break;
case '.' ... '.':;   it=AmethystCore_anything(self ); FAILTEST(alt8_2);int oldpos10=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt8_2;}
 if (strncmp(ame_curstr(self),"..",2)) goto alt9_2; else ame_setpos(self,ame_getpos(self)+2); 
ame_setcut(self,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt8_2;}
 if (strncmp(ame_curstr(self),".",1)) goto alt9_3; else ame_setpos(self,ame_getpos(self)+1); 
ame_setcut(self,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos10); goto alt8_2;
 accept9:;
 break;
}switch((unsigned char)*ame_curstr(self)){case UC(0) ... ',':;case '.' ... '/':;case ':' ... UC(255):; goto alt8_2; break;
case '-' ... '-':;case '0' ... '9':;   it=Amethyst_number(self ); FAILTEST(alt8_2); bind_aset(bind,11/*num*/,it);
 break;
} 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_2;}
 it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*num*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos9); goto alt7_2;
 accept8:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_m_8cfd,1,bind);  bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__lt__524a); bind_aset(bind,0/*s*/,it);
 it=bind_aget(bind,0/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_3);it=bind_aget(bind,0/*s*/);it=rb_ary_new3(0); bind_aset(bind,1/*x*/,it);
int oldpos11; while(1){oldpos11=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '=':;case '?' ... UC(255):; int oldpos12=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,0/*s*/,it);
goto alt10_2; 
ame_setcut(self,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt10_3);  it=AmethystCore_anything(self ); FAILTEST(alt10_3); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  
ame_setcut(self,Qnil);goto accept10;
  alt10_3:  ame_setpos(self,oldpos12); goto break2;
 accept10:;
 break;
case '>' ... '>':; int oldpos13=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,0/*s*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt11_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt11_3);  it=AmethystCore_anything(self ); FAILTEST(alt11_3); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  
ame_setcut(self,Qnil);goto accept11;
  alt11_3:  ame_setpos(self,oldpos13); goto break2;
 accept11:;
 break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '=':;case '?' ... UC(255):; int oldpos14=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,0/*s*/,it);
goto alt12_2; 
ame_setcut(self,Qnil);goto accept12;
alt12_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 int oldpos15=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt12_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt13_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0d6a,1,bind);  
ame_setcut(self,Qnil);goto accept13;
alt13_2: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt12_3;}
   it=Amethyst_empty(self ); FAILTEST(alt13_3); 
ame_setcut(self,Qnil);goto accept13;
  alt13_3:  ame_setpos(self,oldpos15); goto alt12_3;
 accept13:;
  it=AmethystCore_anything(self ); FAILTEST(alt12_3); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  
ame_setcut(self,Qnil);goto accept12;
  alt12_3:  ame_setpos(self,oldpos14); goto break2;
 accept12:;
 break;
case '>' ... '>':; int oldpos16=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,0/*s*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt14_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept14;
alt14_2: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 int oldpos17=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt14_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt15_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0d6a,1,bind);  
ame_setcut(self,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt14_3;}
   it=Amethyst_empty(self ); FAILTEST(alt15_3); 
ame_setcut(self,Qnil);goto accept15;
  alt15_3:  ame_setpos(self,oldpos17); goto alt14_3;
 accept15:;
  it=AmethystCore_anything(self ); FAILTEST(alt14_3); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  
ame_setcut(self,Qnil);goto accept14;
  alt14_3:  ame_setpos(self,oldpos16); goto break2;
 accept14:;
 break;
} break;
} if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_6064,1,bind);  bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos8); goto fail;
 accept7:;
 break;
case 'A' ... 'Z':; int oldpos18=ame_getpos(self);
alt16_1: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_className(self ); FAILTEST(alt16_2); bind_aset(bind,12/*clas*/,it);
switch((unsigned char)*ame_curstr(self)){case UC(0) ... '9':;case ';' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt16_2); break;
case ':' ... ':':; int oldpos19=ame_getpos(self);
alt17_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt16_2;}
   it=AmethystCore_anything(self ); FAILTEST(alt17_2);if (strncmp(ame_curstr(self),":",1)) goto alt17_2; else ame_setpos(self,ame_getpos(self)+1);ame_setcut(self,Qtrue);goto alt17_2; 
ame_setcut(self,Qnil);goto accept17;
alt17_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt16_2;}
   it=Amethyst_empty(self ); FAILTEST(alt17_3); 
ame_setcut(self,Qnil);goto accept17;
  alt17_3:  ame_setpos(self,oldpos19); goto alt16_2;
 accept17:;
 break;
}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_c_21d1,1,bind);  bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept16;
alt16_2: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__lt__524a); bind_aset(bind,0/*s*/,it);
 it=bind_aget(bind,0/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt16_3);it=bind_aget(bind,0/*s*/);it=rb_ary_new3(0); bind_aset(bind,1/*x*/,it);
int oldpos20; while(1){oldpos20=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '=':;case '?' ... UC(255):; int oldpos21=ame_getpos(self);
alt18_1: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,0/*s*/,it);
goto alt18_2; 
ame_setcut(self,Qnil);goto accept18;
alt18_2: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
   it=Amethyst_empty(self ); FAILTEST(alt18_3);  it=AmethystCore_anything(self ); FAILTEST(alt18_3); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  
ame_setcut(self,Qnil);goto accept18;
  alt18_3:  ame_setpos(self,oldpos21); goto break3;
 accept18:;
 break;
case '>' ... '>':; int oldpos22=ame_getpos(self);
alt19_1: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,0/*s*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt19_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept19;
alt19_2: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
   it=Amethyst_empty(self ); FAILTEST(alt19_3);  it=AmethystCore_anything(self ); FAILTEST(alt19_3); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  
ame_setcut(self,Qnil);goto accept19;
  alt19_3:  ame_setpos(self,oldpos22); goto break3;
 accept19:;
 break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '=':;case '?' ... UC(255):; int oldpos23=ame_getpos(self);
alt20_1: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,0/*s*/,it);
goto alt20_2; 
ame_setcut(self,Qnil);goto accept20;
alt20_2: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
 int oldpos24=ame_getpos(self);
alt21_1: ame_setpos(self,oldpos24);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt20_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt21_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0d6a,1,bind);  
ame_setcut(self,Qnil);goto accept21;
alt21_2: ame_setpos(self,oldpos24);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt20_3;}
   it=Amethyst_empty(self ); FAILTEST(alt21_3); 
ame_setcut(self,Qnil);goto accept21;
  alt21_3:  ame_setpos(self,oldpos24); goto alt20_3;
 accept21:;
  it=AmethystCore_anything(self ); FAILTEST(alt20_3); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  
ame_setcut(self,Qnil);goto accept20;
  alt20_3:  ame_setpos(self,oldpos23); goto break3;
 accept20:;
 break;
case '>' ... '>':; int oldpos25=ame_getpos(self);
alt22_1: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
 it=rb_obj_clone(s__gt__cedf); bind_aset(bind,0/*s*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt22_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept22;
alt22_2: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
 int oldpos26=ame_getpos(self);
alt23_1: ame_setpos(self,oldpos26);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt22_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt23_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0d6a,1,bind);  
ame_setcut(self,Qnil);goto accept23;
alt23_2: ame_setpos(self,oldpos26);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt22_3;}
   it=Amethyst_empty(self ); FAILTEST(alt23_3); 
ame_setcut(self,Qnil);goto accept23;
  alt23_3:  ame_setpos(self,oldpos26); goto alt22_3;
 accept23:;
  it=AmethystCore_anything(self ); FAILTEST(alt22_3); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  
ame_setcut(self,Qnil);goto accept22;
  alt22_3:  ame_setpos(self,oldpos25); goto break3;
 accept22:;
 break;
} break;
} if (ame_getstop(self)!=Qnil){{oldpos20=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos20); it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_6064,1,bind);  bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept16;
  alt16_3:  ame_setpos(self,oldpos18); goto fail;
 accept16:;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... UC(255):; goto fail; break;
case 'A' ... 'Z':; it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... '/':;case ':' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto break1; break;
case '0' ... '9':;case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  break;
} if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,5/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb__dot__028b,1,bind);  bind_aset(bind,6/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*ors*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystParser_a_eq_autova_91af,1,bind);  bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

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
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*ary*/,it);
it=rb_funcall(self,sy_AmethystParser_Or_dot_creat_67f0,1,bind);  bind_aset(bind,7/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '`':;case 'b' ... UC(255):; goto fail; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),"methyst",7)) goto fail; else ame_setpos(self,ame_getpos(self)+7); break;
}  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto fail; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(fail); bind_aset(bind,0/*name*/,it);
 break;
}int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... ';':;case '=' ... UC(255):; goto alt1_2; break;
case '<' ... '<':;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); break;
}  it=Amethyst_spaces(self ); FAILTEST(alt1_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt1_2; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt1_2); bind_aset(bind,1/*parent*/,it);
 break;
} 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s_Amethyst_fe41); bind_aset(bind,1/*parent*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr(self)){case UC(0) ... 'z':;case '|' ... UC(255):; goto fail; break;
case '{' ... '{':;   it=AmethystCore_anything(self ); FAILTEST(fail); break;
}it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto break1; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':;case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_rule(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  break;
} if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*rules*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '|':;case '~' ... UC(255):; goto fail; break;
case '}' ... '}':;   it=AmethystCore_anything(self ); FAILTEST(fail); break;
}it=rb_funcall(self,sy_AmethystParser_Grammar_dot__80c6,1,bind);  bind_aset(bind,5/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_host_expr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... ',':;case '.' ... 'z':;case '|' ... UC(255):; goto fail; break;
case '{' ... '{':;   it=AmethystParser_inline_host_expr(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
case '-' ... '-':;   it=AmethystCore_anything(self ); FAILTEST(fail);if (strncmp(ame_curstr(self),">",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);  it=Amethyst_line(self ); FAILTEST(fail); bind_aset(bind,1/*s*/,it);
it=rb_funcall(self,sy_AmethystParser__dq__le__dq__pl_bind_567e,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 switch((unsigned char)*ame_curstr(self)){case UC(0) ... 'z':;case '|' ... UC(255):; goto pass2; break;
case '{' ... '{':;   it=AmethystParser_inline_host_expr(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2; break;
}
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... '`':;case 'b' ... UC(255):; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
  it=Amethyst_empty(self ); FAILTEST(alt1_2);  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind); int oldpos3; while(1){oldpos3=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... '`':;case 'b' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break2);  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__8061,1,bind);  break;
case 'a' ... 'a':; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);if (strncmp(ame_curstr(self),"methyst",7)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+7);ame_setcut(self,Qtrue);goto alt2_2; 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto break2;
 accept2:;
  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__8061,1,bind);  break;
} if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__dot__e4b4,1,bind);  bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_3);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt1_3; break;
case '`' ... '`':;   it=AmethystCore_anything(self ); FAILTEST(alt1_3); break;
}  it=AmethystParser_expression(self ); FAILTEST(alt1_3);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt1_3; break;
case '`' ... '`':;   it=AmethystCore_anything(self ); FAILTEST(alt1_3); break;
}it=rb_obj_clone(s__bq__8333); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,sy_AmethystParser__append_lp__81ec,1,bind);  break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
  it=Amethyst_empty(self ); FAILTEST(alt3_2);  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind); int oldpos6; while(1){oldpos6=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... '`':;case 'b' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break3);  it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__8061,1,bind);  break;
case 'a' ... 'a':; int oldpos7=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2);if (strncmp(ame_curstr(self),"methyst",7)) goto alt4_2; else ame_setpos(self,ame_getpos(self)+7);ame_setcut(self,Qtrue);goto alt4_2; 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
   it=Amethyst_empty(self ); FAILTEST(alt4_3); 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos7); goto break3;
 accept4:;
  it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__8061,1,bind);  break;
} if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__dot__e4b4,1,bind);  bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_grammar(self ); FAILTEST(alt3_3); bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_3: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_spaces(self ); FAILTEST(alt3_4);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt3_4; break;
case '`' ... '`':;   it=AmethystCore_anything(self ); FAILTEST(alt3_4); break;
}  it=AmethystParser_expression(self ); FAILTEST(alt3_4);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt3_4; break;
case '`' ... '`':;   it=AmethystCore_anything(self ); FAILTEST(alt3_4); break;
}it=rb_obj_clone(s__bq__8333); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_4:  ame_setpos(self,oldpos5); goto break1;
 accept3:;
it=rb_funcall(self,sy_AmethystParser__append_lp__81ec,1,bind);  break;
case 'a' ... 'a':; int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2);if (strncmp(ame_curstr(self),"methyst",7)) goto alt6_2; else ame_setpos(self,ame_getpos(self)+7);ame_setcut(self,Qtrue);goto alt6_2; 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
   it=Amethyst_empty(self ); FAILTEST(alt6_3); 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos9); goto alt5_2;
 accept6:;
  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind); int oldpos10; while(1){oldpos10=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... '`':;case 'b' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break4);  it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__8061,1,bind);  break;
case 'a' ... 'a':; int oldpos11=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break4;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2);if (strncmp(ame_curstr(self),"methyst",7)) goto alt7_2; else ame_setpos(self,ame_getpos(self)+7);ame_setcut(self,Qtrue);goto alt7_2; 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break4;}
   it=Amethyst_empty(self ); FAILTEST(alt7_3); 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos11); goto break4;
 accept7:;
  it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__8061,1,bind);  break;
} if (ame_getstop(self)!=Qnil){{oldpos10=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos10); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__dot__e4b4,1,bind);  bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_grammar(self ); FAILTEST(alt5_3); bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_3: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_spaces(self ); FAILTEST(alt5_4);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt5_4; break;
case '`' ... '`':;   it=AmethystCore_anything(self ); FAILTEST(alt5_4); break;
}  it=AmethystParser_expression(self ); FAILTEST(alt5_4);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt5_4; break;
case '`' ... '`':;   it=AmethystCore_anything(self ); FAILTEST(alt5_4); break;
}it=rb_obj_clone(s__bq__8333); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,5/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_4:  ame_setpos(self,oldpos8); goto break1;
 accept5:;
it=rb_funcall(self,sy_AmethystParser__append_lp__81ec,1,bind);  break;
} if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,7/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_inline_host_expr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... 'z':;case '|' ... UC(255):; goto fail; break;
case '{' ... '{':;   it=AmethystCore_anything(self ); FAILTEST(fail);  it=Amethyst_spaces(self ); FAILTEST(fail);it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*r*/,it);
switch((unsigned char)*ame_curstr(self)){case UC(0) ... '|':;case '~' ... UC(255):; goto fail; break;
case '}' ... '}':;   it=AmethystCore_anything(self ); FAILTEST(fail); break;
}it=rb_funcall(self,sy_AmethystParser_bind_lb_2_rb_,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_Args_245f,1,bind);  bind_aset(bind,5/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_interpolated(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(12); bind_aset(bind,1/*e*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*x*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... '[':;case ']' ... UC(255):; int oldpos2=ame_getpos(self);
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
   it=Amethyst_empty(self ); FAILTEST(alt1_4);  it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0eeb,1,bind);  
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;
case UC(92) ... UC(92):; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,1/*e*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,2/*s*/);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,3/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,4/*o*/,it);
 it=bind_aget(bind,4/*o*/); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt2_3); bind_aset(bind,5/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_defb,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__6ac6,1,bind);  
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_4;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b494,1,bind);  
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_4;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_4;
 accept3:;
  it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0eeb,1,bind);  
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
 break;
} if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb_,1,bind);  bind_aset(bind,11/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_key(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... '?':;case 'A' ... UC(255):; goto fail; break;
case '@' ... '@':;   it=AmethystCore_anything(self ); FAILTEST(fail);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt1_2; break;
case 'A' ... 'Z':; int oldpos2=ame_getpos(self);
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
 break;
case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt1_2); bind_aset(bind,0/*name*/,it);
  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_2); bind_aset(bind,2/*arg*/,it);
it=rb_funcall(self,sy_AmethystParser_Key_lb_bind_20b7,1,bind);  bind_aset(bind,1/*_result*/,it);
 break;
} 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"@",1)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+1);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt1_3; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt1_3); bind_aset(bind,0/*name*/,it);
 break;
}it=rb_funcall(self,sy_AmethystParser_Global_lb_b_8edb,1,bind);  bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto fail; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... '/':;case ':' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto break1; break;
case '0' ... '9':;case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  break;
} if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,5/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb__dot__028b,1,bind);  bind_aset(bind,6/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt1_2; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt1_2); break;
}  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_2);  it=Amethyst_spaces(self ); FAILTEST(alt1_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '<':;case '>' ... UC(255):; goto alt1_2; break;
case '=' ... '=':;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); break;
}ame_setcut(self,Qtrue);goto alt1_2; 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE AmethystParser_postfixed(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystParser_term(self ); FAILTEST(fail); bind_aset(bind,0/*from*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break1);switch((unsigned char)*ame_curstr(self)){case UC(0) ... ')':;case ',' ... '9':;case ';' ... '<':;case '>' ... '>':;case '@' ... 'Z':;case UC(92) ... UC(255):; goto break1; break;
case '*' ... '+':;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*one*/,it);
it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_33ac,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(break1);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '?':;case '[' ... '^':;case '`' ... '`':;case '|' ... UC(255):; goto break1; break;
case '{' ... '{':;   it=AmethystParser_inline_host_expr(self ); FAILTEST(break1); bind_aset(bind,2/*e*/,it);
it=rb_funcall(self,sy_AmethystParser_Seq_lb__Bin_7997,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
case '@' ... '@':;   it=AmethystParser_key(self ); FAILTEST(break1); bind_aset(bind,3/*name*/,it);
switch((unsigned char)*ame_curstr(self)){case UC(0) ... 'Z':;case UC(92) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break1); bind_aset(bind,4/*append*/,it);
 break;
case '[' ... '[':; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);if (strncmp(ame_curstr(self),"]",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__lb__rb__d751); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,4/*append*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3); bind_aset(bind,4/*append*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;
}it=rb_funcall(self,sy_AmethystParser__Bind_lp_bi_2082,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(break1); bind_aset(bind,3/*name*/,it);
switch((unsigned char)*ame_curstr(self)){case UC(0) ... 'Z':;case UC(92) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break1); bind_aset(bind,4/*append*/,it);
 break;
case '[' ... '[':; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);if (strncmp(ame_curstr(self),"]",1)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__lb__rb__d751); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,4/*append*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); bind_aset(bind,4/*append*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
 break;
}it=rb_funcall(self,sy_AmethystParser__Bind_lp_bi_2082,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
} break;
case '=' ... '=':;   it=AmethystCore_anything(self ); FAILTEST(break1);if (strncmp(ame_curstr(self),">",1)) goto break1; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_term(self ); FAILTEST(break1); bind_aset(bind,2/*e*/,it);
it=rb_funcall(self,sy_AmethystParser_Pass_lb_bin_6bdb,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
case '?' ... '?':;   it=AmethystCore_anything(self ); FAILTEST(break1);it=rb_funcall(self,sy_AmethystParser_Or_lb_bind_lb__cb4a,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
case '[' ... '[':;   it=AmethystCore_anything(self ); FAILTEST(break1);  it=AmethystParser_expression(self ); FAILTEST(break1); bind_aset(bind,2/*e*/,it);
  it=Amethyst_spaces(self ); FAILTEST(break1);switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(92):;case '^' ... UC(255):; goto break1; break;
case ']' ... ']':;   it=AmethystCore_anything(self ); FAILTEST(break1); break;
}it=rb_funcall(self,sy_AmethystParser_Enter_lb_bi_822a,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
} break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst__(self ); FAILTEST(alt3_2);ame_setcut(self,Qtrue);goto alt3_2; 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto break1;
 accept3:;
switch((unsigned char)*ame_curstr(self)){case UC(0) ... ')':;case ',' ... '9':;case ';' ... '<':;case '>' ... '>':;case '@' ... 'Z':;case UC(92) ... UC(255):; goto break1; break;
case '*' ... '+':;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*one*/,it);
it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_33ac,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(break1);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '?':;case '[' ... '^':;case '`' ... '`':;case '|' ... UC(255):; goto break1; break;
case '{' ... '{':;   it=AmethystParser_inline_host_expr(self ); FAILTEST(break1); bind_aset(bind,2/*e*/,it);
it=rb_funcall(self,sy_AmethystParser_Seq_lb__Bin_7997,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
case '@' ... '@':;   it=AmethystParser_key(self ); FAILTEST(break1); bind_aset(bind,3/*name*/,it);
switch((unsigned char)*ame_curstr(self)){case UC(0) ... 'Z':;case UC(92) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break1); bind_aset(bind,4/*append*/,it);
 break;
case '[' ... '[':; int oldpos5=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2);if (strncmp(ame_curstr(self),"]",1)) goto alt4_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__lb__rb__d751); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,4/*append*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt4_3); bind_aset(bind,4/*append*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos5); goto break1;
 accept4:;
 break;
}it=rb_funcall(self,sy_AmethystParser__Bind_lp_bi_2082,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(break1); bind_aset(bind,3/*name*/,it);
switch((unsigned char)*ame_curstr(self)){case UC(0) ... 'Z':;case UC(92) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break1); bind_aset(bind,4/*append*/,it);
 break;
case '[' ... '[':; int oldpos6=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2);if (strncmp(ame_curstr(self),"]",1)) goto alt5_2; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__lb__rb__d751); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,4/*append*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt5_3); bind_aset(bind,4/*append*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos6); goto break1;
 accept5:;
 break;
}it=rb_funcall(self,sy_AmethystParser__Bind_lp_bi_2082,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
} break;
case '=' ... '=':;   it=AmethystCore_anything(self ); FAILTEST(break1);if (strncmp(ame_curstr(self),">",1)) goto break1; else ame_setpos(self,ame_getpos(self)+1);  it=AmethystParser_term(self ); FAILTEST(break1); bind_aset(bind,2/*e*/,it);
it=rb_funcall(self,sy_AmethystParser_Pass_lb_bin_6bdb,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
case '?' ... '?':;   it=AmethystCore_anything(self ); FAILTEST(break1);it=rb_funcall(self,sy_AmethystParser_Or_lb_bind_lb__cb4a,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
case '[' ... '[':;   it=AmethystCore_anything(self ); FAILTEST(break1);  it=AmethystParser_expression(self ); FAILTEST(break1); bind_aset(bind,2/*e*/,it);
  it=Amethyst_spaces(self ); FAILTEST(break1);switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(92):;case '^' ... UC(255):; goto break1; break;
case ']' ... ']':;   it=AmethystCore_anything(self ); FAILTEST(break1); break;
}it=rb_funcall(self,sy_AmethystParser_Enter_lb_bi_822a,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
} break;
} if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*from*/); bind_aset(bind,6/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... '%':;case UC(39) ... '}':;case UC(127) ... UC(255):;   it=AmethystParser_postfixed(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
case '&' ... '&':;case '~' ... '~':; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*neg*/,it);
switch((unsigned char)*ame_curstr(self)){case UC(0) ... 'z':;case '|' ... UC(255):; goto alt2_2; break;
case '{' ... '{':;   it=AmethystParser_inline_host_expr(self ); FAILTEST(alt2_2); bind_aset(bind,4/*expr*/,it);
 break;
}it=rb_funcall(self,sy_AmethystParser_Pred_lb_bin_4918,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*neg*/,it);
  it=AmethystParser_prefixed(self ); FAILTEST(alt2_3); bind_aset(bind,5/*m*/,it);
it=rb_funcall(self,sy_AmethystParser_Lookahea_b11c,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_postfixed(self ); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
}
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

return it;
fail: return failobj; }
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_AmethystParser_2,rb_obj_class(ame_curobj(self))))){case 0/*Args*/:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_procargs2(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
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
 break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,5/*a*/,it);
it=rb_funcall(self,sy_AmethystParser__at_tmp_lt__lt_bi_c4f3,1,bind);  bind_aset(bind,4/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(22);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... '!':;case '#' ... '#':;case '%' ... '&':;case '*' ... '-':;case '/' ... '/':;case ';' ... '?':;case 'A' ... 'Z':;case UC(92) ... UC(92):;case '^' ... '^':;case '|' ... '|':;case '~' ... UC(255):; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt1_2); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt1_3); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt1_4); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
   it=Amethyst_spaces(self ); FAILTEST(alt2_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt2_2; break;
case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(alt2_2);if (strncmp(ame_curstr(self),"@",1)) goto alt2_2; else ame_setpos(self,ame_getpos(self)+1); break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0eeb,1,bind);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_5;
 accept2:;
switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt1_5); break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
   it=Amethyst__(self ); FAILTEST(alt3_2);ame_setcut(self,Qtrue);goto alt3_2; 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto alt1_5;
 accept3:;
 break;
}switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt1_5; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt1_5); bind_aset(bind,9/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_AmethystParser__append_lp__653e,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_6); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_6:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case UC(34) ... UC(34):; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos4=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt4_2); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt4_3); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_3: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt4_4); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_4: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_5);it=rb_ary_new3(0); bind_aset(bind,10/*x*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos6=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
 it=bind_aget(bind,2/*o*/); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt5_2); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9ca5,1,bind);  
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt5_3);  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d43a,1,bind);  
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos6); goto break1;
 accept5:;
 break;
case UC(34) ... UC(34):; int oldpos7=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
 it=bind_aget(bind,2/*o*/); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt6_3); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9ca5,1,bind);  
ame_setcut(self,Qnil);goto accept6;
alt6_3: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt6_4);  it=AmethystCore_anything(self ); FAILTEST(alt6_4); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d43a,1,bind);  
ame_setcut(self,Qnil);goto accept6;
  alt6_4:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos8=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
 it=bind_aget(bind,2/*o*/); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt7_2); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9ca5,1,bind);  
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos9=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__283c,1,bind);  
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt7_3;}
   it=Amethyst_empty(self ); FAILTEST(alt8_3); 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos9); goto alt7_3;
 accept8:;
  it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d43a,1,bind);  
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos8); goto break1;
 accept7:;
 break;
case UC(34) ... UC(34):; int oldpos10=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
 it=bind_aget(bind,2/*o*/); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt9_3); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9ca5,1,bind);  
ame_setcut(self,Qnil);goto accept9;
alt9_3: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos11=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt9_4;}
   it=AmethystCore_anything(self ); FAILTEST(alt10_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__283c,1,bind);  
ame_setcut(self,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt9_4;}
   it=Amethyst_empty(self ); FAILTEST(alt10_3); 
ame_setcut(self,Qnil);goto accept10;
  alt10_3:  ame_setpos(self,oldpos11); goto alt9_4;
 accept10:;
  it=AmethystCore_anything(self ); FAILTEST(alt9_4); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d43a,1,bind);  
ame_setcut(self,Qnil);goto accept9;
  alt9_4:  ame_setpos(self,oldpos10); goto break1;
 accept9:;
 break;
} break;
} if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_AmethystParser_bind_lb_10_rb__ff8c,1,bind);  bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/); bind_aset(bind,15/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__qu__e4e6,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_5: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos12=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt4_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt11_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt11_2; break;
case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(alt11_2);if (strncmp(ame_curstr(self),"@",1)) goto alt11_2; else ame_setpos(self,ame_getpos(self)+1); break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0eeb,1,bind);  
ame_setcut(self,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt4_6;}
   it=Amethyst_empty(self ); FAILTEST(alt11_3); 
ame_setcut(self,Qnil);goto accept11;
  alt11_3:  ame_setpos(self,oldpos12); goto alt4_6;
 accept11:;
switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt4_6); break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos13=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt4_6;}
   it=Amethyst__(self ); FAILTEST(alt12_2);ame_setcut(self,Qtrue);goto alt12_2; 
ame_setcut(self,Qnil);goto accept12;
alt12_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt4_6;}
   it=Amethyst_empty(self ); FAILTEST(alt12_3); 
ame_setcut(self,Qnil);goto accept12;
  alt12_3:  ame_setpos(self,oldpos13); goto alt4_6;
 accept12:;
 break;
}switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt4_6; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt4_6); bind_aset(bind,9/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_AmethystParser__append_lp__653e,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_6:  ame_setpos(self,oldpos4); goto fail;
 accept4:;
 break;
case '$' ... '$':;case ':' ... ':':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos14=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt13_2); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept13;
alt13_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt13_3); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept13;
alt13_3: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt13_4); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept13;
alt13_4: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos15=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt13_5;}
   it=Amethyst_spaces(self ); FAILTEST(alt14_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt14_2; break;
case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(alt14_2);if (strncmp(ame_curstr(self),"@",1)) goto alt14_2; else ame_setpos(self,ame_getpos(self)+1); break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0eeb,1,bind);  
ame_setcut(self,Qnil);goto accept14;
alt14_2: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt13_5;}
   it=AmethystCore_anything(self ); FAILTEST(alt14_3); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0605,1,bind);  
ame_setcut(self,Qnil);goto accept14;
alt14_3: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt13_5;}
   it=Amethyst_empty(self ); FAILTEST(alt14_4); 
ame_setcut(self,Qnil);goto accept14;
  alt14_4:  ame_setpos(self,oldpos15); goto alt13_5;
 accept14:;
switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt13_5); break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos16=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt13_5;}
   it=Amethyst__(self ); FAILTEST(alt15_2);ame_setcut(self,Qtrue);goto alt15_2; 
ame_setcut(self,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos16);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt13_5;}
   it=Amethyst_empty(self ); FAILTEST(alt15_3); 
ame_setcut(self,Qnil);goto accept15;
  alt15_3:  ame_setpos(self,oldpos16); goto alt13_5;
 accept15:;
 break;
}switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt13_5; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt13_5); bind_aset(bind,9/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_AmethystParser__append_lp__653e,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept13;
alt13_5: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt13_6); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept13;
  alt13_6:  ame_setpos(self,oldpos14); goto fail;
 accept13:;
 break;
case UC(39) ... UC(39):; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos17=ame_getpos(self);
alt16_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt16_2); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept16;
alt16_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt16_3); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept16;
alt16_3: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt16_4); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept16;
alt16_4: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt16_5);it=rb_ary_new3(0); bind_aset(bind,17/*x*/,it);
int oldpos18; while(1){oldpos18=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '&':;case '(' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break2);  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,18/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__835a,1,bind);  break;
case UC(39) ... UC(39):; int oldpos19=ame_getpos(self);
alt17_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystCore_anything(self ); FAILTEST(alt17_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept17;
alt17_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt17_3);  it=AmethystCore_anything(self ); FAILTEST(alt17_3); bind_aset(bind,18/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__835a,1,bind);  
ame_setcut(self,Qnil);goto accept17;
  alt17_3:  ame_setpos(self,oldpos19); goto break2;
 accept17:;
 break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '&':;case '(' ... UC(255):; int oldpos20=ame_getpos(self);
alt18_1: ame_setpos(self,oldpos20);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystCore_anything(self ); FAILTEST(alt18_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__595b,1,bind);  
ame_setcut(self,Qnil);goto accept18;
alt18_2: ame_setpos(self,oldpos20);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt18_3); 
ame_setcut(self,Qnil);goto accept18;
  alt18_3:  ame_setpos(self,oldpos20); goto break2;
 accept18:;
  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,18/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__835a,1,bind);  break;
case UC(39) ... UC(39):; int oldpos21=ame_getpos(self);
alt19_1: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystCore_anything(self ); FAILTEST(alt19_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept19;
alt19_2: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 int oldpos22=ame_getpos(self);
alt20_1: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt20_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__595b,1,bind);  
ame_setcut(self,Qnil);goto accept20;
alt20_2: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_3;}
   it=Amethyst_empty(self ); FAILTEST(alt20_3); 
ame_setcut(self,Qnil);goto accept20;
  alt20_3:  ame_setpos(self,oldpos22); goto alt19_3;
 accept20:;
  it=AmethystCore_anything(self ); FAILTEST(alt19_3); bind_aset(bind,18/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__835a,1,bind);  
ame_setcut(self,Qnil);goto accept19;
  alt19_3:  ame_setpos(self,oldpos21); goto break2;
 accept19:;
 break;
} break;
} if (ame_getstop(self)!=Qnil){{oldpos18=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos18); it=rb_funcall(self,sy_AmethystParser_bind_lb_17_rb__8424,1,bind);  bind_aset(bind,20/*_result*/,it);
it=bind_aget(bind,20/*_result*/); bind_aset(bind,15/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__dq__b2a2,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept16;
alt16_5: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos23=ame_getpos(self);
alt21_1: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt16_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt21_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt21_2; break;
case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(alt21_2);if (strncmp(ame_curstr(self),"@",1)) goto alt21_2; else ame_setpos(self,ame_getpos(self)+1); break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0eeb,1,bind);  
ame_setcut(self,Qnil);goto accept21;
alt21_2: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt16_6;}
   it=Amethyst_empty(self ); FAILTEST(alt21_3); 
ame_setcut(self,Qnil);goto accept21;
  alt21_3:  ame_setpos(self,oldpos23); goto alt16_6;
 accept21:;
switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt16_6); break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos24=ame_getpos(self);
alt22_1: ame_setpos(self,oldpos24);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt16_6;}
   it=Amethyst__(self ); FAILTEST(alt22_2);ame_setcut(self,Qtrue);goto alt22_2; 
ame_setcut(self,Qnil);goto accept22;
alt22_2: ame_setpos(self,oldpos24);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt16_6;}
   it=Amethyst_empty(self ); FAILTEST(alt22_3); 
ame_setcut(self,Qnil);goto accept22;
  alt22_3:  ame_setpos(self,oldpos24); goto alt16_6;
 accept22:;
 break;
}switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt16_6; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt16_6); bind_aset(bind,9/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_AmethystParser__append_lp__653e,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept16;
  alt16_6:  ame_setpos(self,oldpos17); goto fail;
 accept16:;
 break;
case '(' ... ')':;case '[' ... '[':;case ']' ... ']':;case '{' ... '{':;case '}' ... '}':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos25=ame_getpos(self);
alt23_1: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt23_2); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept23;
alt23_2: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt23_3); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept23;
alt23_3: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt23_4); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept23;
alt23_4: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos26=ame_getpos(self);
alt24_1: ame_setpos(self,oldpos26);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt23_5;}
   it=Amethyst_spaces(self ); FAILTEST(alt24_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt24_2; break;
case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(alt24_2);if (strncmp(ame_curstr(self),"@",1)) goto alt24_2; else ame_setpos(self,ame_getpos(self)+1); break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0eeb,1,bind);  
ame_setcut(self,Qnil);goto accept24;
alt24_2: ame_setpos(self,oldpos26);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt23_5;}
   it=Amethyst_empty(self ); FAILTEST(alt24_3); 
ame_setcut(self,Qnil);goto accept24;
  alt24_3:  ame_setpos(self,oldpos26); goto alt23_5;
 accept24:;
switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt23_5); break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos27=ame_getpos(self);
alt25_1: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt23_5;}
   it=Amethyst__(self ); FAILTEST(alt25_2);ame_setcut(self,Qtrue);goto alt25_2; 
ame_setcut(self,Qnil);goto accept25;
alt25_2: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt23_5;}
   it=Amethyst_empty(self ); FAILTEST(alt25_3); 
ame_setcut(self,Qnil);goto accept25;
  alt25_3:  ame_setpos(self,oldpos27); goto alt23_5;
 accept25:;
 break;
}switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt23_5; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt23_5); bind_aset(bind,9/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_AmethystParser__append_lp__653e,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept23;
  alt23_5:  ame_setpos(self,oldpos25); goto fail;
 accept23:;
 break;
case '.' ... '.':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos28=ame_getpos(self);
alt26_1: ame_setpos(self,oldpos28);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt26_2); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept26;
alt26_2: ame_setpos(self,oldpos28);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt26_3); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept26;
alt26_3: ame_setpos(self,oldpos28);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt26_4); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept26;
alt26_4: ame_setpos(self,oldpos28);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt26_5);int oldpos29=ame_getpos(self);
alt27_1: ame_setpos(self,oldpos29);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt26_5;}
 if (strncmp(ame_curstr(self),"..",2)) goto alt27_2; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__dot__dot__dot__2f43); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept27;
alt27_2: ame_setpos(self,oldpos29);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt26_5;}
 if (strncmp(ame_curstr(self),".",1)) goto alt27_3; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__dot__dot__58b9); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept27;
  alt27_3:  ame_setpos(self,oldpos29); goto alt26_5;
 accept27:;
 
ame_setcut(self,Qnil);goto accept26;
alt26_5: ame_setpos(self,oldpos28);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos30=ame_getpos(self);
alt28_1: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt26_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt28_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt28_2; break;
case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(alt28_2);if (strncmp(ame_curstr(self),"@",1)) goto alt28_2; else ame_setpos(self,ame_getpos(self)+1); break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0eeb,1,bind);  
ame_setcut(self,Qnil);goto accept28;
alt28_2: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt26_6;}
   it=AmethystCore_anything(self ); FAILTEST(alt28_3); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0605,1,bind);  
ame_setcut(self,Qnil);goto accept28;
alt28_3: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt26_6;}
   it=Amethyst_empty(self ); FAILTEST(alt28_4); 
ame_setcut(self,Qnil);goto accept28;
  alt28_4:  ame_setpos(self,oldpos30); goto alt26_6;
 accept28:;
switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt26_6); break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos31=ame_getpos(self);
alt29_1: ame_setpos(self,oldpos31);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt26_6;}
   it=Amethyst__(self ); FAILTEST(alt29_2);ame_setcut(self,Qtrue);goto alt29_2; 
ame_setcut(self,Qnil);goto accept29;
alt29_2: ame_setpos(self,oldpos31);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt26_6;}
   it=Amethyst_empty(self ); FAILTEST(alt29_3); 
ame_setcut(self,Qnil);goto accept29;
  alt29_3:  ame_setpos(self,oldpos31); goto alt26_6;
 accept29:;
 break;
}switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt26_6; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt26_6); bind_aset(bind,9/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_AmethystParser__append_lp__653e,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept26;
alt26_6: ame_setpos(self,oldpos28);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt26_7); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept26;
  alt26_7:  ame_setpos(self,oldpos28); goto fail;
 accept26:;
 break;
case '0' ... '9':;case '_' ... '_':;case 'a' ... 'z':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos32=ame_getpos(self);
alt30_1: ame_setpos(self,oldpos32);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt30_2); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept30;
alt30_2: ame_setpos(self,oldpos32);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt30_3); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept30;
alt30_3: ame_setpos(self,oldpos32);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt30_4); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept30;
alt30_4: ame_setpos(self,oldpos32);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt30_5); bind_aset(bind,21/*e*/,it);
switch((unsigned char)*ame_curstr(self)){case UC(0) ... ';':;case '=' ... UC(255):; goto alt30_5; break;
case '<' ... '<':;   it=AmethystCore_anything(self ); FAILTEST(alt30_5);if (strncmp(ame_curstr(self),"<",1)) goto alt30_5; else ame_setpos(self,ame_getpos(self)+1); break;
}it=rb_funcall(self,sy_AmethystParser__lb_bind_lb_21_9dcf,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept30;
alt30_5: ame_setpos(self,oldpos32);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos33=ame_getpos(self);
alt31_1: ame_setpos(self,oldpos33);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt30_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt31_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt31_2; break;
case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(alt31_2);if (strncmp(ame_curstr(self),"@",1)) goto alt31_2; else ame_setpos(self,ame_getpos(self)+1); break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0eeb,1,bind);  
ame_setcut(self,Qnil);goto accept31;
alt31_2: ame_setpos(self,oldpos33);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt30_6;}
   it=Amethyst_empty(self ); FAILTEST(alt31_3); 
ame_setcut(self,Qnil);goto accept31;
  alt31_3:  ame_setpos(self,oldpos33); goto alt30_6;
 accept31:;
switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt30_6); break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos34=ame_getpos(self);
alt32_1: ame_setpos(self,oldpos34);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt30_6;}
   it=Amethyst__(self ); FAILTEST(alt32_2);ame_setcut(self,Qtrue);goto alt32_2; 
ame_setcut(self,Qnil);goto accept32;
alt32_2: ame_setpos(self,oldpos34);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt30_6;}
   it=Amethyst_empty(self ); FAILTEST(alt32_3); 
ame_setcut(self,Qnil);goto accept32;
  alt32_3:  ame_setpos(self,oldpos34); goto alt30_6;
 accept32:;
 break;
}switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt30_6; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt30_6); bind_aset(bind,9/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_AmethystParser__append_lp__653e,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept30;
alt30_6: ame_setpos(self,oldpos32);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt30_7); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept30;
  alt30_7:  ame_setpos(self,oldpos32); goto fail;
 accept30:;
 break;
case '@' ... '@':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos35=ame_getpos(self);
alt33_1: ame_setpos(self,oldpos35);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt33_2); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept33;
alt33_2: ame_setpos(self,oldpos35);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt33_3); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept33;
alt33_3: ame_setpos(self,oldpos35);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt33_4); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept33;
alt33_4: ame_setpos(self,oldpos35);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos36=ame_getpos(self);
alt34_1: ame_setpos(self,oldpos36);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt33_5;}
   it=Amethyst_spaces(self ); FAILTEST(alt34_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt34_2; break;
case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(alt34_2);if (strncmp(ame_curstr(self),"@",1)) goto alt34_2; else ame_setpos(self,ame_getpos(self)+1); break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0eeb,1,bind);  
ame_setcut(self,Qnil);goto accept34;
alt34_2: ame_setpos(self,oldpos36);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt33_5;}
   it=Amethyst_empty(self ); FAILTEST(alt34_3); 
ame_setcut(self,Qnil);goto accept34;
  alt34_3:  ame_setpos(self,oldpos36); goto alt33_5;
 accept34:;
switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt33_5); break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos37=ame_getpos(self);
alt35_1: ame_setpos(self,oldpos37);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt33_5;}
   it=Amethyst__(self ); FAILTEST(alt35_2);ame_setcut(self,Qtrue);goto alt35_2; 
ame_setcut(self,Qnil);goto accept35;
alt35_2: ame_setpos(self,oldpos37);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt33_5;}
   it=Amethyst_empty(self ); FAILTEST(alt35_3); 
ame_setcut(self,Qnil);goto accept35;
  alt35_3:  ame_setpos(self,oldpos37); goto alt33_5;
 accept35:;
 break;
}switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt33_5; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt33_5); bind_aset(bind,9/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_AmethystParser__append_lp__653e,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept33;
alt33_5: ame_setpos(self,oldpos35);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt33_6); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept33;
alt33_6: ame_setpos(self,oldpos35);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt33_7); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept33;
  alt33_7:  ame_setpos(self,oldpos35); goto fail;
 accept33:;
 break;
case '`' ... '`':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos38=ame_getpos(self);
alt36_1: ame_setpos(self,oldpos38);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt36_2);  it=AmethystParser_expression(self ); FAILTEST(alt36_2); bind_aset(bind,21/*e*/,it);
switch((unsigned char)*ame_curstr(self)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt36_2; break;
case '`' ... '`':;   it=AmethystCore_anything(self ); FAILTEST(alt36_2); break;
}it=rb_funcall(self,sy_AmethystParser_Lambda_lb___012f,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept36;
alt36_2: ame_setpos(self,oldpos38);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it;it=rb_obj_clone(s__rp__9371); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt36_3); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept36;
alt36_3: ame_setpos(self,oldpos38);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it;it=rb_obj_clone(s__rb__0fbd); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt36_4); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept36;
alt36_4: ame_setpos(self,oldpos38);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__le__f95b); arg0=it;it=rb_obj_clone(s__re__cbb1); arg1=it; it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt36_5); bind_aset(bind,3/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_4968,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept36;
alt36_5: ame_setpos(self,oldpos38);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos39=ame_getpos(self);
alt37_1: ame_setpos(self,oldpos39);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt36_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt37_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt37_2; break;
case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(alt37_2);if (strncmp(ame_curstr(self),"@",1)) goto alt37_2; else ame_setpos(self,ame_getpos(self)+1); break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0eeb,1,bind);  
ame_setcut(self,Qnil);goto accept37;
alt37_2: ame_setpos(self,oldpos39);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt36_6;}
   it=Amethyst_empty(self ); FAILTEST(alt37_3); 
ame_setcut(self,Qnil);goto accept37;
  alt37_3:  ame_setpos(self,oldpos39); goto alt36_6;
 accept37:;
switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt36_6); break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos40=ame_getpos(self);
alt38_1: ame_setpos(self,oldpos40);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt36_6;}
   it=Amethyst__(self ); FAILTEST(alt38_2);ame_setcut(self,Qtrue);goto alt38_2; 
ame_setcut(self,Qnil);goto accept38;
alt38_2: ame_setpos(self,oldpos40);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt36_6;}
   it=Amethyst_empty(self ); FAILTEST(alt38_3); 
ame_setcut(self,Qnil);goto accept38;
  alt38_3:  ame_setpos(self,oldpos40); goto alt36_6;
 accept38:;
 break;
}switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto alt36_6; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(alt36_6); bind_aset(bind,9/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_AmethystParser__append_lp__653e,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept36;
  alt36_6:  ame_setpos(self,oldpos38); goto fail;
 accept36:;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_AmethystParser__at_locals_eq__94df,1,bind); it=rb_funcall(self,sy_AmethystParser__at_bnding_7d3c,1,bind);  bind_aset(bind,0/*bnding*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto fail; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); FAILTEST(fail); bind_aset(bind,1/*name*/,it);
 break;
}  it=AmethystParser_ruleargs(self ); FAILTEST(fail); bind_aset(bind,2/*args*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '<':;case '>' ... UC(255):; goto fail; break;
case '=' ... '=':;   it=AmethystCore_anything(self ); FAILTEST(fail); break;
}  it=AmethystParser_expression(self ); FAILTEST(fail); bind_aset(bind,3/*body*/,it);
it=rb_funcall(self,sy_AmethystParser__body_lp_bi_152d,1,bind);  bind_aset(bind,3/*body*/,it);
it=rb_funcall(self,sy_AmethystParser__at_locals_dot__bdc6,1,bind);  bind_aset(bind,4/*locals*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_3_rb__eq__507c,1,bind); it=rb_funcall(self,sy_AmethystParser_Rule_dot_cre_e3af,1,bind);  bind_aset(bind,5/*_result*/,it);

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
int oldpos1; while(1){oldpos1=ame_getpos(self); switch(FIX2LONG(rb_hash_aref(switchhash_AmethystParser_1,rb_obj_class(ame_curobj(self))))){case 0/*Args*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,4/*name*/,it);
it=rb_funcall(self,sy_AmethystParser__Local_lp_b_cc09,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break1;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9e15,1,bind);  break;
case 1/*Object*/:; goto break1; break;
} if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nr(self ); FAILTEST(break1);  it=Amethyst_spaces(self ); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*ary*/,it);
it=rb_funcall(self,sy_AmethystParser_Seq_dot_crea_abce,1,bind);  bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(14);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... '!':;case '#' ... '&':;case ')' ... ',':;case '.' ... '?':;case UC(92) ... '^':;case '`' ... '`':;case '|' ... UC(255):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_cases(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
 switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject1; break;
case '.' ... '.':;case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(reject1); break;
} x=1; goto accept2;  reject1: x=0; accept2: it=Qnil; ame_setpos(self,oldpos2); if (x==0) goto alt1_3;switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt1_3); break;
case '.' ... '.':; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2); 
ame_setcut(self,Qnil);goto accept3;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_3;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept3;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_3;
 accept3:;
 break;
}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=bind_aget(bind,1/*s*/);  it=Amethyst_line(self ); FAILTEST(alt1_4); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__b447,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;
case 'n' ... 'n':; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2);if (strncmp(ame_curstr(self),"ested(",6)) goto alt3_2; else ame_setpos(self,ame_getpos(self)+6);  it=AmethystParser_expression(self ); FAILTEST(alt3_2); bind_aset(bind,3/*expr*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt3_2);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt3_2; break;
case ')' ... ')':;   it=AmethystCore_anything(self ); FAILTEST(alt3_2); break;
}it=rb_funcall(self,sy_AmethystParser_Nested_lb_b_e419,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_cases(self ); FAILTEST(alt3_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt3_3: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_call(self ); FAILTEST(alt3_4); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt3_4: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos5=ame_getpos(self);
 switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject2; break;
case '.' ... '.':;case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(reject2); break;
} x=1; goto accept5;  reject2: x=0; accept5: it=Qnil; ame_setpos(self,oldpos5); if (x==0) goto alt3_5;switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt3_5); break;
case '.' ... '.':; int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_5;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2); 
ame_setcut(self,Qnil);goto accept6;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_5;}
   it=Amethyst_empty(self ); FAILTEST(alt4_3); 
ame_setcut(self,Qnil);goto accept6;
  alt4_3:  ame_setpos(self,oldpos6); goto alt3_5;
 accept6:;
 break;
}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt3_5: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_6);it=bind_aget(bind,1/*s*/);  it=Amethyst_line(self ); FAILTEST(alt3_6); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__b447,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt3_6:  ame_setpos(self,oldpos4); goto fail;
 accept4:;
 break;
case UC(34) ... UC(34):; int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_cases(self ); FAILTEST(alt5_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt5_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
 switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject3; break;
case '.' ... '.':;case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(reject3); break;
} x=1; goto accept8;  reject3: x=0; accept8: it=Qnil; ame_setpos(self,oldpos8); if (x==0) goto alt5_3;switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt5_3); break;
case '.' ... '.':; int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2); 
ame_setcut(self,Qnil);goto accept9;
alt6_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_3;}
   it=Amethyst_empty(self ); FAILTEST(alt6_3); 
ame_setcut(self,Qnil);goto accept9;
  alt6_3:  ame_setpos(self,oldpos9); goto alt5_3;
 accept9:;
 break;
}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt5_3: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_4);it=rb_ary_new3(0); bind_aset(bind,4/*x*/,it);
int oldpos10; while(1){oldpos10=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '!':;case '#' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break1);  it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__088f,1,bind);  break;
case UC(34) ... UC(34):; int oldpos11=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept10;
alt7_2: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt7_3);  it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__088f,1,bind);  
ame_setcut(self,Qnil);goto accept10;
  alt7_3:  ame_setpos(self,oldpos11); goto break1;
 accept10:;
 break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos12=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7352,1,bind);  
ame_setcut(self,Qnil);goto accept11;
alt8_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt8_3); 
ame_setcut(self,Qnil);goto accept11;
  alt8_3:  ame_setpos(self,oldpos12); goto break1;
 accept11:;
  it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__088f,1,bind);  break;
case UC(34) ... UC(34):; int oldpos13=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept12;
alt9_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos14=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt9_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt10_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7352,1,bind);  
ame_setcut(self,Qnil);goto accept13;
alt10_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt9_3;}
   it=Amethyst_empty(self ); FAILTEST(alt10_3); 
ame_setcut(self,Qnil);goto accept13;
  alt10_3:  ame_setpos(self,oldpos14); goto alt9_3;
 accept13:;
  it=AmethystCore_anything(self ); FAILTEST(alt9_3); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__088f,1,bind);  
ame_setcut(self,Qnil);goto accept12;
  alt9_3:  ame_setpos(self,oldpos13); goto break1;
 accept12:;
 break;
} break;
} if (ame_getstop(self)!=Qnil){{oldpos10=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos10); it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__dot__1e8d,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_t_c68e,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt5_4: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_5);it=bind_aget(bind,1/*s*/);  it=Amethyst_line(self ); FAILTEST(alt5_5); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__b447,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt5_5:  ame_setpos(self,oldpos7); goto fail;
 accept7:;
 break;
case UC(39) ... UC(39):; int oldpos15=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_cases(self ); FAILTEST(alt11_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept14;
alt11_2: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos16=ame_getpos(self);
 switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject4; break;
case '.' ... '.':;case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(reject4); break;
} x=1; goto accept15;  reject4: x=0; accept15: it=Qnil; ame_setpos(self,oldpos16); if (x==0) goto alt11_3;switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt11_3); break;
case '.' ... '.':; int oldpos17=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt11_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt12_2); 
ame_setcut(self,Qnil);goto accept16;
alt12_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt11_3;}
   it=Amethyst_empty(self ); FAILTEST(alt12_3); 
ame_setcut(self,Qnil);goto accept16;
  alt12_3:  ame_setpos(self,oldpos17); goto alt11_3;
 accept16:;
 break;
}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept14;
alt11_3: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt11_4);it=rb_ary_new3(0); bind_aset(bind,4/*x*/,it);
int oldpos18; while(1){oldpos18=ame_getpos(self); switch((unsigned char)*ame_curstr(self)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '&':;case '(' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break2);  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__088f,1,bind);  break;
case UC(39) ... UC(39):; int oldpos19=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystCore_anything(self ); FAILTEST(alt13_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept17;
alt13_2: ame_setpos(self,oldpos19);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt13_3);  it=AmethystCore_anything(self ); FAILTEST(alt13_3); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__088f,1,bind);  
ame_setcut(self,Qnil);goto accept17;
  alt13_3:  ame_setpos(self,oldpos19); goto break2;
 accept17:;
 break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr(self)){case UC(0) ... '&':;case '(' ... UC(255):; int oldpos20=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos20);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystCore_anything(self ); FAILTEST(alt14_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7352,1,bind);  
ame_setcut(self,Qnil);goto accept18;
alt14_2: ame_setpos(self,oldpos20);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt14_3); 
ame_setcut(self,Qnil);goto accept18;
  alt14_3:  ame_setpos(self,oldpos20); goto break2;
 accept18:;
  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__088f,1,bind);  break;
case UC(39) ... UC(39):; int oldpos21=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystCore_anything(self ); FAILTEST(alt15_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept19;
alt15_2: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
 int oldpos22=ame_getpos(self);
alt16_1: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt16_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7352,1,bind);  
ame_setcut(self,Qnil);goto accept20;
alt16_2: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_3;}
   it=Amethyst_empty(self ); FAILTEST(alt16_3); 
ame_setcut(self,Qnil);goto accept20;
  alt16_3:  ame_setpos(self,oldpos22); goto alt15_3;
 accept20:;
  it=AmethystCore_anything(self ); FAILTEST(alt15_3); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__088f,1,bind);  
ame_setcut(self,Qnil);goto accept19;
  alt15_3:  ame_setpos(self,oldpos21); goto break2;
 accept19:;
 break;
} break;
} if (ame_getstop(self)!=Qnil){{oldpos18=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos18); it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__dot__1e8d,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_s_319b,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept14;
alt11_4: ame_setpos(self,oldpos15);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt11_5);it=bind_aget(bind,1/*s*/);  it=Amethyst_line(self ); FAILTEST(alt11_5); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__b447,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept14;
  alt11_5:  ame_setpos(self,oldpos15); goto fail;
 accept14:;
 break;
case '(' ... '(':; int oldpos23=ame_getpos(self);
alt17_1: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_cases(self ); FAILTEST(alt17_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept21;
alt17_2: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos24=ame_getpos(self);
 switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject5; break;
case '.' ... '.':;case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(reject5); break;
} x=1; goto accept22;  reject5: x=0; accept22: it=Qnil; ame_setpos(self,oldpos24); if (x==0) goto alt17_3;switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt17_3); break;
case '.' ... '.':; int oldpos25=ame_getpos(self);
alt18_1: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt17_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt18_2); 
ame_setcut(self,Qnil);goto accept23;
alt18_2: ame_setpos(self,oldpos25);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt17_3;}
   it=Amethyst_empty(self ); FAILTEST(alt18_3); 
ame_setcut(self,Qnil);goto accept23;
  alt18_3:  ame_setpos(self,oldpos25); goto alt17_3;
 accept23:;
 break;
}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept21;
alt17_3: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt17_4);it=bind_aget(bind,1/*s*/);  it=Amethyst_line(self ); FAILTEST(alt17_4); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__b447,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept21;
alt17_4: ame_setpos(self,oldpos23);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt17_5);  it=AmethystParser_expression(self ); FAILTEST(alt17_5); bind_aset(bind,9/*x*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt17_5);switch((unsigned char)*ame_curstr(self)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt17_5; break;
case ')' ... ')':;   it=AmethystCore_anything(self ); FAILTEST(alt17_5); break;
}switch((unsigned char)*ame_curstr(self)){case UC(0) ... 'Z':;case UC(92) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt17_5);it=bind_aget(bind,9/*x*/); bind_aset(bind,0/*_result*/,it);
 break;
case '[' ... '[':; int oldpos26=ame_getpos(self);
alt19_1: ame_setpos(self,oldpos26);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt17_5;}
   it=AmethystCore_anything(self ); FAILTEST(alt19_2);if (strncmp(ame_curstr(self),"]",1)) goto alt19_2; else ame_setpos(self,ame_getpos(self)+1);it=bind_aget(bind,9/*x*/); bind_aset(bind,10/*ors*/,it);
it=rb_funcall(self,sy_AmethystParser_a_eq_autova_8222,1,bind);  bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept24;
alt19_2: ame_setpos(self,oldpos26);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt17_5;}
   it=Amethyst_empty(self ); FAILTEST(alt19_3);it=bind_aget(bind,9/*x*/); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept24;
  alt19_3:  ame_setpos(self,oldpos26); goto alt17_5;
 accept24:;
 break;
} 
ame_setcut(self,Qnil);goto accept21;
  alt17_5:  ame_setpos(self,oldpos23); goto fail;
 accept21:;
 break;
case '-' ... '-':;case '{' ... '{':; int oldpos27=ame_getpos(self);
alt20_1: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_cases(self ); FAILTEST(alt20_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept25;
alt20_2: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos28=ame_getpos(self);
 switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject6; break;
case '.' ... '.':;case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(reject6); break;
} x=1; goto accept26;  reject6: x=0; accept26: it=Qnil; ame_setpos(self,oldpos28); if (x==0) goto alt20_3;switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt20_3); break;
case '.' ... '.':; int oldpos29=ame_getpos(self);
alt21_1: ame_setpos(self,oldpos29);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt20_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt21_2); 
ame_setcut(self,Qnil);goto accept27;
alt21_2: ame_setpos(self,oldpos29);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt20_3;}
   it=Amethyst_empty(self ); FAILTEST(alt21_3); 
ame_setcut(self,Qnil);goto accept27;
  alt21_3:  ame_setpos(self,oldpos29); goto alt20_3;
 accept27:;
 break;
}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept25;
alt20_3: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_host_expr(self ); FAILTEST(alt20_4); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept25;
alt20_4: ame_setpos(self,oldpos27);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt20_5);it=bind_aget(bind,1/*s*/);  it=Amethyst_line(self ); FAILTEST(alt20_5); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__b447,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept25;
  alt20_5:  ame_setpos(self,oldpos27); goto fail;
 accept25:;
 break;
case '@' ... '@':; int oldpos30=ame_getpos(self);
alt22_1: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_cases(self ); FAILTEST(alt22_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept28;
alt22_2: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos31=ame_getpos(self);
 switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject7; break;
case '.' ... '.':;case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(reject7); break;
} x=1; goto accept29;  reject7: x=0; accept29: it=Qnil; ame_setpos(self,oldpos31); if (x==0) goto alt22_3;switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt22_3); break;
case '.' ... '.':; int oldpos32=ame_getpos(self);
alt23_1: ame_setpos(self,oldpos32);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt22_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt23_2); 
ame_setcut(self,Qnil);goto accept30;
alt23_2: ame_setpos(self,oldpos32);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt22_3;}
   it=Amethyst_empty(self ); FAILTEST(alt23_3); 
ame_setcut(self,Qnil);goto accept30;
  alt23_3:  ame_setpos(self,oldpos32); goto alt22_3;
 accept30:;
 break;
}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept28;
alt22_3: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt22_4); bind_aset(bind,12/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_23ab,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept28;
alt22_4: ame_setpos(self,oldpos30);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt22_5);it=bind_aget(bind,1/*s*/);  it=Amethyst_line(self ); FAILTEST(alt22_5); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__b447,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept28;
  alt22_5:  ame_setpos(self,oldpos30); goto fail;
 accept28:;
 break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'a':;case 'c' ... 'm':;case 'o' ... 'z':; int oldpos33=ame_getpos(self);
alt24_1: ame_setpos(self,oldpos33);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_cases(self ); FAILTEST(alt24_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept31;
alt24_2: ame_setpos(self,oldpos33);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_call(self ); FAILTEST(alt24_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept31;
alt24_3: ame_setpos(self,oldpos33);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos34=ame_getpos(self);
 switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject8; break;
case '.' ... '.':;case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(reject8); break;
} x=1; goto accept32;  reject8: x=0; accept32: it=Qnil; ame_setpos(self,oldpos34); if (x==0) goto alt24_4;switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt24_4); break;
case '.' ... '.':; int oldpos35=ame_getpos(self);
alt25_1: ame_setpos(self,oldpos35);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt24_4;}
   it=AmethystCore_anything(self ); FAILTEST(alt25_2); 
ame_setcut(self,Qnil);goto accept33;
alt25_2: ame_setpos(self,oldpos35);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt24_4;}
   it=Amethyst_empty(self ); FAILTEST(alt25_3); 
ame_setcut(self,Qnil);goto accept33;
  alt25_3:  ame_setpos(self,oldpos35); goto alt24_4;
 accept33:;
 break;
}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept31;
alt24_4: ame_setpos(self,oldpos33);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt24_5);it=bind_aget(bind,1/*s*/);  it=Amethyst_line(self ); FAILTEST(alt24_5); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__b447,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept31;
  alt24_5:  ame_setpos(self,oldpos33); goto fail;
 accept31:;
 break;
case '[' ... '[':; int oldpos36=ame_getpos(self);
alt26_1: ame_setpos(self,oldpos36);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_cases(self ); FAILTEST(alt26_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept34;
alt26_2: ame_setpos(self,oldpos36);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos37=ame_getpos(self);
 switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject9; break;
case '.' ... '.':;case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(reject9); break;
} x=1; goto accept35;  reject9: x=0; accept35: it=Qnil; ame_setpos(self,oldpos37); if (x==0) goto alt26_3;switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt26_3); break;
case '.' ... '.':; int oldpos38=ame_getpos(self);
alt27_1: ame_setpos(self,oldpos38);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt26_3;}
   it=AmethystCore_anything(self ); FAILTEST(alt27_2); 
ame_setcut(self,Qnil);goto accept36;
alt27_2: ame_setpos(self,oldpos38);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt26_3;}
   it=Amethyst_empty(self ); FAILTEST(alt27_3); 
ame_setcut(self,Qnil);goto accept36;
  alt27_3:  ame_setpos(self,oldpos38); goto alt26_3;
 accept36:;
 break;
}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept34;
alt26_3: ame_setpos(self,oldpos36);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt26_4);  it=AmethystParser_expression(self ); FAILTEST(alt26_4); bind_aset(bind,13/*e*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt26_4);switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(92):;case '^' ... UC(255):; goto alt26_4; break;
case ']' ... ']':;   it=AmethystCore_anything(self ); FAILTEST(alt26_4); break;
}it=rb_funcall(self,sy_AmethystParser_Enter_lb_Ap_57b6,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept34;
alt26_4: ame_setpos(self,oldpos36);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt26_5);it=bind_aget(bind,1/*s*/);  it=Amethyst_line(self ); FAILTEST(alt26_5); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__b447,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept34;
  alt26_5:  ame_setpos(self,oldpos36); goto fail;
 accept34:;
 break;
case 'b' ... 'b':; int oldpos39=ame_getpos(self);
alt28_1: ame_setpos(self,oldpos39);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt28_2);if (strncmp(ame_curstr(self),"reak",4)) goto alt28_2; else ame_setpos(self,ame_getpos(self)+4);it=rb_funcall(self,sy_AmethystParser_Seq_lb_Cut_lb__3505,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept37;
alt28_2: ame_setpos(self,oldpos39);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_cases(self ); FAILTEST(alt28_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept37;
alt28_3: ame_setpos(self,oldpos39);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_call(self ); FAILTEST(alt28_4); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept37;
alt28_4: ame_setpos(self,oldpos39);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos40=ame_getpos(self);
 switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject10; break;
case '.' ... '.':;case ':' ... ':':;   it=AmethystCore_anything(self ); FAILTEST(reject10); break;
} x=1; goto accept38;  reject10: x=0; accept38: it=Qnil; ame_setpos(self,oldpos40); if (x==0) goto alt28_5;switch((unsigned char)*ame_curstr(self)){case UC(0) ... '-':;case '/' ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt28_5); break;
case '.' ... '.':; int oldpos41=ame_getpos(self);
alt29_1: ame_setpos(self,oldpos41);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt28_5;}
   it=AmethystCore_anything(self ); FAILTEST(alt29_2); 
ame_setcut(self,Qnil);goto accept39;
alt29_2: ame_setpos(self,oldpos41);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt28_5;}
   it=Amethyst_empty(self ); FAILTEST(alt29_3); 
ame_setcut(self,Qnil);goto accept39;
  alt29_3:  ame_setpos(self,oldpos41); goto alt28_5;
 accept39:;
 break;
}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept37;
alt28_5: ame_setpos(self,oldpos39);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt28_6);it=bind_aget(bind,1/*s*/);  it=Amethyst_line(self ); FAILTEST(alt28_6); bind_aset(bind,2/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__b447,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept37;
  alt28_6:  ame_setpos(self,oldpos39); goto fail;
 accept37:;
 break;
}
return it;
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
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
switchhash_AmethystParser_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystParser_1);;
switchhash_AmethystParser_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystParser_2);;
sy_AmethystParser_Act_lb_Args_245f=rb_intern("AmethystParser_Act_lb_Args_245f");
sy_AmethystParser_Act_lb_bind_23ab=rb_intern("AmethystParser_Act_lb_bind_23ab");
sy_AmethystParser_Apply_lb__dq_a_1437=rb_intern("AmethystParser_Apply_lb__dq_a_1437");
sy_AmethystParser_Apply_lb__dq_c_21d1=rb_intern("AmethystParser_Apply_lb__dq_c_21d1");
sy_AmethystParser_Apply_lb__dq_m_8cfd=rb_intern("AmethystParser_Apply_lb__dq_m_8cfd");
sy_AmethystParser_Apply_lb__dq_r_6064=rb_intern("AmethystParser_Apply_lb__dq_r_6064");
sy_AmethystParser_Apply_lb__dq_s_319b=rb_intern("AmethystParser_Apply_lb__dq_s_319b");
sy_AmethystParser_Apply_lb__dq_t_c68e=rb_intern("AmethystParser_Apply_lb__dq_t_c68e");
sy_AmethystParser_Apply_lb__lb_b_a4cc=rb_intern("AmethystParser_Apply_lb__lb_b_a4cc");
sy_AmethystParser_Apply_lb_bi_9146=rb_intern("AmethystParser_Apply_lb_bi_9146");
sy_AmethystParser_Args_lb__le__co_a_4968=rb_intern("AmethystParser_Args_lb__le__co_a_4968");
sy_AmethystParser_Args_lb__le__co_a_defb=rb_intern("AmethystParser_Args_lb__le__co_a_defb");
sy_AmethystParser_Args_lb__le__co_a_f34c=rb_intern("AmethystParser_Args_lb__le__co_a_f34c");
sy_AmethystParser_Comment_lb__b447=rb_intern("AmethystParser_Comment_lb__b447");
sy_AmethystParser_Enter_lb_Ap_57b6=rb_intern("AmethystParser_Enter_lb_Ap_57b6");
sy_AmethystParser_Enter_lb_bi_822a=rb_intern("AmethystParser_Enter_lb_bi_822a");
sy_AmethystParser_Global_lb_b_8edb=rb_intern("AmethystParser_Global_lb_b_8edb");
sy_AmethystParser_Grammar_dot__80c6=rb_intern("AmethystParser_Grammar_dot__80c6");
sy_AmethystParser_Key_lb_bind_20b7=rb_intern("AmethystParser_Key_lb_bind_20b7");
sy_AmethystParser_Lambda_lb___012f=rb_intern("AmethystParser_Lambda_lb___012f");
sy_AmethystParser_Lookahea_b11c=rb_intern("AmethystParser_Lookahea_b11c");
sy_AmethystParser_Many_lb_bin_33ac=rb_intern("AmethystParser_Many_lb_bin_33ac");
sy_AmethystParser_Nested_lb_b_e419=rb_intern("AmethystParser_Nested_lb_b_e419");
sy_AmethystParser_Or_dot_creat_67f0=rb_intern("AmethystParser_Or_dot_creat_67f0");
sy_AmethystParser_Or_lb_bind_lb__cb4a=rb_intern("AmethystParser_Or_lb_bind_lb__cb4a");
sy_AmethystParser_Pass_lb_bin_6bdb=rb_intern("AmethystParser_Pass_lb_bin_6bdb");
sy_AmethystParser_Pred_lb_bin_4918=rb_intern("AmethystParser_Pred_lb_bin_4918");
sy_AmethystParser_Result_lb__le__ae0e=rb_intern("AmethystParser_Result_lb__le__ae0e");
sy_AmethystParser_Rule_dot_cre_e3af=rb_intern("AmethystParser_Rule_dot_cre_e3af");
sy_AmethystParser_Seq_dot_crea_abce=rb_intern("AmethystParser_Seq_dot_crea_abce");
sy_AmethystParser_Seq_lb_Cut_lb__3505=rb_intern("AmethystParser_Seq_lb_Cut_lb__3505");
sy_AmethystParser_Seq_lb__Bin_7997=rb_intern("AmethystParser_Seq_lb__Bin_7997");
sy_AmethystParser_Strin_lb__lb__dq__b2a2=rb_intern("AmethystParser_Strin_lb__lb__dq__b2a2");
sy_AmethystParser_Strin_lb__lb__qu__e4e6=rb_intern("AmethystParser_Strin_lb__lb__qu__e4e6");
sy_AmethystParser__Bind_lp_bi_2082=rb_intern("AmethystParser__Bind_lp_bi_2082");
sy_AmethystParser__Local_lp_b_cc09=rb_intern("AmethystParser__Local_lp_b_cc09");
sy_AmethystParser__append_lp__0605=rb_intern("AmethystParser__append_lp__0605");
sy_AmethystParser__append_lp__088f=rb_intern("AmethystParser__append_lp__088f");
sy_AmethystParser__append_lp__0d6a=rb_intern("AmethystParser__append_lp__0d6a");
sy_AmethystParser__append_lp__0eeb=rb_intern("AmethystParser__append_lp__0eeb");
sy_AmethystParser__append_lp__283c=rb_intern("AmethystParser__append_lp__283c");
sy_AmethystParser__append_lp__4de3=rb_intern("AmethystParser__append_lp__4de3");
sy_AmethystParser__append_lp__595b=rb_intern("AmethystParser__append_lp__595b");
sy_AmethystParser__append_lp__653e=rb_intern("AmethystParser__append_lp__653e");
sy_AmethystParser__append_lp__6ac6=rb_intern("AmethystParser__append_lp__6ac6");
sy_AmethystParser__append_lp__7352=rb_intern("AmethystParser__append_lp__7352");
sy_AmethystParser__append_lp__8061=rb_intern("AmethystParser__append_lp__8061");
sy_AmethystParser__append_lp__81ec=rb_intern("AmethystParser__append_lp__81ec");
sy_AmethystParser__append_lp__835a=rb_intern("AmethystParser__append_lp__835a");
sy_AmethystParser__append_lp__9ca5=rb_intern("AmethystParser__append_lp__9ca5");
sy_AmethystParser__append_lp__9e15=rb_intern("AmethystParser__append_lp__9e15");
sy_AmethystParser__append_lp__b2a5=rb_intern("AmethystParser__append_lp__b2a5");
sy_AmethystParser__append_lp__b494=rb_intern("AmethystParser__append_lp__b494");
sy_AmethystParser__append_lp__cbd1=rb_intern("AmethystParser__append_lp__cbd1");
sy_AmethystParser__append_lp__d113=rb_intern("AmethystParser__append_lp__d113");
sy_AmethystParser__append_lp__d43a=rb_intern("AmethystParser__append_lp__d43a");
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
sy_AmethystParser__lb_bind_lb_21_9dcf=rb_intern("AmethystParser__lb_bind_lb_21_9dcf");
sy_AmethystParser__lp_bind_lb_0_rb__418b=rb_intern("AmethystParser__lp_bind_lb_0_rb__418b");
sy_AmethystParser__qu__sh__le__qu__9722=rb_intern("AmethystParser__qu__sh__le__qu__9722");
sy_AmethystParser_a_eq_autova_8222=rb_intern("AmethystParser_a_eq_autova_8222");
sy_AmethystParser_a_eq_autova_91af=rb_intern("AmethystParser_a_eq_autova_91af");
sy_AmethystParser_bind_lb_0_rb_=rb_intern("AmethystParser_bind_lb_0_rb_");
sy_AmethystParser_bind_lb_0_rb__dot__206f=rb_intern("AmethystParser_bind_lb_0_rb__dot__206f");
sy_AmethystParser_bind_lb_10_rb__ff8c=rb_intern("AmethystParser_bind_lb_10_rb__ff8c");
sy_AmethystParser_bind_lb_17_rb__8424=rb_intern("AmethystParser_bind_lb_17_rb__8424");
sy_AmethystParser_bind_lb_1_rb__dot__e879=rb_intern("AmethystParser_bind_lb_1_rb__dot__e879");
sy_AmethystParser_bind_lb_2_rb_=rb_intern("AmethystParser_bind_lb_2_rb_");
sy_AmethystParser_bind_lb_3_rb__eq__507c=rb_intern("AmethystParser_bind_lb_3_rb__eq__507c");
sy_AmethystParser_bind_lb_4_rb_=rb_intern("AmethystParser_bind_lb_4_rb_");
sy_AmethystParser_bind_lb_4_rb__dot__1e8d=rb_intern("AmethystParser_bind_lb_4_rb__dot__1e8d");
sy_AmethystParser_bind_lb_4_rb__dot__e4b4=rb_intern("AmethystParser_bind_lb_4_rb__dot__e4b4");
sy_AmethystParser_bind_lb_4_rb__pl__13b0=rb_intern("AmethystParser_bind_lb_4_rb__pl__13b0");
sy_AmethystParser_bind_lb_5_rb__dot__028b=rb_intern("AmethystParser_bind_lb_5_rb__dot__028b");
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
 rb_eval_string("testversionparser('e61f5e9c94f83b16071c9b26cb264c8d')");}
