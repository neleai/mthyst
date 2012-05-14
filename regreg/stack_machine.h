
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "defs.h"
typedef struct exp {
    char tp;
    struct exp * forget;
} exp;
typedef void * (*pfn)();


struct closure_s {
    long size;
    void **ary;
};
struct cont_s {
    exp *e;
    struct cont_s * previous;
    exp *cont_memo;
};

typedef struct {
    long state;
    void *returned;
} memo_s;
typedef memo_s (*pfn_mem)();

typedef struct {
    long size;
    exp **ary;
} array;

void **make_closure(long l);
typedef struct Args {
    char* str;
    long stops;
    struct closure_s* closure;
    struct cont_s * cont;
} Args;
#define RESTORE_a_str 1
#define RESTORE_a_stops 2
#define RESTORE_a_closure 3
#define RESTORE_a_cont 4
#define SAVE_a_str *(char**)stack_match=a.str;stack_match+=sizeof(char*);*stack_match=RESTORE_a_str;stack_match++;
#define SAVE_a_stops *(long*)stack_match=a.stops;stack_match+=sizeof(long);*stack_match=RESTORE_a_stops;stack_match++;
#define SAVE_a_closure *(struct closure_s**)stack_match=a.closure;stack_match+=sizeof(struct closure_s*);*stack_match=RESTORE_a_closure;stack_match++;
#define SAVE_a_cont *(struct cont_s **)stack_match=a.cont;stack_match+=sizeof(struct cont_s *);*stack_match=RESTORE_a_cont;stack_match++;
typedef struct Global {
    struct cont_s ** stack_cont;
    void *** stack_closure;
    void * extra;
    void * memo_extra;
    pfn_mem memo_get;
    pfn memo_set;
    pfn advance;
    pfn head;
    long alternatives;
} Global;
#define RESTORE_gl_stack_cont 5
#define RESTORE_gl_stack_closure 6
#define RESTORE_gl_extra 7
#define RESTORE_gl_memo_extra 8
#define RESTORE_gl_memo_get 9
#define RESTORE_gl_memo_set 10
#define RESTORE_gl_advance 11
#define RESTORE_gl_head 12
#define RESTORE_gl_alternatives 13
#define SAVE_gl_stack_cont *(struct cont_s ***)stack_match=gl.stack_cont;stack_match+=sizeof(struct cont_s **);*stack_match=RESTORE_gl_stack_cont;stack_match++;
#define SAVE_gl_stack_closure *(void ****)stack_match=gl.stack_closure;stack_match+=sizeof(void ***);*stack_match=RESTORE_gl_stack_closure;stack_match++;
#define SAVE_gl_extra *(void **)stack_match=gl.extra;stack_match+=sizeof(void *);*stack_match=RESTORE_gl_extra;stack_match++;
#define SAVE_gl_memo_extra *(void **)stack_match=gl.memo_extra;stack_match+=sizeof(void *);*stack_match=RESTORE_gl_memo_extra;stack_match++;
#define SAVE_gl_memo_get *(pfn_mem*)stack_match=gl.memo_get;stack_match+=sizeof(pfn_mem);*stack_match=RESTORE_gl_memo_get;stack_match++;
#define SAVE_gl_memo_set *(pfn*)stack_match=gl.memo_set;stack_match+=sizeof(pfn);*stack_match=RESTORE_gl_memo_set;stack_match++;
#define SAVE_gl_advance *(pfn*)stack_match=gl.advance;stack_match+=sizeof(pfn);*stack_match=RESTORE_gl_advance;stack_match++;
#define SAVE_gl_head *(pfn*)stack_match=gl.head;stack_match+=sizeof(pfn);*stack_match=RESTORE_gl_head;stack_match++;
#define SAVE_gl_alternatives *(long*)stack_match=gl.alternatives;stack_match+=sizeof(long);*stack_match=RESTORE_gl_alternatives;stack_match++;
typedef struct Result {
    char* rstr;
    long state;
} Result;
#define RESTORE_r_rstr 14
#define RESTORE_r_state 15
#define SAVE_r_rstr *(char**)stack_match=r.rstr;stack_match+=sizeof(char*);*stack_match=RESTORE_r_rstr;stack_match++;
#define SAVE_r_state *(long*)stack_match=r.state;stack_match+=sizeof(long);*stack_match=RESTORE_r_state;stack_match++;




typedef struct {
    char tp;
    exp *forget;
    exp* head;
    exp* tail;
} exp_seq;
exp_seq* normalize_seq(exp_seq*o);
exp *make_seq(exp* head,exp* tail);
typedef struct {
    char tp;
    exp *forget;
    exp* head;
    array* alts;
} exp_switch;
exp_switch* normalize_switch(exp_switch*o);
exp *make_switch(exp* head,array* alts);
typedef struct {
    char tp;
    exp *forget;
    long stops;
    exp * body;
} exp_many;
exp_many* normalize_many(exp_many*o);
exp *make_many(long stops,exp * body);
typedef struct {
    char tp;
    exp *forget;
    long stops;
} exp_stop;
exp_stop* normalize_stop(exp_stop*o);
exp *make_stop(long stops);
typedef struct {
    char tp;
    exp *forget;
    long var;
} exp_bind;
exp_bind* normalize_bind(exp_bind*o);
exp *make_bind(long var);
typedef struct {
    char tp;
    exp *forget;
    exp* body;
} exp_nested;
exp_nested* normalize_nested(exp_nested*o);
exp *make_nested(exp* body);
typedef struct {
    char tp;
    exp *forget;
    array* vars;
    void * fn;
    void * arg;
} exp_act;
exp_act* normalize_act(exp_act*o);
exp *make_act(array* vars,void * fn,void * arg);
typedef struct {
    char tp;
    exp *forget;
    exp* body;
} exp_make_lambda;
exp_make_lambda* normalize_make_lambda(exp_make_lambda*o);
exp *make_make_lambda(exp* body);
typedef struct {
    char tp;
    exp *forget;
    long placeholder;
} exp_use_lambda;
exp_use_lambda* normalize_use_lambda(exp_use_lambda*o);
exp *make_use_lambda(long placeholder);
typedef struct {
    char tp;
    exp *forget;
    long state;
} exp_return;
exp_return* normalize_return(exp_return*o);
exp *make_return(long state);
typedef struct {
    char tp;
    exp *forget;
    char * name;
    exp * body;
    long locals;
} exp_rule;
exp_rule* normalize_rule(exp_rule*o);
exp *make_rule(char * name,exp * body,long locals);
typedef struct {
    char tp;
    exp *forget;
    exp* to;
} exp_enter;
exp_enter* normalize_enter(exp_enter*o);
exp *make_enter(exp* to);
typedef struct {
    char tp;
    exp *forget;
    char * name;
    exp_rule* body;
    array* args;
} exp_call;
exp_call* normalize_call(exp_call*o);
exp *make_call(char * name,exp_rule* body,array* args);
typedef struct {
    char tp;
    exp *forget;
    char * str;
} exp_char;
exp_char* normalize_char(exp_char*o);
exp *make_char(char * str);
typedef struct {
    char tp;
    exp *forget;

} exp_finish;
exp_finish* normalize_finish(exp_finish*o);
exp *make_finish();
typedef struct {
    char tp;
    exp *forget;
    struct closure_s* closure;
} exp_call_finished;
exp_call_finished* normalize_call_finished(exp_call_finished*o);
exp *make_call_finished(struct closure_s* closure);
typedef struct {
    char tp;
    exp *forget;
    struct closure_s* closure;
} exp_call_conted;
exp_call_conted* normalize_call_conted(exp_call_conted*o);
exp *make_call_conted(struct closure_s* closure);

char *normalize_string(char *c);
array* normalize_array(array *a);


typedef struct {
    exp *body;
    void **closure;
} lambda_s;


static const int st_siz=sizeof(exp*)+1;
void *match2(exp *e,void *extra,char *str);
