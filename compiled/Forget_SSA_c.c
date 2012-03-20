#include "cthyst.h"
#include "memo.c"
VALUE cls_Forget_SSA;
VALUE AmethystCore_anything(VALUE self );
VALUE Forget_SSA_root(VALUE self );
VALUE Forget_SSA_traverse(VALUE self );
VALUE Forget_SSA_traverse_item(VALUE self );
VALUE Forget_SSA_visit(VALUE self );
VALUE switchhash_Forget_SSA_1;
VALUE switchhash_Forget_SSA_2;
VALUE switchhash_Forget_SSA_3;
VALUE switchhash_Forget_SSA_4;
VALUE switchhash_Forget_SSA_5;
VALUE switchhash_Forget_SSA_6;
static VALUE sy_Forget_SSA__lp_src_dot_cla_2024;
static VALUE sy_Forget_SSA_bind_lb_1_rb__lt__7b20;
static VALUE sy_Forget_SSA_bind_lb_1_rb__sp__6af0;
static VALUE sy_Forget_SSA_if_sp_bind_lb__1bed;
static VALUE sy_Forget_SSA_src_25d9;
static VALUE sy_Forget_SSA_src_dot_unss_5845;

memo_struct *mem_Forget_SSA=NULL;
VALUE memo_val_Forget_SSA;
VALUE profile_report_Forget_SSA(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if(ptr->mem) {
        fprintf(profile_report,"memo Forget_SSA::traverse  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[117],((memo_struct *)ptr->mem)->miss[117],((memo_struct *)ptr->mem)->ticks[117]);
        ((memo_struct *)ptr->mem)->hits[117]=0;
        ((memo_struct *)ptr->mem)->miss[117]=0;
        ((memo_struct *)ptr->mem)->ticks[117]=0;
    }
    return Qnil;
}
VALUE Forget_SSA_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_Forget_SSA_src_25d9,1,bind2);
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
    case 1/*Object*/:
        ;
        if (1) {
            it=failobj;
            goto pass1;
        }
        break;
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
    _autovar_3=it;;
    cstruct oldpass2=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar_3);
    it=Forget_SSA_traverse(self );
    if (it==failobj) {
        it=failobj;
        goto pass2;
    }
    _autovar_4=it;;
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
        goto fail;
    }
success2:
    *ptr=oldpass2;
    it=_autovar_4;
    __result=it;;

fail:
    return it;
}
VALUE Forget_SSA_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars=Qnil,_ivars=Qnil,_autovar=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if (ptr->mem==NULL) {
        ptr->mem=mem_Forget_SSA;
    }
    time_struct time_old=memo_get(ptr->mem,117,ptr->src,ptr->pos);
    if (time_old.pos!=-1) {
        ptr->pos=time_old.pos;
        return time_old.result;
    }
    int oldpos=ptr->pos;
    ptr->pos=ptr->len;
    it=rb_ary_new3(0);
    _nvars=it;;
    it=rb_funcall(self,sy_Forget_SSA__lp_src_dot_cla_2024,1,bind2);
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
        it=Forget_SSA_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto revert1;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Forget_SSA_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Forget_SSA_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;
memo_fail:
    memo_add(ptr->mem,117,ptr->src,oldpos,it,ptr->pos,time_old);
    return it;

fail:
    return it;
}
VALUE Forget_SSA_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ar=Qnil,_it=Qnil,_autovar_4=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_4,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Local*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=Forget_SSA_visit(self );
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
            it=Forget_SSA_traverse(self );
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
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
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
        case 1/*Object*/:
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
            it=Forget_SSA_traverse(self );
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
            goto accept5;
alt2_2:
            ptr->pos=oldpos2;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Local*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=Forget_SSA_visit(self );
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
            goto accept8;
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
                it=Forget_SSA_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert8;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Forget_SSA_bind_lb_1_rb__lt__7b20,1,bind2);
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
            goto alt3_3;
accept10:
            ;

            ;
            goto accept8;
alt3_3:
            ptr->pos=oldpos3;
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
        case 1/*Object*/:
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
                it=Forget_SSA_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert12;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Forget_SSA_bind_lb_1_rb__lt__7b20,1,bind2);
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
            goto alt5_2;
accept16:
            ;

            ;
            goto accept15;
alt5_2:
            ptr->pos=oldpos5;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_6,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Local*/:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            it=Forget_SSA_visit(self );
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
            goto accept21;
alt7_2:
            ptr->pos=oldpos7;
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
        case 1/*Object*/:
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
VALUE Forget_SSA_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Local*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Forget_SSA_src_dot_unss_5845,1,bind2);
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
        break;
    case 1/*Object*/:
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
void Init_Forget_SSA_c() {
    cls_Forget_SSA=rb_define_class("Forget_SSA",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    mem_Forget_SSA=memo_init();
    memo_val_Forget_SSA=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,mem_Forget_SSA);
    rb_global_variable(&memo_val_Forget_SSA);
    rb_define_method(cls_Forget_SSA,"profile_report",profile_report_Forget_SSA,0);
    switchhash_Forget_SSA_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Forget_SSA_1);;
    switchhash_Forget_SSA_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Forget_SSA_2);;
    switchhash_Forget_SSA_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Forget_SSA_3);;
    switchhash_Forget_SSA_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Forget_SSA_4);;
    switchhash_Forget_SSA_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Forget_SSA_5);;
    switchhash_Forget_SSA_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Forget_SSA_6);;
    sy_Forget_SSA__lp_src_dot_cla_2024=rb_intern("Forget_SSA__lp_src_dot_cla_2024");
    sy_Forget_SSA_bind_lb_1_rb__lt__7b20=rb_intern("Forget_SSA_bind_lb_1_rb__lt__7b20");
    sy_Forget_SSA_bind_lb_1_rb__sp__6af0=rb_intern("Forget_SSA_bind_lb_1_rb__sp__6af0");
    sy_Forget_SSA_if_sp_bind_lb__1bed=rb_intern("Forget_SSA_if_sp_bind_lb__1bed");
    sy_Forget_SSA_src_25d9=rb_intern("Forget_SSA_src_25d9");
    sy_Forget_SSA_src_dot_unss_5845=rb_intern("Forget_SSA_src_dot_unss_5845");
    rb_define_method(cls_Forget_SSA,"root",Forget_SSA_root,0);
    rb_define_method(cls_Forget_SSA,"traverse",Forget_SSA_traverse,0);
    rb_define_method(cls_Forget_SSA,"traverse_item",Forget_SSA_traverse_item,0);
    rb_define_method(cls_Forget_SSA,"visit",Forget_SSA_visit,0);
}
