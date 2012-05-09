
#include "ruby.h"
#include "stackmachine.h"
#define RETURN NULL
VALUE RegReg;
int typetest(VALUE e,char *cl) {
    return rb_obj_is_kind_of(e,rb_const_get(rb_cObject,rb_intern(cl)))==Qtrue;
}

typedef struct rule {
    char *name;
    exp_rule *body;
    struct rule *next;
} rule;
rule* rules;
rule* getrule(char *name) {
    rule *r;
    for (r=rules; r; r=r->next)
        if (!strcmp(name,r->name)) return r;
    r=calloc(sizeof(rule),1);
    r->body=calloc(sizeof(exp_rule),1);
    r->body->tp=TP_rule;
    r->name=strdup(name);
    r->next=rules;
    rules=r;
    return r;
}


VALUE callback(void **closure,void *arg) {
    VALUE clos=rb_funcall(rb_const_get(rb_cObject,rb_intern("Closure")),rb_intern("new"),0);
    return rb_funcall(clos,rb_intern(arg),0);
}


exp * trans(VALUE exp2) {
    int i;
    if      (typetest(exp2,"Fixnum")) {
        return (exp *)FIX2LONG(exp2);
    }
    else if (exp2==Qnil             ) {
        return NULL;
    }
    else if (typetest(exp2,"String")) {
        return (exp *)normalize_string(RSTRING_PTR(exp2));
    }
    else if (typetest(exp2,"Array" )) {
        exp **ary=malloc(sizeof(exp*)*RARRAY_LEN(exp2));
        for(i=0; i<RARRAY_LEN(exp2); i++) ary[i]=trans(RARRAY_PTR(exp2)[i]);
        return (exp *)normalize_array(ary,RARRAY_LEN(exp2));
    }
    else if (typetest(exp2,"Rcall" )) {
        char *name=trans(rb_iv_get(exp2,"@name"));
        exp_call e;
        e.tp=TP_call;
        e.name=name;
        e.locals=trans(rb_iv_get(exp2,"@locals"));
        e.body=getrule(name)->body;
        e.argc=0;
        return (exp *) normalize_call(&e);
    }
    else if (typetest(exp2,"Rrule" )) {
        char *name=trans(rb_iv_get(exp2,"@name"));
        exp *body=trans(rb_iv_get(exp2,"@body"));
        rule *r=getrule(name);
        r->body->body=body;
        return r->body;
    }
    else if (typetest(exp2,"Ract"   )) {
        exp_act e;
        e.tp=TP_act;
        e.varc=0;
        e.fn=callback;
        e.arg=trans(rb_iv_get(exp2,"@arg"));
        return normalize_act(&e);
    }
    else if (typetest(exp2,"Rseq")) {
        exp_seq e;
        e.tp=TP_seq;
        e.head=(exp*) trans(rb_iv_get(exp2,"@head"));
        e.tail=(exp*) trans(rb_iv_get(exp2,"@tail"));
        return (exp *) normalize_seq(&e);
    }
    else if (typetest(exp2,"Rswitch")) {
        exp_switch e;
        e.tp=TP_switch;
        e.head=(exp*) trans(rb_iv_get(exp2,"@head"));
        e.alts=(exp **) trans(rb_iv_get(exp2,"@alts"));
        return (exp *) normalize_switch(&e);
    }
    else if (typetest(exp2,"Rmany")) {
        exp_many e;
        e.tp=TP_many;
        e.stop=(long) trans(rb_iv_get(exp2,"@stop"));
        e.ex=(exp *) trans(rb_iv_get(exp2,"@ex"));
        return (exp *) normalize_many(&e);
    }
    else if (typetest(exp2,"Rstop")) {
        exp_stop e;
        e.tp=TP_stop;
        e.stop=(long) trans(rb_iv_get(exp2,"@stop"));
        return (exp *) normalize_stop(&e);
    }
    else if (typetest(exp2,"Rbind")) {
        exp_bind e;
        e.tp=TP_bind;
        e.var=(long) trans(rb_iv_get(exp2,"@var"));
        return (exp *) normalize_bind(&e);
    }
    else if (typetest(exp2,"Rnested")) {
        exp_nested e;
        e.tp=TP_nested;
        e.body=(exp*) trans(rb_iv_get(exp2,"@body"));
        return (exp *) normalize_nested(&e);
    }
    else if (typetest(exp2,"Ract")) {
        exp_act e;
        e.tp=TP_act;
        e.varc=(long) trans(rb_iv_get(exp2,"@varc"));
        e.vars=(long *) trans(rb_iv_get(exp2,"@vars"));
        e.fn=(void *) trans(rb_iv_get(exp2,"@fn"));
        e.arg=(void *) trans(rb_iv_get(exp2,"@arg"));
        return (exp *) normalize_act(&e);
    }
    else if (typetest(exp2,"Rmake_lambda")) {
        exp_make_lambda e;
        e.tp=TP_make_lambda;
        e.body=(exp*) trans(rb_iv_get(exp2,"@body"));
        return (exp *) normalize_make_lambda(&e);
    }
    else if (typetest(exp2,"Ruse_lambda")) {
        exp_use_lambda e;
        e.tp=TP_use_lambda;
        e.placeholder=(long) trans(rb_iv_get(exp2,"@placeholder"));
        return (exp *) normalize_use_lambda(&e);
    }
    else if (typetest(exp2,"Rreturn")) {
        exp_return e;
        e.tp=TP_return;
        e.state=(long) trans(rb_iv_get(exp2,"@state"));
        return (exp *) normalize_return(&e);
    }
    else if (typetest(exp2,"Rrule")) {
        exp_rule e;
        e.tp=TP_rule;
        e.name=(char *) trans(rb_iv_get(exp2,"@name"));
        e.body=(exp *) trans(rb_iv_get(exp2,"@body"));
        return (exp *) normalize_rule(&e);
    }
    else if (typetest(exp2,"Renter")) {
        exp_enter e;
        e.tp=TP_enter;
        e.to=(exp*) trans(rb_iv_get(exp2,"@to"));
        return (exp *) normalize_enter(&e);
    }
    else if (typetest(exp2,"Rcall")) {
        exp_call e;
        e.tp=TP_call;
        e.name=(char *) trans(rb_iv_get(exp2,"@name"));
        e.body=(exp_rule*) trans(rb_iv_get(exp2,"@body"));
        e.argc=(long) trans(rb_iv_get(exp2,"@argc"));
        e.afrom=(long *) trans(rb_iv_get(exp2,"@afrom"));
        e.ato=(long *) trans(rb_iv_get(exp2,"@ato"));
        e.locals=(long) trans(rb_iv_get(exp2,"@locals"));
        return (exp *) normalize_call(&e);
    }
    else if (typetest(exp2,"Rchar")) {
        exp_char e;
        e.tp=TP_char;
        e.str=(char *) trans(rb_iv_get(exp2,"@str"));
        return (exp *) normalize_char(&e);
    }

}
VALUE translate(VALUE self,VALUE exp2) {
    exp *e=trans(exp2);
    return Qnil;
}
VALUE rb_match(VALUE self,VALUE exp2,VALUE str) {
    exp *e=trans(exp2);
    char *str2=RSTRING_PTR(str);
    return match2(e,str2);
}
extern FILE * debug;
void Init_RegReg() {
    debug=fopen("log","w");
    RegReg=rb_define_class("RegReg",rb_cObject);
    rb_define_singleton_method(RegReg,"translate",translate,1);
    rb_define_singleton_method(RegReg,"match",rb_match,2);
    init_nodes();
}
