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
VALUE profile_report_Minsize_Dataflow(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Minsize_Dataflow_first(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_str=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Minsize_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE revert1autovar=rb_funcall(_autovar,rb_intern("dup"),0);
        VALUE revert1autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
        VALUE revert1autovar_3=rb_funcall(_autovar_3,rb_intern("dup"),0);
        VALUE revert1autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        VALUE revert1autovar_5=rb_funcall(_autovar_5,rb_intern("dup"),0);
        VALUE revert1autovar_6=rb_funcall(_autovar_6,rb_intern("dup"),0);
        VALUE revert1str=rb_funcall(_str,rb_intern("dup"),0);
        VALUE revert1autovar_7=rb_funcall(_autovar_7,rb_intern("dup"),0);
        VALUE revert1autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert1autovar_9=rb_funcall(_autovar_9,rb_intern("dup"),0);
        VALUE revert1autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert1_result=rb_funcall(__result,rb_intern("dup"),0);
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        _autovar_2=it;;
        it=_autovar_2;
        _autovar_3=it;;
        switch(FIX2LONG(rb_hash_aref(switchhash_Minsize_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*CAct*/:
            ;
            it=_autovar_3;
            _autovar_4=it;;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE revert2autovar_5=rb_funcall(_autovar_5,rb_intern("dup"),0);
            VALUE revert2autovar_6=rb_funcall(_autovar_6,rb_intern("dup"),0);
            VALUE revert2str=rb_funcall(_str,rb_intern("dup"),0);
            VALUE revert2autovar_7=rb_funcall(_autovar_7,rb_intern("dup"),0);
            it=_autovar_4;
            _autovar_5=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_5);
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass2;
                }
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else if (1) {
                    it=failobj;
                    goto pass2;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass2;
            }
            goto success2;
pass2:
            *ptr=oldpass2;
            if (1) {
                it=failobj;
                goto revert2;
            }
success2:
            *ptr=oldpass2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_6=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_6);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass3;
            }
            _str=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass3;
            }
            goto success3;
pass3:
            *ptr=oldpass3;
            if (1) {
                it=failobj;
                goto revert2;
            }
success3:
            *ptr=oldpass3;
            bind_aset(bind2,1,_str);
            it=rb_funcall(self,sy_Minsize_Dataflow_lattice_lb__bbba,1,bind2);
            _str=bind_aget(bind2,1);;
            _autovar_7=it;;

            ;
            goto accept4;
revert2:
            ;
            _autovar_5=revert2autovar_5;
            _autovar_6=revert2autovar_6;
            _str=revert2str;
            _autovar_7=revert2autovar_7;
            goto alt2_2;
accept4:
            ;

            ;
            goto accept3;
alt2_2:
            ptr->pos=oldpos2;
            VALUE revert3autovar_7=rb_funcall(_autovar_7,rb_intern("dup"),0);
            VALUE revert3autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
            it=_autovar_4;
            _autovar_8=it;;
            cstruct oldpass4=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_8);
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass4;
                }
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                int oldpos3=ptr->pos;
                int cut3=0;
alt3_1:
                ;
                if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
                else if (1) {
                    it=failobj;
                    goto revert4;
                }
                ;
                goto accept7;
revert4:
                ;
                goto alt3_2;
accept7:
                ;

                ;
                goto accept6;
alt3_2:
                ptr->pos=oldpos3;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11;
                else if (1) {
                    it=failobj;
                    goto revert5;
                }
                ;
                goto accept8;
revert5:
                ;
                goto alt3_3;
accept8:
                ;

                ;
                goto accept6;
alt3_3:
                ptr->pos=oldpos3;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11;
                else if (1) {
                    it=failobj;
                    goto revert6;
                }
                ;
                goto accept9;
revert6:
                ;
                goto alt3_4;
accept9:
                ;

                ;
                goto accept6;
alt3_4:
                ptr->pos=oldpos3;
                if (1) {
                    it=failobj;
                    goto pass4;
                };
accept6:
                ;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass4;
            }
            goto success4;
pass4:
            *ptr=oldpass4;
            if (1) {
                it=failobj;
                goto revert3;
            }
success4:
            *ptr=oldpass4;
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Minsize_Dataflow_lattice_lb__fdee,1,bind2);
            _autovar_7=it;;

            ;
            goto accept5;
revert3:
            ;
            _autovar_7=revert3autovar_7;
            _autovar_8=revert3autovar_8;
            goto alt2_3;
accept5:
            ;

            ;
            goto accept3;
alt2_3:
            ptr->pos=oldpos2;
            VALUE revert7autovar_7=rb_funcall(_autovar_7,rb_intern("dup"),0);
            VALUE revert7autovar_9=rb_funcall(_autovar_9,rb_intern("dup"),0);
            it=_autovar_4;
            _autovar_9=it;;
            cstruct oldpass5=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_9);
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... 'e':
                ;
            case 'g' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass5;
                }
                break;
            case 'f' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
                else if (1) {
                    it=failobj;
                    goto pass5;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass5;
            }
            goto success5;
pass5:
            *ptr=oldpass5;
            if (1) {
                it=failobj;
                goto revert7;
            }
success5:
            *ptr=oldpass5;
            it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__e0e5,1,bind2);
            _autovar_7=it;;

            ;
            goto accept10;
revert7:
            ;
            _autovar_7=revert7autovar_7;
            _autovar_9=revert7autovar_9;
            goto alt2_4;
accept10:
            ;

            ;
            goto accept3;
alt2_4:
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto pass1;
            };
accept3:
            ;
            break;
        case 1/*Object*/:
            ;
            it=_autovar_3;
            _autovar_10=it;;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            VALUE revert8autovar_5=rb_funcall(_autovar_5,rb_intern("dup"),0);
            it=_autovar_10;
            _autovar_5=it;;
            cstruct oldpass6=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_5);
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass6;
                }
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else if (1) {
                    it=failobj;
                    goto pass6;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass6;
            }
            goto success6;
pass6:
            *ptr=oldpass6;
            if (1) {
                it=failobj;
                goto revert8;
            }
success6:
            *ptr=oldpass6;
            if (1) {
                it=failobj;
                goto revert8;
            }
            ;
            goto accept12;
revert8:
            ;
            _autovar_5=revert8autovar_5;
            goto alt4_2;
accept12:
            ;

            ;
            goto accept11;
alt4_2:
            ptr->pos=oldpos4;
            VALUE revert9autovar_7=rb_funcall(_autovar_7,rb_intern("dup"),0);
            VALUE revert9autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
            it=_autovar_10;
            _autovar_8=it;;
            cstruct oldpass7=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_8);
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass7;
                }
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                int oldpos5=ptr->pos;
                int cut5=0;
alt5_1:
                ;
                if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
                else if (1) {
                    it=failobj;
                    goto revert10;
                }
                ;
                goto accept15;
revert10:
                ;
                goto alt5_2;
accept15:
                ;

                ;
                goto accept14;
alt5_2:
                ptr->pos=oldpos5;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11;
                else if (1) {
                    it=failobj;
                    goto revert11;
                }
                ;
                goto accept16;
revert11:
                ;
                goto alt5_3;
accept16:
                ;

                ;
                goto accept14;
alt5_3:
                ptr->pos=oldpos5;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11;
                else if (1) {
                    it=failobj;
                    goto revert12;
                }
                ;
                goto accept17;
revert12:
                ;
                goto alt5_4;
accept17:
                ;

                ;
                goto accept14;
alt5_4:
                ptr->pos=oldpos5;
                if (1) {
                    it=failobj;
                    goto pass7;
                };
accept14:
                ;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass7;
            }
            goto success7;
pass7:
            *ptr=oldpass7;
            if (1) {
                it=failobj;
                goto revert9;
            }
success7:
            *ptr=oldpass7;
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Minsize_Dataflow_lattice_lb__fdee,1,bind2);
            _autovar_7=it;;

            ;
            goto accept13;
revert9:
            ;
            _autovar_7=revert9autovar_7;
            _autovar_8=revert9autovar_8;
            goto alt4_3;
accept13:
            ;

            ;
            goto accept11;
alt4_3:
            ptr->pos=oldpos4;
            VALUE revert13autovar_7=rb_funcall(_autovar_7,rb_intern("dup"),0);
            VALUE revert13autovar_9=rb_funcall(_autovar_9,rb_intern("dup"),0);
            it=_autovar_10;
            _autovar_9=it;;
            cstruct oldpass8=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_9);
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... 'e':
                ;
            case 'g' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass8;
                }
                break;
            case 'f' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
                else if (1) {
                    it=failobj;
                    goto pass8;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass8;
            }
            goto success8;
pass8:
            *ptr=oldpass8;
            if (1) {
                it=failobj;
                goto revert13;
            }
success8:
            *ptr=oldpass8;
            it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__e0e5,1,bind2);
            _autovar_7=it;;

            ;
            goto accept18;
revert13:
            ;
            _autovar_7=revert13autovar_7;
            _autovar_9=revert13autovar_9;
            goto alt4_4;
accept18:
            ;

            ;
            goto accept11;
alt4_4:
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto pass1;
            };
accept11:
            ;
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto revert1;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_7;
        __result=it;;

        ;
        goto accept2;
revert1:
        ;
        _autovar=revert1autovar;
        _autovar_2=revert1autovar_2;
        _autovar_3=revert1autovar_3;
        _autovar_4=revert1autovar_4;
        _autovar_5=revert1autovar_5;
        _autovar_6=revert1autovar_6;
        _str=revert1str;
        _autovar_7=revert1autovar_7;
        _autovar_8=revert1autovar_8;
        _autovar_9=revert1autovar_9;
        _autovar_10=revert1autovar_10;
        __result=revert1_result;
        goto alt1_2;
accept2:
        ;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        VALUE revert14_result=rb_funcall(__result,rb_intern("dup"),0);
        it=Minsize_Dataflow_first_Minsize_Dataflow(self );
        if (it==failobj) {
            it=failobj;
            goto revert14;
        }
        __result=it;;

        ;
        goto accept19;
revert14:
        ;
        __result=revert14_result;
        goto alt1_3;
accept19:
        ;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        break;
    case 1/*Object*/:
        ;
        it=Minsize_Dataflow_first_Minsize_Dataflow(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Minsize_Dataflow_first_Minsize_Dataflow(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,__result=Qnil,_autovar_3=Qnil,_name=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_val=Qnil,_autovar_10=Qnil,_vals=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,_p=Qnil,_v=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,_el=Qnil,_autovar_15=Qnil,_autovar_16=Qnil,_nev=Qnil,_autovar_17=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Minsize_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
    case 1/*CAct*/:
    case 2/*Cut*/:
    case 3/*Local*/:
    case 4/*Lookahead*/:
    case 5/*Pass*/:
    case 6/*Result*/:
    case 7/*Stop*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE revert1autovar=rb_funcall(_autovar,rb_intern("dup"),0);
        VALUE revert1autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
        VALUE revert1_result=rb_funcall(__result,rb_intern("dup"),0);
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__5a9e,1,bind2);
        _autovar_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto revert1;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;

        ;
        goto accept2;
revert1:
        ;
        _autovar=revert1autovar;
        _autovar_2=revert1autovar_2;
        __result=revert1_result;
        goto alt1_2;
accept2:
        ;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        VALUE revert2_result=rb_funcall(__result,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert2;
        }
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept3;
revert2:
        ;
        __result=revert2_result;
        goto alt1_3;
accept3:
        ;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        break;
    case 8/*Apply*/:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE revert3_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert3autovar_3=rb_funcall(_autovar_3,rb_intern("dup"),0);
        VALUE revert3name=rb_funcall(_name,rb_intern("dup"),0);
        VALUE revert3autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        VALUE revert3autovar_5=rb_funcall(_autovar_5,rb_intern("dup"),0);
        VALUE revert3autovar_6=rb_funcall(_autovar_6,rb_intern("dup"),0);
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_3);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass2;
        }
        _name=it;;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Minsize_Dataflow__lp_Compile_7f7b,1,bind2);
        _name=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass2;
        };
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Minsize_Dataflow_Compiler_558e,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_4=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_4;
        ptr->len=1;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(255):
            ;
            it=First_Dataflow_value(self );
            if (it==failobj) {
                it=failobj;
                goto pass3;
            }
            _autovar_5=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass3;
            }
            break;
            if (1) {
                it=failobj;
                goto pass3;
            }
            break;
        }
        goto success3;
pass3:
        *ptr=oldpass3;
        if (1) {
            it=failobj;
            goto pass2;
        }
success3:
        *ptr=oldpass3;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass2;
        }
        it=_autovar_5;
        _autovar_6=it;;

        goto success2;
pass2:
        *ptr=oldpass2;
        if (1) {
            it=failobj;
            goto revert3;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_6;
        __result=it;;

        ;
        goto accept5;
revert3:
        ;
        __result=revert3_result;
        _autovar_3=revert3autovar_3;
        _name=revert3name;
        _autovar_4=revert3autovar_4;
        _autovar_5=revert3autovar_5;
        _autovar_6=revert3autovar_6;
        goto alt2_2;
accept5:
        ;

        ;
        goto accept4;
alt2_2:
        ptr->pos=oldpos2;
        VALUE revert4_result=rb_funcall(__result,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert4;
        }
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept6;
revert4:
        ;
        __result=revert4_result;
        goto alt2_3;
accept6:
        ;

        ;
        goto accept4;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto fail;
        };
accept4:
        ;
        break;
    case 9/*Bind*/:
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        VALUE revert5_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert5autovar_7=rb_funcall(_autovar_7,rb_intern("dup"),0);
        VALUE revert5autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_7=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_7);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(255):
            ;
            it=First_Dataflow_value(self );
            if (it==failobj) {
                it=failobj;
                goto pass4;
            }
            _autovar_8=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass4;
            }
            break;
            if (1) {
                it=failobj;
                goto pass4;
            }
            break;
        }
        goto success4;
pass4:
        *ptr=oldpass4;
        if (1) {
            it=failobj;
            goto revert5;
        }
success4:
        *ptr=oldpass4;
        it=_autovar_8;
        __result=it;;

        ;
        goto accept8;
revert5:
        ;
        __result=revert5_result;
        _autovar_7=revert5autovar_7;
        _autovar_8=revert5autovar_8;
        goto alt3_2;
accept8:
        ;

        ;
        goto accept7;
alt3_2:
        ptr->pos=oldpos3;
        VALUE revert6_result=rb_funcall(__result,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert6;
        }
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept9;
revert6:
        ;
        __result=revert6_result;
        goto alt3_3;
accept9:
        ;

        ;
        goto accept7;
alt3_3:
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto fail;
        };
accept7:
        ;
        break;
    case 10/*Many*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        VALUE revert7_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert7autovar_9=rb_funcall(_autovar_9,rb_intern("dup"),0);
        VALUE revert7val=rb_funcall(_val,rb_intern("dup"),0);
        VALUE revert7autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_9=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_9);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(255):
            ;
            it=First_Dataflow_value(self );
            if (it==failobj) {
                it=failobj;
                goto pass5;
            }
            _val=it;;
            bind_aset(bind2,1,_val);
            it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb_,1,bind2);
            _val=bind_aget(bind2,1);;
            _autovar_10=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass5;
            }
            break;
            if (1) {
                it=failobj;
                goto pass5;
            }
            break;
        }
        goto success5;
pass5:
        *ptr=oldpass5;
        if (1) {
            it=failobj;
            goto revert7;
        }
success5:
        *ptr=oldpass5;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept11;
revert7:
        ;
        __result=revert7_result;
        _autovar_9=revert7autovar_9;
        _val=revert7val;
        _autovar_10=revert7autovar_10;
        goto alt4_2;
accept11:
        ;

        ;
        goto accept10;
alt4_2:
        ptr->pos=oldpos4;
        VALUE revert8_result=rb_funcall(__result,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert8;
        }
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept12;
revert8:
        ;
        __result=revert8_result;
        goto alt4_3;
accept12:
        ;

        ;
        goto accept10;
alt4_3:
        ptr->pos=oldpos4;
        if (1) {
            it=failobj;
            goto fail;
        };
accept10:
        ;
        break;
    case 11/*Or*/:
    case 12/*Switch_Char*/:
    case 13/*Switch_Clas*/:
        ;
        it=rb_ary_new3(0);
        _vals=it;;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
        ;
        VALUE revert9_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert9vals=rb_funcall(_vals,rb_intern("dup"),0);
        VALUE revert9autovar_11=rb_funcall(_autovar_11,rb_intern("dup"),0);
        VALUE revert9autovar_12=rb_funcall(_autovar_12,rb_intern("dup"),0);
        VALUE revert9p=rb_funcall(_p,rb_intern("dup"),0);
        VALUE revert9v=rb_funcall(_v,rb_intern("dup"),0);
        VALUE revert9autovar_13=rb_funcall(_autovar_13,rb_intern("dup"),0);
        it=First_Dataflow_switch(self );
        if (it==failobj) {
            it=failobj;
            goto revert9;
        }
        _autovar_11=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_11);
        int stop1=0;
        while(!stop1) {
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            VALUE revert10autovar_12=rb_funcall(_autovar_12,rb_intern("dup"),0);
            VALUE revert10p=rb_funcall(_p,rb_intern("dup"),0);
            VALUE revert10v=rb_funcall(_v,rb_intern("dup"),0);
            VALUE revert10autovar_13=rb_funcall(_autovar_13,rb_intern("dup"),0);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert10;
            }
            _autovar_12=it;;
            cstruct oldpass7=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_12);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass7;
            }
            _p=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... UC(255):
                ;
                it=First_Dataflow_value(self );
                if (it==failobj) {
                    it=failobj;
                    goto pass7;
                }
                _v=it;;
                break;
                if (1) {
                    it=failobj;
                    goto pass7;
                }
                break;
            }
            bind_aset(bind2,1,_p);
            bind_aset(bind2,2,_v);
            it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);
            _p=bind_aget(bind2,1);;
            _v=bind_aget(bind2,2);;
            _autovar_13=it;;
            it=AmethystCore_append(self,_vals,_autovar_13);
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass7;
            }
            goto success7;
pass7:
            *ptr=oldpass7;
            if (1) {
                it=failobj;
                goto revert10;
            }
success7:
            *ptr=oldpass7;

            ;
            goto accept16;
revert10:
            ;
            _autovar_12=revert10autovar_12;
            _p=revert10p;
            _v=revert10v;
            _autovar_13=revert10autovar_13;
            goto alt6_2;
accept16:
            ;

            ;
            goto accept15;
alt6_2:
            ptr->pos=oldpos6;
            stop1=1;
            ;
            goto accept17;
revert11:
            ;
            goto alt6_3;
accept17:
            ;

            ;
            goto accept15;
alt6_3:
            ptr->pos=oldpos6;
            if (1) {
                it=failobj;
                goto pass6;
            };
accept15:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass6;
        }
        goto success6;
pass6:
        *ptr=oldpass6;
        if (1) {
            it=failobj;
            goto revert9;
        }
success6:
        *ptr=oldpass6;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept14;
revert9:
        ;
        __result=revert9_result;
        _vals=revert9vals;
        _autovar_11=revert9autovar_11;
        _autovar_12=revert9autovar_12;
        _p=revert9p;
        _v=revert9v;
        _autovar_13=revert9autovar_13;
        goto alt5_2;
accept14:
        ;

        ;
        goto accept13;
alt5_2:
        ptr->pos=oldpos5;
        VALUE revert12_result=rb_funcall(__result,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert12;
        }
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept18;
revert12:
        ;
        __result=revert12_result;
        goto alt5_3;
accept18:
        ;

        ;
        goto accept13;
alt5_3:
        ptr->pos=oldpos5;
        if (1) {
            it=failobj;
            goto fail;
        };
accept13:
        ;
        break;
    case 14/*Seq*/:
        ;
        int oldpos7=ptr->pos;
        int cut7=0;
alt7_1:
        ;
        VALUE revert13_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert13val=rb_funcall(_val,rb_intern("dup"),0);
        VALUE revert13autovar_14=rb_funcall(_autovar_14,rb_intern("dup"),0);
        VALUE revert13el=rb_funcall(_el,rb_intern("dup"),0);
        VALUE revert13autovar_15=rb_funcall(_autovar_15,rb_intern("dup"),0);
        VALUE revert13autovar_16=rb_funcall(_autovar_16,rb_intern("dup"),0);
        VALUE revert13nev=rb_funcall(_nev,rb_intern("dup"),0);
        VALUE revert13autovar_17=rb_funcall(_autovar_17,rb_intern("dup"),0);
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_14=it;;
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_14);
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__5a9e,1,bind2);
        _val=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            VALUE revert14val=rb_funcall(_val,rb_intern("dup"),0);
            VALUE revert14el=rb_funcall(_el,rb_intern("dup"),0);
            VALUE revert14autovar_15=rb_funcall(_autovar_15,rb_intern("dup"),0);
            VALUE revert14autovar_16=rb_funcall(_autovar_16,rb_intern("dup"),0);
            VALUE revert14nev=rb_funcall(_nev,rb_intern("dup"),0);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert14;
            }
            _el=it;;
            it=_el;
            _autovar_15=it;;
            cstruct oldpass9=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_15;
            ptr->len=1;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... UC(255):
                ;
                it=First_Dataflow_value(self );
                if (it==failobj) {
                    it=failobj;
                    goto pass9;
                }
                _autovar_16=it;;
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass9;
                }
                break;
                if (1) {
                    it=failobj;
                    goto pass9;
                }
                break;
            }
            goto success9;
pass9:
            *ptr=oldpass9;
            if (1) {
                it=failobj;
                goto revert14;
            }
success9:
            *ptr=oldpass9;
            it=_autovar_16;
            _nev=it;;
            bind_aset(bind2,1,_val);
            bind_aset(bind2,2,_nev);
            it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);
            _val=bind_aget(bind2,1);;
            _nev=bind_aget(bind2,2);;
            _val=it;;
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            VALUE revert15el=rb_funcall(_el,rb_intern("dup"),0);
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Minsize_Dataflow__lp_,1,bind2);
            _el=bind_aget(bind2,1);;
            if (it==failobj) {
                it=failobj;
                goto revert15;
            };
            ptr->pos=ptr->len;
            ;
            goto accept24;
revert15:
            ;
            _el=revert15el;
            goto alt9_2;
accept24:
            ;

            ;
            goto accept23;
alt9_2:
            ptr->pos=oldpos9;
            it=rb_funcall(self,sy_Minsize_Dataflow__d41d,1,bind2);
            ;
            goto accept25;
revert16:
            ;
            goto alt9_3;
accept25:
            ;

            ;
            goto accept23;
alt9_3:
            ptr->pos=oldpos9;
            if (1) {
                it=failobj;
                goto revert14;
            };
accept23:
            ;

            ;
            goto accept22;
revert14:
            ;
            _val=revert14val;
            _el=revert14el;
            _autovar_15=revert14autovar_15;
            _autovar_16=revert14autovar_16;
            _nev=revert14nev;
            goto alt8_2;
accept22:
            ;

            ;
            goto accept21;
alt8_2:
            ptr->pos=oldpos8;
            stop2=1;
            ;
            goto accept26;
revert17:
            ;
            goto alt8_3;
accept26:
            ;

            ;
            goto accept21;
alt8_3:
            ptr->pos=oldpos8;
            if (1) {
                it=failobj;
                goto pass8;
            };
accept21:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass8;
        }
        it=_val;
        _autovar_17=it;;

        goto success8;
pass8:
        *ptr=oldpass8;
        if (1) {
            it=failobj;
            goto revert13;
        }
success8:
        *ptr=oldpass8;
        it=_autovar_17;
        __result=it;;

        ;
        goto accept20;
revert13:
        ;
        __result=revert13_result;
        _val=revert13val;
        _autovar_14=revert13autovar_14;
        _el=revert13el;
        _autovar_15=revert13autovar_15;
        _autovar_16=revert13autovar_16;
        _nev=revert13nev;
        _autovar_17=revert13autovar_17;
        goto alt7_2;
accept20:
        ;

        ;
        goto accept19;
alt7_2:
        ptr->pos=oldpos7;
        VALUE revert18_result=rb_funcall(__result,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert18;
        }
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept27;
revert18:
        ;
        __result=revert18_result;
        goto alt7_3;
accept27:
        ;

        ;
        goto accept19;
alt7_3:
        ptr->pos=oldpos7;
        if (1) {
            it=failobj;
            goto fail;
        };
accept19:
        ;
        break;
    case 15/*Object*/:
        ;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Minsize_Dataflow_getvalue(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_v=Qnil,_autovar=Qnil,_autovar_2=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(16);
    _v=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_v);
    it=rb_funcall(self,sy_Minsize_Dataflow__at_vis_eq_bin_8b89,1,bind2);
    _v=bind_aget(bind2,1);;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=Minsize_Dataflow_first(self );
    if (it==failobj) {
        it=failobj;
        goto pass1;
    }
    _autovar_2=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) {
        it=failobj;
        goto pass1;
    }
    goto success1;
pass1:
    *ptr=oldpass1;
    if (1) {
        it=failobj;
        goto fail;
    }
success1:
    *ptr=oldpass1;
    it=_autovar_2;
    __result=it;;

fail:
    return it;
}
void Init_Minsize_Dataflow_c() {
    cls_Minsize_Dataflow=rb_define_class("Minsize_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Minsize_Dataflow,"profile_report",profile_report_Minsize_Dataflow,0);
    switchhash_Minsize_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Minsize_Dataflow_1);;
    switchhash_Minsize_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Minsize_Dataflow_2);;
    switchhash_Minsize_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Switch_Char\nnext h[k]=13 if k<=Switch_Clas\nnext h[k]=14 if k<=Seq\nnext h[k]=15 if k<=Object\n}");
    rb_global_variable(&switchhash_Minsize_Dataflow_3);;
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
