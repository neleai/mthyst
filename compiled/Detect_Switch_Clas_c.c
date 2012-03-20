#include "cthyst.h"
#include "memo.c"
VALUE cls_Detect_Switch_Clas;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_First_combine_or(VALUE self ,VALUE,VALUE,VALUE);
VALUE Detect_First_combine_seq(VALUE self ,VALUE,VALUE);
VALUE Detect_First_must_empty(VALUE self );
VALUE Detect_Switch_Clas_itrans(VALUE self );
VALUE Detect_Switch_Clas_root(VALUE self );
VALUE Detect_Switch_Clas_traverse(VALUE self );
VALUE Detect_Switch_Clas_traverse_item(VALUE self );
VALUE Detect_Switch_Clas_visit(VALUE self );
VALUE switchhash_Detect_Switch_Clas_10;
VALUE switchhash_Detect_Switch_Clas_11;
VALUE switchhash_Detect_Switch_Clas_1;
VALUE switchhash_Detect_Switch_Clas_2;
VALUE switchhash_Detect_Switch_Clas_3;
VALUE switchhash_Detect_Switch_Clas_4;
VALUE switchhash_Detect_Switch_Clas_5;
VALUE switchhash_Detect_Switch_Clas_6;
VALUE switchhash_Detect_Switch_Clas_7;
VALUE switchhash_Detect_Switch_Clas_8;
VALUE switchhash_Detect_Switch_Clas_9;
static VALUE c_Lattice_Clas;
static VALUE c_Switch_Clas;
static VALUE sy_Detect_Switch_Clas_Or_lb__ti_bind_d486;
static VALUE sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321;
static VALUE sy_Detect_Switch_Clas_Switch_C_63f7;
static VALUE sy_Detect_Switch_Clas__at__contex_5f56;
static VALUE sy_Detect_Switch_Clas__at__contex_cdb3;
static VALUE sy_Detect_Switch_Clas__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch_Clas__lb__lb_Lattic_62e5;
static VALUE sy_Detect_Switch_Clas__lp_2;
static VALUE sy_Detect_Switch_Clas__lp_;
static VALUE sy_Detect_Switch_Clas__lp_src_dot_cla_2024;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__dot__642a;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__dot__76da;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__lb__0f18;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__lb__75a5;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__lb__fa06;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__lt__7b20;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__sp__6af0;
static VALUE sy_Detect_Switch_Clas_c_eq_Switch_4e5f;
static VALUE sy_Detect_Switch_Clas_if_sp_bind_lb__1bed;
static VALUE sy_Detect_Switch_Clas_src_25d9;
static VALUE sy_Detect_Switch_Clas_src_dot_ary_d5cf;
static VALUE sy_Detect_Switch_Clas_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_Clas_src_dot_rule_a719;
static VALUE sy_first;

memo_struct *mem_Detect_Switch_Clas=NULL;
VALUE memo_val_Detect_Switch_Clas;
VALUE profile_report_Detect_Switch_Clas(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if(ptr->mem) {
        fprintf(profile_report,"memo Detect_Switch_Clas::traverse  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[119],((memo_struct *)ptr->mem)->miss[119],((memo_struct *)ptr->mem)->ticks[119]);
        ((memo_struct *)ptr->mem)->hits[119]=0;
        ((memo_struct *)ptr->mem)->miss[119]=0;
        ((memo_struct *)ptr->mem)->ticks[119]=0;
    }
    return Qnil;
}
VALUE Detect_Switch_Clas_itrans(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_autovar_10,_rules,_autovar_11,_autovar_12,__result,_autovar_13;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_Detect_Switch_Clas__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    it=rb_ary_new3(0);
    _autovar_3=it;;
    int stop1=0;
    while(!stop1) {
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_10,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Grammar*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE lalt12autovar_2=_autovar_2;
            VALUE lalt12autovar_4=_autovar_4;
            VALUE lalt12autovar_5=_autovar_5;
            VALUE lalt12autovar_6=_autovar_6;
            VALUE lalt12autovar_7=_autovar_7;
            VALUE lalt12autovar_8=_autovar_8;
            VALUE lalt12autovar_9=_autovar_9;
            VALUE lalt12autovar_10=_autovar_10;
            VALUE lalt12rules=_rules;
            VALUE lalt12autovar_11=_autovar_11;
            VALUE lalt12autovar_12=_autovar_12;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE lalt22autovar_2=_autovar_2;
            VALUE lalt22autovar_4=_autovar_4;
            VALUE lalt22autovar_5=_autovar_5;
            VALUE lalt22autovar_6=_autovar_6;
            VALUE lalt22autovar_7=_autovar_7;
            VALUE lalt22autovar_8=_autovar_8;
            VALUE lalt22autovar_9=_autovar_9;
            VALUE lalt22autovar_10=_autovar_10;
            VALUE lalt22rules=_rules;
            VALUE lalt22autovar_11=_autovar_11;
            VALUE lalt22autovar_12=_autovar_12;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_4=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_4);
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__lb__fa06,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_Detect_Switch_Clas__do_rules_eq__le__ab16,1,bind2);
            it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_rule_5acf,1,bind2);
            _autovar_5=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_5;
            ptr->len=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass2;
            }
            _autovar_6=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_6);
            it=rb_ary_new3(0);
            _autovar_7=it;;
            int stop2=0;
            while(!stop2) {
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_11,rb_obj_class(ame_curobj2(ptr))))) {
                case 0/*Rule*/:
                    ;
                    int oldpos3=ptr->pos;
                    int cut3=0;
alt3_1:
                    ;
                    VALUE lalt32autovar_8=_autovar_8;
                    VALUE lalt32autovar_9=_autovar_9;
                    VALUE lalt32autovar_10=_autovar_10;
                    it=ptr->ary[ptr->pos];            ;
                    ptr->pos++;
                    _autovar_8=it;;
                    cstruct oldpass4=*ptr;
                    ptr->pos=ptr->len=0;
                    ptr->ary=NULL;
                    ame_setsrc2(self,_autovar_8);
                    it=Detect_Switch_Clas_root(self );
                    if (it==failobj) {
                        it=failobj;
                        goto pass4;
                    }
                    _autovar_9=it;;
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
                    it=_autovar_9;
                    _autovar_10=it;;
                    it=AmethystCore_append(self,_autovar_7,_autovar_10);
                    ;
                    goto accept3;
alt3_2:
                    _autovar_8=lalt32autovar_8;
                    _autovar_9=lalt32autovar_9;
                    _autovar_10=lalt32autovar_10;
                    ptr->pos=oldpos3;
                    VALUE lalt33autovar_8=_autovar_8;
                    VALUE lalt33autovar_9=_autovar_9;
                    VALUE lalt33autovar_10=_autovar_10;
                    stop2=1;
                    ;
                    goto accept3;
alt3_3:
                    _autovar_8=lalt33autovar_8;
                    _autovar_9=lalt33autovar_9;
                    _autovar_10=lalt33autovar_10;
                    ptr->pos=oldpos3;
                    if (1) {
                        it=failobj;
                        goto pass3;
                    };
accept3:
                    ;
                    break;
                case 1/*Object*/:
                    ;
                    stop2=1;
                    break;
                }
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass3;
            }
            it=_autovar_7;
            _rules=it;;

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
            goto success2;
pass2:
            *ptr=oldpass2;
            if (1) {
                it=failobj;
                goto pass1;
            }
success2:
            *ptr=oldpass2;
            bind_aset(bind2,1,_rules);
            it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_rule_a719,1,bind2);
            _rules=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind2);
            _autovar_11=it;;
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
            it=_autovar_11;
            _autovar_12=it;;

            ;
            goto accept2;
alt2_2:
            _autovar_2=lalt22autovar_2;
            _autovar_4=lalt22autovar_4;
            _autovar_5=lalt22autovar_5;
            _autovar_6=lalt22autovar_6;
            _autovar_7=lalt22autovar_7;
            _autovar_8=lalt22autovar_8;
            _autovar_9=lalt22autovar_9;
            _autovar_10=lalt22autovar_10;
            _rules=lalt22rules;
            _autovar_11=lalt22autovar_11;
            _autovar_12=lalt22autovar_12;
            ptr->pos=oldpos2;
            VALUE lalt23autovar_2=_autovar_2;
            VALUE lalt23autovar_4=_autovar_4;
            VALUE lalt23autovar_5=_autovar_5;
            VALUE lalt23autovar_6=_autovar_6;
            VALUE lalt23autovar_7=_autovar_7;
            VALUE lalt23autovar_8=_autovar_8;
            VALUE lalt23autovar_9=_autovar_9;
            VALUE lalt23autovar_10=_autovar_10;
            VALUE lalt23rules=_rules;
            VALUE lalt23autovar_11=_autovar_11;
            VALUE lalt23autovar_12=_autovar_12;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
            _autovar_12=it;;

            ;
            goto accept2;
alt2_3:
            _autovar_2=lalt23autovar_2;
            _autovar_4=lalt23autovar_4;
            _autovar_5=lalt23autovar_5;
            _autovar_6=lalt23autovar_6;
            _autovar_7=lalt23autovar_7;
            _autovar_8=lalt23autovar_8;
            _autovar_9=lalt23autovar_9;
            _autovar_10=lalt23autovar_10;
            _rules=lalt23rules;
            _autovar_11=lalt23autovar_11;
            _autovar_12=lalt23autovar_12;
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto alt1_2;
            };
accept2:
            ;
            it=AmethystCore_append(self,_autovar_3,_autovar_12);
            ;
            goto accept1;
alt1_2:
            _autovar_2=lalt12autovar_2;
            _autovar_4=lalt12autovar_4;
            _autovar_5=lalt12autovar_5;
            _autovar_6=lalt12autovar_6;
            _autovar_7=lalt12autovar_7;
            _autovar_8=lalt12autovar_8;
            _autovar_9=lalt12autovar_9;
            _autovar_10=lalt12autovar_10;
            _rules=lalt12rules;
            _autovar_11=lalt12autovar_11;
            _autovar_12=lalt12autovar_12;
            ptr->pos=oldpos1;
            VALUE lalt13autovar_2=_autovar_2;
            VALUE lalt13autovar_4=_autovar_4;
            VALUE lalt13autovar_5=_autovar_5;
            VALUE lalt13autovar_6=_autovar_6;
            VALUE lalt13autovar_7=_autovar_7;
            VALUE lalt13autovar_8=_autovar_8;
            VALUE lalt13autovar_9=_autovar_9;
            VALUE lalt13autovar_10=_autovar_10;
            VALUE lalt13rules=_rules;
            VALUE lalt13autovar_11=_autovar_11;
            VALUE lalt13autovar_12=_autovar_12;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            _autovar_2=lalt13autovar_2;
            _autovar_4=lalt13autovar_4;
            _autovar_5=lalt13autovar_5;
            _autovar_6=lalt13autovar_6;
            _autovar_7=lalt13autovar_7;
            _autovar_8=lalt13autovar_8;
            _autovar_9=lalt13autovar_9;
            _autovar_10=lalt13autovar_10;
            _rules=lalt13rules;
            _autovar_11=lalt13autovar_11;
            _autovar_12=lalt13autovar_12;
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
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            VALUE lalt42autovar_12=_autovar_12;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt4_2;
            }
            _autovar_12=it;;
            it=AmethystCore_append(self,_autovar_3,_autovar_12);
            ;
            goto accept4;
alt4_2:
            _autovar_12=lalt42autovar_12;
            ptr->pos=oldpos4;
            VALUE lalt43autovar_12=_autovar_12;
            stop1=1;
            ;
            goto accept4;
alt4_3:
            _autovar_12=lalt43autovar_12;
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto fail;
            };
accept4:
            ;
            break;
        }
    }
    it=_autovar_3;
    __result=it;;
    _autovar_13=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_13);
    it=rb_funcall(self,sy_Detect_Switch_Clas__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_13=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE Detect_Switch_Clas_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=Detect_Switch_Clas_traverse(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    __result=it;;

fail:
    return it;
}
VALUE Detect_Switch_Clas_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars,_ivars,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if (ptr->mem==NULL) {
        ptr->mem=mem_Detect_Switch_Clas;
    }
    time_struct time_old=memo_get(ptr->mem,119,ptr->src,ptr->pos);
    if (time_old.pos!=-1) {
        ptr->pos=time_old.pos;
        return time_old.result;
    }
    int oldpos=ptr->pos;
    ptr->pos=ptr->len;
    it=rb_ary_new3(0);
    _nvars=it;;
    it=rb_funcall(self,sy_Detect_Switch_Clas__lp_src_dot_cla_2024,1,bind2);
    _ivars=it;;
    it=_ivars;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto pass1;
    }
    _autovar_2=it;;
    cstruct oldpass2=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar_2);
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12nvars=_nvars;
        VALUE lalt12it=_it;
        it=Detect_Switch_Clas_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__sp__6af0,1,bind2);
        _nvars=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
        ;
        goto accept1;
alt1_2:
        _nvars=lalt12nvars;
        _it=lalt12it;
        ptr->pos=oldpos1;
        VALUE lalt13nvars=_nvars;
        VALUE lalt13it=_it;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        _nvars=lalt13nvars;
        _it=lalt13it;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto pass2;
        };
accept1:
        ;
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
        goto memo_fail;
    }
success1:
    *ptr=oldpass1;
    bind_aset(bind2,1,_ivars);
    bind_aset(bind2,2,_nvars);
    it=rb_funcall(self,sy_Detect_Switch_Clas_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;
memo_fail:
    memo_add(ptr->mem,119,ptr->src,oldpos,it,ptr->pos,time_old);
    return it;

fail:
    return it;
}
VALUE Detect_Switch_Clas_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_6,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_7,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
        case 1/*Or*/:
        case 2/*Seq*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE lalt12_result=__result;
            it=Detect_Switch_Clas_visit(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            __result=it;;

            ;
            goto accept1;
alt1_2:
            __result=lalt12_result;
            ptr->pos=oldpos1;
            VALUE lalt13_result=__result;
            VALUE lalt13autovar=_autovar;
            VALUE lalt13autovar_2=_autovar_2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Detect_Switch_Clas_traverse(self );
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
                goto alt1_3;
            }
success1:
            *ptr=oldpass1;
            it=_autovar_2;
            __result=it;;

            ;
            goto accept1;
alt1_3:
            __result=lalt13_result;
            _autovar=lalt13autovar;
            _autovar_2=lalt13autovar_2;
            ptr->pos=oldpos1;
            VALUE lalt14_result=__result;
            VALUE lalt14autovar=_autovar;
            VALUE lalt14autovar_2=_autovar_2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_4;
            }
            __result=it;;

            ;
            goto accept1;
alt1_4:
            __result=lalt14_result;
            _autovar=lalt14autovar;
            _autovar_2=lalt14autovar_2;
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            break;
        case 3/*Object*/:
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE lalt22_result=__result;
            VALUE lalt22autovar=_autovar;
            VALUE lalt22autovar_2=_autovar_2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Detect_Switch_Clas_traverse(self );
            if (it==failobj) {
                it=failobj;
                goto pass2;
            }
            _autovar_2=it;;
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
            it=_autovar_2;
            __result=it;;

            ;
            goto accept2;
alt2_2:
            __result=lalt22_result;
            _autovar=lalt22autovar;
            _autovar_2=lalt22autovar_2;
            ptr->pos=oldpos2;
            VALUE lalt23_result=__result;
            VALUE lalt23autovar=_autovar;
            VALUE lalt23autovar_2=_autovar_2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
            __result=it;;

            ;
            goto accept2;
alt2_3:
            __result=lalt23_result;
            _autovar=lalt23autovar;
            _autovar_2=lalt23autovar_2;
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto fail;
            };
accept2:
            ;
            break;
        }
        break;
    case 1/*Array*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_8,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
        case 1/*Or*/:
        case 2/*Seq*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            VALUE lalt32_result=__result;
            it=Detect_Switch_Clas_visit(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_2;
            }
            __result=it;;

            ;
            goto accept3;
alt3_2:
            __result=lalt32_result;
            ptr->pos=oldpos3;
            VALUE lalt33_result=__result;
            VALUE lalt33autovar_3=_autovar_3;
            VALUE lalt33ar=_ar;
            VALUE lalt33it=_it;
            VALUE lalt33autovar_4=_autovar_4;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            it=rb_ary_new3(0);
            _ar=it;;
            int stop1=0;
            while(!stop1) {
                int oldpos4=ptr->pos;
                int cut4=0;
alt4_1:
                ;
                VALUE lalt42ar=_ar;
                VALUE lalt42it=_it;
                it=Detect_Switch_Clas_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt4_2;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept4;
alt4_2:
                _ar=lalt42ar;
                _it=lalt42it;
                ptr->pos=oldpos4;
                VALUE lalt43ar=_ar;
                VALUE lalt43it=_it;
                stop1=1;
                ;
                goto accept4;
alt4_3:
                _ar=lalt43ar;
                _it=lalt43it;
                ptr->pos=oldpos4;
                if (1) {
                    it=failobj;
                    goto pass3;
                };
accept4:
                ;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass3;
            }
            it=_ar;
            _autovar_4=it;;

            goto success3;
pass3:
            *ptr=oldpass3;
            if (1) {
                it=failobj;
                goto alt3_3;
            }
success3:
            *ptr=oldpass3;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept3;
alt3_3:
            __result=lalt33_result;
            _autovar_3=lalt33autovar_3;
            _ar=lalt33ar;
            _it=lalt33it;
            _autovar_4=lalt33autovar_4;
            ptr->pos=oldpos3;
            VALUE lalt34_result=__result;
            VALUE lalt34autovar_3=_autovar_3;
            VALUE lalt34ar=_ar;
            VALUE lalt34it=_it;
            VALUE lalt34autovar_4=_autovar_4;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_4;
            }
            __result=it;;

            ;
            goto accept3;
alt3_4:
            __result=lalt34_result;
            _autovar_3=lalt34autovar_3;
            _ar=lalt34ar;
            _it=lalt34it;
            _autovar_4=lalt34autovar_4;
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto fail;
            };
accept3:
            ;
            break;
        case 3/*Object*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            VALUE lalt52_result=__result;
            VALUE lalt52autovar_3=_autovar_3;
            VALUE lalt52ar=_ar;
            VALUE lalt52it=_it;
            VALUE lalt52autovar_4=_autovar_4;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass4=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            it=rb_ary_new3(0);
            _ar=it;;
            int stop2=0;
            while(!stop2) {
                int oldpos6=ptr->pos;
                int cut6=0;
alt6_1:
                ;
                VALUE lalt62ar=_ar;
                VALUE lalt62it=_it;
                it=Detect_Switch_Clas_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt6_2;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept6;
alt6_2:
                _ar=lalt62ar;
                _it=lalt62it;
                ptr->pos=oldpos6;
                VALUE lalt63ar=_ar;
                VALUE lalt63it=_it;
                stop2=1;
                ;
                goto accept6;
alt6_3:
                _ar=lalt63ar;
                _it=lalt63it;
                ptr->pos=oldpos6;
                if (1) {
                    it=failobj;
                    goto pass4;
                };
accept6:
                ;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass4;
            }
            it=_ar;
            _autovar_4=it;;

            goto success4;
pass4:
            *ptr=oldpass4;
            if (1) {
                it=failobj;
                goto alt5_2;
            }
success4:
            *ptr=oldpass4;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept5;
alt5_2:
            __result=lalt52_result;
            _autovar_3=lalt52autovar_3;
            _ar=lalt52ar;
            _it=lalt52it;
            _autovar_4=lalt52autovar_4;
            ptr->pos=oldpos5;
            VALUE lalt53_result=__result;
            VALUE lalt53autovar_3=_autovar_3;
            VALUE lalt53ar=_ar;
            VALUE lalt53it=_it;
            VALUE lalt53autovar_4=_autovar_4;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_3;
            }
            __result=it;;

            ;
            goto accept5;
alt5_3:
            __result=lalt53_result;
            _autovar_3=lalt53autovar_3;
            _ar=lalt53ar;
            _it=lalt53it;
            _autovar_4=lalt53autovar_4;
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto fail;
            };
accept5:
            ;
            break;
        }
        break;
    case 2/*Object*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_9,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
        case 1/*Or*/:
        case 2/*Seq*/:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            VALUE lalt72_result=__result;
            it=Detect_Switch_Clas_visit(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            __result=it;;

            ;
            goto accept7;
alt7_2:
            __result=lalt72_result;
            ptr->pos=oldpos7;
            VALUE lalt73_result=__result;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_3;
            }
            __result=it;;

            ;
            goto accept7;
alt7_3:
            __result=lalt73_result;
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto fail;
            };
accept7:
            ;
            break;
        case 3/*Object*/:
            ;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto fail;
            }
            __result=it;;
            break;
        }
        break;
    }
fail:
    return it;
}
VALUE Detect_Switch_Clas_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_clas,_autovar_7,__result,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_firs,_autovar_12,_autovar_13,_autovar_14,_autovar_15,_items,_aswitch,_autovar_16,_autovar_17,_autovar_18,_list,_autovar_19,_ary,_newlist,_lat,__result_2,_n,_cls,_autovar_20,_autovar_21,_autovar_22,_autovar_23,_autovar_24,_autovar_25,_autovar_26,_prefix,_s,__result_3,_autovar_27,_ary_2,_autovar_28,_autovar_29,_rest,_cls_2,_autovar_30,_autovar_31,_autovar_32,_autovar_33,_autovar_34;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        it=_autovar;
        _autovar_2=it;;
        it=_autovar_2;
        _autovar_3=it;;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12autovar_4=_autovar_4;
        VALUE lalt12autovar_5=_autovar_5;
        VALUE lalt12autovar_6=_autovar_6;
        VALUE lalt12clas=_clas;
        VALUE lalt12autovar_7=_autovar_7;
        VALUE lalt12_result=__result;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_2,rb_obj_class(ame_curobj2(ptr))))) {
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_3,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Class*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _clas=it;;
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
        bind_aset(bind2,1,_clas);
        it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_63f7,1,bind2);
        _clas=bind_aget(bind2,1);;
        _autovar_7=it;;
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
        _autovar_4=lalt12autovar_4;
        _autovar_5=lalt12autovar_5;
        _autovar_6=lalt12autovar_6;
        _clas=lalt12clas;
        _autovar_7=lalt12autovar_7;
        __result=lalt12_result;
        ptr->pos=oldpos1;
        VALUE lalt13autovar_4=_autovar_4;
        VALUE lalt13autovar_5=_autovar_5;
        VALUE lalt13autovar_6=_autovar_6;
        VALUE lalt13clas=_clas;
        VALUE lalt13autovar_7=_autovar_7;
        VALUE lalt13_result=__result;
        VALUE lalt13autovar_8=_autovar_8;
        VALUE lalt13autovar_9=_autovar_9;
        VALUE lalt13autovar_10=_autovar_10;
        it=_autovar_3;
        _autovar_8=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_8);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass4;
        }
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
            goto pass4;
        }
success5:
        *ptr=oldpass5;
        it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind2);
        _autovar_10=it;;
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
            goto alt1_3;
        }
success4:
        *ptr=oldpass4;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        _autovar_4=lalt13autovar_4;
        _autovar_5=lalt13autovar_5;
        _autovar_6=lalt13autovar_6;
        _clas=lalt13clas;
        _autovar_7=lalt13autovar_7;
        __result=lalt13_result;
        _autovar_8=lalt13autovar_8;
        _autovar_9=lalt13autovar_9;
        _autovar_10=lalt13autovar_10;
        ptr->pos=oldpos1;
        VALUE lalt14autovar_4=_autovar_4;
        VALUE lalt14autovar_5=_autovar_5;
        VALUE lalt14autovar_6=_autovar_6;
        VALUE lalt14clas=_clas;
        VALUE lalt14autovar_7=_autovar_7;
        VALUE lalt14_result=__result;
        VALUE lalt14autovar_8=_autovar_8;
        VALUE lalt14autovar_9=_autovar_9;
        VALUE lalt14autovar_10=_autovar_10;
        VALUE lalt14autovar_11=_autovar_11;
        VALUE lalt14firs=_firs;
        VALUE lalt14autovar_12=_autovar_12;
        it=_autovar_3;
        _autovar_11=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_11);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind2);
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass6;
        }
        _firs=it;;
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy_Detect_Switch_Clas__lp_,1,bind2);
        _firs=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass6;
        };
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy_Detect_Switch_Clas_c_eq_Switch_4e5f,1,bind2);
        _firs=bind_aget(bind2,1);;
        _autovar_12=it;;
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
            goto alt1_4;
        }
success6:
        *ptr=oldpass6;
        it=_autovar_12;
        __result=it;;

        ;
        goto accept1;
alt1_4:
        _autovar_4=lalt14autovar_4;
        _autovar_5=lalt14autovar_5;
        _autovar_6=lalt14autovar_6;
        _clas=lalt14clas;
        _autovar_7=lalt14autovar_7;
        __result=lalt14_result;
        _autovar_8=lalt14autovar_8;
        _autovar_9=lalt14autovar_9;
        _autovar_10=lalt14autovar_10;
        _autovar_11=lalt14autovar_11;
        _firs=lalt14firs;
        _autovar_12=lalt14autovar_12;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        break;
    case 1/*Or*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_13=it;;
        cstruct oldpass7=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_13);
        it=rb_ary_new3(0);
        _autovar_14=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE lalt22autovar_15=_autovar_15;
            it=Detect_Switch_Clas_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _autovar_15=it;;
            it=AmethystCore_append(self,_autovar_14,_autovar_15);
            ;
            goto accept2;
alt2_2:
            _autovar_15=lalt22autovar_15;
            ptr->pos=oldpos2;
            VALUE lalt23autovar_15=_autovar_15;
            stop1=1;
            ;
            goto accept2;
alt2_3:
            _autovar_15=lalt23autovar_15;
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto pass7;
            };
accept2:
            ;
        }
        it=_autovar_14;
        _items=it;;
        it=Qfalse;
        _aswitch=it;;
        bind_aset(bind2,1,_items);
        bind_aset(bind2,2,_aswitch);
        it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__76da,1,bind2);
        _items=bind_aget(bind2,1);;
        _aswitch=bind_aget(bind2,2);;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        VALUE lalt32items=_items;
        VALUE lalt32aswitch=_aswitch;
        VALUE lalt32autovar_16=_autovar_16;
        bind_aset(bind2,1,_aswitch);
        it=rb_funcall(self,sy_Detect_Switch_Clas__lp_2,1,bind2);
        _aswitch=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto alt3_2;
        };
        bind_aset(bind2,1,_items);
        it=rb_funcall(self,sy_Detect_Switch_Clas_Or_lb__ti_bind_d486,1,bind2);
        _items=bind_aget(bind2,1);;
        _autovar_16=it;;

        ;
        goto accept3;
alt3_2:
        _items=lalt32items;
        _aswitch=lalt32aswitch;
        _autovar_16=lalt32autovar_16;
        ptr->pos=oldpos3;
        VALUE lalt33items=_items;
        VALUE lalt33aswitch=_aswitch;
        VALUE lalt33autovar_16=_autovar_16;
        VALUE lalt33autovar_17=_autovar_17;
        VALUE lalt33autovar_18=_autovar_18;
        VALUE lalt33list=_list;
        VALUE lalt33autovar_19=_autovar_19;
        VALUE lalt33ary=_ary;
        VALUE lalt33newlist=_newlist;
        VALUE lalt33lat=_lat;
        VALUE lalt33_result_2=__result_2;
        VALUE lalt33n=_n;
        VALUE lalt33cls=_cls;
        VALUE lalt33autovar_20=_autovar_20;
        VALUE lalt33autovar_21=_autovar_21;
        it=_items;
        _autovar_17=it;;
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_17;
        ptr->len=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass8;
        }
        _autovar_18=it;;
        cstruct oldpass9=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_18);
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_4,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Switch_Clas*/:
            ;
            it=rb_funcall(self,sy_Detect_Switch_Clas__lb__lb_Lattic_62e5,1,bind2);
            _list=it;;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            VALUE lalt42list=_list;
            VALUE lalt42autovar_19=_autovar_19;
            VALUE lalt42ary=_ary;
            VALUE lalt42newlist=_newlist;
            VALUE lalt42lat=_lat;
            VALUE lalt42_result_2=__result_2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_19=it;;
            cstruct oldpass10=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_19);
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind2);
            _ary=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass10;
            }
            goto success10;
pass10:
            *ptr=oldpass10;
            if (1) {
                it=failobj;
                goto alt4_2;
            }
success10:
            *ptr=oldpass10;
            it=rb_ary_new3(0);
            _newlist=it;;
            it=c_Lattice_Clas;
            _lat=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_ary);
            bind_aset(bind2,3,_newlist);
            bind_aset(bind2,4,_lat);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__642a,1,bind2);
            _list=bind_aget(bind2,1);;
            _ary=bind_aget(bind2,2);;
            _newlist=bind_aget(bind2,3);;
            _lat=bind_aget(bind2,4);;
            it=c_Switch_Clas;
            arg0=it;
            it=_lat;
            arg1=it;
            it=_newlist;
            arg2=it;
            it=Detect_First_combine_or(self ,arg0,arg1,arg2);
            if (it==failobj) {
                it=failobj;
                goto alt4_2;
            }
            __result_2=it;;

            ;
            goto accept4;
alt4_2:
            _list=lalt42list;
            _autovar_19=lalt42autovar_19;
            _ary=lalt42ary;
            _newlist=lalt42newlist;
            _lat=lalt42lat;
            __result_2=lalt42_result_2;
            ptr->pos=oldpos4;
            VALUE lalt43list=_list;
            VALUE lalt43autovar_19=_autovar_19;
            VALUE lalt43ary=_ary;
            VALUE lalt43newlist=_newlist;
            VALUE lalt43lat=_lat;
            VALUE lalt43_result_2=__result_2;
            VALUE lalt43n=_n;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt4_3;
            }
            _n=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_n);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482,1,bind2);
            _list=bind_aget(bind2,1);;
            _n=bind_aget(bind2,2);;
            _newlist=it;;
            it=c_Switch_Clas;
            arg0=it;
            it=c_Lattice_Clas;
            arg1=it;
            it=_newlist;
            arg2=it;
            it=Detect_First_combine_or(self ,arg0,arg1,arg2);
            if (it==failobj) {
                it=failobj;
                goto alt4_3;
            }
            __result_2=it;;

            ;
            goto accept4;
alt4_3:
            _list=lalt43list;
            _autovar_19=lalt43autovar_19;
            _ary=lalt43ary;
            _newlist=lalt43newlist;
            _lat=lalt43lat;
            __result_2=lalt43_result_2;
            _n=lalt43n;
            ptr->pos=oldpos4;
            VALUE lalt44list=_list;
            VALUE lalt44autovar_19=_autovar_19;
            VALUE lalt44ary=_ary;
            VALUE lalt44newlist=_newlist;
            VALUE lalt44lat=_lat;
            VALUE lalt44_result_2=__result_2;
            VALUE lalt44n=_n;
            VALUE lalt44cls=_cls;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto alt4_4;
            }
            it=c_Switch_Clas;
            _cls=it;;
            bind_aset(bind2,1,_cls);
            bind_aset(bind2,2,_list);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__lb__0f18,1,bind2);
            _cls=bind_aget(bind2,1);;
            _list=bind_aget(bind2,2);;
            __result_2=it;;

            ;
            goto accept4;
alt4_4:
            _list=lalt44list;
            _autovar_19=lalt44autovar_19;
            _ary=lalt44ary;
            _newlist=lalt44newlist;
            _lat=lalt44lat;
            __result_2=lalt44_result_2;
            _n=lalt44n;
            _cls=lalt44cls;
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto pass9;
            };
accept4:
            ;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass9;
            }
            it=__result_2;
            _autovar_20=it;;
            break;
        case 1/*Object*/:
            ;
            it=rb_funcall(self,sy_Detect_Switch_Clas__lb__lb_Lattic_62e5,1,bind2);
            _list=it;;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            VALUE lalt52list=_list;
            VALUE lalt52newlist=_newlist;
            VALUE lalt52_result_2=__result_2;
            VALUE lalt52n=_n;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            _n=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_n);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482,1,bind2);
            _list=bind_aget(bind2,1);;
            _n=bind_aget(bind2,2);;
            _newlist=it;;
            it=c_Switch_Clas;
            arg0=it;
            it=c_Lattice_Clas;
            arg1=it;
            it=_newlist;
            arg2=it;
            it=Detect_First_combine_or(self ,arg0,arg1,arg2);
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            __result_2=it;;

            ;
            goto accept5;
alt5_2:
            _list=lalt52list;
            _newlist=lalt52newlist;
            __result_2=lalt52_result_2;
            _n=lalt52n;
            ptr->pos=oldpos5;
            VALUE lalt53list=_list;
            VALUE lalt53newlist=_newlist;
            VALUE lalt53_result_2=__result_2;
            VALUE lalt53n=_n;
            VALUE lalt53cls=_cls;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto alt5_3;
            }
            it=c_Switch_Clas;
            _cls=it;;
            bind_aset(bind2,1,_cls);
            bind_aset(bind2,2,_list);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__lb__0f18,1,bind2);
            _cls=bind_aget(bind2,1);;
            _list=bind_aget(bind2,2);;
            __result_2=it;;

            ;
            goto accept5;
alt5_3:
            _list=lalt53list;
            _newlist=lalt53newlist;
            __result_2=lalt53_result_2;
            _n=lalt53n;
            _cls=lalt53cls;
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto pass9;
            };
accept5:
            ;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass9;
            }
            it=__result_2;
            _autovar_20=it;;
            break;
        }
        goto success9;
pass9:
        *ptr=oldpass9;
        if (1) {
            it=failobj;
            goto pass8;
        }
success9:
        *ptr=oldpass9;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass8;
        }
        it=_autovar_20;
        _autovar_21=it;;

        goto success8;
pass8:
        *ptr=oldpass8;
        if (1) {
            it=failobj;
            goto alt3_3;
        }
success8:
        *ptr=oldpass8;
        it=_autovar_21;
        _autovar_16=it;;

        ;
        goto accept3;
alt3_3:
        _items=lalt33items;
        _aswitch=lalt33aswitch;
        _autovar_16=lalt33autovar_16;
        _autovar_17=lalt33autovar_17;
        _autovar_18=lalt33autovar_18;
        _list=lalt33list;
        _autovar_19=lalt33autovar_19;
        _ary=lalt33ary;
        _newlist=lalt33newlist;
        _lat=lalt33lat;
        __result_2=lalt33_result_2;
        _n=lalt33n;
        _cls=lalt33cls;
        _autovar_20=lalt33autovar_20;
        _autovar_21=lalt33autovar_21;
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto pass7;
        };
accept3:
        ;
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
            goto fail;
        }
success7:
        *ptr=oldpass7;
        it=_autovar_16;
        __result=it;;
        break;
    case 2/*Seq*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_22=it;;
        cstruct oldpass11=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_22);
        it=rb_ary_new3(0);
        _autovar_23=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            VALUE lalt62autovar_24=_autovar_24;
            it=Detect_Switch_Clas_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto alt6_2;
            }
            _autovar_24=it;;
            it=AmethystCore_append(self,_autovar_23,_autovar_24);
            ;
            goto accept6;
alt6_2:
            _autovar_24=lalt62autovar_24;
            ptr->pos=oldpos6;
            VALUE lalt63autovar_24=_autovar_24;
            stop2=1;
            ;
            goto accept6;
alt6_3:
            _autovar_24=lalt63autovar_24;
            ptr->pos=oldpos6;
            if (1) {
                it=failobj;
                goto pass11;
            };
accept6:
            ;
        }
        it=_autovar_23;
        _autovar_25=it;;
        cstruct oldpass12=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_25;
        ptr->len=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass12;
        }
        _autovar_26=it;;
        cstruct oldpass13=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_26);
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Switch_Clas*/:
            ;
            it=rb_ary_new3(0);
            _prefix=it;;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            VALUE lalt72prefix=_prefix;
            VALUE lalt72s=_s;
            VALUE lalt72_result_3=__result_3;
            it=Detect_First_must_empty(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            _s=it;;
            it=c_Switch_Clas;
            arg0=it;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_s);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _s=bind_aget(bind2,2);;
            arg1=it;
            it=Detect_First_combine_seq(self ,arg0,arg1);
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            __result_3=it;;

            ;
            goto accept7;
alt7_2:
            _prefix=lalt72prefix;
            _s=lalt72s;
            __result_3=lalt72_result_3;
            ptr->pos=oldpos7;
            VALUE lalt73prefix=_prefix;
            VALUE lalt73s=_s;
            VALUE lalt73_result_3=__result_3;
            VALUE lalt73autovar_27=_autovar_27;
            VALUE lalt73ary_2=_ary_2;
            VALUE lalt73autovar_28=_autovar_28;
            VALUE lalt73autovar_29=_autovar_29;
            VALUE lalt73rest=_rest;
            VALUE lalt73cls_2=_cls_2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_27=it;;
            cstruct oldpass14=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_27);
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind2);
            _ary_2=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass14;
            }
            goto success14;
pass14:
            *ptr=oldpass14;
            if (1) {
                it=failobj;
                goto alt7_3;
            }
success14:
            *ptr=oldpass14;
            it=rb_ary_new3(0);
            _autovar_28=it;;
            int stop3=0;
            while(!stop3) {
                int oldpos8=ptr->pos;
                int cut8=0;
alt8_1:
                ;
                VALUE lalt82autovar_29=_autovar_29;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt8_2;
                }
                _autovar_29=it;;
                it=AmethystCore_append(self,_autovar_28,_autovar_29);
                ;
                goto accept8;
alt8_2:
                _autovar_29=lalt82autovar_29;
                ptr->pos=oldpos8;
                VALUE lalt83autovar_29=_autovar_29;
                stop3=1;
                ;
                goto accept8;
alt8_3:
                _autovar_29=lalt83autovar_29;
                ptr->pos=oldpos8;
                if (1) {
                    it=failobj;
                    goto alt7_3;
                };
accept8:
                ;
            }
            it=_autovar_28;
            _rest=it;;
            it=c_Switch_Clas;
            _cls_2=it;;
            bind_aset(bind2,1,_cls_2);
            bind_aset(bind2,2,_ary_2);
            bind_aset(bind2,3,_prefix);
            bind_aset(bind2,4,_rest);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__lb__75a5,1,bind2);
            _cls_2=bind_aget(bind2,1);;
            _ary_2=bind_aget(bind2,2);;
            _prefix=bind_aget(bind2,3);;
            _rest=bind_aget(bind2,4);;
            __result_3=it;;

            ;
            goto accept7;
alt7_3:
            _prefix=lalt73prefix;
            _s=lalt73s;
            __result_3=lalt73_result_3;
            _autovar_27=lalt73autovar_27;
            _ary_2=lalt73ary_2;
            _autovar_28=lalt73autovar_28;
            _autovar_29=lalt73autovar_29;
            _rest=lalt73rest;
            _cls_2=lalt73cls_2;
            ptr->pos=oldpos7;
            VALUE lalt74prefix=_prefix;
            VALUE lalt74s=_s;
            VALUE lalt74_result_3=__result_3;
            VALUE lalt74autovar_27=_autovar_27;
            VALUE lalt74ary_2=_ary_2;
            VALUE lalt74autovar_28=_autovar_28;
            VALUE lalt74autovar_29=_autovar_29;
            VALUE lalt74rest=_rest;
            VALUE lalt74cls_2=_cls_2;
            VALUE lalt74autovar_30=_autovar_30;
            VALUE lalt74autovar_31=_autovar_31;
            it=rb_ary_new3(0);
            _autovar_30=it;;
            int stop4=0;
            while(!stop4) {
                int oldpos9=ptr->pos;
                int cut9=0;
alt9_1:
                ;
                VALUE lalt92autovar_31=_autovar_31;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt9_2;
                }
                _autovar_31=it;;
                it=AmethystCore_append(self,_autovar_30,_autovar_31);
                ;
                goto accept9;
alt9_2:
                _autovar_31=lalt92autovar_31;
                ptr->pos=oldpos9;
                VALUE lalt93autovar_31=_autovar_31;
                stop4=1;
                ;
                goto accept9;
alt9_3:
                _autovar_31=lalt93autovar_31;
                ptr->pos=oldpos9;
                if (1) {
                    it=failobj;
                    goto alt7_4;
                };
accept9:
                ;
            }
            it=_autovar_30;
            _ary_2=it;;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_ary_2);
            it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _ary_2=bind_aget(bind2,2);;
            __result_3=it;;

            ;
            goto accept7;
alt7_4:
            _prefix=lalt74prefix;
            _s=lalt74s;
            __result_3=lalt74_result_3;
            _autovar_27=lalt74autovar_27;
            _ary_2=lalt74ary_2;
            _autovar_28=lalt74autovar_28;
            _autovar_29=lalt74autovar_29;
            _rest=lalt74rest;
            _cls_2=lalt74cls_2;
            _autovar_30=lalt74autovar_30;
            _autovar_31=lalt74autovar_31;
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto pass13;
            };
accept7:
            ;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass13;
            }
            it=__result_3;
            _autovar_32=it;;
            break;
        case 1/*Object*/:
            ;
            it=rb_ary_new3(0);
            _prefix=it;;
            int oldpos10=ptr->pos;
            int cut10=0;
alt10_1:
            ;
            VALUE lalt102prefix=_prefix;
            VALUE lalt102s=_s;
            VALUE lalt102_result_3=__result_3;
            it=Detect_First_must_empty(self );
            if (it==failobj) {
                it=failobj;
                goto alt10_2;
            }
            _s=it;;
            it=c_Switch_Clas;
            arg0=it;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_s);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _s=bind_aget(bind2,2);;
            arg1=it;
            it=Detect_First_combine_seq(self ,arg0,arg1);
            if (it==failobj) {
                it=failobj;
                goto alt10_2;
            }
            __result_3=it;;

            ;
            goto accept10;
alt10_2:
            _prefix=lalt102prefix;
            _s=lalt102s;
            __result_3=lalt102_result_3;
            ptr->pos=oldpos10;
            VALUE lalt103prefix=_prefix;
            VALUE lalt103s=_s;
            VALUE lalt103_result_3=__result_3;
            VALUE lalt103ary_2=_ary_2;
            VALUE lalt103autovar_30=_autovar_30;
            VALUE lalt103autovar_31=_autovar_31;
            it=rb_ary_new3(0);
            _autovar_30=it;;
            int stop5=0;
            while(!stop5) {
                int oldpos11=ptr->pos;
                int cut11=0;
alt11_1:
                ;
                VALUE lalt112autovar_31=_autovar_31;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt11_2;
                }
                _autovar_31=it;;
                it=AmethystCore_append(self,_autovar_30,_autovar_31);
                ;
                goto accept11;
alt11_2:
                _autovar_31=lalt112autovar_31;
                ptr->pos=oldpos11;
                VALUE lalt113autovar_31=_autovar_31;
                stop5=1;
                ;
                goto accept11;
alt11_3:
                _autovar_31=lalt113autovar_31;
                ptr->pos=oldpos11;
                if (1) {
                    it=failobj;
                    goto alt10_3;
                };
accept11:
                ;
            }
            it=_autovar_30;
            _ary_2=it;;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_ary_2);
            it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _ary_2=bind_aget(bind2,2);;
            __result_3=it;;

            ;
            goto accept10;
alt10_3:
            _prefix=lalt103prefix;
            _s=lalt103s;
            __result_3=lalt103_result_3;
            _ary_2=lalt103ary_2;
            _autovar_30=lalt103autovar_30;
            _autovar_31=lalt103autovar_31;
            ptr->pos=oldpos10;
            if (1) {
                it=failobj;
                goto pass13;
            };
accept10:
            ;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass13;
            }
            it=__result_3;
            _autovar_32=it;;
            break;
        }
        goto success13;
pass13:
        *ptr=oldpass13;
        if (1) {
            it=failobj;
            goto pass12;
        }
success13:
        *ptr=oldpass13;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass12;
        }
        it=_autovar_32;
        _autovar_33=it;;

        goto success12;
pass12:
        *ptr=oldpass12;
        if (1) {
            it=failobj;
            goto pass11;
        }
success12:
        *ptr=oldpass12;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass11;
        }
        it=_autovar_33;
        _autovar_34=it;;

        goto success11;
pass11:
        *ptr=oldpass11;
        if (1) {
            it=failobj;
            goto fail;
        }
success11:
        *ptr=oldpass11;
        it=_autovar_34;
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
void Init_Detect_Switch_Clas_c() {
    cls_Detect_Switch_Clas=rb_define_class("Detect_Switch_Clas",rb_const_get(rb_cObject,rb_intern("Detect_First")));
    failobj=rb_eval_string("FAIL");
    c_Lattice_Clas=rb_const_get(rb_cObject, rb_intern("Lattice_Clas"));
    rb_global_variable(&c_Lattice_Clas);
    c_Switch_Clas=rb_const_get(rb_cObject, rb_intern("Switch_Clas"));
    rb_global_variable(&c_Switch_Clas);
    mem_Detect_Switch_Clas=memo_init();
    memo_val_Detect_Switch_Clas=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,mem_Detect_Switch_Clas);
    rb_global_variable(&memo_val_Detect_Switch_Clas);
    rb_define_method(cls_Detect_Switch_Clas,"profile_report",profile_report_Detect_Switch_Clas,0);
    switchhash_Detect_Switch_Clas_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_10);;
    switchhash_Detect_Switch_Clas_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_11);;
    switchhash_Detect_Switch_Clas_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_1);;
    switchhash_Detect_Switch_Clas_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_2);;
    switchhash_Detect_Switch_Clas_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Class\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_3);;
    switchhash_Detect_Switch_Clas_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_4);;
    switchhash_Detect_Switch_Clas_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_5);;
    switchhash_Detect_Switch_Clas_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_6);;
    switchhash_Detect_Switch_Clas_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_7);;
    switchhash_Detect_Switch_Clas_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_8);;
    switchhash_Detect_Switch_Clas_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_9);;
    sy_Detect_Switch_Clas_Or_lb__ti_bind_d486=rb_intern("Detect_Switch_Clas_Or_lb__ti_bind_d486");
    sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321=rb_intern("Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321");
    sy_Detect_Switch_Clas_Switch_C_63f7=rb_intern("Detect_Switch_Clas_Switch_C_63f7");
    sy_Detect_Switch_Clas__at__contex_5f56=rb_intern("Detect_Switch_Clas__at__contex_5f56");
    sy_Detect_Switch_Clas__at__contex_cdb3=rb_intern("Detect_Switch_Clas__at__contex_cdb3");
    sy_Detect_Switch_Clas__do_rules_eq__le__ab16=rb_intern("Detect_Switch_Clas__do_rules_eq__le__ab16");
    sy_Detect_Switch_Clas__lb__lb_Lattic_62e5=rb_intern("Detect_Switch_Clas__lb__lb_Lattic_62e5");
    sy_Detect_Switch_Clas__lp_2=rb_intern("Detect_Switch_Clas__lp_2");
    sy_Detect_Switch_Clas__lp_=rb_intern("Detect_Switch_Clas__lp_");
    sy_Detect_Switch_Clas__lp_src_dot_cla_2024=rb_intern("Detect_Switch_Clas__lp_src_dot_cla_2024");
    sy_Detect_Switch_Clas_bind_lb_1_rb__dot__642a=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__dot__642a");
    sy_Detect_Switch_Clas_bind_lb_1_rb__dot__76da=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__dot__76da");
    sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__dot__a482");
    sy_Detect_Switch_Clas_bind_lb_1_rb__lb__0f18=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__lb__0f18");
    sy_Detect_Switch_Clas_bind_lb_1_rb__lb__75a5=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__lb__75a5");
    sy_Detect_Switch_Clas_bind_lb_1_rb__lb__fa06=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__lb__fa06");
    sy_Detect_Switch_Clas_bind_lb_1_rb__lt__7b20=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__lt__7b20");
    sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__pl__4651");
    sy_Detect_Switch_Clas_bind_lb_1_rb__sp__6af0=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__sp__6af0");
    sy_Detect_Switch_Clas_c_eq_Switch_4e5f=rb_intern("Detect_Switch_Clas_c_eq_Switch_4e5f");
    sy_Detect_Switch_Clas_if_sp_bind_lb__1bed=rb_intern("Detect_Switch_Clas_if_sp_bind_lb__1bed");
    sy_Detect_Switch_Clas_src_25d9=rb_intern("Detect_Switch_Clas_src_25d9");
    sy_Detect_Switch_Clas_src_dot_ary_d5cf=rb_intern("Detect_Switch_Clas_src_dot_ary_d5cf");
    sy_Detect_Switch_Clas_src_dot_rule_5acf=rb_intern("Detect_Switch_Clas_src_dot_rule_5acf");
    sy_Detect_Switch_Clas_src_dot_rule_a719=rb_intern("Detect_Switch_Clas_src_dot_rule_a719");
    sy_first=rb_intern("first");
    rb_define_method(cls_Detect_Switch_Clas,"itrans",Detect_Switch_Clas_itrans,0);
    rb_define_method(cls_Detect_Switch_Clas,"root",Detect_Switch_Clas_root,0);
    rb_define_method(cls_Detect_Switch_Clas,"traverse",Detect_Switch_Clas_traverse,0);
    rb_define_method(cls_Detect_Switch_Clas,"traverse_item",Detect_Switch_Clas_traverse_item,0);
    rb_define_method(cls_Detect_Switch_Clas,"visit",Detect_Switch_Clas_visit,0);
}
