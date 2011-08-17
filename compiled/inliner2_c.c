#include "cthyst.h"
VALUE cls_Renamer2;
VALUE Renamer2_root(VALUE self );
VALUE Renamer2_visit(VALUE self );
VALUE Renamer2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(root_Renamer2cb_1,1,bind); 
 BSET(cls_1,it);   it=CALL(anything,0 ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(root_Renamer2cb_2,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_1,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Renamer2cb_3,1,bind);   it=CALL(traverse,0 ); FAILTEST(pass1);
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=BGET(_result_2);
return it;
fail: return failobj; }
VALUE Renamer2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(visit_Renamer2cb_1,1,bind); 
 BSET(cls_1,it);   it=CALL(anything,0 ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(visit_Renamer2cb_2,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_1,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(name_1,it); it=CALL(visit_Renamer2cb_3,1,bind); 
 BSET(this_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(visit_Renamer2cb_4,1,bind); 
 BSET(_result_2,it); it=BGET(_result_2);
return it;
fail: return failobj; }
VALUE cls_DetectCalls;
VALUE DetectCalls_root(VALUE self );
VALUE DetectCalls_visit(VALUE self );
VALUE DetectCalls_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(root_DetectCallscb_1,1,bind); 
 BSET(cls_1,it);   it=CALL(anything,0 ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(root_DetectCallscb_2,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_1,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_DetectCallscb_3,1,bind);   it=CALL(traverse,0 ); FAILTEST(pass1);it=CALL(root_DetectCallscb_4,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=BGET(_result_2);
return it;
fail: return failobj; }
VALUE DetectCalls_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(visit_DetectCallscb_1,1,bind); 
 BSET(cls_1,it);   it=CALL(anything,0 ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(visit_DetectCallscb_2,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_1,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(name_1,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=CALL(visit_DetectCallscb_3,1,bind); it=CALL(visit_DetectCallscb_4,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=BGET(_result_2);
return it;
fail: return failobj; }
VALUE cls_Inliner2;
VALUE Inliner2_root(VALUE self );
VALUE Inliner2_visit(VALUE self );
VALUE Inliner2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=CALL(anything,0 ); FAILTEST(fail);
 BSET(from_1,it);   it=CALL(anything,0 ); FAILTEST(fail);
 BSET(to_1,it); it=BGET(from_1);
 BSET(autovar_1,it); it=CALL(root_Inliner2cb_1,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Inliner2cb_2,1,bind); 
 BSET(cls_1,it);   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(i_1,it); it=CALL(root_Inliner2cb_3,1,bind); FAILTEST(pass1);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_2,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Inliner2cb_4,1,bind); 
 BSET(name_1,it); it=CALL(root_Inliner2cb_5,1,bind); 
 BSET(args_1,it); it=CALL(root_Inliner2cb_6,1,bind); it=CALL(root_Inliner2cb_7,1,bind); 
 BSET(body_1,it); 
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
it=CALL(root_Inliner2cb_8,1,bind); it=BGET(to_1);
 BSET(autovar_3,it); it=CALL(root_Inliner2cb_9,1,bind); int oldpos3=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Inliner2cb_10,1,bind); 
 BSET(cls_1,it);   it=CALL(anything,0 ); FAILTEST(pass3);
 BSET(i_1,it); it=CALL(root_Inliner2cb_11,1,bind); FAILTEST(pass3);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(traverse,0 ); FAILTEST(pass4);
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos4); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;

	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos3); ame_setlen(self,oldlen3);
	if(fail3) goto fail;
it=BGET(_result_2);
return it;
fail: return failobj; }
VALUE Inliner2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(visit_Inliner2cb_1,1,bind); 
 BSET(cls_1,it);   it=CALL(anything,0 ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(visit_Inliner2cb_2,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_1,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(name_1,it); it=CALL(visit_Inliner2cb_3,1,bind); FAILTEST(pass1);it=CALL(visit_Inliner2cb_4,1,bind); 
 BSET(autovar_2,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(visit_Inliner2cb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=BGET(autovar_2);
 BSET(args_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(visit_Inliner2cb_6,1,bind); 
 BSET(_result_2,it); it=BGET(_result_2);
return it;
fail: return failobj; }
void Init_inliner2_c(){ 
 cls_Renamer2=rb_define_class("Renamer2",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Renamer2,"root",Renamer2_root,0);
rb_define_method(cls_Renamer2,"visit",Renamer2_visit,0);

 cls_DetectCalls=rb_define_class("DetectCalls",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_DetectCalls,"root",DetectCalls_root,0);
rb_define_method(cls_DetectCalls,"visit",DetectCalls_visit,0);

 cls_Inliner2=rb_define_class("Inliner2",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Inliner2,"root",Inliner2_root,0);
rb_define_method(cls_Inliner2,"visit",Inliner2_visit,0);
 }
