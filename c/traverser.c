#include "cthyst.h"
VALUE cls_Traverser;
VALUE Traverser_traverse(VALUE self );
VALUE Traverser_traverse_item(VALUE self );
VALUE Traverser_traverse(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
BSET(it,CALL(traverse_cb6,1,bind)); 
 BSET(autovar_1,BGET(it)); VALUE oldinput21; while(1){oldinput21=IGET(input);   BSET(it,CALL(anything,0 )); FAILTEST(break20);
 BSET(autovar_2,BGET(it)); BSET(it,CALL(traverse_cb7,1,bind));  } break20: ISET(input,oldinput21); BSET(it,BGET(autovar_1));BSET(it,CALL(traverse_cb8,1,bind)); 
 BSET(this_1,BGET(it)); BSET(it,CALL(traverse_cb9,1,bind)); 
 BSET(autovar_3,BGET(it)); VALUE oldinput23=IGET(input);  VALUE oldsrc24=IGET(src); int fail26=0;
ISET(src,rb_ary_new3(1,BGET(autovar_3))); ISET(input,INT2FIX(0));
   BSET(it,CALL(anything,0 )); FAILTEST(pass22);
 BSET(autovar_4,BGET(it)); VALUE oldinput28=IGET(input);  VALUE oldsrc29=IGET(src); int fail31=0;
ISET(src,BGET(autovar_4)); ISET(input,INT2FIX(0));
 BSET(it,CALL(traverse_cb10,1,bind)); 
 BSET(autovar_5,BGET(it)); VALUE oldinput33; while(1){oldinput33=IGET(input);   BSET(it,CALL(anything,0 )); FAILTEST(break32);
 BSET(autovar_6,BGET(it)); VALUE oldinput35=IGET(input);  VALUE oldsrc36=IGET(src); int fail38=0;
ISET(src,BGET(autovar_6)); ISET(input,INT2FIX(0));
   BSET(it,CALL(anything,0 )); FAILTEST(pass34);
 BSET(key_1,BGET(it));   BSET(it,CALL(traverse_item,0 )); FAILTEST(pass34);
 BSET(it_1,BGET(it)); BSET(it,CALL(traverse_cb11,1,bind)); 
 BSET(autovar_7,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass34;
	goto success37;
	pass34: fail38=1;
	success37: ISET(src,oldsrc36); ISET(input,oldinput35);
	if(fail38) goto break32;
BSET(it,CALL(traverse_cb12,1,bind));  } break32: ISET(input,oldinput33); BSET(it,BGET(autovar_5));
	if (CALL(eof,0)==failobj) goto pass27;
	goto success30;
	pass27: fail31=1;
	success30: ISET(src,oldsrc29); ISET(input,oldinput28);
	if(fail31) goto pass22;

	if (CALL(eof,0)==failobj) goto pass22;
	goto success25;
	pass22: fail26=1;
	success25: ISET(src,oldsrc24); ISET(input,oldinput23);
	if(fail26) goto fail;
BSET(it,CALL(traverse_cb13,1,bind)); 
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Traverser_traverse_item(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput2=IGET(input);
alt3: ISET(input,oldinput2);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(visit,0 )); FAILTEST(alt4);
 BSET(a_1,BGET(it)); BSET(it,CALL(traverse_item_cb1,1,bind)); BSET(it,BGET(a_1));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
alt4: ISET(input,oldinput2);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(traverse_item_cb2,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt5);
 BSET(autovar_1,BGET(it)); VALUE oldinput7=IGET(input);  VALUE oldsrc8=IGET(src); int fail10=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 BSET(it,CALL(traverse_item_cb3,1,bind)); 
 BSET(autovar_2,BGET(it)); VALUE oldinput12; while(1){oldinput12=IGET(input);   BSET(it,CALL(traverse_item,0 )); FAILTEST(break11);
 BSET(autovar_3,BGET(it)); BSET(it,CALL(traverse_item_cb4,1,bind));  } break11: ISET(input,oldinput12); BSET(it,BGET(autovar_2));
 BSET(_result_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success9;
	pass6: fail10=1;
	success9: ISET(src,oldsrc8); ISET(input,oldinput7);
	if(fail10) goto alt5;
 
ISET(cut,Qnil);goto accept1;
alt5: ISET(input,oldinput2);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(traverse_item_cb5,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt13);
 BSET(autovar_4,BGET(it)); VALUE oldinput15=IGET(input);  VALUE oldsrc16=IGET(src); int fail18=0;
ISET(src,BGET(autovar_4)); ISET(input,INT2FIX(0));
   BSET(it,CALL(traverse,0 )); FAILTEST(pass14);
 BSET(_result_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass14;
	goto success17;
	pass14: fail18=1;
	success17: ISET(src,oldsrc16); ISET(input,oldinput15);
	if(fail18) goto alt13;
 
ISET(cut,Qnil);goto accept1;
alt13: ISET(input,oldinput2);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(anything,0 )); FAILTEST(alt19);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
  alt19:  ISET(input,oldinput2); goto fail;
 accept1:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
void Init_Traverser(){ cls_Traverser=rb_define_class("Traverser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Traverser,"traverse",Traverser_traverse,0);
rb_define_method(cls_Traverser,"traverse_item",Traverser_traverse_item,0);
rb_eval_string("class Traverser < Amethyst\ndef traverse_cb10(bind)\n[]\nend\ndef traverse_cb11(bind)\n@x; bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])\nend\ndef traverse_cb12(bind)\nbind[:autovar_5]||=[];_append(bind[:autovar_5],bind[:autovar_7])\nend\ndef traverse_cb13(bind)\n@src.self\nend\ndef traverse_cb6(bind)\n[]\nend\ndef traverse_cb7(bind)\nbind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_2])\nend\ndef traverse_cb8(bind)\n@src.self\nend\ndef traverse_cb9(bind)\n(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }\nend\ndef traverse_item_cb1(bind)\n@changed=true\nend\ndef traverse_item_cb2(bind)\nArray\nend\ndef traverse_item_cb3(bind)\n[]\nend\ndef traverse_item_cb4(bind)\nbind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])\nend\ndef traverse_item_cb5(bind)\nAmethystAST\nend\n\nend");
}
