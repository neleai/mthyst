
#include "ruby.h"
#include "stack_machine.h"
#define RETURN NULL
VALUE RegReg;
int typetest(VALUE e,char *cl) {
    return rb_obj_is_kind_of(e,rb_const_get(rb_cObject,rb_intern(cl)))==Qtrue;
}

VALUE closures_gc;

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



typedef struct {
    void **cl;
    long size;
} closures;
void cl_mark(closures *c) {
    int i;
    for(i=0; i<c->size; i++)rb_gc_mark(c->cl[i]);
}

void ** make_closure(long size) {
    closures *w=calloc(sizeof(closures),1);
    w->size=size;
    w->cl=calloc(sizeof(void *)*size,1);
    rb_ary_push(closures_gc,Data_Wrap_Struct(rb_cObject,cl_mark,NULL,w));
    return w->cl;
}

VALUE get_local(VALUE self,VALUE no) {
    closures *c;
    Data_Get_Struct(self,closures,c);
    return (VALUE) c->cl[FIX2INT(no)];
}

long callback(struct closure_s *closure,VALUE extra,void *arg) {
    closures *c;
    Data_Get_Struct(extra,closures,c);
    c->cl=closure->ary;
    closure->ary[0]=(void *) rb_funcall(extra,rb_intern(arg),0);
    return 1;
}
long bind_callback(struct closure_s *closure,VALUE extra,long arg) {
    closure->ary[arg]=closure->ary[0];
    return 1;
}
VALUE cls_lambda;
long wrap_lambda(struct closure_s * closure,VALUE extra,long arg) {
    closure->ary[0]=(void *) Data_Wrap_Struct(cls_lambda,NULL,NULL,closure->ary[0]);
    return 1;
}
VALUE unwrap_lambda(struct closure_s *closure,VALUE extra,long arg) {
    lambda_s *l;
    Data_Get_Struct(closure->ary[1],lambda_s,l);
    closure->ary[0]=l;
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
        array a;
        a.size=RARRAY_LEN(exp2);
        a.ary=malloc(sizeof(exp*)*a.size);
        for(i=0; i<a.size; i++) a.ary[i]=trans(RARRAY_PTR(exp2)[i]);
        exp *ex=(exp *)normalize_array(&a);
        free(a.ary);
        return ex;
    }
    else if (typetest(exp2,"Rcall" )) {
        exp_call e;
        e.tp=TP_call;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.name=(char *) trans(rb_iv_get(exp2,"@name"));
        e.body=(exp_rule*) trans(rb_iv_get(exp2,"@body"));
        e.args=(array*) trans(rb_iv_get(exp2,"@args"));
        e.body=getrule(e.name)->body;
        return (exp *) normalize_call(&e);
    }
    else if (typetest(exp2,"Rrule" )) {
        exp_rule e;
        e.tp=TP_rule;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.name=(char *) trans(rb_iv_get(exp2,"@name"));
        e.body=(exp *) trans(rb_iv_get(exp2,"@body"));
        e.locals=(long) trans(rb_iv_get(exp2,"@locals"));
        rule *r=getrule(e.name);
        r->body->locals=e.locals;
        r->body->name=e.name;
        r->body->body=e.body;
        return (exp*)r->body;
    }
    else if (typetest(exp2,"Ract"   )) {
        exp_act e;
        e.tp=TP_act;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.vars=(array*) trans(rb_iv_get(exp2,"@vars"));
        e.fn=(void *) trans(rb_iv_get(exp2,"@fn"));
        e.arg=(void *) trans(rb_iv_get(exp2,"@arg"));
        e.fn=callback;
        if (!strcmp(e.arg,"wrap_lambda")) e.fn=wrap_lambda;
        else if (!strcmp(e.arg,"unwrap_lambda")) e.fn=unwrap_lambda;
        return normalize_act(&e);
    }
    else if (typetest(exp2,"Rbind")) {
        exp_act e;
        e.tp=TP_act;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.vars=(array*) trans(rb_iv_get(exp2,"@vars"));
        e.fn=(void *) trans(rb_iv_get(exp2,"@fn"));
        e.arg=(void *) trans(rb_iv_get(exp2,"@arg"));
        e.fn=bind_callback;
        e.arg=e.vars->ary[0];
        return normalize_act(&e);
    }
    else if (typetest(exp2,"Rseq")) {
        exp_seq e;
        e.tp=TP_seq;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.head=(exp*) trans(rb_iv_get(exp2,"@head"));
        e.tail=(exp*) trans(rb_iv_get(exp2,"@tail"));
        return (exp *) normalize_seq(&e);
    }
    else if (typetest(exp2,"Rswitch")) {
        exp_switch e;
        e.tp=TP_switch;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.head=(exp*) trans(rb_iv_get(exp2,"@head"));
        e.alts=(array*) trans(rb_iv_get(exp2,"@alts"));
        return (exp *) normalize_switch(&e);
    }
    else if (typetest(exp2,"Rmany")) {
        exp_many e;
        e.tp=TP_many;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.stops=(long) trans(rb_iv_get(exp2,"@stops"));
        e.body=(exp *) trans(rb_iv_get(exp2,"@body"));
        return (exp *) normalize_many(&e);
    }
    else if (typetest(exp2,"Rstop")) {
        exp_stop e;
        e.tp=TP_stop;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.stops=(long) trans(rb_iv_get(exp2,"@stops"));
        return (exp *) normalize_stop(&e);
    }
    else if (typetest(exp2,"Rbind")) {
        exp_bind e;
        e.tp=TP_bind;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.var=(long) trans(rb_iv_get(exp2,"@var"));
        return (exp *) normalize_bind(&e);
    }
    else if (typetest(exp2,"Rnested")) {
        exp_nested e;
        e.tp=TP_nested;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.body=(exp*) trans(rb_iv_get(exp2,"@body"));
        return (exp *) normalize_nested(&e);
    }
    else if (typetest(exp2,"Ract")) {
        exp_act e;
        e.tp=TP_act;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.vars=(array*) trans(rb_iv_get(exp2,"@vars"));
        e.fn=(void *) trans(rb_iv_get(exp2,"@fn"));
        e.arg=(void *) trans(rb_iv_get(exp2,"@arg"));
        return (exp *) normalize_act(&e);
    }
    else if (typetest(exp2,"Rmake_lambda")) {
        exp_make_lambda e;
        e.tp=TP_make_lambda;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.body=(exp*) trans(rb_iv_get(exp2,"@body"));
        return (exp *) normalize_make_lambda(&e);
    }
    else if (typetest(exp2,"Ruse_lambda")) {
        exp_use_lambda e;
        e.tp=TP_use_lambda;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.placeholder=(long) trans(rb_iv_get(exp2,"@placeholder"));
        return (exp *) normalize_use_lambda(&e);
    }
    else if (typetest(exp2,"Rreturn")) {
        exp_return e;
        e.tp=TP_return;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.state=(long) trans(rb_iv_get(exp2,"@state"));
        return (exp *) normalize_return(&e);
    }
    else if (typetest(exp2,"Rrule")) {
        exp_rule e;
        e.tp=TP_rule;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.name=(char *) trans(rb_iv_get(exp2,"@name"));
        e.body=(exp *) trans(rb_iv_get(exp2,"@body"));
        e.locals=(long) trans(rb_iv_get(exp2,"@locals"));
        return (exp *) normalize_rule(&e);
    }
    else if (typetest(exp2,"Renter")) {
        exp_enter e;
        e.tp=TP_enter;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.to=(exp*) trans(rb_iv_get(exp2,"@to"));
        return (exp *) normalize_enter(&e);
    }
    else if (typetest(exp2,"Rcall")) {
        exp_call e;
        e.tp=TP_call;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.name=(char *) trans(rb_iv_get(exp2,"@name"));
        e.body=(exp_rule*) trans(rb_iv_get(exp2,"@body"));
        e.args=(array*) trans(rb_iv_get(exp2,"@args"));
        return (exp *) normalize_call(&e);
    }
    else if (typetest(exp2,"Rchar")) {
        exp_char e;
        e.tp=TP_char;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.str=(char *) trans(rb_iv_get(exp2,"@str"));
        return (exp *) normalize_char(&e);
    }
    else if (typetest(exp2,"Rhead")) {
        exp_head e;
        e.tp=TP_head;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        return (exp *) normalize_head(&e);
    }
    else if (typetest(exp2,"Radvance")) {
        exp_advance e;
        e.tp=TP_advance;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        return (exp *) normalize_advance(&e);
    }
    else if (typetest(exp2,"Rfinish")) {
        exp_finish e;
        e.tp=TP_finish;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        return (exp *) normalize_finish(&e);
    }
    else if (typetest(exp2,"Rcall_conted")) {
        exp_call_conted e;
        e.tp=TP_call_conted;
        e.forget=(exp*) trans(rb_iv_get(exp2,"@forget"));
        e.closure=(struct closure_s*) trans(rb_iv_get(exp2,"@closure"));
        return (exp *) normalize_call_conted(&e);
    }

}
VALUE translate(VALUE self,VALUE exp2) {
    exp *e=trans(exp2);
    return Qnil;
}

VALUE cls_Closure;
VALUE rb_match(VALUE self,VALUE exp2,VALUE str) {
    exp *e=trans(exp2);
    char *str2=RSTRING_PTR(str);
    closures *c=malloc(sizeof(closures));
    VALUE extra=  Data_Wrap_Struct(cls_Closure,NULL,free,c);
    return match2(e,(void *)extra,str2);
}
void Init_RegReg() {
    rb_global_variable(&closures_gc);
    closures_gc=rb_ary_new2(0);
    RegReg=rb_define_class("RegReg",rb_cObject);
    cls_lambda=rb_define_class("RegReg_Lambda",rb_cObject);
    rb_define_singleton_method(RegReg,"translate",translate,1);
    rb_define_singleton_method(RegReg,"match",rb_match,2);
    init_nodes();
    init_stack_machine();
    cls_Closure=rb_define_class("Closure",rb_cObject);
    rb_define_method(cls_Closure,"local",get_local,1);
}
