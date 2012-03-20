#include "cthyst.h"
#include "memo.c"
VALUE cls_Detect_First;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_First_cant_fail(VALUE self );
VALUE Detect_First_combine_or(VALUE self ,VALUE a0,VALUE a1,VALUE a2);
VALUE Detect_First_combine_or(VALUE self ,VALUE,VALUE,VALUE);
VALUE Detect_First_combine_seq(VALUE self ,VALUE a0,VALUE a1);
VALUE Detect_First_combine_seq(VALUE self ,VALUE,VALUE);
VALUE Detect_First_itrans(VALUE self );
VALUE Detect_First_must_empty(VALUE self );
VALUE Detect_First_object_only(VALUE self );
VALUE Detect_First_root(VALUE self );
VALUE Detect_First_string_only(VALUE self );
VALUE Traverser_Clone2_traverse(VALUE self );
VALUE switchhash_Detect_First_1;
VALUE switchhash_Detect_First_2;
VALUE switchhash_Detect_First_3;
VALUE switchhash_Detect_First_4;
static VALUE sy_Detect_First_Seq_lb__ti__lp_bi_a321;
static VALUE sy_Detect_First__at__contex_5f56;
static VALUE sy_Detect_First__at__contex_cdb3;
static VALUE sy_Detect_First__do_rules_eq__le__ab16;
static VALUE sy_Detect_First__lp_cant_fa_17ef;
static VALUE sy_Detect_First__lp_must_em_43e9;
static VALUE sy_Detect_First_bind_lb_1_rb__dot__642a;
static VALUE sy_Detect_First_bind_lb_1_rb__dot__a482;
static VALUE sy_Detect_First_bind_lb_1_rb__lb__0f18;
static VALUE sy_Detect_First_bind_lb_1_rb__lb__75a5;
static VALUE sy_Detect_First_bind_lb_1_rb__lb__fa06;
static VALUE sy_Detect_First_bind_lb_1_rb__pl__4651;
static VALUE sy_Detect_First_src_25d9;
static VALUE sy_Detect_First_src_dot_ary_d5cf;
static VALUE sy_Detect_First_src_dot_rule_5acf;
static VALUE sy_Detect_First_src_dot_rule_a719;
VALUE profile_report_Detect_First(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Detect_First_cant_fail(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_e,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _e=it;;
    bind_aset(bind2,1,_e);
    it=rb_funcall(self,sy_Detect_First__lp_cant_fa_17ef,1,bind2);
    _e=bind_aget(bind2,1);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    it=_e;
    __result=it;;

fail:
    return it;
}
VALUE Detect_First_combine_or(VALUE self ,VALUE a0,VALUE a1,VALUE a2) {
    VALUE vals[3];
    VALUE it ,_cls,_autovar,_ary,_newlist,_list,_lat,__result,_n;
    VALUE bind2=bind_new2(16);
    _cls=a0;;
    _lat=a1;;
    _list=a2;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    VALUE lalt12autovar=_autovar;
    VALUE lalt12ary=_ary;
    VALUE lalt12newlist=_newlist;
    VALUE lalt12list=_list;
    VALUE lalt12lat=_lat;
    VALUE lalt12_result=__result;
    it=_cls;
    arg0=it;
    it=Amethyst_clas(self ,arg0);
    if (it==failobj) {
        it=failobj;
        goto alt1_2;
    }
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar);
    ptr->pos=ptr->len;
    it=rb_funcall(self,sy_Detect_First_src_dot_ary_d5cf,1,bind2);
    _ary=it;;
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
    it=rb_ary_new3(0);
    _newlist=it;;
    bind_aset(bind2,1,_list);
    bind_aset(bind2,2,_ary);
    bind_aset(bind2,3,_newlist);
    bind_aset(bind2,4,_lat);
    it=rb_funcall(self,sy_Detect_First_bind_lb_1_rb__dot__642a,1,bind2);
    _list=bind_aget(bind2,1);;
    _ary=bind_aget(bind2,2);;
    _newlist=bind_aget(bind2,3);;
    _lat=bind_aget(bind2,4);;
    it=_cls;
    arg0=it;
    it=_lat;
    arg1=it;
    it=_newlist;
    arg2=it;
    it=Detect_First_combine_or(self ,arg0,arg1,arg2);
    if (it==failobj) {
        it=failobj;
        goto alt1_2;
    }
    __result=it;;

    ;
    goto accept1;
alt1_2:
    _autovar=lalt12autovar;
    _ary=lalt12ary;
    _newlist=lalt12newlist;
    _list=lalt12list;
    _lat=lalt12lat;
    __result=lalt12_result;
    ptr->pos=oldpos1;
    VALUE lalt13autovar=_autovar;
    VALUE lalt13ary=_ary;
    VALUE lalt13newlist=_newlist;
    VALUE lalt13list=_list;
    VALUE lalt13lat=_lat;
    VALUE lalt13_result=__result;
    VALUE lalt13n=_n;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto alt1_3;
    }
    _n=it;;
    bind_aset(bind2,1,_list);
    bind_aset(bind2,2,_n);
    it=rb_funcall(self,sy_Detect_First_bind_lb_1_rb__dot__a482,1,bind2);
    _list=bind_aget(bind2,1);;
    _n=bind_aget(bind2,2);;
    _newlist=it;;
    it=_cls;
    arg0=it;
    it=_lat;
    arg1=it;
    it=_newlist;
    arg2=it;
    it=Detect_First_combine_or(self ,arg0,arg1,arg2);
    if (it==failobj) {
        it=failobj;
        goto alt1_3;
    }
    __result=it;;

    ;
    goto accept1;
alt1_3:
    _autovar=lalt13autovar;
    _ary=lalt13ary;
    _newlist=lalt13newlist;
    _list=lalt13list;
    _lat=lalt13lat;
    __result=lalt13_result;
    _n=lalt13n;
    ptr->pos=oldpos1;
    VALUE lalt14autovar=_autovar;
    VALUE lalt14ary=_ary;
    VALUE lalt14newlist=_newlist;
    VALUE lalt14list=_list;
    VALUE lalt14lat=_lat;
    VALUE lalt14_result=__result;
    VALUE lalt14n=_n;
    VALUE lalt14cls=_cls;
    it=Qnil;
    if (ptr->pos<ptr->len) {
        it=failobj;
        goto alt1_4;
    }
    bind_aset(bind2,1,_cls);
    bind_aset(bind2,2,_list);
    it=rb_funcall(self,sy_Detect_First_bind_lb_1_rb__lb__0f18,1,bind2);
    _cls=bind_aget(bind2,1);;
    _list=bind_aget(bind2,2);;
    __result=it;;

    ;
    goto accept1;
alt1_4:
    _autovar=lalt14autovar;
    _ary=lalt14ary;
    _newlist=lalt14newlist;
    _list=lalt14list;
    _lat=lalt14lat;
    __result=lalt14_result;
    _n=lalt14n;
    _cls=lalt14cls;
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
VALUE Detect_First_combine_seq(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_s,_cls,_prefix,__result,_autovar,_ary,_autovar_2,_autovar_3,_rest,_autovar_4,_autovar_5;
    VALUE bind2=bind_new2(16);
    _cls=a0;;
    _prefix=a1;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    VALUE lalt12s=_s;
    VALUE lalt12prefix=_prefix;
    VALUE lalt12_result=__result;
    it=Detect_First_must_empty(self );
    if (it==failobj) {
        it=failobj;
        goto alt1_2;
    }
    _s=it;;
    it=_cls;
    arg0=it;
    bind_aset(bind2,1,_prefix);
    bind_aset(bind2,2,_s);
    it=rb_funcall(self,sy_Detect_First_bind_lb_1_rb__pl__4651,1,bind2);
    _prefix=bind_aget(bind2,1);;
    _s=bind_aget(bind2,2);;
    arg1=it;
    it=Detect_First_combine_seq(self ,arg0,arg1);
    if (it==failobj) {
        it=failobj;
        goto alt1_2;
    }
    __result=it;;

    ;
    goto accept1;
alt1_2:
    _s=lalt12s;
    _prefix=lalt12prefix;
    __result=lalt12_result;
    ptr->pos=oldpos1;
    VALUE lalt13s=_s;
    VALUE lalt13prefix=_prefix;
    VALUE lalt13_result=__result;
    VALUE lalt13autovar=_autovar;
    VALUE lalt13ary=_ary;
    VALUE lalt13autovar_2=_autovar_2;
    VALUE lalt13autovar_3=_autovar_3;
    VALUE lalt13rest=_rest;
    VALUE lalt13cls=_cls;
    it=_cls;
    arg0=it;
    it=Amethyst_clas(self ,arg0);
    if (it==failobj) {
        it=failobj;
        goto alt1_3;
    }
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar);
    ptr->pos=ptr->len;
    it=rb_funcall(self,sy_Detect_First_src_dot_ary_d5cf,1,bind2);
    _ary=it;;
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
    it=rb_ary_new3(0);
    _autovar_2=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE lalt22autovar_3=_autovar_3;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_2;
        }
        _autovar_3=it;;
        it=AmethystCore_append(self,_autovar_2,_autovar_3);
        ;
        goto accept2;
alt2_2:
        _autovar_3=lalt22autovar_3;
        ptr->pos=oldpos2;
        VALUE lalt23autovar_3=_autovar_3;
        stop1=1;
        ;
        goto accept2;
alt2_3:
        _autovar_3=lalt23autovar_3;
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto alt1_3;
        };
accept2:
        ;
    }
    it=_autovar_2;
    _rest=it;;
    bind_aset(bind2,1,_cls);
    bind_aset(bind2,2,_ary);
    bind_aset(bind2,3,_prefix);
    bind_aset(bind2,4,_rest);
    it=rb_funcall(self,sy_Detect_First_bind_lb_1_rb__lb__75a5,1,bind2);
    _cls=bind_aget(bind2,1);;
    _ary=bind_aget(bind2,2);;
    _prefix=bind_aget(bind2,3);;
    _rest=bind_aget(bind2,4);;
    __result=it;;

    ;
    goto accept1;
alt1_3:
    _s=lalt13s;
    _prefix=lalt13prefix;
    __result=lalt13_result;
    _autovar=lalt13autovar;
    _ary=lalt13ary;
    _autovar_2=lalt13autovar_2;
    _autovar_3=lalt13autovar_3;
    _rest=lalt13rest;
    _cls=lalt13cls;
    ptr->pos=oldpos1;
    VALUE lalt14s=_s;
    VALUE lalt14prefix=_prefix;
    VALUE lalt14_result=__result;
    VALUE lalt14autovar=_autovar;
    VALUE lalt14ary=_ary;
    VALUE lalt14autovar_2=_autovar_2;
    VALUE lalt14autovar_3=_autovar_3;
    VALUE lalt14rest=_rest;
    VALUE lalt14cls=_cls;
    VALUE lalt14autovar_4=_autovar_4;
    VALUE lalt14autovar_5=_autovar_5;
    it=rb_ary_new3(0);
    _autovar_4=it;;
    int stop2=0;
    while(!stop2) {
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        VALUE lalt32autovar_5=_autovar_5;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_2;
        }
        _autovar_5=it;;
        it=AmethystCore_append(self,_autovar_4,_autovar_5);
        ;
        goto accept3;
alt3_2:
        _autovar_5=lalt32autovar_5;
        ptr->pos=oldpos3;
        VALUE lalt33autovar_5=_autovar_5;
        stop2=1;
        ;
        goto accept3;
alt3_3:
        _autovar_5=lalt33autovar_5;
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto alt1_4;
        };
accept3:
        ;
    }
    it=_autovar_4;
    _ary=it;;
    bind_aset(bind2,1,_prefix);
    bind_aset(bind2,2,_ary);
    it=rb_funcall(self,sy_Detect_First_Seq_lb__ti__lp_bi_a321,1,bind2);
    _prefix=bind_aget(bind2,1);;
    _ary=bind_aget(bind2,2);;
    __result=it;;

    ;
    goto accept1;
alt1_4:
    _s=lalt14s;
    _prefix=lalt14prefix;
    __result=lalt14_result;
    _autovar=lalt14autovar;
    _ary=lalt14ary;
    _autovar_2=lalt14autovar_2;
    _autovar_3=lalt14autovar_3;
    _rest=lalt14rest;
    _cls=lalt14cls;
    _autovar_4=lalt14autovar_4;
    _autovar_5=lalt14autovar_5;
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
VALUE Detect_First_itrans(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_autovar_10,_rules,_autovar_11,_autovar_12,__result,_autovar_13;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_Detect_First__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    it=rb_ary_new3(0);
    _autovar_3=it;;
    int stop1=0;
    while(!stop1) {
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_1,rb_obj_class(ame_curobj2(ptr))))) {
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
            it=rb_funcall(self,sy_Detect_First_bind_lb_1_rb__lb__fa06,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_Detect_First__do_rules_eq__le__ab16,1,bind2);
            it=rb_funcall(self,sy_Detect_First_src_dot_rule_5acf,1,bind2);
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
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_2,rb_obj_class(ame_curobj2(ptr))))) {
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
                    it=Detect_First_root(self );
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
            it=rb_funcall(self,sy_Detect_First_src_dot_rule_a719,1,bind2);
            _rules=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_Detect_First_src_25d9,1,bind2);
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
    it=rb_funcall(self,sy_Detect_First__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_13=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE Detect_First_must_empty(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_e,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _e=it;;
    bind_aset(bind2,1,_e);
    it=rb_funcall(self,sy_Detect_First__lp_must_em_43e9,1,bind2);
    _e=bind_aget(bind2,1);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    it=_e;
    __result=it;;

fail:
    return it;
}
VALUE Detect_First_object_only(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_4,rb_obj_class(ame_curobj2(ptr))))) {
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
        _autovar_2=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_2);
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
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE lalt12autovar_4=_autovar_4;
            it=AmethystCore_anything(self );
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
        it=_autovar_3;
        _autovar_5=it;;

        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto fail;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_5;
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
VALUE Detect_First_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=Traverser_Clone2_traverse(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    __result=it;;

fail:
    return it;
}
VALUE Detect_First_string_only(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_3,rb_obj_class(ame_curobj2(ptr))))) {
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
        _autovar_2=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_2);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '^':
            ;
        case '`' ... 'q':
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
            goto pass1;
        }
success2:
        *ptr=oldpass2;
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE lalt12autovar_4=_autovar_4;
            it=AmethystCore_anything(self );
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
        it=_autovar_3;
        _autovar_5=it;;

        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto fail;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_5;
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
void Init_Detect_First_c() {
    cls_Detect_First=rb_define_class("Detect_First",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Detect_First,"profile_report",profile_report_Detect_First,0);
    switchhash_Detect_First_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_First_1);;
    switchhash_Detect_First_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_First_2);;
    switchhash_Detect_First_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_First_3);;
    switchhash_Detect_First_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_First_4);;
    sy_Detect_First_Seq_lb__ti__lp_bi_a321=rb_intern("Detect_First_Seq_lb__ti__lp_bi_a321");
    sy_Detect_First__at__contex_5f56=rb_intern("Detect_First__at__contex_5f56");
    sy_Detect_First__at__contex_cdb3=rb_intern("Detect_First__at__contex_cdb3");
    sy_Detect_First__do_rules_eq__le__ab16=rb_intern("Detect_First__do_rules_eq__le__ab16");
    sy_Detect_First__lp_cant_fa_17ef=rb_intern("Detect_First__lp_cant_fa_17ef");
    sy_Detect_First__lp_must_em_43e9=rb_intern("Detect_First__lp_must_em_43e9");
    sy_Detect_First_bind_lb_1_rb__dot__642a=rb_intern("Detect_First_bind_lb_1_rb__dot__642a");
    sy_Detect_First_bind_lb_1_rb__dot__a482=rb_intern("Detect_First_bind_lb_1_rb__dot__a482");
    sy_Detect_First_bind_lb_1_rb__lb__0f18=rb_intern("Detect_First_bind_lb_1_rb__lb__0f18");
    sy_Detect_First_bind_lb_1_rb__lb__75a5=rb_intern("Detect_First_bind_lb_1_rb__lb__75a5");
    sy_Detect_First_bind_lb_1_rb__lb__fa06=rb_intern("Detect_First_bind_lb_1_rb__lb__fa06");
    sy_Detect_First_bind_lb_1_rb__pl__4651=rb_intern("Detect_First_bind_lb_1_rb__pl__4651");
    sy_Detect_First_src_25d9=rb_intern("Detect_First_src_25d9");
    sy_Detect_First_src_dot_ary_d5cf=rb_intern("Detect_First_src_dot_ary_d5cf");
    sy_Detect_First_src_dot_rule_5acf=rb_intern("Detect_First_src_dot_rule_5acf");
    sy_Detect_First_src_dot_rule_a719=rb_intern("Detect_First_src_dot_rule_a719");
    rb_define_method(cls_Detect_First,"cant_fail",Detect_First_cant_fail,0);
    rb_define_method(cls_Detect_First,"combine_or",Detect_First_combine_or,3);
    rb_define_method(cls_Detect_First,"combine_seq",Detect_First_combine_seq,2);
    rb_define_method(cls_Detect_First,"itrans",Detect_First_itrans,0);
    rb_define_method(cls_Detect_First,"must_empty",Detect_First_must_empty,0);
    rb_define_method(cls_Detect_First,"object_only",Detect_First_object_only,0);
    rb_define_method(cls_Detect_First,"root",Detect_First_root,0);
    rb_define_method(cls_Detect_First,"string_only",Detect_First_string_only,0);
}
