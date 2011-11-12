#include "cthyst.h"
VALUE cls_Traverser_Clone2;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Traverser_Clone2_traverse(VALUE self );
VALUE Traverser_Clone2_traverse_item(VALUE self );
VALUE switchhashTraverser_Clone21;
static VALUE s_sizeTraverser_Clone2;
static VALUE s_traverse_Traverser_Clone2cb_1Traverser_Clone2;
static VALUE s_traverse_Traverser_Clone2cb_2Traverser_Clone2;
static VALUE s_traverse_Traverser_Clone2cb_3Traverser_Clone2;
static VALUE s_traverse_Traverser_Clone2cb_4Traverser_Clone2;
static VALUE s_traverse_Traverser_Clone2cb_5Traverser_Clone2;
static VALUE s_traverse_Traverser_Clone2cb_6Traverser_Clone2;
static VALUE s_traverse_Traverser_Clone2cb_7Traverser_Clone2;
static VALUE s_traverse_Traverser_Clone2cb_8Traverser_Clone2;
static VALUE s_traverse_Traverser_Clone2cb_9Traverser_Clone2;
static VALUE s_traverse_item_Traverser_Clone2cb_1Traverser_Clone2;
static VALUE s_traverse_item_Traverser_Clone2cb_2Traverser_Clone2;
static VALUE s_traverse_item_Traverser_Clone2cb_3Traverser_Clone2;
static VALUE s_visitTraverser_Clone2;
VALUE Traverser_Clone2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_traverse_Traverser_Clone2cb_1Traverser_Clone2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,s_traverse_Traverser_Clone2cb_2Traverser_Clone2,1,bind); 
 bind_aset(bind,2/*oldchanged*/,it); it=rb_funcall(self,s_traverse_Traverser_Clone2cb_3Traverser_Clone2,1,bind); 
 bind_aset(bind,3/*this*/,it); it=Qnil;
 bind_aset(bind,4/*clon*/,it); it=Qfalse;
 bind_aset(bind,5/*changed*/,it); it=rb_funcall(self,s_traverse_Traverser_Clone2cb_4Traverser_Clone2,1,bind); 
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_traverse_Traverser_Clone2cb_5Traverser_Clone2,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeTraverser_Clone2,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,7/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeTraverser_Clone2,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,8/*autovar*/,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 bind_aset(bind,9/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,9/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeTraverser_Clone2,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 bind_aset(bind,10/*key*/,it); it=rb_funcall(self,s_traverse_Traverser_Clone2cb_6Traverser_Clone2,1,bind);   it=Traverser_Clone2_traverse_item(self ); FAILTEST(pass3);
 bind_aset(bind,11/*val*/,it); it=rb_funcall(self,s_traverse_Traverser_Clone2cb_7Traverser_Clone2,1,bind); 
 bind_aset(bind,12/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
it=bind_aget(bind,12/*autovar*/);
 bind_aset(bind,13/*autovar*/,it); it=rb_funcall(self,s_traverse_Traverser_Clone2cb_8Traverser_Clone2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,8/*autovar*/);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_funcall(self,s_traverse_Traverser_Clone2cb_9Traverser_Clone2,1,bind); 
 bind_aset(bind,14/*_result*/,it); it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Traverser_Clone2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashTraverser_Clone21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=rb_funcall(self,s_visitTraverser_Clone2,0); FAILTEST(alt1_2);
 bind_aset(bind,0/*a*/,it); it=rb_funcall(self,s_traverse_item_Traverser_Clone2cb_1Traverser_Clone2,1,bind); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 bind_aset(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeTraverser_Clone2,0)));
   it=Traverser_Clone2_traverse(self ); FAILTEST(pass1);
 bind_aset(bind,3/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=bind_aget(bind,3/*autovar*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=rb_funcall(self,s_visitTraverser_Clone2,0); FAILTEST(alt2_2);
 bind_aset(bind,0/*a*/,it); it=rb_funcall(self,s_traverse_item_Traverser_Clone2cb_1Traverser_Clone2,1,bind); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 bind_aset(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeTraverser_Clone2,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,5/*ar*/,it); it=rb_ary_new3(0);
 bind_aset(bind,6/*autovar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Traverser_Clone2_traverse_item(self ); FAILTEST(break1);
 bind_aset(bind,7/*it*/,it); it=rb_funcall(self,s_traverse_item_Traverser_Clone2cb_2Traverser_Clone2,1,bind); 
 bind_aset(bind,8/*autovar*/,it); it=rb_funcall(self,s_traverse_item_Traverser_Clone2cb_3Traverser_Clone2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,6/*autovar*/);it=bind_aget(bind,5/*ar*/);
 bind_aset(bind,9/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=bind_aget(bind,9/*autovar*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=rb_funcall(self,s_visitTraverser_Clone2,0); FAILTEST(alt3_2);
 bind_aset(bind,0/*a*/,it); it=rb_funcall(self,s_traverse_item_Traverser_Clone2cb_1Traverser_Clone2,1,bind); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }VALUE cls_Visitor;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Visitor_traverse(VALUE self );
VALUE Visitor_traverse_item(VALUE self );
VALUE switchhashVisitor1;
static VALUE s_sizeVisitor;
static VALUE s_traverse_Visitorcb_1Visitor;
static VALUE s_traverse_Visitorcb_2Visitor;
static VALUE s_traverse_Visitorcb_3Visitor;
static VALUE s_traverse_item_Visitorcb_1Visitor;
static VALUE s_visitVisitor;
VALUE Visitor_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(9);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_traverse_Visitorcb_1Visitor,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,s_traverse_Visitorcb_2Visitor,1,bind); 
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_traverse_Visitorcb_3Visitor,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeVisitor,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,3/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeVisitor,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,4/*autovar*/,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=Visitor_traverse_item(self ); FAILTEST(break2);
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_traverse_item_Visitorcb_1Visitor,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,4/*autovar*/);
 bind_aset(bind,6/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,6/*autovar*/);
 bind_aset(bind,7/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,8/*_result*/,it); it=bind_aget(bind,8/*_result*/);
return it;
fail: return failobj; }
VALUE Visitor_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashVisitor1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=rb_funcall(self,s_visitVisitor,0); FAILTEST(alt1_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 bind_aset(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeVisitor,0)));
   it=Visitor_traverse(self ); FAILTEST(pass1);
 bind_aset(bind,2/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=rb_funcall(self,s_visitVisitor,0); FAILTEST(alt2_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 bind_aset(bind,3/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeVisitor,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,4/*autovar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Visitor_traverse_item(self ); FAILTEST(break1);
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_traverse_item_Visitorcb_1Visitor,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,4/*autovar*/);
 bind_aset(bind,6/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=bind_aget(bind,6/*autovar*/);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=rb_funcall(self,s_visitVisitor,0); FAILTEST(alt3_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;}it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
void Init_traverser_c(){ 
 cls_Traverser_Clone2=rb_define_class("Traverser_Clone2",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
s_sizeTraverser_Clone2=rb_intern("size");
s_traverse_Traverser_Clone2cb_1Traverser_Clone2=rb_intern("traverse_Traverser_Clone2cb_1");
s_traverse_Traverser_Clone2cb_2Traverser_Clone2=rb_intern("traverse_Traverser_Clone2cb_2");
s_traverse_Traverser_Clone2cb_3Traverser_Clone2=rb_intern("traverse_Traverser_Clone2cb_3");
s_traverse_Traverser_Clone2cb_4Traverser_Clone2=rb_intern("traverse_Traverser_Clone2cb_4");
s_traverse_Traverser_Clone2cb_5Traverser_Clone2=rb_intern("traverse_Traverser_Clone2cb_5");
s_traverse_Traverser_Clone2cb_6Traverser_Clone2=rb_intern("traverse_Traverser_Clone2cb_6");
s_traverse_Traverser_Clone2cb_7Traverser_Clone2=rb_intern("traverse_Traverser_Clone2cb_7");
s_traverse_Traverser_Clone2cb_8Traverser_Clone2=rb_intern("traverse_Traverser_Clone2cb_8");
s_traverse_Traverser_Clone2cb_9Traverser_Clone2=rb_intern("traverse_Traverser_Clone2cb_9");
s_traverse_item_Traverser_Clone2cb_1Traverser_Clone2=rb_intern("traverse_item_Traverser_Clone2cb_1");
s_traverse_item_Traverser_Clone2cb_2Traverser_Clone2=rb_intern("traverse_item_Traverser_Clone2cb_2");
s_traverse_item_Traverser_Clone2cb_3Traverser_Clone2=rb_intern("traverse_item_Traverser_Clone2cb_3");
s_visitTraverser_Clone2=rb_intern("visit");
switchhashTraverser_Clone21=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashTraverser_Clone21);
rb_define_method(cls_Traverser_Clone2,"traverse",Traverser_Clone2_traverse,0);
rb_define_method(cls_Traverser_Clone2,"traverse_item",Traverser_Clone2_traverse_item,0);

 cls_Visitor=rb_define_class("Visitor",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
s_sizeVisitor=rb_intern("size");
s_traverse_Visitorcb_1Visitor=rb_intern("traverse_Visitorcb_1");
s_traverse_Visitorcb_2Visitor=rb_intern("traverse_Visitorcb_2");
s_traverse_Visitorcb_3Visitor=rb_intern("traverse_Visitorcb_3");
s_traverse_item_Visitorcb_1Visitor=rb_intern("traverse_item_Visitorcb_1");
s_visitVisitor=rb_intern("visit");
switchhashVisitor1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashVisitor1);
rb_define_method(cls_Visitor,"traverse",Visitor_traverse,0);
rb_define_method(cls_Visitor,"traverse_item",Visitor_traverse_item,0);
 rb_eval_string("testversiontraverser('d5a0a83f7007913bcc60f99506ef5f27')");}
