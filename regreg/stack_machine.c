// autogenerated see stack_machine.rc
#include "stack_machine.h"










struct s_arg_revert_local {
    char type;
    long no;
    void* var;
};
struct s_arg_revert_a_str {
    char type;
    char* str;
};
struct s_arg_revert_a_stops {
    char type;
    long stops;
};
struct s_arg_revert_a_closure {
    char type;
    struct closure_s* closure;
};
struct s_arg_revert_a_cont {
    char type;
    struct cont_s * cont;
};
struct s_arg_revert_r_rstr {
    char type;
    char* rstr;
};
struct s_arg_revert_r_state {
    char type;
    long state;
};
struct s_arg_exp {
    char type;
    exp *e;
};
struct s_arg_cont_ended {
    char type;
    struct cont_s * cnt;
};
struct s_arg_seq {
    char type;
    exp_seq* e;
};
struct s_arg_switch {
    char type;
    exp_switch* e;
};
struct s_arg_many {
    char type;
    exp_many* e;
};
struct s_arg_stop {
    char type;
    exp_stop* e;
};
struct s_arg_bind {
    char type;
    exp_bind* e;
};
struct s_arg_nested {
    char type;
    exp_nested* e;
};
struct s_arg_act {
    char type;
    exp_act* e;
};
struct s_arg_make_lambda {
    char type;
    exp_make_lambda* e;
};
struct s_arg_use_lambda {
    char type;
    exp_use_lambda* e;
};
struct s_arg_return {
    char type;
    exp_return* e;
};
struct s_arg_rule {
    char type;
    exp_rule* e;
};
struct s_arg_enter {
    char type;
    exp_enter* e;
};
struct s_arg_call {
    char type;
    exp_call* e;
};
struct s_arg_char {
    char type;
    exp_char* e;
};
struct s_arg_finish {
    char type;
    exp_finish* e;
};
struct s_arg_call_conted {
    char type;
    exp_call_conted* e;
};
struct s_arg_switch2 {
    char type;
    exp_switch* e;
};
struct s_arg_call_finished {
    char type;
    exp_call_conted * e;
};
struct s_arg_nested_end {
    char type;
};
void fail() {}

exp * call_conted(struct closure_s * c) {
    exp_call_conted * e=calloc(sizeof(exp_call_conted),1);
    e->tp=TP_call_conted;
    e->forget=NULL;
    e->closure=c;
    return e;
}

static exp * finish;
void *match(exp *e,void *extra,Args a) {
    Result r;
    Global gl;
    use_memo(&gl);
    r.state=0;
    gl.alternatives=0;
    gl.extra=extra;
    char *call_stack,*call_stack_start;
    call_stack_start=malloc(1000000);
    call_stack=call_stack_start+1000000;
    struct closure_s *closures = malloc(1000000*sizeof(struct closure_s)),*closures_start;
    closures_start=closures;
    struct cont_s    *conts    = malloc(1000000*sizeof(struct cont_s)),*conts_start   ;
    conts_start   =conts;
    {
        call_stack-=sizeof(struct s_arg_exp); ;
        struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
        s->type=finish->tp;
        s->e=finish;
    }
    {   struct cont_s *n=++conts;
        n->e=finish;
        n->previous=a.cont;
        if(n->e->forget) {
            exp_seq es;
            es.head=e->forget;
            es.tail=a.cont->cont_memo;
            n->cont_memo=normalize_seq(&es);
        }
        else {
            if (n->e==finish) n->cont_memo=finish;
            else n->cont_memo=a.cont->cont_memo;
        }
        a.cont=n;
        {
            call_stack-=sizeof(struct s_arg_cont_ended);
            struct s_arg_cont_ended *s=(struct s_arg_cont_ended *)call_stack;
            s->type=TP_cont_ended;
            s->cnt=n;
        }
    }
    {
        call_stack-=sizeof(struct s_arg_exp); ;
        struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
        s->type=e->tp;
        s->e=e;
    }
    while(1) {
        if(call_stack<call_stack_start) {
            printf("TODO grow stack");
            exit(42);
        }
        switch(*call_stack) {
        case TP_revert_local: {
            struct s_arg_revert_local *s=(struct s_arg_revert_local *)call_stack;
            long no=s->no;
            void* var=s->var;
            call_stack+=sizeof(struct s_arg_revert_local);
            a.closure->ary[no]=var;
            break;
        }
        case TP_revert_a_str: {
            struct s_arg_revert_a_str *s=(struct s_arg_revert_a_str *)call_stack;
            char* str=s->str;
            call_stack+=sizeof(struct s_arg_revert_a_str);
            a.str=str;
            break;
        }
        case TP_revert_a_stops: {
            struct s_arg_revert_a_stops *s=(struct s_arg_revert_a_stops *)call_stack;
            long stops=s->stops;
            call_stack+=sizeof(struct s_arg_revert_a_stops);
            a.stops=stops;
            break;
        }
        case TP_revert_a_closure: {
            struct s_arg_revert_a_closure *s=(struct s_arg_revert_a_closure *)call_stack;
            struct closure_s* closure=s->closure;
            call_stack+=sizeof(struct s_arg_revert_a_closure);
            a.closure=closure;
            break;
        }
        case TP_revert_a_cont: {
            struct s_arg_revert_a_cont *s=(struct s_arg_revert_a_cont *)call_stack;
            struct cont_s * cont=s->cont;
            call_stack+=sizeof(struct s_arg_revert_a_cont);
            a.cont=cont;
            break;
        }
        case TP_revert_r_rstr: {
            struct s_arg_revert_r_rstr *s=(struct s_arg_revert_r_rstr *)call_stack;
            char* rstr=s->rstr;
            call_stack+=sizeof(struct s_arg_revert_r_rstr);
            r.rstr=rstr;
            break;
        }
        case TP_revert_r_state: {
            struct s_arg_revert_r_state *s=(struct s_arg_revert_r_state *)call_stack;
            long state=s->state;
            call_stack+=sizeof(struct s_arg_revert_r_state);
            r.state=state;
            break;
        }
        case TP_cont_ended: {
            struct s_arg_cont_ended *s=(struct s_arg_cont_ended *)call_stack;
            struct cont_s * cnt=s->cnt;
            call_stack+=sizeof(struct s_arg_cont_ended);
            a.cont=cnt->previous;
            conts=cnt-1;
            break;
        }
        case TP_seq: {
            struct s_arg_seq *s=(struct s_arg_seq *)call_stack;
            exp_seq* e=s->e;
            call_stack+=sizeof(struct s_arg_seq);
            {   struct cont_s *n=++conts;
                n->e=e->tail;
                n->previous=a.cont;
                if(n->e->forget) {
                    exp_seq es;
                    es.head=e->forget;
                    es.tail=a.cont->cont_memo;
                    n->cont_memo=normalize_seq(&es);
                }
                else {
                    if (n->e==finish) n->cont_memo=finish;
                    else n->cont_memo=a.cont->cont_memo;
                }
                a.cont=n;
                {
                    call_stack-=sizeof(struct s_arg_cont_ended);
                    struct s_arg_cont_ended *s=(struct s_arg_cont_ended *)call_stack;
                    s->type=TP_cont_ended;
                    s->cnt=n;
                }
            } {
                call_stack-=sizeof(struct s_arg_exp); ;
                struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
                s->type=e->head->tp;
                s->e=e->head;
            };
            break;
        }
        case TP_switch: {
            struct s_arg_switch *s=(struct s_arg_switch *)call_stack;
            exp_switch* e=s->e;
            call_stack+=sizeof(struct s_arg_switch);
            {
                call_stack-=sizeof(struct s_arg_switch2);
                struct s_arg_switch2 *s=(struct s_arg_switch2 *)call_stack;
                s->type=TP_switch2;
                s->e=e;
            }
            memo_s mem=gl.memo_get(&gl,a.str,e->head,a.cont->cont_memo);
            if(mem.state!=-1) {
                r.state=mem.state;
            }
            else { {
                    call_stack-=sizeof(struct s_arg_exp); ;
                    struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
                    s->type=e->head->tp;
                    s->e=e->head;
                };
            }
            gl.alternatives+=1;
            break;
        }
        case TP_switch2: {
            struct s_arg_switch2 *s=(struct s_arg_switch2 *)call_stack;
            exp_switch* e=s->e;
            call_stack+=sizeof(struct s_arg_switch2);
            memo_s mem;
            mem.state=r.state;
            gl.memo_set(&gl,a.str,e->head,a.cont->cont_memo,mem);
            if (e->alts->ary[r.state]) { {
                    call_stack-=sizeof(struct s_arg_exp); ;
                    struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
                    s->type=e->alts->ary[r.state]->tp;
                    s->e=e->alts->ary[r.state];
                }
                gl.alternatives-=1;
            }
            break;
        }
        case TP_char: {
            struct s_arg_char *s=(struct s_arg_char *)call_stack;
            exp_char* e=s->e;
            call_stack+=sizeof(struct s_arg_char);
            void *(*head)()=gl.head;
            void *(*advance)()=gl.advance;
            if ((char) head(a.str)==*e->str) { {
                    call_stack-=sizeof(struct s_arg_revert_a_str);
                    struct s_arg_revert_a_str *s=(struct s_arg_revert_a_str *)call_stack;
                    s->type=TP_revert_a_str;
                    s->str=a.str;
                }
                a.str=advance(a.str);
                {
                    call_stack-=sizeof(struct s_arg_exp); ;
                    struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
                    s->type=a.cont->e->tp;
                    s->e=a.cont->e;
                }
                a.cont=a.cont->previous;
            }
            else {
                fail();
            }
            break;
        }
        case TP_finish: {
            struct s_arg_finish *s=(struct s_arg_finish *)call_stack;
            exp_finish* e=s->e;
            call_stack+=sizeof(struct s_arg_finish);
            free(call_stack_start);
            free(closures_start);
            free(conts_start);
            return a.closure->ary[0];
            break;
        }
        case TP_act: {
            struct s_arg_act *s=(struct s_arg_act *)call_stack;
            exp_act* e=s->e;
            call_stack+=sizeof(struct s_arg_act);
            {
                int i;
                for(i=0; i<e->vars->size; i++) {{
                        call_stack-=sizeof(struct s_arg_revert_local);
                        struct s_arg_revert_local *s=(struct s_arg_revert_local *)call_stack;
                        s->type=TP_revert_local;
                        s->no=e->vars->ary[i];
                        s->var=a.closure->ary[(long)e->vars->ary[i]];
                    }
                }
            }
            long(*fn)() =e->fn;
            if(fn(a.closure,gl.extra,e->arg)) {{
                    call_stack-=sizeof(struct s_arg_exp); ;
                    struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
                    s->type=a.cont->e->tp;
                    s->e=a.cont->e;
                }
                a.cont=a.cont->previous;
            }
            break;
        }
        case TP_stop: {
            struct s_arg_stop *s=(struct s_arg_stop *)call_stack;
            exp_stop* e=s->e;
            call_stack+=sizeof(struct s_arg_stop);
            {
                call_stack-=sizeof(struct s_arg_revert_a_stops);
                struct s_arg_revert_a_stops *s=(struct s_arg_revert_a_stops *)call_stack;
                s->type=TP_revert_a_stops;
                s->stops=a.stops;
            }
            a.stops|=e->stops;
            {
                call_stack-=sizeof(struct s_arg_exp); ;
                struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
                s->type=a.cont->e->tp;
                s->e=a.cont->e;
            }
            a.cont=a.cont->previous;
            break;
        }
        case TP_many: {
            struct s_arg_many *s=(struct s_arg_many *)call_stack;
            exp_many* e=s->e;
            call_stack+=sizeof(struct s_arg_many);
            {
                call_stack-=sizeof(struct s_arg_revert_a_stops);
                struct s_arg_revert_a_stops *s=(struct s_arg_revert_a_stops *)call_stack;
                s->type=TP_revert_a_stops;
                s->stops=a.stops;
            }
            if (e->stops & a.stops) {
                a.stops=a.stops&(~e->stops);
                {
                    call_stack-=sizeof(struct s_arg_exp); ;
                    struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
                    s->type=a.cont->e->tp;
                    s->e=a.cont->e;
                }
                a.cont=a.cont->previous;
            } else {
                {   struct cont_s *n=++conts;
                    n->e=e;
                    n->previous=a.cont;
                    if(n->e->forget) {
                        exp_seq es;
                        es.head=e->forget;
                        es.tail=a.cont->cont_memo;
                        n->cont_memo=normalize_seq(&es);
                    }
                    else {
                        if (n->e==finish) n->cont_memo=finish;
                        else n->cont_memo=a.cont->cont_memo;
                    }
                    a.cont=n;
                    {
                        call_stack-=sizeof(struct s_arg_cont_ended);
                        struct s_arg_cont_ended *s=(struct s_arg_cont_ended *)call_stack;
                        s->type=TP_cont_ended;
                        s->cnt=n;
                    }
                }
                {
                    call_stack-=sizeof(struct s_arg_exp); ;
                    struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
                    s->type=e->body->tp;
                    s->e=e->body;
                }
            }
            break;
        }
        case TP_call: {
            struct s_arg_call *s=(struct s_arg_call *)call_stack;
            exp_call* e=s->e;
            call_stack+=sizeof(struct s_arg_call);
            exp *fin=call_conted(a.closure);
            {
                struct cont_s *n=++conts;
                n->e=fin;
                n->previous=a.cont;
                if(n->e->forget) {
                    exp_seq es;
                    es.head=e->forget;
                    es.tail=a.cont->cont_memo;
                    n->cont_memo=normalize_seq(&es);
                }
                else {
                    if (n->e==finish) n->cont_memo=finish;
                    else n->cont_memo=a.cont->cont_memo;
                }
                a.cont=n;
                {
                    call_stack-=sizeof(struct s_arg_cont_ended);
                    struct s_arg_cont_ended *s=(struct s_arg_cont_ended *)call_stack;
                    s->type=TP_cont_ended;
                    s->cnt=n;
                }
            } {
                call_stack-=sizeof(struct s_arg_call_finished);
                struct s_arg_call_finished *s=(struct s_arg_call_finished *)call_stack;
                s->type=TP_call_finished;
                s->e=fin;
            }
            struct closure_s *c=a.closure;
            a.closure=++closures;
            a.closure->size=e->body->locals;
            a.closure->ary=calloc(sizeof(void*),a.closure->size);
            int i;
            for(i=0; i<e->args->size; i++) a.closure->ary[i+1]=c->ary[(long) e->args->ary[i]];
            {
                call_stack-=sizeof(struct s_arg_exp); ;
                struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
                s->type=e->body->body->tp;
                s->e=e->body->body;
            }
            break;
        }
        case TP_call_finished: {
            struct s_arg_call_finished *s=(struct s_arg_call_finished *)call_stack;
            exp_call_conted * e=s->e;
            call_stack+=sizeof(struct s_arg_call_finished);
            e->closure->ary[0]=a.closure->ary[0];
            free(a.closure->ary);
            closures=a.closure-1;
            a.closure=e->closure;
            free(e);
            break;
        }
        case TP_call_conted: {
            struct s_arg_call_conted *s=(struct s_arg_call_conted *)call_stack;
            exp_call_conted* e=s->e;
            call_stack+=sizeof(struct s_arg_call_conted);
            {
                call_stack-=sizeof(struct s_arg_revert_a_closure);
                struct s_arg_revert_a_closure *s=(struct s_arg_revert_a_closure *)call_stack;
                s->type=TP_revert_a_closure;
                s->closure=a.closure;
            }
            e->closure->ary[0]=a.closure->ary[0];
            a.closure=e->closure;
            {
                call_stack-=sizeof(struct s_arg_exp); ;
                struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
                s->type=a.cont->e->tp;
                s->e=a.cont->e;
            }
            a.cont=a.cont->previous;
            break;
        }
        case TP_nested: {
            struct s_arg_nested *s=(struct s_arg_nested *)call_stack;
            exp_nested* e=s->e;
            call_stack+=sizeof(struct s_arg_nested);
            {
                call_stack-=sizeof(struct s_arg_nested_end);
                struct s_arg_nested_end *s=(struct s_arg_nested_end *)call_stack;
                s->type=TP_nested_end;
            } {
                call_stack-=sizeof(struct s_arg_exp); ;
                struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
                s->type=e->body->tp;
                s->e=e->body;
            }
            break;
        }
        case TP_nested_end: {
            struct s_arg_nested_end *s=(struct s_arg_nested_end *)call_stack;

            call_stack+=sizeof(struct s_arg_nested_end);
            long st=r.state;
            r.state=0;
            if (st) {{
                    call_stack-=sizeof(struct s_arg_exp); ;
                    struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
                    s->type=a.cont->e->tp;
                    s->e=a.cont->e;
                }
                a.cont=a.cont->previous;
            }
            else {
                fail();
            }
            break;
        }
        case TP_return: {
            struct s_arg_return *s=(struct s_arg_return *)call_stack;
            exp_return* e=s->e;
            call_stack+=sizeof(struct s_arg_return);
            {
                call_stack-=sizeof(struct s_arg_revert_r_state);
                struct s_arg_revert_r_state *s=(struct s_arg_revert_r_state *)call_stack;
                s->type=TP_revert_r_state;
                s->state=r.state;
            }
            r.state= e->state;
            break;
        }
        case TP_make_lambda: {
            struct s_arg_make_lambda *s=(struct s_arg_make_lambda *)call_stack;
            exp_make_lambda* e=s->e;
            call_stack+=sizeof(struct s_arg_make_lambda);
            lambda_s *l=malloc(sizeof(lambda_s));
            l->body=e->body;
            l->closure=a.closure;
            a.closure->ary[0]=l;
            {
                call_stack-=sizeof(struct s_arg_exp); ;
                struct s_arg_exp *s=(struct s_arg_exp *)call_stack;
                s->type=a.cont->e->tp;
                s->e=a.cont->e;
            }
            a.cont=a.cont->previous;
            break;
        }
        }
    }
}

void *match2(exp *e,void *extra,char *s) {
    Args a;
    struct closure_s *cl;
    cl=a.closure=calloc(sizeof(struct closure_s),1);
    a.closure->size=12;
    a.closure->ary=malloc(100);
    a.str=s;
    a.stops=0;
    void *r= match(e,extra,a);
    free(cl->ary);
    free(cl);
    return r;
}


void init_stack_machine() {
    finish=calloc(sizeof(exp_finish),1);
    finish->tp=TP_finish;

}
