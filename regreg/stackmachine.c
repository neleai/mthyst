
#include "stackmachine.h"

exp *make_seq(exp* head,exp* tail) {
    exp_seq *e=malloc(sizeof(exp_seq));
    e->tp=TP_seq;
    e->head=head;
    e->tail=tail;
    return (exp *) e;
}

exp *make_switch(exp* head,exp ** alts) {
    exp_switch *e=malloc(sizeof(exp_switch));
    e->tp=TP_switch;
    e->head=head;
    e->alts=alts;
    return (exp *) e;
}

exp *make_many(long stops,exp * body) {
    exp_many *e=malloc(sizeof(exp_many));
    e->tp=TP_many;
    e->stops=stops;
    e->body=body;
    return (exp *) e;
}

exp *make_stop(long stops) {
    exp_stop *e=malloc(sizeof(exp_stop));
    e->tp=TP_stop;
    e->stops=stops;
    return (exp *) e;
}

exp *make_bind(long var) {
    exp_bind *e=malloc(sizeof(exp_bind));
    e->tp=TP_bind;
    e->var=var;
    return (exp *) e;
}

exp *make_nested(exp* body) {
    exp_nested *e=malloc(sizeof(exp_nested));
    e->tp=TP_nested;
    e->body=body;
    return (exp *) e;
}

exp *make_act(long varc,long * vars,void * fn,void * arg) {
    exp_act *e=malloc(sizeof(exp_act));
    e->tp=TP_act;
    e->varc=varc;
    e->vars=vars;
    e->fn=fn;
    e->arg=arg;
    return (exp *) e;
}

exp *make_make_lambda(exp* body) {
    exp_make_lambda *e=malloc(sizeof(exp_make_lambda));
    e->tp=TP_make_lambda;
    e->body=body;
    return (exp *) e;
}

exp *make_use_lambda(long placeholder) {
    exp_use_lambda *e=malloc(sizeof(exp_use_lambda));
    e->tp=TP_use_lambda;
    e->placeholder=placeholder;
    return (exp *) e;
}

exp *make_return(long state) {
    exp_return *e=malloc(sizeof(exp_return));
    e->tp=TP_return;
    e->state=state;
    return (exp *) e;
}

exp *make_rule(char * name,exp * body,long locals) {
    exp_rule *e=malloc(sizeof(exp_rule));
    e->tp=TP_rule;
    e->name=name;
    e->body=body;
    e->locals=locals;
    return (exp *) e;
}

exp *make_enter(exp* to) {
    exp_enter *e=malloc(sizeof(exp_enter));
    e->tp=TP_enter;
    e->to=to;
    return (exp *) e;
}

exp *make_call(char * name,exp_rule* body,long argc,long * afrom,long * ato,long locals) {
    exp_call *e=malloc(sizeof(exp_call));
    e->tp=TP_call;
    e->name=name;
    e->body=body;
    e->argc=argc;
    e->afrom=afrom;
    e->ato=ato;
    e->locals=locals;
    return (exp *) e;
}

exp *make_char(char * str) {
    exp_char *e=malloc(sizeof(exp_char));
    e->tp=TP_char;
    e->str=str;
    return (exp *) e;
}



FILE *debug;

void *match(exp* e,Args a) {
    Result r;
    r.state=0;
    char *stack_match=malloc(1000000);
    stack_match+=st_siz;
    *(stack_match-1)=FINISH;
    a.cont+=st_siz;
    *(a.cont-1)=FINISH;
    *(exp **) stack_match =(exp *) e;
    stack_match += sizeof(exp *);
    *stack_match = e->tp;
    stack_match+=1;
    while(1) {
        switch(*(stack_match-1)) {
        case RESTORE_str:
            fprintf(debug, "restoring a.str\n");
            stack_match-=sizeof(char*)+1;
            a.str=*(char**)stack_match;
            break;
        case RESTORE_stops:
            fprintf(debug, "restoring a.stops\n");
            stack_match-=sizeof(long)+1;
            a.stops=*(long*)stack_match;
            break;
        case RESTORE_closure:
            fprintf(debug, "restoring a.closure\n");
            stack_match-=sizeof(void**)+1;
            a.closure=*(void***)stack_match;
            break;
        case RESTORE_cont:
            fprintf(debug, "restoring a.cont\n");
            stack_match-=sizeof(char *)+1;
            a.cont=*(char **)stack_match;
            break;
        case RESTORE_rstr:
            fprintf(debug, "restoring r.rstr\n");
            stack_match-=sizeof(char*)+1;
            r.rstr=*(char**)stack_match;
            break;
        case RESTORE_state:
            fprintf(debug, "restoring r.state\n");
            stack_match-=sizeof(long)+1;
            r.state=*(long*)stack_match;
            break;
        case RESTORE_returned:
            fprintf(debug, "restoring r.returned\n");
            stack_match-=sizeof(void*)+1;
            r.returned=*(void**)stack_match;
            break;

        case TP_seq: {
            stack_match-=st_siz;
            exp_seq *e=*(exp_seq**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");
            SAVE_cont;
            *(exp **)a.cont=e->tail;
            a.cont+=sizeof(exp*);
            *a.cont=e->tail->tp;
            a.cont+=1;
            *(exp **) stack_match =(exp *) e->head;
            stack_match += sizeof(exp *);
            *stack_match = e->head->tp;
            stack_match+=1;
            break;
        }
        case TP_char: {
            stack_match-=st_siz;
            exp_char *e=*(exp_char**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");


            fprintf(debug,"character %s on %s\n",e->str,a.str);
            if (*a.str==*e->str) {
                SAVE_str
                a.str+=1;
                memcpy(stack_match,a.cont-st_siz,st_siz);
                stack_match+=st_siz;
                a.cont-=st_siz;
            } else FAIL;
            break;
        }
        case TP_act: {
            stack_match-=st_siz;
            exp_act *e=*(exp_act**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");

            int i;
            for(i=0; i<e->varc; i++) {
                *(void **)stack_match=a.closure[e->vars[i]];
                stack_match+=sizeof(void *);
                *(long *)stack_match =e->vars[i];
                stack_match+=sizeof(long);
                *stack_match=bind_restore;
                stack_match+=1;
            }
            void*(*fn)() =e->fn;
            r.returned=fn(a.closure,e->arg);
            memcpy(stack_match,a.cont-st_siz,st_siz);
            stack_match+=st_siz;
            a.cont-=st_siz;

            break;
        }
        case TP_stop: {
            stack_match-=st_siz;
            exp_stop *e=*(exp_stop**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");

            SAVE_stops
            a.stops|=e->stops;
            memcpy(stack_match,a.cont-st_siz,st_siz);
            stack_match+=st_siz;
            a.cont-=st_siz;
            break;
        }
        case TP_make_lambda: {
            stack_match-=st_siz;
            exp_make_lambda *e=*(exp_make_lambda**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");

            lambda_s *l=malloc(sizeof(lambda_s));
            l->body=e->body;
            l->closure=a.closure;
            r.returned=(void *) l;

            break;
        }
        case TP_use_lambda: {
            stack_match-=st_siz;
            exp_use_lambda *e=*(exp_use_lambda**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");

            SAVE_closure;
            lambda_s *l=r.returned;
            a.closure=l->closure;
            *(exp **) stack_match =(exp *) l->body;
            stack_match += sizeof(exp *);
            *stack_match = l->body->tp;
            stack_match+=1;

            break;
        }
        case TP_call: {
            stack_match-=st_siz;
            exp_call *e=*(exp_call**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");

            /*We currently do not garbage collect closures as they can be used by lambdas.
              There are several improvements possible depending on garbage collection.
              First is that we allocate closure on stack and maintain list of lambdas
              constructed by current rule. When rule returns we copy closure to stack based
              one and update lambda pointers. When we know that lambda is dead we can skip
              constructing closure, but this depends on garbage collector/running analysis to
              decide if this can happen.*/
            fprintf(debug,"calling %s\n",e->name);
            SAVE_closure
            void **closure=malloc(sizeof(void*)*e->body->locals);
            int i;
            for(i=0; i<e->argc; i++) closure[e->ato[i]]=a.closure[e->afrom[i]];
            a.closure=closure;
            *(exp **) stack_match =(exp *) e->body->body;
            stack_match += sizeof(exp *);
            *stack_match = e->body->body->tp;
            stack_match+=1;

            break;
        }
        case TP_nested: {
            stack_match-=st_siz;
            exp_nested *e=*(exp_nested**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");

            *stack_match=nested_end;
            stack_match+=1;
            *(exp **) stack_match =(exp *) e->body;
            stack_match += sizeof(exp *);
            *stack_match = e->body->tp;
            stack_match+=1;

            break;
        }
        case TP_enter: {
            stack_match-=st_siz;
            exp_enter *e=*(exp_enter**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");

            SAVE_str;
            a.str=r.returned;
            *(exp **) stack_match =(exp *) e->to;
            stack_match += sizeof(exp *);
            *stack_match = e->to->tp;
            stack_match+=1;

            break;
        }
        case TP_bind: {
            stack_match-=st_siz;
            exp_bind *e=*(exp_bind**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");

            *(void **)stack_match=a.closure[e->var];
            stack_match+=sizeof(void *);
            *(long *)stack_match =e->var;
            stack_match+=sizeof(long);
            *stack_match=bind_restore;
            stack_match+=1;
            a.closure[e->var]=r.returned;
            memcpy(stack_match,a.cont-st_siz,st_siz);
            stack_match+=st_siz;
            a.cont-=st_siz;

            break;
        }
        case TP_many: {
            stack_match-=st_siz;
            exp_many *e=*(exp_many**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");

            if (e->stops & a.stops) {
                SAVE_stops
                a.stops=a.stops&(~e->stops);
                memcpy(stack_match,a.cont-st_siz,st_siz);
                stack_match+=st_siz;
                a.cont-=st_siz;
            } else {
                *(exp **)a.cont=e;
                a.cont+=sizeof(exp*);
                *a.cont=e->tp;
                a.cont+=1;
                *(exp **) stack_match =(exp *) e->body;
                stack_match += sizeof(exp *);
                *stack_match = e->body->tp;
                stack_match+=1;
            }
            break;
        }
        case TP_return: {
            stack_match-=st_siz;
            exp_return *e=*(exp_return**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");

            r.state= e->state;

            break;
        }
        case TP_switch: {
            stack_match-=st_siz;
            exp_switch *e=*(exp_switch**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");

            *(exp **) stack_match =(exp *) e;
            stack_match += sizeof(exp *);
            *stack_match = e->tp;
            stack_match+=1;;
            *(stack_match-1)=switch2;
            *(exp **) stack_match =(exp *) e->head;
            stack_match += sizeof(exp *);
            *stack_match = e->head->tp;
            stack_match+=1;;

            break;
        }
        case switch2:
            stack_match-=st_siz;
            exp_switch *e=*(exp_switch **)stack_match;
            *(exp **) stack_match =(exp *) e->alts[r.state];
            stack_match += sizeof(exp *);
            *stack_match = e->alts[r.state]->tp;
            stack_match+=1;
            break;
        case bind_restore:
            stack_match-=sizeof(void*)+sizeof(long)+1;
            a.closure[*(long*)(stack_match+sizeof(void*))]=*(void **)stack_match;
            break;
        case nested_end:
            if (r.state) {
                memcpy(stack_match,a.cont-st_siz,st_siz);
                stack_match+=st_siz;
                a.cont-=st_siz;
            } else {
                FAIL;
            }
        case FINISH:
            return r.returned;
        }
    }
}
void *match2(exp *e,char *s) {
    Args a;
    a.cont =malloc(1000000);
    a.closure=malloc(100);
    a.str=s;
    a.stops=0;
    return match(e,a);
}

