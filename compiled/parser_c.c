#include "cthyst.h"
VALUE cls_AmethystParser;
VALUE AmethystParser__(VALUE self );
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_addargs(VALUE self );
VALUE AmethystParser_application(VALUE self );
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_argsOpt(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_atomicHostExpr(VALUE self );
VALUE AmethystParser_char(VALUE self );
VALUE AmethystParser_choice(VALUE self );
VALUE AmethystParser_clas(VALUE self ,VALUE a0);
VALUE AmethystParser_className(VALUE self );
VALUE AmethystParser_collect(VALUE self ,VALUE a0);
VALUE AmethystParser_digit(VALUE self );
VALUE AmethystParser_eChar(VALUE self );
VALUE AmethystParser_empty(VALUE self );
VALUE AmethystParser_endline(VALUE self );
VALUE AmethystParser_eof(VALUE self );
VALUE AmethystParser_expression(VALUE self );
VALUE AmethystParser_fails(VALUE self );
VALUE AmethystParser_grammar(VALUE self );
VALUE AmethystParser_igrammar(VALUE self );
VALUE AmethystParser_inlineHostExpr(VALUE self );
VALUE AmethystParser_key(VALUE self );
VALUE AmethystParser_letter(VALUE self );
VALUE AmethystParser_listOf(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_lower(VALUE self );
VALUE AmethystParser_modifier(VALUE self );
VALUE AmethystParser_name(VALUE self );
VALUE AmethystParser_nameFirst(VALUE self );
VALUE AmethystParser_nameRest(VALUE self );
VALUE AmethystParser_nr(VALUE self );
VALUE AmethystParser_number(VALUE self );
VALUE AmethystParser_prefixed(VALUE self );
VALUE AmethystParser_procargs(VALUE self );
VALUE AmethystParser_procargs2(VALUE self );
VALUE AmethystParser_regch(VALUE self ,VALUE a0);
VALUE AmethystParser_rubyarg(VALUE self );
VALUE AmethystParser_rule(VALUE self );
VALUE AmethystParser_ruleargs(VALUE self );
VALUE AmethystParser_seq(VALUE self ,VALUE a0);
VALUE AmethystParser_sequence(VALUE self );
VALUE AmethystParser_spaces(VALUE self );
VALUE AmethystParser_term(VALUE self );
VALUE AmethystParser_token(VALUE self ,VALUE a0);
VALUE AmethystParser_upper(VALUE self );
VALUE c_100;
VALUE c_101;
VALUE c_102;
VALUE c_103;
VALUE c_104;
VALUE c_105;
VALUE c_106;
VALUE c_107;
VALUE c_108;
VALUE c_109;
VALUE c_110;
VALUE c_111;
VALUE c_112;
VALUE c_116;
VALUE c_118;
VALUE c_119;
VALUE c_120;
VALUE c_121;
VALUE c_123;
VALUE c_124;
VALUE c_125;
VALUE c_126;
VALUE c_128;
VALUE c_129;
VALUE c_131;
VALUE c_132;
VALUE c_133;
VALUE c_134;
VALUE c_135;
VALUE c_136;
VALUE c_137;
VALUE c_138;
VALUE c_140;
VALUE c_141;
VALUE c_142;
VALUE c_143;
VALUE c_145;
VALUE c_146;
VALUE c_148;
VALUE c_149;
VALUE c_150;
VALUE c_151;
VALUE c_152;
VALUE c_153;
VALUE c_155;
VALUE c_156;
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
VALUE c_189;
VALUE c_190;
VALUE c_191;
VALUE c_192;
VALUE c_193;
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
VALUE c_234;
VALUE c_235;
VALUE c_236;
VALUE c_237;
VALUE c_238;
VALUE c_239;
VALUE c_240;
VALUE c_241;
VALUE c_242;
VALUE c_243;
VALUE c_244;
VALUE c_245;
VALUE c_246;
VALUE c_247;
VALUE c_249;
VALUE c_251;
VALUE c_252;
VALUE c_255;
VALUE c_256;
VALUE c_257;
VALUE c_258;
VALUE c_260;
VALUE c_261;
VALUE c_263;
VALUE c_264;
VALUE c_265;
VALUE c_266;
VALUE c_267;
VALUE c_268;
VALUE c_269;
VALUE c_270;
VALUE c_271;
VALUE c_272;
VALUE c_273;
VALUE c_274;
VALUE c_275;
VALUE c_276;
VALUE c_277;
VALUE c_278;
VALUE c_279;
VALUE c_280;
VALUE c_281;
VALUE c_282;
VALUE c_283;
VALUE c_284;
VALUE c_286;
VALUE c_287;
VALUE c_290;
VALUE c_291;
VALUE c_292;
VALUE c_293;
VALUE c_294;
VALUE c_295;
VALUE c_296;
VALUE c_297;
VALUE c_298;
VALUE c_299;
VALUE c_302;
VALUE c_303;
VALUE c_304;
VALUE c_305;
VALUE c_47;
VALUE c_48;
VALUE c_49;
VALUE c_50;
VALUE c_52;
VALUE c_53;
VALUE c_55;
VALUE c_56;
VALUE c_58;
VALUE c_59;
VALUE c_61;
VALUE c_62;
VALUE c_63;
VALUE c_64;
VALUE c_65;
VALUE c_66;
VALUE c_68;
VALUE c_69;
VALUE c_74;
VALUE c_75;
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
VALUE switchhashAmethystParser1;
VALUE AmethystParser__(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(spaces_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(7); rb_ary_store(bind,0/*o*/,a0);rb_ary_store(bind,5/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_entry(bind,0/*o*/);
 rb_ary_store(bind,1/*s*/,it);  it=rb_ary_entry(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,1/*s*/);  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_251); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_252);it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(name_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*r*/,it); it=rb_ary_entry(bind,5/*c*/);
 rb_ary_store(bind,1/*s*/,it);  it=rb_ary_entry(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,1/*s*/);it=rb_ary_entry(bind,4/*r*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(4); rb_ary_store(bind,0/*o*/,a0);rb_ary_store(bind,1/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_ary_entry(bind,0/*o*/); arg0=it;it=rb_ary_entry(bind,1/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(fail);
 rb_ary_store(bind,2/*r*/,it); it=CALL(_args_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_addargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*result*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=c_249; arg0=it; it=AmethystParser_clas(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2/*name*/,it); it=CALL(addargs_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(addargs_AmethystParsercb_2,1,bind);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto break1;
 if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(addargs_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,4/*_result*/,it); it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_application(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(17);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_name(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*autovar*/,it); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,2/*klas*/,it);  it=rb_obj_clone(c_137); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_138);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,3/*rule*/,it); it=CALL(application_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3/*rule*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,3/*rule*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('\''):;case UC(')') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(fail);it=rb_ary_new3(0);
 rb_ary_store(bind,4/*_result*/,it);  break;case UC('(') ... UC('('):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_140); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_141);  it=AmethystParser_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_142); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_143);it=rb_ary_new3(0);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*autovar*/,it); it=CALL(args_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,7/*r*/,it);  it=rb_obj_clone(c_145); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_146);it=rb_ary_entry(bind,7/*r*/);
 rb_ary_store(bind,8/*_result*/,it); it=rb_ary_entry(bind,8/*_result*/);
 rb_ary_store(bind,9/*r*/,it); it=CALL(args_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,10/*autovar*/,it); it=CALL(args_AmethystParsercb_3,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,11/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,12/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,12/*autovar*/);
 rb_ary_store(bind,13/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos4); ame_setlen(self,oldlen1);
	if(fail1) goto alt2_2;
it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,14/*_result*/,it); it=rb_ary_entry(bind,14/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3);it=rb_ary_new3(0);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;}it=rb_ary_entry(bind,4/*_result*/);
 rb_ary_store(bind,15/*arg*/,it); it=CALL(application_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,16/*_result*/,it); it=rb_ary_entry(bind,16/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(15); rb_ary_store(bind,2/*o*/,a0);rb_ary_store(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_entry(bind,0/*c*/);
 rb_ary_store(bind,1/*c*/,it); it=rb_ary_entry(bind,2/*o*/);
 rb_ary_store(bind,3/*o*/,it); it=rb_ary_entry(bind,3/*o*/);
 rb_ary_store(bind,4/*s*/,it);  it=rb_ary_entry(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,4/*s*/);  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_58); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_59);it=rb_ary_new3(0);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*autovar*/,it); it=CALL(args_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,7/*r*/,it); it=rb_ary_entry(bind,1/*c*/);
 rb_ary_store(bind,4/*s*/,it);  it=rb_ary_entry(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,4/*s*/);it=rb_ary_entry(bind,7/*r*/);
 rb_ary_store(bind,8/*_result*/,it); it=rb_ary_entry(bind,8/*_result*/);
 rb_ary_store(bind,9/*r*/,it); it=CALL(args_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,10/*autovar*/,it); it=CALL(args_AmethystParsercb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,11/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,12/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,12/*autovar*/);
 rb_ary_store(bind,13/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
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
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_ary_entry(bind,0/*c*/);
 rb_ary_store(bind,1/*c*/,it); it=rb_ary_entry(bind,2/*o*/);
 rb_ary_store(bind,3/*o*/,it); it=rb_ary_entry(bind,1/*c*/);
 rb_ary_store(bind,4/*c*/,it); it=rb_ary_entry(bind,3/*o*/);
 rb_ary_store(bind,5/*o*/,it); it=rb_ary_entry(bind,5/*o*/);
 rb_ary_store(bind,6/*s*/,it);  it=rb_ary_entry(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_entry(bind,6/*s*/);  it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_74); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_75);it=rb_ary_new3(0);
 rb_ary_store(bind,7/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,8/*autovar*/,it); it=CALL(argsOpt_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,9/*r*/,it); it=rb_ary_entry(bind,4/*c*/);
 rb_ary_store(bind,6/*s*/,it);  it=rb_ary_entry(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_entry(bind,6/*s*/);it=rb_ary_entry(bind,9/*r*/);
 rb_ary_store(bind,10/*_result*/,it); it=rb_ary_entry(bind,10/*_result*/);
 rb_ary_store(bind,11/*r*/,it); it=CALL(argsOpt_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,12/*autovar*/,it); it=CALL(argsOpt_AmethystParsercb_3,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,13/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,13/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,14/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,14/*autovar*/);
 rb_ary_store(bind,15/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,15/*autovar*/);
 rb_ary_store(bind,16/*_result*/,it); it=rb_ary_entry(bind,16/*_result*/);
 rb_ary_store(bind,17/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,17/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,17/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_atomicHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_endline(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
  it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,2/*s*/,it); it=CALL(atomicHostExpr_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(atomicHostExpr_AmethystParsercb_2,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(pass2);
 rb_ary_store(bind,5/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,6/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,6/*autovar*/);
 rb_ary_store(bind,7/*_result*/,it); it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_char(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*c*/,it); it=CALL(char_AmethystParsercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*c*/);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_choice(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*f*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_sequence(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_obj_clone(c_116); arg0=it; it=AmethystParser_token(self ,arg0); FAILTEST(break1);  it=AmethystParser_sequence(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(name_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(name_AmethystParsercb_2,1,bind); it=rb_ary_entry(bind,0/*f*/);
 rb_ary_store(bind,5/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,5/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*ary*/,it); it=CALL(choice_AmethystParsercb_1,1,bind);
 rb_ary_store(bind,7/*_result*/,it); it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_AmethystParsercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it);   it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_128); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_129);  it=AmethystParser_upper(self ); FAILTEST(fail);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(name_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(name_AmethystParsercb_2,1,bind); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,5/*it*/,it); it=CALL(name_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(2); rb_ary_store(bind,0/*ors*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(collect_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_digit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(number_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_eChar(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('['):;case UC(']') ... UC('\377'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_131);
 rb_ary_store(bind,0/*c*/,it); it=CALL(eChar_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1/*o*/,it);  it=rb_ary_entry(bind,1/*o*/); arg0=it;it=rb_obj_clone(c_132); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*r*/,it); it=CALL(eChar_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,5/*c*/,it); it=CALL(eChar_AmethystParsercb_3,1,bind); FAILTEST(alt1_3);it=rb_ary_entry(bind,5/*c*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC('\\') ... UC('\\'):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_133); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_134);  it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,5/*c*/,it); it=CALL(eChar_AmethystParsercb_3,1,bind); FAILTEST(alt2_2);it=rb_ary_entry(bind,5/*c*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
 rb_ary_store(bind,7/*c*/,it); it=CALL(eChar_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_135);
 rb_ary_store(bind,0/*c*/,it); it=CALL(eChar_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1/*o*/,it);  it=rb_ary_entry(bind,1/*o*/); arg0=it;it=rb_obj_clone(c_136); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt2_3);
 rb_ary_store(bind,2/*r*/,it); it=CALL(eChar_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 rb_ary_store(bind,5/*c*/,it); it=CALL(eChar_AmethystParsercb_3,1,bind); FAILTEST(alt2_4);it=rb_ary_entry(bind,5/*c*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;}it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE AmethystParser_endline(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\n') ... UC('\n'):;  it=rb_obj_clone(c_148); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_149);
 rb_ary_store(bind,0/*_result*/,it);  break;case UC('\r') ... UC('\r'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_150); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_151);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_152); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_153);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;default:;   it=AmethystParser_fails(self ); FAILTEST(fail); break;}it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_choice(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_AmethystParsercb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_61); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_62);  it=AmethystParser_name(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*name*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_63); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_64);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1/*parent*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=CALL(grammar_AmethystParsercb_1,1,bind);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_65); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_66);it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rule(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(name_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*rules*/,it);   it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_68); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_69);it=CALL(grammar_AmethystParsercb_2,1,bind);
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
 it=rb_ary_new3(0);
 rb_ary_store(bind,1/*autovar*/,it); unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('`'):;case UC('b') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(alt1_2); break;case UC('a') ... UC('a'):; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
  it=rb_obj_clone(c_302); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_303);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_2;
 accept2:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(procargs2_AmethystParsercb_1,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('\000') ... UC('`'):;case UC('b') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(break2); break;case UC('a') ... UC('a'):; int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  it=rb_obj_clone(c_304); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);it=rb_obj_clone(c_305);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt3_2); 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=AmethystParser_empty(self ); FAILTEST(alt3_3); 
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break2;
 accept3:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(igrammar_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,4/*it*/,it); it=CALL(igrammar_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,5/*autovar*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_grammar(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,5/*autovar*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=CALL(igrammar_AmethystParsercb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,6/*a*/,it); it=rb_ary_entry(bind,6/*a*/);
 rb_ary_store(bind,7/*_result*/,it); it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_inlineHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_obj_clone(c_47); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_48);  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_49); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_50);it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,2/*r*/,it);  it=rb_obj_clone(c_52); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_53);it=rb_ary_entry(bind,2/*r*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
 rb_ary_store(bind,4/*r*/,it); it=CALL(inlineHostExpr_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*autovar*/,it); it=CALL(inlineHostExpr_AmethystParsercb_2,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,7/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,8/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
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

  it=AmethystParser_spaces(self ); FAILTEST(fail);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_263); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_264);  it=AmethystParser_className(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*name*/,it); it=CALL(key_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1/*vars*/,it); it=CALL(key_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_265); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_266);  it=AmethystParser_name(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*name*/,it); it=CALL(key_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_267); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=rb_obj_clone(c_268);  it=AmethystParser_name(self ); FAILTEST(alt1_4);
 rb_ary_store(bind,0/*name*/,it); it=CALL(key_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_letter(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_lower(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_upper(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(8); rb_ary_store(bind,1/*rule*/,a0);rb_ary_store(bind,4/*delim*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*f*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_ary_entry(bind,1/*rule*/); arg0=it; it=CALL(apply,1 ,arg0); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(spaces_AmethystParsercb_2,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_ary_entry(bind,4/*delim*/); arg0=it; it=CALL(apply,1 ,arg0); FAILTEST(break1); it=rb_ary_entry(bind,1/*rule*/); arg0=it; it=CALL(apply,1 ,arg0); FAILTEST(break1);
 rb_ary_store(bind,5/*autovar*/,it); it=CALL(listOf_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,6/*autovar*/,it); it=CALL(listOf_AmethystParsercb_2,1,bind); it=rb_ary_entry(bind,0/*f*/);
 rb_ary_store(bind,7/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,7/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_lower(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(lower_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_modifier(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_term(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(modifier_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1/*s*/,it);   it=AmethystParser_spaces(self ); FAILTEST(alt1_3);it=rb_ary_entry(bind,1/*s*/);
 rb_ary_store(bind,2/*s*/,it);  it=rb_ary_entry(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_ary_entry(bind,2/*s*/);it=rb_ary_new3(0);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_endline(self ); FAILTEST(alt2_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
  it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(modifier_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,5/*c*/,it); it=CALL(modifier_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it);   it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_55); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_56);  it=AmethystParser_nameFirst(self ); FAILTEST(fail);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(name_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(name_AmethystParsercb_2,1,bind); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,5/*it*/,it); it=CALL(name_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nameFirst(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('^'):;case UC('`') ... UC('\377'):;   it=AmethystParser_letter(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it);  break;case UC('_') ... UC('_'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_letter(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_155); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_156);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;}it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nameRest(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_nameFirst(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_digit(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_2);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('\''):;case UC(')') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(alt1_2); break;case UC('(') ... UC('('):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
  it=rb_obj_clone(c_118); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_119);  it=AmethystParser_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_120); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_121);it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,2/*r*/,it);  it=rb_obj_clone(c_123); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_124);it=rb_ary_entry(bind,2/*r*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
 rb_ary_store(bind,4/*r*/,it); it=CALL(inlineHostExpr_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*autovar*/,it); it=CALL(inlineHostExpr_AmethystParsercb_2,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);  it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos4); ame_setlen(self,oldlen1);
	if(fail1) goto alt2_2;
 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 break;}  it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_125); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_126);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,7/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,7/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_number(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it);  it=CALL(number_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=CALL(number_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(spaces_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_269); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_270);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*expr*/,it); it=CALL(prefixed_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_3);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('~') ... UC('~'):;  it=rb_obj_clone(c_271); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_272);
 rb_ary_store(bind,2/*neg*/,it);  break;case UC('&') ... UC('&'):;  it=rb_obj_clone(c_273); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_274);
 rb_ary_store(bind,2/*neg*/,it);  break;default:;   it=AmethystParser_fails(self ); FAILTEST(alt1_3); break;}  it=AmethystParser_prefixed(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,3/*m*/,it); it=CALL(prefixed_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_4;}
   it=AmethystParser_modifier(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,4/*from*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_4;}
   it=AmethystParser_spaces(self ); FAILTEST(alt2_3); it=rb_obj_clone(c_275); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);it=rb_obj_clone(c_276);int oldpos3=ame_getpos(self);
  it=CALL(prefixed_AmethystParsercb_3,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(reject1); x=1; goto accept3;  reject1: x=0; accept3: it=Qnil; ame_setpos(self,oldpos3); if (x==0) goto alt2_3;int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt2_3;}
   it=AmethystParser_spaces(self ); FAILTEST(alt3_2); it=rb_obj_clone(c_277); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);it=rb_obj_clone(c_278); 
ISET(cut,Qnil);goto accept4;
alt3_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt2_3;}
   it=AmethystParser_empty(self ); FAILTEST(alt3_3); 
ISET(cut,Qnil);goto accept4;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_3;
 accept4:;
it=CALL(prefixed_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_4;
 accept2:;
int oldpos5; while(1){oldpos5=ame_getpos(self); int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser__(self ); FAILTEST(alt4_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt4_2); 
ISET(cut,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_empty(self ); FAILTEST(alt4_3); 
ISET(cut,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos6); goto break1;
 accept5:;
  it=AmethystParser_spaces(self ); FAILTEST(break1);unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('*') ... UC('*'):;  it=rb_obj_clone(c_279); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_280);
 rb_ary_store(bind,5/*one*/,it); it=CALL(prefixed_AmethystParsercb_5,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  break;case UC('+') ... UC('+'):;  it=rb_obj_clone(c_281); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_282);
 rb_ary_store(bind,5/*one*/,it); it=CALL(prefixed_AmethystParsercb_5,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  break;case UC(':') ... UC(':'):;  it=rb_obj_clone(c_283); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_284);int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
 int oldpos8=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_2;}
   it=AmethystParser_key(self ); FAILTEST(alt6_2);
 rb_ary_store(bind,6/*name*/,it);  
ISET(cut,Qnil);goto accept7;
alt6_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_2;}
   it=AmethystParser_name(self ); FAILTEST(alt6_3);
 rb_ary_store(bind,6/*name*/,it);  
ISET(cut,Qnil);goto accept7;
  alt6_3:  ame_setpos(self,oldpos8); goto alt5_2;
 accept7:;
unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC('\000') ... UC('Z'):;case UC('\\') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(alt5_2);it=Qnil;
 rb_ary_store(bind,7/*append*/,it);  break;case UC('[') ... UC('['):; int oldpos9=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_2;}
  it=rb_obj_clone(c_286); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_2);it=rb_obj_clone(c_287);it=Qtrue;
 rb_ary_store(bind,7/*append*/,it);  
ISET(cut,Qnil);goto accept8;
alt7_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_2;}
   it=AmethystParser_empty(self ); FAILTEST(alt7_3);it=Qnil;
 rb_ary_store(bind,7/*append*/,it);  
ISET(cut,Qnil);goto accept8;
  alt7_3:  ame_setpos(self,oldpos9); goto alt5_2;
 accept8:;
 break;}it=CALL(prefixed_AmethystParsercb_6,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  
ISET(cut,Qnil);goto accept6;
alt5_2: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt5_3);
 rb_ary_store(bind,8/*e*/,it); it=CALL(prefixed_AmethystParsercb_7,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  
ISET(cut,Qnil);goto accept6;
  alt5_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;case UC('=') ... UC('='):;  it=rb_obj_clone(c_290); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_291);  it=AmethystParser_prefixed(self ); FAILTEST(break1);
 rb_ary_store(bind,9/*it*/,it); it=CALL(prefixed_AmethystParsercb_8,1,bind);  break;case UC('?') ... UC('?'):;  it=rb_obj_clone(c_292); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_293);it=CALL(prefixed_AmethystParsercb_9,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  break;case UC('[') ... UC('['):;  it=rb_obj_clone(c_294); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_295);  it=AmethystParser_expression(self ); FAILTEST(break1);
 rb_ary_store(bind,9/*it*/,it); it=CALL(prefixed_AmethystParsercb_10,1,bind);   it=AmethystParser_spaces(self ); FAILTEST(break1); it=rb_obj_clone(c_296); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_obj_clone(c_297); break;default:;   it=AmethystParser_fails(self ); FAILTEST(break1); break;} if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,4/*from*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(procargs_AmethystParsercb_1,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*c*/,it); it=CALL(procargs_AmethystParsercb_2,1,bind); FAILTEST(alt1_2);it=CALL(procargs_AmethystParsercb_3,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_procargs2(self ); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(procargs_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashAmethystParser1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_procargs2(self ); FAILTEST(break1);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(procargs2_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,3/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,5/*a*/,it); it=CALL(procargs2_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,5/*a*/,it); it=CALL(procargs2_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  break;}it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(5); rb_ary_store(bind,3/*regex*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*c*/,it); it=CALL(char_AmethystParsercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*c*/);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
 rb_ary_store(bind,2/*c*/,it); it=CALL(regch_AmethystParsercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,2/*c*/);
 rb_ary_store(bind,4/*_result*/,it); it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(17);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*s*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,1/*n*/,it); unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('!'):;case UC('#') ... UC('&'):;case UC('(') ... UC('-'):;case UC('/') ... UC('_'):;case UC('a') ... UC('\377'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_160);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_161);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_162); arg0=it;it=rb_obj_clone(c_163); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_164);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_165);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_166); arg0=it;it=rb_obj_clone(c_167); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_3);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_168);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_169);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_170); arg0=it;it=rb_obj_clone(c_171); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_4);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_5;}
   it=AmethystParser_spaces(self ); FAILTEST(alt2_2); it=rb_obj_clone(c_172); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_173);
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_5;}
  it=CALL(rubyarg_AmethystParsercb_2,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt2_3);
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_5;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_4); 
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto alt1_5;
 accept2:;
int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_5;}
   it=AmethystParser__(self ); FAILTEST(alt3_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt3_2); 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_5;}
   it=AmethystParser_empty(self ); FAILTEST(alt3_3); 
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto alt1_5;
 accept3:;
  it=AmethystParser_name(self ); FAILTEST(alt1_5);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos4=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_6;}
   it=AmethystParser__(self ); FAILTEST(alt4_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt4_2); 
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt4_3); 
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos4); goto alt1_6;
 accept4:;
  it=AmethystParser_key(self ); FAILTEST(alt1_6);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(rubyarg_AmethystParsercb_4,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt1_7);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_7:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC('\"') ... UC('\"'):; int oldpos5=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_174);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_175);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_176); arg0=it;it=rb_obj_clone(c_177); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_2);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_178);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_179);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_180); arg0=it;it=rb_obj_clone(c_181); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_3);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
alt5_3: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_182);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_183);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_184); arg0=it;it=rb_obj_clone(c_185); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt5_4);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
alt5_4: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_186); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_5);it=rb_obj_clone(c_187);
 rb_ary_store(bind,8/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_5,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,9/*autovar*/,it); int oldpos6; while(1){oldpos6=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('\000') ... UC('!'):;case UC('#') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break1);
 rb_ary_store(bind,10/*autovar*/,it);  break;case UC('\"') ... UC('\"'):; int oldpos7=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=rb_obj_clone(c_189); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_2);it=rb_obj_clone(c_190);ISET(cut,Qtrue);ISET(stop,Qtrue);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt6_3);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;}it=CALL(rubyarg_AmethystParsercb_6,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,11/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_7,1,bind); it=CALL(rubyarg_AmethystParsercb_8,1,bind); 
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
alt5_5: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_6;}
   it=AmethystParser_spaces(self ); FAILTEST(alt7_2); it=rb_obj_clone(c_191); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_2);it=rb_obj_clone(c_192);
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_6;}
  it=CALL(rubyarg_AmethystParsercb_2,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt7_3);
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept7;
alt7_3: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt7_4); 
ISET(cut,Qnil);goto accept7;
  alt7_4:  ame_setpos(self,oldpos8); goto alt5_6;
 accept7:;
int oldpos9=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_6;}
   it=AmethystParser__(self ); FAILTEST(alt8_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt8_2); 
ISET(cut,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt8_3); 
ISET(cut,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos9); goto alt5_6;
 accept8:;
  it=AmethystParser_name(self ); FAILTEST(alt5_6);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
alt5_6: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos10=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_7;}
   it=AmethystParser__(self ); FAILTEST(alt9_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt9_2); 
ISET(cut,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_7;}
   it=AmethystParser_empty(self ); FAILTEST(alt9_3); 
ISET(cut,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos10); goto alt5_7;
 accept9:;
  it=AmethystParser_key(self ); FAILTEST(alt5_7);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
alt5_7: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(rubyarg_AmethystParsercb_4,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt5_8);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
  alt5_8:  ame_setpos(self,oldpos5); goto fail;
 accept5:;
 break;case UC('\'') ... UC('\''):; int oldpos11=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_193);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_194);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_195); arg0=it;it=rb_obj_clone(c_196); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_2);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_197);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_198);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_199); arg0=it;it=rb_obj_clone(c_200); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_3);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept10;
alt10_3: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_201);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_202);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_203); arg0=it;it=rb_obj_clone(c_204); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt10_4);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept10;
alt10_4: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_205); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt10_5);it=rb_obj_clone(c_206);
 rb_ary_store(bind,12/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_9,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,13/*autovar*/,it); int oldpos12; while(1){oldpos12=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC('\000') ... UC('&'):;case UC('(') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break2);
 rb_ary_store(bind,14/*autovar*/,it);  break;case UC('\'') ... UC('\''):; int oldpos13=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos13);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  it=rb_obj_clone(c_208); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt11_2);it=rb_obj_clone(c_209);ISET(cut,Qtrue);ISET(stop,Qtrue);
 rb_ary_store(bind,14/*autovar*/,it);  
ISET(cut,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos13);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt11_3);
 rb_ary_store(bind,14/*autovar*/,it);  
ISET(cut,Qnil);goto accept11;
  alt11_3:  ame_setpos(self,oldpos13); goto break2;
 accept11:;
 break;}it=CALL(rubyarg_AmethystParsercb_10,1,bind);  if (IGET(stop)!=Qnil){{oldpos12=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos12); it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,15/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_11,1,bind); it=CALL(rubyarg_AmethystParsercb_8,1,bind); 
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept10;
alt10_5: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos14=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt10_6;}
   it=AmethystParser_spaces(self ); FAILTEST(alt12_2); it=rb_obj_clone(c_210); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt12_2);it=rb_obj_clone(c_211);
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept12;
alt12_2: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt10_6;}
  it=CALL(rubyarg_AmethystParsercb_2,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt12_3);
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept12;
alt12_3: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt10_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt12_4); 
ISET(cut,Qnil);goto accept12;
  alt12_4:  ame_setpos(self,oldpos14); goto alt10_6;
 accept12:;
int oldpos15=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos15);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt10_6;}
   it=AmethystParser__(self ); FAILTEST(alt13_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt13_2); 
ISET(cut,Qnil);goto accept13;
alt13_2: ame_setpos(self,oldpos15);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt10_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt13_3); 
ISET(cut,Qnil);goto accept13;
  alt13_3:  ame_setpos(self,oldpos15); goto alt10_6;
 accept13:;
  it=AmethystParser_name(self ); FAILTEST(alt10_6);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept10;
alt10_6: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos16=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos16);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt10_7;}
   it=AmethystParser__(self ); FAILTEST(alt14_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt14_2); 
ISET(cut,Qnil);goto accept14;
alt14_2: ame_setpos(self,oldpos16);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt10_7;}
   it=AmethystParser_empty(self ); FAILTEST(alt14_3); 
ISET(cut,Qnil);goto accept14;
  alt14_3:  ame_setpos(self,oldpos16); goto alt10_7;
 accept14:;
  it=AmethystParser_key(self ); FAILTEST(alt10_7);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept10;
alt10_7: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(rubyarg_AmethystParsercb_4,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt10_8);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept10;
  alt10_8:  ame_setpos(self,oldpos11); goto fail;
 accept10:;
 break;case UC('.') ... UC('.'):; int oldpos17=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_212);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_213);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_214); arg0=it;it=rb_obj_clone(c_215); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_2);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_216);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_217);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_218); arg0=it;it=rb_obj_clone(c_219); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_3);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept15;
alt15_3: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_220);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_221);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_222); arg0=it;it=rb_obj_clone(c_223); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt15_4);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept15;
alt15_4: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_224); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt15_5);it=rb_obj_clone(c_225);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept15;
alt15_5: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_226); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt15_6);it=rb_obj_clone(c_227);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept15;
alt15_6: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos18=ame_getpos(self);
alt16_1: ame_setpos(self,oldpos18);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt15_7;}
   it=AmethystParser_spaces(self ); FAILTEST(alt16_2); it=rb_obj_clone(c_228); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt16_2);it=rb_obj_clone(c_229);
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept16;
alt16_2: ame_setpos(self,oldpos18);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt15_7;}
  it=CALL(rubyarg_AmethystParsercb_2,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt16_3);
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept16;
alt16_3: ame_setpos(self,oldpos18);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt15_7;}
   it=AmethystParser_empty(self ); FAILTEST(alt16_4); 
ISET(cut,Qnil);goto accept16;
  alt16_4:  ame_setpos(self,oldpos18); goto alt15_7;
 accept16:;
int oldpos19=ame_getpos(self);
alt17_1: ame_setpos(self,oldpos19);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt15_7;}
   it=AmethystParser__(self ); FAILTEST(alt17_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt17_2); 
ISET(cut,Qnil);goto accept17;
alt17_2: ame_setpos(self,oldpos19);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt15_7;}
   it=AmethystParser_empty(self ); FAILTEST(alt17_3); 
ISET(cut,Qnil);goto accept17;
  alt17_3:  ame_setpos(self,oldpos19); goto alt15_7;
 accept17:;
  it=AmethystParser_name(self ); FAILTEST(alt15_7);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept15;
alt15_7: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos20=ame_getpos(self);
alt18_1: ame_setpos(self,oldpos20);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt15_8;}
   it=AmethystParser__(self ); FAILTEST(alt18_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt18_2); 
ISET(cut,Qnil);goto accept18;
alt18_2: ame_setpos(self,oldpos20);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt15_8;}
   it=AmethystParser_empty(self ); FAILTEST(alt18_3); 
ISET(cut,Qnil);goto accept18;
  alt18_3:  ame_setpos(self,oldpos20); goto alt15_8;
 accept18:;
  it=AmethystParser_key(self ); FAILTEST(alt15_8);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept15;
alt15_8: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(rubyarg_AmethystParsercb_4,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt15_9);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept15;
  alt15_9:  ame_setpos(self,oldpos17); goto fail;
 accept15:;
 break;case UC('`') ... UC('`'):; int oldpos21=ame_getpos(self);
alt19_1: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_230); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt19_2);it=rb_obj_clone(c_231);  it=AmethystParser_expression(self ); FAILTEST(alt19_2);
 rb_ary_store(bind,16/*e*/,it);  it=rb_obj_clone(c_232); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt19_2);it=rb_obj_clone(c_233);it=CALL(rubyarg_AmethystParsercb_12,1,bind); 
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept19;
alt19_2: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_234);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_235);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_236); arg0=it;it=rb_obj_clone(c_237); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_3);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept19;
alt19_3: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_238);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_239);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_240); arg0=it;it=rb_obj_clone(c_241); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_4);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept19;
alt19_4: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_242);
 rb_ary_store(bind,2/*c*/,it); it=rb_obj_clone(c_243);
 rb_ary_store(bind,3/*o*/,it);  it=rb_obj_clone(c_244); arg0=it;it=rb_obj_clone(c_245); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt19_5);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept19;
alt19_5: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos22=ame_getpos(self);
alt20_1: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt19_6;}
   it=AmethystParser_spaces(self ); FAILTEST(alt20_2); it=rb_obj_clone(c_246); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt20_2);it=rb_obj_clone(c_247);
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept20;
alt20_2: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt19_6;}
  it=CALL(rubyarg_AmethystParsercb_2,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt20_3);
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept20;
alt20_3: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt19_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt20_4); 
ISET(cut,Qnil);goto accept20;
  alt20_4:  ame_setpos(self,oldpos22); goto alt19_6;
 accept20:;
int oldpos23=ame_getpos(self);
alt21_1: ame_setpos(self,oldpos23);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt19_6;}
   it=AmethystParser__(self ); FAILTEST(alt21_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt21_2); 
ISET(cut,Qnil);goto accept21;
alt21_2: ame_setpos(self,oldpos23);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt19_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt21_3); 
ISET(cut,Qnil);goto accept21;
  alt21_3:  ame_setpos(self,oldpos23); goto alt19_6;
 accept21:;
  it=AmethystParser_name(self ); FAILTEST(alt19_6);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept19;
alt19_6: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos24=ame_getpos(self);
alt22_1: ame_setpos(self,oldpos24);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt19_7;}
   it=AmethystParser__(self ); FAILTEST(alt22_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt22_2); 
ISET(cut,Qnil);goto accept22;
alt22_2: ame_setpos(self,oldpos24);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt19_7;}
   it=AmethystParser_empty(self ); FAILTEST(alt22_3); 
ISET(cut,Qnil);goto accept22;
  alt22_3:  ame_setpos(self,oldpos24); goto alt19_7;
 accept22:;
  it=AmethystParser_key(self ); FAILTEST(alt19_7);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept19;
alt19_7: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(rubyarg_AmethystParsercb_4,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt19_8);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept19;
  alt19_8:  ame_setpos(self,oldpos21); goto fail;
 accept19:;
 break;}it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(rule_AmethystParsercb_1,1,bind); it=CALL(rule_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,0/*bnding*/,it);   it=AmethystParser_name(self ); FAILTEST(fail);
 rb_ary_store(bind,1/*name*/,it);   it=AmethystParser_ruleargs(self ); FAILTEST(fail);
 rb_ary_store(bind,2/*args*/,it);   it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_obj_clone(c_298); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_299);  it=AmethystParser_expression(self ); FAILTEST(fail);
 rb_ary_store(bind,3/*body*/,it); it=CALL(rule_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,3/*body*/,it); it=CALL(rule_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,4/*locals*/,it); it=CALL(rule_AmethystParsercb_5,1,bind); it=CALL(rule_AmethystParsercb_6,1,bind);
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('\''):;case UC(')') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(fail);it=rb_ary_new3(0);
 rb_ary_store(bind,0/*_result*/,it);  break;case UC('(') ... UC('('):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_obj_clone(c_255); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_256);  it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(c_257); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_258);it=rb_ary_new3(0);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(procargs2_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,3/*r*/,it);  it=rb_obj_clone(c_260); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_261);it=rb_ary_entry(bind,3/*r*/);
 rb_ary_store(bind,4/*_result*/,it); it=rb_ary_entry(bind,4/*_result*/);
 rb_ary_store(bind,5/*r*/,it); it=CALL(ruleargs_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,6/*autovar*/,it); it=CALL(ruleargs_AmethystParsercb_2,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,7/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,8/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,8/*autovar*/);
 rb_ary_store(bind,9/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,10/*_result*/,it); it=rb_ary_entry(bind,10/*_result*/);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;}it=rb_ary_entry(bind,0/*_result*/);
 rb_ary_store(bind,11/*autovar*/,it); it=CALL(ruleargs_AmethystParsercb_3,1,bind); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,12/*autovar*/,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_addargs(self ); FAILTEST(pass4);
 rb_ary_store(bind,13/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;
it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,14/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto fail;
it=rb_ary_entry(bind,14/*autovar*/);
 rb_ary_store(bind,15/*_result*/,it); it=rb_ary_entry(bind,15/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(2); rb_ary_store(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_ary_entry(bind,0/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,0/*s*/);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nr(self ); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,2/*ary*/,it); it=CALL(sequence_AmethystParsercb_1,1,bind);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_spaces(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=CALL(spaces_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(spaces_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*s*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,1/*x*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_className(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*cls*/,it); it=CALL(term_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_3); it=rb_obj_clone(c_80); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_81); it=rb_obj_clone(c_82); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_83);  it=AmethystParser_expression(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,4/*expr*/,it);   it=AmethystParser_spaces(self ); FAILTEST(alt1_3); it=rb_obj_clone(c_84); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_85);it=CALL(term_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_4); it=rb_obj_clone(c_86); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=rb_obj_clone(c_87);it=CALL(term_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_application(self ); FAILTEST(alt1_5);
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt1_6);
 rb_ary_store(bind,5/*it*/,it); it=CALL(term_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_7);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC(','):;case UC('.') ... UC('\377'):;  it=rb_obj_clone(c_88); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_7);it=rb_obj_clone(c_89);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_7);
 rb_ary_store(bind,1/*x*/,it);  break;case UC('-') ... UC('-'):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_7;}
  it=rb_obj_clone(c_90); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_obj_clone(c_91);  it=AmethystParser_atomicHostExpr(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,1/*x*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_7;}
  it=rb_obj_clone(c_92); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);it=rb_obj_clone(c_93);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,1/*x*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_7;
 accept2:;
 break;}it=CALL(term_AmethystParsercb_5,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_8); it=rb_obj_clone(c_94); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_8);it=rb_obj_clone(c_95);int oldpos3; while(1){oldpos3=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('\000') ... UC('!'):;case UC('#') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*autovar*/,it); it=CALL(listOf_AmethystParsercb_2,1,bind);  break;case UC('\"') ... UC('\"'):; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=rb_obj_clone(c_96); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);it=rb_obj_clone(c_97);ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,6/*autovar*/,it); it=CALL(listOf_AmethystParsercb_2,1,bind);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto break1;
 accept3:;
 break;} if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=CALL(term_AmethystParsercb_6,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_9); it=rb_obj_clone(c_98); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_9);it=rb_obj_clone(c_99);int oldpos5; while(1){oldpos5=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC('\000') ... UC('&'):;case UC('(') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break2);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(term_AmethystParsercb_7,1,bind);  break;case UC('\'') ... UC('\''):; int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  it=rb_obj_clone(c_100); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt4_2);it=rb_obj_clone(c_101);ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt4_3);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(term_AmethystParsercb_7,1,bind);  
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos6); goto break2;
 accept4:;
 break;} if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=CALL(term_AmethystParsercb_8,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_number(self ); FAILTEST(alt1_10);
 rb_ary_store(bind,5/*it*/,it); it=CALL(term_AmethystParsercb_9,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_obj_clone(c_102);
 rb_ary_store(bind,8/*s*/,it);   it=AmethystParser_spaces(self ); FAILTEST(alt1_11);it=rb_ary_entry(bind,8/*s*/);
 rb_ary_store(bind,9/*s*/,it);  it=rb_ary_entry(bind,9/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_11);it=rb_ary_entry(bind,9/*s*/);int oldpos7; while(1){oldpos7=ame_getpos(self); int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break3;}
 it=rb_obj_clone(c_103);
 rb_ary_store(bind,8/*s*/,it);   it=AmethystParser_spaces(self ); FAILTEST(alt5_2);it=rb_obj_clone(c_104);
 rb_ary_store(bind,9/*s*/,it);  it=rb_obj_clone(c_105); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_2);it=rb_obj_clone(c_106);ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break3;}
   it=AmethystParser_eChar(self ); FAILTEST(alt5_3);
 rb_ary_store(bind,10/*autovar*/,it); it=CALL(term_AmethystParsercb_10,1,bind);  
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto break3;
 accept5:;
 if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=CALL(term_AmethystParsercb_11,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_12); it=rb_obj_clone(c_107); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);it=rb_obj_clone(c_108);  it=AmethystParser_expression(self ); FAILTEST(alt1_12);
 rb_ary_store(bind,1/*x*/,it);   it=AmethystParser_spaces(self ); FAILTEST(alt1_12); it=rb_obj_clone(c_109); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);it=rb_obj_clone(c_110);unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC('\000') ... UC('Z'):;case UC('\\') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(alt1_12);it=rb_ary_entry(bind,1/*x*/);
 rb_ary_store(bind,3/*_result*/,it);  break;case UC('[') ... UC('['):; int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_12;}
  it=rb_obj_clone(c_111); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_2);it=rb_obj_clone(c_112);it=rb_ary_entry(bind,1/*x*/);
 rb_ary_store(bind,11/*ors*/,it); it=CALL(term_AmethystParsercb_12,1,bind); 
 rb_ary_store(bind,12/*_result*/,it); it=rb_ary_entry(bind,12/*_result*/);
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_12;}
   it=AmethystParser_empty(self ); FAILTEST(alt6_3);it=rb_ary_entry(bind,1/*x*/);
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos9); goto alt1_12;
 accept6:;
 break;} 
ISET(cut,Qnil);goto accept1;
  alt1_12:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(4); rb_ary_store(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_spaces(self ); FAILTEST(fail);it=rb_ary_entry(bind,0/*s*/);
 rb_ary_store(bind,1/*s*/,it);  it=rb_ary_entry(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,1/*s*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_upper(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(upper_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_47=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_47);
c_48=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_48);
c_49=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_49);
c_50=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_50);
c_52=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_52);
c_53=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_53);
c_55=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_55);
c_56=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_56);
c_58=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_58);
c_59=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_59);
c_61=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_61);
c_62=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_62);
c_63=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_63);
c_64=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_64);
c_65=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_65);
c_66=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_66);
c_68=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_68);
c_69=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_69);
c_74=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_74);
c_75=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_75);
c_80=rb_str_new2("nested");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_80);
c_81=rb_str_new2("nested");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_81);
c_82=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_82);
c_83=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_83);
c_84=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_84);
c_85=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_85);
c_86=rb_str_new2("break");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_86);
c_87=rb_str_new2("break");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_87);
c_88=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_88);
c_89=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_89);
c_90=rb_str_new2("->");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_90);
c_91=rb_str_new2("->");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_91);
c_92=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_92);
c_93=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_93);
c_94=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_94);
c_95=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_95);
c_96=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_96);
c_97=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_97);
c_98=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_98);
c_99=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_99);
c_100=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_100);
c_101=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_101);
c_102=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_102);
c_103=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_103);
c_104=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_104);
c_105=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_105);
c_106=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_106);
c_107=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_107);
c_108=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_108);
c_109=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_109);
c_110=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_110);
c_111=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_111);
c_112=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_112);
c_116=rb_str_new2("|");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_116);
c_118=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_118);
c_119=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_119);
c_120=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_120);
c_121=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_121);
c_123=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_123);
c_124=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_124);
c_125=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_125);
c_126=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_126);
c_128=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_128);
c_129=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_129);
c_131=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_131);
c_132=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_132);
c_133=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_133);
c_134=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_134);
c_135=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_135);
c_136=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_136);
c_137=rb_str_new2("::");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_137);
c_138=rb_str_new2("::");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_138);
c_140=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_140);
c_141=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_141);
c_142=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_142);
c_143=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_143);
c_145=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_145);
c_146=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_146);
c_148=rb_str_new2("\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_148);
c_149=rb_str_new2("\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_149);
c_150=rb_str_new2("\r\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_150);
c_151=rb_str_new2("\r\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_151);
c_152=rb_str_new2("\r");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_152);
c_153=rb_str_new2("\r");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_153);
c_155=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_155);
c_156=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_156);
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
c_172=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_172);
c_173=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_173);
c_174=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_174);
c_175=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_175);
c_176=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_176);
c_177=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_177);
c_178=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_178);
c_179=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_179);
c_180=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_180);
c_181=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_181);
c_182=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_182);
c_183=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_183);
c_184=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_184);
c_185=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_185);
c_186=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_186);
c_187=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_187);
c_189=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_189);
c_190=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_190);
c_191=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_191);
c_192=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_192);
c_193=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_193);
c_194=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_194);
c_195=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_195);
c_196=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_196);
c_197=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_197);
c_198=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_198);
c_199=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_199);
c_200=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_200);
c_201=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_201);
c_202=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_202);
c_203=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_203);
c_204=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_204);
c_205=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_205);
c_206=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_206);
c_208=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_208);
c_209=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_209);
c_210=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_210);
c_211=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_211);
c_212=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_212);
c_213=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_213);
c_214=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_214);
c_215=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_215);
c_216=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_216);
c_217=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_217);
c_218=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_218);
c_219=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_219);
c_220=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_220);
c_221=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_221);
c_222=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_222);
c_223=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_223);
c_224=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_224);
c_225=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_225);
c_226=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_226);
c_227=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_227);
c_228=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_228);
c_229=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_229);
c_230=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_230);
c_231=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_231);
c_232=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_232);
c_233=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_233);
c_234=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_234);
c_235=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_235);
c_236=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_236);
c_237=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_237);
c_238=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_238);
c_239=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_239);
c_240=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_240);
c_241=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_241);
c_242=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_242);
c_243=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_243);
c_244=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_244);
c_245=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_245);
c_246=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_246);
c_247=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_247);
c_249=rb_const_get(rb_cObject, rb_intern("Args"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_249);
switchhashAmethystParser1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashAmethystParser1);
c_251=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_251);
c_252=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_252);
c_255=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_255);
c_256=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_256);
c_257=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_257);
c_258=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_258);
c_260=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_260);
c_261=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_261);
c_263=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_263);
c_264=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_264);
c_265=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_265);
c_266=rb_str_new2("@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_266);
c_267=rb_str_new2("@@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_267);
c_268=rb_str_new2("@@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_268);
c_269=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_269);
c_270=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_270);
c_271=rb_str_new2("~");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_271);
c_272=rb_str_new2("~");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_272);
c_273=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_273);
c_274=rb_str_new2("&");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_274);
c_275=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_275);
c_276=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_276);
c_277=rb_str_new2(".");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_277);
c_278=rb_str_new2(".");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_278);
c_279=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_279);
c_280=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_280);
c_281=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_281);
c_282=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_282);
c_283=rb_str_new2(":");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_283);
c_284=rb_str_new2(":");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_284);
c_286=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_286);
c_287=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_287);
c_290=rb_str_new2("=>");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_290);
c_291=rb_str_new2("=>");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_291);
c_292=rb_str_new2("?");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_292);
c_293=rb_str_new2("?");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_293);
c_294=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_294);
c_295=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_295);
c_296=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_296);
c_297=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_297);
c_298=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_298);
c_299=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_299);
c_302=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_302);
c_303=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_303);
c_304=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_304);
c_305=rb_str_new2("amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_305);
rb_define_method(cls_AmethystParser,"_",AmethystParser__,0);
rb_define_method(cls_AmethystParser,"__args",AmethystParser___args,2);
rb_define_method(cls_AmethystParser,"_args",AmethystParser__args,2);
rb_define_method(cls_AmethystParser,"addargs",AmethystParser_addargs,0);
rb_define_method(cls_AmethystParser,"application",AmethystParser_application,0);
rb_define_method(cls_AmethystParser,"args",AmethystParser_args,2);
rb_define_method(cls_AmethystParser,"argsOpt",AmethystParser_argsOpt,2);
rb_define_method(cls_AmethystParser,"atomicHostExpr",AmethystParser_atomicHostExpr,0);
rb_define_method(cls_AmethystParser,"char",AmethystParser_char,0);
rb_define_method(cls_AmethystParser,"choice",AmethystParser_choice,0);
rb_define_method(cls_AmethystParser,"clas",AmethystParser_clas,1);
rb_define_method(cls_AmethystParser,"className",AmethystParser_className,0);
rb_define_method(cls_AmethystParser,"collect",AmethystParser_collect,1);
rb_define_method(cls_AmethystParser,"digit",AmethystParser_digit,0);
rb_define_method(cls_AmethystParser,"eChar",AmethystParser_eChar,0);
rb_define_method(cls_AmethystParser,"empty",AmethystParser_empty,0);
rb_define_method(cls_AmethystParser,"endline",AmethystParser_endline,0);
rb_define_method(cls_AmethystParser,"eof",AmethystParser_eof,0);
rb_define_method(cls_AmethystParser,"expression",AmethystParser_expression,0);
rb_define_method(cls_AmethystParser,"fails",AmethystParser_fails,0);
rb_define_method(cls_AmethystParser,"grammar",AmethystParser_grammar,0);
rb_define_method(cls_AmethystParser,"igrammar",AmethystParser_igrammar,0);
rb_define_method(cls_AmethystParser,"inlineHostExpr",AmethystParser_inlineHostExpr,0);
rb_define_method(cls_AmethystParser,"key",AmethystParser_key,0);
rb_define_method(cls_AmethystParser,"letter",AmethystParser_letter,0);
rb_define_method(cls_AmethystParser,"listOf",AmethystParser_listOf,2);
rb_define_method(cls_AmethystParser,"lower",AmethystParser_lower,0);
rb_define_method(cls_AmethystParser,"modifier",AmethystParser_modifier,0);
rb_define_method(cls_AmethystParser,"name",AmethystParser_name,0);
rb_define_method(cls_AmethystParser,"nameFirst",AmethystParser_nameFirst,0);
rb_define_method(cls_AmethystParser,"nameRest",AmethystParser_nameRest,0);
rb_define_method(cls_AmethystParser,"nr",AmethystParser_nr,0);
rb_define_method(cls_AmethystParser,"number",AmethystParser_number,0);
rb_define_method(cls_AmethystParser,"prefixed",AmethystParser_prefixed,0);
rb_define_method(cls_AmethystParser,"procargs",AmethystParser_procargs,0);
rb_define_method(cls_AmethystParser,"procargs2",AmethystParser_procargs2,0);
rb_define_method(cls_AmethystParser,"regch",AmethystParser_regch,1);
rb_define_method(cls_AmethystParser,"rubyarg",AmethystParser_rubyarg,0);
rb_define_method(cls_AmethystParser,"rule",AmethystParser_rule,0);
rb_define_method(cls_AmethystParser,"ruleargs",AmethystParser_ruleargs,0);
rb_define_method(cls_AmethystParser,"seq",AmethystParser_seq,1);
rb_define_method(cls_AmethystParser,"sequence",AmethystParser_sequence,0);
rb_define_method(cls_AmethystParser,"spaces",AmethystParser_spaces,0);
rb_define_method(cls_AmethystParser,"term",AmethystParser_term,0);
rb_define_method(cls_AmethystParser,"token",AmethystParser_token,1);
rb_define_method(cls_AmethystParser,"upper",AmethystParser_upper,0);
 rb_eval_string("testversionparser('fe6641c7cebc82f18de654f19d0fac1c')");}
