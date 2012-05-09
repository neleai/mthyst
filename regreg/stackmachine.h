
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* str;
    long stops;
    void** closure;
    char * cont;
} Args;

#define RESTORE_str 1
#define RESTORE_stops 2
#define RESTORE_closure 3
#define RESTORE_cont 4
#define SAVE_str *(char**)stack_match=a.str;stack_match+=sizeof(char*);*stack_match=RESTORE_str;stack_match++;
#define SAVE_stops *(long*)stack_match=a.stops;stack_match+=sizeof(long);*stack_match=RESTORE_stops;stack_match++;
#define SAVE_closure *(void***)stack_match=a.closure;stack_match+=sizeof(void**);*stack_match=RESTORE_closure;stack_match++;
#define SAVE_cont *(char **)stack_match=a.cont;stack_match+=sizeof(char *);*stack_match=RESTORE_cont;stack_match++;

typedef struct {
    char* rstr;
    long state;
    void* returned;
} Result;
#define RESTORE_rstr 5
#define RESTORE_state 6
#define RESTORE_returned 7
#define SAVE_rstr *(char**)stack_match=r.rstr;stack_match+=sizeof(char*);*stack_match=RESTORE_rstr;stack_match++;
#define SAVE_state *(long*)stack_match=r.state;stack_match+=sizeof(long);*stack_match=RESTORE_state;stack_match++;
#define SAVE_returned *(void**)stack_match=r.returned;stack_match+=sizeof(void*);*stack_match=RESTORE_returned;stack_match++;

#define TP_seq 8
#define TP_switch 9
#define TP_many 10
#define TP_stop 11
#define TP_bind 12
#define TP_nested 13
#define TP_act 14
#define TP_make_lambda 15
#define TP_use_lambda 16
#define TP_return 17
#define TP_rule 18
#define TP_enter 19
#define TP_call 20
#define TP_char 21


#define FINISH 22
#define switch2 23
#define bind_restore 24
#define nested_end 25
#define closure_end 26

typedef struct {
    char tp;

} exp;
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
} exp_rule;
exp_rule* normalize_rule(exp_rule*o);
exp *make_rule(char * name,exp * body);
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
    long * ato;
    long locals;
} exp_call;
exp_call* normalize_call(exp_call*o);
exp *make_call(char * name,exp_rule* body,long argc,long * afrom,long * ato,long locals);
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

