#include "cthyst.h"
#include "memo.c"
VALUE cls_Maxsize_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_switch(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Maxsize_Dataflow_first(VALUE self );
VALUE Maxsize_Dataflow_first_Maxsize_Dataflow(VALUE self );
VALUE Maxsize_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Maxsize_Dataflow_1;
VALUE switchhash_Maxsize_Dataflow_2;
VALUE switchhash_Maxsize_Dataflow_3;
static VALUE sy_Maxsize_Dataflow_Compiler_558e;
static VALUE sy_Maxsize_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Maxsize_Dataflow__d41d;
static VALUE sy_Maxsize_Dataflow__lp_;
static VALUE sy_Maxsize_Dataflow__lp_Compile_7f7b;
static VALUE sy_Maxsize_Dataflow_bind_lb_1_rb_;
static VALUE sy_Maxsize_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_Maxsize_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_Maxsize_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_Maxsize_Dataflow_lattice_dot__5a9e;
static VALUE sy_Maxsize_Dataflow_lattice_dot__b0f6;
static VALUE sy_Maxsize_Dataflow_lattice_dot__e0e5;
static VALUE sy_Maxsize_Dataflow_lattice_lb__bbba;
static VALUE sy_Maxsize_Dataflow_lattice_lb__fdee;
VALUE profile_report_Maxsize_Dataflow(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Maxsize_Dataflow_first(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_str,_autovar_7,_autovar_8,_autovar_9,_autovar_10,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Maxsize_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12autovar=_autovar;
        VALUE lalt12autovar_2=_autovar_2;
        VALUE lalt12autovar_3=_autovar_3;
        VALUE lalt12autovar_4=_autovar_4;
        VALUE lalt12autovar_5=_autovar_5;
        VALUE lalt12autovar_6=_autovar_6;
        VALUE lalt12str=_str;
        VALUE lalt12autovar_7=_autovar_7;
        VALUE lalt12autovar_8=_autovar_8;
        VALUE lalt12autovar_9=_autovar_9;
        VALUE lalt12autovar_10=_autovar_10;
        VALUE lalt12_result=__result;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Maxsize_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*CAct*/:
            ;
            it=_autovar_3;
            _autovar_4=it;;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE lalt22autovar_5=_autovar_5;
            VALUE lalt22autovar_6=_autovar_6;
            VALUE lalt22str=_str;
            VALUE lalt22autovar_7=_autovar_7;
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
                goto alt2_2;
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
                goto alt2_2;
            }
success3:
            *ptr=oldpass3;
            bind_aset(bind2,1,_str);
            it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_lb__bbba,1,bind2);
            _str=bind_aget(bind2,1);;
            _autovar_7=it;;

            ;
            goto accept2;
alt2_2:
            _autovar_5=lalt22autovar_5;
            _autovar_6=lalt22autovar_6;
            _str=lalt22str;
            _autovar_7=lalt22autovar_7;
            ptr->pos=oldpos2;
            VALUE lalt23autovar_5=_autovar_5;
            VALUE lalt23autovar_6=_autovar_6;
            VALUE lalt23str=_str;
            VALUE lalt23autovar_7=_autovar_7;
            VALUE lalt23autovar_8=_autovar_8;
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
                    goto alt3_2;
                }
                ;
                goto accept3;
alt3_2:
                ptr->pos=oldpos3;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11;
                else if (1) {
                    it=failobj;
                    goto alt3_3;
                }
                ;
                goto accept3;
alt3_3:
                ptr->pos=oldpos3;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11;
                else if (1) {
                    it=failobj;
                    goto alt3_4;
                }
                ;
                goto accept3;
alt3_4:
                ptr->pos=oldpos3;
                if (1) {
                    it=failobj;
                    goto pass4;
                };
accept3:
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
                goto alt2_3;
            }
success4:
            *ptr=oldpass4;
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_lb__fdee,1,bind2);
            _autovar_7=it;;

            ;
            goto accept2;
alt2_3:
            _autovar_5=lalt23autovar_5;
            _autovar_6=lalt23autovar_6;
            _str=lalt23str;
            _autovar_7=lalt23autovar_7;
            _autovar_8=lalt23autovar_8;
            ptr->pos=oldpos2;
            VALUE lalt24autovar_5=_autovar_5;
            VALUE lalt24autovar_6=_autovar_6;
            VALUE lalt24str=_str;
            VALUE lalt24autovar_7=_autovar_7;
            VALUE lalt24autovar_8=_autovar_8;
            VALUE lalt24autovar_9=_autovar_9;
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
                goto alt2_4;
            }
success5:
            *ptr=oldpass5;
            it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__e0e5,1,bind2);
            _autovar_7=it;;

            ;
            goto accept2;
alt2_4:
            _autovar_5=lalt24autovar_5;
            _autovar_6=lalt24autovar_6;
            _str=lalt24str;
            _autovar_7=lalt24autovar_7;
            _autovar_8=lalt24autovar_8;
            _autovar_9=lalt24autovar_9;
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto pass1;
            };
accept2:
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
            VALUE lalt42autovar_5=_autovar_5;
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
                goto alt4_2;
            }
success6:
            *ptr=oldpass6;
            if (1) {
                it=failobj;
                goto alt4_2;
            }
            ;
            goto accept4;
alt4_2:
            _autovar_5=lalt42autovar_5;
            ptr->pos=oldpos4;
            VALUE lalt43autovar_5=_autovar_5;
            VALUE lalt43autovar_7=_autovar_7;
            VALUE lalt43autovar_8=_autovar_8;
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
                    goto alt5_2;
                }
                ;
                goto accept5;
alt5_2:
                ptr->pos=oldpos5;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11;
                else if (1) {
                    it=failobj;
                    goto alt5_3;
                }
                ;
                goto accept5;
alt5_3:
                ptr->pos=oldpos5;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11;
                else if (1) {
                    it=failobj;
                    goto alt5_4;
                }
                ;
                goto accept5;
alt5_4:
                ptr->pos=oldpos5;
                if (1) {
                    it=failobj;
                    goto pass7;
                };
accept5:
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
                goto alt4_3;
            }
success7:
            *ptr=oldpass7;
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_lb__fdee,1,bind2);
            _autovar_7=it;;

            ;
            goto accept4;
alt4_3:
            _autovar_5=lalt43autovar_5;
            _autovar_7=lalt43autovar_7;
            _autovar_8=lalt43autovar_8;
            ptr->pos=oldpos4;
            VALUE lalt44autovar_5=_autovar_5;
            VALUE lalt44autovar_7=_autovar_7;
            VALUE lalt44autovar_8=_autovar_8;
            VALUE lalt44autovar_9=_autovar_9;
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
                goto alt4_4;
            }
success8:
            *ptr=oldpass8;
            it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__e0e5,1,bind2);
            _autovar_7=it;;

            ;
            goto accept4;
alt4_4:
            _autovar_5=lalt44autovar_5;
            _autovar_7=lalt44autovar_7;
            _autovar_8=lalt44autovar_8;
            _autovar_9=lalt44autovar_9;
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto pass1;
            };
accept4:
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
            goto alt1_2;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_7;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        _autovar=lalt12autovar;
        _autovar_2=lalt12autovar_2;
        _autovar_3=lalt12autovar_3;
        _autovar_4=lalt12autovar_4;
        _autovar_5=lalt12autovar_5;
        _autovar_6=lalt12autovar_6;
        _str=lalt12str;
        _autovar_7=lalt12autovar_7;
        _autovar_8=lalt12autovar_8;
        _autovar_9=lalt12autovar_9;
        _autovar_10=lalt12autovar_10;
        __result=lalt12_result;
        ptr->pos=oldpos1;
        VALUE lalt13autovar=_autovar;
        VALUE lalt13autovar_2=_autovar_2;
        VALUE lalt13autovar_3=_autovar_3;
        VALUE lalt13autovar_4=_autovar_4;
        VALUE lalt13autovar_5=_autovar_5;
        VALUE lalt13autovar_6=_autovar_6;
        VALUE lalt13str=_str;
        VALUE lalt13autovar_7=_autovar_7;
        VALUE lalt13autovar_8=_autovar_8;
        VALUE lalt13autovar_9=_autovar_9;
        VALUE lalt13autovar_10=_autovar_10;
        VALUE lalt13_result=__result;
        it=Maxsize_Dataflow_first_Maxsize_Dataflow(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        __result=it;;

        ;
        goto accept1;
alt1_3:
        _autovar=lalt13autovar;
        _autovar_2=lalt13autovar_2;
        _autovar_3=lalt13autovar_3;
        _autovar_4=lalt13autovar_4;
        _autovar_5=lalt13autovar_5;
        _autovar_6=lalt13autovar_6;
        _str=lalt13str;
        _autovar_7=lalt13autovar_7;
        _autovar_8=lalt13autovar_8;
        _autovar_9=lalt13autovar_9;
        _autovar_10=lalt13autovar_10;
        __result=lalt13_result;
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
        it=Maxsize_Dataflow_first_Maxsize_Dataflow(self );
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
VALUE Maxsize_Dataflow_first_Maxsize_Dataflow(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,__result,_autovar_3,_name,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_val,_autovar_10,_vals,_autovar_11,_autovar_12,_p,_v,_autovar_13,_autovar_14,_el,_autovar_15,_autovar_16,_nev,_autovar_17;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Maxsize_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))) {
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
        VALUE lalt12autovar=_autovar;
        VALUE lalt12autovar_2=_autovar_2;
        VALUE lalt12_result=__result;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__5a9e,1,bind2);
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
            goto alt1_2;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        _autovar=lalt12autovar;
        _autovar_2=lalt12autovar_2;
        __result=lalt12_result;
        ptr->pos=oldpos1;
        VALUE lalt13autovar=_autovar;
        VALUE lalt13autovar_2=_autovar_2;
        VALUE lalt13_result=__result;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        _autovar=lalt13autovar;
        _autovar_2=lalt13autovar_2;
        __result=lalt13_result;
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
        VALUE lalt22_result=__result;
        VALUE lalt22autovar_3=_autovar_3;
        VALUE lalt22name=_name;
        VALUE lalt22autovar_4=_autovar_4;
        VALUE lalt22autovar_5=_autovar_5;
        VALUE lalt22autovar_6=_autovar_6;
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
        it=rb_funcall(self,sy_Maxsize_Dataflow__lp_Compile_7f7b,1,bind2);
        _name=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass2;
        };
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Maxsize_Dataflow_Compiler_558e,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_4=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_4;
        ptr->len=1;
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
            goto alt2_2;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_6;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        __result=lalt22_result;
        _autovar_3=lalt22autovar_3;
        _name=lalt22name;
        _autovar_4=lalt22autovar_4;
        _autovar_5=lalt22autovar_5;
        _autovar_6=lalt22autovar_6;
        ptr->pos=oldpos2;
        VALUE lalt23_result=__result;
        VALUE lalt23autovar_3=_autovar_3;
        VALUE lalt23name=_name;
        VALUE lalt23autovar_4=_autovar_4;
        VALUE lalt23autovar_5=_autovar_5;
        VALUE lalt23autovar_6=_autovar_6;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept2;
alt2_3:
        __result=lalt23_result;
        _autovar_3=lalt23autovar_3;
        _name=lalt23name;
        _autovar_4=lalt23autovar_4;
        _autovar_5=lalt23autovar_5;
        _autovar_6=lalt23autovar_6;
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto fail;
        };
accept2:
        ;
        break;
    case 9/*Bind*/:
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        VALUE lalt32_result=__result;
        VALUE lalt32autovar_7=_autovar_7;
        VALUE lalt32autovar_8=_autovar_8;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_7=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_7);
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
        goto success4;
pass4:
        *ptr=oldpass4;
        if (1) {
            it=failobj;
            goto alt3_2;
        }
success4:
        *ptr=oldpass4;
        it=_autovar_8;
        __result=it;;

        ;
        goto accept3;
alt3_2:
        __result=lalt32_result;
        _autovar_7=lalt32autovar_7;
        _autovar_8=lalt32autovar_8;
        ptr->pos=oldpos3;
        VALUE lalt33_result=__result;
        VALUE lalt33autovar_7=_autovar_7;
        VALUE lalt33autovar_8=_autovar_8;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_3;
        }
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept3;
alt3_3:
        __result=lalt33_result;
        _autovar_7=lalt33autovar_7;
        _autovar_8=lalt33autovar_8;
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto fail;
        };
accept3:
        ;
        break;
    case 10/*Many*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        VALUE lalt42_result=__result;
        VALUE lalt42autovar_9=_autovar_9;
        VALUE lalt42val=_val;
        VALUE lalt42autovar_10=_autovar_10;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_9=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_9);
        it=First_Dataflow_value(self );
        if (it==failobj) {
            it=failobj;
            goto pass5;
        }
        _val=it;;
        bind_aset(bind2,1,_val);
        it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb_,1,bind2);
        _val=bind_aget(bind2,1);;
        _autovar_10=it;;
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
            goto alt4_2;
        }
success5:
        *ptr=oldpass5;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept4;
alt4_2:
        __result=lalt42_result;
        _autovar_9=lalt42autovar_9;
        _val=lalt42val;
        _autovar_10=lalt42autovar_10;
        ptr->pos=oldpos4;
        VALUE lalt43_result=__result;
        VALUE lalt43autovar_9=_autovar_9;
        VALUE lalt43val=_val;
        VALUE lalt43autovar_10=_autovar_10;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt4_3;
        }
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept4;
alt4_3:
        __result=lalt43_result;
        _autovar_9=lalt43autovar_9;
        _val=lalt43val;
        _autovar_10=lalt43autovar_10;
        ptr->pos=oldpos4;
        if (1) {
            it=failobj;
            goto fail;
        };
accept4:
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
        VALUE lalt52_result=__result;
        VALUE lalt52vals=_vals;
        VALUE lalt52autovar_11=_autovar_11;
        VALUE lalt52autovar_12=_autovar_12;
        VALUE lalt52p=_p;
        VALUE lalt52v=_v;
        VALUE lalt52autovar_13=_autovar_13;
        it=First_Dataflow_switch(self );
        if (it==failobj) {
            it=failobj;
            goto alt5_2;
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
            VALUE lalt62autovar_12=_autovar_12;
            VALUE lalt62p=_p;
            VALUE lalt62v=_v;
            VALUE lalt62autovar_13=_autovar_13;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt6_2;
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
            it=First_Dataflow_value(self );
            if (it==failobj) {
                it=failobj;
                goto pass7;
            }
            _v=it;;
            bind_aset(bind2,1,_p);
            bind_aset(bind2,2,_v);
            it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);
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
                goto alt6_2;
            }
success7:
            *ptr=oldpass7;

            ;
            goto accept6;
alt6_2:
            _autovar_12=lalt62autovar_12;
            _p=lalt62p;
            _v=lalt62v;
            _autovar_13=lalt62autovar_13;
            ptr->pos=oldpos6;
            VALUE lalt63autovar_12=_autovar_12;
            VALUE lalt63p=_p;
            VALUE lalt63v=_v;
            VALUE lalt63autovar_13=_autovar_13;
            stop1=1;
            ;
            goto accept6;
alt6_3:
            _autovar_12=lalt63autovar_12;
            _p=lalt63p;
            _v=lalt63v;
            _autovar_13=lalt63autovar_13;
            ptr->pos=oldpos6;
            if (1) {
                it=failobj;
                goto pass6;
            };
accept6:
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
            goto alt5_2;
        }
success6:
        *ptr=oldpass6;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt5_2:
        __result=lalt52_result;
        _vals=lalt52vals;
        _autovar_11=lalt52autovar_11;
        _autovar_12=lalt52autovar_12;
        _p=lalt52p;
        _v=lalt52v;
        _autovar_13=lalt52autovar_13;
        ptr->pos=oldpos5;
        VALUE lalt53_result=__result;
        VALUE lalt53vals=_vals;
        VALUE lalt53autovar_11=_autovar_11;
        VALUE lalt53autovar_12=_autovar_12;
        VALUE lalt53p=_p;
        VALUE lalt53v=_v;
        VALUE lalt53autovar_13=_autovar_13;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt5_3;
        }
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept5;
alt5_3:
        __result=lalt53_result;
        _vals=lalt53vals;
        _autovar_11=lalt53autovar_11;
        _autovar_12=lalt53autovar_12;
        _p=lalt53p;
        _v=lalt53v;
        _autovar_13=lalt53autovar_13;
        ptr->pos=oldpos5;
        if (1) {
            it=failobj;
            goto fail;
        };
accept5:
        ;
        break;
    case 14/*Seq*/:
        ;
        int oldpos7=ptr->pos;
        int cut7=0;
alt7_1:
        ;
        VALUE lalt72_result=__result;
        VALUE lalt72val=_val;
        VALUE lalt72autovar_14=_autovar_14;
        VALUE lalt72el=_el;
        VALUE lalt72autovar_15=_autovar_15;
        VALUE lalt72autovar_16=_autovar_16;
        VALUE lalt72nev=_nev;
        VALUE lalt72autovar_17=_autovar_17;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_14=it;;
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_14);
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__5a9e,1,bind2);
        _val=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            VALUE lalt82val=_val;
            VALUE lalt82el=_el;
            VALUE lalt82autovar_15=_autovar_15;
            VALUE lalt82autovar_16=_autovar_16;
            VALUE lalt82nev=_nev;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt8_2;
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
            goto success9;
pass9:
            *ptr=oldpass9;
            if (1) {
                it=failobj;
                goto alt8_2;
            }
success9:
            *ptr=oldpass9;
            it=_autovar_16;
            _nev=it;;
            bind_aset(bind2,1,_val);
            bind_aset(bind2,2,_nev);
            it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);
            _val=bind_aget(bind2,1);;
            _nev=bind_aget(bind2,2);;
            _val=it;;
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            VALUE lalt92el=_el;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Maxsize_Dataflow__lp_,1,bind2);
            _el=bind_aget(bind2,1);;
            if (it==failobj) {
                it=failobj;
                goto alt9_2;
            };
            ptr->pos=ptr->len;
            ;
            goto accept9;
alt9_2:
            _el=lalt92el;
            ptr->pos=oldpos9;
            VALUE lalt93el=_el;
            it=rb_funcall(self,sy_Maxsize_Dataflow__d41d,1,bind2);
            ;
            goto accept9;
alt9_3:
            _el=lalt93el;
            ptr->pos=oldpos9;
            if (1) {
                it=failobj;
                goto alt8_2;
            };
accept9:
            ;

            ;
            goto accept8;
alt8_2:
            _val=lalt82val;
            _el=lalt82el;
            _autovar_15=lalt82autovar_15;
            _autovar_16=lalt82autovar_16;
            _nev=lalt82nev;
            ptr->pos=oldpos8;
            VALUE lalt83val=_val;
            VALUE lalt83el=_el;
            VALUE lalt83autovar_15=_autovar_15;
            VALUE lalt83autovar_16=_autovar_16;
            VALUE lalt83nev=_nev;
            stop2=1;
            ;
            goto accept8;
alt8_3:
            _val=lalt83val;
            _el=lalt83el;
            _autovar_15=lalt83autovar_15;
            _autovar_16=lalt83autovar_16;
            _nev=lalt83nev;
            ptr->pos=oldpos8;
            if (1) {
                it=failobj;
                goto pass8;
            };
accept8:
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
            goto alt7_2;
        }
success8:
        *ptr=oldpass8;
        it=_autovar_17;
        __result=it;;

        ;
        goto accept7;
alt7_2:
        __result=lalt72_result;
        _val=lalt72val;
        _autovar_14=lalt72autovar_14;
        _el=lalt72el;
        _autovar_15=lalt72autovar_15;
        _autovar_16=lalt72autovar_16;
        _nev=lalt72nev;
        _autovar_17=lalt72autovar_17;
        ptr->pos=oldpos7;
        VALUE lalt73_result=__result;
        VALUE lalt73val=_val;
        VALUE lalt73autovar_14=_autovar_14;
        VALUE lalt73el=_el;
        VALUE lalt73autovar_15=_autovar_15;
        VALUE lalt73autovar_16=_autovar_16;
        VALUE lalt73nev=_nev;
        VALUE lalt73autovar_17=_autovar_17;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt7_3;
        }
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept7;
alt7_3:
        __result=lalt73_result;
        _val=lalt73val;
        _autovar_14=lalt73autovar_14;
        _el=lalt73el;
        _autovar_15=lalt73autovar_15;
        _autovar_16=lalt73autovar_16;
        _nev=lalt73nev;
        _autovar_17=lalt73autovar_17;
        ptr->pos=oldpos7;
        if (1) {
            it=failobj;
            goto fail;
        };
accept7:
        ;
        break;
    case 15/*Object*/:
        ;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Maxsize_Dataflow_getvalue(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_v,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _v=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_v);
    it=rb_funcall(self,sy_Maxsize_Dataflow__at_vis_eq_bin_8b89,1,bind2);
    _v=bind_aget(bind2,1);;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=Maxsize_Dataflow_first(self );
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
void Init_Maxsize_Dataflow_c() {
    cls_Maxsize_Dataflow=rb_define_class("Maxsize_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Maxsize_Dataflow,"profile_report",profile_report_Maxsize_Dataflow,0);
    switchhash_Maxsize_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Maxsize_Dataflow_1);;
    switchhash_Maxsize_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Maxsize_Dataflow_2);;
    switchhash_Maxsize_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Switch_Char\nnext h[k]=13 if k<=Switch_Clas\nnext h[k]=14 if k<=Seq\nnext h[k]=15 if k<=Object\n}");
    rb_global_variable(&switchhash_Maxsize_Dataflow_3);;
    sy_Maxsize_Dataflow_Compiler_558e=rb_intern("Maxsize_Dataflow_Compiler_558e");
    sy_Maxsize_Dataflow__at_vis_eq_bin_8b89=rb_intern("Maxsize_Dataflow__at_vis_eq_bin_8b89");
    sy_Maxsize_Dataflow__d41d=rb_intern("Maxsize_Dataflow__d41d");
    sy_Maxsize_Dataflow__lp_=rb_intern("Maxsize_Dataflow__lp_");
    sy_Maxsize_Dataflow__lp_Compile_7f7b=rb_intern("Maxsize_Dataflow__lp_Compile_7f7b");
    sy_Maxsize_Dataflow_bind_lb_1_rb_=rb_intern("Maxsize_Dataflow_bind_lb_1_rb_");
    sy_Maxsize_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("Maxsize_Dataflow_bind_lb_1_rb__dot__159a");
    sy_Maxsize_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("Maxsize_Dataflow_bind_lb_1_rb__dot__a37c");
    sy_Maxsize_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("Maxsize_Dataflow_bind_lb_1_rb__dot__c5d5");
    sy_Maxsize_Dataflow_lattice_dot__5a9e=rb_intern("Maxsize_Dataflow_lattice_dot__5a9e");
    sy_Maxsize_Dataflow_lattice_dot__b0f6=rb_intern("Maxsize_Dataflow_lattice_dot__b0f6");
    sy_Maxsize_Dataflow_lattice_dot__e0e5=rb_intern("Maxsize_Dataflow_lattice_dot__e0e5");
    sy_Maxsize_Dataflow_lattice_lb__bbba=rb_intern("Maxsize_Dataflow_lattice_lb__bbba");
    sy_Maxsize_Dataflow_lattice_lb__fdee=rb_intern("Maxsize_Dataflow_lattice_lb__fdee");
    rb_define_method(cls_Maxsize_Dataflow,"first",Maxsize_Dataflow_first,0);
    rb_define_method(cls_Maxsize_Dataflow,"first_Maxsize_Dataflow",Maxsize_Dataflow_first_Maxsize_Dataflow,0);
    rb_define_method(cls_Maxsize_Dataflow,"getvalue",Maxsize_Dataflow_getvalue,1);
}
