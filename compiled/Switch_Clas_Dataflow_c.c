#include "cthyst.h"
#include "memo.c"
VALUE cls_Switch_Clas_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_switch(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Switch_Clas_Dataflow_first(VALUE self );
VALUE Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(VALUE self );
VALUE Switch_Clas_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Switch_Clas_Dataflow_1;
VALUE switchhash_Switch_Clas_Dataflow_2;
VALUE switchhash_Switch_Clas_Dataflow_3;
VALUE switchhash_Switch_Clas_Dataflow_4;
static VALUE sy_Switch_Clas_Dataflow_Compiler_558e;
static VALUE sy_Switch_Clas_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Switch_Clas_Dataflow__d41d;
static VALUE sy_Switch_Clas_Dataflow__lp_;
static VALUE sy_Switch_Clas_Dataflow__lp_Compile_7f7b;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_1_rb_;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_Switch_Clas_Dataflow_lattice_dot__3340;
static VALUE sy_Switch_Clas_Dataflow_lattice_dot__5a9e;
static VALUE sy_Switch_Clas_Dataflow_lattice_dot__b0f6;
static VALUE sy_Switch_Clas_Dataflow_lattice_lb__becc;
VALUE profile_report_Switch_Clas_Dataflow(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Switch_Clas_Dataflow_first(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_cls,__result,_autovar_7,_autovar_8;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        it=_autovar;
        _autovar_2=it;;
        it=_autovar_2;
        _autovar_3=it;;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=_autovar_3;
        _autovar_4=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_4);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        _autovar_5=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_5);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'b':
            ;
        case 'd' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass2;
            }
            break;
        case 'c' ... 'c':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3;
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
            goto pass1;
        }
success2:
        *ptr=oldpass2;
        switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*CAct*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_6=it;;
            break;
        case 1/*Object*/:
            ;
            if (1) {
                it=failobj;
                goto pass1;
            }
            break;
        }
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_6);
        switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Class*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _cls=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass3;
            }
            break;
        case 1/*Object*/:
            ;
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
            goto pass1;
        }
success3:
        *ptr=oldpass3;
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
            goto alt2_2;
        }
success1:
        *ptr=oldpass1;
        bind_aset(bind2,1,_cls);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_lb__becc,1,bind2);
        _cls=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=_autovar_3;
        _autovar_7=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_7);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass4;
        }
        _autovar_8=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_8);
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
            goto pass4;
        }
success5:
        *ptr=oldpass5;
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
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__3340,1,bind2);
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto alt1_2;
        };
accept2:
        ;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        __result=it;;

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
        it=Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(self );
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
VALUE Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,__result,_autovar_3,_name,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_val,_autovar_10,_vals,_autovar_11,_autovar_12,_p,_v,_autovar_13,_autovar_14,_el,_autovar_15,_autovar_16,_nev,_autovar_17;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_4,rb_obj_class(ame_curobj2(ptr))))) {
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
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind2);
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
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

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
        it=rb_funcall(self,sy_Switch_Clas_Dataflow__lp_Compile_7f7b,1,bind2);
        _name=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass2;
        };
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_Compiler_558e,1,bind2);
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
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept2;
alt2_3:
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
        ptr->pos=oldpos3;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_3;
        }
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept3;
alt3_3:
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
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb_,1,bind2);
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
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt4_3;
        }
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept4;
alt4_3:
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
            it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);
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
            ptr->pos=oldpos6;
            stop1=1;
            ;
            goto accept6;
alt6_3:
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
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt5_2:
        ptr->pos=oldpos5;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt5_3;
        }
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept5;
alt5_3:
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
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_14=it;;
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_14);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind2);
        _val=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
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
            it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);
            _val=bind_aget(bind2,1);;
            _nev=bind_aget(bind2,2);;
            _val=it;;
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Switch_Clas_Dataflow__lp_,1,bind2);
            _el=bind_aget(bind2,1);;
            if (it==failobj) {
                it=failobj;
                goto alt9_2;
            };
            ptr->pos=ptr->len;
            ;
            goto accept9;
alt9_2:
            ptr->pos=oldpos9;
            it=rb_funcall(self,sy_Switch_Clas_Dataflow__d41d,1,bind2);
            ;
            goto accept9;
alt9_3:
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
            ptr->pos=oldpos8;
            stop2=1;
            ;
            goto accept8;
alt8_3:
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
        ptr->pos=oldpos7;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt7_3;
        }
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept7;
alt7_3:
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
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Switch_Clas_Dataflow_getvalue(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_v,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _v=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_v);
    it=rb_funcall(self,sy_Switch_Clas_Dataflow__at_vis_eq_bin_8b89,1,bind2);
    _v=bind_aget(bind2,1);;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=Switch_Clas_Dataflow_first(self );
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
void Init_Switch_Clas_Dataflow_c() {
    cls_Switch_Clas_Dataflow=rb_define_class("Switch_Clas_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Switch_Clas_Dataflow,"profile_report",profile_report_Switch_Clas_Dataflow,0);
    switchhash_Switch_Clas_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Switch_Clas_Dataflow_1);;
    switchhash_Switch_Clas_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Switch_Clas_Dataflow_2);;
    switchhash_Switch_Clas_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Class\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Switch_Clas_Dataflow_3);;
    switchhash_Switch_Clas_Dataflow_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Switch_Char\nnext h[k]=13 if k<=Switch_Clas\nnext h[k]=14 if k<=Seq\nnext h[k]=15 if k<=Object\n}");
    rb_global_variable(&switchhash_Switch_Clas_Dataflow_4);;
    sy_Switch_Clas_Dataflow_Compiler_558e=rb_intern("Switch_Clas_Dataflow_Compiler_558e");
    sy_Switch_Clas_Dataflow__at_vis_eq_bin_8b89=rb_intern("Switch_Clas_Dataflow__at_vis_eq_bin_8b89");
    sy_Switch_Clas_Dataflow__d41d=rb_intern("Switch_Clas_Dataflow__d41d");
    sy_Switch_Clas_Dataflow__lp_=rb_intern("Switch_Clas_Dataflow__lp_");
    sy_Switch_Clas_Dataflow__lp_Compile_7f7b=rb_intern("Switch_Clas_Dataflow__lp_Compile_7f7b");
    sy_Switch_Clas_Dataflow_bind_lb_1_rb_=rb_intern("Switch_Clas_Dataflow_bind_lb_1_rb_");
    sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("Switch_Clas_Dataflow_bind_lb_1_rb__dot__159a");
    sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c");
    sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("Switch_Clas_Dataflow_bind_lb_1_rb__dot__c5d5");
    sy_Switch_Clas_Dataflow_lattice_dot__3340=rb_intern("Switch_Clas_Dataflow_lattice_dot__3340");
    sy_Switch_Clas_Dataflow_lattice_dot__5a9e=rb_intern("Switch_Clas_Dataflow_lattice_dot__5a9e");
    sy_Switch_Clas_Dataflow_lattice_dot__b0f6=rb_intern("Switch_Clas_Dataflow_lattice_dot__b0f6");
    sy_Switch_Clas_Dataflow_lattice_lb__becc=rb_intern("Switch_Clas_Dataflow_lattice_lb__becc");
    rb_define_method(cls_Switch_Clas_Dataflow,"first",Switch_Clas_Dataflow_first,0);
    rb_define_method(cls_Switch_Clas_Dataflow,"first_Switch_Clas_Dataflow",Switch_Clas_Dataflow_first_Switch_Clas_Dataflow,0);
    rb_define_method(cls_Switch_Clas_Dataflow,"getvalue",Switch_Clas_Dataflow_getvalue,1);
}
