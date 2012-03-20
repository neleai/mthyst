#include "cthyst.h"
#include "memo.c"
VALUE cls_Left_Factor;
VALUE AmethystCore_anything(VALUE self );
VALUE Left_Factor_binds(VALUE self ,VALUE a0,VALUE a1);
VALUE Left_Factor_binds(VALUE self ,VALUE,VALUE);
VALUE Left_Factor_factor(VALUE self ,VALUE a0,VALUE a1,VALUE a2);
VALUE Left_Factor_factor(VALUE self ,VALUE,VALUE,VALUE);
VALUE Left_Factor_first(VALUE self ,VALUE a0);
VALUE Left_Factor_first(VALUE self ,VALUE);
VALUE Left_Factor_rest(VALUE self ,VALUE a0,VALUE a1);
VALUE Left_Factor_root(VALUE self );
VALUE Left_Factor_traverse(VALUE self );
VALUE Left_Factor_traverse_item(VALUE self );
VALUE Left_Factor_visit(VALUE self );
VALUE switchhash_Left_Factor_1;
VALUE switchhash_Left_Factor_2;
VALUE switchhash_Left_Factor_3;
VALUE switchhash_Left_Factor_4;
VALUE switchhash_Left_Factor_5;
VALUE switchhash_Left_Factor_6;
VALUE switchhash_Left_Factor_7;
VALUE switchhash_Left_Factor_8;
static VALUE sy_Left_Factor_Bind_lb_src_66c4;
static VALUE sy_Left_Factor_Or_lb__ti__lp_bin_849e;
static VALUE sy_Left_Factor_Seq_lb__lb_bin_4ce0;
static VALUE sy_Left_Factor__lb_bind_lb_1_rb__1906;
static VALUE sy_Left_Factor__lp_bind_lb_1_rb__34a7;
static VALUE sy_Left_Factor__lp_bind_lb_1_rb__b868;
static VALUE sy_Left_Factor__lp_src_dot_cla_2024;
static VALUE sy_Left_Factor_bind_lb_1_rb__lt__7b20;
static VALUE sy_Left_Factor_bind_lb_1_rb__pl__4651;
static VALUE sy_Left_Factor_bind_lb_1_rb__pl__4c53;
static VALUE sy_Left_Factor_bind_lb_1_rb__sp__6af0;
static VALUE sy_Left_Factor_first_lp_bi_150a;
static VALUE sy_Left_Factor_if_sp_bind_lb__1bed;
static VALUE sy_Left_Factor_src_dot_expr_ef77;

memo_struct *mem_Left_Factor=NULL;
VALUE memo_val_Left_Factor;
VALUE profile_report_Left_Factor(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if(ptr->mem) {
        fprintf(profile_report,"memo Left_Factor::traverse  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[117],((memo_struct *)ptr->mem)->miss[117],((memo_struct *)ptr->mem)->ticks[117]);
        ((memo_struct *)ptr->mem)->hits[117]=0;
        ((memo_struct *)ptr->mem)->miss[117]=0;
        ((memo_struct *)ptr->mem)->ticks[117]=0;
    }
    return Qnil;
}
VALUE Left_Factor_binds(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_s,_autovar,_autovar_2,_a,_nexp,_autovar_3,_autovar_4,_autovar_5,_f,_autovar_6,__result;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    _a=a1;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_s;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Bind*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12autovar_2=_autovar_2;
        VALUE lalt12nexp=_nexp;
        VALUE lalt12autovar_3=_autovar_3;
        VALUE lalt12autovar_4=_autovar_4;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_2=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_2);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Left_Factor_src_dot_expr_ef77,1,bind2);
        arg0=it;
        it=_a;
        arg1=it;
        it=Left_Factor_binds(self ,arg0,arg1);
        if (it==failobj) {
            it=failobj;
            goto pass2;
        }
        _nexp=it;;
        bind_aset(bind2,1,_nexp);
        it=rb_funcall(self,sy_Left_Factor_Bind_lb_src_66c4,1,bind2);
        _nexp=bind_aget(bind2,1);;
        _autovar_3=it;;
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
            goto alt1_2;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_3;
        _autovar_4=it;;

        ;
        goto accept1;
alt1_2:
        _autovar_2=lalt12autovar_2;
        _nexp=lalt12nexp;
        _autovar_3=lalt12autovar_3;
        _autovar_4=lalt12autovar_4;
        ptr->pos=oldpos1;
        VALUE lalt13autovar_2=_autovar_2;
        VALUE lalt13nexp=_nexp;
        VALUE lalt13autovar_3=_autovar_3;
        VALUE lalt13autovar_4=_autovar_4;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        it=_a;
        _autovar_4=it;;

        ;
        goto accept1;
alt1_3:
        _autovar_2=lalt13autovar_2;
        _nexp=lalt13nexp;
        _autovar_3=lalt13autovar_3;
        _autovar_4=lalt13autovar_4;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto pass1;
        };
accept1:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
    case 1/*Seq*/:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE lalt22autovar_4=_autovar_4;
        VALUE lalt22autovar_5=_autovar_5;
        VALUE lalt22f=_f;
        VALUE lalt22autovar_6=_autovar_6;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_5=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_5);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
        _f=it;;
        ptr->pos=ptr->len;
        it=_f;
        arg0=it;
        it=_a;
        arg1=it;
        it=Left_Factor_binds(self ,arg0,arg1);
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
        _autovar_6=it;;
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
        it=_autovar_6;
        _autovar_4=it;;

        ;
        goto accept2;
alt2_2:
        _autovar_4=lalt22autovar_4;
        _autovar_5=lalt22autovar_5;
        _f=lalt22f;
        _autovar_6=lalt22autovar_6;
        ptr->pos=oldpos2;
        VALUE lalt23autovar_4=_autovar_4;
        VALUE lalt23autovar_5=_autovar_5;
        VALUE lalt23f=_f;
        VALUE lalt23autovar_6=_autovar_6;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        it=_a;
        _autovar_4=it;;

        ;
        goto accept2;
alt2_3:
        _autovar_4=lalt23autovar_4;
        _autovar_5=lalt23autovar_5;
        _f=lalt23f;
        _autovar_6=lalt23autovar_6;
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto pass1;
        };
accept2:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
    case 2/*Object*/:
        ;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        it=_a;
        _autovar_4=it;;
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
    it=_autovar_4;
    __result=it;;

fail:
    return it;
}
VALUE Left_Factor_factor(VALUE self ,VALUE a0,VALUE a1,VALUE a2) {
    VALUE vals[3];
    VALUE it ,_next,_start,_prev,_cur,__result;
    VALUE bind2=bind_new2(16);
    _prev=a0;;
    _start=a1;;
    _cur=a2;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    VALUE lalt12cur=_cur;
    VALUE lalt12start=_start;
    VALUE lalt12prev=_prev;
    VALUE lalt12next=_next;
    VALUE lalt12_result=__result;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto alt1_2;
    }
    _next=it;;
    int oldpos2=ptr->pos;
    int cut2=0;
alt2_1:
    ;
    VALUE lalt22cur=_cur;
    VALUE lalt22start=_start;
    VALUE lalt22next=_next;
    VALUE lalt22_result=__result;
    bind_aset(bind2,1,_start);
    bind_aset(bind2,2,_next);
    it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__34a7,1,bind2);
    _start=bind_aget(bind2,1);;
    _next=bind_aget(bind2,2);;
    if (it==failobj) {
        it=failobj;
        goto alt2_2;
    };
    it=_prev;
    arg0=it;
    it=_start;
    arg1=it;
    bind_aset(bind2,1,_cur);
    bind_aset(bind2,2,_next);
    it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4651,1,bind2);
    _cur=bind_aget(bind2,1);;
    _next=bind_aget(bind2,2);;
    arg2=it;
    it=Left_Factor_factor(self ,arg0,arg1,arg2);
    if (it==failobj) {
        it=failobj;
        goto alt2_2;
    }
    __result=it;;

    ;
    goto accept2;
alt2_2:
    _cur=lalt22cur;
    _start=lalt22start;
    _next=lalt22next;
    __result=lalt22_result;
    ptr->pos=oldpos2;
    VALUE lalt23cur=_cur;
    VALUE lalt23start=_start;
    VALUE lalt23prev=_prev;
    VALUE lalt23next=_next;
    VALUE lalt23_result=__result;
    bind_aset(bind2,1,_start);
    bind_aset(bind2,2,_next);
    it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__b868,1,bind2);
    _start=bind_aget(bind2,1);;
    _next=bind_aget(bind2,2);;
    if (it==failobj) {
        it=failobj;
        goto alt2_3;
    };
    bind_aset(bind2,1,_prev);
    bind_aset(bind2,2,_cur);
    it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4c53,1,bind2);
    _prev=bind_aget(bind2,1);;
    _cur=bind_aget(bind2,2);;
    arg0=it;
    bind_aset(bind2,1,_next);
    it=rb_funcall(self,sy_Left_Factor_first_lp_bi_150a,1,bind2);
    _next=bind_aget(bind2,1);;
    arg1=it;
    bind_aset(bind2,1,_next);
    it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_1_rb__1906,1,bind2);
    _next=bind_aget(bind2,1);;
    arg2=it;
    it=Left_Factor_factor(self ,arg0,arg1,arg2);
    if (it==failobj) {
        it=failobj;
        goto alt2_3;
    }
    __result=it;;

    ;
    goto accept2;
alt2_3:
    _cur=lalt23cur;
    _start=lalt23start;
    _prev=lalt23prev;
    _next=lalt23next;
    __result=lalt23_result;
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
    _cur=lalt12cur;
    _start=lalt12start;
    _prev=lalt12prev;
    _next=lalt12next;
    __result=lalt12_result;
    ptr->pos=oldpos1;
    VALUE lalt13cur=_cur;
    VALUE lalt13start=_start;
    VALUE lalt13prev=_prev;
    VALUE lalt13next=_next;
    VALUE lalt13_result=__result;
    it=Qnil;
    if (ptr->pos<ptr->len) {
        it=failobj;
        goto alt1_3;
    }
    bind_aset(bind2,1,_prev);
    bind_aset(bind2,2,_cur);
    it=rb_funcall(self,sy_Left_Factor_Or_lb__ti__lp_bin_849e,1,bind2);
    _prev=bind_aget(bind2,1);;
    _cur=bind_aget(bind2,2);;
    __result=it;;

    ;
    goto accept1;
alt1_3:
    _cur=lalt13cur;
    _start=lalt13start;
    _prev=lalt13prev;
    _next=lalt13next;
    __result=lalt13_result;
    ptr->pos=oldpos1;
    if (1) {
        it=failobj;
        goto fail;
    };
accept1:
    ;

fail:
    return it;
}
VALUE Left_Factor_first(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_s,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_f,_autovar_6,__result;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_s;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Bind*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12autovar_2=_autovar_2;
        VALUE lalt12autovar_3=_autovar_3;
        VALUE lalt12autovar_4=_autovar_4;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_2=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_2);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Left_Factor_src_dot_expr_ef77,1,bind2);
        arg0=it;
        it=Left_Factor_first(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass2;
        }
        _autovar_3=it;;
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
            goto alt1_2;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_3;
        _autovar_4=it;;

        ;
        goto accept1;
alt1_2:
        _autovar_2=lalt12autovar_2;
        _autovar_3=lalt12autovar_3;
        _autovar_4=lalt12autovar_4;
        ptr->pos=oldpos1;
        VALUE lalt13autovar_2=_autovar_2;
        VALUE lalt13autovar_3=_autovar_3;
        VALUE lalt13autovar_4=_autovar_4;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        _autovar_4=it;;

        ;
        goto accept1;
alt1_3:
        _autovar_2=lalt13autovar_2;
        _autovar_3=lalt13autovar_3;
        _autovar_4=lalt13autovar_4;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto pass1;
        };
accept1:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
    case 1/*Seq*/:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE lalt22autovar_4=_autovar_4;
        VALUE lalt22autovar_5=_autovar_5;
        VALUE lalt22f=_f;
        VALUE lalt22autovar_6=_autovar_6;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_5=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_5);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
        _f=it;;
        ptr->pos=ptr->len;
        it=_f;
        arg0=it;
        it=Left_Factor_first(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
        _autovar_6=it;;
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
        it=_autovar_6;
        _autovar_4=it;;

        ;
        goto accept2;
alt2_2:
        _autovar_4=lalt22autovar_4;
        _autovar_5=lalt22autovar_5;
        _f=lalt22f;
        _autovar_6=lalt22autovar_6;
        ptr->pos=oldpos2;
        VALUE lalt23autovar_4=_autovar_4;
        VALUE lalt23autovar_5=_autovar_5;
        VALUE lalt23f=_f;
        VALUE lalt23autovar_6=_autovar_6;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        _autovar_4=it;;

        ;
        goto accept2;
alt2_3:
        _autovar_4=lalt23autovar_4;
        _autovar_5=lalt23autovar_5;
        _f=lalt23f;
        _autovar_6=lalt23autovar_6;
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto pass1;
        };
accept2:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
    case 2/*Object*/:
        ;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        _autovar_4=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
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
    it=_autovar_4;
    __result=it;;

fail:
    return it;
}
VALUE Left_Factor_rest(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_s,_autovar,_autovar_2,_autovar_3,_autovar_4,_it,_bin,_autovar_5,_autovar_6,__result;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    _bin=a1;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_s;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Seq*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12autovar_2=_autovar_2;
        VALUE lalt12autovar_3=_autovar_3;
        VALUE lalt12autovar_4=_autovar_4;
        VALUE lalt12it=_it;
        VALUE lalt12bin=_bin;
        VALUE lalt12autovar_5=_autovar_5;
        VALUE lalt12autovar_6=_autovar_6;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_2=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_2);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass2;
        }
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE lalt22autovar_4=_autovar_4;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _autovar_4=it;;
            it=AmethystCore_append(self,_autovar_3,_autovar_4);
            ;
            goto accept2;
alt2_2:
            _autovar_4=lalt22autovar_4;
            ptr->pos=oldpos2;
            VALUE lalt23autovar_4=_autovar_4;
            stop1=1;
            ;
            goto accept2;
alt2_3:
            _autovar_4=lalt23autovar_4;
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto pass2;
            };
accept2:
            ;
        }
        it=_autovar_3;
        _it=it;;
        bind_aset(bind2,1,_bin);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Left_Factor_Seq_lb__lb_bin_4ce0,1,bind2);
        _bin=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
        _autovar_5=it;;
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
            goto alt1_2;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_5;
        _autovar_6=it;;

        ;
        goto accept1;
alt1_2:
        _autovar_2=lalt12autovar_2;
        _autovar_3=lalt12autovar_3;
        _autovar_4=lalt12autovar_4;
        _it=lalt12it;
        _bin=lalt12bin;
        _autovar_5=lalt12autovar_5;
        _autovar_6=lalt12autovar_6;
        ptr->pos=oldpos1;
        VALUE lalt13autovar_2=_autovar_2;
        VALUE lalt13autovar_3=_autovar_3;
        VALUE lalt13autovar_4=_autovar_4;
        VALUE lalt13it=_it;
        VALUE lalt13bin=_bin;
        VALUE lalt13autovar_5=_autovar_5;
        VALUE lalt13autovar_6=_autovar_6;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        it=_bin;
        _autovar_6=it;;

        ;
        goto accept1;
alt1_3:
        _autovar_2=lalt13autovar_2;
        _autovar_3=lalt13autovar_3;
        _autovar_4=lalt13autovar_4;
        _it=lalt13it;
        _bin=lalt13bin;
        _autovar_5=lalt13autovar_5;
        _autovar_6=lalt13autovar_6;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto pass1;
        };
accept1:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
    case 1/*Object*/:
        ;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        it=_bin;
        _autovar_6=it;;
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
    it=_autovar_6;
    __result=it;;

fail:
    return it;
}
VALUE Left_Factor_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=Left_Factor_traverse(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    __result=it;;

fail:
    return it;
}
VALUE Left_Factor_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars,_ivars,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if (ptr->mem==NULL) {
        ptr->mem=mem_Left_Factor;
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
    it=rb_funcall(self,sy_Left_Factor__lp_src_dot_cla_2024,1,bind2);
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
        it=Left_Factor_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Left_Factor_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;
memo_fail:
    memo_add(ptr->mem,117,ptr->src,oldpos,it,ptr->pos,time_old);
    return it;

fail:
    return it;
}
VALUE Left_Factor_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_5,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_6,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Or*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE lalt12_result=__result;
            it=Left_Factor_visit(self );
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
            it=Left_Factor_traverse(self );
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
            it=Left_Factor_traverse(self );
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_7,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Or*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            VALUE lalt32_result=__result;
            it=Left_Factor_visit(self );
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
                it=Left_Factor_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt4_2;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__lt__7b20,1,bind2);
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
        case 1/*Object*/:
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
                it=Left_Factor_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt6_2;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__lt__7b20,1,bind2);
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_8,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Or*/:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            VALUE lalt72_result=__result;
            it=Left_Factor_visit(self );
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
VALUE Left_Factor_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_x,_cur,_start,_prev,_next,__result,_autovar_3,_autovar_4,__result_2;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Or*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        it=Left_Factor_traverse(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        _autovar_2=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_2);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass2;
        }
        _x=it;;
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_1_rb__1906,1,bind2);
        _x=bind_aget(bind2,1);;
        _cur=it;;
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy_Left_Factor_first_lp_bi_150a,1,bind2);
        _x=bind_aget(bind2,1);;
        _start=it;;
        it=rb_ary_new3(0);
        _prev=it;;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12cur=_cur;
        VALUE lalt12start=_start;
        VALUE lalt12prev=_prev;
        VALUE lalt12next=_next;
        VALUE lalt12_result=__result;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _next=it;;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE lalt22cur=_cur;
        VALUE lalt22start=_start;
        VALUE lalt22next=_next;
        VALUE lalt22_result=__result;
        bind_aset(bind2,1,_start);
        bind_aset(bind2,2,_next);
        it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__34a7,1,bind2);
        _start=bind_aget(bind2,1);;
        _next=bind_aget(bind2,2);;
        if (it==failobj) {
            it=failobj;
            goto alt2_2;
        };
        it=rb_ary_new3(0);
        arg0=it;
        it=_start;
        arg1=it;
        bind_aset(bind2,1,_cur);
        bind_aset(bind2,2,_next);
        it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4651,1,bind2);
        _cur=bind_aget(bind2,1);;
        _next=bind_aget(bind2,2);;
        arg2=it;
        it=Left_Factor_factor(self ,arg0,arg1,arg2);
        if (it==failobj) {
            it=failobj;
            goto alt2_2;
        }
        __result=it;;

        ;
        goto accept2;
alt2_2:
        _cur=lalt22cur;
        _start=lalt22start;
        _next=lalt22next;
        __result=lalt22_result;
        ptr->pos=oldpos2;
        VALUE lalt23cur=_cur;
        VALUE lalt23start=_start;
        VALUE lalt23prev=_prev;
        VALUE lalt23next=_next;
        VALUE lalt23_result=__result;
        bind_aset(bind2,1,_start);
        bind_aset(bind2,2,_next);
        it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__b868,1,bind2);
        _start=bind_aget(bind2,1);;
        _next=bind_aget(bind2,2);;
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        };
        bind_aset(bind2,1,_prev);
        bind_aset(bind2,2,_cur);
        it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4c53,1,bind2);
        _prev=bind_aget(bind2,1);;
        _cur=bind_aget(bind2,2);;
        arg0=it;
        bind_aset(bind2,1,_next);
        it=rb_funcall(self,sy_Left_Factor_first_lp_bi_150a,1,bind2);
        _next=bind_aget(bind2,1);;
        arg1=it;
        bind_aset(bind2,1,_next);
        it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_1_rb__1906,1,bind2);
        _next=bind_aget(bind2,1);;
        arg2=it;
        it=Left_Factor_factor(self ,arg0,arg1,arg2);
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        __result=it;;

        ;
        goto accept2;
alt2_3:
        _cur=lalt23cur;
        _start=lalt23start;
        _prev=lalt23prev;
        _next=lalt23next;
        __result=lalt23_result;
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
        _cur=lalt12cur;
        _start=lalt12start;
        _prev=lalt12prev;
        _next=lalt12next;
        __result=lalt12_result;
        ptr->pos=oldpos1;
        VALUE lalt13cur=_cur;
        VALUE lalt13start=_start;
        VALUE lalt13prev=_prev;
        VALUE lalt13next=_next;
        VALUE lalt13_result=__result;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto alt1_3;
        }
        bind_aset(bind2,1,_prev);
        bind_aset(bind2,2,_cur);
        it=rb_funcall(self,sy_Left_Factor_Or_lb__ti__lp_bin_849e,1,bind2);
        _prev=bind_aget(bind2,1);;
        _cur=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        _cur=lalt13cur;
        _start=lalt13start;
        _prev=lalt13prev;
        _next=lalt13next;
        __result=lalt13_result;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto pass2;
        };
accept1:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass2;
        }
        it=__result;
        _autovar_3=it;;

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
        it=_autovar_3;
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
        __result_2=it;;
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
void Init_Left_Factor_c() {
    cls_Left_Factor=rb_define_class("Left_Factor",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    mem_Left_Factor=memo_init();
    memo_val_Left_Factor=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,mem_Left_Factor);
    rb_global_variable(&memo_val_Left_Factor);
    rb_define_method(cls_Left_Factor,"profile_report",profile_report_Left_Factor,0);
    switchhash_Left_Factor_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Left_Factor_1);;
    switchhash_Left_Factor_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Seq\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Left_Factor_2);;
    switchhash_Left_Factor_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Left_Factor_3);;
    switchhash_Left_Factor_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Left_Factor_4);;
    switchhash_Left_Factor_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Left_Factor_5);;
    switchhash_Left_Factor_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Left_Factor_6);;
    switchhash_Left_Factor_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Left_Factor_7);;
    switchhash_Left_Factor_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Left_Factor_8);;
    sy_Left_Factor_Bind_lb_src_66c4=rb_intern("Left_Factor_Bind_lb_src_66c4");
    sy_Left_Factor_Or_lb__ti__lp_bin_849e=rb_intern("Left_Factor_Or_lb__ti__lp_bin_849e");
    sy_Left_Factor_Seq_lb__lb_bin_4ce0=rb_intern("Left_Factor_Seq_lb__lb_bin_4ce0");
    sy_Left_Factor__lb_bind_lb_1_rb__1906=rb_intern("Left_Factor__lb_bind_lb_1_rb__1906");
    sy_Left_Factor__lp_bind_lb_1_rb__34a7=rb_intern("Left_Factor__lp_bind_lb_1_rb__34a7");
    sy_Left_Factor__lp_bind_lb_1_rb__b868=rb_intern("Left_Factor__lp_bind_lb_1_rb__b868");
    sy_Left_Factor__lp_src_dot_cla_2024=rb_intern("Left_Factor__lp_src_dot_cla_2024");
    sy_Left_Factor_bind_lb_1_rb__lt__7b20=rb_intern("Left_Factor_bind_lb_1_rb__lt__7b20");
    sy_Left_Factor_bind_lb_1_rb__pl__4651=rb_intern("Left_Factor_bind_lb_1_rb__pl__4651");
    sy_Left_Factor_bind_lb_1_rb__pl__4c53=rb_intern("Left_Factor_bind_lb_1_rb__pl__4c53");
    sy_Left_Factor_bind_lb_1_rb__sp__6af0=rb_intern("Left_Factor_bind_lb_1_rb__sp__6af0");
    sy_Left_Factor_first_lp_bi_150a=rb_intern("Left_Factor_first_lp_bi_150a");
    sy_Left_Factor_if_sp_bind_lb__1bed=rb_intern("Left_Factor_if_sp_bind_lb__1bed");
    sy_Left_Factor_src_dot_expr_ef77=rb_intern("Left_Factor_src_dot_expr_ef77");
    rb_define_method(cls_Left_Factor,"binds",Left_Factor_binds,2);
    rb_define_method(cls_Left_Factor,"factor",Left_Factor_factor,3);
    rb_define_method(cls_Left_Factor,"first",Left_Factor_first,1);
    rb_define_method(cls_Left_Factor,"rest",Left_Factor_rest,2);
    rb_define_method(cls_Left_Factor,"root",Left_Factor_root,0);
    rb_define_method(cls_Left_Factor,"traverse",Left_Factor_traverse,0);
    rb_define_method(cls_Left_Factor,"traverse_item",Left_Factor_traverse_item,0);
    rb_define_method(cls_Left_Factor,"visit",Left_Factor_visit,0);
}
