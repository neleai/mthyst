#include "cthyst.h"
VALUE cls_AmethystOptimizer;
VALUE AmethystOptimizer_arg(VALUE self );
VALUE AmethystOptimizer_args(VALUE self );
VALUE AmethystOptimizer_itrans(VALUE self );
VALUE AmethystOptimizer_trans(VALUE self );
VALUE AmethystOptimizer_transfn(VALUE self );
VALUE AmethystOptimizer_transs(VALUE self );
VALUE AmethystOptimizer_arg(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput184=IGET(input);
alt185: ISET(input,oldinput184);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(arg_cb76,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt186);
 BSET(autovar_1,BGET(it)); VALUE oldinput188=IGET(input);  VALUE oldsrc189=IGET(src); int fail191=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 BSET(it,CALL(arg_cb77,1,bind)); 
 BSET(autovar_2,BGET(it)); VALUE oldinput193; while(1){oldinput193=IGET(input);   BSET(it,CALL(arg,0 )); FAILTEST(break192);
 BSET(autovar_3,BGET(it)); BSET(it,CALL(arg_cb78,1,bind));  } break192: ISET(input,oldinput193); BSET(it,BGET(autovar_2));
 BSET(ary_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass187;
	goto success190;
	pass187: fail191=1;
	success190: ISET(src,oldsrc189); ISET(input,oldinput188);
	if(fail191) goto alt186;
BSET(it,CALL(arg_cb79,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept183;
alt186: ISET(input,oldinput184);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(arg_cb80,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt194);
 BSET(autovar_4,BGET(it)); VALUE oldinput196=IGET(input);  VALUE oldsrc197=IGET(src); int fail199=0;
ISET(src,BGET(autovar_4)); ISET(input,INT2FIX(0));
 BSET(it,CALL(arg_cb81,1,bind)); 
 BSET(autovar_5,BGET(it)); VALUE oldinput201; while(1){oldinput201=IGET(input); VALUE oldinput203=IGET(input);
alt204: ISET(input,oldinput203);if (IGET(cut)!=Qnil) goto break200;
   BSET(it,CALL(char,0 )); FAILTEST(alt205);
 BSET(autovar_6,BGET(it));  
ISET(cut,Qnil);goto accept202;
alt205: ISET(input,oldinput203);if (IGET(cut)!=Qnil) goto break200;
   BSET(it,CALL(arg,0 )); FAILTEST(alt206);
 BSET(autovar_6,BGET(it));  
ISET(cut,Qnil);goto accept202;
  alt206:  ISET(input,oldinput203); goto break200;
 accept202:;
BSET(it,CALL(arg_cb82,1,bind));  } break200: ISET(input,oldinput201); BSET(it,BGET(autovar_5));
 BSET(ary_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass195;
	goto success198;
	pass195: fail199=1;
	success198: ISET(src,oldsrc197); ISET(input,oldinput196);
	if(fail199) goto alt194;
BSET(it,CALL(arg_cb83,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept183;
alt194: ISET(input,oldinput184);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(arg_cb84,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt207);
 BSET(autovar_7,BGET(it)); VALUE oldinput209=IGET(input);  VALUE oldsrc210=IGET(src); int fail212=0;
ISET(src,BGET(autovar_7)); ISET(input,INT2FIX(0));
   BSET(it,CALL(transfn,0 )); FAILTEST(pass208);
 BSET(autovar_8,BGET(it)); BSET(it,CALL(arg_cb85,1,bind)); 
	if (CALL(eof,0)==failobj) goto pass208;
	goto success211;
	pass208: fail212=1;
	success211: ISET(src,oldsrc210); ISET(input,oldinput209);
	if(fail212) goto alt207;
BSET(it,CALL(arg_cb86,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept183;
alt207: ISET(input,oldinput184);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(arg_cb87,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt213);
 BSET(autovar_9,BGET(it)); VALUE oldinput215=IGET(input);  VALUE oldsrc216=IGET(src); int fail218=0;
ISET(src,BGET(autovar_9)); ISET(input,INT2FIX(0));
 BSET(it,CALL(arg_cb88,1,bind)); 
 BSET(name_1,BGET(it)); BSET(it,CALL(arg_cb89,1,bind)); 
 BSET(autovar_10,BGET(it)); VALUE oldinput220=IGET(input);  VALUE oldsrc221=IGET(src); int fail223=0;
ISET(src,rb_ary_new3(1,BGET(autovar_10))); ISET(input,INT2FIX(0));
   BSET(it,CALL(args,0 )); FAILTEST(pass219);
 BSET(args_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass219;
	goto success222;
	pass219: fail223=1;
	success222: ISET(src,oldsrc221); ISET(input,oldinput220);
	if(fail223) goto pass214;
BSET(it,CALL(arg_cb90,1,bind)); 
 BSET(autovar_11,BGET(it)); VALUE oldinput225=IGET(input);  VALUE oldsrc226=IGET(src); int fail228=0;
ISET(src,rb_ary_new3(1,BGET(autovar_11))); ISET(input,INT2FIX(0));
   BSET(it,CALL(args,0 )); FAILTEST(pass224);
 BSET(vars_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass224;
	goto success227;
	pass224: fail228=1;
	success227: ISET(src,oldsrc226); ISET(input,oldinput225);
	if(fail228) goto pass214;

	if (CALL(eof,0)==failobj) goto pass214;
	goto success217;
	pass214: fail218=1;
	success217: ISET(src,oldsrc216); ISET(input,oldinput215);
	if(fail218) goto alt213;
BSET(it,CALL(arg_cb91,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept183;
alt213: ISET(input,oldinput184);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(anything,0 )); FAILTEST(alt229);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept183;
  alt229:  ISET(input,oldinput184); goto fail;
 accept183:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE AmethystOptimizer_args(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput170=IGET(input);
alt171: ISET(input,oldinput170);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(args_cb71,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt172);
 BSET(autovar_1,BGET(it)); VALUE oldinput174=IGET(input);  VALUE oldsrc175=IGET(src); int fail177=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 BSET(it,CALL(args_cb72,1,bind)); 
 BSET(autovar_2,BGET(it)); VALUE oldinput179; while(1){oldinput179=IGET(input);   BSET(it,CALL(arg,0 )); FAILTEST(break178);
 BSET(autovar_3,BGET(it)); BSET(it,CALL(args_cb73,1,bind));  } break178: ISET(input,oldinput179); BSET(it,BGET(autovar_2));
 BSET(a_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass173;
	goto success176;
	pass173: fail177=1;
	success176: ISET(src,oldsrc175); ISET(input,oldinput174);
	if(fail177) goto alt172;
BSET(it,BGET(a_1));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept169;
alt172: ISET(input,oldinput170);if (IGET(cut)!=Qnil) goto fail;
 BSET(it,CALL(args_cb74,1,bind)); 
 BSET(autovar_4,BGET(it)); VALUE oldinput182; while(1){oldinput182=IGET(input);   BSET(it,CALL(arg,0 )); FAILTEST(break181);
 BSET(autovar_5,BGET(it)); BSET(it,CALL(args_cb75,1,bind));  } break181: ISET(input,oldinput182); BSET(it,BGET(autovar_4));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept169;
  alt180:  ISET(input,oldinput170); goto fail;
 accept169:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE AmethystOptimizer_itrans(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
BSET(it,CALL(itrans_cb1,1,bind)); 
 BSET(autovar_1,BGET(it)); VALUE oldinput2; while(1){oldinput2=IGET(input); VALUE oldinput4=IGET(input);
alt5: ISET(input,oldinput4);if (IGET(cut)!=Qnil) goto break1;
   BSET(it,CALL(char,0 )); FAILTEST(alt6);
 BSET(autovar_2,BGET(it));  
ISET(cut,Qnil);goto accept3;
alt6: ISET(input,oldinput4);if (IGET(cut)!=Qnil) goto break1;
   BSET(it,CALL(trans,0 )); FAILTEST(alt7);
 BSET(autovar_2,BGET(it));  
ISET(cut,Qnil);goto accept3;
  alt7:  ISET(input,oldinput4); goto break1;
 accept3:;
BSET(it,CALL(itrans_cb2,1,bind));  } break1: ISET(input,oldinput2); BSET(it,BGET(autovar_1));
 BSET(r_1,BGET(it)); BSET(it,BGET(r_1));
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE AmethystOptimizer_trans(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput9=IGET(input);
alt10: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb3,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt11);
 BSET(autovar_1,BGET(it)); VALUE oldinput13=IGET(input);  VALUE oldsrc14=IGET(src); int fail16=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_cb4,1,bind)); 
 BSET(name_1,BGET(it)); BSET(it,CALL(trans_cb5,1,bind)); 
 BSET(parent_1,BGET(it)); BSET(it,CALL(trans_cb6,1,bind)); 
 BSET(autovar_2,BGET(it)); VALUE oldinput18=IGET(input);  VALUE oldsrc19=IGET(src); int fail21=0;
ISET(src,rb_ary_new3(1,BGET(autovar_2))); ISET(input,INT2FIX(0));
   BSET(it,CALL(transs,0 )); FAILTEST(pass17);
 BSET(rules_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass17;
	goto success20;
	pass17: fail21=1;
	success20: ISET(src,oldsrc19); ISET(input,oldinput18);
	if(fail21) goto pass12;

	if (CALL(eof,0)==failobj) goto pass12;
	goto success15;
	pass12: fail16=1;
	success15: ISET(src,oldsrc14); ISET(input,oldinput13);
	if(fail16) goto alt11;
BSET(it,CALL(trans_cb7,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt11: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb8,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt22);
 BSET(autovar_3,BGET(it)); VALUE oldinput24=IGET(input);  VALUE oldsrc25=IGET(src); int fail27=0;
ISET(src,BGET(autovar_3)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_cb9,1,bind)); 
 BSET(name_1,BGET(it)); BSET(it,CALL(trans_cb10,1,bind)); 
 BSET(autovar_4,BGET(it)); VALUE oldinput29=IGET(input);  VALUE oldsrc30=IGET(src); int fail32=0;
ISET(src,rb_ary_new3(1,BGET(autovar_4))); ISET(input,INT2FIX(0));
   BSET(it,CALL(args,0 )); FAILTEST(pass28);
 BSET(args_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass28;
	goto success31;
	pass28: fail32=1;
	success31: ISET(src,oldsrc30); ISET(input,oldinput29);
	if(fail32) goto pass23;
BSET(it,CALL(trans_cb11,1,bind)); 
 BSET(autovar_5,BGET(it)); VALUE oldinput34=IGET(input);  VALUE oldsrc35=IGET(src); int fail37=0;
ISET(src,rb_ary_new3(1,BGET(autovar_5))); ISET(input,INT2FIX(0));
   BSET(it,CALL(trans,0 )); FAILTEST(pass33);
 BSET(body_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass33;
	goto success36;
	pass33: fail37=1;
	success36: ISET(src,oldsrc35); ISET(input,oldinput34);
	if(fail37) goto pass23;
BSET(it,CALL(trans_cb12,1,bind)); 
 BSET(bnding_1,BGET(it)); BSET(it,CALL(trans_cb13,1,bind)); 
 BSET(locals_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass23;
	goto success26;
	pass23: fail27=1;
	success26: ISET(src,oldsrc25); ISET(input,oldinput24);
	if(fail27) goto alt22;
BSET(it,CALL(trans_cb14,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt22: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb15,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt38);
 BSET(autovar_6,BGET(it)); VALUE oldinput40=IGET(input);  VALUE oldsrc41=IGET(src); int fail43=0;
ISET(src,BGET(autovar_6)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_cb16,1,bind)); 
 BSET(autovar_7,BGET(it)); VALUE oldinput45; while(1){oldinput45=IGET(input);   BSET(it,CALL(transfn,0 )); FAILTEST(break44);
 BSET(autovar_8,BGET(it)); BSET(it,CALL(trans_cb17,1,bind));  } break44: ISET(input,oldinput45); BSET(it,BGET(autovar_7));
 BSET(ary_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass39;
	goto success42;
	pass39: fail43=1;
	success42: ISET(src,oldsrc41); ISET(input,oldinput40);
	if(fail43) goto alt38;
BSET(it,CALL(trans_cb18,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt38: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb19,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt46);
 BSET(autovar_9,BGET(it)); VALUE oldinput48=IGET(input);  VALUE oldsrc49=IGET(src); int fail51=0;
ISET(src,BGET(autovar_9)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_cb20,1,bind)); 
 BSET(autovar_10,BGET(it)); VALUE oldinput53; while(1){oldinput53=IGET(input);   BSET(it,CALL(trans,0 )); FAILTEST(break52);
 BSET(autovar_11,BGET(it)); BSET(it,CALL(trans_cb21,1,bind));  } break52: ISET(input,oldinput53); BSET(it,BGET(autovar_10));
 BSET(ary_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass47;
	goto success50;
	pass47: fail51=1;
	success50: ISET(src,oldsrc49); ISET(input,oldinput48);
	if(fail51) goto alt46;
BSET(it,CALL(trans_cb22,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt46: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb23,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt54);
 BSET(autovar_12,BGET(it)); VALUE oldinput56=IGET(input);  VALUE oldsrc57=IGET(src); int fail59=0;
ISET(src,BGET(autovar_12)); ISET(input,INT2FIX(0));
   BSET(it,CALL(trans,0 )); FAILTEST(pass55);
 BSET(autovar_13,BGET(it)); BSET(it,CALL(trans_cb24,1,bind)); BSET(it,CALL(trans_cb25,1,bind)); 
 BSET(neg_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass55;
	goto success58;
	pass55: fail59=1;
	success58: ISET(src,oldsrc57); ISET(input,oldinput56);
	if(fail59) goto alt54;
BSET(it,CALL(trans_cb26,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt54: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb27,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt60);
 BSET(autovar_14,BGET(it)); VALUE oldinput62=IGET(input);  VALUE oldsrc63=IGET(src); int fail65=0;
ISET(src,BGET(autovar_14)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_cb28,1,bind)); 
 BSET(autovar_15,BGET(it)); VALUE oldinput67; while(1){oldinput67=IGET(input);   BSET(it,CALL(anything,0 )); FAILTEST(break66);
 BSET(autovar_16,BGET(it)); BSET(it,CALL(trans_cb29,1,bind));  } break66: ISET(input,oldinput67); BSET(it,BGET(autovar_15));
 BSET(ary_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass61;
	goto success64;
	pass61: fail65=1;
	success64: ISET(src,oldsrc63); ISET(input,oldinput62);
	if(fail65) goto alt60;
BSET(it,CALL(trans_cb30,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt60: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb31,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt68);
 BSET(autovar_17,BGET(it)); VALUE oldinput70=IGET(input);  VALUE oldsrc71=IGET(src); int fail73=0;
ISET(src,BGET(autovar_17)); ISET(input,INT2FIX(0));
   BSET(it,CALL(trans,0 )); FAILTEST(pass69);
 BSET(autovar_18,BGET(it)); BSET(it,CALL(trans_cb32,1,bind)); BSET(it,CALL(trans_cb33,1,bind)); 
 BSET(o_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass69;
	goto success72;
	pass69: fail73=1;
	success72: ISET(src,oldsrc71); ISET(input,oldinput70);
	if(fail73) goto alt68;
BSET(it,CALL(trans_cb34,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt68: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb35,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt74);
 BSET(autovar_19,BGET(it)); VALUE oldinput76=IGET(input);  VALUE oldsrc77=IGET(src); int fail79=0;
ISET(src,BGET(autovar_19)); ISET(input,INT2FIX(0));
   BSET(it,CALL(anything,0 )); FAILTEST(pass75);
 BSET(autovar_20,BGET(it)); BSET(it,CALL(trans_cb36,1,bind));   BSET(it,CALL(args,0 )); FAILTEST(pass75);
 BSET(autovar_21,BGET(it)); BSET(it,CALL(trans_cb37,1,bind)); 
	if (CALL(eof,0)==failobj) goto pass75;
	goto success78;
	pass75: fail79=1;
	success78: ISET(src,oldsrc77); ISET(input,oldinput76);
	if(fail79) goto alt74;
BSET(it,CALL(trans_cb38,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt74: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb39,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt80);
 BSET(autovar_22,BGET(it)); VALUE oldinput82=IGET(input);  VALUE oldsrc83=IGET(src); int fail85=0;
ISET(src,BGET(autovar_22)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_cb40,1,bind)); 
 BSET(autovar_23,BGET(it)); VALUE oldinput87=IGET(input);  VALUE oldsrc88=IGET(src); int fail90=0;
ISET(src,rb_ary_new3(1,BGET(autovar_23))); ISET(input,INT2FIX(0));
   BSET(it,CALL(arg,0 )); FAILTEST(pass86);
 BSET(name_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass86;
	goto success89;
	pass86: fail90=1;
	success89: ISET(src,oldsrc88); ISET(input,oldinput87);
	if(fail90) goto pass81;
BSET(it,CALL(trans_cb41,1,bind)); 
 BSET(autovar_24,BGET(it)); VALUE oldinput92=IGET(input);  VALUE oldsrc93=IGET(src); int fail95=0;
ISET(src,rb_ary_new3(1,BGET(autovar_24))); ISET(input,INT2FIX(0));
   BSET(it,CALL(trans,0 )); FAILTEST(pass91);
 BSET(expr_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass91;
	goto success94;
	pass91: fail95=1;
	success94: ISET(src,oldsrc93); ISET(input,oldinput92);
	if(fail95) goto pass81;
BSET(it,CALL(trans_cb42,1,bind)); 
 BSET(append_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass81;
	goto success84;
	pass81: fail85=1;
	success84: ISET(src,oldsrc83); ISET(input,oldinput82);
	if(fail85) goto alt80;
BSET(it,CALL(trans_cb43,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt80: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb44,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt96);
 BSET(autovar_25,BGET(it)); VALUE oldinput98=IGET(input);  VALUE oldsrc99=IGET(src); int fail101=0;
ISET(src,BGET(autovar_25)); ISET(input,INT2FIX(0));
   BSET(it,CALL(args,0 )); FAILTEST(pass97);
 BSET(ary_1,BGET(it)); BSET(it,CALL(trans_cb45,1,bind)); 
 BSET(pred_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass97;
	goto success100;
	pass97: fail101=1;
	success100: ISET(src,oldsrc99); ISET(input,oldinput98);
	if(fail101) goto alt96;
BSET(it,CALL(trans_cb46,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt96: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb47,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt102);
 BSET(autovar_26,BGET(it)); VALUE oldinput104=IGET(input);  VALUE oldsrc105=IGET(src); int fail107=0;
ISET(src,BGET(autovar_26)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_cb48,1,bind)); 
 BSET(name_1,BGET(it)); BSET(it,CALL(trans_cb49,1,bind)); 
 BSET(autovar_27,BGET(it)); VALUE oldinput109=IGET(input);  VALUE oldsrc110=IGET(src); int fail112=0;
ISET(src,rb_ary_new3(1,BGET(autovar_27))); ISET(input,INT2FIX(0));
   BSET(it,CALL(args,0 )); FAILTEST(pass108);
 BSET(args_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass108;
	goto success111;
	pass108: fail112=1;
	success111: ISET(src,oldsrc110); ISET(input,oldinput109);
	if(fail112) goto pass103;
BSET(it,CALL(trans_cb50,1,bind)); 
 BSET(autovar_28,BGET(it)); VALUE oldinput114=IGET(input);  VALUE oldsrc115=IGET(src); int fail117=0;
ISET(src,rb_ary_new3(1,BGET(autovar_28))); ISET(input,INT2FIX(0));
   BSET(it,CALL(args,0 )); FAILTEST(pass113);
 BSET(vars_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass113;
	goto success116;
	pass113: fail117=1;
	success116: ISET(src,oldsrc115); ISET(input,oldinput114);
	if(fail117) goto pass103;

	if (CALL(eof,0)==failobj) goto pass103;
	goto success106;
	pass103: fail107=1;
	success106: ISET(src,oldsrc105); ISET(input,oldinput104);
	if(fail107) goto alt102;
BSET(it,CALL(trans_cb51,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt102: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb52,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt118);
 BSET(autovar_29,BGET(it)); VALUE oldinput120=IGET(input);  VALUE oldsrc121=IGET(src); int fail123=0;
ISET(src,BGET(autovar_29)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_cb53,1,bind)); 
 BSET(autovar_30,BGET(it)); VALUE oldinput125; while(1){oldinput125=IGET(input);   BSET(it,CALL(arg,0 )); FAILTEST(break124);
 BSET(autovar_31,BGET(it)); BSET(it,CALL(trans_cb54,1,bind));  } break124: ISET(input,oldinput125); BSET(it,BGET(autovar_30));
 BSET(ary_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass119;
	goto success122;
	pass119: fail123=1;
	success122: ISET(src,oldsrc121); ISET(input,oldinput120);
	if(fail123) goto alt118;
BSET(it,CALL(trans_cb55,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt118: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb56,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt126);
 BSET(autovar_32,BGET(it)); VALUE oldinput128=IGET(input);  VALUE oldsrc129=IGET(src); int fail131=0;
ISET(src,BGET(autovar_32)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_cb57,1,bind)); 
 BSET(autovar_33,BGET(it)); VALUE oldinput133=IGET(input);  VALUE oldsrc134=IGET(src); int fail136=0;
ISET(src,rb_ary_new3(1,BGET(autovar_33))); ISET(input,INT2FIX(0));
   BSET(it,CALL(trans,0 )); FAILTEST(pass132);
 BSET(to_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass132;
	goto success135;
	pass132: fail136=1;
	success135: ISET(src,oldsrc134); ISET(input,oldinput133);
	if(fail136) goto pass127;
BSET(it,CALL(trans_cb58,1,bind)); 
 BSET(autovar_34,BGET(it)); VALUE oldinput138=IGET(input);  VALUE oldsrc139=IGET(src); int fail141=0;
ISET(src,rb_ary_new3(1,BGET(autovar_34))); ISET(input,INT2FIX(0));
   BSET(it,CALL(arg,0 )); FAILTEST(pass137);
 BSET(var_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass137;
	goto success140;
	pass137: fail141=1;
	success140: ISET(src,oldsrc139); ISET(input,oldinput138);
	if(fail141) goto pass127;
BSET(it,CALL(trans_cb59,1,bind)); 
 BSET(enter_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass127;
	goto success130;
	pass127: fail131=1;
	success130: ISET(src,oldsrc129); ISET(input,oldinput128);
	if(fail131) goto alt126;
BSET(it,CALL(trans_cb60,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt126: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb61,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt142);
 BSET(autovar_35,BGET(it)); VALUE oldinput144=IGET(input);  VALUE oldsrc145=IGET(src); int fail147=0;
ISET(src,BGET(autovar_35)); ISET(input,INT2FIX(0));
 
	if (CALL(eof,0)==failobj) goto pass143;
	goto success146;
	pass143: fail147=1;
	success146: ISET(src,oldsrc145); ISET(input,oldinput144);
	if(fail147) goto alt142;
BSET(it,CALL(trans_cb62,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt142: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb63,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt148);
 BSET(autovar_36,BGET(it)); VALUE oldinput150=IGET(input);  VALUE oldsrc151=IGET(src); int fail153=0;
ISET(src,BGET(autovar_36)); ISET(input,INT2FIX(0));
 
	if (CALL(eof,0)==failobj) goto pass149;
	goto success152;
	pass149: fail153=1;
	success152: ISET(src,oldsrc151); ISET(input,oldinput150);
	if(fail153) goto alt148;
BSET(it,CALL(trans_cb64,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept8;
alt148: ISET(input,oldinput9);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb65,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt154);
 BSET(autovar_37,BGET(it)); VALUE oldinput156=IGET(input);  VALUE oldsrc157=IGET(src); int fail159=0;
ISET(src,BGET(autovar_37)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_cb66,1,bind)); 
 BSET(autovar_38,BGET(it)); VALUE oldinput161; while(1){oldinput161=IGET(input);   BSET(it,CALL(anything,0 )); FAILTEST(break160);
 BSET(autovar_39,BGET(it)); BSET(it,CALL(trans_cb67,1,bind));  } break160: ISET(input,oldinput161); BSET(it,BGET(autovar_38));BSET(it,CALL(trans_cb68,1,bind)); 
 BSET(_result_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass155;
	goto success158;
	pass155: fail159=1;
	success158: ISET(src,oldsrc157); ISET(input,oldinput156);
	if(fail159) goto alt154;
 
ISET(cut,Qnil);goto accept8;
  alt154:  ISET(input,oldinput9); goto fail;
 accept8:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE AmethystOptimizer_transfn(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(trans,0 )); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE AmethystOptimizer_transs(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(anything,0 )); FAILTEST(fail);
 BSET(autovar_1,BGET(it)); VALUE oldinput163=IGET(input);  VALUE oldsrc164=IGET(src); int fail166=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 BSET(it,CALL(transs_cb69,1,bind)); 
 BSET(autovar_2,BGET(it)); VALUE oldinput168; while(1){oldinput168=IGET(input);   BSET(it,CALL(trans,0 )); FAILTEST(break167);
 BSET(autovar_3,BGET(it)); BSET(it,CALL(transs_cb70,1,bind));  } break167: ISET(input,oldinput168); BSET(it,BGET(autovar_2));
 BSET(t_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass162;
	goto success165;
	pass162: fail166=1;
	success165: ISET(src,oldsrc164); ISET(input,oldinput163);
	if(fail166) goto fail;
BSET(it,BGET(t_1));
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
void Init_AmethystOptimizer(){ cls_AmethystOptimizer=rb_define_class("AmethystOptimizer",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_AmethystOptimizer,"arg",AmethystOptimizer_arg,0);
rb_define_method(cls_AmethystOptimizer,"args",AmethystOptimizer_args,0);
rb_define_method(cls_AmethystOptimizer,"itrans",AmethystOptimizer_itrans,0);
rb_define_method(cls_AmethystOptimizer,"trans",AmethystOptimizer_trans,0);
rb_define_method(cls_AmethystOptimizer,"transfn",AmethystOptimizer_transfn,0);
rb_define_method(cls_AmethystOptimizer,"transs",AmethystOptimizer_transs,0);
rb_eval_string("class AmethystOptimizer < Amethyst\ndef arg_cb76(bind)\nArgs\nend\ndef arg_cb77(bind)\n[]\nend\ndef arg_cb78(bind)\nbind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])\nend\ndef arg_cb79(bind)\nArgs.create( {:ary=>bind[:ary_1] })\nend\ndef arg_cb80(bind)\nStrin\nend\ndef arg_cb81(bind)\n[]\nend\ndef arg_cb82(bind)\nbind[:autovar_5]||=[];_append(bind[:autovar_5],bind[:autovar_6])\nend\ndef arg_cb83(bind)\nStrin.create( {:ary=>bind[:ary_1] })\nend\ndef arg_cb84(bind)\nExp\nend\ndef arg_cb85(bind)\nbind[:ary_1]||=[];_append(bind[:ary_1],bind[:autovar_8])\nend\ndef arg_cb86(bind)\nExp.create( {:ary=>bind[:ary_1] })\nend\ndef arg_cb87(bind)\nResult\nend\ndef arg_cb88(bind)\n@src.name\nend\ndef arg_cb89(bind)\n@src.args\nend\ndef arg_cb90(bind)\n@src.vars\nend\ndef arg_cb91(bind)\nResult.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })\nend\ndef args_cb71(bind)\nArray\nend\ndef args_cb72(bind)\n[]\nend\ndef args_cb73(bind)\nbind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])\nend\ndef args_cb74(bind)\n[]\nend\ndef args_cb75(bind)\nbind[:autovar_4]||=[];_append(bind[:autovar_4],bind[:autovar_5])\nend\ndef itrans_cb1(bind)\n[]\nend\ndef itrans_cb2(bind)\nbind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_2])\nend\ndef trans_cb10(bind)\n@src.args\nend\ndef trans_cb11(bind)\n@src.body\nend\ndef trans_cb12(bind)\n@src.bnding\nend\ndef trans_cb13(bind)\n@src.locals\nend\ndef trans_cb14(bind)\nRule.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:bnding=>bind[:bnding_1],:body=>bind[:body_1],:locals=>bind[:locals_1],:name=>bind[:name_1] })\nend\ndef trans_cb15(bind)\nOr\nend\ndef trans_cb16(bind)\n[]\nend\ndef trans_cb17(bind)\nbind[:autovar_7]||=[];_append(bind[:autovar_7],bind[:autovar_8])\nend\ndef trans_cb18(bind)\nOr.create( {:ary=>bind[:ary_1] })\nend\ndef trans_cb19(bind)\nSeq\nend\ndef trans_cb20(bind)\n[]\nend\ndef trans_cb21(bind)\nbind[:autovar_10]||=[];_append(bind[:autovar_10],bind[:autovar_11])\nend\ndef trans_cb22(bind)\nSeq.create( {:ary=>bind[:ary_1] })\nend\ndef trans_cb23(bind)\nLookahead\nend\ndef trans_cb24(bind)\nbind[:ary_1]||=[];_append(bind[:ary_1],bind[:autovar_13])\nend\ndef trans_cb25(bind)\n@src.neg\nend\ndef trans_cb26(bind)\nLookahead.create( {:ary=>bind[:ary_1],:neg=>bind[:neg_1] })\nend\ndef trans_cb27(bind)\nComment\nend\ndef trans_cb28(bind)\n[]\nend\ndef trans_cb29(bind)\nbind[:autovar_15]||=[];_append(bind[:autovar_15],bind[:autovar_16])\nend\ndef trans_cb3(bind)\nGrammar\nend\ndef trans_cb30(bind)\nComment.create( {:ary=>bind[:ary_1] })\nend\ndef trans_cb31(bind)\nMany\nend\ndef trans_cb32(bind)\nbind[:ary_1]||=[];_append(bind[:ary_1],bind[:autovar_18])\nend\ndef trans_cb33(bind)\n@src.o\nend\ndef trans_cb34(bind)\nMany.create( {:ary=>bind[:ary_1],:o=>bind[:o_1] })\nend\ndef trans_cb35(bind)\nApply\nend\ndef trans_cb36(bind)\nbind[:ary_1]||=[];_append(bind[:ary_1],bind[:autovar_20])\nend\ndef trans_cb37(bind)\nbind[:ary_1]||=[];_append(bind[:ary_1],bind[:autovar_21])\nend\ndef trans_cb38(bind)\nApply.create( {:ary=>bind[:ary_1] })\nend\ndef trans_cb39(bind)\nSet\nend\ndef trans_cb4(bind)\n@src.name\nend\ndef trans_cb40(bind)\n@src.name\nend\ndef trans_cb41(bind)\n@src.expr\nend\ndef trans_cb42(bind)\n@src.append\nend\ndef trans_cb43(bind)\nSet.create( {:append=>bind[:append_1],:ary=>bind[:ary_1],:expr=>bind[:expr_1],:name=>bind[:name_1] })\nend\ndef trans_cb44(bind)\nAct\nend\ndef trans_cb45(bind)\n@src.pred\nend\ndef trans_cb46(bind)\nAct.create( {:ary=>bind[:ary_1],:pred=>bind[:pred_1] })\nend\ndef trans_cb47(bind)\nResult\nend\ndef trans_cb48(bind)\n@src.name\nend\ndef trans_cb49(bind)\n@src.args\nend\ndef trans_cb5(bind)\n@src.parent\nend\ndef trans_cb50(bind)\n@src.vars\nend\ndef trans_cb51(bind)\nResult.create( {:args=>bind[:args_1],:ary=>bind[:ary_1],:expr=>bind[:expr_1],:name=>bind[:name_1],:vars=>bind[:vars_1] })\nend\ndef trans_cb52(bind)\nArgs\nend\ndef trans_cb53(bind)\n[]\nend\ndef trans_cb54(bind)\nbind[:autovar_30]||=[];_append(bind[:autovar_30],bind[:autovar_31])\nend\ndef trans_cb55(bind)\nArgs.create( {:ary=>bind[:ary_1],:o=>bind[:o_1] })\nend\ndef trans_cb56(bind)\nPass\nend\ndef trans_cb57(bind)\n@src.to\nend\ndef trans_cb58(bind)\n@src.var\nend\ndef trans_cb59(bind)\n@src.enter\nend\ndef trans_cb6(bind)\n@src.rules\nend\ndef trans_cb60(bind)\nPass.create( {:ary=>bind[:ary_1],:enter=>bind[:enter_1],:to=>bind[:to_1],:var=>bind[:var_1] })\nend\ndef trans_cb61(bind)\nCut\nend\ndef trans_cb62(bind)\nCut.create( {:ary=>bind[:ary_1] })\nend\ndef trans_cb63(bind)\nStop\nend\ndef trans_cb64(bind)\nStop.create( {:ary=>bind[:ary_1] })\nend\ndef trans_cb65(bind)\nLocal\nend\ndef trans_cb66(bind)\n[]\nend\ndef trans_cb67(bind)\nbind[:autovar_38]||=[];_append(bind[:autovar_38],bind[:autovar_39])\nend\ndef trans_cb68(bind)\n@src.self\nend\ndef trans_cb7(bind)\nGrammar.create( {:ary=>bind[:ary_1],:name=>bind[:name_1],:parent=>bind[:parent_1],:rules=>bind[:rules_1] })\nend\ndef trans_cb8(bind)\nRule\nend\ndef trans_cb9(bind)\n@src.name\nend\ndef transs_cb69(bind)\n[]\nend\ndef transs_cb70(bind)\nbind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])\nend\n\nend");
}
