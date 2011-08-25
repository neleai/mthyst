#include "cthyst.h"
VALUE cls_AmethystCTranslator;
VALUE AmethystCTranslator_addcallback(VALUE self ,VALUE a0);
VALUE AmethystCTranslator_addlambda(VALUE self );
VALUE AmethystCTranslator_char(VALUE self );
VALUE AmethystCTranslator_clas(VALUE self ,VALUE a0);
VALUE AmethystCTranslator_failwrap(VALUE self ,VALUE a0);
VALUE AmethystCTranslator_itrans(VALUE self );
VALUE AmethystCTranslator_rbcode(VALUE self );
VALUE AmethystCTranslator_rbtrans(VALUE self );
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystCTranslator_spaces(VALUE self );
VALUE AmethystCTranslator_token(VALUE self ,VALUE a0);
VALUE AmethystCTranslator_trans(VALUE self );
VALUE AmethystCTranslator_transfn(VALUE self );
VALUE AmethystCTranslator_addcallback(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(s_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=BGET(s_1);
 BSET(autovar_1,it); it=CALL(addcallback_AmethystCTranslatorcb_1,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCTranslator_rbtrans(self ); FAILTEST(pass1);
 BSET(s_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(addcallback_AmethystCTranslatorcb_2,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_addlambda(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(addlambda_AmethystCTranslatorcb_1,1,bind); 
 BSET(lambd_1,it); it=rb_str_new2("fail");
 BSET(word_1,it); it=CALL(addlambda_AmethystCTranslatorcb_2,1,bind); 
 BSET(rwo_1,it); it=CALL(addlambda_AmethystCTranslatorcb_3,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(fail);
 BSET(body_1,it); 
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(x_1,it); it=CALL(addlambda_AmethystCTranslatorcb_4,1,bind); it=CALL(addlambda_AmethystCTranslatorcb_5,1,bind); it=CALL(addlambda_AmethystCTranslatorcb_6,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_char(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 BSET(c_1,it); it=CALL(char_AmethystCTranslatorcb_1,1,bind); FAILTEST(fail);it=BGET(c_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(clas_AmethystCTranslatorcb_1,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_failwrap(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(s_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(failwrap_AmethystCTranslatorcb_1,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_itrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 BSET(ruby_1,it); it=rb_ary_new3(0);
 BSET(c_1,it); it=rb_ary_new3(0);
 BSET(init_1,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 BSET(c_2,it); it=CALL(itrans_AmethystCTranslatorcb_1,1,bind); FAILTEST(alt1_2);it=BGET(c_2);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_1,it); it=CALL(itrans_AmethystCTranslatorcb_2,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCTranslator_trans(self ); FAILTEST(alt1_3);
 BSET(it_1,it); it=CALL(itrans_AmethystCTranslatorcb_3,1,bind);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(itrans_AmethystCTranslatorcb_4,1,bind); 
 BSET(_result_2,it); it=BGET(_result_2);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbcode(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(rbcode_AmethystCTranslatorcb_1,1,bind); 
 BSET(s_1,it); it=CALL(rbcode_AmethystCTranslatorcb_2,1,bind); 
 BSET(autovar_1,it); it=CALL(rbcode_AmethystCTranslatorcb_3,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 BSET(k_1,it);   it=AmethystCore_anything(self ); FAILTEST(pass3);
 BSET(v_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto break1;
it=CALL(rbcode_AmethystCTranslatorcb_4,1,bind); 
 BSET(autovar_5,it); it=CALL(rbcode_AmethystCTranslatorcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_3);
 BSET(x_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(rbcode_AmethystCTranslatorcb_6,1,bind); it=CALL(rbcode_AmethystCTranslatorcb_7,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbtrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(rbtrans_AmethystCTranslatorcb_1,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 BSET(i_1,it); it=CALL(rbtrans_AmethystCTranslatorcb_2,1,bind); FAILTEST(alt1_2);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=CALL(rbtrans_AmethystCTranslatorcb_3,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(rbtrans_AmethystCTranslatorcb_4,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 BSET(i_1,it); it=CALL(rbtrans_AmethystCTranslatorcb_5,1,bind); FAILTEST(alt1_3);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_2,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_3,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCTranslator_rbtrans(self ); FAILTEST(break2);
 BSET(autovar_4,it); it=CALL(rbtrans_AmethystCTranslatorcb_6,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=BGET(autovar_3);
 BSET(a_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_3;
it=CALL(rbtrans_AmethystCTranslatorcb_7,1,bind); 
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(rbtrans_AmethystCTranslatorcb_8,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 BSET(i_1,it); it=CALL(rbtrans_AmethystCTranslatorcb_9,1,bind); FAILTEST(alt1_4);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_5,it); int oldpos6=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_6,it); int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCTranslator_rbtrans(self ); FAILTEST(break3);
 BSET(autovar_7,it); it=CALL(rbtrans_AmethystCTranslatorcb_10,1,bind);  if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=BGET(autovar_6);
 BSET(a_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos6); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_4;
it=CALL(rbtrans_AmethystCTranslatorcb_11,1,bind); 
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(rbtrans_AmethystCTranslatorcb_12,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_5);
 BSET(i_1,it); it=CALL(rbtrans_AmethystCTranslatorcb_13,1,bind); FAILTEST(alt1_5);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_8,it); int oldpos8=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_9,it); int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCTranslator_rbtrans(self ); FAILTEST(break4);
 BSET(autovar_10,it); it=CALL(rbtrans_AmethystCTranslatorcb_14,1,bind);  if (IGET(stop)!=Qnil){{oldpos9=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos9); it=BGET(autovar_9);
 BSET(a_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos8); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_5;
it=CALL(rbtrans_AmethystCTranslatorcb_15,1,bind); 
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(rbtrans_AmethystCTranslatorcb_16,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_6);
 BSET(i_1,it); it=CALL(rbtrans_AmethystCTranslatorcb_17,1,bind); FAILTEST(alt1_6);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_11,it); int oldpos10=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(rbtrans_AmethystCTranslatorcb_18,1,bind); 
 BSET(name_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos10); ame_setlen(self,oldlen5);
	if(fail5) goto alt1_6;
it=CALL(rbtrans_AmethystCTranslatorcb_19,1,bind); 
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(rbtrans_AmethystCTranslatorcb_20,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_7);
 BSET(i_1,it); it=CALL(rbtrans_AmethystCTranslatorcb_21,1,bind); FAILTEST(alt1_7);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_12,it); int oldpos11=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_12)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass6);
 BSET(name_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos11); ame_setlen(self,oldlen6);
	if(fail6) goto alt1_7;
it=CALL(rbtrans_AmethystCTranslatorcb_22,1,bind); 
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(rbtrans_AmethystCTranslatorcb_23,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_8);
 BSET(i_1,it); it=CALL(rbtrans_AmethystCTranslatorcb_24,1,bind); FAILTEST(alt1_8);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_13,it); int oldpos12=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,BGET(autovar_13)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCTranslator_addlambda(self ); FAILTEST(pass7);
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos12); ame_setlen(self,oldlen7);
	if(fail7) goto alt1_8;
 
ISET(cut,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_9);
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept1;
  alt1_9:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_2);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(word_1,a0);BSET(prc_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(rw_AmethystCTranslatorcb_1,1,bind); 
 BSET(rwo_1,it); it=CALL(rw_AmethystCTranslatorcb_2,1,bind);  it=BGET(prc_1); arg0=it; it=CALL(apply,1 ,arg0); FAILTEST(fail);
 BSET(x_1,it); it=CALL(rw_AmethystCTranslatorcb_3,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_spaces(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 BSET(autovar_1,it); int oldpos1; while(1){oldpos1=ame_getpos(self); it=CALL(spaces_AmethystCTranslatorcb_1,1,bind); 
 BSET(regex_1,it);   it=AmethystCore_anything(self ); FAILTEST(break1);
 BSET(c_1,it); it=CALL(spaces_AmethystCTranslatorcb_2,1,bind); FAILTEST(break1);it=BGET(c_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(c_2,it); it=CALL(spaces_AmethystCTranslatorcb_3,1,bind); FAILTEST(break1);it=BGET(c_2);
 BSET(_result_2,it); it=BGET(_result_2);
 BSET(_result_3,it); it=BGET(_result_3);
 BSET(autovar_2,it); it=CALL(spaces_AmethystCTranslatorcb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=BGET(autovar_1);
 BSET(_result_4,it); it=BGET(_result_4);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(s_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCTranslator_spaces(self ); FAILTEST(fail); it=BGET(s_1); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_1,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_2,1,bind); FAILTEST(alt1_2);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystCTranslatorcb_3,1,bind); it=CALL(trans_AmethystCTranslatorcb_4,1,bind); it=CALL(trans_AmethystCTranslatorcb_5,1,bind); it=CALL(trans_AmethystCTranslatorcb_6,1,bind); it=CALL(trans_AmethystCTranslatorcb_7,1,bind); it=CALL(trans_AmethystCTranslatorcb_8,1,bind); it=CALL(trans_AmethystCTranslatorcb_9,1,bind); it=CALL(trans_AmethystCTranslatorcb_10,1,bind); it=CALL(trans_AmethystCTranslatorcb_11,1,bind); 
 BSET(autovar_2,it); it=CALL(trans_AmethystCTranslatorcb_12,1,bind); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 BSET(autovar_3,it); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_4,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCTranslator_trans(self ); FAILTEST(break1);
 BSET(autovar_5,it); it=CALL(trans_AmethystCTranslatorcb_13,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=BGET(autovar_4);
 BSET(t_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;

	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=AmethystCTranslator_rbcode(self ); FAILTEST(pass1);
 BSET(rbcode_1,it); it=CALL(trans_AmethystCTranslatorcb_14,1,bind); 
 BSET(s_1,it); it=CALL(trans_AmethystCTranslatorcb_15,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_16,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_17,1,bind); FAILTEST(alt1_3);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_6,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystCTranslatorcb_18,1,bind); 
 BSET(name_1,it); it=CALL(trans_AmethystCTranslatorcb_19,1,bind); it=CALL(trans_AmethystCTranslatorcb_20,1,bind); 
 BSET(autovar_7,it); it=CALL(trans_AmethystCTranslatorcb_21,1,bind); int oldpos7=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCTranslator_trans(self ); FAILTEST(pass5);
 BSET(body_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos7); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=CALL(trans_AmethystCTranslatorcb_22,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_23,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_24,1,bind); FAILTEST(alt1_4);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_8,it); int oldpos8=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_9,it); int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 BSET(autovar_10,it); it=CALL(trans_AmethystCTranslatorcb_25,1,bind);  if (IGET(stop)!=Qnil){{oldpos9=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos9); it=BGET(autovar_9);
 BSET(it_1,it); it=CALL(trans_AmethystCTranslatorcb_26,1,bind); 
 BSET(cbno_1,it); it=CALL(trans_AmethystCTranslatorcb_27,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos8); ame_setlen(self,oldlen6);
	if(fail6) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_28,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_5);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_29,1,bind); FAILTEST(alt1_5);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_11,it); int oldpos10=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,BGET(autovar_11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_12,it); int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3);
 BSET(autovar_13,it); it=CALL(trans_AmethystCTranslatorcb_30,1,bind);  if (IGET(stop)!=Qnil){{oldpos11=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos11); it=BGET(autovar_12);
 BSET(c_1,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos10); ame_setlen(self,oldlen7);
	if(fail7) goto alt1_5;
it=CALL(trans_AmethystCTranslatorcb_31,1,bind); 
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_32,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_6);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_33,1,bind); FAILTEST(alt1_6);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_14,it); int oldpos12=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,BGET(autovar_14)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass8);
 BSET(autovar_15,it); it=CALL(trans_AmethystCTranslatorcb_34,1,bind); int oldpos13=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,BGET(autovar_15)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass9);
 BSET(autovar_16,it); int oldpos14=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,BGET(autovar_16)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCTranslator_spaces(self ); FAILTEST(pass10); it=rb_str_new2("super"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(pass10);
	if (CALL(eof,0)==failobj) goto pass10;
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos14); ame_setlen(self,oldlen10);
	if(fail10) goto pass9;

	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos13); ame_setlen(self,oldlen9);
	if(fail9) goto pass8;
it=CALL(trans_AmethystCTranslatorcb_35,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos12); ame_setlen(self,oldlen8);
	if(fail8) goto alt1_6;
 
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_36,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_7);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_37,1,bind); FAILTEST(alt1_7);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_17,it); int oldpos15=ame_getpos(self); int oldlen11=ame_getlen(self); VALUE oldsrc11=ame_getsrc(self); int fail11=0;
ame_setsrc(self,BGET(autovar_17)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass11);
 BSET(name_1,it); it=INT2FIX(0);
 BSET(ii_1,it); it=rb_ary_new3(0);
 BSET(autovar_18,it); int oldpos16; while(1){oldpos16=ame_getpos(self);   it=AmethystCTranslator_trans(self ); FAILTEST(break4);
 BSET(aa_1,it); it=CALL(trans_AmethystCTranslatorcb_38,1,bind); it=CALL(trans_AmethystCTranslatorcb_39,1,bind); 
 BSET(autovar_19,it); it=CALL(trans_AmethystCTranslatorcb_40,1,bind);  if (IGET(stop)!=Qnil){{oldpos16=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos16); it=BGET(autovar_18);
 BSET(args_1,it); it=CALL(trans_AmethystCTranslatorcb_41,1,bind); 
 BSET(s_2,it); it=CALL(trans_AmethystCTranslatorcb_42,1,bind); 
 BSET(_result_3,it); it=BGET(_result_3);
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass11;
	goto success11;
	pass11: fail11=1;
	success11: ame_setsrc(self,oldsrc11); ame_setpos(self,oldpos15); ame_setlen(self,oldlen11);
	if(fail11) goto alt1_7;
 
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_43,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_8);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_44,1,bind); FAILTEST(alt1_8);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_20,it); int oldpos17=ame_getpos(self); int oldlen12=ame_getlen(self); VALUE oldsrc12=ame_getsrc(self); int fail12=0;
ame_setsrc(self,BGET(autovar_20)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_21,it); int oldpos18; while(1){oldpos18=ame_getpos(self);   it=AmethystCTranslator_trans(self ); FAILTEST(break5);
 BSET(autovar_22,it); it=CALL(trans_AmethystCTranslatorcb_45,1,bind);  if (IGET(stop)!=Qnil){{oldpos18=ame_getpos(self);goto break5;} } } break5: ISET(stop,Qnil);  ame_setpos(self,oldpos18); it=BGET(autovar_21);
 BSET(t_1,it); it=CALL(trans_AmethystCTranslatorcb_46,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass12;
	goto success12;
	pass12: fail12=1;
	success12: ame_setsrc(self,oldsrc12); ame_setpos(self,oldpos17); ame_setlen(self,oldlen12);
	if(fail12) goto alt1_8;
 
ISET(cut,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_47,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_9);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_48,1,bind); FAILTEST(alt1_9);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_23,it); int oldpos19=ame_getpos(self); int oldlen13=ame_getlen(self); VALUE oldsrc13=ame_getsrc(self); int fail13=0;
ame_setsrc(self,BGET(autovar_23)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystCTranslatorcb_49,1,bind); 
 BSET(autovar_24,it); it=CALL(trans_AmethystCTranslatorcb_50,1,bind); int oldpos20=ame_getpos(self); int oldlen14=ame_getlen(self); VALUE oldsrc14=ame_getsrc(self); int fail14=0;
ame_setsrc(self,BGET(autovar_24)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCTranslator_trans(self ); FAILTEST(pass14);
 BSET(e_1,it); 
	if (CALL(eof,0)==failobj) goto pass14;
	goto success14;
	pass14: fail14=1;
	success14: ame_setsrc(self,oldsrc14); ame_setpos(self,oldpos20); ame_setlen(self,oldlen14);
	if(fail14) goto pass13;
it=CALL(trans_AmethystCTranslatorcb_51,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass13;
	goto success13;
	pass13: fail13=1;
	success13: ame_setsrc(self,oldsrc13); ame_setpos(self,oldpos19); ame_setlen(self,oldlen13);
	if(fail13) goto alt1_9;
 
ISET(cut,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_52,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_10);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_53,1,bind); FAILTEST(alt1_10);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_25,it); int oldpos21=ame_getpos(self); int oldlen15=ame_getlen(self); VALUE oldsrc15=ame_getsrc(self); int fail15=0;
ame_setsrc(self,BGET(autovar_25)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystCTranslatorcb_54,1,bind); 
 BSET(accept_1,it); it=CALL(trans_AmethystCTranslatorcb_55,1,bind); 
 BSET(fail_1,it); it=CALL(trans_AmethystCTranslatorcb_56,1,bind); 
 BSET(oldpos_1,it);  it=rb_str_new2("alt"); arg0=it; it=CALL(label,1 ,arg0); FAILTEST(pass15);
 BSET(alt_1,it); it=INT2FIX(0);
 BSET(altno_1,it); it=rb_ary_new3(0);
 BSET(autovar_26,it); int oldpos22; while(1){oldpos22=ame_getpos(self); int oldpos23=ame_getpos(self);
   it=AmethystCore_anything(self ); FAILTEST(reject1); x=1; goto accept2;  reject1: x=0; accept2: it=Qnil; ame_setpos(self,oldpos23); if (x==0) goto break6;it=CALL(trans_AmethystCTranslatorcb_57,1,bind); it=CALL(trans_AmethystCTranslatorcb_58,1,bind); 
 BSET(word_1,it); it=CALL(trans_AmethystCTranslatorcb_59,1,bind); 
 BSET(rwo_1,it); it=CALL(trans_AmethystCTranslatorcb_60,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(break6);
 BSET(_result_2,it); it=BGET(_result_2);
 BSET(x_1,it); it=CALL(trans_AmethystCTranslatorcb_61,1,bind); 
 BSET(_result_4,it); it=BGET(_result_4);
 BSET(autovar_27,it); it=CALL(trans_AmethystCTranslatorcb_62,1,bind);  if (IGET(stop)!=Qnil){{oldpos22=ame_getpos(self);goto break6;} } } break6: ISET(stop,Qnil);  ame_setpos(self,oldpos22); it=BGET(autovar_26);
 BSET(t_1,it); it=CALL(trans_AmethystCTranslatorcb_63,1,bind); it=CALL(trans_AmethystCTranslatorcb_64,1,bind); it=CALL(trans_AmethystCTranslatorcb_65,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass15;
	goto success15;
	pass15: fail15=1;
	success15: ame_setsrc(self,oldsrc15); ame_setpos(self,oldpos21); ame_setlen(self,oldlen15);
	if(fail15) goto alt1_10;
 
ISET(cut,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_66,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_11);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_67,1,bind); FAILTEST(alt1_11);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_28,it); int oldpos24=ame_getpos(self); int oldlen16=ame_getlen(self); VALUE oldsrc16=ame_getsrc(self); int fail16=0;
ame_setsrc(self,BGET(autovar_28)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 
	if (CALL(eof,0)==failobj) goto pass16;
	goto success16;
	pass16: fail16=1;
	success16: ame_setsrc(self,oldsrc16); ame_setpos(self,oldpos24); ame_setlen(self,oldlen16);
	if(fail16) goto alt1_11;
it=CALL(trans_AmethystCTranslatorcb_68,1,bind); 
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_69,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_12);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_70,1,bind); FAILTEST(alt1_12);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_29,it); int oldpos25=ame_getpos(self); int oldlen17=ame_getlen(self); VALUE oldsrc17=ame_getsrc(self); int fail17=0;
ame_setsrc(self,BGET(autovar_29)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 
	if (CALL(eof,0)==failobj) goto pass17;
	goto success17;
	pass17: fail17=1;
	success17: ame_setsrc(self,oldsrc17); ame_setpos(self,oldpos25); ame_setlen(self,oldlen17);
	if(fail17) goto alt1_12;
it=CALL(trans_AmethystCTranslatorcb_71,1,bind); 
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept1;
alt1_12: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_72,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_13);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_73,1,bind); FAILTEST(alt1_13);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_30,it); int oldpos26=ame_getpos(self); int oldlen18=ame_getlen(self); VALUE oldsrc18=ame_getsrc(self); int fail18=0;
ame_setsrc(self,BGET(autovar_30)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystCTranslatorcb_74,1,bind); 
 BSET(brk_1,it); it=CALL(trans_AmethystCTranslatorcb_75,1,bind); 
 BSET(oldpos_1,it); it=BGET(brk_1);
 BSET(word_1,it); it=CALL(trans_AmethystCTranslatorcb_76,1,bind); 
 BSET(rwo_1,it); it=CALL(trans_AmethystCTranslatorcb_77,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(pass18);
 BSET(t_1,it); 
 BSET(_result_2,it); it=BGET(_result_2);
 BSET(x_1,it); it=CALL(trans_AmethystCTranslatorcb_78,1,bind); it=BGET(_result_4);it=CALL(trans_AmethystCTranslatorcb_79,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass18;
	goto success18;
	pass18: fail18=1;
	success18: ame_setsrc(self,oldsrc18); ame_setpos(self,oldpos26); ame_setlen(self,oldlen18);
	if(fail18) goto alt1_13;
 
ISET(cut,Qnil);goto accept1;
alt1_13: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_80,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_14);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_81,1,bind); FAILTEST(alt1_14);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_31,it); int oldpos27=ame_getpos(self); int oldlen19=ame_getlen(self); VALUE oldsrc19=ame_getsrc(self); int fail19=0;
ame_setsrc(self,BGET(autovar_31)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystCTranslatorcb_82,1,bind); 
 BSET(accept_1,it); it=CALL(trans_AmethystCTranslatorcb_83,1,bind); 
 BSET(reject_1,it); it=CALL(trans_AmethystCTranslatorcb_84,1,bind); 
 BSET(oldpos_1,it); it=BGET(reject_1);
 BSET(word_1,it); it=CALL(trans_AmethystCTranslatorcb_85,1,bind); 
 BSET(rwo_1,it); it=CALL(trans_AmethystCTranslatorcb_86,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(pass19);
 BSET(t_1,it); 
 BSET(_result_2,it); it=BGET(_result_2);
 BSET(x_1,it); it=CALL(trans_AmethystCTranslatorcb_87,1,bind); it=BGET(_result_4);it=CALL(trans_AmethystCTranslatorcb_88,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass19;
	goto success19;
	pass19: fail19=1;
	success19: ame_setsrc(self,oldsrc19); ame_setpos(self,oldpos27); ame_setlen(self,oldlen19);
	if(fail19) goto alt1_14;
 
ISET(cut,Qnil);goto accept1;
alt1_14: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_89,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_15);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_90,1,bind); FAILTEST(alt1_15);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_32,it); int oldpos28=ame_getpos(self); int oldlen20=ame_getlen(self); VALUE oldsrc20=ame_getsrc(self); int fail20=0;
ame_setsrc(self,BGET(autovar_32)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos29; while(1){oldpos29=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break7); if (IGET(stop)!=Qnil){{oldpos29=ame_getpos(self);goto break7;} } } break7: ISET(stop,Qnil);  ame_setpos(self,oldpos29); it=CALL(trans_AmethystCTranslatorcb_91,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass20;
	goto success20;
	pass20: fail20=1;
	success20: ame_setsrc(self,oldsrc20); ame_setpos(self,oldpos28); ame_setlen(self,oldlen20);
	if(fail20) goto alt1_15;
 
ISET(cut,Qnil);goto accept1;
alt1_15: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_92,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_16);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_93,1,bind); FAILTEST(alt1_16);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_33,it); int oldpos30=ame_getpos(self); int oldlen21=ame_getlen(self); VALUE oldsrc21=ame_getsrc(self); int fail21=0;
ame_setsrc(self,BGET(autovar_33)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystCTranslatorcb_94,1,bind); 
 BSET(autovar_34,it); it=CALL(trans_AmethystCTranslatorcb_95,1,bind); int oldpos31=ame_getpos(self); int oldlen22=ame_getlen(self); VALUE oldsrc22=ame_getsrc(self); int fail22=0;
ame_setsrc(self,BGET(autovar_34)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCTranslator_rbtrans(self ); FAILTEST(pass22);
 BSET(argss_1,it); 
	if (CALL(eof,0)==failobj) goto pass22;
	goto success22;
	pass22: fail22=1;
	success22: ame_setsrc(self,oldsrc22); ame_setpos(self,oldpos31); ame_setlen(self,oldlen22);
	if(fail22) goto pass21;
it=CALL(trans_AmethystCTranslatorcb_96,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass21;
	goto success21;
	pass21: fail21=1;
	success21: ame_setsrc(self,oldsrc21); ame_setpos(self,oldpos30); ame_setlen(self,oldlen21);
	if(fail21) goto alt1_16;
 
ISET(cut,Qnil);goto accept1;
alt1_16: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_97,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_17);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_98,1,bind); FAILTEST(alt1_17);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_35,it); int oldpos32=ame_getpos(self); int oldlen23=ame_getlen(self); VALUE oldsrc23=ame_getsrc(self); int fail23=0;
ame_setsrc(self,BGET(autovar_35)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=rb_str_new2("pass"); arg0=it; it=CALL(label,1 ,arg0); FAILTEST(pass23);
 BSET(pass_1,it);  it=rb_str_new2("oldpos"); arg0=it; it=CALL(label,1 ,arg0); FAILTEST(pass23);
 BSET(oldpos_1,it);  it=rb_str_new2("oldlen"); arg0=it; it=CALL(label,1 ,arg0); FAILTEST(pass23);
 BSET(oldlen_1,it);  it=rb_str_new2("oldsrc"); arg0=it; it=CALL(label,1 ,arg0); FAILTEST(pass23);
 BSET(oldsrc_1,it);  it=rb_str_new2("success"); arg0=it; it=CALL(label,1 ,arg0); FAILTEST(pass23);
 BSET(success_1,it);  it=rb_str_new2("fail"); arg0=it; it=CALL(label,1 ,arg0); FAILTEST(pass23);
 BSET(fail_1,it); it=BGET(pass_1);
 BSET(word_1,it); it=CALL(trans_AmethystCTranslatorcb_99,1,bind); 
 BSET(rwo_1,it); it=CALL(trans_AmethystCTranslatorcb_100,1,bind); it=CALL(trans_AmethystCTranslatorcb_101,1,bind); 
 BSET(autovar_36,it); it=CALL(trans_AmethystCTranslatorcb_102,1,bind); int oldpos33=ame_getpos(self); int oldlen24=ame_getlen(self); VALUE oldsrc24=ame_getsrc(self); int fail24=0;
ame_setsrc(self,BGET(autovar_36)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCTranslator_trans(self ); FAILTEST(pass24);
 BSET(to_1,it); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass24;
	goto success24;
	pass24: fail24=1;
	success24: ame_setsrc(self,oldsrc24); ame_setpos(self,oldpos33); ame_setlen(self,oldlen24);
	if(fail24) goto pass23;
it=BGET(_result_2);
 BSET(x_1,it); it=CALL(trans_AmethystCTranslatorcb_103,1,bind); it=BGET(_result_4);it=CALL(trans_AmethystCTranslatorcb_104,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass23;
	goto success23;
	pass23: fail23=1;
	success23: ame_setsrc(self,oldsrc23); ame_setpos(self,oldpos32); ame_setlen(self,oldlen23);
	if(fail23) goto alt1_17;
 
ISET(cut,Qnil);goto accept1;
alt1_17: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystCTranslatorcb_105,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_18);
 BSET(i_1,it); it=CALL(trans_AmethystCTranslatorcb_106,1,bind); FAILTEST(alt1_18);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_37,it); int oldpos34=ame_getpos(self); int oldlen25=ame_getlen(self); VALUE oldsrc25=ame_getsrc(self); int fail25=0;
ame_setsrc(self,BGET(autovar_37)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=rb_str_new2("chr"); arg0=it; it=CALL(label,1 ,arg0); FAILTEST(pass25);
 BSET(chr_1,it); it=CALL(trans_AmethystCTranslatorcb_107,1,bind); it=CALL(trans_AmethystCTranslatorcb_108,1,bind); 
 BSET(s_1,it); int oldpos35; while(1){oldpos35=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break8);
 BSET(c_1,it);   it=AmethystCTranslator_trans(self ); FAILTEST(break8);
 BSET(t_1,it); it=CALL(trans_AmethystCTranslatorcb_109,1,bind);  if (IGET(stop)!=Qnil){{oldpos35=ame_getpos(self);goto break8;} } } break8: ISET(stop,Qnil);  ame_setpos(self,oldpos35); it=CALL(trans_AmethystCTranslatorcb_110,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass25;
	goto success25;
	pass25: fail25=1;
	success25: ame_setsrc(self,oldsrc25); ame_setpos(self,oldpos34); ame_setlen(self,oldlen25);
	if(fail25) goto alt1_18;
 
ISET(cut,Qnil);goto accept1;
  alt1_18:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_2);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_transfn(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCTranslator_trans(self ); FAILTEST(fail);
 BSET(t_1,it); it=CALL(transfn_AmethystCTranslatorcb_1,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
void Init_ctranslator2_c(){ 
 cls_AmethystCTranslator=rb_define_class("AmethystCTranslator",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_AmethystCTranslator,"addcallback",AmethystCTranslator_addcallback,1);
rb_define_method(cls_AmethystCTranslator,"addlambda",AmethystCTranslator_addlambda,0);
rb_define_method(cls_AmethystCTranslator,"char",AmethystCTranslator_char,0);
rb_define_method(cls_AmethystCTranslator,"clas",AmethystCTranslator_clas,1);
rb_define_method(cls_AmethystCTranslator,"failwrap",AmethystCTranslator_failwrap,1);
rb_define_method(cls_AmethystCTranslator,"itrans",AmethystCTranslator_itrans,0);
rb_define_method(cls_AmethystCTranslator,"rbcode",AmethystCTranslator_rbcode,0);
rb_define_method(cls_AmethystCTranslator,"rbtrans",AmethystCTranslator_rbtrans,0);
rb_define_method(cls_AmethystCTranslator,"rw",AmethystCTranslator_rw,2);
rb_define_method(cls_AmethystCTranslator,"spaces",AmethystCTranslator_spaces,0);
rb_define_method(cls_AmethystCTranslator,"token",AmethystCTranslator_token,1);
rb_define_method(cls_AmethystCTranslator,"trans",AmethystCTranslator_trans,0);
rb_define_method(cls_AmethystCTranslator,"transfn",AmethystCTranslator_transfn,0);
 rb_eval_string("testversion('ca30b7920f730e9199078cd26f6869fa')");}
