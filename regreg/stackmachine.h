
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char tp;

} exp;

typedef struct t_cont {
    exp *e;
    char tp;
    struct t_cont *previous;
} t_cont;


typedef struct Args {
    char* str;
    long stops;
    void** closure;
    t_cont * cont;
} Args;
#define RESTORE_a_str 1
#define RESTORE_a_stops 2
#define RESTORE_a_closure 3
#define RESTORE_a_cont 4
#define SAVE_a_str *(char**)stack_match=a.str;stack_match+=sizeof(char*);*stack_match=RESTORE_a_str;stack_match++;
#define SAVE_a_stops *(long*)stack_match=a.stops;stack_match+=sizeof(long);*stack_match=RESTORE_a_stops;stack_match++;
#define SAVE_a_closure *(void***)stack_match=a.closure;stack_match+=sizeof(void**);*stack_match=RESTORE_a_closure;stack_match++;
#define SAVE_a_cont *(t_cont **)stack_match=a.cont;stack_match+=sizeof(t_cont *);*stack_match=RESTORE_a_cont;stack_match++;
typedef struct Global {
    t_cont * stack_cont;
    void *** stack_closure;
    void * extra;
} Global;
#define RESTORE_gl_stack_cont 5
#define RESTORE_gl_stack_closure 6
#define RESTORE_gl_extra 7
#define SAVE_gl_stack_cont *(t_cont **)stack_match=gl.stack_cont;stack_match+=sizeof(t_cont *);*stack_match=RESTORE_gl_stack_cont;stack_match++;
#define SAVE_gl_stack_closure *(void ****)stack_match=gl.stack_closure;stack_match+=sizeof(void ***);*stack_match=RESTORE_gl_stack_closure;stack_match++;
#define SAVE_gl_extra *(void **)stack_match=gl.extra;stack_match+=sizeof(void *);*stack_match=RESTORE_gl_extra;stack_match++;
typedef struct Result {
    char* rstr;
    long state;
    void* returned;
} Result;
#define RESTORE_r_rstr 8
#define RESTORE_r_state 9
#define RESTORE_r_returned 10
#define SAVE_r_rstr *(char**)stack_match=r.rstr;stack_match+=sizeof(char*);*stack_match=RESTORE_r_rstr;stack_match++;
#define SAVE_r_state *(long*)stack_match=r.state;stack_match+=sizeof(long);*stack_match=RESTORE_r_state;stack_match++;
#define SAVE_r_returned *(void**)stack_match=r.returned;stack_match+=sizeof(void*);*stack_match=RESTORE_r_returned;stack_match++;



#define TP_seq 11
#define TP_switch 12
#define TP_many 13
#define TP_stop 14
#define TP_bind 15
#define TP_nested 16
#define TP_act 17
#define TP_make_lambda 18
#define TP_use_lambda 19
#define TP_return 20
#define TP_rule 21
#define TP_enter 22
#define TP_call 23
#define TP_char 24


#define FINISH 25
#define switch2 26
#define bind_restore 27
#define nested_end 28
#define closure_end 29
#define call_end 30

typedef struct {
    char tp;
    exp* head;
    exp* tail;
} exp_seq;
exp_seq* normalize_seq(exp_seq*o);
exp *make_seq(exp* head,exp* tail);
typedef struct {
    char tp;
    exp* head;
    exp ** alts;
} exp_switch;
exp_switch* normalize_switch(exp_switch*o);
exp *make_switch(exp* head,exp ** alts);
typedef struct {
    char tp;
    long stops;
    exp * body;
} exp_many;
exp_many* normalize_many(exp_many*o);
exp *make_many(long stops,exp * body);
typedef struct {
    char tp;
    long stops;
} exp_stop;
exp_stop* normalize_stop(exp_stop*o);
exp *make_stop(long stops);
typedef struct {
    char tp;
    long var;
} exp_bind;
exp_bind* normalize_bind(exp_bind*o);
exp *make_bind(long var);
typedef struct {
    char tp;
    exp* body;
} exp_nested;
exp_nested* normalize_nested(exp_nested*o);
exp *make_nested(exp* body);
typedef struct {
    char tp;
    long varc;
    long * vars;
    void * fn;
    void * arg;
} exp_act;
exp_act* normalize_act(exp_act*o);
exp *make_act(long varc,long * vars,void * fn,void * arg);
typedef struct {
    char tp;
    exp* body;
} exp_make_lambda;
exp_make_lambda* normalize_make_lambda(exp_make_lambda*o);
exp *make_make_lambda(exp* body);
typedef struct {
    char tp;
    long placeholder;
} exp_use_lambda;
exp_use_lambda* normalize_use_lambda(exp_use_lambda*o);
exp *make_use_lambda(long placeholder);
typedef struct {
    char tp;
    long state;
} exp_return;
exp_return* normalize_return(exp_return*o);
exp *make_return(long state);
typedef struct {
    char tp;
    char * name;
    exp * body;
    long locals;
} exp_rule;
exp_rule* normalize_rule(exp_rule*o);
exp *make_rule(char * name,exp * body,long locals);
typedef struct {
    char tp;
    exp* to;
} exp_enter;
exp_enter* normalize_enter(exp_enter*o);
exp *make_enter(exp* to);
typedef struct {
    char tp;
    char * name;
    exp_rule* body;
    long argc;
    long * afrom;
} exp_call;
exp_call* normalize_call(exp_call*o);
exp *make_call(char * name,exp_rule* body,long argc,long * afrom);
typedef struct {
    char tp;
    char * str;
} exp_char;
exp_char* normalize_char(exp_char*o);
exp *make_char(char * str);

char *normalize_string(char *c);
exp **normalize_array(exp **a,long size);


typedef struct {
    exp *body;
    void **closure;
} lambda_s;

#define FAIL r.state=0

static const int st_siz=sizeof(exp*)+1;
void *match2(exp *e,void *extra,void **closure,char *str);
