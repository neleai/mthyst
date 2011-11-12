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
static VALUE c_104;
static VALUE c_105;
static VALUE c_106;
static VALUE c_107;
static VALUE c_108;
static VALUE c_109;
static VALUE c_110;
static VALUE c_112;
static VALUE c_113;
static VALUE c_115;
static VALUE c_116;
static VALUE c_118;
static VALUE c_119;
static VALUE c_120;
static VALUE c_121;
static VALUE c_122;
static VALUE c_123;
static VALUE c_124;
static VALUE c_125;
static VALUE c_126;
static VALUE c_128;
static VALUE c_130;
static VALUE c_131;
static VALUE c_132;
static VALUE c_133;
static VALUE c_134;
static VALUE c_135;
static VALUE c_136;
static VALUE c_137;
static VALUE c_139;
static VALUE c_143;
static VALUE c_144;
static VALUE c_145;
static VALUE c_147;
static VALUE c_148;
static VALUE c_149;
static VALUE c_152;
static VALUE c_154;
static VALUE c_158;
static VALUE c_159;
static VALUE c_160;
static VALUE c_161;
static VALUE c_162;
static VALUE c_163;
static VALUE c_164;
static VALUE c_165;
static VALUE c_166;
static VALUE c_167;
static VALUE c_168;
static VALUE c_169;
static VALUE c_170;
static VALUE c_171;
static VALUE c_172;
static VALUE c_173;
static VALUE c_175;
static VALUE c_176;
static VALUE c_177;
static VALUE c_178;
static VALUE c_180;
static VALUE c_181;
static VALUE c_182;
static VALUE c_183;
static VALUE c_184;
static VALUE c_185;
static VALUE c_186;
static VALUE c_187;
static VALUE c_189;
static VALUE c_191;
static VALUE c_192;
static VALUE c_194;
static VALUE c_197;
static VALUE c_199;
static VALUE c_200;
static VALUE c_202;
static VALUE c_67;
static VALUE c_68;
static VALUE c_69;
static VALUE c_70;
static VALUE c_71;
static VALUE c_73;
static VALUE c_74;
static VALUE c_77;
static VALUE c_80;
static VALUE c_81;
static VALUE c_82;
static VALUE c_83;
static VALUE c_84;
static VALUE c_85;
static VALUE c_86;
static VALUE c_88;
static VALUE c_89;
static VALUE c_90;
static VALUE c_91;
static VALUE c_92;
static VALUE c_93;
static VALUE c_94;
static VALUE c_95;
static VALUE c_96;
static VALUE c_97;
static VALUE c_98;
static VALUE s__args_AmethystParsercb_1AmethystParser;
static VALUE s_addargs_AmethystParsercb_1AmethystParser;
static VALUE s_addargs_AmethystParsercb_2AmethystParser;
static VALUE s_addargs_AmethystParsercb_3AmethystParser;
static VALUE s_application_AmethystParsercb_1AmethystParser;
static VALUE s_application_AmethystParsercb_2AmethystParser;
static VALUE s_application_AmethystParsercb_3AmethystParser;
static VALUE s_application_AmethystParsercb_4AmethystParser;
static VALUE s_application_AmethystParsercb_5AmethystParser;
static VALUE s_argsOpt_AmethystParsercb_1AmethystParser;
static VALUE s_argsOpt_AmethystParsercb_2AmethystParser;
static VALUE s_argsOpt_AmethystParsercb_3AmethystParser;
static VALUE s_atomicHostExpr_AmethystParsercb_1AmethystParser;
static VALUE s_atomicHostExpr_AmethystParsercb_2AmethystParser;
static VALUE s_choice_AmethystParsercb_1AmethystParser;
static VALUE s_choice_AmethystParsercb_2AmethystParser;
static VALUE s_choice_AmethystParsercb_3AmethystParser;
static VALUE s_className_AmethystParsercb_1AmethystParser;
static VALUE s_collect_AmethystParsercb_1AmethystParser;
static VALUE s_eChar_AmethystParsercb_1AmethystParser;
static VALUE s_eChar_AmethystParsercb_2AmethystParser;
static VALUE s_eChar_AmethystParsercb_3AmethystParser;
static VALUE s_eChar_AmethystParsercb_4AmethystParser;
static VALUE s_grammar_AmethystParsercb_1AmethystParser;
static VALUE s_grammar_AmethystParsercb_2AmethystParser;
static VALUE s_grammar_AmethystParsercb_3AmethystParser;
static VALUE s_igrammar_AmethystParsercb_1AmethystParser;
static VALUE s_igrammar_AmethystParsercb_2AmethystParser;
static VALUE s_igrammar_AmethystParsercb_3AmethystParser;
static VALUE s_igrammar_AmethystParsercb_4AmethystParser;
static VALUE s_key_AmethystParsercb_1AmethystParser;
static VALUE s_key_AmethystParsercb_2AmethystParser;
static VALUE s_key_AmethystParsercb_3AmethystParser;
static VALUE s_key_AmethystParsercb_4AmethystParser;
static VALUE s_modifier_AmethystParsercb_1AmethystParser;
static VALUE s_modifier_AmethystParsercb_2AmethystParser;
static VALUE s_modifier_AmethystParsercb_3AmethystParser;
static VALUE s_prefixed_AmethystParsercb_10AmethystParser;
static VALUE s_prefixed_AmethystParsercb_11AmethystParser;
static VALUE s_prefixed_AmethystParsercb_1AmethystParser;
static VALUE s_prefixed_AmethystParsercb_2AmethystParser;
static VALUE s_prefixed_AmethystParsercb_3AmethystParser;
static VALUE s_prefixed_AmethystParsercb_4AmethystParser;
static VALUE s_prefixed_AmethystParsercb_5AmethystParser;
static VALUE s_prefixed_AmethystParsercb_6AmethystParser;
static VALUE s_prefixed_AmethystParsercb_7AmethystParser;
static VALUE s_prefixed_AmethystParsercb_8AmethystParser;
static VALUE s_prefixed_AmethystParsercb_9AmethystParser;
static VALUE s_procargs2_AmethystParsercb_1AmethystParser;
static VALUE s_procargs_AmethystParsercb_1AmethystParser;
static VALUE s_procargs_AmethystParsercb_2AmethystParser;
static VALUE s_procargs_AmethystParsercb_3AmethystParser;
static VALUE s_procargs_AmethystParsercb_4AmethystParser;
static VALUE s_procargs_AmethystParsercb_5AmethystParser;
static VALUE s_rubyarg_AmethystParsercb_10AmethystParser;
static VALUE s_rubyarg_AmethystParsercb_1AmethystParser;
static VALUE s_rubyarg_AmethystParsercb_2AmethystParser;
static VALUE s_rubyarg_AmethystParsercb_3AmethystParser;
static VALUE s_rubyarg_AmethystParsercb_4AmethystParser;
static VALUE s_rubyarg_AmethystParsercb_5AmethystParser;
static VALUE s_rubyarg_AmethystParsercb_6AmethystParser;
static VALUE s_rubyarg_AmethystParsercb_7AmethystParser;
static VALUE s_rubyarg_AmethystParsercb_8AmethystParser;
static VALUE s_rubyarg_AmethystParsercb_9AmethystParser;
static VALUE s_rule_AmethystParsercb_1AmethystParser;
static VALUE s_rule_AmethystParsercb_2AmethystParser;
static VALUE s_rule_AmethystParsercb_3AmethystParser;
static VALUE s_rule_AmethystParsercb_4AmethystParser;
static VALUE s_rule_AmethystParsercb_5AmethystParser;
static VALUE s_rule_AmethystParsercb_6AmethystParser;
static VALUE s_ruleargs_AmethystParsercb_1AmethystParser;
static VALUE s_ruleargs_AmethystParsercb_2AmethystParser;
static VALUE s_ruleargs_AmethystParsercb_3AmethystParser;
static VALUE s_sequence_AmethystParsercb_1AmethystParser;
static VALUE s_sizeAmethystParser;
static VALUE s_term_AmethystParsercb_10AmethystParser;
static VALUE s_term_AmethystParsercb_11AmethystParser;
static VALUE s_term_AmethystParsercb_12AmethystParser;
static VALUE s_term_AmethystParsercb_13AmethystParser;
static VALUE s_term_AmethystParsercb_14AmethystParser;
static VALUE s_term_AmethystParsercb_15AmethystParser;
static VALUE s_term_AmethystParsercb_16AmethystParser;
static VALUE s_term_AmethystParsercb_1AmethystParser;
static VALUE s_term_AmethystParsercb_2AmethystParser;
static VALUE s_term_AmethystParsercb_3AmethystParser;
static VALUE s_term_AmethystParsercb_4AmethystParser;
static VALUE s_term_AmethystParsercb_5AmethystParser;
static VALUE s_term_AmethystParsercb_6AmethystParser;
static VALUE s_term_AmethystParsercb_7AmethystParser;
static VALUE s_term_AmethystParsercb_8AmethystParser;
static VALUE s_term_AmethystParsercb_9AmethystParser;
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(7); bind_aset(bind,0/*o*/,a0);bind_aset(bind,5/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=bind_aget(bind,0/*o*/);
 bind_aset(bind,1/*s*/,it);  it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_154); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_grammar_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*r*/,it); it=bind_aget(bind,5/*c*/);
 bind_aset(bind,1/*s*/,it);  it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);it=bind_aget(bind,4/*r*/);
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(4); bind_aset(bind,0/*o*/,a0);bind_aset(bind,1/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=bind_aget(bind,0/*o*/); arg0=it;it=bind_aget(bind,1/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(fail);
 bind_aset(bind,2/*r*/,it); it=rb_funcall(self,s__args_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_addargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*result*/,it); it=rb_ary_new3(0);
 bind_aset(bind,1/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=c_143; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break1);
 bind_aset(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,3/*name*/,it); it=rb_funcall(self,s_addargs_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,5/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto break1;
it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_addargs_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,1/*autovar*/);it=rb_funcall(self,s_addargs_AmethystParsercb_3AmethystParser,1,bind); 
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
 bind_aset(bind,3/*klas*/,it);  it=rb_obj_clone(c_124); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 bind_aset(bind,4/*rule*/,it); it=rb_funcall(self,s_application_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,4/*rule*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*rule*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_125); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);  it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_126); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_ary_new3(0);
 bind_aset(bind,5/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_application_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,7/*r*/,it);  it=rb_obj_clone(c_128); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,7/*r*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*r*/,it); it=rb_funcall(self,s_application_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_application_AmethystParsercb_4AmethystParser,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,11/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 bind_aset(bind,12/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,12/*autovar*/);
 bind_aset(bind,13/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos4); ame_setlen(self,oldlen1);
	if(fail1) goto alt2_2;
it=bind_aget(bind,13/*autovar*/);
 bind_aset(bind,14/*_result*/,it); it=bind_aget(bind,14/*_result*/);
 bind_aset(bind,15/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3);it=rb_ary_new3(0);
 bind_aset(bind,15/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
it=bind_aget(bind,15/*_result*/);
 bind_aset(bind,16/*arg*/,it); it=rb_funcall(self,s_application_AmethystParsercb_5AmethystParser,1,bind); 
 bind_aset(bind,17/*_result*/,it); it=bind_aget(bind,17/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(15); bind_aset(bind,2/*o*/,a0);bind_aset(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=bind_aget(bind,0/*c*/);
 bind_aset(bind,1/*c*/,it); it=bind_aget(bind,2/*o*/);
 bind_aset(bind,3/*o*/,it); it=bind_aget(bind,3/*o*/);
 bind_aset(bind,4/*s*/,it);  it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_152); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,5/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_application_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,7/*r*/,it); it=bind_aget(bind,1/*c*/);
 bind_aset(bind,4/*s*/,it);  it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);it=bind_aget(bind,7/*r*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*r*/,it); it=rb_funcall(self,s_application_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_application_AmethystParsercb_4AmethystParser,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
 bind_aset(bind,6/*s*/,it);  it=bind_aget(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,6/*s*/);  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_149); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_new3(0);
 bind_aset(bind,7/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,8/*autovar*/,it); it=rb_funcall(self,s_argsOpt_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,9/*r*/,it); it=bind_aget(bind,4/*c*/);
 bind_aset(bind,6/*s*/,it);  it=bind_aget(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,6/*s*/);it=bind_aget(bind,9/*r*/);
 bind_aset(bind,10/*_result*/,it); it=bind_aget(bind,10/*_result*/);
 bind_aset(bind,11/*r*/,it); it=rb_funcall(self,s_argsOpt_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,12/*autovar*/,it); it=rb_funcall(self,s_argsOpt_AmethystParsercb_3AmethystParser,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*s*/,it); it=rb_funcall(self,s_atomicHostExpr_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_atomicHostExpr_AmethystParsercb_2AmethystParser,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_1AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_obj_clone(c_77); arg0=it; it=Amethyst_token(self ,arg0); FAILTEST(break1);  it=AmethystParser_sequence(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_grammar_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_2AmethystParser,1,bind); it=bind_aget(bind,0/*f*/);
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*ary*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_194); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=Amethyst_upper(self ); FAILTEST(fail);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_1AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_grammar_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_2AmethystParser,1,bind); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,5/*it*/,it); it=rb_funcall(self,s_className_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*ors*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_collect_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_eChar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_133); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_1AmethystParser,1,bind); FAILTEST(alt1_2);it=bind_aget(bind,0/*c*/);
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
 bind_aset(bind,2/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_134);
 bind_aset(bind,4/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*o*/,it);  it=bind_aget(bind,5/*o*/); arg0=it;it=rb_obj_clone(c_135); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_3);
 bind_aset(bind,6/*r*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_4AmethystParser,1,bind); 
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 bind_aset(bind,0/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_1AmethystParser,1,bind); FAILTEST(alt1_4);it=bind_aget(bind,0/*c*/);
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_choice(self ); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_69); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail);
 bind_aset(bind,0/*name*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_70); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 bind_aset(bind,1/*parent*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_funcall(self,s_grammar_AmethystParsercb_1AmethystParser,1,bind);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_71); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rule(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_grammar_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*rules*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_73); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_funcall(self,s_grammar_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_ary_new3(0);
 bind_aset(bind,1/*autovar*/,it); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
  it=rb_obj_clone(c_67); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt2_2); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_2;
 accept2:;
  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_igrammar_AmethystParsercb_1AmethystParser,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self); int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
  it=rb_obj_clone(c_68); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt3_2); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break2;
 accept3:;
  it=AmethystCore_anything(self ); FAILTEST(break2);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_igrammar_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,1/*autovar*/);
 bind_aset(bind,4/*it*/,it); it=rb_funcall(self,s_igrammar_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,5/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_grammar(self ); FAILTEST(alt1_3);
 bind_aset(bind,5/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,s_igrammar_AmethystParsercb_4AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,6/*a*/,it); it=bind_aget(bind,6/*a*/);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_inlineHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_obj_clone(c_199); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_200); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*r*/,it);  it=rb_obj_clone(c_202); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,2/*r*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_2AmethystParser,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
  it=rb_obj_clone(c_130); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_className(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*name*/,it); it=rb_funcall(self,s_key_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*vars*/,it); it=rb_funcall(self,s_key_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,2/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_131); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);  it=AmethystParser_name(self ); FAILTEST(alt1_3);
 bind_aset(bind,0/*name*/,it); it=rb_funcall(self,s_key_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,2/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_132); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);  it=AmethystParser_name(self ); FAILTEST(alt1_4);
 bind_aset(bind,0/*name*/,it); it=rb_funcall(self,s_key_AmethystParsercb_4AmethystParser,1,bind); 
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
 it=rb_funcall(self,s_modifier_AmethystParsercb_1AmethystParser,1,bind); 
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
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_modifier_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*autovar*/);
 bind_aset(bind,5/*c*/,it); it=rb_funcall(self,s_modifier_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_197); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_nameFirst(self ); FAILTEST(fail);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_1AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_grammar_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_2AmethystParser,1,bind); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,5/*it*/,it); it=rb_funcall(self,s_className_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nameFirst(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_letter(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_191); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_192);
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
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
   it=AmethystParser_name(self ); FAILTEST(alt1_2);int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
  it=rb_obj_clone(c_144); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);  it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_145); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*r*/,it);  it=rb_obj_clone(c_147); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,2/*r*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_2AmethystParser,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_148); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2);
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
   it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_80); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*expr*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_3);int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_3;}
  it=rb_obj_clone(c_81); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_82);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*neg*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_3;}
  it=rb_obj_clone(c_83); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);it=rb_obj_clone(c_84);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*neg*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_3;
 accept2:;
  it=AmethystParser_prefixed(self ); FAILTEST(alt1_3);
 bind_aset(bind,5/*m*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_4;}
   it=AmethystParser_modifier(self ); FAILTEST(alt3_2);
 bind_aset(bind,6/*from*/,it);  
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_4;}
   it=Amethyst_spaces(self ); FAILTEST(alt3_3); it=rb_obj_clone(c_85); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_3);int oldpos4=ame_getpos(self);
  it=rb_funcall(self,s_prefixed_AmethystParsercb_3AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(reject1); x=1; goto accept4;  reject1: x=0; accept4: it=Qnil; ame_setpos(self,oldpos4); if (x==0) goto alt3_3;int oldpos5=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_3;}
   it=Amethyst_spaces(self ); FAILTEST(alt4_2); it=rb_obj_clone(c_86); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt4_2); 
ame_setcut(self,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt3_3;}
   it=Amethyst_empty(self ); FAILTEST(alt4_3); 
ame_setcut(self,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos5); goto alt3_3;
 accept5:;
it=rb_funcall(self,s_prefixed_AmethystParsercb_4AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it);  
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto alt1_4;
 accept3:;
it=rb_ary_new3(0);
 bind_aset(bind,7/*autovar*/,it); int oldpos6; while(1){oldpos6=ame_getpos(self); int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst__(self ); FAILTEST(alt5_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt5_2); 
ame_setcut(self,Qnil);goto accept6;
alt5_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt5_3); 
ame_setcut(self,Qnil);goto accept6;
  alt5_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
  it=Amethyst_spaces(self ); FAILTEST(break1);int oldpos8=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_88); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_2);  it=AmethystParser_prefixed(self ); FAILTEST(alt6_2);
 bind_aset(bind,8/*it*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_5AmethystParser,1,bind); 
 bind_aset(bind,9/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept7;
alt6_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_89); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_3);  it=AmethystParser_expression(self ); FAILTEST(alt6_3);
 bind_aset(bind,8/*it*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_6AmethystParser,1,bind);   it=Amethyst_spaces(self ); FAILTEST(alt6_3); it=rb_obj_clone(c_90); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_3);it=rb_obj_clone(c_91);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,9/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept7;
alt6_3: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos9=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt6_4;}
  it=rb_obj_clone(c_92); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_2);it=rb_obj_clone(c_93);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,10/*one*/,it);  
ame_setcut(self,Qnil);goto accept8;
alt7_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt6_4;}
  it=rb_obj_clone(c_94); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_3);it=rb_obj_clone(c_95);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,10/*one*/,it);  
ame_setcut(self,Qnil);goto accept8;
  alt7_3:  ame_setpos(self,oldpos9); goto alt6_4;
 accept8:;
it=rb_funcall(self,s_prefixed_AmethystParsercb_7AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it); 
 bind_aset(bind,9/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept7;
alt6_4: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_96); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_5);it=rb_funcall(self,s_prefixed_AmethystParsercb_8AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it); 
 bind_aset(bind,9/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept7;
alt6_5: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_97); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_6);int oldpos10=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt6_6;}
 int oldpos11=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt8_2;}
   it=AmethystParser_key(self ); FAILTEST(alt9_2);
 bind_aset(bind,11/*name*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt9_2: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt8_2;}
   it=AmethystParser_name(self ); FAILTEST(alt9_3);
 bind_aset(bind,11/*name*/,it);  
ame_setcut(self,Qnil);goto accept10;
  alt9_3:  ame_setpos(self,oldpos11); goto alt8_2;
 accept10:;
int oldpos12=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt8_2;}
  it=rb_obj_clone(c_98); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt10_2);it=Qtrue;
 bind_aset(bind,12/*append*/,it);  
ame_setcut(self,Qnil);goto accept11;
alt10_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt8_2;}
   it=Amethyst_empty(self ); FAILTEST(alt10_3);it=Qnil;
 bind_aset(bind,12/*append*/,it);  
ame_setcut(self,Qnil);goto accept11;
  alt10_3:  ame_setpos(self,oldpos12); goto alt8_2;
 accept11:;
it=rb_funcall(self,s_prefixed_AmethystParsercb_9AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it); 
 bind_aset(bind,9/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept9;
alt8_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt6_6;}
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt8_3);
 bind_aset(bind,13/*e*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_10AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it); 
 bind_aset(bind,9/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept9;
  alt8_3:  ame_setpos(self,oldpos10); goto alt6_6;
 accept9:;
 
ame_setcut(self,Qnil);goto accept7;
  alt6_6:  ame_setpos(self,oldpos8); goto break1;
 accept7:;
it=rb_funcall(self,s_prefixed_AmethystParsercb_11AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,7/*autovar*/);it=bind_aget(bind,6/*from*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_procargs_AmethystParsercb_1AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 bind_aset(bind,1/*c*/,it); it=rb_funcall(self,s_procargs_AmethystParsercb_2AmethystParser,1,bind); FAILTEST(alt1_2);it=rb_funcall(self,s_procargs_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,2/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_procargs2(self ); FAILTEST(alt1_3);
 bind_aset(bind,2/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,s_procargs_AmethystParsercb_4AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,s_procargs_AmethystParsercb_5AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_189; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2);
 bind_aset(bind,0/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,1/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_procargs2(self ); FAILTEST(break1);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_igrammar_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,1/*autovar*/);
 bind_aset(bind,3/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=bind_aget(bind,3/*autovar*/);
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 bind_aset(bind,5/*a*/,it); it=rb_funcall(self,s_procargs2_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(19);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*s*/,it); it=rb_ary_new3(0);
 bind_aset(bind,1/*n*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_158); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_expression(self ); FAILTEST(alt1_2);
 bind_aset(bind,2/*e*/,it);  it=rb_obj_clone(c_159); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_160);
 bind_aset(bind,4/*c*/,it); it=rb_obj_clone(c_161);
 bind_aset(bind,5/*o*/,it);  it=rb_obj_clone(c_162); arg0=it;it=rb_obj_clone(c_163); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_3);
 bind_aset(bind,6/*r*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_4AmethystParser,1,bind); 
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_164);
 bind_aset(bind,4/*c*/,it); it=rb_obj_clone(c_165);
 bind_aset(bind,5/*o*/,it);  it=rb_obj_clone(c_166); arg0=it;it=rb_obj_clone(c_167); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_4);
 bind_aset(bind,6/*r*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_4AmethystParser,1,bind); 
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_168);
 bind_aset(bind,4/*c*/,it); it=rb_obj_clone(c_169);
 bind_aset(bind,5/*o*/,it);  it=rb_obj_clone(c_170); arg0=it;it=rb_obj_clone(c_171); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_5);
 bind_aset(bind,6/*r*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_4AmethystParser,1,bind); 
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_172); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_6);it=rb_obj_clone(c_173);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_2AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,10/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_175); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_176);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
 bind_aset(bind,11/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt2_3);
 bind_aset(bind,11/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
it=rb_funcall(self,s_rubyarg_AmethystParsercb_3AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,10/*autovar*/);
 bind_aset(bind,12/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_4AmethystParser,1,bind); it=rb_funcall(self,s_rubyarg_AmethystParsercb_5AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_177); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_7);it=rb_obj_clone(c_178);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,13/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_6AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,14/*autovar*/,it); int oldpos4; while(1){oldpos4=ame_getpos(self); int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
  it=rb_obj_clone(c_180); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);it=rb_obj_clone(c_181);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
 bind_aset(bind,15/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt3_3);
 bind_aset(bind,15/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break2;
 accept3:;
it=rb_funcall(self,s_term_AmethystParsercb_14AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,14/*autovar*/);
 bind_aset(bind,16/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_7AmethystParser,1,bind); it=rb_funcall(self,s_rubyarg_AmethystParsercb_5AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_182); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_8);it=rb_obj_clone(c_183);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_184); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_9);it=rb_obj_clone(c_185);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_10;}
   it=Amethyst_spaces(self ); FAILTEST(alt4_2); it=rb_obj_clone(c_186); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt4_2);it=rb_obj_clone(c_187);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,17/*_result*/,it); it=bind_aget(bind,17/*_result*/);
 bind_aset(bind,1/*n*/,it);  
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_10;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_8AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt4_3);
 bind_aset(bind,1/*n*/,it);  
ame_setcut(self,Qnil);goto accept4;
alt4_3: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_10;}
   it=Amethyst_empty(self ); FAILTEST(alt4_4); 
ame_setcut(self,Qnil);goto accept4;
  alt4_4:  ame_setpos(self,oldpos6); goto alt1_10;
 accept4:;
int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_10;}
   it=Amethyst__(self ); FAILTEST(alt5_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt5_2); 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_10;}
   it=Amethyst_empty(self ); FAILTEST(alt5_3); 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos7); goto alt1_10;
 accept5:;
  it=AmethystParser_name(self ); FAILTEST(alt1_10);
 bind_aset(bind,18/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_9AmethystParser,1,bind); it=bind_aget(bind,1/*n*/);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_11;}
   it=Amethyst__(self ); FAILTEST(alt6_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt6_2); 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_11;}
   it=Amethyst_empty(self ); FAILTEST(alt6_3); 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos8); goto alt1_11;
 accept6:;
  it=AmethystParser_key(self ); FAILTEST(alt1_11);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_10AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt1_12);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_12:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_rule_AmethystParsercb_1AmethystParser,1,bind); it=rb_funcall(self,s_rule_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,0/*bnding*/,it);   it=AmethystParser_name(self ); FAILTEST(fail);
 bind_aset(bind,1/*name*/,it);   it=AmethystParser_ruleargs(self ); FAILTEST(fail);
 bind_aset(bind,2/*args*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_74); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_expression(self ); FAILTEST(fail);
 bind_aset(bind,3/*body*/,it); it=rb_funcall(self,s_rule_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,3/*body*/,it); it=rb_funcall(self,s_rule_AmethystParsercb_4AmethystParser,1,bind); 
 bind_aset(bind,4/*locals*/,it); it=rb_funcall(self,s_rule_AmethystParsercb_5AmethystParser,1,bind); it=rb_funcall(self,s_rule_AmethystParsercb_6AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_136); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_137); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*r*/,it);  it=rb_obj_clone(c_139); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,2/*r*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_2AmethystParser,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,6/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 bind_aset(bind,7/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,8/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=bind_aget(bind,8/*autovar*/);
 bind_aset(bind,9/*_result*/,it); it=bind_aget(bind,9/*_result*/);
 bind_aset(bind,10/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 bind_aset(bind,10/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,10/*_result*/);
 bind_aset(bind,11/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_3AmethystParser,1,bind); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
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
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*ary*/,it); it=rb_funcall(self,s_sequence_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(19);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*s*/,it); it=rb_ary_new3(0);
 bind_aset(bind,1/*x*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_className(self ); FAILTEST(alt1_2);
 bind_aset(bind,2/*cls*/,it); it=rb_funcall(self,s_term_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_3); it=rb_obj_clone(c_104); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3); it=rb_obj_clone(c_105); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);  it=AmethystParser_expression(self ); FAILTEST(alt1_3);
 bind_aset(bind,4/*expr*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_3); it=rb_obj_clone(c_106); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_funcall(self,s_term_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_4); it=rb_obj_clone(c_107); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=rb_funcall(self,s_term_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_application(self ); FAILTEST(alt1_5);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt1_6);
 bind_aset(bind,5/*it*/,it); it=rb_funcall(self,s_term_AmethystParsercb_4AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_7);int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_7;}
  it=rb_obj_clone(c_108); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);  it=AmethystParser_atomicHostExpr(self ); FAILTEST(alt2_2);
 bind_aset(bind,1/*x*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_7;}
  it=rb_obj_clone(c_109); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt2_3);
 bind_aset(bind,1/*x*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_7;
 accept2:;
it=rb_funcall(self,s_term_AmethystParsercb_5AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_8); it=rb_obj_clone(c_110); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_8);it=rb_ary_new3(0);
 bind_aset(bind,6/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self); int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_112); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
 bind_aset(bind,7/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt3_3);
 bind_aset(bind,8/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_6AmethystParser,1,bind); 
 bind_aset(bind,7/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto break1;
 accept3:;
it=rb_funcall(self,s_term_AmethystParsercb_7AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,6/*autovar*/);it=rb_funcall(self,s_term_AmethystParsercb_8AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_9); it=rb_obj_clone(c_113); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_9);it=rb_ary_new3(0);
 bind_aset(bind,9/*autovar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self); int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
  it=rb_obj_clone(c_115); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt4_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
 bind_aset(bind,10/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt4_3);
 bind_aset(bind,11/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_9AmethystParser,1,bind); 
 bind_aset(bind,10/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos6); goto break2;
 accept4:;
it=rb_funcall(self,s_term_AmethystParsercb_10AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,9/*autovar*/);it=rb_funcall(self,s_term_AmethystParsercb_11AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt1_10);
 bind_aset(bind,5/*it*/,it); it=rb_funcall(self,s_term_AmethystParsercb_12AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_116);
 bind_aset(bind,12/*s*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_11);it=bind_aget(bind,12/*s*/);
 bind_aset(bind,13/*s*/,it);  it=bind_aget(bind,13/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_11);it=bind_aget(bind,13/*s*/);it=rb_ary_new3(0);
 bind_aset(bind,14/*autovar*/,it); int oldpos7; while(1){oldpos7=ame_getpos(self); int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
 it=rb_obj_clone(c_118);
 bind_aset(bind,12/*s*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt5_2);it=rb_obj_clone(c_119);
 bind_aset(bind,13/*s*/,it);  it=rb_obj_clone(c_120); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
 bind_aset(bind,15/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
   it=AmethystParser_eChar(self ); FAILTEST(alt5_3);
 bind_aset(bind,16/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_13AmethystParser,1,bind); 
 bind_aset(bind,15/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto break3;
 accept5:;
it=rb_funcall(self,s_term_AmethystParsercb_14AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,14/*autovar*/);it=rb_funcall(self,s_term_AmethystParsercb_15AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_12); it=rb_obj_clone(c_121); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);  it=AmethystParser_expression(self ); FAILTEST(alt1_12);
 bind_aset(bind,1/*x*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_12); it=rb_obj_clone(c_122); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_12;}
  it=rb_obj_clone(c_123); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_2);it=bind_aget(bind,1/*x*/);
 bind_aset(bind,17/*ors*/,it); it=rb_funcall(self,s_term_AmethystParsercb_16AmethystParser,1,bind); 
 bind_aset(bind,18/*_result*/,it); it=bind_aget(bind,18/*_result*/);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_12;}
   it=Amethyst_empty(self ); FAILTEST(alt6_3);it=bind_aget(bind,1/*x*/);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos9); goto alt1_12;
 accept6:;
 
ame_setcut(self,Qnil);goto accept1;
  alt1_12:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_104=rb_str_new2("nested");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_104);
c_105=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_105);
c_106=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_106);
c_107=rb_str_new2("break");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_107);
c_108=rb_str_new2("->");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_108);
c_109=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_109);
c_110=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_110);
c_112=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_112);
c_113=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_113);
c_115=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_115);
c_116=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_116);
c_118=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_118);
c_119=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_119);
c_120=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_120);
c_121=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_121);
c_122=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_122);
c_123=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_123);
c_124=rb_str_new2("::");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_124);
c_125=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_125);
c_126=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_126);
c_128=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_128);
c_130=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_130);
c_131=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_131);
c_132=rb_str_new2("@@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_132);
c_133=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_133);
c_134=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_134);
c_135=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_135);
c_136=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_136);
c_137=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_137);
c_139=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_139);
c_143=rb_const_get(rb_cObject, rb_intern("Args"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_143);
c_144=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_144);
c_145=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_145);
c_147=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_147);
c_148=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_148);
c_149=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_149);
c_152=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_152);
c_154=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_154);
c_158=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_158);
c_159=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_159);
c_160=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_160);
c_161=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_161);
c_162=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_162);
c_163=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_163);
c_164=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_164);
c_165=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_165);
c_166=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_166);
c_167=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_167);
c_168=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_168);
c_169=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_169);
c_170=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_170);
c_171=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_171);
c_172=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_172);
c_173=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_173);
c_175=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_175);
c_176=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_176);
c_177=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_177);
c_178=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_178);
c_180=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_180);
c_181=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_181);
c_182=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_182);
c_183=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_183);
c_184=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_184);
c_185=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_185);
c_186=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_186);
c_187=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_187);
c_189=rb_const_get(rb_cObject, rb_intern("Args"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_189);
c_191=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_191);
c_192=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_192);
c_194=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_194);
c_197=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_197);
c_199=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_199);
c_200=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_200);
c_202=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_202);
c_67=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_67);
c_68=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_68);
c_69=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_69);
c_70=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_70);
c_71=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_71);
c_73=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_73);
c_74=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_74);
c_77=rb_str_new2("|");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_77);
c_80=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_80);
c_81=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_81);
c_82=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_82);
c_83=rb_str_new2("~");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_83);
c_84=rb_str_new2("~");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_84);
c_85=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_85);
c_86=rb_str_new2(".");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_86);
c_88=rb_str_new2("=>");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_88);
c_89=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_89);
c_90=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_90);
c_91=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_91);
c_92=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_92);
c_93=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_93);
c_94=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_94);
c_95=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_95);
c_96=rb_str_new2("?");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_96);
c_97=rb_str_new2(":");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_97);
c_98=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_98);
s__args_AmethystParsercb_1AmethystParser=rb_intern("_args_AmethystParsercb_1");
s_addargs_AmethystParsercb_1AmethystParser=rb_intern("addargs_AmethystParsercb_1");
s_addargs_AmethystParsercb_2AmethystParser=rb_intern("addargs_AmethystParsercb_2");
s_addargs_AmethystParsercb_3AmethystParser=rb_intern("addargs_AmethystParsercb_3");
s_application_AmethystParsercb_1AmethystParser=rb_intern("application_AmethystParsercb_1");
s_application_AmethystParsercb_2AmethystParser=rb_intern("application_AmethystParsercb_2");
s_application_AmethystParsercb_3AmethystParser=rb_intern("application_AmethystParsercb_3");
s_application_AmethystParsercb_4AmethystParser=rb_intern("application_AmethystParsercb_4");
s_application_AmethystParsercb_5AmethystParser=rb_intern("application_AmethystParsercb_5");
s_argsOpt_AmethystParsercb_1AmethystParser=rb_intern("argsOpt_AmethystParsercb_1");
s_argsOpt_AmethystParsercb_2AmethystParser=rb_intern("argsOpt_AmethystParsercb_2");
s_argsOpt_AmethystParsercb_3AmethystParser=rb_intern("argsOpt_AmethystParsercb_3");
s_atomicHostExpr_AmethystParsercb_1AmethystParser=rb_intern("atomicHostExpr_AmethystParsercb_1");
s_atomicHostExpr_AmethystParsercb_2AmethystParser=rb_intern("atomicHostExpr_AmethystParsercb_2");
s_choice_AmethystParsercb_1AmethystParser=rb_intern("choice_AmethystParsercb_1");
s_choice_AmethystParsercb_2AmethystParser=rb_intern("choice_AmethystParsercb_2");
s_choice_AmethystParsercb_3AmethystParser=rb_intern("choice_AmethystParsercb_3");
s_className_AmethystParsercb_1AmethystParser=rb_intern("className_AmethystParsercb_1");
s_collect_AmethystParsercb_1AmethystParser=rb_intern("collect_AmethystParsercb_1");
s_eChar_AmethystParsercb_1AmethystParser=rb_intern("eChar_AmethystParsercb_1");
s_eChar_AmethystParsercb_2AmethystParser=rb_intern("eChar_AmethystParsercb_2");
s_eChar_AmethystParsercb_3AmethystParser=rb_intern("eChar_AmethystParsercb_3");
s_eChar_AmethystParsercb_4AmethystParser=rb_intern("eChar_AmethystParsercb_4");
s_grammar_AmethystParsercb_1AmethystParser=rb_intern("grammar_AmethystParsercb_1");
s_grammar_AmethystParsercb_2AmethystParser=rb_intern("grammar_AmethystParsercb_2");
s_grammar_AmethystParsercb_3AmethystParser=rb_intern("grammar_AmethystParsercb_3");
s_igrammar_AmethystParsercb_1AmethystParser=rb_intern("igrammar_AmethystParsercb_1");
s_igrammar_AmethystParsercb_2AmethystParser=rb_intern("igrammar_AmethystParsercb_2");
s_igrammar_AmethystParsercb_3AmethystParser=rb_intern("igrammar_AmethystParsercb_3");
s_igrammar_AmethystParsercb_4AmethystParser=rb_intern("igrammar_AmethystParsercb_4");
s_key_AmethystParsercb_1AmethystParser=rb_intern("key_AmethystParsercb_1");
s_key_AmethystParsercb_2AmethystParser=rb_intern("key_AmethystParsercb_2");
s_key_AmethystParsercb_3AmethystParser=rb_intern("key_AmethystParsercb_3");
s_key_AmethystParsercb_4AmethystParser=rb_intern("key_AmethystParsercb_4");
s_modifier_AmethystParsercb_1AmethystParser=rb_intern("modifier_AmethystParsercb_1");
s_modifier_AmethystParsercb_2AmethystParser=rb_intern("modifier_AmethystParsercb_2");
s_modifier_AmethystParsercb_3AmethystParser=rb_intern("modifier_AmethystParsercb_3");
s_prefixed_AmethystParsercb_10AmethystParser=rb_intern("prefixed_AmethystParsercb_10");
s_prefixed_AmethystParsercb_11AmethystParser=rb_intern("prefixed_AmethystParsercb_11");
s_prefixed_AmethystParsercb_1AmethystParser=rb_intern("prefixed_AmethystParsercb_1");
s_prefixed_AmethystParsercb_2AmethystParser=rb_intern("prefixed_AmethystParsercb_2");
s_prefixed_AmethystParsercb_3AmethystParser=rb_intern("prefixed_AmethystParsercb_3");
s_prefixed_AmethystParsercb_4AmethystParser=rb_intern("prefixed_AmethystParsercb_4");
s_prefixed_AmethystParsercb_5AmethystParser=rb_intern("prefixed_AmethystParsercb_5");
s_prefixed_AmethystParsercb_6AmethystParser=rb_intern("prefixed_AmethystParsercb_6");
s_prefixed_AmethystParsercb_7AmethystParser=rb_intern("prefixed_AmethystParsercb_7");
s_prefixed_AmethystParsercb_8AmethystParser=rb_intern("prefixed_AmethystParsercb_8");
s_prefixed_AmethystParsercb_9AmethystParser=rb_intern("prefixed_AmethystParsercb_9");
s_procargs2_AmethystParsercb_1AmethystParser=rb_intern("procargs2_AmethystParsercb_1");
s_procargs_AmethystParsercb_1AmethystParser=rb_intern("procargs_AmethystParsercb_1");
s_procargs_AmethystParsercb_2AmethystParser=rb_intern("procargs_AmethystParsercb_2");
s_procargs_AmethystParsercb_3AmethystParser=rb_intern("procargs_AmethystParsercb_3");
s_procargs_AmethystParsercb_4AmethystParser=rb_intern("procargs_AmethystParsercb_4");
s_procargs_AmethystParsercb_5AmethystParser=rb_intern("procargs_AmethystParsercb_5");
s_rubyarg_AmethystParsercb_10AmethystParser=rb_intern("rubyarg_AmethystParsercb_10");
s_rubyarg_AmethystParsercb_1AmethystParser=rb_intern("rubyarg_AmethystParsercb_1");
s_rubyarg_AmethystParsercb_2AmethystParser=rb_intern("rubyarg_AmethystParsercb_2");
s_rubyarg_AmethystParsercb_3AmethystParser=rb_intern("rubyarg_AmethystParsercb_3");
s_rubyarg_AmethystParsercb_4AmethystParser=rb_intern("rubyarg_AmethystParsercb_4");
s_rubyarg_AmethystParsercb_5AmethystParser=rb_intern("rubyarg_AmethystParsercb_5");
s_rubyarg_AmethystParsercb_6AmethystParser=rb_intern("rubyarg_AmethystParsercb_6");
s_rubyarg_AmethystParsercb_7AmethystParser=rb_intern("rubyarg_AmethystParsercb_7");
s_rubyarg_AmethystParsercb_8AmethystParser=rb_intern("rubyarg_AmethystParsercb_8");
s_rubyarg_AmethystParsercb_9AmethystParser=rb_intern("rubyarg_AmethystParsercb_9");
s_rule_AmethystParsercb_1AmethystParser=rb_intern("rule_AmethystParsercb_1");
s_rule_AmethystParsercb_2AmethystParser=rb_intern("rule_AmethystParsercb_2");
s_rule_AmethystParsercb_3AmethystParser=rb_intern("rule_AmethystParsercb_3");
s_rule_AmethystParsercb_4AmethystParser=rb_intern("rule_AmethystParsercb_4");
s_rule_AmethystParsercb_5AmethystParser=rb_intern("rule_AmethystParsercb_5");
s_rule_AmethystParsercb_6AmethystParser=rb_intern("rule_AmethystParsercb_6");
s_ruleargs_AmethystParsercb_1AmethystParser=rb_intern("ruleargs_AmethystParsercb_1");
s_ruleargs_AmethystParsercb_2AmethystParser=rb_intern("ruleargs_AmethystParsercb_2");
s_ruleargs_AmethystParsercb_3AmethystParser=rb_intern("ruleargs_AmethystParsercb_3");
s_sequence_AmethystParsercb_1AmethystParser=rb_intern("sequence_AmethystParsercb_1");
s_sizeAmethystParser=rb_intern("size");
s_term_AmethystParsercb_10AmethystParser=rb_intern("term_AmethystParsercb_10");
s_term_AmethystParsercb_11AmethystParser=rb_intern("term_AmethystParsercb_11");
s_term_AmethystParsercb_12AmethystParser=rb_intern("term_AmethystParsercb_12");
s_term_AmethystParsercb_13AmethystParser=rb_intern("term_AmethystParsercb_13");
s_term_AmethystParsercb_14AmethystParser=rb_intern("term_AmethystParsercb_14");
s_term_AmethystParsercb_15AmethystParser=rb_intern("term_AmethystParsercb_15");
s_term_AmethystParsercb_16AmethystParser=rb_intern("term_AmethystParsercb_16");
s_term_AmethystParsercb_1AmethystParser=rb_intern("term_AmethystParsercb_1");
s_term_AmethystParsercb_2AmethystParser=rb_intern("term_AmethystParsercb_2");
s_term_AmethystParsercb_3AmethystParser=rb_intern("term_AmethystParsercb_3");
s_term_AmethystParsercb_4AmethystParser=rb_intern("term_AmethystParsercb_4");
s_term_AmethystParsercb_5AmethystParser=rb_intern("term_AmethystParsercb_5");
s_term_AmethystParsercb_6AmethystParser=rb_intern("term_AmethystParsercb_6");
s_term_AmethystParsercb_7AmethystParser=rb_intern("term_AmethystParsercb_7");
s_term_AmethystParsercb_8AmethystParser=rb_intern("term_AmethystParsercb_8");
s_term_AmethystParsercb_9AmethystParser=rb_intern("term_AmethystParsercb_9");
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
 rb_eval_string("testversionparser('db3d8b98cf22759be8a68e085bd0a4f4')");}
