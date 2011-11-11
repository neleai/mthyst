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
VALUE AmethystParser_choice_lambda1(VALUE self,VALUE bind);
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
static VALUE c_100;
static VALUE c_101;
static VALUE c_104;
static VALUE c_105;
static VALUE c_106;
static VALUE c_107;
static VALUE c_108;
static VALUE c_109;
static VALUE c_110;
static VALUE c_111;
static VALUE c_112;
static VALUE c_116;
static VALUE c_117;
static VALUE c_118;
static VALUE c_119;
static VALUE c_121;
static VALUE c_122;
static VALUE c_125;
static VALUE c_127;
static VALUE c_131;
static VALUE c_132;
static VALUE c_133;
static VALUE c_134;
static VALUE c_135;
static VALUE c_136;
static VALUE c_137;
static VALUE c_138;
static VALUE c_139;
static VALUE c_140;
static VALUE c_141;
static VALUE c_142;
static VALUE c_143;
static VALUE c_144;
static VALUE c_145;
static VALUE c_146;
static VALUE c_148;
static VALUE c_149;
static VALUE c_150;
static VALUE c_151;
static VALUE c_152;
static VALUE c_153;
static VALUE c_154;
static VALUE c_155;
static VALUE c_156;
static VALUE c_157;
static VALUE c_158;
static VALUE c_159;
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
static VALUE c_174;
static VALUE c_175;
static VALUE c_176;
static VALUE c_177;
static VALUE c_178;
static VALUE c_179;
static VALUE c_180;
static VALUE c_181;
static VALUE c_182;
static VALUE c_183;
static VALUE c_184;
static VALUE c_185;
static VALUE c_186;
static VALUE c_188;
static VALUE c_189;
static VALUE c_191;
static VALUE c_194;
static VALUE c_196;
static VALUE c_197;
static VALUE c_198;
static VALUE c_43;
static VALUE c_44;
static VALUE c_45;
static VALUE c_46;
static VALUE c_47;
static VALUE c_49;
static VALUE c_50;
static VALUE c_51;
static VALUE c_52;
static VALUE c_57;
static VALUE c_58;
static VALUE c_59;
static VALUE c_60;
static VALUE c_61;
static VALUE c_62;
static VALUE c_63;
static VALUE c_64;
static VALUE c_65;
static VALUE c_66;
static VALUE c_67;
static VALUE c_68;
static VALUE c_70;
static VALUE c_73;
static VALUE c_74;
static VALUE c_75;
static VALUE c_76;
static VALUE c_80;
static VALUE c_81;
static VALUE c_82;
static VALUE c_83;
static VALUE c_84;
static VALUE c_85;
static VALUE c_86;
static VALUE c_87;
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
static VALUE c_99;
static VALUE s__args_AmethystParsercb_1AmethystParser;
static VALUE s_addargs_AmethystParsercb_1AmethystParser;
static VALUE s_addargs_AmethystParsercb_2AmethystParser;
static VALUE s_addargs_AmethystParsercb_3AmethystParser;
static VALUE s_application_AmethystParsercb_1AmethystParser;
static VALUE s_application_AmethystParsercb_2AmethystParser;
static VALUE s_application_AmethystParsercb_3AmethystParser;
static VALUE s_application_AmethystParsercb_4AmethystParser;
static VALUE s_application_AmethystParsercb_5AmethystParser;
static VALUE s_applyAmethystParser;
static VALUE s_args_AmethystParsercb_1AmethystParser;
static VALUE s_args_AmethystParsercb_2AmethystParser;
static VALUE s_atomicHostExpr_AmethystParsercb_1AmethystParser;
static VALUE s_atomicHostExpr_AmethystParsercb_2AmethystParser;
static VALUE s_choice_AmethystParsercb_1AmethystParser;
static VALUE s_choice_AmethystParsercb_2AmethystParser;
static VALUE s_choice_AmethystParsercb_3AmethystParser;
static VALUE s_choice_AmethystParsercb_4AmethystParser;
static VALUE s_choice_AmethystParsercb_5AmethystParser;
static VALUE s_className_AmethystParsercb_1AmethystParser;
static VALUE s_className_AmethystParsercb_2AmethystParser;
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
static VALUE s_prefixed_AmethystParsercb_10AmethystParser;
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
static VALUE s_rubyarg_AmethystParsercb_10AmethystParser;
static VALUE s_rubyarg_AmethystParsercb_11AmethystParser;
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
static VALUE s_ruleargs_AmethystParsercb_4AmethystParser;
static VALUE s_sequence_AmethystParsercb_1AmethystParser;
static VALUE s_sequence_AmethystParsercb_2AmethystParser;
static VALUE s_sizeAmethystParser;
static VALUE s_term_AmethystParsercb_10AmethystParser;
static VALUE s_term_AmethystParsercb_11AmethystParser;
static VALUE s_term_AmethystParsercb_12AmethystParser;
static VALUE s_term_AmethystParsercb_13AmethystParser;
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
 bind_aset(bind,1/*s*/,it);  it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_127); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
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
VALUE AmethystParser_addargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*result*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=c_116; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,2/*name*/,it); it=rb_funcall(self,s_addargs_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_addargs_AmethystParsercb_2AmethystParser,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto break1;
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,s_addargs_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,4/*_result*/,it); it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_application(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(24);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_name(self ); FAILTEST(fail);
 bind_aset(bind,0/*autovar*/,it); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,1/*autovar*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/);
 bind_aset(bind,2/*klas*/,it);  it=rb_obj_clone(c_98); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 bind_aset(bind,3/*rule*/,it); it=rb_funcall(self,s_application_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,3/*rule*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/);
 bind_aset(bind,3/*rule*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_obj_clone(c_99);
 bind_aset(bind,4/*c*/,it); it=rb_obj_clone(c_100);
 bind_aset(bind,5/*o*/,it); int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,4/*c*/);
 bind_aset(bind,6/*c*/,it); it=bind_aget(bind,5/*o*/);
 bind_aset(bind,7/*o*/,it); it=bind_aget(bind,6/*c*/);
 bind_aset(bind,8/*c*/,it); it=bind_aget(bind,7/*o*/);
 bind_aset(bind,9/*o*/,it); it=bind_aget(bind,9/*o*/);
 bind_aset(bind,10/*s*/,it);  it=bind_aget(bind,10/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,10/*s*/);  it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_101); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_ary_new3(0);
 bind_aset(bind,11/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,12/*autovar*/,it); it=rb_funcall(self,s_application_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,11/*autovar*/);
 bind_aset(bind,13/*r*/,it); it=bind_aget(bind,8/*c*/);
 bind_aset(bind,10/*s*/,it);  it=bind_aget(bind,10/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,10/*s*/);it=bind_aget(bind,13/*r*/);
 bind_aset(bind,14/*_result*/,it); it=bind_aget(bind,14/*_result*/);
 bind_aset(bind,15/*r*/,it); it=rb_funcall(self,s_application_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,16/*autovar*/,it); it=rb_funcall(self,s_application_AmethystParsercb_4AmethystParser,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,16/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,17/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,17/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 bind_aset(bind,18/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,18/*autovar*/);
 bind_aset(bind,19/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos4); ame_setlen(self,oldlen1);
	if(fail1) goto alt2_2;
it=bind_aget(bind,19/*autovar*/);
 bind_aset(bind,20/*_result*/,it); it=bind_aget(bind,20/*_result*/);
 bind_aset(bind,21/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3);it=rb_ary_new3(0);
 bind_aset(bind,21/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
it=bind_aget(bind,21/*_result*/);
 bind_aset(bind,22/*arg*/,it); it=rb_funcall(self,s_application_AmethystParsercb_5AmethystParser,1,bind); 
 bind_aset(bind,23/*_result*/,it); it=bind_aget(bind,23/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(15); bind_aset(bind,2/*o*/,a0);bind_aset(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=bind_aget(bind,0/*c*/);
 bind_aset(bind,1/*c*/,it); it=bind_aget(bind,2/*o*/);
 bind_aset(bind,3/*o*/,it); it=bind_aget(bind,3/*o*/);
 bind_aset(bind,4/*s*/,it);  it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_125); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,5/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_3AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,7/*r*/,it); it=bind_aget(bind,1/*c*/);
 bind_aset(bind,4/*s*/,it);  it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);it=bind_aget(bind,7/*r*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*r*/,it); it=rb_funcall(self,s_args_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_args_AmethystParsercb_2AmethystParser,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
 bind_aset(bind,6/*s*/,it);  it=bind_aget(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,6/*s*/);  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_122); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_new3(0);
 bind_aset(bind,7/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,8/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,9/*r*/,it); it=bind_aget(bind,4/*c*/);
 bind_aset(bind,6/*s*/,it);  it=bind_aget(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,6/*s*/);it=bind_aget(bind,9/*r*/);
 bind_aset(bind,10/*_result*/,it); it=bind_aget(bind,10/*_result*/);
 bind_aset(bind,11/*r*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,12/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_3AmethystParser,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_sequence_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
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
VALUE AmethystParser_choice(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_choice_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*delim*/,it); it=rb_obj_clone(c_52);
 bind_aset(bind,2/*rule*/,it); it=rb_ary_new3(0);
 bind_aset(bind,3/*f*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=bind_aget(bind,2/*rule*/); arg0=it; it=rb_funcall(self,s_applyAmethystParser,1,arg0); FAILTEST(alt1_2);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_2AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,5/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  it=bind_aget(bind,1/*delim*/); arg0=it; it=rb_funcall(self,s_applyAmethystParser,1,arg0); FAILTEST(break1); it=bind_aget(bind,2/*rule*/); arg0=it; it=rb_funcall(self,s_applyAmethystParser,1,arg0); FAILTEST(break1);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_3AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,7/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_4AmethystParser,1,bind); it=bind_aget(bind,3/*f*/);
 bind_aset(bind,8/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 bind_aset(bind,8/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*ary*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_5AmethystParser,1,bind);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_191); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=Amethyst_upper(self ); FAILTEST(fail);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_sequence_AmethystParsercb_1AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_grammar_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_className_AmethystParsercb_1AmethystParser,1,bind); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,5/*it*/,it); it=rb_funcall(self,s_className_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*ors*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_collect_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_eChar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(91):;case UC(93) ... UC(255):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_107);
 bind_aset(bind,0/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*o*/,it);  it=bind_aget(bind,1/*o*/); arg0=it;it=bind_aget(bind,0/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2);
 bind_aset(bind,2/*r*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 bind_aset(bind,5/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_3AmethystParser,1,bind); FAILTEST(alt1_3);it=bind_aget(bind,5/*c*/);
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC(92) ... UC(92):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_108); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);  it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 bind_aset(bind,5/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_3AmethystParser,1,bind); FAILTEST(alt2_2);it=bind_aget(bind,5/*c*/);
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
 bind_aset(bind,7/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_4AmethystParser,1,bind); 
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_109);
 bind_aset(bind,0/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*o*/,it);  it=bind_aget(bind,1/*o*/); arg0=it;it=bind_aget(bind,0/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt2_3);
 bind_aset(bind,2/*r*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 bind_aset(bind,5/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_3AmethystParser,1,bind); FAILTEST(alt2_4);it=bind_aget(bind,5/*c*/);
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

  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_45); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail);
 bind_aset(bind,0/*name*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_46); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 bind_aset(bind,1/*parent*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_funcall(self,s_grammar_AmethystParsercb_1AmethystParser,1,bind);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_47); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rule(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_grammar_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*rules*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_49); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_funcall(self,s_grammar_AmethystParsercb_3AmethystParser,1,bind);
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
  it=rb_obj_clone(c_43); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt2_2); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_2;
 accept2:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_igrammar_AmethystParsercb_1AmethystParser,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(0) ... UC(96):;case UC(98) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(break2); break;case UC(97) ... UC(97):; int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
  it=rb_obj_clone(c_44); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt3_2); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break2;
 accept3:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(break2);
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
VALUE AmethystParser_inlineHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_obj_clone(c_196);
 bind_aset(bind,0/*c*/,it); it=rb_obj_clone(c_197);
 bind_aset(bind,1/*o*/,it); it=bind_aget(bind,0/*c*/);
 bind_aset(bind,2/*c*/,it); it=bind_aget(bind,1/*o*/);
 bind_aset(bind,3/*o*/,it); it=bind_aget(bind,3/*o*/);
 bind_aset(bind,4/*s*/,it);  it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_198); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,5/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_3AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,7/*r*/,it); it=bind_aget(bind,2/*c*/);
 bind_aset(bind,4/*s*/,it);  it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);it=bind_aget(bind,7/*r*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*r*/,it); it=rb_funcall(self,s_args_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_args_AmethystParsercb_2AmethystParser,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
 bind_aset(bind,15/*_result*/,it); it=bind_aget(bind,15/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_key(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_spaces(self ); FAILTEST(fail);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_104); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_className(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*name*/,it); it=rb_funcall(self,s_key_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*vars*/,it); it=rb_funcall(self,s_key_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,2/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_105); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);  it=AmethystParser_name(self ); FAILTEST(alt1_3);
 bind_aset(bind,0/*name*/,it); it=rb_funcall(self,s_key_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,2/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_106); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);  it=AmethystParser_name(self ); FAILTEST(alt1_4);
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
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*autovar*/);
 bind_aset(bind,5/*c*/,it); it=rb_funcall(self,s_modifier_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_194); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_nameFirst(self ); FAILTEST(fail);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_sequence_AmethystParsercb_1AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_grammar_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_className_AmethystParsercb_1AmethystParser,1,bind); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,5/*it*/,it); it=rb_funcall(self,s_className_AmethystParsercb_2AmethystParser,1,bind); 
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
  it=rb_obj_clone(c_188); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_189);
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
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_2);it=rb_obj_clone(c_117);
 bind_aset(bind,0/*c*/,it); it=rb_obj_clone(c_118);
 bind_aset(bind,1/*o*/,it); int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=bind_aget(bind,0/*c*/);
 bind_aset(bind,2/*c*/,it); it=bind_aget(bind,1/*o*/);
 bind_aset(bind,3/*o*/,it); it=bind_aget(bind,2/*c*/);
 bind_aset(bind,4/*c*/,it); it=bind_aget(bind,3/*o*/);
 bind_aset(bind,5/*o*/,it); it=bind_aget(bind,5/*o*/);
 bind_aset(bind,6/*s*/,it);  it=bind_aget(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,6/*s*/);  it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_119); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_ary_new3(0);
 bind_aset(bind,7/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,8/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,9/*r*/,it); it=bind_aget(bind,4/*c*/);
 bind_aset(bind,6/*s*/,it);  it=bind_aget(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,6/*s*/);it=bind_aget(bind,9/*r*/);
 bind_aset(bind,10/*_result*/,it); it=bind_aget(bind,10/*_result*/);
 bind_aset(bind,11/*r*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,12/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_3AmethystParser,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,13/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,13/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
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
  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_121); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2);
 bind_aset(bind,14/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);
 bind_aset(bind,14/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_57); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*expr*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_3);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(126) ... UC(126):;  it=rb_obj_clone(c_58); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_59);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*neg*/,it);  break;case UC(38) ... UC(38):;  it=rb_obj_clone(c_60); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_61);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*neg*/,it);  break;default:;   it=Amethyst_fails(self ); FAILTEST(alt1_3); break;}  it=AmethystParser_prefixed(self ); FAILTEST(alt1_3);
 bind_aset(bind,5/*m*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_4;}
   it=AmethystParser_modifier(self ); FAILTEST(alt2_2);
 bind_aset(bind,6/*from*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_4;}
   it=Amethyst_spaces(self ); FAILTEST(alt2_3); it=rb_obj_clone(c_62); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);int oldpos3=ame_getpos(self);
  it=rb_funcall(self,s_prefixed_AmethystParsercb_3AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(reject1); x=1; goto accept3;  reject1: x=0; accept3: it=Qnil; ame_setpos(self,oldpos3); if (x==0) goto alt2_3;int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
   it=Amethyst_spaces(self ); FAILTEST(alt3_2); it=rb_obj_clone(c_63); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2); 
ame_setcut(self,Qnil);goto accept4;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept4;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_3;
 accept4:;
it=rb_funcall(self,s_prefixed_AmethystParsercb_4AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_4;
 accept2:;
int oldpos5; while(1){oldpos5=ame_getpos(self); int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst__(self ); FAILTEST(alt4_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt4_2); 
ame_setcut(self,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt4_3); 
ame_setcut(self,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos6); goto break1;
 accept5:;
  it=Amethyst_spaces(self ); FAILTEST(break1);unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(42) ... UC(42):;  it=rb_obj_clone(c_64); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_65);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,7/*one*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_5AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it);  break;case UC(43) ... UC(43):;  it=rb_obj_clone(c_66); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_67);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,7/*one*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_5AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it);  break;case UC(58) ... UC(58):;  it=rb_obj_clone(c_68); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 int oldpos8=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
   it=AmethystParser_key(self ); FAILTEST(alt6_2);
 bind_aset(bind,8/*name*/,it);  
ame_setcut(self,Qnil);goto accept7;
alt6_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
   it=AmethystParser_name(self ); FAILTEST(alt6_3);
 bind_aset(bind,8/*name*/,it);  
ame_setcut(self,Qnil);goto accept7;
  alt6_3:  ame_setpos(self,oldpos8); goto alt5_2;
 accept7:;
unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(0) ... UC(90):;case UC(92) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt5_2);it=Qnil;
 bind_aset(bind,9/*append*/,it);  break;case UC(91) ... UC(91):; int oldpos9=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
  it=rb_obj_clone(c_70); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_2);it=Qtrue;
 bind_aset(bind,9/*append*/,it);  
ame_setcut(self,Qnil);goto accept8;
alt7_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
   it=Amethyst_empty(self ); FAILTEST(alt7_3);it=Qnil;
 bind_aset(bind,9/*append*/,it);  
ame_setcut(self,Qnil);goto accept8;
  alt7_3:  ame_setpos(self,oldpos9); goto alt5_2;
 accept8:;
 break;}it=rb_funcall(self,s_prefixed_AmethystParsercb_6AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it);  
ame_setcut(self,Qnil);goto accept6;
alt5_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt5_3);
 bind_aset(bind,10/*e*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_7AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it);  
ame_setcut(self,Qnil);goto accept6;
  alt5_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;case UC(61) ... UC(61):;  it=rb_obj_clone(c_73); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1);
 bind_aset(bind,11/*it*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_8AmethystParser,1,bind);  break;case UC(63) ... UC(63):;  it=rb_obj_clone(c_74); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_funcall(self,s_prefixed_AmethystParsercb_9AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it);  break;case UC(91) ... UC(91):;  it=rb_obj_clone(c_75); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);  it=AmethystParser_expression(self ); FAILTEST(break1);
 bind_aset(bind,11/*it*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_10AmethystParser,1,bind);   it=Amethyst_spaces(self ); FAILTEST(break1); it=rb_obj_clone(c_76); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1); break;default:;   it=Amethyst_fails(self ); FAILTEST(break1); break;} if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,6/*from*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_procargs_AmethystParsercb_1AmethystParser,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*c*/,it); it=rb_funcall(self,s_procargs_AmethystParsercb_2AmethystParser,1,bind); FAILTEST(alt1_2);it=rb_funcall(self,s_procargs_AmethystParsercb_3AmethystParser,1,bind);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_procargs2(self ); FAILTEST(alt1_3); 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,s_procargs_AmethystParsercb_4AmethystParser,1,bind); 
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashAmethystParser1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
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
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,5/*a*/,it); it=rb_funcall(self,s_procargs2_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,4/*_result*/,it);  break;}it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(19);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*s*/,it); it=rb_ary_new3(0);
 bind_aset(bind,1/*n*/,it); unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(33):;case UC(35) ... UC(38):;case UC(40) ... UC(45):;case UC(47) ... UC(95):;case UC(97) ... UC(255):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_131);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_132);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_133);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_134);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_135);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_136);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
   it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_137); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_138);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,1/*n*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_2AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt2_3);
 bind_aset(bind,1/*n*/,it);  
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
 bind_aset(bind,9/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_3AmethystParser,1,bind); it=bind_aget(bind,1/*n*/);
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
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_4AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt1_7);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_7:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC(34) ... UC(34):; int oldpos5=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_139);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_140);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_2);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_141);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_142);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_3: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_143);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_144);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_4: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_145); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_5);it=rb_obj_clone(c_146);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_5AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,11/*autovar*/,it); int oldpos6; while(1){oldpos6=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(0) ... UC(33):;case UC(35) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break1);
 bind_aset(bind,12/*autovar*/,it);  break;case UC(34) ... UC(34):; int oldpos7=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_148); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_2);it=rb_obj_clone(c_149);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
 bind_aset(bind,12/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt6_3);
 bind_aset(bind,12/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;}it=rb_funcall(self,s_application_AmethystParsercb_2AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,11/*autovar*/);
 bind_aset(bind,13/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_6AmethystParser,1,bind); it=rb_funcall(self,s_rubyarg_AmethystParsercb_7AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_5: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt7_2); it=rb_obj_clone(c_150); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_2);it=rb_obj_clone(c_151);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,1/*n*/,it);  
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_6;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_2AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt7_3);
 bind_aset(bind,1/*n*/,it);  
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
 bind_aset(bind,9/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_3AmethystParser,1,bind); it=bind_aget(bind,1/*n*/);
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
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_4AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt5_8);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
  alt5_8:  ame_setpos(self,oldpos5); goto fail;
 accept5:;
 break;case UC(39) ... UC(39):; int oldpos11=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_152);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_153);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_2);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_154);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_155);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt10_3: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_156);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_157);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt10_4: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_158); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt10_5);it=rb_obj_clone(c_159);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,14/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_8AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,15/*autovar*/,it); int oldpos12; while(1){oldpos12=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(0) ... UC(38):;case UC(40) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break2);
 bind_aset(bind,16/*autovar*/,it);  break;case UC(39) ... UC(39):; int oldpos13=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
  it=rb_obj_clone(c_161); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt11_2);it=rb_obj_clone(c_162);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
 bind_aset(bind,16/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt11_3);
 bind_aset(bind,16/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept11;
  alt11_3:  ame_setpos(self,oldpos13); goto break2;
 accept11:;
 break;}it=rb_funcall(self,s_rubyarg_AmethystParsercb_9AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos12=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos12); it=bind_aget(bind,15/*autovar*/);
 bind_aset(bind,17/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_10AmethystParser,1,bind); it=rb_funcall(self,s_rubyarg_AmethystParsercb_7AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt10_5: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos14=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt10_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt12_2); it=rb_obj_clone(c_163); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt12_2);it=rb_obj_clone(c_164);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,1/*n*/,it);  
ame_setcut(self,Qnil);goto accept12;
alt12_2: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt10_6;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_2AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt12_3);
 bind_aset(bind,1/*n*/,it);  
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
 bind_aset(bind,9/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_3AmethystParser,1,bind); it=bind_aget(bind,1/*n*/);
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
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_4AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt10_8);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
  alt10_8:  ame_setpos(self,oldpos11); goto fail;
 accept10:;
 break;case UC(46) ... UC(46):; int oldpos17=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_165);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_166);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_2);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_167);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_168);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_3: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_169);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_170);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_4: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_171); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt15_5);it=rb_obj_clone(c_172);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_5: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_173); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt15_6);it=rb_obj_clone(c_174);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_6: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos18=ame_getpos(self);
alt16_1: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_7;}
   it=Amethyst_spaces(self ); FAILTEST(alt16_2); it=rb_obj_clone(c_175); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt16_2);it=rb_obj_clone(c_176);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,1/*n*/,it);  
ame_setcut(self,Qnil);goto accept16;
alt16_2: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_7;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_2AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt16_3);
 bind_aset(bind,1/*n*/,it);  
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
 bind_aset(bind,9/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_3AmethystParser,1,bind); it=bind_aget(bind,1/*n*/);
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
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_4AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt15_9);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
  alt15_9:  ame_setpos(self,oldpos17); goto fail;
 accept15:;
 break;case UC(96) ... UC(96):; int oldpos21=ame_getpos(self);
alt19_1: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_177); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt19_2);  it=AmethystParser_expression(self ); FAILTEST(alt19_2);
 bind_aset(bind,18/*e*/,it);  it=rb_obj_clone(c_178); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt19_2);it=rb_funcall(self,s_rubyarg_AmethystParsercb_11AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
alt19_2: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_179);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_180);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
alt19_3: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_181);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_182);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
alt19_4: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_183);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_184);
 bind_aset(bind,3/*o*/,it);  it=bind_aget(bind,3/*o*/); arg0=it;it=bind_aget(bind,2/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_5);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
alt19_5: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos22=ame_getpos(self);
alt20_1: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt20_2); it=rb_obj_clone(c_185); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt20_2);it=rb_obj_clone(c_186);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,1/*n*/,it);  
ame_setcut(self,Qnil);goto accept20;
alt20_2: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_6;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_2AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt20_3);
 bind_aset(bind,1/*n*/,it);  
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
 bind_aset(bind,9/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_3AmethystParser,1,bind); it=bind_aget(bind,1/*n*/);
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
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_4AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt19_8);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
  alt19_8:  ame_setpos(self,oldpos21); goto fail;
 accept19:;
 break;}it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_rule_AmethystParsercb_1AmethystParser,1,bind); it=rb_funcall(self,s_rule_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,0/*bnding*/,it);   it=AmethystParser_name(self ); FAILTEST(fail);
 bind_aset(bind,1/*name*/,it);   it=AmethystParser_ruleargs(self ); FAILTEST(fail);
 bind_aset(bind,2/*args*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_50); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_expression(self ); FAILTEST(fail);
 bind_aset(bind,3/*body*/,it); it=rb_funcall(self,s_rule_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,3/*body*/,it); it=rb_funcall(self,s_rule_AmethystParsercb_4AmethystParser,1,bind); 
 bind_aset(bind,4/*locals*/,it); it=rb_funcall(self,s_rule_AmethystParsercb_5AmethystParser,1,bind); it=rb_funcall(self,s_rule_AmethystParsercb_6AmethystParser,1,bind);
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(23);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_obj_clone(c_110);
 bind_aset(bind,0/*c*/,it); it=rb_obj_clone(c_111);
 bind_aset(bind,1/*o*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*c*/);
 bind_aset(bind,2/*c*/,it); it=bind_aget(bind,1/*o*/);
 bind_aset(bind,3/*o*/,it); it=bind_aget(bind,2/*c*/);
 bind_aset(bind,4/*c*/,it); it=bind_aget(bind,3/*o*/);
 bind_aset(bind,5/*o*/,it); it=bind_aget(bind,5/*o*/);
 bind_aset(bind,6/*s*/,it);  it=bind_aget(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,6/*s*/);  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_112); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_new3(0);
 bind_aset(bind,7/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,8/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,9/*r*/,it); it=bind_aget(bind,4/*c*/);
 bind_aset(bind,6/*s*/,it);  it=bind_aget(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,6/*s*/);it=bind_aget(bind,9/*r*/);
 bind_aset(bind,10/*_result*/,it); it=bind_aget(bind,10/*_result*/);
 bind_aset(bind,11/*r*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,12/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_3AmethystParser,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
 bind_aset(bind,18/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_4AmethystParser,1,bind); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,18/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 bind_aset(bind,19/*autovar*/,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,bind_aget(bind,19/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_addargs(self ); FAILTEST(pass4);
 bind_aset(bind,20/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;
it=bind_aget(bind,20/*autovar*/);
 bind_aset(bind,21/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto fail;
it=bind_aget(bind,21/*autovar*/);
 bind_aset(bind,22/*_result*/,it); it=bind_aget(bind,22/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nr(self ); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_sequence_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*ary*/,it); it=rb_funcall(self,s_sequence_AmethystParsercb_2AmethystParser,1,bind);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*s*/,it); it=rb_ary_new3(0);
 bind_aset(bind,1/*x*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystParser_className(self ); FAILTEST(alt1_2);
 bind_aset(bind,2/*cls*/,it); it=rb_funcall(self,s_term_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_3); it=rb_obj_clone(c_80); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3); it=rb_obj_clone(c_81); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);  it=AmethystParser_expression(self ); FAILTEST(alt1_3);
 bind_aset(bind,4/*expr*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_3); it=rb_obj_clone(c_82); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_funcall(self,s_term_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_4); it=rb_obj_clone(c_83); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=rb_funcall(self,s_term_AmethystParsercb_3AmethystParser,1,bind); 
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
   it=Amethyst_spaces(self ); FAILTEST(alt1_7);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(44):;case UC(46) ... UC(255):;  it=rb_obj_clone(c_84); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_7);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_7);
 bind_aset(bind,1/*x*/,it);  break;case UC(45) ... UC(45):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_7;}
  it=rb_obj_clone(c_85); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);  it=AmethystParser_atomicHostExpr(self ); FAILTEST(alt2_2);
 bind_aset(bind,1/*x*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_7;}
  it=rb_obj_clone(c_86); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt2_3);
 bind_aset(bind,1/*x*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_7;
 accept2:;
 break;}it=rb_funcall(self,s_term_AmethystParsercb_5AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_8); it=rb_obj_clone(c_87); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_8);int oldpos3; while(1){oldpos3=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC(0) ... UC(33):;case UC(35) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break1);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_6AmethystParser,1,bind);  break;case UC(34) ... UC(34):; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_88); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt3_3);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_6AmethystParser,1,bind);  
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto break1;
 accept3:;
 break;} if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=rb_funcall(self,s_term_AmethystParsercb_7AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_9); it=rb_obj_clone(c_89); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_9);int oldpos5; while(1){oldpos5=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC(0) ... UC(38):;case UC(40) ... UC(255):;   it=AmethystParser_eChar(self ); FAILTEST(break2);
 bind_aset(bind,7/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_8AmethystParser,1,bind);  break;case UC(39) ... UC(39):; int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
  it=rb_obj_clone(c_90); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt4_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt4_3);
 bind_aset(bind,7/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_8AmethystParser,1,bind);  
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos6); goto break2;
 accept4:;
 break;} if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,s_term_AmethystParsercb_9AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_number(self ); FAILTEST(alt1_10);
 bind_aset(bind,5/*it*/,it); it=rb_funcall(self,s_term_AmethystParsercb_10AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_91);
 bind_aset(bind,8/*s*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_11);it=bind_aget(bind,8/*s*/);
 bind_aset(bind,9/*s*/,it);  it=bind_aget(bind,9/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_11);it=bind_aget(bind,9/*s*/);int oldpos7; while(1){oldpos7=ame_getpos(self); int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
 it=rb_obj_clone(c_92);
 bind_aset(bind,8/*s*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt5_2);it=rb_obj_clone(c_93);
 bind_aset(bind,9/*s*/,it);  it=rb_obj_clone(c_94); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
   it=AmethystParser_eChar(self ); FAILTEST(alt5_3);
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_11AmethystParser,1,bind);  
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto break3;
 accept5:;
 if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=rb_funcall(self,s_term_AmethystParsercb_12AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_12); it=rb_obj_clone(c_95); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);  it=AmethystParser_expression(self ); FAILTEST(alt1_12);
 bind_aset(bind,1/*x*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_12); it=rb_obj_clone(c_96); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC(0) ... UC(90):;case UC(92) ... UC(255):;   it=Amethyst_empty(self ); FAILTEST(alt1_12);it=bind_aget(bind,1/*x*/);
 bind_aset(bind,3/*_result*/,it);  break;case UC(91) ... UC(91):; int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_12;}
  it=rb_obj_clone(c_97); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_2);it=bind_aget(bind,1/*x*/);
 bind_aset(bind,11/*ors*/,it); it=rb_funcall(self,s_term_AmethystParsercb_13AmethystParser,1,bind); 
 bind_aset(bind,12/*_result*/,it); it=bind_aget(bind,12/*_result*/);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_12;}
   it=Amethyst_empty(self ); FAILTEST(alt6_3);it=bind_aget(bind,1/*x*/);
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos9); goto alt1_12;
 accept6:;
 break;} 
ame_setcut(self,Qnil);goto accept1;
  alt1_12:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }VALUE AmethystParser_choice_lambda1(VALUE self,VALUE bind){VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;
 it=rb_obj_clone(c_51); arg0=it; it=Amethyst_token(self ,arg0); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_100=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_100);
c_101=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_101);
c_104=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_104);
c_105=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_105);
c_106=rb_str_new2("@@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_106);
c_107=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_107);
c_108=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_108);
c_109=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_109);
c_110=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_110);
c_111=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_111);
c_112=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_112);
c_116=rb_const_get(rb_cObject, rb_intern("Args"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_116);
c_117=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_117);
c_118=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_118);
c_119=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_119);
c_121=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_121);
c_122=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_122);
c_125=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_125);
c_127=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_127);
c_131=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_131);
c_132=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_132);
c_133=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_133);
c_134=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_134);
c_135=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_135);
c_136=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_136);
c_137=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_137);
c_138=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_138);
c_139=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_139);
c_140=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_140);
c_141=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_141);
c_142=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_142);
c_143=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_143);
c_144=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_144);
c_145=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_145);
c_146=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_146);
c_148=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_148);
c_149=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_149);
c_150=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_150);
c_151=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_151);
c_152=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_152);
c_153=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_153);
c_154=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_154);
c_155=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_155);
c_156=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_156);
c_157=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_157);
c_158=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_158);
c_159=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_159);
c_161=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_161);
c_162=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_162);
c_163=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_163);
c_164=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_164);
c_165=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_165);
c_166=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_166);
c_167=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_167);
c_168=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_168);
c_169=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_169);
c_170=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_170);
c_171=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_171);
c_172=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_172);
c_173=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_173);
c_174=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_174);
c_175=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_175);
c_176=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_176);
c_177=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_177);
c_178=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_178);
c_179=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_179);
c_180=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_180);
c_181=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_181);
c_182=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_182);
c_183=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_183);
c_184=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_184);
c_185=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_185);
c_186=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_186);
c_188=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_188);
c_189=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_189);
c_191=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_191);
c_194=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_194);
c_196=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_196);
c_197=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_197);
c_198=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_198);
c_43=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_43);
c_44=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_44);
c_45=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_45);
c_46=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_46);
c_47=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_47);
c_49=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_49);
c_50=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_50);
c_51=rb_str_new2("|");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_51);
c_52=rb_str_new2("sequence");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_52);
c_57=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_57);
c_58=rb_str_new2("~");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_58);
c_59=rb_str_new2("~");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_59);
c_60=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_60);
c_61=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_61);
c_62=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_62);
c_63=rb_str_new2(".");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_63);
c_64=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_64);
c_65=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_65);
c_66=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_66);
c_67=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_67);
c_68=rb_str_new2(":");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_68);
c_70=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_70);
c_73=rb_str_new2("=>");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_73);
c_74=rb_str_new2("?");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_74);
c_75=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_75);
c_76=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_76);
c_80=rb_str_new2("nested");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_80);
c_81=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_81);
c_82=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_82);
c_83=rb_str_new2("break");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_83);
c_84=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_84);
c_85=rb_str_new2("->");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_85);
c_86=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_86);
c_87=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_87);
c_88=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_88);
c_89=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_89);
c_90=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_90);
c_91=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_91);
c_92=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_92);
c_93=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_93);
c_94=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_94);
c_95=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_95);
c_96=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_96);
c_97=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_97);
c_98=rb_str_new2("::");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_98);
c_99=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_99);
s__args_AmethystParsercb_1AmethystParser=rb_intern("_args_AmethystParsercb_1");
s_addargs_AmethystParsercb_1AmethystParser=rb_intern("addargs_AmethystParsercb_1");
s_addargs_AmethystParsercb_2AmethystParser=rb_intern("addargs_AmethystParsercb_2");
s_addargs_AmethystParsercb_3AmethystParser=rb_intern("addargs_AmethystParsercb_3");
s_application_AmethystParsercb_1AmethystParser=rb_intern("application_AmethystParsercb_1");
s_application_AmethystParsercb_2AmethystParser=rb_intern("application_AmethystParsercb_2");
s_application_AmethystParsercb_3AmethystParser=rb_intern("application_AmethystParsercb_3");
s_application_AmethystParsercb_4AmethystParser=rb_intern("application_AmethystParsercb_4");
s_application_AmethystParsercb_5AmethystParser=rb_intern("application_AmethystParsercb_5");
s_applyAmethystParser=rb_intern("apply");
s_args_AmethystParsercb_1AmethystParser=rb_intern("args_AmethystParsercb_1");
s_args_AmethystParsercb_2AmethystParser=rb_intern("args_AmethystParsercb_2");
s_atomicHostExpr_AmethystParsercb_1AmethystParser=rb_intern("atomicHostExpr_AmethystParsercb_1");
s_atomicHostExpr_AmethystParsercb_2AmethystParser=rb_intern("atomicHostExpr_AmethystParsercb_2");
s_choice_AmethystParsercb_1AmethystParser=rb_intern("choice_AmethystParsercb_1");
s_choice_AmethystParsercb_2AmethystParser=rb_intern("choice_AmethystParsercb_2");
s_choice_AmethystParsercb_3AmethystParser=rb_intern("choice_AmethystParsercb_3");
s_choice_AmethystParsercb_4AmethystParser=rb_intern("choice_AmethystParsercb_4");
s_choice_AmethystParsercb_5AmethystParser=rb_intern("choice_AmethystParsercb_5");
s_className_AmethystParsercb_1AmethystParser=rb_intern("className_AmethystParsercb_1");
s_className_AmethystParsercb_2AmethystParser=rb_intern("className_AmethystParsercb_2");
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
s_prefixed_AmethystParsercb_10AmethystParser=rb_intern("prefixed_AmethystParsercb_10");
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
s_rubyarg_AmethystParsercb_10AmethystParser=rb_intern("rubyarg_AmethystParsercb_10");
s_rubyarg_AmethystParsercb_11AmethystParser=rb_intern("rubyarg_AmethystParsercb_11");
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
s_ruleargs_AmethystParsercb_4AmethystParser=rb_intern("ruleargs_AmethystParsercb_4");
s_sequence_AmethystParsercb_1AmethystParser=rb_intern("sequence_AmethystParsercb_1");
s_sequence_AmethystParsercb_2AmethystParser=rb_intern("sequence_AmethystParsercb_2");
s_sizeAmethystParser=rb_intern("size");
s_term_AmethystParsercb_10AmethystParser=rb_intern("term_AmethystParsercb_10");
s_term_AmethystParsercb_11AmethystParser=rb_intern("term_AmethystParsercb_11");
s_term_AmethystParsercb_12AmethystParser=rb_intern("term_AmethystParsercb_12");
s_term_AmethystParsercb_13AmethystParser=rb_intern("term_AmethystParsercb_13");
s_term_AmethystParsercb_1AmethystParser=rb_intern("term_AmethystParsercb_1");
s_term_AmethystParsercb_2AmethystParser=rb_intern("term_AmethystParsercb_2");
s_term_AmethystParsercb_3AmethystParser=rb_intern("term_AmethystParsercb_3");
s_term_AmethystParsercb_4AmethystParser=rb_intern("term_AmethystParsercb_4");
s_term_AmethystParsercb_5AmethystParser=rb_intern("term_AmethystParsercb_5");
s_term_AmethystParsercb_6AmethystParser=rb_intern("term_AmethystParsercb_6");
s_term_AmethystParsercb_7AmethystParser=rb_intern("term_AmethystParsercb_7");
s_term_AmethystParsercb_8AmethystParser=rb_intern("term_AmethystParsercb_8");
s_term_AmethystParsercb_9AmethystParser=rb_intern("term_AmethystParsercb_9");
switchhashAmethystParser1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashAmethystParser1);
rb_define_method(cls_AmethystParser,"AmethystParser_choice_lambda1",AmethystParser_choice_lambda1,1);
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
 rb_eval_string("testversionparser('52da65fdce8cb7ed2cc3beca81e04637')");}
