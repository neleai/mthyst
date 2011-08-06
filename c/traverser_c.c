#include "cthyst.h"
VALUE cls_Traverser;
VALUE Traverser_traverse(VALUE self );
VALUE Traverser_traverse_item(VALUE self );
VALUE Traverser_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Traversercb_1,1,bind); 
 BSET(this_1,it); it=CALL(traverse_Traversercb_2,1,bind); 
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,rb_ary_new3(1,BGET(autovar_1))); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(IGET(src),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(IGET(src),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break2);
 BSET(autovar_3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=IGET(src); int fail3=0;
ISET(src,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(IGET(src),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass3);
 BSET(key_1,it);   it=CALL(traverse_item,0 ); FAILTEST(pass3);
 BSET(it_1,it); it=CALL(traverse_Traversercb_3,1,bind); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ISET(src,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Traversercb_4,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Traverser_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(visit,0 ); FAILTEST(alt1_2);
 BSET(a_1,it); it=CALL(traverse_item_Traversercb_1,1,bind); it=BGET(a_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(traverse_item_Traversercb_2,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(IGET(src),rb_intern("size"),0)));
 it=CALL(traverse_item_Traversercb_3,1,bind); 
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=CALL(traverse_item,0 ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(traverse_item_Traversercb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(traverse_item_Traversercb_5,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(IGET(src),rb_intern("size"),0)));
   it=CALL(traverse,0 ); FAILTEST(pass2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(anything,0 ); FAILTEST(alt1_5);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
void Init_traverser_c(){ 
 cls_Traverser=rb_define_class("Traverser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Traverser,"traverse",Traverser_traverse,0);
rb_define_method(cls_Traverser,"traverse_item",Traverser_traverse_item,0);
 }
