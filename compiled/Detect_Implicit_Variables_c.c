#include "cthyst.h"
#include "memo.c"
VALUE cls_Detect_Implicit_Variables;
VALUE AmethystCore_anything(VALUE self );
VALUE Detect_Implicit_Variables_root(VALUE self );
VALUE Detect_Implicit_Variables_traverse(VALUE self );
VALUE Detect_Implicit_Variables_traverse_item(VALUE self );
VALUE Detect_Implicit_Variables_visit(VALUE self );
VALUE switchhash_Detect_Implicit_Variables_1;
VALUE switchhash_Detect_Implicit_Variables_2;
VALUE switchhash_Detect_Implicit_Variables_3;
VALUE switchhash_Detect_Implicit_Variables_4;
VALUE switchhash_Detect_Implicit_Variables_5;
static VALUE sy_Detect_Implicit_Variables__at_vars_a187;
static VALUE sy_Detect_Implicit_Variables__at_vars_eq_Ha_dec8;
static VALUE sy_Detect_Implicit_Variables__at_vars_lb_bi_edce;
static VALUE sy_Detect_Implicit_Variables__lp_src_dot_ins_a413;
VALUE profile_report_Detect_Implicit_Variables(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Detect_Implicit_Variables_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_eq_Ha_dec8,1,bind2);
    it=Detect_Implicit_Variables_traverse(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_a187,1,bind2);
    __result=it;;

fail:
    return it;
}
VALUE Detect_Implicit_Variables_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    ptr->pos=ptr->len;
    it=rb_funcall(self,sy_Detect_Implicit_Variables__lp_src_dot_ins_a413,1,bind2);
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
    it=rb_ary_new3(0);
    _autovar_3=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12autovar_4=_autovar_4;
        it=Detect_Implicit_Variables_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _autovar_4=it;;
        it=AmethystCore_append(self,_autovar_3,_autovar_4);
        ;
        goto accept1;
alt1_2:
        _autovar_4=lalt12autovar_4;
        ptr->pos=oldpos1;
        VALUE lalt13autovar_4=_autovar_4;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        _autovar_4=lalt13autovar_4;
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
    it=_autovar_3;
    _autovar_5=it;;

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
    it=_autovar_5;
    _autovar_6=it;;

    goto success1;
pass1:
    *ptr=oldpass1;
    if (1) {
        it=failobj;
        goto fail;
    }
success1:
    *ptr=oldpass1;
    it=_autovar_6;
    __result=it;;

fail:
    return it;
}
VALUE Detect_Implicit_Variables_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Implicit_Variables_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Implicit_Variables_3,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE lalt12_result=__result;
            it=Detect_Implicit_Variables_visit(self );
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
            it=Detect_Implicit_Variables_traverse(self );
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
        case 1/*Object*/:
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
            it=Detect_Implicit_Variables_traverse(self );
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Implicit_Variables_4,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            VALUE lalt32_result=__result;
            it=Detect_Implicit_Variables_visit(self );
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
            VALUE lalt33autovar_4=_autovar_4;
            VALUE lalt33autovar_5=_autovar_5;
            VALUE lalt33autovar_6=_autovar_6;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            it=rb_ary_new3(0);
            _autovar_4=it;;
            int stop1=0;
            while(!stop1) {
                int oldpos4=ptr->pos;
                int cut4=0;
alt4_1:
                ;
                VALUE lalt42autovar_5=_autovar_5;
                it=Detect_Implicit_Variables_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt4_2;
                }
                _autovar_5=it;;
                it=AmethystCore_append(self,_autovar_4,_autovar_5);
                ;
                goto accept4;
alt4_2:
                _autovar_5=lalt42autovar_5;
                ptr->pos=oldpos4;
                VALUE lalt43autovar_5=_autovar_5;
                stop1=1;
                ;
                goto accept4;
alt4_3:
                _autovar_5=lalt43autovar_5;
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
            it=_autovar_4;
            _autovar_6=it;;

            goto success3;
pass3:
            *ptr=oldpass3;
            if (1) {
                it=failobj;
                goto alt3_3;
            }
success3:
            *ptr=oldpass3;
            it=_autovar_6;
            __result=it;;

            ;
            goto accept3;
alt3_3:
            __result=lalt33_result;
            _autovar_3=lalt33autovar_3;
            _autovar_4=lalt33autovar_4;
            _autovar_5=lalt33autovar_5;
            _autovar_6=lalt33autovar_6;
            ptr->pos=oldpos3;
            VALUE lalt34_result=__result;
            VALUE lalt34autovar_3=_autovar_3;
            VALUE lalt34autovar_4=_autovar_4;
            VALUE lalt34autovar_5=_autovar_5;
            VALUE lalt34autovar_6=_autovar_6;
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
            _autovar_4=lalt34autovar_4;
            _autovar_5=lalt34autovar_5;
            _autovar_6=lalt34autovar_6;
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto fail;
            };
accept3:
            ;
            break;
        case 1/*Object*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            VALUE lalt52_result=__result;
            VALUE lalt52autovar_3=_autovar_3;
            VALUE lalt52autovar_4=_autovar_4;
            VALUE lalt52autovar_5=_autovar_5;
            VALUE lalt52autovar_6=_autovar_6;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass4=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            it=rb_ary_new3(0);
            _autovar_4=it;;
            int stop2=0;
            while(!stop2) {
                int oldpos6=ptr->pos;
                int cut6=0;
alt6_1:
                ;
                VALUE lalt62autovar_5=_autovar_5;
                it=Detect_Implicit_Variables_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt6_2;
                }
                _autovar_5=it;;
                it=AmethystCore_append(self,_autovar_4,_autovar_5);
                ;
                goto accept6;
alt6_2:
                _autovar_5=lalt62autovar_5;
                ptr->pos=oldpos6;
                VALUE lalt63autovar_5=_autovar_5;
                stop2=1;
                ;
                goto accept6;
alt6_3:
                _autovar_5=lalt63autovar_5;
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
            it=_autovar_4;
            _autovar_6=it;;

            goto success4;
pass4:
            *ptr=oldpass4;
            if (1) {
                it=failobj;
                goto alt5_2;
            }
success4:
            *ptr=oldpass4;
            it=_autovar_6;
            __result=it;;

            ;
            goto accept5;
alt5_2:
            __result=lalt52_result;
            _autovar_3=lalt52autovar_3;
            _autovar_4=lalt52autovar_4;
            _autovar_5=lalt52autovar_5;
            _autovar_6=lalt52autovar_6;
            ptr->pos=oldpos5;
            VALUE lalt53_result=__result;
            VALUE lalt53autovar_3=_autovar_3;
            VALUE lalt53autovar_4=_autovar_4;
            VALUE lalt53autovar_5=_autovar_5;
            VALUE lalt53autovar_6=_autovar_6;
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
            _autovar_4=lalt53autovar_4;
            _autovar_5=lalt53autovar_5;
            _autovar_6=lalt53autovar_6;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Implicit_Variables_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            VALUE lalt72_result=__result;
            it=Detect_Implicit_Variables_visit(self );
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
VALUE Detect_Implicit_Variables_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_name,_autovar_2,_autovar_3,_autovar_4,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Implicit_Variables_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
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
        _name=it;;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_lb_bi_edce,1,bind2);
        _name=bind_aget(bind2,1);;
        it=rb_ary_new3(0);
        _autovar_2=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE lalt12autovar_3=_autovar_3;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            _autovar_3=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_3);
            ;
            goto accept1;
alt1_2:
            _autovar_3=lalt12autovar_3;
            ptr->pos=oldpos1;
            VALUE lalt13autovar_3=_autovar_3;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            _autovar_3=lalt13autovar_3;
            ptr->pos=oldpos1;
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
        _autovar_4=it;;

        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto fail;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_4;
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
void Init_Detect_Implicit_Variables_c() {
    cls_Detect_Implicit_Variables=rb_define_class("Detect_Implicit_Variables",rb_const_get(rb_cObject,rb_intern("Visitor")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Detect_Implicit_Variables,"profile_report",profile_report_Detect_Implicit_Variables,0);
    switchhash_Detect_Implicit_Variables_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Implicit_Variables_1);;
    switchhash_Detect_Implicit_Variables_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Implicit_Variables_2);;
    switchhash_Detect_Implicit_Variables_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Implicit_Variables_3);;
    switchhash_Detect_Implicit_Variables_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Implicit_Variables_4);;
    switchhash_Detect_Implicit_Variables_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Implicit_Variables_5);;
    sy_Detect_Implicit_Variables__at_vars_a187=rb_intern("Detect_Implicit_Variables__at_vars_a187");
    sy_Detect_Implicit_Variables__at_vars_eq_Ha_dec8=rb_intern("Detect_Implicit_Variables__at_vars_eq_Ha_dec8");
    sy_Detect_Implicit_Variables__at_vars_lb_bi_edce=rb_intern("Detect_Implicit_Variables__at_vars_lb_bi_edce");
    sy_Detect_Implicit_Variables__lp_src_dot_ins_a413=rb_intern("Detect_Implicit_Variables__lp_src_dot_ins_a413");
    rb_define_method(cls_Detect_Implicit_Variables,"root",Detect_Implicit_Variables_root,0);
    rb_define_method(cls_Detect_Implicit_Variables,"traverse",Detect_Implicit_Variables_traverse,0);
    rb_define_method(cls_Detect_Implicit_Variables,"traverse_item",Detect_Implicit_Variables_traverse_item,0);
    rb_define_method(cls_Detect_Implicit_Variables,"visit",Detect_Implicit_Variables_visit,0);
}
