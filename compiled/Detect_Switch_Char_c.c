#include "cthyst.h"
#include "memo.c"
VALUE cls_Detect_Switch_Char;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_First_combine_or(VALUE self ,VALUE,VALUE,VALUE);
VALUE Detect_First_combine_seq(VALUE self ,VALUE,VALUE);
VALUE Detect_First_must_empty(VALUE self );
VALUE Detect_Switch_Char_itrans(VALUE self );
VALUE Detect_Switch_Char_root(VALUE self );
VALUE Detect_Switch_Char_traverse(VALUE self );
VALUE Detect_Switch_Char_traverse_item(VALUE self );
VALUE Detect_Switch_Char_visit(VALUE self );
VALUE switchhash_Detect_Switch_Char_10;
VALUE switchhash_Detect_Switch_Char_11;
VALUE switchhash_Detect_Switch_Char_1;
VALUE switchhash_Detect_Switch_Char_2;
VALUE switchhash_Detect_Switch_Char_3;
VALUE switchhash_Detect_Switch_Char_4;
VALUE switchhash_Detect_Switch_Char_5;
VALUE switchhash_Detect_Switch_Char_6;
VALUE switchhash_Detect_Switch_Char_7;
VALUE switchhash_Detect_Switch_Char_8;
VALUE switchhash_Detect_Switch_Char_9;
static VALUE c_Lattice_Char;
static VALUE c_Switch_Char;
static VALUE sy_Detect_Switch_Char_Or_lb__ti_bind_d486;
static VALUE sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321;
static VALUE sy_Detect_Switch_Char__at__contex_5f56;
static VALUE sy_Detect_Switch_Char__at__contex_cdb3;
static VALUE sy_Detect_Switch_Char__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch_Char__lb__lb_Lattic_d322;
static VALUE sy_Detect_Switch_Char__lp_2;
static VALUE sy_Detect_Switch_Char__lp_;
static VALUE sy_Detect_Switch_Char__lp_src_dot_cla_2024;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__dot__642a;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__dot__bb04;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__lb__0f18;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__lb__75a5;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__lb__fa06;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__sp__6af0;
static VALUE sy_Detect_Switch_Char_first_lp_sr_3298;
static VALUE sy_Detect_Switch_Char_if_sp_bind_lb__1bed;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_78a6;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_7c35;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_df23;
static VALUE sy_Detect_Switch_Char_src_25d9;
static VALUE sy_Detect_Switch_Char_src_dot_ary_d5cf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_a719;

memo_struct *mem_Detect_Switch_Char=NULL;
VALUE memo_val_Detect_Switch_Char;
VALUE profile_report_Detect_Switch_Char(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if(ptr->mem) {
        fprintf(profile_report,"memo Detect_Switch_Char::traverse  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[119],((memo_struct *)ptr->mem)->miss[119],((memo_struct *)ptr->mem)->ticks[119]);
        ((memo_struct *)ptr->mem)->hits[119]=0;
        ((memo_struct *)ptr->mem)->miss[119]=0;
        ((memo_struct *)ptr->mem)->ticks[119]=0;
    }
    return Qnil;
}
VALUE Detect_Switch_Char_itrans(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,_rules=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,__result=Qnil,_autovar_13=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_Detect_Switch_Char__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    it=rb_ary_new3(0);
    _autovar_3=it;;
    int stop1=0;
    while(!stop1) {
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_10,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Grammar*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE revert1autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
            VALUE revert1autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
            VALUE revert1autovar_5=rb_funcall(_autovar_5,rb_intern("dup"),0);
            VALUE revert1autovar_6=rb_funcall(_autovar_6,rb_intern("dup"),0);
            VALUE revert1autovar_7=rb_funcall(_autovar_7,rb_intern("dup"),0);
            VALUE revert1autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
            VALUE revert1autovar_9=rb_funcall(_autovar_9,rb_intern("dup"),0);
            VALUE revert1autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
            VALUE revert1rules=rb_funcall(_rules,rb_intern("dup"),0);
            VALUE revert1autovar_11=rb_funcall(_autovar_11,rb_intern("dup"),0);
            VALUE revert1autovar_12=rb_funcall(_autovar_12,rb_intern("dup"),0);
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE revert2autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
            VALUE revert2autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
            VALUE revert2autovar_5=rb_funcall(_autovar_5,rb_intern("dup"),0);
            VALUE revert2autovar_6=rb_funcall(_autovar_6,rb_intern("dup"),0);
            VALUE revert2autovar_7=rb_funcall(_autovar_7,rb_intern("dup"),0);
            VALUE revert2autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
            VALUE revert2autovar_9=rb_funcall(_autovar_9,rb_intern("dup"),0);
            VALUE revert2autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
            VALUE revert2rules=rb_funcall(_rules,rb_intern("dup"),0);
            VALUE revert2autovar_11=rb_funcall(_autovar_11,rb_intern("dup"),0);
            VALUE revert2autovar_12=rb_funcall(_autovar_12,rb_intern("dup"),0);
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_4=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_4);
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lb__fa06,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_Detect_Switch_Char__do_rules_eq__le__ab16,1,bind2);
            it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_5acf,1,bind2);
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
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_11,rb_obj_class(ame_curobj2(ptr))))) {
                case 0/*Rule*/:
                    ;
                    int oldpos3=ptr->pos;
                    int cut3=0;
alt3_1:
                    ;
                    VALUE revert3autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
                    VALUE revert3autovar_9=rb_funcall(_autovar_9,rb_intern("dup"),0);
                    VALUE revert3autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
                    it=ptr->ary[ptr->pos];            ;
                    ptr->pos++;
                    _autovar_8=it;;
                    cstruct oldpass4=*ptr;
                    ptr->pos=ptr->len=0;
                    ptr->ary=NULL;
                    ame_setsrc2(self,_autovar_8);
                    it=Detect_Switch_Char_root(self );
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
                    _autovar_8=revert3autovar_8;
                    _autovar_9=revert3autovar_9;
                    _autovar_10=revert3autovar_10;
                    goto alt3_2;
accept6:
                    ;

                    ;
                    goto accept5;
alt3_2:
                    ptr->pos=oldpos3;
                    stop2=1;
                    ;
                    goto accept7;
revert4:
                    ;
                    goto alt3_3;
accept7:
                    ;

                    ;
                    goto accept5;
alt3_3:
                    ptr->pos=oldpos3;
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
            it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_a719,1,bind2);
            _rules=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind2);
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
            _autovar_2=revert2autovar_2;
            _autovar_4=revert2autovar_4;
            _autovar_5=revert2autovar_5;
            _autovar_6=revert2autovar_6;
            _autovar_7=revert2autovar_7;
            _autovar_8=revert2autovar_8;
            _autovar_9=revert2autovar_9;
            _autovar_10=revert2autovar_10;
            _rules=revert2rules;
            _autovar_11=revert2autovar_11;
            _autovar_12=revert2autovar_12;
            goto alt2_2;
accept4:
            ;

            ;
            goto accept3;
alt2_2:
            ptr->pos=oldpos2;
            VALUE revert5autovar_12=rb_funcall(_autovar_12,rb_intern("dup"),0);
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
            _autovar_12=revert5autovar_12;
            goto alt2_3;
accept8:
            ;

            ;
            goto accept3;
alt2_3:
            ptr->pos=oldpos2;
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
            _autovar_2=revert1autovar_2;
            _autovar_4=revert1autovar_4;
            _autovar_5=revert1autovar_5;
            _autovar_6=revert1autovar_6;
            _autovar_7=revert1autovar_7;
            _autovar_8=revert1autovar_8;
            _autovar_9=revert1autovar_9;
            _autovar_10=revert1autovar_10;
            _rules=revert1rules;
            _autovar_11=revert1autovar_11;
            _autovar_12=revert1autovar_12;
            goto alt1_2;
accept2:
            ;

            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            stop1=1;
            ;
            goto accept9;
revert6:
            ;
            goto alt1_3;
accept9:
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
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            VALUE revert7autovar_12=rb_funcall(_autovar_12,rb_intern("dup"),0);
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
            _autovar_12=revert7autovar_12;
            goto alt4_2;
accept11:
            ;

            ;
            goto accept10;
alt4_2:
            ptr->pos=oldpos4;
            stop1=1;
            ;
            goto accept12;
revert8:
            ;
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
        }
    }
    it=_autovar_3;
    __result=it;;
    _autovar_13=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_13);
    it=rb_funcall(self,sy_Detect_Switch_Char__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_13=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE Detect_Switch_Char_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=Detect_Switch_Char_traverse(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    __result=it;;

fail:
    return it;
}
VALUE Detect_Switch_Char_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars=Qnil,_ivars=Qnil,_autovar=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if (ptr->mem==NULL) {
        ptr->mem=mem_Detect_Switch_Char;
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
    it=rb_funcall(self,sy_Detect_Switch_Char__lp_src_dot_cla_2024,1,bind2);
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
        VALUE revert1nvars=rb_funcall(_nvars,rb_intern("dup"),0);
        VALUE revert1it=rb_funcall(_it,rb_intern("dup"),0);
        it=Detect_Switch_Char_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto revert1;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__sp__6af0,1,bind2);
        _nvars=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
        ;
        goto accept2;
revert1:
        ;
        _nvars=revert1nvars;
        _it=revert1it;
        goto alt1_2;
accept2:
        ;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept3;
revert2:
        ;
        goto alt1_3;
accept3:
        ;

        ;
        goto accept1;
alt1_3:
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
    it=rb_funcall(self,sy_Detect_Switch_Char_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;
memo_fail:
    memo_add(ptr->mem,119,ptr->src,oldpos,it,ptr->pos,time_old);
    return it;

fail:
    return it;
}
VALUE Detect_Switch_Char_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ar=Qnil,_it=Qnil,_autovar_4=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_6,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_7,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
        case 1/*Or*/:
        case 2/*Seq*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE revert1_result=rb_funcall(__result,rb_intern("dup"),0);
            it=Detect_Switch_Char_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert1;
            }
            __result=it;;

            ;
            goto accept2;
revert1:
            ;
            __result=revert1_result;
            goto alt1_2;
accept2:
            ;

            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            VALUE revert2_result=rb_funcall(__result,rb_intern("dup"),0);
            VALUE revert2autovar=rb_funcall(_autovar,rb_intern("dup"),0);
            VALUE revert2autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Detect_Switch_Char_traverse(self );
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
            __result=revert2_result;
            _autovar=revert2autovar;
            _autovar_2=revert2autovar_2;
            goto alt1_3;
accept3:
            ;

            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            VALUE revert3_result=rb_funcall(__result,rb_intern("dup"),0);
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
            __result=revert3_result;
            goto alt1_4;
accept4:
            ;

            ;
            goto accept1;
alt1_4:
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
            VALUE revert4_result=rb_funcall(__result,rb_intern("dup"),0);
            VALUE revert4autovar=rb_funcall(_autovar,rb_intern("dup"),0);
            VALUE revert4autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Detect_Switch_Char_traverse(self );
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
            __result=revert4_result;
            _autovar=revert4autovar;
            _autovar_2=revert4autovar_2;
            goto alt2_2;
accept6:
            ;

            ;
            goto accept5;
alt2_2:
            ptr->pos=oldpos2;
            VALUE revert5_result=rb_funcall(__result,rb_intern("dup"),0);
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
            __result=revert5_result;
            goto alt2_3;
accept7:
            ;

            ;
            goto accept5;
alt2_3:
            ptr->pos=oldpos2;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_8,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
        case 1/*Or*/:
        case 2/*Seq*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            VALUE revert6_result=rb_funcall(__result,rb_intern("dup"),0);
            it=Detect_Switch_Char_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert6;
            }
            __result=it;;

            ;
            goto accept9;
revert6:
            ;
            __result=revert6_result;
            goto alt3_2;
accept9:
            ;

            ;
            goto accept8;
alt3_2:
            ptr->pos=oldpos3;
            VALUE revert7_result=rb_funcall(__result,rb_intern("dup"),0);
            VALUE revert7autovar_3=rb_funcall(_autovar_3,rb_intern("dup"),0);
            VALUE revert7ar=rb_funcall(_ar,rb_intern("dup"),0);
            VALUE revert7it=rb_funcall(_it,rb_intern("dup"),0);
            VALUE revert7autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
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
                VALUE revert8ar=rb_funcall(_ar,rb_intern("dup"),0);
                VALUE revert8it=rb_funcall(_it,rb_intern("dup"),0);
                it=Detect_Switch_Char_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert8;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept12;
revert8:
                ;
                _ar=revert8ar;
                _it=revert8it;
                goto alt4_2;
accept12:
                ;

                ;
                goto accept11;
alt4_2:
                ptr->pos=oldpos4;
                stop1=1;
                ;
                goto accept13;
revert9:
                ;
                goto alt4_3;
accept13:
                ;

                ;
                goto accept11;
alt4_3:
                ptr->pos=oldpos4;
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
            __result=revert7_result;
            _autovar_3=revert7autovar_3;
            _ar=revert7ar;
            _it=revert7it;
            _autovar_4=revert7autovar_4;
            goto alt3_3;
accept10:
            ;

            ;
            goto accept8;
alt3_3:
            ptr->pos=oldpos3;
            VALUE revert10_result=rb_funcall(__result,rb_intern("dup"),0);
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
            __result=revert10_result;
            goto alt3_4;
accept14:
            ;

            ;
            goto accept8;
alt3_4:
            ptr->pos=oldpos3;
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
            ;
            VALUE revert11_result=rb_funcall(__result,rb_intern("dup"),0);
            VALUE revert11autovar_3=rb_funcall(_autovar_3,rb_intern("dup"),0);
            VALUE revert11ar=rb_funcall(_ar,rb_intern("dup"),0);
            VALUE revert11it=rb_funcall(_it,rb_intern("dup"),0);
            VALUE revert11autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
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
                VALUE revert12ar=rb_funcall(_ar,rb_intern("dup"),0);
                VALUE revert12it=rb_funcall(_it,rb_intern("dup"),0);
                it=Detect_Switch_Char_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert12;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept18;
revert12:
                ;
                _ar=revert12ar;
                _it=revert12it;
                goto alt6_2;
accept18:
                ;

                ;
                goto accept17;
alt6_2:
                ptr->pos=oldpos6;
                stop2=1;
                ;
                goto accept19;
revert13:
                ;
                goto alt6_3;
accept19:
                ;

                ;
                goto accept17;
alt6_3:
                ptr->pos=oldpos6;
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
            __result=revert11_result;
            _autovar_3=revert11autovar_3;
            _ar=revert11ar;
            _it=revert11it;
            _autovar_4=revert11autovar_4;
            goto alt5_2;
accept16:
            ;

            ;
            goto accept15;
alt5_2:
            ptr->pos=oldpos5;
            VALUE revert14_result=rb_funcall(__result,rb_intern("dup"),0);
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
            __result=revert14_result;
            goto alt5_3;
accept20:
            ;

            ;
            goto accept15;
alt5_3:
            ptr->pos=oldpos5;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_9,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
        case 1/*Or*/:
        case 2/*Seq*/:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            VALUE revert15_result=rb_funcall(__result,rb_intern("dup"),0);
            it=Detect_Switch_Char_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert15;
            }
            __result=it;;

            ;
            goto accept22;
revert15:
            ;
            __result=revert15_result;
            goto alt7_2;
accept22:
            ;

            ;
            goto accept21;
alt7_2:
            ptr->pos=oldpos7;
            VALUE revert16_result=rb_funcall(__result,rb_intern("dup"),0);
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
            __result=revert16_result;
            goto alt7_3;
accept23:
            ;

            ;
            goto accept21;
alt7_3:
            ptr->pos=oldpos7;
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
VALUE Detect_Switch_Char_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_firs=Qnil,_autovar_7=Qnil,__result=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,_str=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,_autovar_15=Qnil,_autovar_16=Qnil,_autovar_17=Qnil,_autovar_18=Qnil,_autovar_19=Qnil,_items=Qnil,_aswitch=Qnil,_autovar_20=Qnil,_autovar_21=Qnil,_autovar_22=Qnil,_list=Qnil,_autovar_23=Qnil,_ary=Qnil,_newlist=Qnil,_lat=Qnil,__result_2=Qnil,_n=Qnil,_cls=Qnil,_autovar_24=Qnil,_autovar_25=Qnil,_autovar_26=Qnil,_autovar_27=Qnil,_autovar_28=Qnil,_autovar_29=Qnil,_autovar_30=Qnil,_prefix=Qnil,_s=Qnil,__result_3=Qnil,_autovar_31=Qnil,_ary_2=Qnil,_autovar_32=Qnil,_autovar_33=Qnil,_rest=Qnil,_cls_2=Qnil,_autovar_34=Qnil,_autovar_35=Qnil,_autovar_36=Qnil,_autovar_37=Qnil,_autovar_38=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_1,rb_obj_class(ame_curobj2(ptr))))) {
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
        VALUE revert1autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        VALUE revert1autovar_5=rb_funcall(_autovar_5,rb_intern("dup"),0);
        VALUE revert1autovar_6=rb_funcall(_autovar_6,rb_intern("dup"),0);
        VALUE revert1firs=rb_funcall(_firs,rb_intern("dup"),0);
        VALUE revert1autovar_7=rb_funcall(_autovar_7,rb_intern("dup"),0);
        VALUE revert1_result=rb_funcall(__result,rb_intern("dup"),0);
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
        case UC(0) ... 'q':
            ;
        case 's' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass2;
            }
            break;
        case 'r' ... 'r':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
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
        ptr->pos=ptr->len;
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
            goto pass1;
        }
success3:
        *ptr=oldpass3;
        it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2);
        _firs=it;;
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_df23,1,bind2);
        _firs=bind_aget(bind2,1);;
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
        _autovar_4=revert1autovar_4;
        _autovar_5=revert1autovar_5;
        _autovar_6=revert1autovar_6;
        _firs=revert1firs;
        _autovar_7=revert1autovar_7;
        __result=revert1_result;
        goto alt1_2;
accept2:
        ;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        VALUE revert2firs=rb_funcall(_firs,rb_intern("dup"),0);
        VALUE revert2_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert2autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert2autovar_9=rb_funcall(_autovar_9,rb_intern("dup"),0);
        VALUE revert2autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert2str=rb_funcall(_str,rb_intern("dup"),0);
        VALUE revert2autovar_11=rb_funcall(_autovar_11,rb_intern("dup"),0);
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
        case UC(0) ... '^':
            ;
        case '`' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass5;
            }
            break;
        case '_' ... '_':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_3,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*CAct*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_10=it;;
            break;
        case 1/*Object*/:
            ;
            if (1) {
                it=failobj;
                goto pass4;
            }
            break;
        }
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_10);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass6;
        }
        _str=it;;
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
            goto pass4;
        }
success6:
        *ptr=oldpass6;
        it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2);
        _firs=it;;
        bind_aset(bind2,1,_firs);
        bind_aset(bind2,2,_str);
        it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_78a6,1,bind2);
        _firs=bind_aget(bind2,1);;
        _str=bind_aget(bind2,2);;
        _autovar_11=it;;
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
        it=_autovar_11;
        __result=it;;

        ;
        goto accept3;
revert2:
        ;
        _firs=revert2firs;
        __result=revert2_result;
        _autovar_8=revert2autovar_8;
        _autovar_9=revert2autovar_9;
        _autovar_10=revert2autovar_10;
        _str=revert2str;
        _autovar_11=revert2autovar_11;
        goto alt1_3;
accept3:
        ;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        VALUE revert3_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert3autovar_12=rb_funcall(_autovar_12,rb_intern("dup"),0);
        VALUE revert3autovar_13=rb_funcall(_autovar_13,rb_intern("dup"),0);
        VALUE revert3autovar_14=rb_funcall(_autovar_14,rb_intern("dup"),0);
        it=_autovar_3;
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
        _autovar_13=it;;
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_13);
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
            goto pass7;
        }
success8:
        *ptr=oldpass8;
        it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind2);
        _autovar_14=it;;
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
            goto revert3;
        }
success7:
        *ptr=oldpass7;
        it=_autovar_14;
        __result=it;;

        ;
        goto accept4;
revert3:
        ;
        __result=revert3_result;
        _autovar_12=revert3autovar_12;
        _autovar_13=revert3autovar_13;
        _autovar_14=revert3autovar_14;
        goto alt1_4;
accept4:
        ;

        ;
        goto accept1;
alt1_4:
        ptr->pos=oldpos1;
        VALUE revert4firs=rb_funcall(_firs,rb_intern("dup"),0);
        VALUE revert4_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert4autovar_15=rb_funcall(_autovar_15,rb_intern("dup"),0);
        VALUE revert4autovar_16=rb_funcall(_autovar_16,rb_intern("dup"),0);
        it=_autovar_3;
        _autovar_15=it;;
        cstruct oldpass9=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_15);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2);
        _firs=it;;
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);
        _firs=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass9;
        };
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_7c35,1,bind2);
        _firs=bind_aget(bind2,1);;
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
            goto revert4;
        }
success9:
        *ptr=oldpass9;
        it=_autovar_16;
        __result=it;;

        ;
        goto accept5;
revert4:
        ;
        _firs=revert4firs;
        __result=revert4_result;
        _autovar_15=revert4autovar_15;
        _autovar_16=revert4autovar_16;
        goto alt1_5;
accept5:
        ;

        ;
        goto accept1;
alt1_5:
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
        _autovar_17=it;;
        cstruct oldpass10=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_17);
        it=rb_ary_new3(0);
        _autovar_18=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE revert5autovar_19=rb_funcall(_autovar_19,rb_intern("dup"),0);
            it=Detect_Switch_Char_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto revert5;
            }
            _autovar_19=it;;
            it=AmethystCore_append(self,_autovar_18,_autovar_19);
            ;
            goto accept7;
revert5:
            ;
            _autovar_19=revert5autovar_19;
            goto alt2_2;
accept7:
            ;

            ;
            goto accept6;
alt2_2:
            ptr->pos=oldpos2;
            stop1=1;
            ;
            goto accept8;
revert6:
            ;
            goto alt2_3;
accept8:
            ;

            ;
            goto accept6;
alt2_3:
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto pass10;
            };
accept6:
            ;
        }
        it=_autovar_18;
        _items=it;;
        it=Qfalse;
        _aswitch=it;;
        bind_aset(bind2,1,_items);
        bind_aset(bind2,2,_aswitch);
        it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__bb04,1,bind2);
        _items=bind_aget(bind2,1);;
        _aswitch=bind_aget(bind2,2);;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        VALUE revert7items=rb_funcall(_items,rb_intern("dup"),0);
        VALUE revert7aswitch=rb_funcall(_aswitch,rb_intern("dup"),0);
        VALUE revert7autovar_20=rb_funcall(_autovar_20,rb_intern("dup"),0);
        bind_aset(bind2,1,_aswitch);
        it=rb_funcall(self,sy_Detect_Switch_Char__lp_2,1,bind2);
        _aswitch=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto revert7;
        };
        bind_aset(bind2,1,_items);
        it=rb_funcall(self,sy_Detect_Switch_Char_Or_lb__ti_bind_d486,1,bind2);
        _items=bind_aget(bind2,1);;
        _autovar_20=it;;

        ;
        goto accept10;
revert7:
        ;
        _items=revert7items;
        _aswitch=revert7aswitch;
        _autovar_20=revert7autovar_20;
        goto alt3_2;
accept10:
        ;

        ;
        goto accept9;
alt3_2:
        ptr->pos=oldpos3;
        VALUE revert8autovar_20=rb_funcall(_autovar_20,rb_intern("dup"),0);
        VALUE revert8autovar_21=rb_funcall(_autovar_21,rb_intern("dup"),0);
        VALUE revert8autovar_22=rb_funcall(_autovar_22,rb_intern("dup"),0);
        VALUE revert8list=rb_funcall(_list,rb_intern("dup"),0);
        VALUE revert8autovar_23=rb_funcall(_autovar_23,rb_intern("dup"),0);
        VALUE revert8ary=rb_funcall(_ary,rb_intern("dup"),0);
        VALUE revert8newlist=rb_funcall(_newlist,rb_intern("dup"),0);
        VALUE revert8lat=rb_funcall(_lat,rb_intern("dup"),0);
        VALUE revert8_result_2=rb_funcall(__result_2,rb_intern("dup"),0);
        VALUE revert8n=rb_funcall(_n,rb_intern("dup"),0);
        VALUE revert8cls=rb_funcall(_cls,rb_intern("dup"),0);
        VALUE revert8autovar_24=rb_funcall(_autovar_24,rb_intern("dup"),0);
        VALUE revert8autovar_25=rb_funcall(_autovar_25,rb_intern("dup"),0);
        it=_items;
        _autovar_21=it;;
        cstruct oldpass11=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_21;
        ptr->len=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass11;
        }
        _autovar_22=it;;
        cstruct oldpass12=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_22);
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_4,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Switch_Char*/:
            ;
            it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind2);
            _list=it;;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            VALUE revert9list=rb_funcall(_list,rb_intern("dup"),0);
            VALUE revert9autovar_23=rb_funcall(_autovar_23,rb_intern("dup"),0);
            VALUE revert9ary=rb_funcall(_ary,rb_intern("dup"),0);
            VALUE revert9newlist=rb_funcall(_newlist,rb_intern("dup"),0);
            VALUE revert9lat=rb_funcall(_lat,rb_intern("dup"),0);
            VALUE revert9_result_2=rb_funcall(__result_2,rb_intern("dup"),0);
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_23=it;;
            cstruct oldpass13=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_23);
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2);
            _ary=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass13;
            }
            goto success13;
pass13:
            *ptr=oldpass13;
            if (1) {
                it=failobj;
                goto revert9;
            }
success13:
            *ptr=oldpass13;
            it=rb_ary_new3(0);
            _newlist=it;;
            it=c_Lattice_Char;
            _lat=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_ary);
            bind_aset(bind2,3,_newlist);
            bind_aset(bind2,4,_lat);
            it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__642a,1,bind2);
            _list=bind_aget(bind2,1);;
            _ary=bind_aget(bind2,2);;
            _newlist=bind_aget(bind2,3);;
            _lat=bind_aget(bind2,4);;
            it=c_Switch_Char;
            arg0=it;
            it=_lat;
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
            _list=revert9list;
            _autovar_23=revert9autovar_23;
            _ary=revert9ary;
            _newlist=revert9newlist;
            _lat=revert9lat;
            __result_2=revert9_result_2;
            goto alt4_2;
accept13:
            ;

            ;
            goto accept12;
alt4_2:
            ptr->pos=oldpos4;
            VALUE revert10list=rb_funcall(_list,rb_intern("dup"),0);
            VALUE revert10newlist=rb_funcall(_newlist,rb_intern("dup"),0);
            VALUE revert10_result_2=rb_funcall(__result_2,rb_intern("dup"),0);
            VALUE revert10n=rb_funcall(_n,rb_intern("dup"),0);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert10;
            }
            _n=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_n);
            it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);
            _list=bind_aget(bind2,1);;
            _n=bind_aget(bind2,2);;
            _newlist=it;;
            it=c_Switch_Char;
            arg0=it;
            it=c_Lattice_Char;
            arg1=it;
            it=_newlist;
            arg2=it;
            it=Detect_First_combine_or(self ,arg0,arg1,arg2);
            if (it==failobj) {
                it=failobj;
                goto revert10;
            }
            __result_2=it;;

            ;
            goto accept14;
revert10:
            ;
            _list=revert10list;
            _newlist=revert10newlist;
            __result_2=revert10_result_2;
            _n=revert10n;
            goto alt4_3;
accept14:
            ;

            ;
            goto accept12;
alt4_3:
            ptr->pos=oldpos4;
            VALUE revert11list=rb_funcall(_list,rb_intern("dup"),0);
            VALUE revert11_result_2=rb_funcall(__result_2,rb_intern("dup"),0);
            VALUE revert11cls=rb_funcall(_cls,rb_intern("dup"),0);
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto revert11;
            }
            it=c_Switch_Char;
            _cls=it;;
            bind_aset(bind2,1,_cls);
            bind_aset(bind2,2,_list);
            it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lb__0f18,1,bind2);
            _cls=bind_aget(bind2,1);;
            _list=bind_aget(bind2,2);;
            __result_2=it;;

            ;
            goto accept15;
revert11:
            ;
            _list=revert11list;
            __result_2=revert11_result_2;
            _cls=revert11cls;
            goto alt4_4;
accept15:
            ;

            ;
            goto accept12;
alt4_4:
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto pass12;
            };
accept12:
            ;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass12;
            }
            it=__result_2;
            _autovar_24=it;;
            break;
        case 1/*Object*/:
            ;
            it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind2);
            _list=it;;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            VALUE revert12list=rb_funcall(_list,rb_intern("dup"),0);
            VALUE revert12newlist=rb_funcall(_newlist,rb_intern("dup"),0);
            VALUE revert12_result_2=rb_funcall(__result_2,rb_intern("dup"),0);
            VALUE revert12n=rb_funcall(_n,rb_intern("dup"),0);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert12;
            }
            _n=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_n);
            it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);
            _list=bind_aget(bind2,1);;
            _n=bind_aget(bind2,2);;
            _newlist=it;;
            it=c_Switch_Char;
            arg0=it;
            it=c_Lattice_Char;
            arg1=it;
            it=_newlist;
            arg2=it;
            it=Detect_First_combine_or(self ,arg0,arg1,arg2);
            if (it==failobj) {
                it=failobj;
                goto revert12;
            }
            __result_2=it;;

            ;
            goto accept17;
revert12:
            ;
            _list=revert12list;
            _newlist=revert12newlist;
            __result_2=revert12_result_2;
            _n=revert12n;
            goto alt5_2;
accept17:
            ;

            ;
            goto accept16;
alt5_2:
            ptr->pos=oldpos5;
            VALUE revert13list=rb_funcall(_list,rb_intern("dup"),0);
            VALUE revert13_result_2=rb_funcall(__result_2,rb_intern("dup"),0);
            VALUE revert13cls=rb_funcall(_cls,rb_intern("dup"),0);
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto revert13;
            }
            it=c_Switch_Char;
            _cls=it;;
            bind_aset(bind2,1,_cls);
            bind_aset(bind2,2,_list);
            it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lb__0f18,1,bind2);
            _cls=bind_aget(bind2,1);;
            _list=bind_aget(bind2,2);;
            __result_2=it;;

            ;
            goto accept18;
revert13:
            ;
            _list=revert13list;
            __result_2=revert13_result_2;
            _cls=revert13cls;
            goto alt5_3;
accept18:
            ;

            ;
            goto accept16;
alt5_3:
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto pass12;
            };
accept16:
            ;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass12;
            }
            it=__result_2;
            _autovar_24=it;;
            break;
        }
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
        it=_autovar_24;
        _autovar_25=it;;

        goto success11;
pass11:
        *ptr=oldpass11;
        if (1) {
            it=failobj;
            goto revert8;
        }
success11:
        *ptr=oldpass11;
        it=_autovar_25;
        _autovar_20=it;;

        ;
        goto accept11;
revert8:
        ;
        _autovar_20=revert8autovar_20;
        _autovar_21=revert8autovar_21;
        _autovar_22=revert8autovar_22;
        _list=revert8list;
        _autovar_23=revert8autovar_23;
        _ary=revert8ary;
        _newlist=revert8newlist;
        _lat=revert8lat;
        __result_2=revert8_result_2;
        _n=revert8n;
        _cls=revert8cls;
        _autovar_24=revert8autovar_24;
        _autovar_25=revert8autovar_25;
        goto alt3_3;
accept11:
        ;

        ;
        goto accept9;
alt3_3:
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto pass10;
        };
accept9:
        ;
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
            goto fail;
        }
success10:
        *ptr=oldpass10;
        it=_autovar_20;
        __result=it;;
        break;
    case 2/*Seq*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_26=it;;
        cstruct oldpass14=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_26);
        it=rb_ary_new3(0);
        _autovar_27=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            VALUE revert14autovar_28=rb_funcall(_autovar_28,rb_intern("dup"),0);
            it=Detect_Switch_Char_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto revert14;
            }
            _autovar_28=it;;
            it=AmethystCore_append(self,_autovar_27,_autovar_28);
            ;
            goto accept20;
revert14:
            ;
            _autovar_28=revert14autovar_28;
            goto alt6_2;
accept20:
            ;

            ;
            goto accept19;
alt6_2:
            ptr->pos=oldpos6;
            stop2=1;
            ;
            goto accept21;
revert15:
            ;
            goto alt6_3;
accept21:
            ;

            ;
            goto accept19;
alt6_3:
            ptr->pos=oldpos6;
            if (1) {
                it=failobj;
                goto pass14;
            };
accept19:
            ;
        }
        it=_autovar_27;
        _autovar_29=it;;
        cstruct oldpass15=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_29;
        ptr->len=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass15;
        }
        _autovar_30=it;;
        cstruct oldpass16=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_30);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(255):
            ;
            it=rb_ary_new3(0);
            _prefix=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... UC(255):
                ;
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_5,rb_obj_class(ame_curobj2(ptr))))) {
                case 0/*Switch_Char*/:
                    ;
                    int oldpos7=ptr->pos;
                    int cut7=0;
alt7_1:
                    ;
                    VALUE revert16prefix=rb_funcall(_prefix,rb_intern("dup"),0);
                    VALUE revert16s=rb_funcall(_s,rb_intern("dup"),0);
                    VALUE revert16_result_3=rb_funcall(__result_3,rb_intern("dup"),0);
                    it=Detect_First_must_empty(self );
                    if (it==failobj) {
                        it=failobj;
                        goto revert16;
                    }
                    _s=it;;
                    it=c_Switch_Char;
                    arg0=it;
                    bind_aset(bind2,1,_prefix);
                    bind_aset(bind2,2,_s);
                    it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);
                    _prefix=bind_aget(bind2,1);;
                    _s=bind_aget(bind2,2);;
                    arg1=it;
                    it=Detect_First_combine_seq(self ,arg0,arg1);
                    if (it==failobj) {
                        it=failobj;
                        goto revert16;
                    }
                    __result_3=it;;

                    ;
                    goto accept23;
revert16:
                    ;
                    _prefix=revert16prefix;
                    _s=revert16s;
                    __result_3=revert16_result_3;
                    goto alt7_2;
accept23:
                    ;

                    ;
                    goto accept22;
alt7_2:
                    ptr->pos=oldpos7;
                    VALUE revert17prefix=rb_funcall(_prefix,rb_intern("dup"),0);
                    VALUE revert17_result_3=rb_funcall(__result_3,rb_intern("dup"),0);
                    VALUE revert17autovar_31=rb_funcall(_autovar_31,rb_intern("dup"),0);
                    VALUE revert17ary_2=rb_funcall(_ary_2,rb_intern("dup"),0);
                    VALUE revert17autovar_32=rb_funcall(_autovar_32,rb_intern("dup"),0);
                    VALUE revert17autovar_33=rb_funcall(_autovar_33,rb_intern("dup"),0);
                    VALUE revert17rest=rb_funcall(_rest,rb_intern("dup"),0);
                    VALUE revert17cls_2=rb_funcall(_cls_2,rb_intern("dup"),0);
                    it=ptr->ary[ptr->pos];            ;
                    ptr->pos++;
                    _autovar_31=it;;
                    cstruct oldpass17=*ptr;
                    ptr->pos=ptr->len=0;
                    ptr->ary=NULL;
                    ame_setsrc2(self,_autovar_31);
                    ptr->pos=ptr->len;
                    it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2);
                    _ary_2=it;;
                    it=Qnil;
                    if (ptr->pos<ptr->len) {
                        it=failobj;
                        goto pass17;
                    }
                    goto success17;
pass17:
                    *ptr=oldpass17;
                    if (1) {
                        it=failobj;
                        goto revert17;
                    }
success17:
                    *ptr=oldpass17;
                    it=rb_ary_new3(0);
                    _autovar_32=it;;
                    int stop3=0;
                    while(!stop3) {
                        int oldpos8=ptr->pos;
                        int cut8=0;
alt8_1:
                        ;
                        VALUE revert18autovar_33=rb_funcall(_autovar_33,rb_intern("dup"),0);
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto revert18;
                        }
                        _autovar_33=it;;
                        it=AmethystCore_append(self,_autovar_32,_autovar_33);
                        ;
                        goto accept26;
revert18:
                        ;
                        _autovar_33=revert18autovar_33;
                        goto alt8_2;
accept26:
                        ;

                        ;
                        goto accept25;
alt8_2:
                        ptr->pos=oldpos8;
                        stop3=1;
                        ;
                        goto accept27;
revert19:
                        ;
                        goto alt8_3;
accept27:
                        ;

                        ;
                        goto accept25;
alt8_3:
                        ptr->pos=oldpos8;
                        if (1) {
                            it=failobj;
                            goto revert17;
                        };
accept25:
                        ;
                    }
                    it=_autovar_32;
                    _rest=it;;
                    it=c_Switch_Char;
                    _cls_2=it;;
                    bind_aset(bind2,1,_cls_2);
                    bind_aset(bind2,2,_ary_2);
                    bind_aset(bind2,3,_prefix);
                    bind_aset(bind2,4,_rest);
                    it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lb__75a5,1,bind2);
                    _cls_2=bind_aget(bind2,1);;
                    _ary_2=bind_aget(bind2,2);;
                    _prefix=bind_aget(bind2,3);;
                    _rest=bind_aget(bind2,4);;
                    __result_3=it;;

                    ;
                    goto accept24;
revert17:
                    ;
                    _prefix=revert17prefix;
                    __result_3=revert17_result_3;
                    _autovar_31=revert17autovar_31;
                    _ary_2=revert17ary_2;
                    _autovar_32=revert17autovar_32;
                    _autovar_33=revert17autovar_33;
                    _rest=revert17rest;
                    _cls_2=revert17cls_2;
                    goto alt7_3;
accept24:
                    ;

                    ;
                    goto accept22;
alt7_3:
                    ptr->pos=oldpos7;
                    VALUE revert20prefix=rb_funcall(_prefix,rb_intern("dup"),0);
                    VALUE revert20_result_3=rb_funcall(__result_3,rb_intern("dup"),0);
                    VALUE revert20ary_2=rb_funcall(_ary_2,rb_intern("dup"),0);
                    VALUE revert20autovar_34=rb_funcall(_autovar_34,rb_intern("dup"),0);
                    VALUE revert20autovar_35=rb_funcall(_autovar_35,rb_intern("dup"),0);
                    it=rb_ary_new3(0);
                    _autovar_34=it;;
                    int stop4=0;
                    while(!stop4) {
                        int oldpos9=ptr->pos;
                        int cut9=0;
alt9_1:
                        ;
                        VALUE revert21autovar_35=rb_funcall(_autovar_35,rb_intern("dup"),0);
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto revert21;
                        }
                        _autovar_35=it;;
                        it=AmethystCore_append(self,_autovar_34,_autovar_35);
                        ;
                        goto accept30;
revert21:
                        ;
                        _autovar_35=revert21autovar_35;
                        goto alt9_2;
accept30:
                        ;

                        ;
                        goto accept29;
alt9_2:
                        ptr->pos=oldpos9;
                        stop4=1;
                        ;
                        goto accept31;
revert22:
                        ;
                        goto alt9_3;
accept31:
                        ;

                        ;
                        goto accept29;
alt9_3:
                        ptr->pos=oldpos9;
                        if (1) {
                            it=failobj;
                            goto revert20;
                        };
accept29:
                        ;
                    }
                    it=_autovar_34;
                    _ary_2=it;;
                    bind_aset(bind2,1,_prefix);
                    bind_aset(bind2,2,_ary_2);
                    it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321,1,bind2);
                    _prefix=bind_aget(bind2,1);;
                    _ary_2=bind_aget(bind2,2);;
                    __result_3=it;;

                    ;
                    goto accept28;
revert20:
                    ;
                    _prefix=revert20prefix;
                    __result_3=revert20_result_3;
                    _ary_2=revert20ary_2;
                    _autovar_34=revert20autovar_34;
                    _autovar_35=revert20autovar_35;
                    goto alt7_4;
accept28:
                    ;

                    ;
                    goto accept22;
alt7_4:
                    ptr->pos=oldpos7;
                    if (1) {
                        it=failobj;
                        goto pass16;
                    };
accept22:
                    ;
                    break;
                case 1/*Object*/:
                    ;
                    int oldpos10=ptr->pos;
                    int cut10=0;
alt10_1:
                    ;
                    VALUE revert23prefix=rb_funcall(_prefix,rb_intern("dup"),0);
                    VALUE revert23s=rb_funcall(_s,rb_intern("dup"),0);
                    VALUE revert23_result_3=rb_funcall(__result_3,rb_intern("dup"),0);
                    it=Detect_First_must_empty(self );
                    if (it==failobj) {
                        it=failobj;
                        goto revert23;
                    }
                    _s=it;;
                    it=c_Switch_Char;
                    arg0=it;
                    bind_aset(bind2,1,_prefix);
                    bind_aset(bind2,2,_s);
                    it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);
                    _prefix=bind_aget(bind2,1);;
                    _s=bind_aget(bind2,2);;
                    arg1=it;
                    it=Detect_First_combine_seq(self ,arg0,arg1);
                    if (it==failobj) {
                        it=failobj;
                        goto revert23;
                    }
                    __result_3=it;;

                    ;
                    goto accept33;
revert23:
                    ;
                    _prefix=revert23prefix;
                    _s=revert23s;
                    __result_3=revert23_result_3;
                    goto alt10_2;
accept33:
                    ;

                    ;
                    goto accept32;
alt10_2:
                    ptr->pos=oldpos10;
                    VALUE revert24prefix=rb_funcall(_prefix,rb_intern("dup"),0);
                    VALUE revert24_result_3=rb_funcall(__result_3,rb_intern("dup"),0);
                    VALUE revert24ary_2=rb_funcall(_ary_2,rb_intern("dup"),0);
                    VALUE revert24autovar_34=rb_funcall(_autovar_34,rb_intern("dup"),0);
                    VALUE revert24autovar_35=rb_funcall(_autovar_35,rb_intern("dup"),0);
                    it=rb_ary_new3(0);
                    _autovar_34=it;;
                    int stop5=0;
                    while(!stop5) {
                        int oldpos11=ptr->pos;
                        int cut11=0;
alt11_1:
                        ;
                        VALUE revert25autovar_35=rb_funcall(_autovar_35,rb_intern("dup"),0);
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto revert25;
                        }
                        _autovar_35=it;;
                        it=AmethystCore_append(self,_autovar_34,_autovar_35);
                        ;
                        goto accept36;
revert25:
                        ;
                        _autovar_35=revert25autovar_35;
                        goto alt11_2;
accept36:
                        ;

                        ;
                        goto accept35;
alt11_2:
                        ptr->pos=oldpos11;
                        stop5=1;
                        ;
                        goto accept37;
revert26:
                        ;
                        goto alt11_3;
accept37:
                        ;

                        ;
                        goto accept35;
alt11_3:
                        ptr->pos=oldpos11;
                        if (1) {
                            it=failobj;
                            goto revert24;
                        };
accept35:
                        ;
                    }
                    it=_autovar_34;
                    _ary_2=it;;
                    bind_aset(bind2,1,_prefix);
                    bind_aset(bind2,2,_ary_2);
                    it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321,1,bind2);
                    _prefix=bind_aget(bind2,1);;
                    _ary_2=bind_aget(bind2,2);;
                    __result_3=it;;

                    ;
                    goto accept34;
revert24:
                    ;
                    _prefix=revert24prefix;
                    __result_3=revert24_result_3;
                    _ary_2=revert24ary_2;
                    _autovar_34=revert24autovar_34;
                    _autovar_35=revert24autovar_35;
                    goto alt10_3;
accept34:
                    ;

                    ;
                    goto accept32;
alt10_3:
                    ptr->pos=oldpos10;
                    if (1) {
                        it=failobj;
                        goto pass16;
                    };
accept32:
                    ;
                    break;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass16;
            }
            it=__result_3;
            _autovar_36=it;;
            break;
        }
        goto success16;
pass16:
        *ptr=oldpass16;
        if (1) {
            it=failobj;
            goto pass15;
        }
success16:
        *ptr=oldpass16;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass15;
        }
        it=_autovar_36;
        _autovar_37=it;;

        goto success15;
pass15:
        *ptr=oldpass15;
        if (1) {
            it=failobj;
            goto pass14;
        }
success15:
        *ptr=oldpass15;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass14;
        }
        it=_autovar_37;
        _autovar_38=it;;

        goto success14;
pass14:
        *ptr=oldpass14;
        if (1) {
            it=failobj;
            goto fail;
        }
success14:
        *ptr=oldpass14;
        it=_autovar_38;
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
void Init_Detect_Switch_Char_c() {
    cls_Detect_Switch_Char=rb_define_class("Detect_Switch_Char",rb_const_get(rb_cObject,rb_intern("Detect_First")));
    failobj=rb_eval_string("FAIL");
    c_Lattice_Char=rb_const_get(rb_cObject, rb_intern("Lattice_Char"));
    rb_global_variable(&c_Lattice_Char);
    c_Switch_Char=rb_const_get(rb_cObject, rb_intern("Switch_Char"));
    rb_global_variable(&c_Switch_Char);
    mem_Detect_Switch_Char=memo_init();
    memo_val_Detect_Switch_Char=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,mem_Detect_Switch_Char);
    rb_global_variable(&memo_val_Detect_Switch_Char);
    rb_define_method(cls_Detect_Switch_Char,"profile_report",profile_report_Detect_Switch_Char,0);
    switchhash_Detect_Switch_Char_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_10);;
    switchhash_Detect_Switch_Char_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_11);;
    switchhash_Detect_Switch_Char_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_1);;
    switchhash_Detect_Switch_Char_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_2);;
    switchhash_Detect_Switch_Char_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_3);;
    switchhash_Detect_Switch_Char_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_4);;
    switchhash_Detect_Switch_Char_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_5);;
    switchhash_Detect_Switch_Char_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_6);;
    switchhash_Detect_Switch_Char_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_7);;
    switchhash_Detect_Switch_Char_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_8);;
    switchhash_Detect_Switch_Char_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_9);;
    sy_Detect_Switch_Char_Or_lb__ti_bind_d486=rb_intern("Detect_Switch_Char_Or_lb__ti_bind_d486");
    sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321=rb_intern("Detect_Switch_Char_Seq_lb__ti__lp_bi_a321");
    sy_Detect_Switch_Char__at__contex_5f56=rb_intern("Detect_Switch_Char__at__contex_5f56");
    sy_Detect_Switch_Char__at__contex_cdb3=rb_intern("Detect_Switch_Char__at__contex_cdb3");
    sy_Detect_Switch_Char__do_rules_eq__le__ab16=rb_intern("Detect_Switch_Char__do_rules_eq__le__ab16");
    sy_Detect_Switch_Char__lb__lb_Lattic_d322=rb_intern("Detect_Switch_Char__lb__lb_Lattic_d322");
    sy_Detect_Switch_Char__lp_2=rb_intern("Detect_Switch_Char__lp_2");
    sy_Detect_Switch_Char__lp_=rb_intern("Detect_Switch_Char__lp_");
    sy_Detect_Switch_Char__lp_src_dot_cla_2024=rb_intern("Detect_Switch_Char__lp_src_dot_cla_2024");
    sy_Detect_Switch_Char_bind_lb_1_rb__dot__642a=rb_intern("Detect_Switch_Char_bind_lb_1_rb__dot__642a");
    sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482=rb_intern("Detect_Switch_Char_bind_lb_1_rb__dot__a482");
    sy_Detect_Switch_Char_bind_lb_1_rb__dot__bb04=rb_intern("Detect_Switch_Char_bind_lb_1_rb__dot__bb04");
    sy_Detect_Switch_Char_bind_lb_1_rb__lb__0f18=rb_intern("Detect_Switch_Char_bind_lb_1_rb__lb__0f18");
    sy_Detect_Switch_Char_bind_lb_1_rb__lb__75a5=rb_intern("Detect_Switch_Char_bind_lb_1_rb__lb__75a5");
    sy_Detect_Switch_Char_bind_lb_1_rb__lb__fa06=rb_intern("Detect_Switch_Char_bind_lb_1_rb__lb__fa06");
    sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20=rb_intern("Detect_Switch_Char_bind_lb_1_rb__lt__7b20");
    sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651=rb_intern("Detect_Switch_Char_bind_lb_1_rb__pl__4651");
    sy_Detect_Switch_Char_bind_lb_1_rb__sp__6af0=rb_intern("Detect_Switch_Char_bind_lb_1_rb__sp__6af0");
    sy_Detect_Switch_Char_first_lp_sr_3298=rb_intern("Detect_Switch_Char_first_lp_sr_3298");
    sy_Detect_Switch_Char_if_sp_bind_lb__1bed=rb_intern("Detect_Switch_Char_if_sp_bind_lb__1bed");
    sy_Detect_Switch_Char_s_eq_Switch_78a6=rb_intern("Detect_Switch_Char_s_eq_Switch_78a6");
    sy_Detect_Switch_Char_s_eq_Switch_7c35=rb_intern("Detect_Switch_Char_s_eq_Switch_7c35");
    sy_Detect_Switch_Char_s_eq_Switch_df23=rb_intern("Detect_Switch_Char_s_eq_Switch_df23");
    sy_Detect_Switch_Char_src_25d9=rb_intern("Detect_Switch_Char_src_25d9");
    sy_Detect_Switch_Char_src_dot_ary_d5cf=rb_intern("Detect_Switch_Char_src_dot_ary_d5cf");
    sy_Detect_Switch_Char_src_dot_rule_5acf=rb_intern("Detect_Switch_Char_src_dot_rule_5acf");
    sy_Detect_Switch_Char_src_dot_rule_a719=rb_intern("Detect_Switch_Char_src_dot_rule_a719");
    rb_define_method(cls_Detect_Switch_Char,"itrans",Detect_Switch_Char_itrans,0);
    rb_define_method(cls_Detect_Switch_Char,"root",Detect_Switch_Char_root,0);
    rb_define_method(cls_Detect_Switch_Char,"traverse",Detect_Switch_Char_traverse,0);
    rb_define_method(cls_Detect_Switch_Char,"traverse_item",Detect_Switch_Char_traverse_item,0);
    rb_define_method(cls_Detect_Switch_Char,"visit",Detect_Switch_Char_visit,0);
}
