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
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,_rules=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,__result=Qnil,_autovar_13=Qnil;
    VALUE bind2=bind_new2(2);
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
            ptr->branches+=2;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ptr->branches+=2;
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
                    ptr->branches+=2;
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
                        goto revert3;
                    }
success4:
                    *ptr=oldpass4;
                    it=_autovar_9;
                    _autovar_10=it;;
                    it=AmethystCore_append(self,_autovar_7,_autovar_10);
                    ;
                    goto accept6;
revert3:
                    ;
                    goto alt3_2;
accept6:
                    ;

                    ;
                    ptr->branches-=2;
                    goto accept5;
alt3_2:
                    ptr->pos=oldpos3;
                    ptr->branches-=1;
                    stop2=1;
                    ;
                    goto accept7;
revert4:
                    ;
                    goto alt3_3;
accept7:
                    ;

                    ;
                    ptr->branches-=1;
                    goto accept5;
alt3_3:
                    ptr->pos=oldpos3;
                    ptr->branches-=1;
                    if (1) {
                        it=failobj;
                        goto pass3;
                    };
accept5:
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
                goto revert2;
            }
success1:
            *ptr=oldpass1;
            it=_autovar_11;
            _autovar_12=it;;

            ;
            goto accept4;
revert2:
            ;
            goto alt2_2;
accept4:
            ;

            ;
            ptr->branches-=2;
            goto accept3;
alt2_2:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert5;
            }
            _autovar_12=it;;

            ;
            goto accept8;
revert5:
            ;
            goto alt2_3;
accept8:
            ;

            ;
            ptr->branches-=1;
            goto accept3;
alt2_3:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto revert1;
            };
accept3:
            ;
            it=AmethystCore_append(self,_autovar_3,_autovar_12);
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
            goto accept9;
revert6:
            ;
            goto alt1_3;
accept9:
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
        case 1/*Object*/:
            ;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ptr->branches+=2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert7;
            }
            _autovar_12=it;;
            it=AmethystCore_append(self,_autovar_3,_autovar_12);
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
            stop1=1;
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
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(0);
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
    VALUE it ,_nvars=Qnil,_ivars=Qnil,_autovar=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(2);
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
        ptr->branches+=2;
        it=Detect_Switch_Clas_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto revert1;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__sp__6af0,1,bind2);
        _nvars=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
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
    VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ar=Qnil,_it=Qnil,_autovar_4=Qnil;
    VALUE bind2=bind_new2(2);
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
            ptr->branches+=3;
            it=Detect_Switch_Clas_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert1;
            }
            __result=it;;

            ;
            goto accept2;
revert1:
            ;
            goto alt1_2;
accept2:
            ;

            ;
            ptr->branches-=3;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            ptr->branches-=1;
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
                goto revert2;
            }
success1:
            *ptr=oldpass1;
            it=_autovar_2;
            __result=it;;

            ;
            goto accept3;
revert2:
            ;
            goto alt1_3;
accept3:
            ;

            ;
            ptr->branches-=2;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert3;
            }
            __result=it;;

            ;
            goto accept4;
revert3:
            ;
            goto alt1_4;
accept4:
            ;

            ;
            ptr->branches-=1;
            goto accept1;
alt1_4:
            ptr->pos=oldpos1;
            ptr->branches-=1;
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
            ptr->branches+=2;
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
                goto revert4;
            }
success2:
            *ptr=oldpass2;
            it=_autovar_2;
            __result=it;;

            ;
            goto accept6;
revert4:
            ;
            goto alt2_2;
accept6:
            ;

            ;
            ptr->branches-=2;
            goto accept5;
alt2_2:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert5;
            }
            __result=it;;

            ;
            goto accept7;
revert5:
            ;
            goto alt2_3;
accept7:
            ;

            ;
            ptr->branches-=1;
            goto accept5;
alt2_3:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept5:
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
            ptr->branches+=3;
            it=Detect_Switch_Clas_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert6;
            }
            __result=it;;

            ;
            goto accept9;
revert6:
            ;
            goto alt3_2;
accept9:
            ;

            ;
            ptr->branches-=3;
            goto accept8;
alt3_2:
            ptr->pos=oldpos3;
            ptr->branches-=1;
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
                ptr->branches+=2;
                it=Detect_Switch_Clas_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert8;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept12;
revert8:
                ;
                goto alt4_2;
accept12:
                ;

                ;
                ptr->branches-=2;
                goto accept11;
alt4_2:
                ptr->pos=oldpos4;
                ptr->branches-=1;
                stop1=1;
                ;
                goto accept13;
revert9:
                ;
                goto alt4_3;
accept13:
                ;

                ;
                ptr->branches-=1;
                goto accept11;
alt4_3:
                ptr->pos=oldpos4;
                ptr->branches-=1;
                if (1) {
                    it=failobj;
                    goto pass3;
                };
accept11:
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
                goto revert7;
            }
success3:
            *ptr=oldpass3;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept10;
revert7:
            ;
            goto alt3_3;
accept10:
            ;

            ;
            ptr->branches-=2;
            goto accept8;
alt3_3:
            ptr->pos=oldpos3;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert10;
            }
            __result=it;;

            ;
            goto accept14;
revert10:
            ;
            goto alt3_4;
accept14:
            ;

            ;
            ptr->branches-=1;
            goto accept8;
alt3_4:
            ptr->pos=oldpos3;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept8:
            ;
            break;
        case 3/*Object*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ptr->branches+=2;
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
                ptr->branches+=2;
                it=Detect_Switch_Clas_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert12;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept18;
revert12:
                ;
                goto alt6_2;
accept18:
                ;

                ;
                ptr->branches-=2;
                goto accept17;
alt6_2:
                ptr->pos=oldpos6;
                ptr->branches-=1;
                stop2=1;
                ;
                goto accept19;
revert13:
                ;
                goto alt6_3;
accept19:
                ;

                ;
                ptr->branches-=1;
                goto accept17;
alt6_3:
                ptr->pos=oldpos6;
                ptr->branches-=1;
                if (1) {
                    it=failobj;
                    goto pass4;
                };
accept17:
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
                goto revert11;
            }
success4:
            *ptr=oldpass4;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept16;
revert11:
            ;
            goto alt5_2;
accept16:
            ;

            ;
            ptr->branches-=2;
            goto accept15;
alt5_2:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert14;
            }
            __result=it;;

            ;
            goto accept20;
revert14:
            ;
            goto alt5_3;
accept20:
            ;

            ;
            ptr->branches-=1;
            goto accept15;
alt5_3:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept15:
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
            ptr->branches+=2;
            it=Detect_Switch_Clas_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert15;
            }
            __result=it;;

            ;
            goto accept22;
revert15:
            ;
            goto alt7_2;
accept22:
            ;

            ;
            ptr->branches-=2;
            goto accept21;
alt7_2:
            ptr->pos=oldpos7;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert16;
            }
            __result=it;;

            ;
            goto accept23;
revert16:
            ;
            goto alt7_3;
accept23:
            ;

            ;
            ptr->branches-=1;
            goto accept21;
alt7_3:
            ptr->pos=oldpos7;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept21:
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
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_clas=Qnil,_autovar_7=Qnil,__result=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,_autovar_11=Qnil,_firs=Qnil,_autovar_12=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,_autovar_15=Qnil,_items=Qnil,_aswitch=Qnil,_autovar_16=Qnil,_autovar_17=Qnil,_autovar_18=Qnil,_list=Qnil,_autovar_19=Qnil,_ary=Qnil,_newlist=Qnil,_lat=Qnil,__result_2=Qnil,_n=Qnil,_cls=Qnil,_autovar_20=Qnil,_autovar_21=Qnil,_autovar_22=Qnil,_autovar_23=Qnil,_autovar_24=Qnil,_autovar_25=Qnil,_autovar_26=Qnil,_prefix=Qnil,_s=Qnil,__result_3=Qnil,_autovar_27=Qnil,_ary_2=Qnil,_autovar_28=Qnil,_autovar_29=Qnil,_rest=Qnil,_cls_2=Qnil,_autovar_30=Qnil,_autovar_31=Qnil,_autovar_32=Qnil,_autovar_33=Qnil,_autovar_34=Qnil;
    VALUE bind2=bind_new2(4);
    VALUE arg0;
    VALUE arg1;
    VALUE arg2;
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
        ptr->branches+=3;
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
        goto alt1_2;
accept2:
        ;

        ;
        ptr->branches-=3;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        ptr->branches-=1;
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
            goto revert2;
        }
success4:
        *ptr=oldpass4;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept3;
revert2:
        ;
        goto alt1_3;
accept3:
        ;

        ;
        ptr->branches-=2;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        ptr->branches-=1;
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
            goto revert3;
        }
success6:
        *ptr=oldpass6;
        it=_autovar_12;
        __result=it;;

        ;
        goto accept4;
revert3:
        ;
        goto alt1_4;
accept4:
        ;

        ;
        ptr->branches-=1;
        goto accept1;
alt1_4:
        ptr->pos=oldpos1;
        ptr->branches-=1;
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
            ptr->branches+=2;
            it=Detect_Switch_Clas_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto revert4;
            }
            _autovar_15=it;;
            it=AmethystCore_append(self,_autovar_14,_autovar_15);
            ;
            goto accept6;
revert4:
            ;
            goto alt2_2;
accept6:
            ;

            ;
            ptr->branches-=2;
            goto accept5;
alt2_2:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            stop1=1;
            ;
            goto accept7;
revert5:
            ;
            goto alt2_3;
accept7:
            ;

            ;
            ptr->branches-=1;
            goto accept5;
alt2_3:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto pass7;
            };
accept5:
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
        ptr->branches+=2;
        bind_aset(bind2,1,_aswitch);
        it=rb_funcall(self,sy_Detect_Switch_Clas__lp_2,1,bind2);
        _aswitch=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto revert6;
        };
        bind_aset(bind2,1,_items);
        it=rb_funcall(self,sy_Detect_Switch_Clas_Or_lb__ti_bind_d486,1,bind2);
        _items=bind_aget(bind2,1);;
        _autovar_16=it;;

        ;
        goto accept9;
revert6:
        ;
        goto alt3_2;
accept9:
        ;

        ;
        ptr->branches-=2;
        goto accept8;
alt3_2:
        ptr->pos=oldpos3;
        ptr->branches-=1;
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
            ptr->branches+=3;
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
                goto revert8;
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
                goto revert8;
            }
            __result_2=it;;

            ;
            goto accept12;
revert8:
            ;
            goto alt4_2;
accept12:
            ;

            ;
            ptr->branches-=3;
            goto accept11;
alt4_2:
            ptr->pos=oldpos4;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert9;
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
                goto revert9;
            }
            __result_2=it;;

            ;
            goto accept13;
revert9:
            ;
            goto alt4_3;
accept13:
            ;

            ;
            ptr->branches-=2;
            goto accept11;
alt4_3:
            ptr->pos=oldpos4;
            ptr->branches-=1;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto revert10;
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
            goto accept14;
revert10:
            ;
            goto alt4_4;
accept14:
            ;

            ;
            ptr->branches-=1;
            goto accept11;
alt4_4:
            ptr->pos=oldpos4;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto pass9;
            };
accept11:
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
            ptr->branches+=2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert11;
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
                goto revert11;
            }
            __result_2=it;;

            ;
            goto accept16;
revert11:
            ;
            goto alt5_2;
accept16:
            ;

            ;
            ptr->branches-=2;
            goto accept15;
alt5_2:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto revert12;
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
            goto accept17;
revert12:
            ;
            goto alt5_3;
accept17:
            ;

            ;
            ptr->branches-=1;
            goto accept15;
alt5_3:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto pass9;
            };
accept15:
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
            goto revert7;
        }
success8:
        *ptr=oldpass8;
        it=_autovar_21;
        _autovar_16=it;;

        ;
        goto accept10;
revert7:
        ;
        goto alt3_3;
accept10:
        ;

        ;
        ptr->branches-=1;
        goto accept8;
alt3_3:
        ptr->pos=oldpos3;
        ptr->branches-=1;
        if (1) {
            it=failobj;
            goto pass7;
        };
accept8:
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
            ptr->branches+=2;
            it=Detect_Switch_Clas_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto revert13;
            }
            _autovar_24=it;;
            it=AmethystCore_append(self,_autovar_23,_autovar_24);
            ;
            goto accept19;
revert13:
            ;
            goto alt6_2;
accept19:
            ;

            ;
            ptr->branches-=2;
            goto accept18;
alt6_2:
            ptr->pos=oldpos6;
            ptr->branches-=1;
            stop2=1;
            ;
            goto accept20;
revert14:
            ;
            goto alt6_3;
accept20:
            ;

            ;
            ptr->branches-=1;
            goto accept18;
alt6_3:
            ptr->pos=oldpos6;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto pass11;
            };
accept18:
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
            ptr->branches+=3;
            it=Detect_First_must_empty(self );
            if (it==failobj) {
                it=failobj;
                goto revert15;
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
                goto revert15;
            }
            __result_3=it;;

            ;
            goto accept22;
revert15:
            ;
            goto alt7_2;
accept22:
            ;

            ;
            ptr->branches-=3;
            goto accept21;
alt7_2:
            ptr->pos=oldpos7;
            ptr->branches-=1;
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
                goto revert16;
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
                ptr->branches+=2;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert17;
                }
                _autovar_29=it;;
                it=AmethystCore_append(self,_autovar_28,_autovar_29);
                ;
                goto accept25;
revert17:
                ;
                goto alt8_2;
accept25:
                ;

                ;
                ptr->branches-=2;
                goto accept24;
alt8_2:
                ptr->pos=oldpos8;
                ptr->branches-=1;
                stop3=1;
                ;
                goto accept26;
revert18:
                ;
                goto alt8_3;
accept26:
                ;

                ;
                ptr->branches-=1;
                goto accept24;
alt8_3:
                ptr->pos=oldpos8;
                ptr->branches-=1;
                if (1) {
                    it=failobj;
                    goto revert16;
                };
accept24:
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
            goto accept23;
revert16:
            ;
            goto alt7_3;
accept23:
            ;

            ;
            ptr->branches-=2;
            goto accept21;
alt7_3:
            ptr->pos=oldpos7;
            ptr->branches-=1;
            it=rb_ary_new3(0);
            _autovar_30=it;;
            int stop4=0;
            while(!stop4) {
                int oldpos9=ptr->pos;
                int cut9=0;
alt9_1:
                ptr->branches+=2;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert20;
                }
                _autovar_31=it;;
                it=AmethystCore_append(self,_autovar_30,_autovar_31);
                ;
                goto accept29;
revert20:
                ;
                goto alt9_2;
accept29:
                ;

                ;
                ptr->branches-=2;
                goto accept28;
alt9_2:
                ptr->pos=oldpos9;
                ptr->branches-=1;
                stop4=1;
                ;
                goto accept30;
revert21:
                ;
                goto alt9_3;
accept30:
                ;

                ;
                ptr->branches-=1;
                goto accept28;
alt9_3:
                ptr->pos=oldpos9;
                ptr->branches-=1;
                if (1) {
                    it=failobj;
                    goto revert19;
                };
accept28:
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
            goto accept27;
revert19:
            ;
            goto alt7_4;
accept27:
            ;

            ;
            ptr->branches-=1;
            goto accept21;
alt7_4:
            ptr->pos=oldpos7;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto pass13;
            };
accept21:
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
            ptr->branches+=2;
            it=Detect_First_must_empty(self );
            if (it==failobj) {
                it=failobj;
                goto revert22;
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
                goto revert22;
            }
            __result_3=it;;

            ;
            goto accept32;
revert22:
            ;
            goto alt10_2;
accept32:
            ;

            ;
            ptr->branches-=2;
            goto accept31;
alt10_2:
            ptr->pos=oldpos10;
            ptr->branches-=1;
            it=rb_ary_new3(0);
            _autovar_30=it;;
            int stop5=0;
            while(!stop5) {
                int oldpos11=ptr->pos;
                int cut11=0;
alt11_1:
                ptr->branches+=2;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert24;
                }
                _autovar_31=it;;
                it=AmethystCore_append(self,_autovar_30,_autovar_31);
                ;
                goto accept35;
revert24:
                ;
                goto alt11_2;
accept35:
                ;

                ;
                ptr->branches-=2;
                goto accept34;
alt11_2:
                ptr->pos=oldpos11;
                ptr->branches-=1;
                stop5=1;
                ;
                goto accept36;
revert25:
                ;
                goto alt11_3;
accept36:
                ;

                ;
                ptr->branches-=1;
                goto accept34;
alt11_3:
                ptr->pos=oldpos11;
                ptr->branches-=1;
                if (1) {
                    it=failobj;
                    goto revert23;
                };
accept34:
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
            goto accept33;
revert23:
            ;
            goto alt10_3;
accept33:
            ;

            ;
            ptr->branches-=1;
            goto accept31;
alt10_3:
            ptr->pos=oldpos10;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto pass13;
            };
accept31:
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
