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
array **nodes_array;
long nodes_array_no;
array * normalize_array(array *a) {
    int i,j;
    for(i=0; i<nodes_array_no; i++) {
        if(a->size!=nodes_array[i]->size) goto next;
        for(j=0; j<a->size; j++) if (nodes_array[i]->ary[j]!=a->ary[j]) goto next;
        return nodes_array[i];
next:
        ;
    }
    nodes_array_no+=1;
    if(!(nodes_array_no&(nodes_array_no-1))) nodes_array=realloc(nodes_array,2*sizeof(array *)*nodes_array_no);
    nodes_array[nodes_array_no-1]=a;
    return nodes_array[nodes_array_no-1];
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
exp_finish *nodes_finish;
long nodes_finish_no;
exp_call_finished *nodes_call_finished;
long nodes_call_finished_no;
exp_call_conted *nodes_call_conted;
long nodes_call_conted_no;

exp_seq *normalize_seq(exp_seq *o) {
    int i;
    for(i=0; i<nodes_seq_no; i++) {
        if (1 && nodes_seq[i].head==o->head&& nodes_seq[i].tail==o->tail) return &nodes_seq[i];
    }
    if(!(nodes_seq_no&(nodes_seq_no-1))) nodes_seq=realloc(nodes_seq,(1+nodes_seq_no)*2*sizeof(exp_seq));
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
    if(!(nodes_switch_no&(nodes_switch_no-1))) nodes_switch=realloc(nodes_switch,(1+nodes_switch_no)*2*sizeof(exp_switch));
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
    if(!(nodes_many_no&(nodes_many_no-1))) nodes_many=realloc(nodes_many,(1+nodes_many_no)*2*sizeof(exp_many));
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
    if(!(nodes_stop_no&(nodes_stop_no-1))) nodes_stop=realloc(nodes_stop,(1+nodes_stop_no)*2*sizeof(exp_stop));
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
    if(!(nodes_bind_no&(nodes_bind_no-1))) nodes_bind=realloc(nodes_bind,(1+nodes_bind_no)*2*sizeof(exp_bind));
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
    if(!(nodes_nested_no&(nodes_nested_no-1))) nodes_nested=realloc(nodes_nested,(1+nodes_nested_no)*2*sizeof(exp_nested));
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
    if(!(nodes_act_no&(nodes_act_no-1))) nodes_act=realloc(nodes_act,(1+nodes_act_no)*2*sizeof(exp_act));
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
    if(!(nodes_make_lambda_no&(nodes_make_lambda_no-1))) nodes_make_lambda=realloc(nodes_make_lambda,(1+nodes_make_lambda_no)*2*sizeof(exp_make_lambda));
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
    if(!(nodes_use_lambda_no&(nodes_use_lambda_no-1))) nodes_use_lambda=realloc(nodes_use_lambda,(1+nodes_use_lambda_no)*2*sizeof(exp_use_lambda));
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
    if(!(nodes_return_no&(nodes_return_no-1))) nodes_return=realloc(nodes_return,(1+nodes_return_no)*2*sizeof(exp_return));
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
    if(!(nodes_rule_no&(nodes_rule_no-1))) nodes_rule=realloc(nodes_rule,(1+nodes_rule_no)*2*sizeof(exp_rule));
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
    if(!(nodes_enter_no&(nodes_enter_no-1))) nodes_enter=realloc(nodes_enter,(1+nodes_enter_no)*2*sizeof(exp_enter));
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
    if(!(nodes_call_no&(nodes_call_no-1))) nodes_call=realloc(nodes_call,(1+nodes_call_no)*2*sizeof(exp_call));
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
    if(!(nodes_char_no&(nodes_char_no-1))) nodes_char=realloc(nodes_char,(1+nodes_char_no)*2*sizeof(exp_char));
    nodes_char[nodes_char_no].tp=TP_char;
    nodes_char[nodes_char_no].str=o->str;
    nodes_char_no+=1;
    return &nodes_char[nodes_char_no-1];
}
exp_finish *normalize_finish(exp_finish *o) {
    int i;
    for(i=0; i<nodes_finish_no; i++) {
        if (1 ) return &nodes_finish[i];
    }
    if(!(nodes_finish_no&(nodes_finish_no-1))) nodes_finish=realloc(nodes_finish,(1+nodes_finish_no)*2*sizeof(exp_finish));
    nodes_finish[nodes_finish_no].tp=TP_finish;
    nodes_finish_no+=1;
    return &nodes_finish[nodes_finish_no-1];
}
exp_call_finished *normalize_call_finished(exp_call_finished *o) {
    int i;
    for(i=0; i<nodes_call_finished_no; i++) {
        if (1 && nodes_call_finished[i].closure==o->closure) return &nodes_call_finished[i];
    }
    if(!(nodes_call_finished_no&(nodes_call_finished_no-1))) nodes_call_finished=realloc(nodes_call_finished,(1+nodes_call_finished_no)*2*sizeof(exp_call_finished));
    nodes_call_finished[nodes_call_finished_no].tp=TP_call_finished;
    nodes_call_finished[nodes_call_finished_no].closure=o->closure;
    nodes_call_finished_no+=1;
    return &nodes_call_finished[nodes_call_finished_no-1];
}
exp_call_conted *normalize_call_conted(exp_call_conted *o) {
    int i;
    for(i=0; i<nodes_call_conted_no; i++) {
        if (1 && nodes_call_conted[i].closure==o->closure) return &nodes_call_conted[i];
    }
    if(!(nodes_call_conted_no&(nodes_call_conted_no-1))) nodes_call_conted=realloc(nodes_call_conted,(1+nodes_call_conted_no)*2*sizeof(exp_call_conted));
    nodes_call_conted[nodes_call_conted_no].tp=TP_call_conted;
    nodes_call_conted[nodes_call_conted_no].closure=o->closure;
    nodes_call_conted_no+=1;
    return &nodes_call_conted[nodes_call_conted_no-1];
}
void init_nodes() {
    nodes_string=NULL;
    nodes_string_no=0;
    nodes_array=NULL;
    nodes_array_no=0;
    nodes_seq=NULL;
    nodes_seq_no=0;
    nodes_switch=NULL;
    nodes_switch_no=0;
    nodes_many=NULL;
    nodes_many_no=0;
    nodes_stop=NULL;
    nodes_stop_no=0;
    nodes_bind=NULL;
    nodes_bind_no=0;
    nodes_nested=NULL;
    nodes_nested_no=0;
    nodes_act=NULL;
    nodes_act_no=0;
    nodes_make_lambda=NULL;
    nodes_make_lambda_no=0;
    nodes_use_lambda=NULL;
    nodes_use_lambda_no=0;
    nodes_return=NULL;
    nodes_return_no=0;
    nodes_rule=NULL;
    nodes_rule_no=0;
    nodes_enter=NULL;
    nodes_enter_no=0;
    nodes_call=NULL;
    nodes_call_no=0;
    nodes_char=NULL;
    nodes_char_no=0;
    nodes_finish=NULL;
    nodes_finish_no=0;
    nodes_call_finished=NULL;
    nodes_call_finished_no=0;
    nodes_call_conted=NULL;
    nodes_call_conted_no=0;
}

