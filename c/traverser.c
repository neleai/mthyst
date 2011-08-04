#include "cthyst.h"
VALUE cls_Traverser;
VALUE Traverser_traverse(VALUE self );
VALUE Traverser_traverse_item(VALUE self );
VALUE Traverser_traverse(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
BSET(it,CALL(traverse_cb6,1,bind)); 
 BSET(autovar_158,BGET(it)); VALUE oldinput21; while(1){oldinput21=IGET(input);   BSET(it,CALL(anything,0)); FAILTEST(break20);
 BSET(autovar_159,BGET(it)); BSET(it,CALL(traverse_cb7,1,bind));  } break20: ISET(input,oldinput21); BSET(it,BGET(autovar_158));BSET(it,CALL(traverse_cb8,1,bind)); 
 BSET(this_46,BGET(it)); BSET(it,CALL(traverse_cb9,1,bind)); 
 BSET(autovar_166,BGET(it)); VALUE oldinput23=IGET(input);  VALUE oldsrc24=IGET(src); int fail26=0;
ISET(src,IGET(autovar_166)); ISET(input,INT2FIX(0));
 
	if (CALL(eof,0)==failobj) goto pass22;
	goto success25;
	pass22: fail26=1;
	success25: ISET(src,oldsrc24); ISET(input,oldinput23);
	if(fail26) goto fail;
BSET(it,CALL(traverse_cb13,1,bind)); 
 BSET(_result_46,BGET(it)); BSET(it,BGET(_result_46));
return BGET(_result_46);
fail: return failobj; }
VALUE Traverser_traverse_item(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput2=IGET(input);
alt3: ISET(input,oldinput2);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(visit,0)); FAILTEST(alt4);
 BSET(a_45,BGET(it)); BSET(it,CALL(traverse_item_cb1,1,bind)); BSET(it,BGET(a_45));
 BSET(_result_45,BGET(it));  
ISET(cut,Qnil);goto accept1;
alt4: ISET(input,oldinput2);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(traverse_item_cb2,1,bind); BSET(it,CALL(clas,1,arg0)); FAILTEST(alt5);
 BSET(autovar_156,BGET(it)); VALUE oldinput7=IGET(input);  VALUE oldsrc8=IGET(src); int fail10=0;
ISET(src,rb_ary_new3(1,IGET(autovar_156))); ISET(input,INT2FIX(0));
 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success9;
	pass6: fail10=1;
	success9: ISET(src,oldsrc8); ISET(input,oldinput7);
	if(fail10) goto alt5;
 
ISET(cut,Qnil);goto accept1;
alt5: ISET(input,oldinput2);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(traverse_item_cb5,1,bind); BSET(it,CALL(clas,1,arg0)); FAILTEST(alt13);
 BSET(autovar_157,BGET(it)); VALUE oldinput15=IGET(input);  VALUE oldsrc16=IGET(src); int fail18=0;
ISET(src,rb_ary_new3(1,IGET(autovar_157))); ISET(input,INT2FIX(0));
 
	if (CALL(eof,0)==failobj) goto pass14;
	goto success17;
	pass14: fail18=1;
	success17: ISET(src,oldsrc16); ISET(input,oldinput15);
	if(fail18) goto alt13;
 
ISET(cut,Qnil);goto accept1;
alt13: ISET(input,oldinput2);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(anything,0)); FAILTEST(alt19);
 BSET(_result_45,BGET(it));  
ISET(cut,Qnil);goto accept1;
  alt19:  ISET(input,oldinput2); goto fail;
 accept1:;
BSET(it,BGET(_result_45));
return BGET(_result_45);
fail: return failobj; }
void Init_Traverser(){ cls_Traverser=rb_define_class("Traverser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Traverser,"traverse",Traverser_traverse,0);
rb_define_method(cls_Traverser,"traverse_item",Traverser_traverse_item,0);
rb_eval_string("class Traverser < Amethyst\ndef traverse_cb10(bind)\n[]\nend\ndef traverse_cb11(bind)\n@x; bind[:this_46].instance_variable_set(bind[:key_46],bind[:it_46])\nend\ndef traverse_cb12(bind)\nbind[:autovar_162]||=[];_append(bind[:autovar_162],bind[:autovar_163])\nend\ndef traverse_cb13(bind)\n@src.self\nend\ndef traverse_cb6(bind)\n[]\nend\ndef traverse_cb7(bind)\nbind[:autovar_158]||=[];_append(bind[:autovar_158],bind[:autovar_159])\nend\ndef traverse_cb8(bind)\n@src.self\nend\ndef traverse_cb9(bind)\n(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }\nend\ndef traverse_item_cb1(bind)\n@changed=true\nend\ndef traverse_item_cb2(bind)\nArray\nend\ndef traverse_item_cb3(bind)\n[]\nend\ndef traverse_item_cb4(bind)\nbind[:autovar_153]||=[];_append(bind[:autovar_153],bind[:autovar_154])\nend\ndef traverse_item_cb5(bind)\nAmethystAST\nend\n\nend");
}
