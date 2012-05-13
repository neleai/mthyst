
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

exp *make_call(char * name,exp_rule* body,long argc,long * afrom) {
    exp_call *e=malloc(sizeof(exp_call));
    e->tp=TP_call;
    e->name=name;
    e->body=body;
    e->argc=argc;
    e->afrom=afrom;
    return (exp *) e;
}

exp *make_char(char * str) {
    exp_char *e=malloc(sizeof(exp_char));
    e->tp=TP_char;
    e->str=str;
    return (exp *) e;
}



FILE *debug;
void *match(exp* e,void *extra,Args a) {
    Result r;
    Global gl;
    gl.extra=extra;
    r.state=0;
    char   *stack_match=malloc(1000000);
    gl.stack_cont=malloc(1000000);
    char *o_stack_match=stack_match;
    t_cont *o_stack_cont=gl.stack_cont;
    stack_match+=st_siz;
    *(stack_match-1)=FINISH;
    a.cont=gl.stack_cont;
    gl.stack_cont->tp=FINISH;
    gl.stack_cont+=1;
    *(exp **) stack_match =(exp *) e;
    stack_match += sizeof(exp *);
    *stack_match = e->tp;
    stack_match+=1;
    while(1) {
        switch(*(stack_match-1)) {
        case RESTORE_a_str:
            if (0) fprintf(debug, "restoring a.str\n");
            stack_match-=sizeof(char*)+1;
            a.str=*(char**)stack_match;
            break;
        case RESTORE_a_stops:
            if (0) fprintf(debug, "restoring a.stops\n");
            stack_match-=sizeof(long)+1;
            a.stops=*(long*)stack_match;
            break;
        case RESTORE_a_closure:
            if (1) fprintf(debug, "restoring a.closure\n");
            stack_match-=sizeof(void**)+1;
            a.closure=*(void***)stack_match;
            break;
        case RESTORE_a_cont:
            if (0) fprintf(debug, "restoring a.cont\n");
            stack_match-=sizeof(t_cont *)+1;
            a.cont=*(t_cont **)stack_match;
            break;
        case RESTORE_r_rstr:
            if (0) fprintf(debug, "restoring r.rstr\n");
            stack_match-=sizeof(char*)+1;
            r.rstr=*(char**)stack_match;
            break;
        case RESTORE_r_state:
            if (0) fprintf(debug, "restoring r.state\n");
            stack_match-=sizeof(long)+1;
            r.state=*(long*)stack_match;
            break;
        case RESTORE_r_returned:
            if (0) fprintf(debug, "restoring r.returned\n");
            stack_match-=sizeof(void*)+1;
            r.returned=*(void**)stack_match;
            break;
        case RESTORE_gl_stack_cont:
            if (0) fprintf(debug, "restoring gl.stack_cont\n");
            stack_match-=sizeof(t_cont *)+1;
            gl.stack_cont=*(t_cont **)stack_match;
            break;
        case RESTORE_gl_stack_closure:
            if (0) fprintf(debug, "restoring gl.stack_closure\n");
            stack_match-=sizeof(void ***)+1;
            gl.stack_closure=*(void ****)stack_match;
            break;
        case RESTORE_gl_extra:
            if (0) fprintf(debug, "restoring gl.extra\n");
            stack_match-=sizeof(void *)+1;
            gl.extra=*(void **)stack_match;
            break;

        case TP_seq: {
            stack_match-=st_siz;
            exp_seq *e=*(exp_seq**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");
            SAVE_a_cont;
            SAVE_gl_stack_cont;

            gl.stack_cont->tp=e->tail->tp;
            gl.stack_cont->e=e->tail;
            gl.stack_cont->previous=a.cont;
            a.cont=gl.stack_cont;
            gl.stack_cont+=1;
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
            SAVE_a_str;


            fprintf(debug,"character %s on %s\n",e->str,a.str);
            if (*a.str==*e->str) {
                a.str+=1;
                memcpy(stack_match,a.cont,st_siz);
                stack_match+=st_siz;
                a.cont=a.cont->previous;
            } else FAIL;
            break;
        }
        case TP_act: {
            stack_match-=st_siz;
            exp_act *e=*(exp_act**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");
            SAVE_r_returned;

            int i;
            for(i=0; i<e->varc; i++) {
                fprintf(debug,"saving %i %i\n",a.closure[e->vars[i]],e->vars[i]);
                *(void **)stack_match=a.closure[e->vars[i]];
                stack_match+=sizeof(void *);
                *(long *)stack_match =e->vars[i];
                stack_match+=sizeof(long);
                *stack_match=bind_restore;
                stack_match+=1;
            }
            void*(*fn)() =e->fn;
            a.closure[0]=r.returned;
            fn(a.closure,gl.extra,e->arg);
            r.returned=a.closure[0];
            memcpy(stack_match,a.cont,st_siz);
            stack_match+=st_siz;
            a.cont=a.cont->previous;

            break;
        }
        case TP_stop: {
            stack_match-=st_siz;
            exp_stop *e=*(exp_stop**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");
            SAVE_a_stops;

            a.stops|=e->stops;
            memcpy(stack_match,a.cont,st_siz);
            stack_match+=st_siz;
            a.cont=a.cont->previous;
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
            SAVE_a_closure;

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
            SAVE_a_closure;
            SAVE_a_cont;
            SAVE_gl_stack_cont;

            /*We currently do not garbage collect closures as they can be used by lambdas.
              There are several improvements possible depending on garbage collection.
              First is that we allocate closure on stack and maintain list of lambdas
              constructed by current rule. When rule returns we copy closure to stack based
              one and update lambda pointers. When we know that lambda is dead we can skip
              constructing closure, but this depends on garbage collector/running analysis to
              decide if this can happen.*/
            fprintf(debug,"calling %s\n",e->name);
            gl.stack_cont->tp=call_end;
            gl.stack_cont->e=a.closure;
            gl.stack_cont->previous=a.cont;
            a.cont=gl.stack_cont;
            gl.stack_cont+=1;;
            void **closure=malloc(sizeof(void*)*e->body->locals);
            int i;
            fprintf(debug,"new closure %i\n",e->body->locals);
            for(i=0; i<e->argc; i++) closure[i+1]=a.closure[e->afrom[i]];
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
            SAVE_a_str;

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


            exit(42);

            break;
        }
        case TP_many: {
            stack_match-=st_siz;
            exp_many *e=*(exp_many**)stack_match;
            fprintf(debug, "match ");
            inspect_exp(e);
            fprintf(debug,"\n");
            SAVE_a_cont;
            SAVE_a_stops;
            SAVE_gl_stack_cont;

            if (e->stops & a.stops) {
                a.stops=a.stops&(~e->stops);
                memcpy(stack_match,a.cont,st_siz);
                stack_match+=st_siz;
                a.cont=a.cont->previous;
            } else {
                gl.stack_cont->tp=e->tp;
                gl.stack_cont->e=e;
                gl.stack_cont->previous=a.cont;
                a.cont=gl.stack_cont;
                gl.stack_cont+=1;
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
            if (e->alts[r.state]) {
                *(exp **) stack_match =(exp *) e->alts[r.state];
                stack_match += sizeof(exp *);
                *stack_match = e->alts[r.state]->tp;
                stack_match+=1;
            }
            break;
        case bind_restore:
            stack_match-=sizeof(void*)+sizeof(long)+1;
            fprintf(debug,"restoring %i %i\n",*(void **)stack_match,*(long*)(stack_match+sizeof(void*)));
            a.closure[*(long*)(stack_match+sizeof(void*))]=*(void **)stack_match;
            break;
        case nested_end:
            stack_match-=1;
            if (r.state) {
                memcpy(stack_match,a.cont,st_siz);
                stack_match+=st_siz;
                a.cont=a.cont->previous;
            } else {
                FAIL;
            }
            break;
        case call_end:
            stack_match-=sizeof(void**)+1;
            a.closure=*(void***) stack_match;
            memcpy(stack_match,a.cont,st_siz);
            stack_match+=st_siz;
            a.cont=a.cont->previous;
            break;
        case FINISH:
            free(o_stack_cont);
            free(o_stack_match);
            return r.returned;
        }
    }
}
void *match2(exp *e,void *extra,void **closure,char *s) {
    Args a;
    a.cont;
    a.closure=closure;
    a.str=s;
    a.stops=0;
    return match(e,extra,a);
}

