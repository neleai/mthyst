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
VALUE c_100;
VALUE c_102;
VALUE c_104;
VALUE c_105;
VALUE c_109;
VALUE c_110;
VALUE c_111;
VALUE c_112;
VALUE c_113;
VALUE c_114;
VALUE c_115;
VALUE c_116;
VALUE c_117;
VALUE c_118;
VALUE c_119;
VALUE c_120;
VALUE c_121;
VALUE c_122;
VALUE c_123;
VALUE c_124;
VALUE c_125;
VALUE c_126;
VALUE c_127;
VALUE c_128;
VALUE c_129;
VALUE c_130;
VALUE c_131;
VALUE c_132;
VALUE c_133;
VALUE c_134;
VALUE c_135;
VALUE c_136;
VALUE c_138;
VALUE c_139;
VALUE c_140;
VALUE c_141;
VALUE c_142;
VALUE c_143;
VALUE c_144;
VALUE c_145;
VALUE c_146;
VALUE c_147;
VALUE c_148;
VALUE c_149;
VALUE c_150;
VALUE c_151;
VALUE c_152;
VALUE c_153;
VALUE c_154;
VALUE c_155;
VALUE c_157;
VALUE c_158;
VALUE c_159;
VALUE c_160;
VALUE c_161;
VALUE c_162;
VALUE c_163;
VALUE c_164;
VALUE c_165;
VALUE c_166;
VALUE c_167;
VALUE c_168;
VALUE c_169;
VALUE c_170;
VALUE c_171;
VALUE c_172;
VALUE c_173;
VALUE c_174;
VALUE c_175;
VALUE c_176;
VALUE c_177;
VALUE c_178;
VALUE c_179;
VALUE c_180;
VALUE c_181;
VALUE c_182;
VALUE c_183;
VALUE c_184;
VALUE c_185;
VALUE c_186;
VALUE c_187;
VALUE c_188;
VALUE c_189;
VALUE c_190;
VALUE c_191;
VALUE c_192;
VALUE c_193;
VALUE c_194;
VALUE c_196;
VALUE c_198;
VALUE c_201;
VALUE c_202;
VALUE c_204;
VALUE c_206;
VALUE c_207;
VALUE c_208;
VALUE c_209;
VALUE c_210;
VALUE c_211;
VALUE c_212;
VALUE c_213;
VALUE c_214;
VALUE c_215;
VALUE c_216;
VALUE c_217;
VALUE c_218;
VALUE c_219;
VALUE c_220;
VALUE c_222;
VALUE c_225;
VALUE c_226;
VALUE c_227;
VALUE c_228;
VALUE c_229;
VALUE c_232;
VALUE c_233;
VALUE c_41;
VALUE c_42;
VALUE c_44;
VALUE c_46;
VALUE c_48;
VALUE c_50;
VALUE c_51;
VALUE c_52;
VALUE c_54;
VALUE c_56;
VALUE c_61;
VALUE c_62;
VALUE c_63;
VALUE c_64;
VALUE c_65;
VALUE c_66;
VALUE c_67;
VALUE c_68;
VALUE c_69;
VALUE c_70;
VALUE c_71;
VALUE c_72;
VALUE c_73;
VALUE c_74;
VALUE c_75;
VALUE c_76;
VALUE c_77;
VALUE c_78;
VALUE c_82;
VALUE c_84;
VALUE c_85;
VALUE c_87;
VALUE c_88;
VALUE c_90;
VALUE c_92;
VALUE c_93;
VALUE c_94;
VALUE c_95;
VALUE c_96;
VALUE c_97;
VALUE c_99;
VALUE s__args_AmethystParsercb_1AmethystParser;
VALUE s_addargs_AmethystParsercb_1AmethystParser;
VALUE s_addargs_AmethystParsercb_2AmethystParser;
VALUE s_addargs_AmethystParsercb_3AmethystParser;
VALUE s_application_AmethystParsercb_1AmethystParser;
VALUE s_application_AmethystParsercb_2AmethystParser;
VALUE s_argsOpt_AmethystParsercb_1AmethystParser;
VALUE s_argsOpt_AmethystParsercb_2AmethystParser;
VALUE s_argsOpt_AmethystParsercb_3AmethystParser;
VALUE s_args_AmethystParsercb_1AmethystParser;
VALUE s_args_AmethystParsercb_2AmethystParser;
VALUE s_args_AmethystParsercb_3AmethystParser;
VALUE s_atomicHostExpr_AmethystParsercb_1AmethystParser;
VALUE s_atomicHostExpr_AmethystParsercb_2AmethystParser;
VALUE s_choice_AmethystParsercb_1AmethystParser;
VALUE s_collect_AmethystParsercb_1AmethystParser;
VALUE s_eChar_AmethystParsercb_1AmethystParser;
VALUE s_eChar_AmethystParsercb_2AmethystParser;
VALUE s_eChar_AmethystParsercb_3AmethystParser;
VALUE s_eChar_AmethystParsercb_4AmethystParser;
VALUE s_grammar_AmethystParsercb_1AmethystParser;
VALUE s_grammar_AmethystParsercb_2AmethystParser;
VALUE s_igrammar_AmethystParsercb_1AmethystParser;
VALUE s_igrammar_AmethystParsercb_2AmethystParser;
VALUE s_igrammar_AmethystParsercb_3AmethystParser;
VALUE s_inlineHostExpr_AmethystParsercb_1AmethystParser;
VALUE s_inlineHostExpr_AmethystParsercb_2AmethystParser;
VALUE s_inlineHostExpr_AmethystParsercb_3AmethystParser;
VALUE s_key_AmethystParsercb_1AmethystParser;
VALUE s_key_AmethystParsercb_2AmethystParser;
VALUE s_key_AmethystParsercb_3AmethystParser;
VALUE s_key_AmethystParsercb_4AmethystParser;
VALUE s_modifier_AmethystParsercb_1AmethystParser;
VALUE s_modifier_AmethystParsercb_2AmethystParser;
VALUE s_modifier_AmethystParsercb_3AmethystParser;
VALUE s_name_AmethystParsercb_1AmethystParser;
VALUE s_name_AmethystParsercb_2AmethystParser;
VALUE s_name_AmethystParsercb_3AmethystParser;
VALUE s_prefixed_AmethystParsercb_10AmethystParser;
VALUE s_prefixed_AmethystParsercb_1AmethystParser;
VALUE s_prefixed_AmethystParsercb_2AmethystParser;
VALUE s_prefixed_AmethystParsercb_3AmethystParser;
VALUE s_prefixed_AmethystParsercb_4AmethystParser;
VALUE s_prefixed_AmethystParsercb_5AmethystParser;
VALUE s_prefixed_AmethystParsercb_6AmethystParser;
VALUE s_prefixed_AmethystParsercb_7AmethystParser;
VALUE s_prefixed_AmethystParsercb_8AmethystParser;
VALUE s_prefixed_AmethystParsercb_9AmethystParser;
VALUE s_procargs2_AmethystParsercb_1AmethystParser;
VALUE s_procargs2_AmethystParsercb_2AmethystParser;
VALUE s_procargs_AmethystParsercb_1AmethystParser;
VALUE s_procargs_AmethystParsercb_2AmethystParser;
VALUE s_procargs_AmethystParsercb_3AmethystParser;
VALUE s_procargs_AmethystParsercb_4AmethystParser;
VALUE s_rubyarg_AmethystParsercb_10AmethystParser;
VALUE s_rubyarg_AmethystParsercb_11AmethystParser;
VALUE s_rubyarg_AmethystParsercb_12AmethystParser;
VALUE s_rubyarg_AmethystParsercb_1AmethystParser;
VALUE s_rubyarg_AmethystParsercb_2AmethystParser;
VALUE s_rubyarg_AmethystParsercb_3AmethystParser;
VALUE s_rubyarg_AmethystParsercb_4AmethystParser;
VALUE s_rubyarg_AmethystParsercb_5AmethystParser;
VALUE s_rubyarg_AmethystParsercb_6AmethystParser;
VALUE s_rubyarg_AmethystParsercb_7AmethystParser;
VALUE s_rubyarg_AmethystParsercb_8AmethystParser;
VALUE s_rubyarg_AmethystParsercb_9AmethystParser;
VALUE s_rule_AmethystParsercb_1AmethystParser;
VALUE s_rule_AmethystParsercb_2AmethystParser;
VALUE s_rule_AmethystParsercb_3AmethystParser;
VALUE s_rule_AmethystParsercb_4AmethystParser;
VALUE s_rule_AmethystParsercb_5AmethystParser;
VALUE s_rule_AmethystParsercb_6AmethystParser;
VALUE s_ruleargs_AmethystParsercb_1AmethystParser;
VALUE s_ruleargs_AmethystParsercb_2AmethystParser;
VALUE s_ruleargs_AmethystParsercb_3AmethystParser;
VALUE s_sequence_AmethystParsercb_1AmethystParser;
VALUE s_sizeAmethystParser;
VALUE s_term_AmethystParsercb_10AmethystParser;
VALUE s_term_AmethystParsercb_11AmethystParser;
VALUE s_term_AmethystParsercb_12AmethystParser;
VALUE s_term_AmethystParsercb_13AmethystParser;
VALUE s_term_AmethystParsercb_1AmethystParser;
VALUE s_term_AmethystParsercb_2AmethystParser;
VALUE s_term_AmethystParsercb_3AmethystParser;
VALUE s_term_AmethystParsercb_4AmethystParser;
VALUE s_term_AmethystParsercb_5AmethystParser;
VALUE s_term_AmethystParsercb_6AmethystParser;
VALUE s_term_AmethystParsercb_7AmethystParser;
VALUE s_term_AmethystParsercb_8AmethystParser;
VALUE s_term_AmethystParsercb_9AmethystParser;
VALUE switchhashAmethystParser1;
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(7); bind_aset(bind,0/*o*/,a0);bind_aset(bind,5/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=bind_aget(bind,0/*o*/);
 bind_aset(bind,1/*s*/,it);  it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_198); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/);
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
 bind_aset(bind,0/*result*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=c_196; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break1);
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
VALUE AmethystParser_application(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(17);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_name(self ); FAILTEST(fail);
 bind_aset(bind,0/*autovar*/,it); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,1/*autovar*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/);
 bind_aset(bind,2/*klas*/,it);  it=rb_obj_clone(c_97); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 bind_aset(bind,3/*rule*/,it); it=rb_funcall(self,s_application_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,3/*rule*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/);
 bind_aset(bind,3/*rule*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('\''):;case UC(')') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,4/*_result*/,it);  break;case UC('(') ... UC('('):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_99); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);  it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_100); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_ary_new3(0);
 bind_aset(bind,5/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_args_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,7/*r*/,it);  it=rb_obj_clone(c_102); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,7/*r*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*r*/,it); it=rb_funcall(self,s_args_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_args_AmethystParsercb_3AmethystParser,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3);it=rb_ary_new3(0);
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;}it=bind_aget(bind,4/*_result*/);
 bind_aset(bind,15/*arg*/,it); it=rb_funcall(self,s_application_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,16/*_result*/,it); it=bind_aget(bind,16/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(15); bind_aset(bind,2/*o*/,a0);bind_aset(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=bind_aget(bind,0/*c*/);
 bind_aset(bind,1/*c*/,it); it=bind_aget(bind,2/*o*/);
 bind_aset(bind,3/*o*/,it); it=bind_aget(bind,3/*o*/);
 bind_aset(bind,4/*s*/,it);  it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_48); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,5/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_args_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,7/*r*/,it); it=bind_aget(bind,1/*c*/);
 bind_aset(bind,4/*s*/,it);  it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);it=bind_aget(bind,7/*r*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
 bind_aset(bind,9/*r*/,it); it=rb_funcall(self,s_args_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_args_AmethystParsercb_3AmethystParser,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
 bind_aset(bind,6/*s*/,it);  it=bind_aget(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,6/*s*/);  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_56); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_new3(0);
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
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
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
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_1AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_obj_clone(c_82); arg0=it; it=Amethyst_token(self ,arg0); FAILTEST(break1);  it=AmethystParser_sequence(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_2AmethystParser,1,bind); it=bind_aget(bind,0/*f*/);
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 bind_aset(bind,5/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*ary*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_1AmethystParser,1,bind);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_90); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=Amethyst_upper(self ); FAILTEST(fail);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_1AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_2AmethystParser,1,bind); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,5/*it*/,it); it=rb_funcall(self,s_name_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*ors*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_collect_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_eChar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('['):;case UC(']') ... UC('\377'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_92);
 bind_aset(bind,0/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*o*/,it);  it=bind_aget(bind,1/*o*/); arg0=it;it=rb_obj_clone(c_93); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2);
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
 break;case UC('\\') ... UC('\\'):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_94); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);  it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 bind_aset(bind,5/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_3AmethystParser,1,bind); FAILTEST(alt2_2);it=bind_aget(bind,5/*c*/);
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
 bind_aset(bind,7/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_4AmethystParser,1,bind); 
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_95);
 bind_aset(bind,0/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*o*/,it);  it=bind_aget(bind,1/*o*/); arg0=it;it=rb_obj_clone(c_96); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt2_3);
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

  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_50); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail);
 bind_aset(bind,0/*name*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_51); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 bind_aset(bind,1/*parent*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_funcall(self,s_grammar_AmethystParsercb_1AmethystParser,1,bind);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_52); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rule(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*rules*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_54); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_funcall(self,s_grammar_AmethystParsercb_2AmethystParser,1,bind);
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=rb_ary_new3(0);
 bind_aset(bind,1/*autovar*/,it); unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('`'):;case UC('b') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(alt1_2); break;case UC('a') ... UC('a'):; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
  it=rb_obj_clone(c_232); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt2_2); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_2;
 accept2:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_procargs2_AmethystParsercb_1AmethystParser,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('\000') ... UC('`'):;case UC('b') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(break2); break;case UC('a') ... UC('a'):; int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
  it=rb_obj_clone(c_233); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt3_2); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break2;
 accept3:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(break2);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_igrammar_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,1/*autovar*/);
 bind_aset(bind,4/*it*/,it); it=rb_funcall(self,s_igrammar_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,5/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_grammar(self ); FAILTEST(alt1_3);
 bind_aset(bind,5/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,s_igrammar_AmethystParsercb_3AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,6/*a*/,it); it=bind_aget(bind,6/*a*/);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_inlineHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_obj_clone(c_41); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_42); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*r*/,it);  it=rb_obj_clone(c_44); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,2/*r*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_3AmethystParser,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
  it=rb_obj_clone(c_206); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_className(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*name*/,it); it=rb_funcall(self,s_key_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*vars*/,it); it=rb_funcall(self,s_key_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,2/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_207); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);  it=AmethystParser_name(self ); FAILTEST(alt1_3);
 bind_aset(bind,0/*name*/,it); it=rb_funcall(self,s_key_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,2/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_208); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);  it=AmethystParser_name(self ); FAILTEST(alt1_4);
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
 bind_aset(bind,0/*autovar*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_46); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_nameFirst(self ); FAILTEST(fail);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_1AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_2AmethystParser,1,bind); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,5/*it*/,it); it=rb_funcall(self,s_name_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nameFirst(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('^'):;case UC('`') ... UC('\377'):;   it=Amethyst_letter(self ); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it);  break;case UC('_') ... UC('_'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_letter(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_104); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_105);
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
   it=AmethystParser_name(self ); FAILTEST(alt1_2);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('\''):;case UC(')') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(alt1_2); break;case UC('(') ... UC('('):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
  it=rb_obj_clone(c_84); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);  it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_85); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*r*/,it);  it=rb_obj_clone(c_87); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,2/*r*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_3AmethystParser,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
 break;}  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_88); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2);
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
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_209); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*expr*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_3);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('~') ... UC('~'):;  it=rb_obj_clone(c_210); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_211);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,4/*neg*/,it);  break;case UC('&') ... UC('&'):;  it=rb_obj_clone(c_212); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_213);
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
   it=Amethyst_spaces(self ); FAILTEST(alt2_3); it=rb_obj_clone(c_214); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);int oldpos3=ame_getpos(self);
  it=rb_funcall(self,s_prefixed_AmethystParsercb_3AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(reject1); x=1; goto accept3;  reject1: x=0; accept3: it=Qnil; ame_setpos(self,oldpos3); if (x==0) goto alt2_3;int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
   it=Amethyst_spaces(self ); FAILTEST(alt3_2); it=rb_obj_clone(c_215); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2); 
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
  it=Amethyst_spaces(self ); FAILTEST(break1);unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('*') ... UC('*'):;  it=rb_obj_clone(c_216); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_217);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,7/*one*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_5AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it);  break;case UC('+') ... UC('+'):;  it=rb_obj_clone(c_218); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_219);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
 bind_aset(bind,7/*one*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_5AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it);  break;case UC(':') ... UC(':'):;  it=rb_obj_clone(c_220); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);int oldpos7=ame_getpos(self);
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
unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC('\000') ... UC('Z'):;case UC('\\') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(alt5_2);it=Qnil;
 bind_aset(bind,9/*append*/,it);  break;case UC('[') ... UC('['):; int oldpos9=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_2;}
  it=rb_obj_clone(c_222); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_2);it=Qtrue;
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
 break;case UC('=') ... UC('='):;  it=rb_obj_clone(c_225); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1);
 bind_aset(bind,11/*it*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_8AmethystParser,1,bind);  break;case UC('?') ... UC('?'):;  it=rb_obj_clone(c_226); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_funcall(self,s_prefixed_AmethystParsercb_9AmethystParser,1,bind); 
 bind_aset(bind,6/*from*/,it);  break;case UC('[') ... UC('['):;  it=rb_obj_clone(c_227); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);  it=AmethystParser_expression(self ); FAILTEST(break1);
 bind_aset(bind,11/*it*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_10AmethystParser,1,bind);   it=Amethyst_spaces(self ); FAILTEST(break1); it=rb_obj_clone(c_228); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1); break;default:;   it=Amethyst_fails(self ); FAILTEST(break1); break;} if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,6/*from*/);
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
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_procargs2_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,1/*autovar*/);
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
 bind_aset(bind,5/*a*/,it); it=rb_funcall(self,s_procargs2_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,5/*a*/,it); it=rb_funcall(self,s_procargs2_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,4/*_result*/,it);  break;}it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(19);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*s*/,it); it=rb_ary_new3(0);
 bind_aset(bind,1/*n*/,it); unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('!'):;case UC('#') ... UC('&'):;case UC('(') ... UC('-'):;case UC('/') ... UC('_'):;case UC('a') ... UC('\377'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_109);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_110);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_111); arg0=it;it=rb_obj_clone(c_112); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_113);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_114);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_115); arg0=it;it=rb_obj_clone(c_116); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_117);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_118);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_119); arg0=it;it=rb_obj_clone(c_120); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_5;}
   it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_121); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_122);
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
 break;case UC('\"') ... UC('\"'):; int oldpos5=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_123);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_124);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_125); arg0=it;it=rb_obj_clone(c_126); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_2);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_127);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_128);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_129); arg0=it;it=rb_obj_clone(c_130); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_3: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_131);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_132);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_133); arg0=it;it=rb_obj_clone(c_134); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_4: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_135); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_5);it=rb_obj_clone(c_136);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_5AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,11/*autovar*/,it); int oldpos6; while(1){oldpos6=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('\000') ... UC('!'):;case UC('#') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break1);
 bind_aset(bind,12/*autovar*/,it);  break;case UC('\"') ... UC('\"'):; int oldpos7=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_138); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_2);it=rb_obj_clone(c_139);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
 bind_aset(bind,12/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos7);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt6_3);
 bind_aset(bind,12/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;}it=rb_funcall(self,s_rubyarg_AmethystParsercb_6AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,11/*autovar*/);
 bind_aset(bind,13/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_7AmethystParser,1,bind); it=rb_funcall(self,s_rubyarg_AmethystParsercb_8AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept5;
alt5_5: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt5_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt7_2); it=rb_obj_clone(c_140); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_2);it=rb_obj_clone(c_141);
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
 break;case UC('\'') ... UC('\''):; int oldpos11=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_142);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_143);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_144); arg0=it;it=rb_obj_clone(c_145); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_2);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_146);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_147);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_148); arg0=it;it=rb_obj_clone(c_149); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt10_3: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_150);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_151);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_152); arg0=it;it=rb_obj_clone(c_153); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt10_4: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_154); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt10_5);it=rb_obj_clone(c_155);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,14/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_9AmethystParser,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,15/*autovar*/,it); int oldpos12; while(1){oldpos12=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC('\000') ... UC('&'):;case UC('(') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break2);
 bind_aset(bind,16/*autovar*/,it);  break;case UC('\'') ... UC('\''):; int oldpos13=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
  it=rb_obj_clone(c_157); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt11_2);it=rb_obj_clone(c_158);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
 bind_aset(bind,16/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt11_3);
 bind_aset(bind,16/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept11;
  alt11_3:  ame_setpos(self,oldpos13); goto break2;
 accept11:;
 break;}it=rb_funcall(self,s_rubyarg_AmethystParsercb_10AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos12=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos12); it=bind_aget(bind,15/*autovar*/);
 bind_aset(bind,17/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_11AmethystParser,1,bind); it=rb_funcall(self,s_rubyarg_AmethystParsercb_8AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept10;
alt10_5: ame_setpos(self,oldpos11);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos14=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos14);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt10_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt12_2); it=rb_obj_clone(c_159); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt12_2);it=rb_obj_clone(c_160);
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
 break;case UC('.') ... UC('.'):; int oldpos17=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_161);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_162);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_163); arg0=it;it=rb_obj_clone(c_164); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_2);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_165);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_166);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_167); arg0=it;it=rb_obj_clone(c_168); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_3: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_169);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_170);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_171); arg0=it;it=rb_obj_clone(c_172); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_4: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_173); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt15_5);it=rb_obj_clone(c_174);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_5: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_175); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt15_6);it=rb_obj_clone(c_176);
 bind_aset(bind,7/*_result*/,it); it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept15;
alt15_6: ame_setpos(self,oldpos17);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos18=ame_getpos(self);
alt16_1: ame_setpos(self,oldpos18);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt15_7;}
   it=Amethyst_spaces(self ); FAILTEST(alt16_2); it=rb_obj_clone(c_177); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt16_2);it=rb_obj_clone(c_178);
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
 break;case UC('`') ... UC('`'):; int oldpos21=ame_getpos(self);
alt19_1: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_179); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt19_2);  it=AmethystParser_expression(self ); FAILTEST(alt19_2);
 bind_aset(bind,18/*e*/,it);  it=rb_obj_clone(c_180); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt19_2);it=rb_funcall(self,s_rubyarg_AmethystParsercb_12AmethystParser,1,bind); 
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
alt19_2: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_181);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_182);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_183); arg0=it;it=rb_obj_clone(c_184); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_3);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
alt19_3: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_185);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_186);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_187); arg0=it;it=rb_obj_clone(c_188); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_4);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
alt19_4: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=rb_obj_clone(c_189);
 bind_aset(bind,2/*c*/,it); it=rb_obj_clone(c_190);
 bind_aset(bind,3/*o*/,it);  it=rb_obj_clone(c_191); arg0=it;it=rb_obj_clone(c_192); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_5);
 bind_aset(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
 bind_aset(bind,6/*_result*/,it);  
ame_setcut(self,Qnil);goto accept19;
alt19_5: ame_setpos(self,oldpos21);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos22=ame_getpos(self);
alt20_1: ame_setpos(self,oldpos22);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt19_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt20_2); it=rb_obj_clone(c_193); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt20_2);it=rb_obj_clone(c_194);
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
 bind_aset(bind,2/*args*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_229); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_expression(self ); FAILTEST(fail);
 bind_aset(bind,3/*body*/,it); it=rb_funcall(self,s_rule_AmethystParsercb_3AmethystParser,1,bind); 
 bind_aset(bind,3/*body*/,it); it=rb_funcall(self,s_rule_AmethystParsercb_4AmethystParser,1,bind); 
 bind_aset(bind,4/*locals*/,it); it=rb_funcall(self,s_rule_AmethystParsercb_5AmethystParser,1,bind); it=rb_funcall(self,s_rule_AmethystParsercb_6AmethystParser,1,bind);
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('\''):;case UC(')') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(fail);it=rb_ary_new3(0);
 bind_aset(bind,0/*_result*/,it);  break;case UC('(') ... UC('('):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_201); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_202); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_new3(0);
 bind_aset(bind,1/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_procargs2_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,1/*autovar*/);
 bind_aset(bind,3/*r*/,it);  it=rb_obj_clone(c_204); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,3/*r*/);
 bind_aset(bind,4/*_result*/,it); it=bind_aget(bind,4/*_result*/);
 bind_aset(bind,5/*r*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_1AmethystParser,1,bind); 
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_2AmethystParser,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
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
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_1AmethystParser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*ary*/,it); it=rb_funcall(self,s_sequence_AmethystParsercb_1AmethystParser,1,bind);
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
   it=Amethyst_spaces(self ); FAILTEST(alt1_3); it=rb_obj_clone(c_61); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3); it=rb_obj_clone(c_62); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);  it=AmethystParser_expression(self ); FAILTEST(alt1_3);
 bind_aset(bind,4/*expr*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_3); it=rb_obj_clone(c_63); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_funcall(self,s_term_AmethystParsercb_2AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_4); it=rb_obj_clone(c_64); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=rb_funcall(self,s_term_AmethystParsercb_3AmethystParser,1,bind); 
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
   it=Amethyst_spaces(self ); FAILTEST(alt1_7);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC(','):;case UC('.') ... UC('\377'):;  it=rb_obj_clone(c_65); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_7);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_7);
 bind_aset(bind,1/*x*/,it);  break;case UC('-') ... UC('-'):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_7;}
  it=rb_obj_clone(c_66); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);  it=AmethystParser_atomicHostExpr(self ); FAILTEST(alt2_2);
 bind_aset(bind,1/*x*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_7;}
  it=rb_obj_clone(c_67); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt2_3);
 bind_aset(bind,1/*x*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_7;
 accept2:;
 break;}it=rb_funcall(self,s_term_AmethystParsercb_5AmethystParser,1,bind); 
 bind_aset(bind,3/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_8); it=rb_obj_clone(c_68); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_8);int oldpos3; while(1){oldpos3=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('\000') ... UC('!'):;case UC('#') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break1);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_6AmethystParser,1,bind);  break;case UC('\"') ... UC('\"'):; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_69); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
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
   it=Amethyst_spaces(self ); FAILTEST(alt1_9); it=rb_obj_clone(c_70); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_9);int oldpos5; while(1){oldpos5=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC('\000') ... UC('&'):;case UC('(') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break2);
 bind_aset(bind,7/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_8AmethystParser,1,bind);  break;case UC('\'') ... UC('\''):; int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
  it=rb_obj_clone(c_71); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt4_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
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
 it=rb_obj_clone(c_72);
 bind_aset(bind,8/*s*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_11);it=bind_aget(bind,8/*s*/);
 bind_aset(bind,9/*s*/,it);  it=bind_aget(bind,9/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_11);it=bind_aget(bind,9/*s*/);int oldpos7; while(1){oldpos7=ame_getpos(self); int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}
 it=rb_obj_clone(c_73);
 bind_aset(bind,8/*s*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt5_2);it=rb_obj_clone(c_74);
 bind_aset(bind,9/*s*/,it);  it=rb_obj_clone(c_75); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
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
   it=Amethyst_spaces(self ); FAILTEST(alt1_12); it=rb_obj_clone(c_76); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);  it=AmethystParser_expression(self ); FAILTEST(alt1_12);
 bind_aset(bind,1/*x*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_12); it=rb_obj_clone(c_77); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC('\000') ... UC('Z'):;case UC('\\') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(alt1_12);it=bind_aget(bind,1/*x*/);
 bind_aset(bind,3/*_result*/,it);  break;case UC('[') ... UC('['):; int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_12;}
  it=rb_obj_clone(c_78); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_2);it=bind_aget(bind,1/*x*/);
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
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_100=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_100);
c_102=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_102);
c_104=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_104);
c_105=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_105);
c_109=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_109);
c_110=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_110);
c_111=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_111);
c_112=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_112);
c_113=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_113);
c_114=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_114);
c_115=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_115);
c_116=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_116);
c_117=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_117);
c_118=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_118);
c_119=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_119);
c_120=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_120);
c_121=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_121);
c_122=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_122);
c_123=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_123);
c_124=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_124);
c_125=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_125);
c_126=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_126);
c_127=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_127);
c_128=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_128);
c_129=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_129);
c_130=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_130);
c_131=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_131);
c_132=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_132);
c_133=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_133);
c_134=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_134);
c_135=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_135);
c_136=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_136);
c_138=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_138);
c_139=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_139);
c_140=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_140);
c_141=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_141);
c_142=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_142);
c_143=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_143);
c_144=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_144);
c_145=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_145);
c_146=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_146);
c_147=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_147);
c_148=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_148);
c_149=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_149);
c_150=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_150);
c_151=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_151);
c_152=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_152);
c_153=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_153);
c_154=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_154);
c_155=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_155);
c_157=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_157);
c_158=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_158);
c_159=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_159);
c_160=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_160);
c_161=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_161);
c_162=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_162);
c_163=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_163);
c_164=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_164);
c_165=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_165);
c_166=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_166);
c_167=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_167);
c_168=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_168);
c_169=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_169);
c_170=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_170);
c_171=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_171);
c_172=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_172);
c_173=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_173);
c_174=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_174);
c_175=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_175);
c_176=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_176);
c_177=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_177);
c_178=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_178);
c_179=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_179);
c_180=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_180);
c_181=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_181);
c_182=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_182);
c_183=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_183);
c_184=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_184);
c_185=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_185);
c_186=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_186);
c_187=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_187);
c_188=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_188);
c_189=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_189);
c_190=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_190);
c_191=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_191);
c_192=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_192);
c_193=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_193);
c_194=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_194);
c_196=rb_const_get(rb_cObject, rb_intern("Args"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_196);
c_198=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_198);
c_201=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_201);
c_202=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_202);
c_204=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_204);
c_206=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_206);
c_207=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_207);
c_208=rb_str_new2("@@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_208);
c_209=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_209);
c_210=rb_str_new2("~");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_210);
c_211=rb_str_new2("~");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_211);
c_212=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_212);
c_213=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_213);
c_214=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_214);
c_215=rb_str_new2(".");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_215);
c_216=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_216);
c_217=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_217);
c_218=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_218);
c_219=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_219);
c_220=rb_str_new2(":");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_220);
c_222=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_222);
c_225=rb_str_new2("=>");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_225);
c_226=rb_str_new2("?");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_226);
c_227=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_227);
c_228=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_228);
c_229=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_229);
c_232=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_232);
c_233=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_233);
c_41=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_41);
c_42=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_42);
c_44=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_44);
c_46=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_46);
c_48=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_48);
c_50=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_50);
c_51=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_51);
c_52=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_52);
c_54=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_54);
c_56=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_56);
c_61=rb_str_new2("nested");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_61);
c_62=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_62);
c_63=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_63);
c_64=rb_str_new2("break");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_64);
c_65=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_65);
c_66=rb_str_new2("->");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_66);
c_67=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_67);
c_68=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_68);
c_69=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_69);
c_70=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_70);
c_71=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_71);
c_72=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_72);
c_73=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_73);
c_74=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_74);
c_75=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_75);
c_76=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_76);
c_77=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_77);
c_78=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_78);
c_82=rb_str_new2("|");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_82);
c_84=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_84);
c_85=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_85);
c_87=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_87);
c_88=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_88);
c_90=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_90);
c_92=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_92);
c_93=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_93);
c_94=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_94);
c_95=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_95);
c_96=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_96);
c_97=rb_str_new2("::");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_97);
c_99=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_99);
s__args_AmethystParsercb_1AmethystParser=rb_intern("_args_AmethystParsercb_1");
s_addargs_AmethystParsercb_1AmethystParser=rb_intern("addargs_AmethystParsercb_1");
s_addargs_AmethystParsercb_2AmethystParser=rb_intern("addargs_AmethystParsercb_2");
s_addargs_AmethystParsercb_3AmethystParser=rb_intern("addargs_AmethystParsercb_3");
s_application_AmethystParsercb_1AmethystParser=rb_intern("application_AmethystParsercb_1");
s_application_AmethystParsercb_2AmethystParser=rb_intern("application_AmethystParsercb_2");
s_argsOpt_AmethystParsercb_1AmethystParser=rb_intern("argsOpt_AmethystParsercb_1");
s_argsOpt_AmethystParsercb_2AmethystParser=rb_intern("argsOpt_AmethystParsercb_2");
s_argsOpt_AmethystParsercb_3AmethystParser=rb_intern("argsOpt_AmethystParsercb_3");
s_args_AmethystParsercb_1AmethystParser=rb_intern("args_AmethystParsercb_1");
s_args_AmethystParsercb_2AmethystParser=rb_intern("args_AmethystParsercb_2");
s_args_AmethystParsercb_3AmethystParser=rb_intern("args_AmethystParsercb_3");
s_atomicHostExpr_AmethystParsercb_1AmethystParser=rb_intern("atomicHostExpr_AmethystParsercb_1");
s_atomicHostExpr_AmethystParsercb_2AmethystParser=rb_intern("atomicHostExpr_AmethystParsercb_2");
s_choice_AmethystParsercb_1AmethystParser=rb_intern("choice_AmethystParsercb_1");
s_collect_AmethystParsercb_1AmethystParser=rb_intern("collect_AmethystParsercb_1");
s_eChar_AmethystParsercb_1AmethystParser=rb_intern("eChar_AmethystParsercb_1");
s_eChar_AmethystParsercb_2AmethystParser=rb_intern("eChar_AmethystParsercb_2");
s_eChar_AmethystParsercb_3AmethystParser=rb_intern("eChar_AmethystParsercb_3");
s_eChar_AmethystParsercb_4AmethystParser=rb_intern("eChar_AmethystParsercb_4");
s_grammar_AmethystParsercb_1AmethystParser=rb_intern("grammar_AmethystParsercb_1");
s_grammar_AmethystParsercb_2AmethystParser=rb_intern("grammar_AmethystParsercb_2");
s_igrammar_AmethystParsercb_1AmethystParser=rb_intern("igrammar_AmethystParsercb_1");
s_igrammar_AmethystParsercb_2AmethystParser=rb_intern("igrammar_AmethystParsercb_2");
s_igrammar_AmethystParsercb_3AmethystParser=rb_intern("igrammar_AmethystParsercb_3");
s_inlineHostExpr_AmethystParsercb_1AmethystParser=rb_intern("inlineHostExpr_AmethystParsercb_1");
s_inlineHostExpr_AmethystParsercb_2AmethystParser=rb_intern("inlineHostExpr_AmethystParsercb_2");
s_inlineHostExpr_AmethystParsercb_3AmethystParser=rb_intern("inlineHostExpr_AmethystParsercb_3");
s_key_AmethystParsercb_1AmethystParser=rb_intern("key_AmethystParsercb_1");
s_key_AmethystParsercb_2AmethystParser=rb_intern("key_AmethystParsercb_2");
s_key_AmethystParsercb_3AmethystParser=rb_intern("key_AmethystParsercb_3");
s_key_AmethystParsercb_4AmethystParser=rb_intern("key_AmethystParsercb_4");
s_modifier_AmethystParsercb_1AmethystParser=rb_intern("modifier_AmethystParsercb_1");
s_modifier_AmethystParsercb_2AmethystParser=rb_intern("modifier_AmethystParsercb_2");
s_modifier_AmethystParsercb_3AmethystParser=rb_intern("modifier_AmethystParsercb_3");
s_name_AmethystParsercb_1AmethystParser=rb_intern("name_AmethystParsercb_1");
s_name_AmethystParsercb_2AmethystParser=rb_intern("name_AmethystParsercb_2");
s_name_AmethystParsercb_3AmethystParser=rb_intern("name_AmethystParsercb_3");
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
s_procargs2_AmethystParsercb_2AmethystParser=rb_intern("procargs2_AmethystParsercb_2");
s_procargs_AmethystParsercb_1AmethystParser=rb_intern("procargs_AmethystParsercb_1");
s_procargs_AmethystParsercb_2AmethystParser=rb_intern("procargs_AmethystParsercb_2");
s_procargs_AmethystParsercb_3AmethystParser=rb_intern("procargs_AmethystParsercb_3");
s_procargs_AmethystParsercb_4AmethystParser=rb_intern("procargs_AmethystParsercb_4");
s_rubyarg_AmethystParsercb_10AmethystParser=rb_intern("rubyarg_AmethystParsercb_10");
s_rubyarg_AmethystParsercb_11AmethystParser=rb_intern("rubyarg_AmethystParsercb_11");
s_rubyarg_AmethystParsercb_12AmethystParser=rb_intern("rubyarg_AmethystParsercb_12");
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
 rb_eval_string("testversionparser('d97b018f46d590dc39437e58a827c161')");}
