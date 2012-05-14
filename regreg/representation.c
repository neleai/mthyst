#include "ruby.h"
#include "stack_machine.h"
char **nodes_string;
long nodes_string_no;
char * normalize_string(char *s) {
    int i;
    for(i=0; i<nodes_string_no; i++) {
        if (!strcmp(s,nodes_string[i])) return nodes_string[i];
    }
    nodes_string_no+=1;
    if(!(nodes_string_no&(nodes_string_no-1))) nodes_string=realloc(nodes_string,2*sizeof(char *)*nodes_string_no);
    nodes_string[nodes_string_no-1]=strdup(s);
    return nodes_string[nodes_string_no-1];
}
array *nodes_array;
long nodes_array_no;
array * normalize_array(array *a) {
    int i,j;
    for(i=0; i<nodes_array_no; i++) {
        if(a->size!=nodes_array[i].size) goto next;
        for(j=0; j<a->size; j++) if (nodes_array[i].ary[j]!=a->ary[j]) goto next;
        return &nodes_array[i];
next:
        ;
    }
    nodes_array_no+=1;
    nodes_array[nodes_array_no-1].ary=malloc(a->size*sizeof(void*));
    for(i=0; i<a->size; i++)  nodes_array[nodes_array_no-1].ary[i]=a->ary[i];
    nodes_array[nodes_array_no-1].size=a->size;
    return &nodes_array[nodes_array_no-1];
}


exp_seq *nodes_seq;
long nodes_seq_no;
exp_switch *nodes_switch;
long nodes_switch_no;
exp_many *nodes_many;
long nodes_many_no;
exp_stop *nodes_stop;
long nodes_stop_no;
exp_bind *nodes_bind;
long nodes_bind_no;
exp_nested *nodes_nested;
long nodes_nested_no;
exp_act *nodes_act;
long nodes_act_no;
exp_make_lambda *nodes_make_lambda;
long nodes_make_lambda_no;
exp_use_lambda *nodes_use_lambda;
long nodes_use_lambda_no;
exp_return *nodes_return;
long nodes_return_no;
exp_rule *nodes_rule;
long nodes_rule_no;
exp_enter *nodes_enter;
long nodes_enter_no;
exp_call *nodes_call;
long nodes_call_no;
exp_char *nodes_char;
long nodes_char_no;
exp_head *nodes_head;
long nodes_head_no;
exp_advance *nodes_advance;
long nodes_advance_no;
exp_finish *nodes_finish;
long nodes_finish_no;
exp_call_conted *nodes_call_conted;
long nodes_call_conted_no;

exp_seq *normalize_seq(exp_seq *o) {
    int i;
    for(i=0; i<nodes_seq_no; i++) {
        if (1 && nodes_seq[i].head==o->head&& nodes_seq[i].tail==o->tail) return &nodes_seq[i];
    }
    if (nodes_seq_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_seq[nodes_seq_no].tp=TP_seq;
    nodes_seq[nodes_seq_no].head=o->head;
    nodes_seq[nodes_seq_no].tail=o->tail;
    nodes_seq_no+=1;
    return &nodes_seq[nodes_seq_no-1];
}
exp_switch *normalize_switch(exp_switch *o) {
    int i;
    for(i=0; i<nodes_switch_no; i++) {
        if (1 && nodes_switch[i].head==o->head&& nodes_switch[i].alts==o->alts) return &nodes_switch[i];
    }
    if (nodes_switch_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_switch[nodes_switch_no].tp=TP_switch;
    nodes_switch[nodes_switch_no].head=o->head;
    nodes_switch[nodes_switch_no].alts=o->alts;
    nodes_switch_no+=1;
    return &nodes_switch[nodes_switch_no-1];
}
exp_many *normalize_many(exp_many *o) {
    int i;
    for(i=0; i<nodes_many_no; i++) {
        if (1 && nodes_many[i].stops==o->stops&& nodes_many[i].body==o->body) return &nodes_many[i];
    }
    if (nodes_many_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_many[nodes_many_no].tp=TP_many;
    nodes_many[nodes_many_no].stops=o->stops;
    nodes_many[nodes_many_no].body=o->body;
    nodes_many_no+=1;
    return &nodes_many[nodes_many_no-1];
}
exp_stop *normalize_stop(exp_stop *o) {
    int i;
    for(i=0; i<nodes_stop_no; i++) {
        if (1 && nodes_stop[i].stops==o->stops) return &nodes_stop[i];
    }
    if (nodes_stop_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_stop[nodes_stop_no].tp=TP_stop;
    nodes_stop[nodes_stop_no].stops=o->stops;
    nodes_stop_no+=1;
    return &nodes_stop[nodes_stop_no-1];
}
exp_bind *normalize_bind(exp_bind *o) {
    int i;
    for(i=0; i<nodes_bind_no; i++) {
        if (1 && nodes_bind[i].var==o->var) return &nodes_bind[i];
    }
    if (nodes_bind_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_bind[nodes_bind_no].tp=TP_bind;
    nodes_bind[nodes_bind_no].var=o->var;
    nodes_bind_no+=1;
    return &nodes_bind[nodes_bind_no-1];
}
exp_nested *normalize_nested(exp_nested *o) {
    int i;
    for(i=0; i<nodes_nested_no; i++) {
        if (1 && nodes_nested[i].body==o->body) return &nodes_nested[i];
    }
    if (nodes_nested_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_nested[nodes_nested_no].tp=TP_nested;
    nodes_nested[nodes_nested_no].body=o->body;
    nodes_nested_no+=1;
    return &nodes_nested[nodes_nested_no-1];
}
exp_act *normalize_act(exp_act *o) {
    int i;
    for(i=0; i<nodes_act_no; i++) {
        if (1 && nodes_act[i].vars==o->vars&& nodes_act[i].fn==o->fn&& nodes_act[i].arg==o->arg) return &nodes_act[i];
    }
    if (nodes_act_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_act[nodes_act_no].tp=TP_act;
    nodes_act[nodes_act_no].vars=o->vars;
    nodes_act[nodes_act_no].fn=o->fn;
    nodes_act[nodes_act_no].arg=o->arg;
    nodes_act_no+=1;
    return &nodes_act[nodes_act_no-1];
}
exp_make_lambda *normalize_make_lambda(exp_make_lambda *o) {
    int i;
    for(i=0; i<nodes_make_lambda_no; i++) {
        if (1 && nodes_make_lambda[i].body==o->body) return &nodes_make_lambda[i];
    }
    if (nodes_make_lambda_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_make_lambda[nodes_make_lambda_no].tp=TP_make_lambda;
    nodes_make_lambda[nodes_make_lambda_no].body=o->body;
    nodes_make_lambda_no+=1;
    return &nodes_make_lambda[nodes_make_lambda_no-1];
}
exp_use_lambda *normalize_use_lambda(exp_use_lambda *o) {
    int i;
    for(i=0; i<nodes_use_lambda_no; i++) {
        if (1 && nodes_use_lambda[i].placeholder==o->placeholder) return &nodes_use_lambda[i];
    }
    if (nodes_use_lambda_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_use_lambda[nodes_use_lambda_no].tp=TP_use_lambda;
    nodes_use_lambda[nodes_use_lambda_no].placeholder=o->placeholder;
    nodes_use_lambda_no+=1;
    return &nodes_use_lambda[nodes_use_lambda_no-1];
}
exp_return *normalize_return(exp_return *o) {
    int i;
    for(i=0; i<nodes_return_no; i++) {
        if (1 && nodes_return[i].state==o->state) return &nodes_return[i];
    }
    if (nodes_return_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_return[nodes_return_no].tp=TP_return;
    nodes_return[nodes_return_no].state=o->state;
    nodes_return_no+=1;
    return &nodes_return[nodes_return_no-1];
}
exp_rule *normalize_rule(exp_rule *o) {
    int i;
    for(i=0; i<nodes_rule_no; i++) {
        if (1 && nodes_rule[i].name==o->name&& nodes_rule[i].body==o->body&& nodes_rule[i].locals==o->locals) return &nodes_rule[i];
    }
    if (nodes_rule_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_rule[nodes_rule_no].tp=TP_rule;
    nodes_rule[nodes_rule_no].name=o->name;
    nodes_rule[nodes_rule_no].body=o->body;
    nodes_rule[nodes_rule_no].locals=o->locals;
    nodes_rule_no+=1;
    return &nodes_rule[nodes_rule_no-1];
}
exp_enter *normalize_enter(exp_enter *o) {
    int i;
    for(i=0; i<nodes_enter_no; i++) {
        if (1 && nodes_enter[i].to==o->to) return &nodes_enter[i];
    }
    if (nodes_enter_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_enter[nodes_enter_no].tp=TP_enter;
    nodes_enter[nodes_enter_no].to=o->to;
    nodes_enter_no+=1;
    return &nodes_enter[nodes_enter_no-1];
}
exp_call *normalize_call(exp_call *o) {
    int i;
    for(i=0; i<nodes_call_no; i++) {
        if (1 && nodes_call[i].name==o->name&& nodes_call[i].body==o->body&& nodes_call[i].args==o->args) return &nodes_call[i];
    }
    if (nodes_call_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_call[nodes_call_no].tp=TP_call;
    nodes_call[nodes_call_no].name=o->name;
    nodes_call[nodes_call_no].body=o->body;
    nodes_call[nodes_call_no].args=o->args;
    nodes_call_no+=1;
    return &nodes_call[nodes_call_no-1];
}
exp_char *normalize_char(exp_char *o) {
    int i;
    for(i=0; i<nodes_char_no; i++) {
        if (1 && nodes_char[i].str==o->str) return &nodes_char[i];
    }
    if (nodes_char_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_char[nodes_char_no].tp=TP_char;
    nodes_char[nodes_char_no].str=o->str;
    nodes_char_no+=1;
    return &nodes_char[nodes_char_no-1];
}
exp_head *normalize_head(exp_head *o) {
    int i;
    for(i=0; i<nodes_head_no; i++) {
        if (1 ) return &nodes_head[i];
    }
    if (nodes_head_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_head[nodes_head_no].tp=TP_head;
    nodes_head_no+=1;
    return &nodes_head[nodes_head_no-1];
}
exp_advance *normalize_advance(exp_advance *o) {
    int i;
    for(i=0; i<nodes_advance_no; i++) {
        if (1 ) return &nodes_advance[i];
    }
    if (nodes_advance_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_advance[nodes_advance_no].tp=TP_advance;
    nodes_advance_no+=1;
    return &nodes_advance[nodes_advance_no-1];
}
exp_finish *normalize_finish(exp_finish *o) {
    int i;
    for(i=0; i<nodes_finish_no; i++) {
        if (1 ) return &nodes_finish[i];
    }
    if (nodes_finish_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_finish[nodes_finish_no].tp=TP_finish;
    nodes_finish_no+=1;
    return &nodes_finish[nodes_finish_no-1];
}
exp_call_conted *normalize_call_conted(exp_call_conted *o) {
    int i;
    for(i=0; i<nodes_call_conted_no; i++) {
        if (1 && nodes_call_conted[i].closure==o->closure) return &nodes_call_conted[i];
    }
    if (nodes_call_conted_no>=1000000) {
        printf("TODO reallocation");
        exit(42);
    }
    nodes_call_conted[nodes_call_conted_no].tp=TP_call_conted;
    nodes_call_conted[nodes_call_conted_no].closure=o->closure;
    nodes_call_conted_no+=1;
    return &nodes_call_conted[nodes_call_conted_no-1];
}
void init_nodes() {
    nodes_string=NULL;
    nodes_string_no=0;
    nodes_array=malloc(1000000*sizeof(array));
    nodes_array_no=0;
    nodes_seq=malloc(1000000*sizeof(exp_seq));
    nodes_seq_no=0;
    nodes_switch=malloc(1000000*sizeof(exp_switch));
    nodes_switch_no=0;
    nodes_many=malloc(1000000*sizeof(exp_many));
    nodes_many_no=0;
    nodes_stop=malloc(1000000*sizeof(exp_stop));
    nodes_stop_no=0;
    nodes_bind=malloc(1000000*sizeof(exp_bind));
    nodes_bind_no=0;
    nodes_nested=malloc(1000000*sizeof(exp_nested));
    nodes_nested_no=0;
    nodes_act=malloc(1000000*sizeof(exp_act));
    nodes_act_no=0;
    nodes_make_lambda=malloc(1000000*sizeof(exp_make_lambda));
    nodes_make_lambda_no=0;
    nodes_use_lambda=malloc(1000000*sizeof(exp_use_lambda));
    nodes_use_lambda_no=0;
    nodes_return=malloc(1000000*sizeof(exp_return));
    nodes_return_no=0;
    nodes_rule=malloc(1000000*sizeof(exp_rule));
    nodes_rule_no=0;
    nodes_enter=malloc(1000000*sizeof(exp_enter));
    nodes_enter_no=0;
    nodes_call=malloc(1000000*sizeof(exp_call));
    nodes_call_no=0;
    nodes_char=malloc(1000000*sizeof(exp_char));
    nodes_char_no=0;
    nodes_head=malloc(1000000*sizeof(exp_head));
    nodes_head_no=0;
    nodes_advance=malloc(1000000*sizeof(exp_advance));
    nodes_advance_no=0;
    nodes_finish=malloc(1000000*sizeof(exp_finish));
    nodes_finish_no=0;
    nodes_call_conted=malloc(1000000*sizeof(exp_call_conted));
    nodes_call_conted_no=0;
}

