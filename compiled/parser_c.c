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
VALUE AmethystParser_number(VALUE self );
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
VALUE Amethyst_regch(VALUE self ,VALUE);
VALUE Amethyst_spaces(VALUE self );
VALUE Amethyst_token(VALUE self ,VALUE);
VALUE Amethyst_upper(VALUE self );
VALUE c_100;
VALUE c_101;
VALUE c_102;
VALUE c_103;
VALUE c_104;
VALUE c_105;
VALUE c_109;
VALUE c_111;
VALUE c_112;
VALUE c_113;
VALUE c_114;
VALUE c_116;
VALUE c_117;
VALUE c_118;
VALUE c_119;
VALUE c_121;
VALUE c_122;
VALUE c_124;
VALUE c_125;
VALUE c_126;
VALUE c_127;
VALUE c_128;
VALUE c_129;
VALUE c_130;
VALUE c_131;
VALUE c_133;
VALUE c_134;
VALUE c_135;
VALUE c_136;
VALUE c_138;
VALUE c_139;
VALUE c_141;
VALUE c_142;
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
VALUE c_156;
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
VALUE c_194;
VALUE c_195;
VALUE c_196;
VALUE c_197;
VALUE c_198;
VALUE c_199;
VALUE c_200;
VALUE c_201;
VALUE c_202;
VALUE c_203;
VALUE c_204;
VALUE c_205;
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
VALUE c_221;
VALUE c_222;
VALUE c_223;
VALUE c_224;
VALUE c_225;
VALUE c_226;
VALUE c_227;
VALUE c_228;
VALUE c_229;
VALUE c_230;
VALUE c_231;
VALUE c_232;
VALUE c_233;
VALUE c_235;
VALUE c_237;
VALUE c_238;
VALUE c_241;
VALUE c_242;
VALUE c_243;
VALUE c_244;
VALUE c_246;
VALUE c_247;
VALUE c_249;
VALUE c_250;
VALUE c_251;
VALUE c_252;
VALUE c_253;
VALUE c_254;
VALUE c_255;
VALUE c_256;
VALUE c_257;
VALUE c_258;
VALUE c_259;
VALUE c_260;
VALUE c_261;
VALUE c_262;
VALUE c_263;
VALUE c_264;
VALUE c_265;
VALUE c_266;
VALUE c_267;
VALUE c_268;
VALUE c_269;
VALUE c_270;
VALUE c_272;
VALUE c_273;
VALUE c_276;
VALUE c_277;
VALUE c_278;
VALUE c_279;
VALUE c_280;
VALUE c_281;
VALUE c_282;
VALUE c_283;
VALUE c_284;
VALUE c_285;
VALUE c_288;
VALUE c_289;
VALUE c_290;
VALUE c_291;
VALUE c_43;
VALUE c_44;
VALUE c_45;
VALUE c_46;
VALUE c_48;
VALUE c_49;
VALUE c_51;
VALUE c_52;
VALUE c_54;
VALUE c_55;
VALUE c_57;
VALUE c_58;
VALUE c_59;
VALUE c_60;
VALUE c_61;
VALUE c_62;
VALUE c_64;
VALUE c_65;
VALUE c_67;
VALUE c_68;
VALUE c_73;
VALUE c_74;
VALUE c_75;
VALUE c_76;
VALUE c_77;
VALUE c_78;
VALUE c_79;
VALUE c_80;
VALUE c_81;
VALUE c_82;
VALUE c_83;
VALUE c_84;
VALUE c_85;
VALUE c_86;
VALUE c_87;
VALUE c_88;
VALUE c_89;
VALUE c_90;
VALUE c_91;
VALUE c_92;
VALUE c_93;
VALUE c_94;
VALUE c_95;
VALUE c_96;
VALUE c_97;
VALUE c_98;
VALUE c_99;
VALUE s__args_AmethystParsercb_1AmethystParser;
VALUE s__at_cutAmethystParser;
VALUE s__at_stopAmethystParser;
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
VALUE s_number_AmethystParsercb_1AmethystParser;
VALUE s_number_AmethystParsercb_2AmethystParser;
VALUE s_number_AmethystParsercb_3AmethystParser;
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
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(7); rb_ary_store(bind,0/*o*/,a0);rb_ary_store(bind,5/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_entry(bind,0/*o*/);
 rb_ary_store(bind,1/*s*/,it);  it=rb_ary_entry(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,1/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_237); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_238);it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_1AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*r*/,it); it=rb_ary_entry(bind,5/*c*/);
 rb_ary_store(bind,1/*s*/,it);  it=rb_ary_entry(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,1/*s*/);it=rb_ary_entry(bind,4/*r*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(4); rb_ary_store(bind,0/*o*/,a0);rb_ary_store(bind,1/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_ary_entry(bind,0/*o*/); arg0=it;it=rb_ary_entry(bind,1/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(fail);
 rb_ary_store(bind,2/*r*/,it); it=rb_funcall(self,s__args_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_addargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*result*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=c_235; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2/*name*/,it); it=rb_funcall(self,s_addargs_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,3/*autovar*/,it); it=rb_funcall(self,s_addargs_AmethystParsercb_2AmethystParser,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto break1;
 if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,s_addargs_AmethystParsercb_3AmethystParser,1,bind); 
 rb_ary_store(bind,4/*_result*/,it); it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_application(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(17);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_name(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*autovar*/,it); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,2/*klas*/,it);  it=rb_obj_clone(c_130); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_131);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,3/*rule*/,it); it=rb_funcall(self,s_application_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,3/*rule*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,3/*rule*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('\''):;case UC(')') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(fail);it=rb_ary_new3(0);
 rb_ary_store(bind,4/*_result*/,it);  break;case UC('(') ... UC('('):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_obj_clone(c_133); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_134);  it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_135); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_136);it=rb_ary_new3(0);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*autovar*/,it); it=rb_funcall(self,s_args_AmethystParsercb_1AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,7/*r*/,it);  it=rb_obj_clone(c_138); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_139);it=rb_ary_entry(bind,7/*r*/);
 rb_ary_store(bind,8/*_result*/,it); it=rb_ary_entry(bind,8/*_result*/);
 rb_ary_store(bind,9/*r*/,it); it=rb_funcall(self,s_args_AmethystParsercb_2AmethystParser,1,bind); 
 rb_ary_store(bind,10/*autovar*/,it); it=rb_funcall(self,s_args_AmethystParsercb_3AmethystParser,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,11/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,12/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,12/*autovar*/);
 rb_ary_store(bind,13/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos4); ame_setlen(self,oldlen1);
	if(fail1) goto alt2_2;
it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,14/*_result*/,it); it=rb_ary_entry(bind,14/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3);it=rb_ary_new3(0);
 rb_ary_store(bind,4/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;}it=rb_ary_entry(bind,4/*_result*/);
 rb_ary_store(bind,15/*arg*/,it); it=rb_funcall(self,s_application_AmethystParsercb_2AmethystParser,1,bind); 
 rb_ary_store(bind,16/*_result*/,it); it=rb_ary_entry(bind,16/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(15); rb_ary_store(bind,2/*o*/,a0);rb_ary_store(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_entry(bind,0/*c*/);
 rb_ary_store(bind,1/*c*/,it); it=rb_ary_entry(bind,2/*o*/);
 rb_ary_store(bind,3/*o*/,it); it=rb_ary_entry(bind,3/*o*/);
 rb_ary_store(bind,4/*s*/,it);  it=rb_ary_entry(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,4/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_54); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_55);it=rb_ary_new3(0);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*autovar*/,it); it=rb_funcall(self,s_args_AmethystParsercb_1AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,7/*r*/,it); it=rb_ary_entry(bind,1/*c*/);
 rb_ary_store(bind,4/*s*/,it);  it=rb_ary_entry(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,4/*s*/);it=rb_ary_entry(bind,7/*r*/);
 rb_ary_store(bind,8/*_result*/,it); it=rb_ary_entry(bind,8/*_result*/);
 rb_ary_store(bind,9/*r*/,it); it=rb_funcall(self,s_args_AmethystParsercb_2AmethystParser,1,bind); 
 rb_ary_store(bind,10/*autovar*/,it); it=rb_funcall(self,s_args_AmethystParsercb_3AmethystParser,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,11/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,12/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,12/*autovar*/);
 rb_ary_store(bind,13/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,14/*_result*/,it); it=rb_ary_entry(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_argsOpt(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(18); rb_ary_store(bind,2/*o*/,a0);rb_ary_store(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_ary_entry(bind,0/*c*/);
 rb_ary_store(bind,1/*c*/,it); it=rb_ary_entry(bind,2/*o*/);
 rb_ary_store(bind,3/*o*/,it); it=rb_ary_entry(bind,1/*c*/);
 rb_ary_store(bind,4/*c*/,it); it=rb_ary_entry(bind,3/*o*/);
 rb_ary_store(bind,5/*o*/,it); it=rb_ary_entry(bind,5/*o*/);
 rb_ary_store(bind,6/*s*/,it);  it=rb_ary_entry(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_entry(bind,6/*s*/);  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_67); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_68);it=rb_ary_new3(0);
 rb_ary_store(bind,7/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,8/*autovar*/,it); it=rb_funcall(self,s_argsOpt_AmethystParsercb_1AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,9/*r*/,it); it=rb_ary_entry(bind,4/*c*/);
 rb_ary_store(bind,6/*s*/,it);  it=rb_ary_entry(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_entry(bind,6/*s*/);it=rb_ary_entry(bind,9/*r*/);
 rb_ary_store(bind,10/*_result*/,it); it=rb_ary_entry(bind,10/*_result*/);
 rb_ary_store(bind,11/*r*/,it); it=rb_funcall(self,s_argsOpt_AmethystParsercb_2AmethystParser,1,bind); 
 rb_ary_store(bind,12/*autovar*/,it); it=rb_funcall(self,s_argsOpt_AmethystParsercb_3AmethystParser,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,13/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,13/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,14/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,14/*autovar*/);
 rb_ary_store(bind,15/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,15/*autovar*/);
 rb_ary_store(bind,16/*_result*/,it); it=rb_ary_entry(bind,16/*_result*/);
 rb_ary_store(bind,17/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,17/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,17/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_atomicHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
   it=Amethyst_endline(self ); FAILTEST(alt1_2);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
  it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); it=rb_funcall(self,s_number_AmethystParsercb_2AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,2/*s*/,it); it=rb_funcall(self,s_atomicHostExpr_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,3/*autovar*/,it); it=rb_funcall(self,s_atomicHostExpr_AmethystParsercb_2AmethystParser,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(pass2);
 rb_ary_store(bind,5/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,6/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,6/*autovar*/);
 rb_ary_store(bind,7/*_result*/,it); it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_choice(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*f*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=AmethystParser_sequence(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1/*autovar*/,it); it=rb_funcall(self,s_number_AmethystParsercb_2AmethystParser,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_obj_clone(c_109); arg0=it; it=Amethyst_token(self ,arg0); FAILTEST(break1);  it=AmethystParser_sequence(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_1AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_2AmethystParser,1,bind); it=rb_ary_entry(bind,0/*f*/);
 rb_ary_store(bind,5/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,5/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*ary*/,it); it=rb_funcall(self,s_choice_AmethystParsercb_1AmethystParser,1,bind);
 rb_ary_store(bind,7/*_result*/,it); it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_121); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_122);  it=Amethyst_upper(self ); FAILTEST(fail);
 rb_ary_store(bind,1/*autovar*/,it); it=rb_funcall(self,s_number_AmethystParsercb_2AmethystParser,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_1AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_2AmethystParser,1,bind); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,5/*it*/,it); it=rb_funcall(self,s_name_AmethystParsercb_3AmethystParser,1,bind); 
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(2); rb_ary_store(bind,0/*ors*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_collect_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_eChar(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('['):;case UC(']') ... UC('\377'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_124);
 rb_ary_store(bind,0/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,1/*o*/,it);  it=rb_ary_entry(bind,1/*o*/); arg0=it;it=rb_obj_clone(c_125); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*r*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_2AmethystParser,1,bind); 
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,5/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_3AmethystParser,1,bind); FAILTEST(alt1_3);it=rb_ary_entry(bind,5/*c*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC('\\') ... UC('\\'):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_obj_clone(c_126); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_127);  it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,5/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_3AmethystParser,1,bind); FAILTEST(alt2_2);it=rb_ary_entry(bind,5/*c*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
 rb_ary_store(bind,7/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_4AmethystParser,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_128);
 rb_ary_store(bind,0/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,1/*o*/,it);  it=rb_ary_entry(bind,1/*o*/); arg0=it;it=rb_obj_clone(c_129); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt2_3);
 rb_ary_store(bind,2/*r*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_2AmethystParser,1,bind); 
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 rb_ary_store(bind,5/*c*/,it); it=rb_funcall(self,s_eChar_AmethystParsercb_3AmethystParser,1,bind); FAILTEST(alt2_4);it=rb_ary_entry(bind,5/*c*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;}it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_choice(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_57); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_58);  it=AmethystParser_name(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*name*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_59); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_60);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1/*parent*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_funcall(self,s_grammar_AmethystParsercb_1AmethystParser,1,bind);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_61); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_62);it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rule(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_1AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*rules*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_64); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_65);it=rb_funcall(self,s_grammar_AmethystParsercb_2AmethystParser,1,bind);
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
 it=rb_ary_new3(0);
 rb_ary_store(bind,1/*autovar*/,it); unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('`'):;case UC('b') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(alt1_2); break;case UC('a') ... UC('a'):; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_2;}
  it=rb_obj_clone(c_288); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_289);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt2_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_2;
 accept2:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*autovar*/,it); it=rb_funcall(self,s_procargs2_AmethystParsercb_1AmethystParser,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('\000') ... UC('`'):;case UC('b') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(break2); break;case UC('a') ... UC('a'):; int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break2;}
  it=rb_obj_clone(c_290); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);it=rb_obj_clone(c_291);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt3_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break2;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break2;
 accept3:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3/*autovar*/,it); it=rb_funcall(self,s_igrammar_AmethystParsercb_1AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos4); it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,4/*it*/,it); it=rb_funcall(self,s_igrammar_AmethystParsercb_2AmethystParser,1,bind); 
 rb_ary_store(bind,5/*autovar*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
   it=AmethystParser_grammar(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,5/*autovar*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,s_igrammar_AmethystParsercb_3AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,6/*a*/,it); it=rb_ary_entry(bind,6/*a*/);
 rb_ary_store(bind,7/*_result*/,it); it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_inlineHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_obj_clone(c_43); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_44);  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_45); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_46);it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); it=rb_funcall(self,s_number_AmethystParsercb_2AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,2/*r*/,it);  it=rb_obj_clone(c_48); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_49);it=rb_ary_entry(bind,2/*r*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*autovar*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_2AmethystParser,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,7/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,8/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,8/*autovar*/);
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
 rb_ary_store(bind,10/*_result*/,it); it=rb_ary_entry(bind,10/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_key(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_spaces(self ); FAILTEST(fail);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_obj_clone(c_249); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_250);  it=AmethystParser_className(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*name*/,it); it=rb_funcall(self,s_key_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,1/*vars*/,it); it=rb_funcall(self,s_key_AmethystParsercb_2AmethystParser,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_obj_clone(c_251); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_252);  it=AmethystParser_name(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*name*/,it); it=rb_funcall(self,s_key_AmethystParsercb_3AmethystParser,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_obj_clone(c_253); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=rb_obj_clone(c_254);  it=AmethystParser_name(self ); FAILTEST(alt1_4);
 rb_ary_store(bind,0/*name*/,it); it=rb_funcall(self,s_key_AmethystParsercb_4AmethystParser,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_modifier(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=AmethystParser_term(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_funcall(self,s_modifier_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,1/*s*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_3);it=rb_ary_entry(bind,1/*s*/);
 rb_ary_store(bind,2/*s*/,it);  it=rb_ary_entry(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_ary_entry(bind,2/*s*/);it=rb_ary_new3(0);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
   it=Amethyst_endline(self ); FAILTEST(alt2_2);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt2_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
  it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,4/*autovar*/,it); it=rb_funcall(self,s_modifier_AmethystParsercb_2AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,5/*c*/,it); it=rb_funcall(self,s_modifier_AmethystParsercb_3AmethystParser,1,bind); 
 rb_ary_store(bind,0/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_51); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_52);  it=AmethystParser_nameFirst(self ); FAILTEST(fail);
 rb_ary_store(bind,1/*autovar*/,it); it=rb_funcall(self,s_number_AmethystParsercb_2AmethystParser,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_1AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*autovar*/,it); it=rb_funcall(self,s_name_AmethystParsercb_2AmethystParser,1,bind); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,5/*it*/,it); it=rb_funcall(self,s_name_AmethystParsercb_3AmethystParser,1,bind); 
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nameFirst(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('^'):;case UC('`') ... UC('\377'):;   it=Amethyst_letter(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it);  break;case UC('_') ... UC('_'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_letter(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_obj_clone(c_141); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_142);
 rb_ary_store(bind,0/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;}it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nameRest(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=AmethystParser_nameFirst(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_digit(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_2);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('\''):;case UC(')') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(alt1_2); break;case UC('(') ... UC('('):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_2;}
  it=rb_obj_clone(c_111); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_112);  it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_113); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_114);it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); it=rb_funcall(self,s_number_AmethystParsercb_2AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,2/*r*/,it);  it=rb_obj_clone(c_116); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_117);it=rb_ary_entry(bind,2/*r*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*autovar*/,it); it=rb_funcall(self,s_inlineHostExpr_AmethystParsercb_2AmethystParser,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
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
 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 break;}  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_118); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_119);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,7/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,7/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_number(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it);  it=rb_funcall(self,s_number_AmethystParsercb_1AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,1/*autovar*/,it); it=rb_funcall(self,s_number_AmethystParsercb_2AmethystParser,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=rb_funcall(self,s_number_AmethystParsercb_1AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,2/*autovar*/,it); it=rb_funcall(self,s_number_AmethystParsercb_3AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_255); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_256);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*expr*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,1/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_3);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('~') ... UC('~'):;  it=rb_obj_clone(c_257); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_258);
 rb_ary_store(bind,2/*neg*/,it);  break;case UC('&') ... UC('&'):;  it=rb_obj_clone(c_259); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_260);
 rb_ary_store(bind,2/*neg*/,it);  break;default:;   it=Amethyst_fails(self ); FAILTEST(alt1_3); break;}  it=AmethystParser_prefixed(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,3/*m*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_2AmethystParser,1,bind); 
 rb_ary_store(bind,1/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_4;}
   it=AmethystParser_modifier(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,4/*from*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_4;}
   it=Amethyst_spaces(self ); FAILTEST(alt2_3); it=rb_obj_clone(c_261); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);it=rb_obj_clone(c_262);int oldpos3=ame_getpos(self);
  it=rb_funcall(self,s_prefixed_AmethystParsercb_3AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(reject1); x=1; goto accept3;  reject1: x=0; accept3: it=Qnil; ame_setpos(self,oldpos3); if (x==0) goto alt2_3;int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt2_3;}
   it=Amethyst_spaces(self ); FAILTEST(alt3_2); it=rb_obj_clone(c_263); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);it=rb_obj_clone(c_264); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept4;
alt3_2: ame_setpos(self,oldpos4);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt2_3;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept4;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_3;
 accept4:;
it=rb_funcall(self,s_prefixed_AmethystParsercb_4AmethystParser,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_4;
 accept2:;
int oldpos5; while(1){oldpos5=ame_getpos(self); int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
   it=Amethyst__(self ); FAILTEST(alt4_2);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt4_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos6);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
   it=Amethyst_empty(self ); FAILTEST(alt4_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos6); goto break1;
 accept5:;
  it=Amethyst_spaces(self ); FAILTEST(break1);unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('*') ... UC('*'):;  it=rb_obj_clone(c_265); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_266);
 rb_ary_store(bind,5/*one*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_5AmethystParser,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  break;case UC('+') ... UC('+'):;  it=rb_obj_clone(c_267); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_268);
 rb_ary_store(bind,5/*one*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_5AmethystParser,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  break;case UC(':') ... UC(':'):;  it=rb_obj_clone(c_269); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_270);int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
 int oldpos8=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos8);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt5_2;}
   it=AmethystParser_key(self ); FAILTEST(alt6_2);
 rb_ary_store(bind,6/*name*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept7;
alt6_2: ame_setpos(self,oldpos8);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt5_2;}
   it=AmethystParser_name(self ); FAILTEST(alt6_3);
 rb_ary_store(bind,6/*name*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept7;
  alt6_3:  ame_setpos(self,oldpos8); goto alt5_2;
 accept7:;
unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC('\000') ... UC('Z'):;case UC('\\') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(alt5_2);it=Qnil;
 rb_ary_store(bind,7/*append*/,it);  break;case UC('[') ... UC('['):; int oldpos9=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos9);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt5_2;}
  it=rb_obj_clone(c_272); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_2);it=rb_obj_clone(c_273);it=Qtrue;
 rb_ary_store(bind,7/*append*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept8;
alt7_2: ame_setpos(self,oldpos9);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt5_2;}
   it=Amethyst_empty(self ); FAILTEST(alt7_3);it=Qnil;
 rb_ary_store(bind,7/*append*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept8;
  alt7_3:  ame_setpos(self,oldpos9); goto alt5_2;
 accept8:;
 break;}it=rb_funcall(self,s_prefixed_AmethystParsercb_6AmethystParser,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept6;
alt5_2: ame_setpos(self,oldpos7);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt5_3);
 rb_ary_store(bind,8/*e*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_7AmethystParser,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept6;
  alt5_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;case UC('=') ... UC('='):;  it=rb_obj_clone(c_276); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_277);  it=AmethystParser_prefixed(self ); FAILTEST(break1);
 rb_ary_store(bind,9/*it*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_8AmethystParser,1,bind);  break;case UC('?') ... UC('?'):;  it=rb_obj_clone(c_278); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_279);it=rb_funcall(self,s_prefixed_AmethystParsercb_9AmethystParser,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  break;case UC('[') ... UC('['):;  it=rb_obj_clone(c_280); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_281);  it=AmethystParser_expression(self ); FAILTEST(break1);
 rb_ary_store(bind,9/*it*/,it); it=rb_funcall(self,s_prefixed_AmethystParsercb_10AmethystParser,1,bind);   it=Amethyst_spaces(self ); FAILTEST(break1); it=rb_obj_clone(c_282); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_283); break;default:;   it=Amethyst_fails(self ); FAILTEST(break1); break;} if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,4/*from*/);
 rb_ary_store(bind,1/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_procargs_AmethystParsercb_1AmethystParser,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*c*/,it); it=rb_funcall(self,s_procargs_AmethystParsercb_2AmethystParser,1,bind); FAILTEST(alt1_2);it=rb_funcall(self,s_procargs_AmethystParsercb_3AmethystParser,1,bind);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
   it=AmethystParser_procargs2(self ); FAILTEST(alt1_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,s_procargs_AmethystParsercb_4AmethystParser,1,bind); 
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashAmethystParser1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_procargs2(self ); FAILTEST(break1);
 rb_ary_store(bind,2/*autovar*/,it); it=rb_funcall(self,s_procargs2_AmethystParsercb_1AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,3/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,4/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,5/*a*/,it); it=rb_funcall(self,s_procargs2_AmethystParsercb_2AmethystParser,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,5/*a*/,it); it=rb_funcall(self,s_procargs2_AmethystParsercb_2AmethystParser,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  break;}it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(17);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*s*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,1/*n*/,it); unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('!'):;case UC('#') ... UC('&'):;case UC('(') ... UC('-'):;case UC('/') ... UC('_'):;case UC('a') ... UC('\377'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_146);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_147);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_148); arg0=it;it=rb_obj_clone(c_149); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_150);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_151);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_152); arg0=it;it=rb_obj_clone(c_153); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_3);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_154);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_155);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_156); arg0=it;it=rb_obj_clone(c_157); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_4);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_5;}
   it=Amethyst_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_158); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_159);
 rb_ary_store(bind,1/*n*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_5;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_2AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt2_3);
 rb_ary_store(bind,1/*n*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_5;}
   it=Amethyst_empty(self ); FAILTEST(alt2_4); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto alt1_5;
 accept2:;
int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_5;}
   it=Amethyst__(self ); FAILTEST(alt3_2);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt3_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_5;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto alt1_5;
 accept3:;
  it=AmethystParser_name(self ); FAILTEST(alt1_5);
 rb_ary_store(bind,7/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_3AmethystParser,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 int oldpos4=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos4);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_6;}
   it=Amethyst__(self ); FAILTEST(alt4_2);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt4_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos4);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_6;}
   it=Amethyst_empty(self ); FAILTEST(alt4_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos4); goto alt1_6;
 accept4:;
  it=AmethystParser_key(self ); FAILTEST(alt1_6);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_4AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt1_7);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_7:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC('\"') ... UC('\"'):; int oldpos5=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos5);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_160);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_161);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_162); arg0=it;it=rb_obj_clone(c_163); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_2);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos5);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_164);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_165);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_166); arg0=it;it=rb_obj_clone(c_167); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_3);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept5;
alt5_3: ame_setpos(self,oldpos5);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_168);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_169);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_170); arg0=it;it=rb_obj_clone(c_171); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_4);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept5;
alt5_4: ame_setpos(self,oldpos5);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_obj_clone(c_172); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_5);it=rb_obj_clone(c_173);
 rb_ary_store(bind,8/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_5AmethystParser,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,9/*autovar*/,it); int oldpos6; while(1){oldpos6=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('\000') ... UC('!'):;case UC('#') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break1);
 rb_ary_store(bind,10/*autovar*/,it);  break;case UC('\"') ... UC('\"'):; int oldpos7=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos7);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
  it=rb_obj_clone(c_175); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_2);it=rb_obj_clone(c_176);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);rb_ivar_set(self,s__at_stopAmethystParser,Qtrue);
 rb_ary_store(bind,10/*autovar*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos7);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt6_3);
 rb_ary_store(bind,10/*autovar*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;}it=rb_funcall(self,s_rubyarg_AmethystParsercb_6AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos6); it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,11/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_7AmethystParser,1,bind); it=rb_funcall(self,s_rubyarg_AmethystParsercb_8AmethystParser,1,bind); 
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept5;
alt5_5: ame_setpos(self,oldpos5);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos8);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt5_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt7_2); it=rb_obj_clone(c_177); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_2);it=rb_obj_clone(c_178);
 rb_ary_store(bind,1/*n*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos8);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt5_6;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_2AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt7_3);
 rb_ary_store(bind,1/*n*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept7;
alt7_3: ame_setpos(self,oldpos8);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt5_6;}
   it=Amethyst_empty(self ); FAILTEST(alt7_4); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept7;
  alt7_4:  ame_setpos(self,oldpos8); goto alt5_6;
 accept7:;
int oldpos9=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos9);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt5_6;}
   it=Amethyst__(self ); FAILTEST(alt8_2);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt8_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos9);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt5_6;}
   it=Amethyst_empty(self ); FAILTEST(alt8_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos9); goto alt5_6;
 accept8:;
  it=AmethystParser_name(self ); FAILTEST(alt5_6);
 rb_ary_store(bind,7/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_3AmethystParser,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept5;
alt5_6: ame_setpos(self,oldpos5);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 int oldpos10=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos10);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt5_7;}
   it=Amethyst__(self ); FAILTEST(alt9_2);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt9_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos10);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt5_7;}
   it=Amethyst_empty(self ); FAILTEST(alt9_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos10); goto alt5_7;
 accept9:;
  it=AmethystParser_key(self ); FAILTEST(alt5_7);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept5;
alt5_7: ame_setpos(self,oldpos5);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_4AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt5_8);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept5;
  alt5_8:  ame_setpos(self,oldpos5); goto fail;
 accept5:;
 break;case UC('\'') ... UC('\''):; int oldpos11=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos11);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_179);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_180);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_181); arg0=it;it=rb_obj_clone(c_182); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_2);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos11);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_183);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_184);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_185); arg0=it;it=rb_obj_clone(c_186); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_3);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept10;
alt10_3: ame_setpos(self,oldpos11);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_187);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_188);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_189); arg0=it;it=rb_obj_clone(c_190); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_4);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept10;
alt10_4: ame_setpos(self,oldpos11);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_obj_clone(c_191); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt10_5);it=rb_obj_clone(c_192);
 rb_ary_store(bind,12/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_9AmethystParser,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,13/*autovar*/,it); int oldpos12; while(1){oldpos12=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC('\000') ... UC('&'):;case UC('(') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break2);
 rb_ary_store(bind,14/*autovar*/,it);  break;case UC('\'') ... UC('\''):; int oldpos13=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos13);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break2;}
  it=rb_obj_clone(c_194); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt11_2);it=rb_obj_clone(c_195);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);rb_ivar_set(self,s__at_stopAmethystParser,Qtrue);
 rb_ary_store(bind,14/*autovar*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos13);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt11_3);
 rb_ary_store(bind,14/*autovar*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept11;
  alt11_3:  ame_setpos(self,oldpos13); goto break2;
 accept11:;
 break;}it=rb_funcall(self,s_rubyarg_AmethystParsercb_10AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos12=ame_getpos(self);goto break2;} } } break2: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos12); it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,15/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_11AmethystParser,1,bind); it=rb_funcall(self,s_rubyarg_AmethystParsercb_8AmethystParser,1,bind); 
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept10;
alt10_5: ame_setpos(self,oldpos11);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 int oldpos14=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos14);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt10_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt12_2); it=rb_obj_clone(c_196); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt12_2);it=rb_obj_clone(c_197);
 rb_ary_store(bind,1/*n*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept12;
alt12_2: ame_setpos(self,oldpos14);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt10_6;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_2AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt12_3);
 rb_ary_store(bind,1/*n*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept12;
alt12_3: ame_setpos(self,oldpos14);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt10_6;}
   it=Amethyst_empty(self ); FAILTEST(alt12_4); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept12;
  alt12_4:  ame_setpos(self,oldpos14); goto alt10_6;
 accept12:;
int oldpos15=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos15);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt10_6;}
   it=Amethyst__(self ); FAILTEST(alt13_2);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt13_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept13;
alt13_2: ame_setpos(self,oldpos15);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt10_6;}
   it=Amethyst_empty(self ); FAILTEST(alt13_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept13;
  alt13_3:  ame_setpos(self,oldpos15); goto alt10_6;
 accept13:;
  it=AmethystParser_name(self ); FAILTEST(alt10_6);
 rb_ary_store(bind,7/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_3AmethystParser,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept10;
alt10_6: ame_setpos(self,oldpos11);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 int oldpos16=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos16);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt10_7;}
   it=Amethyst__(self ); FAILTEST(alt14_2);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt14_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept14;
alt14_2: ame_setpos(self,oldpos16);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt10_7;}
   it=Amethyst_empty(self ); FAILTEST(alt14_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept14;
  alt14_3:  ame_setpos(self,oldpos16); goto alt10_7;
 accept14:;
  it=AmethystParser_key(self ); FAILTEST(alt10_7);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept10;
alt10_7: ame_setpos(self,oldpos11);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_4AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt10_8);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept10;
  alt10_8:  ame_setpos(self,oldpos11); goto fail;
 accept10:;
 break;case UC('.') ... UC('.'):; int oldpos17=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos17);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_198);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_199);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_200); arg0=it;it=rb_obj_clone(c_201); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_2);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos17);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_202);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_203);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_204); arg0=it;it=rb_obj_clone(c_205); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_3);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept15;
alt15_3: ame_setpos(self,oldpos17);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_206);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_207);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_208); arg0=it;it=rb_obj_clone(c_209); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_4);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept15;
alt15_4: ame_setpos(self,oldpos17);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_obj_clone(c_210); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt15_5);it=rb_obj_clone(c_211);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept15;
alt15_5: ame_setpos(self,oldpos17);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_obj_clone(c_212); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt15_6);it=rb_obj_clone(c_213);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept15;
alt15_6: ame_setpos(self,oldpos17);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 int oldpos18=ame_getpos(self);
alt16_1: ame_setpos(self,oldpos18);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt15_7;}
   it=Amethyst_spaces(self ); FAILTEST(alt16_2); it=rb_obj_clone(c_214); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt16_2);it=rb_obj_clone(c_215);
 rb_ary_store(bind,1/*n*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept16;
alt16_2: ame_setpos(self,oldpos18);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt15_7;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_2AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt16_3);
 rb_ary_store(bind,1/*n*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept16;
alt16_3: ame_setpos(self,oldpos18);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt15_7;}
   it=Amethyst_empty(self ); FAILTEST(alt16_4); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept16;
  alt16_4:  ame_setpos(self,oldpos18); goto alt15_7;
 accept16:;
int oldpos19=ame_getpos(self);
alt17_1: ame_setpos(self,oldpos19);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt15_7;}
   it=Amethyst__(self ); FAILTEST(alt17_2);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt17_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept17;
alt17_2: ame_setpos(self,oldpos19);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt15_7;}
   it=Amethyst_empty(self ); FAILTEST(alt17_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept17;
  alt17_3:  ame_setpos(self,oldpos19); goto alt15_7;
 accept17:;
  it=AmethystParser_name(self ); FAILTEST(alt15_7);
 rb_ary_store(bind,7/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_3AmethystParser,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept15;
alt15_7: ame_setpos(self,oldpos17);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 int oldpos20=ame_getpos(self);
alt18_1: ame_setpos(self,oldpos20);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt15_8;}
   it=Amethyst__(self ); FAILTEST(alt18_2);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt18_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept18;
alt18_2: ame_setpos(self,oldpos20);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt15_8;}
   it=Amethyst_empty(self ); FAILTEST(alt18_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept18;
  alt18_3:  ame_setpos(self,oldpos20); goto alt15_8;
 accept18:;
  it=AmethystParser_key(self ); FAILTEST(alt15_8);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept15;
alt15_8: ame_setpos(self,oldpos17);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_4AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt15_9);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept15;
  alt15_9:  ame_setpos(self,oldpos17); goto fail;
 accept15:;
 break;case UC('`') ... UC('`'):; int oldpos21=ame_getpos(self);
alt19_1: ame_setpos(self,oldpos21);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_obj_clone(c_216); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt19_2);it=rb_obj_clone(c_217);  it=AmethystParser_expression(self ); FAILTEST(alt19_2);
 rb_ary_store(bind,16/*e*/,it);  it=rb_obj_clone(c_218); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt19_2);it=rb_obj_clone(c_219);it=rb_funcall(self,s_rubyarg_AmethystParsercb_12AmethystParser,1,bind); 
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept19;
alt19_2: ame_setpos(self,oldpos21);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_220);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_221);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_222); arg0=it;it=rb_obj_clone(c_223); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_3);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept19;
alt19_3: ame_setpos(self,oldpos21);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_224);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_225);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_226); arg0=it;it=rb_obj_clone(c_227); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_4);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept19;
alt19_4: ame_setpos(self,oldpos21);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_228);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_229);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_230); arg0=it;it=rb_obj_clone(c_231); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_5);
 rb_ary_store(bind,4/*r*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept19;
alt19_5: ame_setpos(self,oldpos21);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 int oldpos22=ame_getpos(self);
alt20_1: ame_setpos(self,oldpos22);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt19_6;}
   it=Amethyst_spaces(self ); FAILTEST(alt20_2); it=rb_obj_clone(c_232); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt20_2);it=rb_obj_clone(c_233);
 rb_ary_store(bind,1/*n*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept20;
alt20_2: ame_setpos(self,oldpos22);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt19_6;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_2AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt20_3);
 rb_ary_store(bind,1/*n*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept20;
alt20_3: ame_setpos(self,oldpos22);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt19_6;}
   it=Amethyst_empty(self ); FAILTEST(alt20_4); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept20;
  alt20_4:  ame_setpos(self,oldpos22); goto alt19_6;
 accept20:;
int oldpos23=ame_getpos(self);
alt21_1: ame_setpos(self,oldpos23);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt19_6;}
   it=Amethyst__(self ); FAILTEST(alt21_2);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt21_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept21;
alt21_2: ame_setpos(self,oldpos23);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt19_6;}
   it=Amethyst_empty(self ); FAILTEST(alt21_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept21;
  alt21_3:  ame_setpos(self,oldpos23); goto alt19_6;
 accept21:;
  it=AmethystParser_name(self ); FAILTEST(alt19_6);
 rb_ary_store(bind,7/*autovar*/,it); it=rb_funcall(self,s_rubyarg_AmethystParsercb_3AmethystParser,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept19;
alt19_6: ame_setpos(self,oldpos21);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 int oldpos24=ame_getpos(self);
alt22_1: ame_setpos(self,oldpos24);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt19_7;}
   it=Amethyst__(self ); FAILTEST(alt22_2);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt22_2); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept22;
alt22_2: ame_setpos(self,oldpos24);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt19_7;}
   it=Amethyst_empty(self ); FAILTEST(alt22_3); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept22;
  alt22_3:  ame_setpos(self,oldpos24); goto alt19_7;
 accept22:;
  it=AmethystParser_key(self ); FAILTEST(alt19_7);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept19;
alt19_7: ame_setpos(self,oldpos21);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_funcall(self,s_rubyarg_AmethystParsercb_4AmethystParser,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt19_8);
 rb_ary_store(bind,6/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept19;
  alt19_8:  ame_setpos(self,oldpos21); goto fail;
 accept19:;
 break;}it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_rule_AmethystParsercb_1AmethystParser,1,bind); it=rb_funcall(self,s_rule_AmethystParsercb_2AmethystParser,1,bind); 
 rb_ary_store(bind,0/*bnding*/,it);   it=AmethystParser_name(self ); FAILTEST(fail);
 rb_ary_store(bind,1/*name*/,it);   it=AmethystParser_ruleargs(self ); FAILTEST(fail);
 rb_ary_store(bind,2/*args*/,it);   it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_284); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_285);  it=AmethystParser_expression(self ); FAILTEST(fail);
 rb_ary_store(bind,3/*body*/,it); it=rb_funcall(self,s_rule_AmethystParsercb_3AmethystParser,1,bind); 
 rb_ary_store(bind,3/*body*/,it); it=rb_funcall(self,s_rule_AmethystParsercb_4AmethystParser,1,bind); 
 rb_ary_store(bind,4/*locals*/,it); it=rb_funcall(self,s_rule_AmethystParsercb_5AmethystParser,1,bind); it=rb_funcall(self,s_rule_AmethystParsercb_6AmethystParser,1,bind);
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('\''):;case UC(')') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(fail);it=rb_ary_new3(0);
 rb_ary_store(bind,0/*_result*/,it);  break;case UC('(') ... UC('('):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
  it=rb_obj_clone(c_241); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_242);  it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_243); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_244);it=rb_ary_new3(0);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,2/*autovar*/,it); it=rb_funcall(self,s_procargs2_AmethystParsercb_1AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,3/*r*/,it);  it=rb_obj_clone(c_246); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_247);it=rb_ary_entry(bind,3/*r*/);
 rb_ary_store(bind,4/*_result*/,it); it=rb_ary_entry(bind,4/*_result*/);
 rb_ary_store(bind,5/*r*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,6/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_2AmethystParser,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,7/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,8/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,8/*autovar*/);
 rb_ary_store(bind,9/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,10/*_result*/,it); it=rb_ary_entry(bind,10/*_result*/);
 rb_ary_store(bind,0/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,0/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;}it=rb_ary_entry(bind,0/*_result*/);
 rb_ary_store(bind,11/*autovar*/,it); it=rb_funcall(self,s_ruleargs_AmethystParsercb_3AmethystParser,1,bind); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,12/*autovar*/,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethystParser,0)));
   it=AmethystParser_addargs(self ); FAILTEST(pass4);
 rb_ary_store(bind,13/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;
it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,14/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto fail;
it=rb_ary_entry(bind,14/*autovar*/);
 rb_ary_store(bind,15/*_result*/,it); it=rb_ary_entry(bind,15/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nr(self ); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); it=rb_funcall(self,s_number_AmethystParsercb_2AmethystParser,1,bind);  if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,2/*ary*/,it); it=rb_funcall(self,s_sequence_AmethystParsercb_1AmethystParser,1,bind);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*s*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,1/*x*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=AmethystParser_className(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*cls*/,it); it=rb_funcall(self,s_term_AmethystParsercb_1AmethystParser,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_3); it=rb_obj_clone(c_73); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_74); it=rb_obj_clone(c_75); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_76);  it=AmethystParser_expression(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,4/*expr*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_3); it=rb_obj_clone(c_77); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_78);it=rb_funcall(self,s_term_AmethystParsercb_2AmethystParser,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_4); it=rb_obj_clone(c_79); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=rb_obj_clone(c_80);it=rb_funcall(self,s_term_AmethystParsercb_3AmethystParser,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=AmethystParser_application(self ); FAILTEST(alt1_5);
 rb_ary_store(bind,3/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt1_6);
 rb_ary_store(bind,5/*it*/,it); it=rb_funcall(self,s_term_AmethystParsercb_4AmethystParser,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_7);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC(','):;case UC('.') ... UC('\377'):;  it=rb_obj_clone(c_81); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_7);it=rb_obj_clone(c_82);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_7);
 rb_ary_store(bind,1/*x*/,it);  break;case UC('-') ... UC('-'):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_7;}
  it=rb_obj_clone(c_83); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_84);  it=AmethystParser_atomicHostExpr(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,1/*x*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_7;}
  it=rb_obj_clone(c_85); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);it=rb_obj_clone(c_86);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,1/*x*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_7;
 accept2:;
 break;}it=rb_funcall(self,s_term_AmethystParsercb_5AmethystParser,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_8); it=rb_obj_clone(c_87); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_8);it=rb_obj_clone(c_88);int oldpos3; while(1){oldpos3=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('\000') ... UC('!'):;case UC('#') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_6AmethystParser,1,bind);  break;case UC('\"') ... UC('\"'):; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
  it=rb_obj_clone(c_89); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);it=rb_obj_clone(c_90);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);rb_ivar_set(self,s__at_stopAmethystParser,Qtrue); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,6/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_6AmethystParser,1,bind);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto break1;
 accept3:;
 break;} if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos3); it=rb_funcall(self,s_term_AmethystParsercb_7AmethystParser,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_9); it=rb_obj_clone(c_91); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_9);it=rb_obj_clone(c_92);int oldpos5; while(1){oldpos5=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC('\000') ... UC('&'):;case UC('(') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break2);
 rb_ary_store(bind,7/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_8AmethystParser,1,bind);  break;case UC('\'') ... UC('\''):; int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break2;}
  it=rb_obj_clone(c_93); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt4_2);it=rb_obj_clone(c_94);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);rb_ivar_set(self,s__at_stopAmethystParser,Qtrue); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt4_3);
 rb_ary_store(bind,7/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_8AmethystParser,1,bind);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos6); goto break2;
 accept4:;
 break;} if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,s_term_AmethystParsercb_9AmethystParser,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=AmethystParser_number(self ); FAILTEST(alt1_10);
 rb_ary_store(bind,5/*it*/,it); it=rb_funcall(self,s_term_AmethystParsercb_10AmethystParser,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
 it=rb_obj_clone(c_95);
 rb_ary_store(bind,8/*s*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_11);it=rb_ary_entry(bind,8/*s*/);
 rb_ary_store(bind,9/*s*/,it);  it=rb_ary_entry(bind,9/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_11);it=rb_ary_entry(bind,9/*s*/);int oldpos7; while(1){oldpos7=ame_getpos(self); int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break3;}
 it=rb_obj_clone(c_96);
 rb_ary_store(bind,8/*s*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt5_2);it=rb_obj_clone(c_97);
 rb_ary_store(bind,9/*s*/,it);  it=rb_obj_clone(c_98); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_2);it=rb_obj_clone(c_99);rb_ivar_set(self,s__at_cutAmethystParser,Qtrue);rb_ivar_set(self,s__at_stopAmethystParser,Qtrue); 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto break3;}
   it=AmethystParser_eChar(self ); FAILTEST(alt5_3);
 rb_ary_store(bind,10/*autovar*/,it); it=rb_funcall(self,s_term_AmethystParsercb_11AmethystParser,1,bind);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto break3;
 accept5:;
 if (rb_ivar_get(self,s__at_stopAmethystParser)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: rb_ivar_set(self,s__at_stopAmethystParser,Qnil);  ame_setpos(self,oldpos7); it=rb_funcall(self,s_term_AmethystParsercb_12AmethystParser,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_12); it=rb_obj_clone(c_100); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);it=rb_obj_clone(c_101);  it=AmethystParser_expression(self ); FAILTEST(alt1_12);
 rb_ary_store(bind,1/*x*/,it);   it=Amethyst_spaces(self ); FAILTEST(alt1_12); it=rb_obj_clone(c_102); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);it=rb_obj_clone(c_103);unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC('\000') ... UC('Z'):;case UC('\\') ... UC('\377'):;   it=Amethyst_empty(self ); FAILTEST(alt1_12);it=rb_ary_entry(bind,1/*x*/);
 rb_ary_store(bind,3/*_result*/,it);  break;case UC('[') ... UC('['):; int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_12;}
  it=rb_obj_clone(c_104); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_2);it=rb_obj_clone(c_105);it=rb_ary_entry(bind,1/*x*/);
 rb_ary_store(bind,11/*ors*/,it); it=rb_funcall(self,s_term_AmethystParsercb_13AmethystParser,1,bind); 
 rb_ary_store(bind,12/*_result*/,it); it=rb_ary_entry(bind,12/*_result*/);
 rb_ary_store(bind,3/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos9);if (rb_ivar_get(self,s__at_cutAmethystParser)!=Qnil) {rb_ivar_set(self,s__at_cutAmethystParser,Qnil); goto alt1_12;}
   it=Amethyst_empty(self ); FAILTEST(alt6_3);it=rb_ary_entry(bind,1/*x*/);
 rb_ary_store(bind,3/*_result*/,it);  
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos9); goto alt1_12;
 accept6:;
 break;} 
rb_ivar_set(self,s__at_cutAmethystParser,Qnil);goto accept1;
  alt1_12:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_100=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_100);
c_101=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_101);
c_102=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_102);
c_103=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_103);
c_104=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_104);
c_105=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_105);
c_109=rb_str_new2("|");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_109);
c_111=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_111);
c_112=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_112);
c_113=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_113);
c_114=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_114);
c_116=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_116);
c_117=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_117);
c_118=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_118);
c_119=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_119);
c_121=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_121);
c_122=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_122);
c_124=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_124);
c_125=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_125);
c_126=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_126);
c_127=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_127);
c_128=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_128);
c_129=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_129);
c_130=rb_str_new2("::");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_130);
c_131=rb_str_new2("::");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_131);
c_133=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_133);
c_134=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_134);
c_135=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_135);
c_136=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_136);
c_138=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_138);
c_139=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_139);
c_141=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_141);
c_142=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_142);
c_146=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_146);
c_147=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_147);
c_148=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_148);
c_149=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_149);
c_150=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_150);
c_151=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_151);
c_152=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_152);
c_153=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_153);
c_154=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_154);
c_155=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_155);
c_156=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_156);
c_157=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_157);
c_158=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_158);
c_159=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_159);
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
c_177=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_177);
c_178=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_178);
c_179=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_179);
c_180=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_180);
c_181=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_181);
c_182=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_182);
c_183=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_183);
c_184=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_184);
c_185=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_185);
c_186=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_186);
c_187=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_187);
c_188=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_188);
c_189=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_189);
c_190=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_190);
c_191=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_191);
c_192=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_192);
c_194=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_194);
c_195=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_195);
c_196=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_196);
c_197=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_197);
c_198=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_198);
c_199=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_199);
c_200=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_200);
c_201=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_201);
c_202=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_202);
c_203=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_203);
c_204=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_204);
c_205=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_205);
c_206=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_206);
c_207=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_207);
c_208=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_208);
c_209=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_209);
c_210=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_210);
c_211=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_211);
c_212=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_212);
c_213=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_213);
c_214=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_214);
c_215=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_215);
c_216=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_216);
c_217=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_217);
c_218=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_218);
c_219=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_219);
c_220=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_220);
c_221=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_221);
c_222=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_222);
c_223=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_223);
c_224=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_224);
c_225=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_225);
c_226=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_226);
c_227=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_227);
c_228=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_228);
c_229=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_229);
c_230=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_230);
c_231=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_231);
c_232=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_232);
c_233=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_233);
c_235=rb_const_get(rb_cObject, rb_intern("Args"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_235);
c_237=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_237);
c_238=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_238);
c_241=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_241);
c_242=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_242);
c_243=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_243);
c_244=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_244);
c_246=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_246);
c_247=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_247);
c_249=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_249);
c_250=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_250);
c_251=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_251);
c_252=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_252);
c_253=rb_str_new2("@@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_253);
c_254=rb_str_new2("@@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_254);
c_255=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_255);
c_256=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_256);
c_257=rb_str_new2("~");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_257);
c_258=rb_str_new2("~");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_258);
c_259=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_259);
c_260=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_260);
c_261=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_261);
c_262=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_262);
c_263=rb_str_new2(".");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_263);
c_264=rb_str_new2(".");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_264);
c_265=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_265);
c_266=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_266);
c_267=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_267);
c_268=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_268);
c_269=rb_str_new2(":");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_269);
c_270=rb_str_new2(":");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_270);
c_272=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_272);
c_273=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_273);
c_276=rb_str_new2("=>");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_276);
c_277=rb_str_new2("=>");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_277);
c_278=rb_str_new2("?");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_278);
c_279=rb_str_new2("?");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_279);
c_280=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_280);
c_281=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_281);
c_282=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_282);
c_283=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_283);
c_284=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_284);
c_285=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_285);
c_288=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_288);
c_289=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_289);
c_290=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_290);
c_291=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_291);
c_43=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_43);
c_44=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_44);
c_45=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_45);
c_46=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_46);
c_48=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_48);
c_49=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_49);
c_51=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_51);
c_52=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_52);
c_54=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_54);
c_55=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_55);
c_57=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_57);
c_58=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_58);
c_59=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_59);
c_60=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_60);
c_61=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_61);
c_62=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_62);
c_64=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_64);
c_65=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_65);
c_67=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_67);
c_68=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_68);
c_73=rb_str_new2("nested");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_73);
c_74=rb_str_new2("nested");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_74);
c_75=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_75);
c_76=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_76);
c_77=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_77);
c_78=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_78);
c_79=rb_str_new2("break");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_79);
c_80=rb_str_new2("break");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_80);
c_81=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_81);
c_82=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_82);
c_83=rb_str_new2("->");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_83);
c_84=rb_str_new2("->");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_84);
c_85=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_85);
c_86=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_86);
c_87=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_87);
c_88=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_88);
c_89=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_89);
c_90=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_90);
c_91=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_91);
c_92=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_92);
c_93=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_93);
c_94=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_94);
c_95=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_95);
c_96=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_96);
c_97=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_97);
c_98=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_98);
c_99=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_99);
s__args_AmethystParsercb_1AmethystParser=rb_intern("_args_AmethystParsercb_1");
s__at_cutAmethystParser=rb_intern("_at_cut");
s__at_stopAmethystParser=rb_intern("_at_stop");
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
s_number_AmethystParsercb_1AmethystParser=rb_intern("number_AmethystParsercb_1");
s_number_AmethystParsercb_2AmethystParser=rb_intern("number_AmethystParsercb_2");
s_number_AmethystParsercb_3AmethystParser=rb_intern("number_AmethystParsercb_3");
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
rb_define_method(cls_AmethystParser,"number",AmethystParser_number,0);
rb_define_method(cls_AmethystParser,"prefixed",AmethystParser_prefixed,0);
rb_define_method(cls_AmethystParser,"procargs",AmethystParser_procargs,0);
rb_define_method(cls_AmethystParser,"procargs2",AmethystParser_procargs2,0);
rb_define_method(cls_AmethystParser,"rubyarg",AmethystParser_rubyarg,0);
rb_define_method(cls_AmethystParser,"rule",AmethystParser_rule,0);
rb_define_method(cls_AmethystParser,"ruleargs",AmethystParser_ruleargs,0);
rb_define_method(cls_AmethystParser,"sequence",AmethystParser_sequence,0);
rb_define_method(cls_AmethystParser,"term",AmethystParser_term,0);
 rb_eval_string("testversionparser('01f7d9f80a0f42c6097b6c83211e99f5')");}
