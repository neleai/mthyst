#include "cthyst.h"
VALUE cls_AmethystOptimizer2;
VALUE AmethystOptimizer2_trans(VALUE self );
VALUE AmethystOptimizer2_trans(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput2=IGET(input);
alt3: ISET(input,oldinput2);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb1,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt4);
 BSET(autovar_1,BGET(it)); VALUE oldinput6=IGET(input);  VALUE oldsrc7=IGET(src); int fail9=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_cb2,1,bind)); 
 BSET(autovar_2,BGET(it)); VALUE oldinput11; while(1){oldinput11=IGET(input);   BSET(it,CALL(transfn,0 )); FAILTEST(break10);
 BSET(autovar_3,BGET(it)); BSET(it,CALL(trans_cb3,1,bind));  } break10: ISET(input,oldinput11); BSET(it,BGET(autovar_2));
 BSET(ary_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success8;
	pass5: fail9=1;
	success8: ISET(src,oldsrc7); ISET(input,oldinput6);
	if(fail9) goto alt4;
BSET(it,CALL(trans_cb4,1,bind)); VALUE oldinput13=IGET(input);
alt14: ISET(input,oldinput13);if (IGET(cut)!=Qnil) goto alt4;
 BSET(it,CALL(trans_cb5,1,bind)); FAILTEST(alt15);BSET(it,CALL(trans_cb6,1,bind)); 
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept12;
alt15: ISET(input,oldinput13);if (IGET(cut)!=Qnil) goto alt4;
 BSET(it,CALL(trans_cb7,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept12;
  alt16:  ISET(input,oldinput13); goto alt4;
 accept12:;
 
ISET(cut,Qnil);goto accept1;
alt4: ISET(input,oldinput2);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_cb8,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt17);
 BSET(autovar_4,BGET(it)); VALUE oldinput19=IGET(input);  VALUE oldsrc20=IGET(src); int fail22=0;
ISET(src,BGET(autovar_4)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_cb9,1,bind)); 
 BSET(autovar_5,BGET(it)); VALUE oldinput24; while(1){oldinput24=IGET(input);   BSET(it,CALL(trans,0 )); FAILTEST(break23);
 BSET(autovar_6,BGET(it)); BSET(it,CALL(trans_cb10,1,bind));  } break23: ISET(input,oldinput24); BSET(it,BGET(autovar_5));
 BSET(ary_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass18;
	goto success21;
	pass18: fail22=1;
	success21: ISET(src,oldsrc20); ISET(input,oldinput19);
	if(fail22) goto alt17;
BSET(it,CALL(trans_cb11,1,bind)); VALUE oldinput26=IGET(input);
alt27: ISET(input,oldinput26);if (IGET(cut)!=Qnil) goto alt17;
 BSET(it,CALL(trans_cb12,1,bind)); FAILTEST(alt28);BSET(it,CALL(trans_cb13,1,bind)); 
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept25;
alt28: ISET(input,oldinput26);if (IGET(cut)!=Qnil) goto alt17;
 BSET(it,CALL(trans_cb14,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept25;
  alt29:  ISET(input,oldinput26); goto alt17;
 accept25:;
 
ISET(cut,Qnil);goto accept1;
alt17: ISET(input,oldinput2);if (IGET(cut)!=Qnil) goto fail;
 BSET(it,CALL(trans_cb15,1,bind)); 
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
  alt30:  ISET(input,oldinput2); goto fail;
 accept1:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
void Init_AmethystOptimizer2(){ cls_AmethystOptimizer2=rb_define_class("AmethystOptimizer2",rb_const_get(rb_cObject,rb_intern("AmethystOptimizer"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_AmethystOptimizer2,"trans",AmethystOptimizer2_trans,0);
rb_eval_string("class AmethystOptimizer2 < AmethystOptimizer\ndef trans_cb1(bind)\nOr\nend\ndef trans_cb10(bind)\nbind[:autovar_5]||=[];_append(bind[:autovar_5],bind[:autovar_6])\nend\ndef trans_cb11(bind)\nbind[:ary_1]=bind[:ary_1].map{|a| (a.is_a?(Seq)) ? a.ary : a}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)}\nend\ndef trans_cb12(bind)\n(bind[:ary_1].size==1) || FAIL\nend\ndef trans_cb13(bind)\nbind[:ary_1][0]\nend\ndef trans_cb14(bind)\nSeq.create( {:ary=>bind[:ary_1] })\nend\ndef trans_cb15(bind)\nsuper\nend\ndef trans_cb2(bind)\n[]\nend\ndef trans_cb3(bind)\nbind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])\nend\ndef trans_cb4(bind)\nbind[:ary_1]=bind[:ary_1].map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)}\nend\ndef trans_cb5(bind)\n(bind[:ary_1].size==1) || FAIL\nend\ndef trans_cb6(bind)\nbind[:ary_1][0]\nend\ndef trans_cb7(bind)\nOr.create( {:ary=>bind[:ary_1] })\nend\ndef trans_cb8(bind)\nSeq\nend\ndef trans_cb9(bind)\n[]\nend\n\nend");
}
