#include "cthyst.h"
#include "memo.c"
VALUE cls_Minsize_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_switch(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Minsize_Dataflow_first(VALUE self );
VALUE Minsize_Dataflow_first_Minsize_Dataflow(VALUE self );
VALUE Minsize_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Minsize_Dataflow_1;
VALUE switchhash_Minsize_Dataflow_2;
VALUE switchhash_Minsize_Dataflow_3;
static VALUE sy_Minsize_Dataflow_Compiler_558e;
static VALUE sy_Minsize_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Minsize_Dataflow__d41d;
static VALUE sy_Minsize_Dataflow__lp_;
static VALUE sy_Minsize_Dataflow__lp_Compile_7f7b;
static VALUE sy_Minsize_Dataflow_bind_lb_1_rb_;
static VALUE sy_Minsize_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_Minsize_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_Minsize_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_Minsize_Dataflow_lattice_dot__5a9e;
static VALUE sy_Minsize_Dataflow_lattice_dot__b0f6;
static VALUE sy_Minsize_Dataflow_lattice_dot__e0e5;
static VALUE sy_Minsize_Dataflow_lattice_lb__bbba;
static VALUE sy_Minsize_Dataflow_lattice_lb__fdee;
VALUE profile_report_Minsize_Dataflow(VALUE self){cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);  return Qnil;}VALUE Minsize_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_str=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_Minsize_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;
it=_autovar_2; _autovar_3=it;;
switch(FIX2LONG(rb_hash_aref(switchhash_Minsize_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=_autovar_3; _autovar_4=it;;
int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; it=_autovar_4; _autovar_5=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; if (1){it=failobj;goto pass2;} break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else if (1){it=failobj;goto pass2;} break;
}
                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto revert2;}
                   success2: *ptr=oldpass2;
                it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_6=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_6);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass3;} _str=it;;

                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto revert2;}
                   success3: *ptr=oldpass3;
                bind_aset(bind2,1,_str);it=rb_funcall(self,sy_Minsize_Dataflow_lattice_lb__bbba,1,bind2);_str=bind_aget(bind2,1);; _autovar_7=it;;

;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=3; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; it=_autovar_4; _autovar_8=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_8);
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; if (1){it=failobj;goto pass4;} break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7; else if (1){it=failobj;goto revert4;}
;goto accept7;revert4:;  goto alt3_2; accept7:;

;ptr->branches-=3; goto accept6;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11; else if (1){it=failobj;goto revert5;}
;goto accept8;revert5:;  goto alt3_3; accept8:;

;ptr->branches-=2; goto accept6;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1; if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11; else if (1){it=failobj;goto revert6;}
;goto accept9;revert6:;  goto alt3_4; accept9:;

;ptr->branches-=1; goto accept6;
alt3_4: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto pass4;};
 accept6:;
 break;
}
                   goto success4;
                   pass4: *ptr=oldpass4;if (1){it=failobj;goto revert3;}
                   success4: *ptr=oldpass4;
                ptr->pos=ptr->len;it=rb_funcall(self,sy_Minsize_Dataflow_lattice_lb__fdee,1,bind2); _autovar_7=it;;

;goto accept5;revert3:;  goto alt2_3; accept5:;

;ptr->branches-=2; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1; it=_autovar_4; _autovar_9=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_9);
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; if (1){it=failobj;goto pass5;} break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else if (1){it=failobj;goto pass5;} break;
}
                   goto success5;
                   pass5: *ptr=oldpass5;if (1){it=failobj;goto revert7;}
                   success5: *ptr=oldpass5;
                it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__e0e5,1,bind2); _autovar_7=it;;

;goto accept10;revert7:;  goto alt2_4; accept10:;

;ptr->branches-=1; goto accept3;
alt2_4: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto pass1;};
 accept3:;
 break;
case 1/*Object*/:; it=_autovar_3; _autovar_10=it;;
int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; it=_autovar_10; _autovar_5=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; if (1){it=failobj;goto pass6;} break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else if (1){it=failobj;goto pass6;} break;
}
                   goto success6;
                   pass6: *ptr=oldpass6;if (1){it=failobj;goto revert8;}
                   success6: *ptr=oldpass6;
                if (1){it=failobj;goto revert8;}
;goto accept12;revert8:;  goto alt4_2; accept12:;

;ptr->branches-=3; goto accept11;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1; it=_autovar_10; _autovar_8=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_8);
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; if (1){it=failobj;goto pass7;} break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7; else if (1){it=failobj;goto revert10;}
;goto accept15;revert10:;  goto alt5_2; accept15:;

;ptr->branches-=3; goto accept14;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11; else if (1){it=failobj;goto revert11;}
;goto accept16;revert11:;  goto alt5_3; accept16:;

;ptr->branches-=2; goto accept14;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1; if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11; else if (1){it=failobj;goto revert12;}
;goto accept17;revert12:;  goto alt5_4; accept17:;

;ptr->branches-=1; goto accept14;
alt5_4: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto pass7;};
 accept14:;
 break;
}
                   goto success7;
                   pass7: *ptr=oldpass7;if (1){it=failobj;goto revert9;}
                   success7: *ptr=oldpass7;
                ptr->pos=ptr->len;it=rb_funcall(self,sy_Minsize_Dataflow_lattice_lb__fdee,1,bind2); _autovar_7=it;;

;goto accept13;revert9:;  goto alt4_3; accept13:;

;ptr->branches-=2; goto accept11;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1; it=_autovar_10; _autovar_9=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_9);
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; if (1){it=failobj;goto pass8;} break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else if (1){it=failobj;goto pass8;} break;
}
                   goto success8;
                   pass8: *ptr=oldpass8;if (1){it=failobj;goto revert13;}
                   success8: *ptr=oldpass8;
                it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__e0e5,1,bind2); _autovar_7=it;;

;goto accept18;revert13:;  goto alt4_4; accept18:;

;ptr->branches-=1; goto accept11;
alt4_4: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto pass1;};
 accept11:;
 break;
}
                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto revert1;}
                   success1: *ptr=oldpass1;
                it=_autovar_7; __result=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1;   it=Minsize_Dataflow_first_Minsize_Dataflow(self ); if (it==failobj){it=failobj;goto revert14;} __result=it;;

;goto accept19;revert14:;  goto alt1_3; accept19:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case 1/*Object*/:;   it=Minsize_Dataflow_first_Minsize_Dataflow(self ); if (it==failobj){it=failobj;goto fail;} __result=it;;
 break;
}
fail: return it;
}
VALUE Minsize_Dataflow_first_Minsize_Dataflow(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,__result=Qnil,_autovar_3=Qnil,_name=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_val=Qnil,_autovar_10=Qnil,_vals=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,_p=Qnil,_v=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,_el=Qnil,_autovar_15=Qnil,_autovar_16=Qnil,_nev=Qnil,_autovar_17=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_Minsize_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__5a9e,1,bind2); _autovar_2=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_2; __result=it;;
 break;
case 8/*Apply*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass2;} _name=it;;
ptr->pos=ptr->len;bind_aset(bind2,1,_name);it=rb_funcall(self,sy_Minsize_Dataflow__lp_Compile_7f7b,1,bind2);_name=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto pass2;};bind_aset(bind2,1,_name);it=rb_funcall(self,sy_Minsize_Dataflow_Compiler_558e,1,bind2);_name=bind_aget(bind2,1);; _autovar_4=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_4;ptr->len=1;
                     it=First_Dataflow_value(self ); if (it==failobj){it=failobj;goto pass3;} _autovar_5=it;;

                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto pass2;}
                   success3: *ptr=oldpass3;
                it=_autovar_5; _autovar_6=it;;

                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto revert1;}
                   success2: *ptr=oldpass2;
                it=_autovar_6; __result=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert2;}it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2); __result=it;;

;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case 9/*Bind*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_7=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_7);
                     it=First_Dataflow_value(self ); if (it==failobj){it=failobj;goto pass4;} _autovar_8=it;;

                   goto success4;
                   pass4: *ptr=oldpass4;if (1){it=failobj;goto revert3;}
                   success4: *ptr=oldpass4;
                it=_autovar_8; __result=it;;

;goto accept5;revert3:;  goto alt2_2; accept5:;

;ptr->branches-=2; goto accept4;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert4;}it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2); __result=it;;

;goto accept6;revert4:;  goto alt2_3; accept6:;

;ptr->branches-=1; goto accept4;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept4:;
 break;
case 10/*Many*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_9=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_9);
                     it=First_Dataflow_value(self ); if (it==failobj){it=failobj;goto pass5;} _val=it;;
bind_aset(bind2,1,_val);it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb_,1,bind2);_val=bind_aget(bind2,1);; _autovar_10=it;;

                   goto success5;
                   pass5: *ptr=oldpass5;if (1){it=failobj;goto revert5;}
                   success5: *ptr=oldpass5;
                it=_autovar_10; __result=it;;

;goto accept8;revert5:;  goto alt3_2; accept8:;

;ptr->branches-=2; goto accept7;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert6;}it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2); __result=it;;

;goto accept9;revert6:;  goto alt3_3; accept9:;

;ptr->branches-=1; goto accept7;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept7:;
 break;
case 11/*Or*/:case 12/*Switch_Char*/:case 13/*Switch_Clas*/:; it=rb_ary_new3(0); _vals=it;;
int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=First_Dataflow_switch(self ); if (it==failobj){it=failobj;goto revert7;} _autovar_11=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_11);
                   int stop1=0; while(!stop1){ int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert8;} _autovar_12=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_12);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass7;} _p=it;;
  it=First_Dataflow_value(self ); if (it==failobj){it=failobj;goto pass7;} _v=it;;
bind_aset(bind2,1,_p);bind_aset(bind2,2,_v);it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);_p=bind_aget(bind2,1);;_v=bind_aget(bind2,2);; _autovar_13=it;;
it=AmethystCore_append(self,_vals,_autovar_13);
                   goto success7;
                   pass7: *ptr=oldpass7;if (1){it=failobj;goto revert8;}
                   success7: *ptr=oldpass7;
                
;goto accept13;revert8:;  goto alt5_2; accept13:;

;ptr->branches-=2; goto accept12;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; stop1=1;
;goto accept14;revert9:;  goto alt5_3; accept14:;

;ptr->branches-=1; goto accept12;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto pass6;};
 accept12:;
 } 
                   goto success6;
                   pass6: *ptr=oldpass6;if (1){it=failobj;goto revert7;}
                   success6: *ptr=oldpass6;
                bind_aset(bind2,1,_vals);it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);_vals=bind_aget(bind2,1);; __result=it;;

;goto accept11;revert7:;  goto alt4_2; accept11:;

;ptr->branches-=2; goto accept10;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert10;}it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2); __result=it;;

;goto accept15;revert10:;  goto alt4_3; accept15:;

;ptr->branches-=1; goto accept10;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept10:;
 break;
case 14/*Seq*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_14=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_14);
                   it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__5a9e,1,bind2); _val=it;;
int stop2=0; while(!stop2){ int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert11;} _el=it;;
it=_el; _autovar_15=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_15;ptr->len=1;
                     it=First_Dataflow_value(self ); if (it==failobj){it=failobj;goto pass9;} _autovar_16=it;;

                   goto success9;
                   pass9: *ptr=oldpass9;if (1){it=failobj;goto revert11;}
                   success9: *ptr=oldpass9;
                it=_autovar_16; _nev=it;;
bind_aset(bind2,1,_val);bind_aset(bind2,2,_nev);it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);_val=bind_aget(bind2,1);;_nev=bind_aget(bind2,2);; _val=it;;
int oldpos7=ptr->pos;int cut7=0;
alt7_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; bind_aset(bind2,1,_el);it=rb_funcall(self,sy_Minsize_Dataflow__lp_,1,bind2);_el=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto revert12;};ptr->pos=ptr->len;
;goto accept19;revert12:;  goto alt7_2; accept19:;

;ptr->branches-=2; goto accept18;
alt7_2: ptr->pos=oldpos7;ptr->branches-=1; it=rb_funcall(self,sy_Minsize_Dataflow__d41d,1,bind2);
;goto accept20;revert13:;  goto alt7_3; accept20:;

;ptr->branches-=1; goto accept18;
alt7_3: ptr->pos=oldpos7;ptr->branches-=1;if (1){it=failobj;goto revert11;};
 accept18:;

;goto accept17;revert11:;  goto alt6_2; accept17:;

;ptr->branches-=2; goto accept16;
alt6_2: ptr->pos=oldpos6;ptr->branches-=1; stop2=1;
;goto accept21;revert14:;  goto alt6_3; accept21:;

;ptr->branches-=1; goto accept16;
alt6_3: ptr->pos=oldpos6;ptr->branches-=1;if (1){it=failobj;goto pass8;};
 accept16:;
 } it=_val; _autovar_17=it;;

                   goto success8;
                   pass8: *ptr=oldpass8;if (1){it=failobj;goto fail;}
                   success8: *ptr=oldpass8;
                it=_autovar_17; __result=it;;
 break;
case 15/*Object*/:;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto fail;}it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2); __result=it;;
 break;
}
fail: return it;
}
VALUE Minsize_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE it ,_v=Qnil,_autovar=Qnil,_autovar_2=Qnil,__result=Qnil;VALUE bind2=bind_new2(1); _v=a0;;  cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);bind_aset(bind2,1,_v);it=rb_funcall(self,sy_Minsize_Dataflow__at_vis_eq_bin_8b89,1,bind2);_v=bind_aget(bind2,1);; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar;ptr->len=1;
                     it=Minsize_Dataflow_first(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_2; __result=it;;

fail: return it;
}
void Init_Minsize_Dataflow_c(){ 
 cls_Minsize_Dataflow=rb_define_class("Minsize_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
                    failobj=rb_eval_string("FAIL");
                    rb_define_method(cls_Minsize_Dataflow,"profile_report",profile_report_Minsize_Dataflow,0);
switchhash_Minsize_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Minsize_Dataflow_1);;
switchhash_Minsize_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Minsize_Dataflow_2);;
switchhash_Minsize_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Switch_Char\nnext h[k]=13 if k<=Switch_Clas\nnext h[k]=14 if k<=Seq\nnext h[k]=15 if k<=Object\n}");rb_global_variable(&switchhash_Minsize_Dataflow_3);;
sy_Minsize_Dataflow_Compiler_558e=rb_intern("Minsize_Dataflow_Compiler_558e");
sy_Minsize_Dataflow__at_vis_eq_bin_8b89=rb_intern("Minsize_Dataflow__at_vis_eq_bin_8b89");
sy_Minsize_Dataflow__d41d=rb_intern("Minsize_Dataflow__d41d");
sy_Minsize_Dataflow__lp_=rb_intern("Minsize_Dataflow__lp_");
sy_Minsize_Dataflow__lp_Compile_7f7b=rb_intern("Minsize_Dataflow__lp_Compile_7f7b");
sy_Minsize_Dataflow_bind_lb_1_rb_=rb_intern("Minsize_Dataflow_bind_lb_1_rb_");
sy_Minsize_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("Minsize_Dataflow_bind_lb_1_rb__dot__159a");
sy_Minsize_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("Minsize_Dataflow_bind_lb_1_rb__dot__a37c");
sy_Minsize_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("Minsize_Dataflow_bind_lb_1_rb__dot__c5d5");
sy_Minsize_Dataflow_lattice_dot__5a9e=rb_intern("Minsize_Dataflow_lattice_dot__5a9e");
sy_Minsize_Dataflow_lattice_dot__b0f6=rb_intern("Minsize_Dataflow_lattice_dot__b0f6");
sy_Minsize_Dataflow_lattice_dot__e0e5=rb_intern("Minsize_Dataflow_lattice_dot__e0e5");
sy_Minsize_Dataflow_lattice_lb__bbba=rb_intern("Minsize_Dataflow_lattice_lb__bbba");
sy_Minsize_Dataflow_lattice_lb__fdee=rb_intern("Minsize_Dataflow_lattice_lb__fdee");
                    rb_define_method(cls_Minsize_Dataflow,"first",Minsize_Dataflow_first,0);
rb_define_method(cls_Minsize_Dataflow,"first_Minsize_Dataflow",Minsize_Dataflow_first_Minsize_Dataflow,0);
rb_define_method(cls_Minsize_Dataflow,"getvalue",Minsize_Dataflow_getvalue,1);
                    }
