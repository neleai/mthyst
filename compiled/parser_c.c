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
VALUE AmethystParser_nameFirst(VALUE self );
VALUE AmethystParser_nameRest(VALUE self );
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
VALUE Amethyst_digit(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_endline(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_letter(VALUE self );
VALUE Amethyst_number(VALUE self );
VALUE Amethyst_regch(VALUE self ,VALUE);
VALUE Amethyst_spaces(VALUE self );
VALUE Amethyst_token(VALUE self ,VALUE);
VALUE Amethyst_upper(VALUE self );
VALUE switchhashAmethystParser1;
static VALUE c_139;
static VALUE s_1;
static VALUE s_2;
static VALUE s_3;
static VALUE s_4;
static VALUE s_5;
static VALUE s_6;
static VALUE s_7;
static VALUE s_8;
static VALUE s_9;
static VALUE s_AmethystParser_1AmethystParser;
static VALUE s_AmethystParser_2AmethystParser;
static VALUE s_AmethystParser_3AmethystParser;
static VALUE s_AmethystParser_4AmethystParser;
static VALUE s_AmethystParser_Act_lb_Args1AmethystParser;
static VALUE s_AmethystParser_Act_lb_bind1AmethystParser;
static VALUE s_AmethystParser_Apply_lb_1AmethystParser;
static VALUE s_AmethystParser_Apply_lb_2AmethystParser;
static VALUE s_AmethystParser_Apply_lb_3AmethystParser;
static VALUE s_AmethystParser_Apply_lb_4AmethystParser;
static VALUE s_AmethystParser_Apply_lb_5AmethystParser;
static VALUE s_AmethystParser_Apply_lb_6AmethystParser;
static VALUE s_AmethystParser_Apply_lb_bi1AmethystParser;
static VALUE s_AmethystParser_Args_lb_1AmethystParser;
static VALUE s_AmethystParser_Args_lb_2AmethystParser;
static VALUE s_AmethystParser_Args_lb_3AmethystParser;
static VALUE s_AmethystParser_Comment_lb_1AmethystParser;
static VALUE s_AmethystParser_Exp_lb__bod1AmethystParser;
static VALUE s_AmethystParser_Global_lb_b1AmethystParser;
static VALUE s_AmethystParser_Grammar_dot_1AmethystParser;
static VALUE s_AmethystParser_Key_lb_bind1AmethystParser;
static VALUE s_AmethystParser_Lookahea1AmethystParser;
static VALUE s_AmethystParser_Many_lb_bin1AmethystParser;
static VALUE s_AmethystParser_Nested_lb_b1AmethystParser;
static VALUE s_AmethystParser_Object_dot_c1AmethystParser;
static VALUE s_AmethystParser_Or_dot_creat1AmethystParser;
static VALUE s_AmethystParser_Or_lb_bind_lb_1AmethystParser;
static VALUE s_AmethystParser_Pass_lb_bin1AmethystParser;
static VALUE s_AmethystParser_Pred_lb_bin1AmethystParser;
static VALUE s_AmethystParser_Result_lb_1AmethystParser;
static VALUE s_AmethystParser_Rule_dot_cre1AmethystParser;
static VALUE s_AmethystParser_Seq_dot_crea1AmethystParser;
static VALUE s_AmethystParser_Seq_lb_Cut_lb_1AmethystParser;
static VALUE s_AmethystParser_Seq_lb__Bin1AmethystParser;
static VALUE s_AmethystParser_Strin_lb_co1AmethystParser;
static VALUE s_AmethystParser__Bind_lp_bi1AmethystParser;
static VALUE s_AmethystParser__Local_lp_b1AmethystParser;
static VALUE s_AmethystParser__append_lp_10AmethystParser;
static VALUE s_AmethystParser__append_lp_11AmethystParser;
static VALUE s_AmethystParser__append_lp_12AmethystParser;
static VALUE s_AmethystParser__append_lp_13AmethystParser;
static VALUE s_AmethystParser__append_lp_14AmethystParser;
static VALUE s_AmethystParser__append_lp_15AmethystParser;
static VALUE s_AmethystParser__append_lp_16AmethystParser;
static VALUE s_AmethystParser__append_lp_17AmethystParser;
static VALUE s_AmethystParser__append_lp_18AmethystParser;
static VALUE s_AmethystParser__append_lp_19AmethystParser;
static VALUE s_AmethystParser__append_lp_1AmethystParser;
static VALUE s_AmethystParser__append_lp_20AmethystParser;
static VALUE s_AmethystParser__append_lp_21AmethystParser;
static VALUE s_AmethystParser__append_lp_22AmethystParser;
static VALUE s_AmethystParser__append_lp_23AmethystParser;
static VALUE s_AmethystParser__append_lp_24AmethystParser;
static VALUE s_AmethystParser__append_lp_25AmethystParser;
static VALUE s_AmethystParser__append_lp_26AmethystParser;
static VALUE s_AmethystParser__append_lp_27AmethystParser;
static VALUE s_AmethystParser__append_lp_2AmethystParser;
static VALUE s_AmethystParser__append_lp_3AmethystParser;
static VALUE s_AmethystParser__append_lp_4AmethystParser;
static VALUE s_AmethystParser__append_lp_5AmethystParser;
static VALUE s_AmethystParser__append_lp_6AmethystParser;
static VALUE s_AmethystParser__append_lp_7AmethystParser;
static VALUE s_AmethystParser__append_lp_8AmethystParser;
static VALUE s_AmethystParser__append_lp_9AmethystParser;
static VALUE s_AmethystParser__at_ary1AmethystParser;
static VALUE s_AmethystParser__at_ary_eq__lb__rb_1AmethystParser;
static VALUE s_AmethystParser__at_ary_lt__lt_Ar1AmethystParser;
static VALUE s_AmethystParser__at_bnding1AmethystParser;
static VALUE s_AmethystParser__at_locals_dot_1AmethystParser;
static VALUE s_AmethystParser__at_locals_eq_1AmethystParser;
static VALUE s_AmethystParser__at_tmp_lt__lt_bi1AmethystParser;
static VALUE s_AmethystParser__body_lp_bi1AmethystParser;
static VALUE s_AmethystParser__di__lb_1AmethystParser;
static VALUE s_AmethystParser__di__lb__do__dot__co__rb__di_1AmethystParser;
static VALUE s_AmethystParser__di__lb__dot__co__bs__lb__rb__di_1AmethystParser;
static VALUE s_AmethystParser__lb_bind_lb_3_rb_1AmethystParser;
static VALUE s_AmethystParser__lp_bind_lb_1_rb_1AmethystParser;
static VALUE s_AmethystParser__lp_bind_lb_5_rb_1AmethystParser;
static VALUE s_AmethystParser_a_eq_autova1AmethystParser;
static VALUE s_AmethystParser_a_eq_autova2AmethystParser;
static VALUE s_AmethystParser_bind_lb_0_rb_1AmethystParser;
static VALUE s_AmethystParser_bind_lb_10_rb_1AmethystParser;
static VALUE s_AmethystParser_bind_lb_10_rb_2AmethystParser;
static VALUE s_AmethystParser_bind_lb_11_rb_1AmethystParser;
static VALUE s_AmethystParser_bind_lb_11_rb_2AmethystParser;
static VALUE s_AmethystParser_bind_lb_12_rb_1AmethystParser;
static VALUE s_AmethystParser_bind_lb_1_rb__eq_1AmethystParser;
static VALUE s_AmethystParser_bind_lb_1_rb__ti_1AmethystParser;
static VALUE s_AmethystParser_bind_lb_3_rb__eq_1AmethystParser;
static VALUE s_AmethystParser_bind_lb_3_rb__eq_2AmethystParser;
static VALUE s_AmethystParser_bind_lb_4_rb__pl_1AmethystParser;
static VALUE s_AmethystParser_bind_lb_4_rb__ti_1AmethystParser;
static VALUE s_AmethystParser_bind_lb_5_rb__eq_1AmethystParser;
static VALUE s_AmethystParser_bind_lb_5_rb__pl_1AmethystParser;
static VALUE s_AmethystParser_bind_lb_6_rb__eq_1AmethystParser;
static VALUE s_AmethystParser_bind_lb_6_rb__eq_2AmethystParser;
static VALUE s_AmethystParser_bind_lb_9_rb__pl_1AmethystParser;
static VALUE s_AmethystParser_leterize1AmethystParser;
static VALUE s__1;
static VALUE s__at_1;
static VALUE s__at__at_1;
static VALUE s__bs_1;
static VALUE s__bs__bs_1;
static VALUE s__co_1;
static VALUE s__co__at_1;
static VALUE s__co__co_1;
static VALUE s__dot_1;
static VALUE s__dot__dot_1;
static VALUE s__dot__dot__dot_1;
static VALUE s__eq_1;
static VALUE s__eq__gt_1;
static VALUE s__gt_1;
static VALUE s__lb_1;
static VALUE s__lb__rb_1;
static VALUE s__lp_1;
static VALUE s__lt_1;
static VALUE s__mi__gt_1;
static VALUE s__pl_1;
static VALUE s__rb_1;
static VALUE s__rp_1;
static VALUE s__ti_1;
static VALUE s_amethyst1;
static VALUE s_break1;
static VALUE s_nested1;
static VALUE s_sizeAmethystParser;
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(7); bind_aset(bind,0/*o*/,a0);bind_aset(bind,5/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=bind_aget(bind,0/*o*/);
 bind_aset(bind,1/*s*/,it);  it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(s_6); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_4AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*r*/,it); it=bind_aget(bind,5/*c*/);
 bind_aset(bind,1/*s*/,it);  it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);it=bind_aget(bind,4/*r*/);
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(4); bind_aset(bind,0/*o*/,a0);bind_aset(bind,1/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=bind_aget(bind,0/*o*/); arg0=it;it=bind_aget(bind,1/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(fail);
 bind_aset(bind,2/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_2AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_addargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*result*/,it); it=rb_ary_new3(0);
 bind_aset(bind,1/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=c_139; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break1);
 bind_aset(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,3/*name*/,it); it=rb_funcall(self,s_AmethystParser__Local_lp_b1AmethystParser,1,bind); 
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_6AmethystParser,1,bind); it=bind_aget(bind,4/*autovar*/);
 bind_aset(bind,5/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto break1;
it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_16AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,1/*autovar*/);it=rb_funcall(self,s_AmethystParser_bind_lb_0_rb_1AmethystParser,1,bind); 
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_application(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(18);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_name(self ); FAILTEST(fail);
 bind_aset(bind,0/*autovar*/,it); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,1/*autovar*/,it); it=bind_aget(bind,1/*autovar*/);
 bind_aset(bind,2/*autovar*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,3/*klas*/,it);  it=rb_obj_clone(s__co__co_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 bind_aset(bind,4/*rule*/,it); it=rb_funcall(self,s_AmethystParser__lb_bind_lb_3_rb_1AmethystParser,1,bind); 
 bind_aset(bind,4/*rule*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*rule*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(39):;case UC(41) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,5/*_result*/,it);  break;case UC(40) ... UC(40):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s__lp_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);  it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(s_6); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_ary_new3(0);
 bind_aset(bind,6/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,7/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_15AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,6/*autovar*/);
 bind_aset(bind,8/*r*/,it);  it=rb_obj_clone(s__rp_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,8/*r*/);
 bind_aset(bind,9/*_result*/,it); it=bind_aget(bind,9/*_result*/);
 bind_aset(bind,10/*r*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_10_rb_1AmethystParser,1,bind); 
 bind_aset(bind,11/*autovar*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_11_rb_1AmethystParser,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,12/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 bind_aset(bind,13/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,13/*autovar*/);
 bind_aset(bind,14/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos4); ame_setlen(self,oldlen1);
	if(fail1) goto alt2_2;
it=bind_aget(bind,14/*autovar*/);
 bind_aset(bind,15/*_result*/,it); it=bind_aget(bind,15/*_result*/);
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3);it=rb_ary_new3(0);
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;}it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,16/*arg*/,it); it=rb_funcall(self,s_AmethystParser_Apply_lb_bi1AmethystParser,1,bind); 
 bind_aset(bind,17/*_result*/,it); it=bind_aget(bind,17/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(15); bind_aset(bind,2/*o*/,a0);bind_aset(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=bind_aget(bind,0/*c*/);
 bind_aset(bind,1/*c*/,it); it=bind_aget(bind,2/*o*/);
 bind_aset(bind,3/*o*/,it); it=bind_aget(bind,3/*o*/);
 bind_aset(bind,4/*s*/,it);  it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(s_6); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,5/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_18AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,7/*r*/,it); it=bind_aget(bind,1/*c*/);
 bind_aset(bind,4/*s*/,it);  it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);it=bind_aget(bind,7/*r*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*r*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_9_rb__pl_1AmethystParser,1,bind); 
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_10_rb_2AmethystParser,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,11/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 bind_aset(bind,12/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,12/*autovar*/);
 bind_aset(bind,13/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,13/*autovar*/);
 bind_aset(bind,14/*_result*/,it); it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_argsOpt(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(18); bind_aset(bind,2/*o*/,a0);bind_aset(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*c*/);
 bind_aset(bind,1/*c*/,it); it=bind_aget(bind,2/*o*/);
 bind_aset(bind,3/*o*/,it); it=bind_aget(bind,1/*c*/);
 bind_aset(bind,4/*c*/,it); it=bind_aget(bind,3/*o*/);
 bind_aset(bind,5/*o*/,it); it=bind_aget(bind,5/*o*/);
 bind_aset(bind,6/*s*/,it);  it=bind_aget(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,6/*s*/);  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(s_6); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_new3(0);
 bind_aset(bind,7/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,8/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_17AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,9/*r*/,it); it=bind_aget(bind,4/*c*/);
 bind_aset(bind,6/*s*/,it);  it=bind_aget(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,6/*s*/);it=bind_aget(bind,9/*r*/);
 bind_aset(bind,10/*_result*/,it); it=bind_aget(bind,10/*_result*/);
 bind_aset(bind,11/*r*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_11_rb_2AmethystParser,1,bind); 
 bind_aset(bind,12/*autovar*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_12_rb_1AmethystParser,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,13/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,13/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 bind_aset(bind,14/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,14/*autovar*/);
 bind_aset(bind,15/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=bind_aget(bind,15/*autovar*/);
 bind_aset(bind,16/*_result*/,it); it=bind_aget(bind,16/*_result*/);
 bind_aset(bind,17/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 bind_aset(bind,17/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,17/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_atomicHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_endline(self ); FAILTEST(alt1_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2); 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3); 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
  it=AmethystCore_anything(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_5AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*s*/,it); it=rb_funcall(self,s_AmethystParser_4AmethystParser,1,bind); 
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_3_rb__eq_2AmethystParser,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(pass2);
 bind_aset(bind,5/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,6/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,6/*autovar*/);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_choice(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*f*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_sequence(self ); FAILTEST(alt1_2);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_5AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_obj_clone(s_3); arg0=it; it=Amethyst_token(self ,arg0); FAILTEST(break1);  it=AmethystParser_sequence(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_4AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_6AmethystParser,1,bind); it=bind_aget(bind,0/*f*/);
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*ary*/,it); it=rb_funcall(self,s_AmethystParser_Or_dot_creat1AmethystParser,1,bind); 
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(s_6); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=Amethyst_upper(self ); FAILTEST(fail);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_5AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_4AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_6AmethystParser,1,bind); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,5/*it*/,it); it=rb_funcall(self,s_AmethystParser_leterize1AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*ors*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_AmethystParser_a_eq_autova2AmethystParser,1,bind); 
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_eChar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(91):;case UC(93) ... UC(255):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s_2);
 bind_aset(bind,0/*c*/,it); it=rb_funcall(self,s_AmethystParser_2AmethystParser,1,bind); 
 bind_aset(bind,1/*o*/,it);  it=bind_aget(bind,1/*o*/); arg0=it;it=rb_obj_clone(s_2); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2);
 bind_aset(bind,2/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_1AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 bind_aset(bind,5/*c*/,it); it=rb_funcall(self,s_AmethystParser__lp_bind_lb_5_rb_1AmethystParser,1,bind); FAILTEST(alt1_3);it=bind_aget(bind,5/*c*/);
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC(92) ... UC(92):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s__bs__bs_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);  it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 bind_aset(bind,5/*c*/,it); it=rb_funcall(self,s_AmethystParser__lp_bind_lb_5_rb_1AmethystParser,1,bind); FAILTEST(alt2_2);it=bind_aget(bind,5/*c*/);
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
 bind_aset(bind,7/*c*/,it); it=rb_funcall(self,s_AmethystParser_3AmethystParser,1,bind); 
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s_2);
 bind_aset(bind,0/*c*/,it); it=rb_funcall(self,s_AmethystParser_2AmethystParser,1,bind); 
 bind_aset(bind,1/*o*/,it);  it=bind_aget(bind,1/*o*/); arg0=it;it=rb_obj_clone(s_2); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt2_3);
 bind_aset(bind,2/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_1AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 bind_aset(bind,5/*c*/,it); it=rb_funcall(self,s_AmethystParser__lp_bind_lb_5_rb_1AmethystParser,1,bind); FAILTEST(alt2_4);it=bind_aget(bind,5/*c*/);
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;}it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_choice(self ); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(s_amethyst1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail);
 bind_aset(bind,0/*name*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(s__lt_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 bind_aset(bind,1/*parent*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_funcall(self,s_AmethystParser_bind_lb_1_rb__eq_1AmethystParser,1,bind);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(s_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rule(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_4AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*rules*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(s_2); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_funcall(self,s_AmethystParser_Grammar_dot_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_ary_new3(0);
 bind_aset(bind,1/*autovar*/,it); unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(96):;case UC(98) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt1_2); break;case UC(97) ... UC(97):; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
  it=rb_obj_clone(s_amethyst1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt2_2); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_2;
 accept2:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_1AmethystParser,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(0) ... UC(96):;case UC(98) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break2); break;case UC(97) ... UC(97):; int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
  it=rb_obj_clone(s_amethyst1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt3_2); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break2;
 accept3:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(break2);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,1/*autovar*/);
 bind_aset(bind,4/*it*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_4_rb__ti_1AmethystParser,1,bind); 
 bind_aset(bind,5/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_grammar(self ); FAILTEST(alt1_3);
 bind_aset(bind,5/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,s_AmethystParser__append_lp_3AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,6/*a*/,it); it=bind_aget(bind,6/*a*/);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_inlineHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_obj_clone(s_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(s_6); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_5AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*r*/,it);  it=rb_obj_clone(s_2); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,2/*r*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_4_rb__pl_1AmethystParser,1,bind); 
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_5_rb__eq_1AmethystParser,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,6/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 bind_aset(bind,7/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,8/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,8/*autovar*/);
 bind_aset(bind,9/*_result*/,it); it=bind_aget(bind,9/*_result*/);
 bind_aset(bind,10/*_result*/,it); it=bind_aget(bind,10/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_key(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_spaces(self ); FAILTEST(fail);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s__at_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_className(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*name*/,it); it=rb_funcall(self,s_AmethystParser_Object_dot_c1AmethystParser,1,bind); 
 bind_aset(bind,1/*vars*/,it); it=rb_funcall(self,s_AmethystParser_Result_lb_1AmethystParser,1,bind); 
 bind_aset(bind,2/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s__at_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);  it=AmethystParser_name(self ); FAILTEST(alt1_3);
 bind_aset(bind,0/*name*/,it); it=rb_funcall(self,s_AmethystParser_Key_lb_bind1AmethystParser,1,bind); 
 bind_aset(bind,2/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s__at__at_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);  it=AmethystParser_name(self ); FAILTEST(alt1_4);
 bind_aset(bind,0/*name*/,it); it=rb_funcall(self,s_AmethystParser_Global_lb_b1AmethystParser,1,bind); 
 bind_aset(bind,2/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_modifier(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_term(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_funcall(self,s_AmethystParser_1AmethystParser,1,bind); 
 bind_aset(bind,1/*s*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_3);it=bind_aget(bind,1/*s*/);
 bind_aset(bind,2/*s*/,it);  it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=bind_aget(bind,2/*s*/);it=rb_ary_new3(0);
 bind_aset(bind,3/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_endline(self ); FAILTEST(alt2_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt2_2); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
  it=AmethystCore_anything(self ); FAILTEST(break1);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_8AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*autovar*/);
 bind_aset(bind,5/*c*/,it); it=rb_funcall(self,s_AmethystParser_Comment_lb_1AmethystParser,1,bind); 
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(s_6); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_nameFirst(self ); FAILTEST(fail);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_5AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_4AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_6AmethystParser,1,bind); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,5/*it*/,it); it=rb_funcall(self,s_AmethystParser_leterize1AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nameFirst(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(94):;case UC(96) ... UC(255):;   it=Amethyst_letter(self ); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it);  break;case UC(95) ... UC(95):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_letter(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s__1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(s__1);
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;}it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nameRest(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_nameFirst(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_digit(self ); FAILTEST(alt1_3);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_2);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(39):;case UC(41) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt1_2); break;case UC(40) ... UC(40):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
  it=rb_obj_clone(s__lp_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);  it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(s_6); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_5AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*r*/,it);  it=rb_obj_clone(s__rp_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,2/*r*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_4_rb__pl_1AmethystParser,1,bind); 
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_5_rb__eq_1AmethystParser,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos4); ame_setlen(self,oldlen1);
	if(fail1) goto alt2_2;
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 break;}  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(s__eq_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2);
 bind_aset(bind,7/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);
 bind_aset(bind,7/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(14);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(s_4); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*expr*/,it); it=rb_funcall(self,s_AmethystParser_Pred_lb_bin1AmethystParser,1,bind); 
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_3);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(126) ... UC(126):;  it=rb_obj_clone(s_5); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(s_5);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*neg*/,it);  break;case UC(38) ... UC(38):;  it=rb_obj_clone(s_4); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(s_4);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*neg*/,it);  break;default:;   it=Amethyst_fails(self ); FAILTEST(alt1_3); break;}  it=AmethystParser_prefixed(self ); FAILTEST(alt1_3);
 bind_aset(bind,5/*m*/,it); it=rb_funcall(self,s_AmethystParser_Lookahea1AmethystParser,1,bind); 
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_4;}
   it=AmethystParser_modifier(self ); FAILTEST(alt2_2);
 bind_aset(bind,6/*from*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_4;}
   it=Amethyst_spaces(self ); FAILTEST(alt2_3); it=rb_obj_clone(s_6); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);int oldpos3=ame_getpos(self);
  it=rb_funcall(self,s_AmethystParser__di__lb__dot__co__bs__lb__rb__di_1AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(reject1); x=1; goto accept3;  reject1: x=0; accept3: it=Qnil; ame_setpos(self,oldpos3); if (x==0) goto alt2_3;int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
   it=Amethyst_spaces(self ); FAILTEST(alt3_2); it=rb_obj_clone(s__dot_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2); 
ame_setcut(self,Qnil);goto accept4;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept4;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_3;
 accept4:;
it=rb_funcall(self,s_AmethystParser_Apply_lb_1AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_4;
 accept2:;
it=rb_ary_new3(0);
 bind_aset(bind,7/*autovar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self); int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst__(self ); FAILTEST(alt4_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt4_2); 
ame_setcut(self,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt4_3); 
ame_setcut(self,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos6); goto break1;
 accept5:;
  it=Amethyst_spaces(self ); FAILTEST(break1);unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(42) ... UC(42):;  it=rb_obj_clone(s__ti_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(s__ti_1);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,8/*one*/,it); it=rb_funcall(self,s_AmethystParser_Many_lb_bin1AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it); 
 bind_aset(bind,9/*autovar*/,it);  break;case UC(43) ... UC(43):;  it=rb_obj_clone(s__pl_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(s__pl_1);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,8/*one*/,it); it=rb_funcall(self,s_AmethystParser_Many_lb_bin1AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it); 
 bind_aset(bind,9/*autovar*/,it);  break;case UC(58) ... UC(58):;  it=rb_obj_clone(s__co_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos8=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
   it=AmethystParser_key(self ); FAILTEST(alt6_2);
 bind_aset(bind,10/*name*/,it);  
ame_setcut(self,Qnil);goto accept7;
alt6_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
   it=AmethystParser_name(self ); FAILTEST(alt6_3);
 bind_aset(bind,10/*name*/,it);  
ame_setcut(self,Qnil);goto accept7;
  alt6_3:  ame_setpos(self,oldpos8); goto alt5_2;
 accept7:;
unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(0) ... UC(90):;case UC(92) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt5_2);
 bind_aset(bind,11/*append*/,it);  break;case UC(91) ... UC(91):; int oldpos9=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
  it=rb_obj_clone(s__lb__rb_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_2);it=rb_obj_clone(s__lb__rb_1);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,11/*append*/,it);  
ame_setcut(self,Qnil);goto accept8;
alt7_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
   it=Amethyst_empty(self ); FAILTEST(alt7_3);
 bind_aset(bind,11/*append*/,it);  
ame_setcut(self,Qnil);goto accept8;
  alt7_3:  ame_setpos(self,oldpos9); goto alt5_2;
 accept8:;
 break;}it=rb_funcall(self,s_AmethystParser__Bind_lp_bi1AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it); 
 bind_aset(bind,9/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept6;
alt5_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt5_3);
 bind_aset(bind,12/*e*/,it); it=rb_funcall(self,s_AmethystParser_Seq_lb__Bin1AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it); 
 bind_aset(bind,9/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept6;
  alt5_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;case UC(61) ... UC(61):;  it=rb_obj_clone(s__eq__gt_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1);
 bind_aset(bind,13/*it*/,it); it=rb_funcall(self,s_AmethystParser_Pass_lb_bin1AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it); 
 bind_aset(bind,9/*autovar*/,it);  break;case UC(63) ... UC(63):;  it=rb_obj_clone(s_7); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_funcall(self,s_AmethystParser_Or_lb_bind_lb_1AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it); 
 bind_aset(bind,9/*autovar*/,it);  break;case UC(91) ... UC(91):;  it=rb_obj_clone(s__lb_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);  it=AmethystParser_expression(self ); FAILTEST(break1);
 bind_aset(bind,13/*it*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_6_rb__eq_1AmethystParser,1,bind);   it=Amethyst_spaces(self ); FAILTEST(break1); it=rb_obj_clone(s__rb_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=bind_aget(bind,6/*from*/);
 bind_aset(bind,6/*from*/,it); 
 bind_aset(bind,9/*autovar*/,it);  break;default:;   it=Amethyst_fails(self ); FAILTEST(break1); break;}it=rb_funcall(self,s_AmethystParser__append_lp_7AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,7/*autovar*/);it=bind_aget(bind,6/*from*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_AmethystParser__at_ary_eq__lb__rb_1AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 bind_aset(bind,1/*c*/,it); it=rb_funcall(self,s_AmethystParser__lp_bind_lb_1_rb_1AmethystParser,1,bind); FAILTEST(alt1_2);it=rb_funcall(self,s_AmethystParser__at_ary_lt__lt_Ar1AmethystParser,1,bind); 
 bind_aset(bind,2/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_procargs2(self ); FAILTEST(alt1_3);
 bind_aset(bind,2/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,s_AmethystParser__append_lp_27AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,s_AmethystParser__at_ary1AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashAmethystParser1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_procargs2(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_4AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=bind_aget(bind,4/*autovar*/);
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,6/*a*/,it); it=rb_funcall(self,s_AmethystParser__at_tmp_lt__lt_bi1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,6/*a*/,it); it=rb_funcall(self,s_AmethystParser__at_tmp_lt__lt_bi1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it);  break;}it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(21);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*s*/,it); it=rb_ary_new3(0);
 bind_aset(bind,1/*n*/,it); unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(33):;case UC(35) ... UC(38):;case UC(40) ... UC(45):;case UC(47) ... UC(95):;case UC(97) ... UC(255):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp_1);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s__lp_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s__lp_1); arg0=it;it=rb_obj_clone(s__rp_1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb_1);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s__lb_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s__lb_1); arg0=it;it=rb_obj_clone(s__rb_1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s_2);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s_1); arg0=it;it=rb_obj_clone(s_2); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
   it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(s__co__at_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(s__co__at_1);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_10AmethystParser,1,bind);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
  it=rb_funcall(self,s_AmethystParser__di__lb__do__dot__co__rb__di_1AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt2_3);
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_19AmethystParser,1,bind);  
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
  it=AmethystParser_name(self ); FAILTEST(alt1_5);
 bind_aset(bind,11/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_20AmethystParser,1,bind); it=rb_funcall(self,s_AmethystParser_bind_lb_1_rb__ti_1AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
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
  it=AmethystParser_key(self ); FAILTEST(alt1_6);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,s_AmethystParser__di__lb_1AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt1_7);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_7:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC(34) ... UC(34):; int oldpos5=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp_1);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s__lp_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s__lp_1); arg0=it;it=rb_obj_clone(s__rp_1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_2);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb_1);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s__lb_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s__lb_1); arg0=it;it=rb_obj_clone(s__rb_1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_3: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s_2);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s_1); arg0=it;it=rb_obj_clone(s_2); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_4: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s__bs_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_5);it=rb_obj_clone(s__bs_1);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,12/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_21AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,13/*autovar*/,it); int oldpos6; while(1){oldpos6=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(0) ... UC(33):;case UC(35) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break1);
 bind_aset(bind,14/*autovar*/,it);  break;case UC(34) ... UC(34):; int oldpos7=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(s__bs_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_2);it=rb_obj_clone(s__bs_1);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);ame_setcut(self,Qtrue);
 bind_aset(bind,14/*autovar*/,it); ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt6_3);
 bind_aset(bind,14/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;}it=rb_funcall(self,s_AmethystParser__append_lp_22AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,13/*autovar*/);
 bind_aset(bind,15/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_23AmethystParser,1,bind); it=rb_funcall(self,s_AmethystParser_Strin_lb_co1AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_5: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt7_2); it=rb_obj_clone(s__co__at_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_2);it=rb_obj_clone(s__co__at_1);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_10AmethystParser,1,bind);  
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_6;}
  it=rb_funcall(self,s_AmethystParser__di__lb__do__dot__co__rb__di_1AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt7_3);
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_19AmethystParser,1,bind);  
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
  it=AmethystParser_name(self ); FAILTEST(alt5_6);
 bind_aset(bind,11/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_20AmethystParser,1,bind); it=rb_funcall(self,s_AmethystParser_bind_lb_1_rb__ti_1AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
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
  it=AmethystParser_key(self ); FAILTEST(alt5_7);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_7: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,s_AmethystParser__di__lb_1AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt5_8);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
  alt5_8:  ame_setpos(self,oldpos5); goto fail;
 accept5:;
 break;case UC(39) ... UC(39):; int oldpos11=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp_1);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s__lp_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s__lp_1); arg0=it;it=rb_obj_clone(s__rp_1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_2);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb_1);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s__lb_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s__lb_1); arg0=it;it=rb_obj_clone(s__rb_1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt10_3: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s_2);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s_1); arg0=it;it=rb_obj_clone(s_2); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt10_4: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s_8); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt10_5);it=rb_obj_clone(s_8);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,16/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_24AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,17/*autovar*/,it); int oldpos12; while(1){oldpos12=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(0) ... UC(38):;case UC(40) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break2);
 bind_aset(bind,18/*autovar*/,it);  break;case UC(39) ... UC(39):; int oldpos13=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
  it=rb_obj_clone(s_8); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt11_2);it=rb_obj_clone(s_8);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);ame_setcut(self,Qtrue);
 bind_aset(bind,18/*autovar*/,it); ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt11_3);
 bind_aset(bind,18/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept11;
  alt11_3:  ame_setpos(self,oldpos13); goto break2;
 accept11:;
 break;}it=rb_funcall(self,s_AmethystParser__append_lp_25AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos12=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos12); it=bind_aget(bind,17/*autovar*/);
 bind_aset(bind,19/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_26AmethystParser,1,bind); it=rb_funcall(self,s_AmethystParser_Strin_lb_co1AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt10_5: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos14=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt10_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt12_2); it=rb_obj_clone(s__co__at_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt12_2);it=rb_obj_clone(s__co__at_1);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_10AmethystParser,1,bind);  
ame_setcut(self,Qnil);goto accept12;
alt12_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt10_6;}
  it=rb_funcall(self,s_AmethystParser__di__lb__do__dot__co__rb__di_1AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt12_3);
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_19AmethystParser,1,bind);  
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
  it=AmethystParser_name(self ); FAILTEST(alt10_6);
 bind_aset(bind,11/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_20AmethystParser,1,bind); it=rb_funcall(self,s_AmethystParser_bind_lb_1_rb__ti_1AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
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
  it=AmethystParser_key(self ); FAILTEST(alt10_7);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt10_7: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,s_AmethystParser__di__lb_1AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt10_8);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
  alt10_8:  ame_setpos(self,oldpos11); goto fail;
 accept10:;
 break;case UC(46) ... UC(46):; int oldpos17=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp_1);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s__lp_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s__lp_1); arg0=it;it=rb_obj_clone(s__rp_1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_2);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb_1);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s__lb_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s__lb_1); arg0=it;it=rb_obj_clone(s__rb_1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_3: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s_2);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s_1); arg0=it;it=rb_obj_clone(s_2); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_4: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s__dot__dot__dot_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt15_5);it=rb_obj_clone(s__dot__dot__dot_1);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_5: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s__dot__dot_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt15_6);it=rb_obj_clone(s__dot__dot_1);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_6: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos18=ame_getpos(self);
alt16_1: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_7;}
   it=Amethyst_spaces(self ); FAILTEST(alt16_2); it=rb_obj_clone(s__co__at_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt16_2);it=rb_obj_clone(s__co__at_1);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_10AmethystParser,1,bind);  
ame_setcut(self,Qnil);goto accept16;
alt16_2: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_7;}
  it=rb_funcall(self,s_AmethystParser__di__lb__do__dot__co__rb__di_1AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt16_3);
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_19AmethystParser,1,bind);  
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
  it=AmethystParser_name(self ); FAILTEST(alt15_7);
 bind_aset(bind,11/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_20AmethystParser,1,bind); it=rb_funcall(self,s_AmethystParser_bind_lb_1_rb__ti_1AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
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
  it=AmethystParser_key(self ); FAILTEST(alt15_8);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_8: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,s_AmethystParser__di__lb_1AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt15_9);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
  alt15_9:  ame_setpos(self,oldpos17); goto fail;
 accept15:;
 break;case UC(96) ... UC(96):; int oldpos21=ame_getpos(self);
alt19_1: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s_9); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt19_2);  it=AmethystParser_expression(self ); FAILTEST(alt19_2);
 bind_aset(bind,20/*e*/,it);  it=rb_obj_clone(s_9); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt19_2);it=rb_funcall(self,s_AmethystParser_Exp_lb__bod1AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
alt19_2: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rp_1);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s__lp_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s__lp_1); arg0=it;it=rb_obj_clone(s__rp_1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
alt19_3: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__rb_1);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s__lb_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s__lb_1); arg0=it;it=rb_obj_clone(s__rb_1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
alt19_4: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s_2);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(s_1);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(s_1); arg0=it;it=rb_obj_clone(s_2); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_5);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_AmethystParser_Args_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
alt19_5: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos22=ame_getpos(self);
alt20_1: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt20_2); it=rb_obj_clone(s__co__at_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt20_2);it=rb_obj_clone(s__co__at_1);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_10AmethystParser,1,bind);  
ame_setcut(self,Qnil);goto accept20;
alt20_2: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_6;}
  it=rb_funcall(self,s_AmethystParser__di__lb__do__dot__co__rb__di_1AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt20_3);
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_19AmethystParser,1,bind);  
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
  it=AmethystParser_name(self ); FAILTEST(alt19_6);
 bind_aset(bind,11/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_20AmethystParser,1,bind); it=rb_funcall(self,s_AmethystParser_bind_lb_1_rb__ti_1AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
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
  it=AmethystParser_key(self ); FAILTEST(alt19_7);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
alt19_7: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,s_AmethystParser__di__lb_1AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt19_8);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
  alt19_8:  ame_setpos(self,oldpos21); goto fail;
 accept19:;
 break;}it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_AmethystParser__at_locals_eq_1AmethystParser,1,bind); it=rb_funcall(self,s_AmethystParser__at_bnding1AmethystParser,1,bind); 
 bind_aset(bind,0/*bnding*/,it);   it=AmethystParser_name(self ); FAILTEST(fail);
 bind_aset(bind,1/*name*/,it);   it=AmethystParser_ruleargs(self ); FAILTEST(fail);
 bind_aset(bind,2/*args*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(s__eq_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_expression(self ); FAILTEST(fail);
 bind_aset(bind,3/*body*/,it); it=rb_funcall(self,s_AmethystParser__body_lp_bi1AmethystParser,1,bind); 
 bind_aset(bind,3/*body*/,it); it=rb_funcall(self,s_AmethystParser__at_locals_dot_1AmethystParser,1,bind); 
 bind_aset(bind,4/*locals*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_3_rb__eq_1AmethystParser,1,bind); it=rb_funcall(self,s_AmethystParser_Rule_dot_cre1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(39):;case UC(41) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,0/*_result*/,it);  break;case UC(40) ... UC(40):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s__lp_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(s_6); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_new3(0);
 bind_aset(bind,1/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,1/*autovar*/);
 bind_aset(bind,3/*r*/,it);  it=rb_obj_clone(s__rp_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,3/*r*/);
 bind_aset(bind,4/*_result*/,it); it=bind_aget(bind,4/*_result*/);
 bind_aset(bind,5/*r*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_5_rb__pl_1AmethystParser,1,bind); 
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_6_rb__eq_2AmethystParser,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,7/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 bind_aset(bind,8/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,8/*autovar*/);
 bind_aset(bind,9/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=bind_aget(bind,9/*autovar*/);
 bind_aset(bind,10/*_result*/,it); it=bind_aget(bind,10/*_result*/);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;}it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,11/*autovar*/,it); it=rb_funcall(self,s_AmethystParser_bind_lb_11_rb_1AmethystParser,1,bind); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 bind_aset(bind,12/*autovar*/,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,bind_aget(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_addargs(self ); FAILTEST(pass4);
 bind_aset(bind,13/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;
it=bind_aget(bind,13/*autovar*/);
 bind_aset(bind,14/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto fail;
it=bind_aget(bind,14/*autovar*/);
 bind_aset(bind,15/*_result*/,it); it=bind_aget(bind,15/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nr(self ); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_5AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*ary*/,it); it=rb_funcall(self,s_AmethystParser_Seq_dot_crea1AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(19);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*s*/,it); it=rb_ary_new3(0);
 bind_aset(bind,1/*autovar*/,it); it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); it=rb_ary_new3(0);
 bind_aset(bind,3/*x*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_className(self ); FAILTEST(alt1_2);
 bind_aset(bind,4/*cls*/,it); it=rb_funcall(self,s_AmethystParser_Apply_lb_2AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_3); it=rb_obj_clone(s_nested1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3); it=rb_obj_clone(s__lp_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);  it=AmethystParser_expression(self ); FAILTEST(alt1_3);
 bind_aset(bind,6/*expr*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_3); it=rb_obj_clone(s__rp_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_funcall(self,s_AmethystParser_Nested_lb_b1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_4); it=rb_obj_clone(s_break1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=rb_funcall(self,s_AmethystParser_Seq_lb_Cut_lb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_application(self ); FAILTEST(alt1_5);
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt1_6);
 bind_aset(bind,7/*it*/,it); it=rb_funcall(self,s_AmethystParser_Act_lb_Args1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_7);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(44):;case UC(46) ... UC(255):;  it=rb_obj_clone(s_6); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_7);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_7);
 bind_aset(bind,3/*x*/,it);  break;case UC(45) ... UC(45):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_7;}
  it=rb_obj_clone(s__mi__gt_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);  it=AmethystParser_atomicHostExpr(self ); FAILTEST(alt2_2);
 bind_aset(bind,3/*x*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_7;}
  it=rb_obj_clone(s_6); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt2_3);
 bind_aset(bind,3/*x*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_7;
 accept2:;
 break;}it=rb_funcall(self,s_AmethystParser_Act_lb_bind1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_8); it=rb_obj_clone(s__bs_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_8);it=rb_ary_new3(0);
 bind_aset(bind,1/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(0) ... UC(33):;case UC(35) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break1);
 bind_aset(bind,8/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_9AmethystParser,1,bind); it=bind_aget(bind,8/*autovar*/);
 bind_aset(bind,9/*autovar*/,it);  break;case UC(34) ... UC(34):; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(s__bs_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);ame_setcut(self,Qtrue);
 bind_aset(bind,9/*autovar*/,it); ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt3_3);
 bind_aset(bind,8/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_9AmethystParser,1,bind); it=bind_aget(bind,8/*autovar*/);
 bind_aset(bind,9/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto break1;
 accept3:;
 break;}it=rb_funcall(self,s_AmethystParser__append_lp_10AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,1/*autovar*/);it=rb_funcall(self,s_AmethystParser_Apply_lb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_9); it=rb_obj_clone(s_8); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_9);it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(0) ... UC(38):;case UC(40) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break2);
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_11AmethystParser,1,bind); it=bind_aget(bind,10/*autovar*/);
 bind_aset(bind,11/*autovar*/,it);  break;case UC(39) ... UC(39):; int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
  it=rb_obj_clone(s_8); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt4_2);ame_setcut(self,Qtrue);
 bind_aset(bind,11/*autovar*/,it); ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt4_3);
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_11AmethystParser,1,bind); it=bind_aget(bind,10/*autovar*/);
 bind_aset(bind,11/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos6); goto break2;
 accept4:;
 break;}it=rb_funcall(self,s_AmethystParser__append_lp_12AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,2/*autovar*/);it=rb_funcall(self,s_AmethystParser_Apply_lb_4AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt1_10);
 bind_aset(bind,7/*it*/,it); it=rb_funcall(self,s_AmethystParser_Apply_lb_5AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(s__lt_1);
 bind_aset(bind,12/*s*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_11);it=bind_aget(bind,12/*s*/);
 bind_aset(bind,13/*s*/,it);  it=bind_aget(bind,13/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_11);it=bind_aget(bind,13/*s*/);it=rb_ary_new3(0);
 bind_aset(bind,14/*autovar*/,it); int oldpos7; while(1){oldpos7=ame_getpos(self); int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
 it=rb_obj_clone(s__gt_1);
 bind_aset(bind,12/*s*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt5_2);it=rb_obj_clone(s__gt_1);
 bind_aset(bind,13/*s*/,it);  it=rb_obj_clone(s__gt_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_2);ame_setcut(self,Qtrue);
 bind_aset(bind,15/*autovar*/,it); ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
   it=AmethystParser_eChar(self ); FAILTEST(alt5_3);
 bind_aset(bind,16/*autovar*/,it); it=rb_funcall(self,s_AmethystParser__append_lp_13AmethystParser,1,bind); it=bind_aget(bind,16/*autovar*/);
 bind_aset(bind,15/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto break3;
 accept5:;
it=rb_funcall(self,s_AmethystParser__append_lp_14AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,14/*autovar*/);it=rb_funcall(self,s_AmethystParser_Apply_lb_6AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_12); it=rb_obj_clone(s__lp_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);  it=AmethystParser_expression(self ); FAILTEST(alt1_12);
 bind_aset(bind,3/*x*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_12); it=rb_obj_clone(s__rp_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC(0) ... UC(90):;case UC(92) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt1_12);it=bind_aget(bind,3/*x*/);
 bind_aset(bind,5/*_result*/,it);  break;case UC(91) ... UC(91):; int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_12;}
  it=rb_obj_clone(s__lb__rb_1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_2);it=bind_aget(bind,3/*x*/);
 bind_aset(bind,17/*ors*/,it); it=rb_funcall(self,s_AmethystParser_a_eq_autova1AmethystParser,1,bind); 
 bind_aset(bind,18/*_result*/,it); it=bind_aget(bind,18/*_result*/);
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_12;}
   it=Amethyst_empty(self ); FAILTEST(alt6_3);it=bind_aget(bind,3/*x*/);
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos9); goto alt1_12;
 accept6:;
 break;} 
ame_setcut(self,Qnil);goto accept1;
  alt1_12:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_139=rb_const_get(rb_cObject, rb_intern("Args"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_139);
s_1=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_1);
s_2=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_2);
s_3=rb_str_new2("|");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_3);
s_4=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_4);
s_5=rb_str_new2("~");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_5);
s_6=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_6);
s_7=rb_str_new2("?");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_7);
s_8=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_8);
s_9=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_9);
s_AmethystParser_1AmethystParser=rb_intern("AmethystParser_1");
s_AmethystParser_2AmethystParser=rb_intern("AmethystParser_2");
s_AmethystParser_3AmethystParser=rb_intern("AmethystParser_3");
s_AmethystParser_4AmethystParser=rb_intern("AmethystParser_4");
s_AmethystParser_Act_lb_Args1AmethystParser=rb_intern("AmethystParser_Act_lb_Args1");
s_AmethystParser_Act_lb_bind1AmethystParser=rb_intern("AmethystParser_Act_lb_bind1");
s_AmethystParser_Apply_lb_1AmethystParser=rb_intern("AmethystParser_Apply_lb_1");
s_AmethystParser_Apply_lb_2AmethystParser=rb_intern("AmethystParser_Apply_lb_2");
s_AmethystParser_Apply_lb_3AmethystParser=rb_intern("AmethystParser_Apply_lb_3");
s_AmethystParser_Apply_lb_4AmethystParser=rb_intern("AmethystParser_Apply_lb_4");
s_AmethystParser_Apply_lb_5AmethystParser=rb_intern("AmethystParser_Apply_lb_5");
s_AmethystParser_Apply_lb_6AmethystParser=rb_intern("AmethystParser_Apply_lb_6");
s_AmethystParser_Apply_lb_bi1AmethystParser=rb_intern("AmethystParser_Apply_lb_bi1");
s_AmethystParser_Args_lb_1AmethystParser=rb_intern("AmethystParser_Args_lb_1");
s_AmethystParser_Args_lb_2AmethystParser=rb_intern("AmethystParser_Args_lb_2");
s_AmethystParser_Args_lb_3AmethystParser=rb_intern("AmethystParser_Args_lb_3");
s_AmethystParser_Comment_lb_1AmethystParser=rb_intern("AmethystParser_Comment_lb_1");
s_AmethystParser_Exp_lb__bod1AmethystParser=rb_intern("AmethystParser_Exp_lb__bod1");
s_AmethystParser_Global_lb_b1AmethystParser=rb_intern("AmethystParser_Global_lb_b1");
s_AmethystParser_Grammar_dot_1AmethystParser=rb_intern("AmethystParser_Grammar_dot_1");
s_AmethystParser_Key_lb_bind1AmethystParser=rb_intern("AmethystParser_Key_lb_bind1");
s_AmethystParser_Lookahea1AmethystParser=rb_intern("AmethystParser_Lookahea1");
s_AmethystParser_Many_lb_bin1AmethystParser=rb_intern("AmethystParser_Many_lb_bin1");
s_AmethystParser_Nested_lb_b1AmethystParser=rb_intern("AmethystParser_Nested_lb_b1");
s_AmethystParser_Object_dot_c1AmethystParser=rb_intern("AmethystParser_Object_dot_c1");
s_AmethystParser_Or_dot_creat1AmethystParser=rb_intern("AmethystParser_Or_dot_creat1");
s_AmethystParser_Or_lb_bind_lb_1AmethystParser=rb_intern("AmethystParser_Or_lb_bind_lb_1");
s_AmethystParser_Pass_lb_bin1AmethystParser=rb_intern("AmethystParser_Pass_lb_bin1");
s_AmethystParser_Pred_lb_bin1AmethystParser=rb_intern("AmethystParser_Pred_lb_bin1");
s_AmethystParser_Result_lb_1AmethystParser=rb_intern("AmethystParser_Result_lb_1");
s_AmethystParser_Rule_dot_cre1AmethystParser=rb_intern("AmethystParser_Rule_dot_cre1");
s_AmethystParser_Seq_dot_crea1AmethystParser=rb_intern("AmethystParser_Seq_dot_crea1");
s_AmethystParser_Seq_lb_Cut_lb_1AmethystParser=rb_intern("AmethystParser_Seq_lb_Cut_lb_1");
s_AmethystParser_Seq_lb__Bin1AmethystParser=rb_intern("AmethystParser_Seq_lb__Bin1");
s_AmethystParser_Strin_lb_co1AmethystParser=rb_intern("AmethystParser_Strin_lb_co1");
s_AmethystParser__Bind_lp_bi1AmethystParser=rb_intern("AmethystParser__Bind_lp_bi1");
s_AmethystParser__Local_lp_b1AmethystParser=rb_intern("AmethystParser__Local_lp_b1");
s_AmethystParser__append_lp_10AmethystParser=rb_intern("AmethystParser__append_lp_10");
s_AmethystParser__append_lp_11AmethystParser=rb_intern("AmethystParser__append_lp_11");
s_AmethystParser__append_lp_12AmethystParser=rb_intern("AmethystParser__append_lp_12");
s_AmethystParser__append_lp_13AmethystParser=rb_intern("AmethystParser__append_lp_13");
s_AmethystParser__append_lp_14AmethystParser=rb_intern("AmethystParser__append_lp_14");
s_AmethystParser__append_lp_15AmethystParser=rb_intern("AmethystParser__append_lp_15");
s_AmethystParser__append_lp_16AmethystParser=rb_intern("AmethystParser__append_lp_16");
s_AmethystParser__append_lp_17AmethystParser=rb_intern("AmethystParser__append_lp_17");
s_AmethystParser__append_lp_18AmethystParser=rb_intern("AmethystParser__append_lp_18");
s_AmethystParser__append_lp_19AmethystParser=rb_intern("AmethystParser__append_lp_19");
s_AmethystParser__append_lp_1AmethystParser=rb_intern("AmethystParser__append_lp_1");
s_AmethystParser__append_lp_20AmethystParser=rb_intern("AmethystParser__append_lp_20");
s_AmethystParser__append_lp_21AmethystParser=rb_intern("AmethystParser__append_lp_21");
s_AmethystParser__append_lp_22AmethystParser=rb_intern("AmethystParser__append_lp_22");
s_AmethystParser__append_lp_23AmethystParser=rb_intern("AmethystParser__append_lp_23");
s_AmethystParser__append_lp_24AmethystParser=rb_intern("AmethystParser__append_lp_24");
s_AmethystParser__append_lp_25AmethystParser=rb_intern("AmethystParser__append_lp_25");
s_AmethystParser__append_lp_26AmethystParser=rb_intern("AmethystParser__append_lp_26");
s_AmethystParser__append_lp_27AmethystParser=rb_intern("AmethystParser__append_lp_27");
s_AmethystParser__append_lp_2AmethystParser=rb_intern("AmethystParser__append_lp_2");
s_AmethystParser__append_lp_3AmethystParser=rb_intern("AmethystParser__append_lp_3");
s_AmethystParser__append_lp_4AmethystParser=rb_intern("AmethystParser__append_lp_4");
s_AmethystParser__append_lp_5AmethystParser=rb_intern("AmethystParser__append_lp_5");
s_AmethystParser__append_lp_6AmethystParser=rb_intern("AmethystParser__append_lp_6");
s_AmethystParser__append_lp_7AmethystParser=rb_intern("AmethystParser__append_lp_7");
s_AmethystParser__append_lp_8AmethystParser=rb_intern("AmethystParser__append_lp_8");
s_AmethystParser__append_lp_9AmethystParser=rb_intern("AmethystParser__append_lp_9");
s_AmethystParser__at_ary1AmethystParser=rb_intern("AmethystParser__at_ary1");
s_AmethystParser__at_ary_eq__lb__rb_1AmethystParser=rb_intern("AmethystParser__at_ary_eq__lb__rb_1");
s_AmethystParser__at_ary_lt__lt_Ar1AmethystParser=rb_intern("AmethystParser__at_ary_lt__lt_Ar1");
s_AmethystParser__at_bnding1AmethystParser=rb_intern("AmethystParser__at_bnding1");
s_AmethystParser__at_locals_dot_1AmethystParser=rb_intern("AmethystParser__at_locals_dot_1");
s_AmethystParser__at_locals_eq_1AmethystParser=rb_intern("AmethystParser__at_locals_eq_1");
s_AmethystParser__at_tmp_lt__lt_bi1AmethystParser=rb_intern("AmethystParser__at_tmp_lt__lt_bi1");
s_AmethystParser__body_lp_bi1AmethystParser=rb_intern("AmethystParser__body_lp_bi1");
s_AmethystParser__di__lb_1AmethystParser=rb_intern("AmethystParser__di__lb_1");
s_AmethystParser__di__lb__do__dot__co__rb__di_1AmethystParser=rb_intern("AmethystParser__di__lb__do__dot__co__rb__di_1");
s_AmethystParser__di__lb__dot__co__bs__lb__rb__di_1AmethystParser=rb_intern("AmethystParser__di__lb__dot__co__bs__lb__rb__di_1");
s_AmethystParser__lb_bind_lb_3_rb_1AmethystParser=rb_intern("AmethystParser__lb_bind_lb_3_rb_1");
s_AmethystParser__lp_bind_lb_1_rb_1AmethystParser=rb_intern("AmethystParser__lp_bind_lb_1_rb_1");
s_AmethystParser__lp_bind_lb_5_rb_1AmethystParser=rb_intern("AmethystParser__lp_bind_lb_5_rb_1");
s_AmethystParser_a_eq_autova1AmethystParser=rb_intern("AmethystParser_a_eq_autova1");
s_AmethystParser_a_eq_autova2AmethystParser=rb_intern("AmethystParser_a_eq_autova2");
s_AmethystParser_bind_lb_0_rb_1AmethystParser=rb_intern("AmethystParser_bind_lb_0_rb_1");
s_AmethystParser_bind_lb_10_rb_1AmethystParser=rb_intern("AmethystParser_bind_lb_10_rb_1");
s_AmethystParser_bind_lb_10_rb_2AmethystParser=rb_intern("AmethystParser_bind_lb_10_rb_2");
s_AmethystParser_bind_lb_11_rb_1AmethystParser=rb_intern("AmethystParser_bind_lb_11_rb_1");
s_AmethystParser_bind_lb_11_rb_2AmethystParser=rb_intern("AmethystParser_bind_lb_11_rb_2");
s_AmethystParser_bind_lb_12_rb_1AmethystParser=rb_intern("AmethystParser_bind_lb_12_rb_1");
s_AmethystParser_bind_lb_1_rb__eq_1AmethystParser=rb_intern("AmethystParser_bind_lb_1_rb__eq_1");
s_AmethystParser_bind_lb_1_rb__ti_1AmethystParser=rb_intern("AmethystParser_bind_lb_1_rb__ti_1");
s_AmethystParser_bind_lb_3_rb__eq_1AmethystParser=rb_intern("AmethystParser_bind_lb_3_rb__eq_1");
s_AmethystParser_bind_lb_3_rb__eq_2AmethystParser=rb_intern("AmethystParser_bind_lb_3_rb__eq_2");
s_AmethystParser_bind_lb_4_rb__pl_1AmethystParser=rb_intern("AmethystParser_bind_lb_4_rb__pl_1");
s_AmethystParser_bind_lb_4_rb__ti_1AmethystParser=rb_intern("AmethystParser_bind_lb_4_rb__ti_1");
s_AmethystParser_bind_lb_5_rb__eq_1AmethystParser=rb_intern("AmethystParser_bind_lb_5_rb__eq_1");
s_AmethystParser_bind_lb_5_rb__pl_1AmethystParser=rb_intern("AmethystParser_bind_lb_5_rb__pl_1");
s_AmethystParser_bind_lb_6_rb__eq_1AmethystParser=rb_intern("AmethystParser_bind_lb_6_rb__eq_1");
s_AmethystParser_bind_lb_6_rb__eq_2AmethystParser=rb_intern("AmethystParser_bind_lb_6_rb__eq_2");
s_AmethystParser_bind_lb_9_rb__pl_1AmethystParser=rb_intern("AmethystParser_bind_lb_9_rb__pl_1");
s_AmethystParser_leterize1AmethystParser=rb_intern("AmethystParser_leterize1");
s__1=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__1);
s__at_1=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__at_1);
s__at__at_1=rb_str_new2("@@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__at__at_1);
s__bs_1=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs_1);
s__bs__bs_1=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs__bs_1);
s__co_1=rb_str_new2(":");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__co_1);
s__co__at_1=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__co__at_1);
s__co__co_1=rb_str_new2("::");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__co__co_1);
s__dot_1=rb_str_new2(".");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__dot_1);
s__dot__dot_1=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__dot__dot_1);
s__dot__dot__dot_1=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__dot__dot__dot_1);
s__eq_1=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__eq_1);
s__eq__gt_1=rb_str_new2("=>");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__eq__gt_1);
s__gt_1=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__gt_1);
s__lb_1=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lb_1);
s__lb__rb_1=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lb__rb_1);
s__lp_1=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lp_1);
s__lt_1=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lt_1);
s__mi__gt_1=rb_str_new2("->");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__mi__gt_1);
s__pl_1=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__pl_1);
s__rb_1=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__rb_1);
s__rp_1=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__rp_1);
s__ti_1=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__ti_1);
s_amethyst1=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_amethyst1);
s_break1=rb_str_new2("break");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_break1);
s_nested1=rb_str_new2("nested");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_nested1);
s_sizeAmethystParser=rb_intern("size");
switchhashAmethystParser1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashAmethystParser1);
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
rb_define_method(cls_AmethystParser,"nameFirst",AmethystParser_nameFirst,0);
rb_define_method(cls_AmethystParser,"nameRest",AmethystParser_nameRest,0);
rb_define_method(cls_AmethystParser,"nr",AmethystParser_nr,0);
rb_define_method(cls_AmethystParser,"prefixed",AmethystParser_prefixed,0);
rb_define_method(cls_AmethystParser,"procargs",AmethystParser_procargs,0);
rb_define_method(cls_AmethystParser,"procargs2",AmethystParser_procargs2,0);
rb_define_method(cls_AmethystParser,"rubyarg",AmethystParser_rubyarg,0);
rb_define_method(cls_AmethystParser,"rule",AmethystParser_rule,0);
rb_define_method(cls_AmethystParser,"ruleargs",AmethystParser_ruleargs,0);
rb_define_method(cls_AmethystParser,"sequence",AmethystParser_sequence,0);
rb_define_method(cls_AmethystParser,"term",AmethystParser_term,0);
 rb_eval_string("testversionparser('5d4747789b43e594cc6f2364c15f5531')");}
