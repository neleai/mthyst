#include "cthyst.h"
#include "memo.c"
VALUE cls_First_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE First_Dataflow_first(VALUE self );
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE First_Dataflow_root(VALUE self );
VALUE First_Dataflow_switch(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE switchhash_First_Dataflow_1;
VALUE switchhash_First_Dataflow_2;
static VALUE sy_First_Dataflow_Compiler_558e;
static VALUE sy_First_Dataflow_Switch_O_5445;
static VALUE sy_First_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_First_Dataflow__d41d;
static VALUE sy_First_Dataflow__lp_;
static VALUE sy_First_Dataflow__lp_Compile_7f7b;
static VALUE sy_First_Dataflow_bind_lb_1_rb_;
static VALUE sy_First_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_First_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_First_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_First_Dataflow_depends_lp__7463;
static VALUE sy_First_Dataflow_lattice_dot__5a9e;
static VALUE sy_First_Dataflow_lattice_dot__b0f6;
static VALUE sy_analyze;
VALUE profile_report_First_Dataflow(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE First_Dataflow_first(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,__result=Qnil,_autovar_3=Qnil,_name=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_val=Qnil,_autovar_10=Qnil,_vals=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,_p=Qnil,_v=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,_el=Qnil,_autovar_15=Qnil,_autovar_16=Qnil,_nev=Qnil,_autovar_17=Qnil;
    VALUE bind2=bind_new2(2);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_First_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))) {
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
        ptr->branches+=2;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind2);
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
        goto alt1_2;
accept2:
        ;

        ;
        ptr->branches-=2;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        ptr->branches-=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert2;
        }
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept3;
revert2:
        ;
        goto alt1_3;
accept3:
        ;

        ;
        ptr->branches-=1;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        ptr->branches-=1;
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
        ptr->branches+=2;
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
        it=rb_funcall(self,sy_First_Dataflow__lp_Compile_7f7b,1,bind2);
        _name=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass2;
        };
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_First_Dataflow_Compiler_558e,1,bind2);
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
        goto alt2_2;
accept5:
        ;

        ;
        ptr->branches-=2;
        goto accept4;
alt2_2:
        ptr->pos=oldpos2;
        ptr->branches-=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert4;
        }
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept6;
revert4:
        ;
        goto alt2_3;
accept6:
        ;

        ;
        ptr->branches-=1;
        goto accept4;
alt2_3:
        ptr->pos=oldpos2;
        ptr->branches-=1;
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
        ptr->branches+=2;
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
        goto alt3_2;
accept8:
        ;

        ;
        ptr->branches-=2;
        goto accept7;
alt3_2:
        ptr->pos=oldpos3;
        ptr->branches-=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert6;
        }
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept9;
revert6:
        ;
        goto alt3_3;
accept9:
        ;

        ;
        ptr->branches-=1;
        goto accept7;
alt3_3:
        ptr->pos=oldpos3;
        ptr->branches-=1;
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
        ptr->branches+=2;
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
        it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb_,1,bind2);
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
        goto alt4_2;
accept11:
        ;

        ;
        ptr->branches-=2;
        goto accept10;
alt4_2:
        ptr->pos=oldpos4;
        ptr->branches-=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert8;
        }
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept12;
revert8:
        ;
        goto alt4_3;
accept12:
        ;

        ;
        ptr->branches-=1;
        goto accept10;
alt4_3:
        ptr->pos=oldpos4;
        ptr->branches-=1;
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
        ptr->branches+=2;
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
            ptr->branches+=2;
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
            it=First_Dataflow_value(self );
            if (it==failobj) {
                it=failobj;
                goto pass7;
            }
            _v=it;;
            bind_aset(bind2,1,_p);
            bind_aset(bind2,2,_v);
            it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);
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
            goto alt6_2;
accept16:
            ;

            ;
            ptr->branches-=2;
            goto accept15;
alt6_2:
            ptr->pos=oldpos6;
            ptr->branches-=1;
            stop1=1;
            ;
            goto accept17;
revert11:
            ;
            goto alt6_3;
accept17:
            ;

            ;
            ptr->branches-=1;
            goto accept15;
alt6_3:
            ptr->pos=oldpos6;
            ptr->branches-=1;
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
        it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept14;
revert9:
        ;
        goto alt5_2;
accept14:
        ;

        ;
        ptr->branches-=2;
        goto accept13;
alt5_2:
        ptr->pos=oldpos5;
        ptr->branches-=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert12;
        }
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept18;
revert12:
        ;
        goto alt5_3;
accept18:
        ;

        ;
        ptr->branches-=1;
        goto accept13;
alt5_3:
        ptr->pos=oldpos5;
        ptr->branches-=1;
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
        ptr->branches+=2;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_14=it;;
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_14);
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind2);
        _val=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ptr->branches+=2;
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
                goto revert14;
            }
success9:
            *ptr=oldpass9;
            it=_autovar_16;
            _nev=it;;
            bind_aset(bind2,1,_val);
            bind_aset(bind2,2,_nev);
            it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);
            _val=bind_aget(bind2,1);;
            _nev=bind_aget(bind2,2);;
            _val=it;;
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ptr->branches+=2;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_First_Dataflow__lp_,1,bind2);
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
            goto alt9_2;
accept24:
            ;

            ;
            ptr->branches-=2;
            goto accept23;
alt9_2:
            ptr->pos=oldpos9;
            ptr->branches-=1;
            it=rb_funcall(self,sy_First_Dataflow__d41d,1,bind2);
            ;
            goto accept25;
revert16:
            ;
            goto alt9_3;
accept25:
            ;

            ;
            ptr->branches-=1;
            goto accept23;
alt9_3:
            ptr->pos=oldpos9;
            ptr->branches-=1;
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
            goto alt8_2;
accept22:
            ;

            ;
            ptr->branches-=2;
            goto accept21;
alt8_2:
            ptr->pos=oldpos8;
            ptr->branches-=1;
            stop2=1;
            ;
            goto accept26;
revert17:
            ;
            goto alt8_3;
accept26:
            ;

            ;
            ptr->branches-=1;
            goto accept21;
alt8_3:
            ptr->pos=oldpos8;
            ptr->branches-=1;
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
        goto alt7_2;
accept20:
        ;

        ;
        ptr->branches-=2;
        goto accept19;
alt7_2:
        ptr->pos=oldpos7;
        ptr->branches-=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert18;
        }
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept27;
revert18:
        ;
        goto alt7_3;
accept27:
        ;

        ;
        ptr->branches-=1;
        goto accept19;
alt7_3:
        ptr->pos=oldpos7;
        ptr->branches-=1;
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
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_v=Qnil,_autovar=Qnil,_autovar_2=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(1);
    _v=a0;;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_v);
    it=rb_funcall(self,sy_First_Dataflow__at_vis_eq_bin_8b89,1,bind2);
    _v=bind_aget(bind2,1);;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=First_Dataflow_first(self );
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
VALUE First_Dataflow_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_x=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(0);
    VALUE arg0;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _x=it;;
    it=_x;
    arg0=it;
    it=rb_funcall(self,sy_analyze,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    __result=it;;

fail:
    return it;
}
VALUE First_Dataflow_switch(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ary=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(1);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_First_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Or*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        it=rb_ary_new3(0);
        _autovar_2=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ptr->branches+=2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert1;
            }
            _autovar_3=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_3);
            ;
            goto accept2;
revert1:
            ;
            goto alt1_2;
accept2:
            ;

            ;
            ptr->branches-=2;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            stop1=1;
            ;
            goto accept3;
revert2:
            ;
            goto alt1_3;
accept3:
            ;

            ;
            ptr->branches-=1;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto pass1;
            };
accept1:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        it=_autovar_2;
        _ary=it;;

        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto fail;
        }
success1:
        *ptr=oldpass1;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_First_Dataflow_Switch_O_5445,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        break;
    case 1/*Switch_Char*/:
    case 2/*Switch_Clas*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        __result=it;;
        break;
    case 3/*Object*/:
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    }
fail:
    return it;
}
VALUE First_Dataflow_value(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_x=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(1);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _x=it;;
    bind_aset(bind2,1,_x);
    it=rb_funcall(self,sy_First_Dataflow_depends_lp__7463,1,bind2);
    _x=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
void Init_First_Dataflow_c() {
    cls_First_Dataflow=rb_define_class("First_Dataflow",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_First_Dataflow,"profile_report",profile_report_First_Dataflow,0);
    switchhash_First_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Switch_Char\nnext h[k]=13 if k<=Switch_Clas\nnext h[k]=14 if k<=Seq\nnext h[k]=15 if k<=Object\n}");
    rb_global_variable(&switchhash_First_Dataflow_1);;
    switchhash_First_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Switch_Char\nnext h[k]=2 if k<=Switch_Clas\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_First_Dataflow_2);;
    sy_First_Dataflow_Compiler_558e=rb_intern("First_Dataflow_Compiler_558e");
    sy_First_Dataflow_Switch_O_5445=rb_intern("First_Dataflow_Switch_O_5445");
    sy_First_Dataflow__at_vis_eq_bin_8b89=rb_intern("First_Dataflow__at_vis_eq_bin_8b89");
    sy_First_Dataflow__d41d=rb_intern("First_Dataflow__d41d");
    sy_First_Dataflow__lp_=rb_intern("First_Dataflow__lp_");
    sy_First_Dataflow__lp_Compile_7f7b=rb_intern("First_Dataflow__lp_Compile_7f7b");
    sy_First_Dataflow_bind_lb_1_rb_=rb_intern("First_Dataflow_bind_lb_1_rb_");
    sy_First_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("First_Dataflow_bind_lb_1_rb__dot__159a");
    sy_First_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("First_Dataflow_bind_lb_1_rb__dot__a37c");
    sy_First_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("First_Dataflow_bind_lb_1_rb__dot__c5d5");
    sy_First_Dataflow_depends_lp__7463=rb_intern("First_Dataflow_depends_lp__7463");
    sy_First_Dataflow_lattice_dot__5a9e=rb_intern("First_Dataflow_lattice_dot__5a9e");
    sy_First_Dataflow_lattice_dot__b0f6=rb_intern("First_Dataflow_lattice_dot__b0f6");
    sy_analyze=rb_intern("analyze");
    rb_define_method(cls_First_Dataflow,"first",First_Dataflow_first,0);
    rb_define_method(cls_First_Dataflow,"getvalue",First_Dataflow_getvalue,1);
    rb_define_method(cls_First_Dataflow,"root",First_Dataflow_root,0);
    rb_define_method(cls_First_Dataflow,"switch",First_Dataflow_switch,0);
    rb_define_method(cls_First_Dataflow,"value",First_Dataflow_value,0);
}
