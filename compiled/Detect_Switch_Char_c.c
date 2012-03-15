#include "cthyst.h"
#include "memo.c"
VALUE cls_Detect_Switch_Char;
VALUE AmethystCore_anything(VALUE self );
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
static VALUE sy__Or_lb__ti_bind_d486;
static VALUE sy__Seq_lb__ti__lp_bi_a321;
static VALUE sy___at__contex_5f56;
static VALUE sy___at__contex_cdb3;
static VALUE sy___do_rules_eq__le__ab16;
static VALUE sy___lb__lb_Lattic_d322;
static VALUE sy___lp_2;
static VALUE sy___lp_;
static VALUE sy___lp_src_dot_cla_2024;
static VALUE sy__bind_lb_1_rb__dot__642a;
static VALUE sy__bind_lb_1_rb__dot__a482;
static VALUE sy__bind_lb_1_rb__dot__bb04;
static VALUE sy__bind_lb_1_rb__lb__0f18;
static VALUE sy__bind_lb_1_rb__lb__75a5;
static VALUE sy__bind_lb_1_rb__lb__fa06;
static VALUE sy__bind_lb_1_rb__lt__7b20;
static VALUE sy__bind_lb_1_rb__pl__4651;
static VALUE sy__bind_lb_1_rb__sp__6af0;
static VALUE sy__first_lp_sr_3298;
static VALUE sy__if_sp_bind_lb__1bed;
static VALUE sy__s_eq_Switch_78a6;
static VALUE sy__s_eq_Switch_7c35;
static VALUE sy__s_eq_Switch_df23;
static VALUE sy__src_25d9;
static VALUE sy__src_dot_ary_d5cf;
static VALUE sy__src_dot_rule_5acf;
static VALUE sy__src_dot_rule_a719;
static VALUE sy_combine_or;
static VALUE sy_combine_seq;
static VALUE sy_must_empty;
static VALUE sy_root;
static VALUE sy_spaces;
static VALUE sy_traverse;
static VALUE sy_traverse_item;
static VALUE sy_visit;

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
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_autovar_10,_rules,_autovar_11,_autovar_12,__result,_autovar_13;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy___at__contex_5f56,1,bind2);
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
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_4=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_4);
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy__bind_lb_1_rb__lb__fa06,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=rb_funcall(self,sy___do_rules_eq__le__ab16,1,bind2);
            it=rb_funcall(self,sy__src_dot_rule_5acf,1,bind2);
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
                    it=ptr->ary[ptr->pos];            ;
                    ptr->pos++;
                    _autovar_8=it;;
                    cstruct oldpass4=*ptr;
                    ptr->pos=ptr->len=0;
                    ptr->ary=NULL;
                    ame_setsrc2(self,_autovar_8);
                    it=rb_funcall(self,sy_root,0);
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
                    ptr->pos=oldpos3;
                    stop2=1;
                    ;
                    goto accept3;
alt3_3:
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
            it=rb_funcall(self,sy__src_dot_rule_a719,1,bind2);
            _rules=bind_aget(bind2,1);;
            it=rb_funcall(self,sy__src_25d9,1,bind2);
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
            ptr->pos=oldpos2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
            _autovar_12=it;;

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
            it=AmethystCore_append(self,_autovar_3,_autovar_12);
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            stop1=1;
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
            ptr->pos=oldpos4;
            stop1=1;
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
        }
    }
    it=_autovar_3;
    __result=it;;
    _autovar_13=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_13);
    it=rb_funcall(self,sy___at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_13=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE Detect_Switch_Char_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_traverse,0);
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
    VALUE it ,_nvars,_ivars,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    int x;
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
    it=rb_funcall(self,sy___lp_src_dot_cla_2024,1,bind2);
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
        it=rb_funcall(self,sy_traverse_item,0);
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__6af0,1,bind2);
        _nvars=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
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
    it=rb_funcall(self,sy__if_sp_bind_lb__1bed,1,bind2);
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
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
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
            it=rb_funcall(self,sy_visit,0);
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            __result=it;;

            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=rb_funcall(self,sy_traverse,0);
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
            ptr->pos=oldpos1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_4;
            }
            __result=it;;

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
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=rb_funcall(self,sy_traverse,0);
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
            ptr->pos=oldpos2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
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
            it=rb_funcall(self,sy_visit,0);
            if (it==failobj) {
                it=failobj;
                goto alt3_2;
            }
            __result=it;;

            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
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
                it=rb_funcall(self,sy_traverse_item,0);
                if (it==failobj) {
                    it=failobj;
                    goto alt4_2;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy__bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept4;
alt4_2:
                ptr->pos=oldpos4;
                stop1=1;
                ;
                goto accept4;
alt4_3:
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
            ptr->pos=oldpos3;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_4;
            }
            __result=it;;

            ;
            goto accept3;
alt3_4:
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
                it=rb_funcall(self,sy_traverse_item,0);
                if (it==failobj) {
                    it=failobj;
                    goto alt6_2;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy__bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept6;
alt6_2:
                ptr->pos=oldpos6;
                stop2=1;
                ;
                goto accept6;
alt6_3:
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
            ptr->pos=oldpos5;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_3;
            }
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
            it=rb_funcall(self,sy_visit,0);
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
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
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_firs,_autovar_7,__result,_autovar_8,_autovar_9,_autovar_10,_str,_autovar_11,_autovar_12,_autovar_13,_autovar_14,_autovar_15,_autovar_16,_autovar_17,_autovar_18,_autovar_19,_items,_aswitch,_autovar_20,_autovar_21,_autovar_22,_list,_autovar_23,_ary,_newlist,_lat,__result_2,_n,_cls,_autovar_24,_autovar_25,_autovar_26,_autovar_27,_autovar_28,_autovar_29,_autovar_30,_prefix,_s,__result_3,_autovar_31,_ary_2,_autovar_32,_autovar_33,_rest,_cls_2,_autovar_34,_autovar_35,_autovar_36,_autovar_37,_autovar_38;
    VALUE bind2=bind_new2(16);
    int x;
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
        it=rb_funcall(self,sy_spaces,0);
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
        it=rb_funcall(self,sy__first_lp_sr_3298,1,bind2);
        _firs=it;;
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy__s_eq_Switch_df23,1,bind2);
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
            goto alt1_2;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_7;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
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
        it=rb_funcall(self,sy_spaces,0);
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
        it=rb_funcall(self,sy__first_lp_sr_3298,1,bind2);
        _firs=it;;
        bind_aset(bind2,1,_firs);
        bind_aset(bind2,2,_str);
        it=rb_funcall(self,sy__s_eq_Switch_78a6,1,bind2);
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
            goto alt1_3;
        }
success4:
        *ptr=oldpass4;
        it=_autovar_11;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
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
        it=rb_funcall(self,sy_spaces,0);
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
        it=rb_funcall(self,sy__src_25d9,1,bind2);
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
            goto alt1_4;
        }
success7:
        *ptr=oldpass7;
        it=_autovar_14;
        __result=it;;

        ;
        goto accept1;
alt1_4:
        ptr->pos=oldpos1;
        it=_autovar_3;
        _autovar_15=it;;
        cstruct oldpass9=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_15);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy__first_lp_sr_3298,1,bind2);
        _firs=it;;
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy___lp_,1,bind2);
        _firs=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass9;
        };
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy__s_eq_Switch_7c35,1,bind2);
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
            goto alt1_5;
        }
success9:
        *ptr=oldpass9;
        it=_autovar_16;
        __result=it;;

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
            it=rb_funcall(self,sy_traverse_item,0);
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _autovar_19=it;;
            it=AmethystCore_append(self,_autovar_18,_autovar_19);
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            stop1=1;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto pass10;
            };
accept2:
            ;
        }
        it=_autovar_18;
        _items=it;;
        it=Qfalse;
        _aswitch=it;;
        bind_aset(bind2,1,_items);
        bind_aset(bind2,2,_aswitch);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__bb04,1,bind2);
        _items=bind_aget(bind2,1);;
        _aswitch=bind_aget(bind2,2);;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        bind_aset(bind2,1,_aswitch);
        it=rb_funcall(self,sy___lp_2,1,bind2);
        _aswitch=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto alt3_2;
        };
        bind_aset(bind2,1,_items);
        it=rb_funcall(self,sy__Or_lb__ti_bind_d486,1,bind2);
        _items=bind_aget(bind2,1);;
        _autovar_20=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
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
            it=rb_funcall(self,sy___lb__lb_Lattic_d322,1,bind2);
            _list=it;;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_23=it;;
            cstruct oldpass13=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_23);
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy__src_dot_ary_d5cf,1,bind2);
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
                goto alt4_2;
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
            it=rb_funcall(self,sy__bind_lb_1_rb__dot__642a,1,bind2);
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
            it=rb_funcall(self,sy_combine_or,3,arg0,arg1,arg2);
            if (it==failobj) {
                it=failobj;
                goto alt4_2;
            }
            __result_2=it;;

            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt4_3;
            }
            _n=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_n);
            it=rb_funcall(self,sy__bind_lb_1_rb__dot__a482,1,bind2);
            _list=bind_aget(bind2,1);;
            _n=bind_aget(bind2,2);;
            _newlist=it;;
            it=c_Switch_Char;
            arg0=it;
            it=c_Lattice_Char;
            arg1=it;
            it=_newlist;
            arg2=it;
            it=rb_funcall(self,sy_combine_or,3,arg0,arg1,arg2);
            if (it==failobj) {
                it=failobj;
                goto alt4_3;
            }
            __result_2=it;;

            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto alt4_4;
            }
            it=c_Switch_Char;
            _cls=it;;
            bind_aset(bind2,1,_cls);
            bind_aset(bind2,2,_list);
            it=rb_funcall(self,sy__bind_lb_1_rb__lb__0f18,1,bind2);
            _cls=bind_aget(bind2,1);;
            _list=bind_aget(bind2,2);;
            __result_2=it;;

            ;
            goto accept4;
alt4_4:
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto pass12;
            };
accept4:
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
            it=rb_funcall(self,sy___lb__lb_Lattic_d322,1,bind2);
            _list=it;;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            _n=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_n);
            it=rb_funcall(self,sy__bind_lb_1_rb__dot__a482,1,bind2);
            _list=bind_aget(bind2,1);;
            _n=bind_aget(bind2,2);;
            _newlist=it;;
            it=c_Switch_Char;
            arg0=it;
            it=c_Lattice_Char;
            arg1=it;
            it=_newlist;
            arg2=it;
            it=rb_funcall(self,sy_combine_or,3,arg0,arg1,arg2);
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            __result_2=it;;

            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto alt5_3;
            }
            it=c_Switch_Char;
            _cls=it;;
            bind_aset(bind2,1,_cls);
            bind_aset(bind2,2,_list);
            it=rb_funcall(self,sy__bind_lb_1_rb__lb__0f18,1,bind2);
            _cls=bind_aget(bind2,1);;
            _list=bind_aget(bind2,2);;
            __result_2=it;;

            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto pass12;
            };
accept5:
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
            goto alt3_3;
        }
success11:
        *ptr=oldpass11;
        it=_autovar_25;
        _autovar_20=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto pass10;
        };
accept3:
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
            it=rb_funcall(self,sy_traverse_item,0);
            if (it==failobj) {
                it=failobj;
                goto alt6_2;
            }
            _autovar_28=it;;
            it=AmethystCore_append(self,_autovar_27,_autovar_28);
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            stop2=1;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            if (1) {
                it=failobj;
                goto pass14;
            };
accept6:
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Switch_Char*/:
            ;
            it=rb_ary_new3(0);
            _prefix=it;;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            it=rb_funcall(self,sy_must_empty,0);
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            _s=it;;
            it=c_Switch_Char;
            arg0=it;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_s);
            it=rb_funcall(self,sy__bind_lb_1_rb__pl__4651,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _s=bind_aget(bind2,2);;
            arg1=it;
            it=rb_funcall(self,sy_combine_seq,2,arg0,arg1);
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            __result_3=it;;

            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_31=it;;
            cstruct oldpass17=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_31);
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy__src_dot_ary_d5cf,1,bind2);
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
                goto alt7_3;
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
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt8_2;
                }
                _autovar_33=it;;
                it=AmethystCore_append(self,_autovar_32,_autovar_33);
                ;
                goto accept8;
alt8_2:
                ptr->pos=oldpos8;
                stop3=1;
                ;
                goto accept8;
alt8_3:
                ptr->pos=oldpos8;
                if (1) {
                    it=failobj;
                    goto alt7_3;
                };
accept8:
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
            it=rb_funcall(self,sy__bind_lb_1_rb__lb__75a5,1,bind2);
            _cls_2=bind_aget(bind2,1);;
            _ary_2=bind_aget(bind2,2);;
            _prefix=bind_aget(bind2,3);;
            _rest=bind_aget(bind2,4);;
            __result_3=it;;

            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            it=rb_ary_new3(0);
            _autovar_34=it;;
            int stop4=0;
            while(!stop4) {
                int oldpos9=ptr->pos;
                int cut9=0;
alt9_1:
                ;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt9_2;
                }
                _autovar_35=it;;
                it=AmethystCore_append(self,_autovar_34,_autovar_35);
                ;
                goto accept9;
alt9_2:
                ptr->pos=oldpos9;
                stop4=1;
                ;
                goto accept9;
alt9_3:
                ptr->pos=oldpos9;
                if (1) {
                    it=failobj;
                    goto alt7_4;
                };
accept9:
                ;
            }
            it=_autovar_34;
            _ary_2=it;;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_ary_2);
            it=rb_funcall(self,sy__Seq_lb__ti__lp_bi_a321,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _ary_2=bind_aget(bind2,2);;
            __result_3=it;;

            ;
            goto accept7;
alt7_4:
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto pass16;
            };
accept7:
            ;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass16;
            }
            it=__result_3;
            _autovar_36=it;;
            break;
        case 1/*Object*/:
            ;
            it=rb_ary_new3(0);
            _prefix=it;;
            int oldpos10=ptr->pos;
            int cut10=0;
alt10_1:
            ;
            it=rb_funcall(self,sy_must_empty,0);
            if (it==failobj) {
                it=failobj;
                goto alt10_2;
            }
            _s=it;;
            it=c_Switch_Char;
            arg0=it;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_s);
            it=rb_funcall(self,sy__bind_lb_1_rb__pl__4651,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _s=bind_aget(bind2,2);;
            arg1=it;
            it=rb_funcall(self,sy_combine_seq,2,arg0,arg1);
            if (it==failobj) {
                it=failobj;
                goto alt10_2;
            }
            __result_3=it;;

            ;
            goto accept10;
alt10_2:
            ptr->pos=oldpos10;
            it=rb_ary_new3(0);
            _autovar_34=it;;
            int stop5=0;
            while(!stop5) {
                int oldpos11=ptr->pos;
                int cut11=0;
alt11_1:
                ;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt11_2;
                }
                _autovar_35=it;;
                it=AmethystCore_append(self,_autovar_34,_autovar_35);
                ;
                goto accept11;
alt11_2:
                ptr->pos=oldpos11;
                stop5=1;
                ;
                goto accept11;
alt11_3:
                ptr->pos=oldpos11;
                if (1) {
                    it=failobj;
                    goto alt10_3;
                };
accept11:
                ;
            }
            it=_autovar_34;
            _ary_2=it;;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_ary_2);
            it=rb_funcall(self,sy__Seq_lb__ti__lp_bi_a321,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _ary_2=bind_aget(bind2,2);;
            __result_3=it;;

            ;
            goto accept10;
alt10_3:
            ptr->pos=oldpos10;
            if (1) {
                it=failobj;
                goto pass16;
            };
accept10:
            ;
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
    sy__Or_lb__ti_bind_d486=rb_intern("_Or_lb__ti_bind_d486");
    sy__Seq_lb__ti__lp_bi_a321=rb_intern("_Seq_lb__ti__lp_bi_a321");
    sy___at__contex_5f56=rb_intern("__at__contex_5f56");
    sy___at__contex_cdb3=rb_intern("__at__contex_cdb3");
    sy___do_rules_eq__le__ab16=rb_intern("__do_rules_eq__le__ab16");
    sy___lb__lb_Lattic_d322=rb_intern("__lb__lb_Lattic_d322");
    sy___lp_2=rb_intern("__lp_2");
    sy___lp_=rb_intern("__lp_");
    sy___lp_src_dot_cla_2024=rb_intern("__lp_src_dot_cla_2024");
    sy__bind_lb_1_rb__dot__642a=rb_intern("_bind_lb_1_rb__dot__642a");
    sy__bind_lb_1_rb__dot__a482=rb_intern("_bind_lb_1_rb__dot__a482");
    sy__bind_lb_1_rb__dot__bb04=rb_intern("_bind_lb_1_rb__dot__bb04");
    sy__bind_lb_1_rb__lb__0f18=rb_intern("_bind_lb_1_rb__lb__0f18");
    sy__bind_lb_1_rb__lb__75a5=rb_intern("_bind_lb_1_rb__lb__75a5");
    sy__bind_lb_1_rb__lb__fa06=rb_intern("_bind_lb_1_rb__lb__fa06");
    sy__bind_lb_1_rb__lt__7b20=rb_intern("_bind_lb_1_rb__lt__7b20");
    sy__bind_lb_1_rb__pl__4651=rb_intern("_bind_lb_1_rb__pl__4651");
    sy__bind_lb_1_rb__sp__6af0=rb_intern("_bind_lb_1_rb__sp__6af0");
    sy__first_lp_sr_3298=rb_intern("_first_lp_sr_3298");
    sy__if_sp_bind_lb__1bed=rb_intern("_if_sp_bind_lb__1bed");
    sy__s_eq_Switch_78a6=rb_intern("_s_eq_Switch_78a6");
    sy__s_eq_Switch_7c35=rb_intern("_s_eq_Switch_7c35");
    sy__s_eq_Switch_df23=rb_intern("_s_eq_Switch_df23");
    sy__src_25d9=rb_intern("_src_25d9");
    sy__src_dot_ary_d5cf=rb_intern("_src_dot_ary_d5cf");
    sy__src_dot_rule_5acf=rb_intern("_src_dot_rule_5acf");
    sy__src_dot_rule_a719=rb_intern("_src_dot_rule_a719");
    sy_combine_or=rb_intern("combine_or");
    sy_combine_seq=rb_intern("combine_seq");
    sy_must_empty=rb_intern("must_empty");
    sy_root=rb_intern("root");
    sy_spaces=rb_intern("spaces");
    sy_traverse=rb_intern("traverse");
    sy_traverse_item=rb_intern("traverse_item");
    sy_visit=rb_intern("visit");
    rb_define_method(cls_Detect_Switch_Char,"itrans",Detect_Switch_Char_itrans,0);
    rb_define_method(cls_Detect_Switch_Char,"root",Detect_Switch_Char_root,0);
    rb_define_method(cls_Detect_Switch_Char,"traverse",Detect_Switch_Char_traverse,0);
    rb_define_method(cls_Detect_Switch_Char,"traverse_item",Detect_Switch_Char_traverse_item,0);
    rb_define_method(cls_Detect_Switch_Char,"visit",Detect_Switch_Char_visit,0);
}
