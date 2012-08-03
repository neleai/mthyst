/* Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012 */
#include "ruby.h"
#include <stdlib.h>
#include <stdio.h>
static VALUE tree;static VALUE memo_cls;
static VALUE stale_memo;
typedef struct _memo{
  void* rule;int advance;int rm_advance;int ts;  VALUE result;
  struct _memo *next;  /*TODO group them by 16 bytes or like*/
} memo;
VALUE memo_wrap(memo *m){
  VALUE o=Data_Wrap_Struct(memo_cls,NULL,NULL,m);
  VALUE argv[0]; rb_obj_call_init(o,0,argv);
  return o;
}


typedef struct _node {
	struct _node *parent,*sons[2];
  char *str;
  int cnt,sum_cnt;
  int ts,max_ts;
  memo ** memos;
} node;

typedef struct {
  node *n; int no;
} nth_s;
int max(int x,int y){ return x>y ? x : y;}

void update(node * n){int i;
	n->sum_cnt=n->cnt;
	n->max_ts=n->ts;
	for(i=0;i<2;i++) if (n->sons[i]){
		n->sum_cnt=   (n->sum_cnt+n->sons[i]->sum_cnt);
		n->max_ts =max(n->max_ts ,n->sons[i]->max_ts );
	}
}
int son_no(node *n){return  (n->parent->sons[1]==n) ? 1 : 0;}

void ins2(node *n){
  if (n) 
    printf("%s%i",n->str,n->cnt);
  else printf("null");
}
void ins(char *s ,node *n){
  if(n){
    printf("%s ",s);
    ins2(n); printf(": "); ins2(n->sons[0]); printf("<"); ins2(n->parent);  printf(">"); ins2(n->sons[1]);
  }else{printf("%s null\n",s);}
  printf("\n");
  fflush(stdout);
}
node *root2;
node *visit(node *n){int i;
  if (n->sons[0] && n->sons[0]->parent!=n) 
   printf("err");
  if (n->sons[1] && n->sons[1]->parent!=n) 
   printf("err");


  //printf("<");
  if (n->sons[0]) visit(n->sons[0]);
  for(i=0;i<n->cnt;i++)printf("%c",n->str[i]);
  
  if (n->sons[1]) visit(n->sons[1]);
  //printf(">");
  fflush(stdout);
}

void rotate(node * n){
	node *p=n->parent,*pp=p->parent;
	int nson = son_no(n), pson = son_no(p);
	node *ison =n->sons[1-nson];
	n->parent=pp;	                  pp->sons[pson]=n;
	p->parent=n;                    n->sons[1-nson]=p;
	if(ison!=NULL) ison->parent=p;	p->sons[nson]=ison;
	update(p);update(n);

}
node* splay(node *n){node *p,*pp;
  update(n);
	while(1){
    p=n->parent;		
    if (!p->parent        ){              return n; }
    if (!p->parent->parent){	 rotate(n);	return n;	}
		if(son_no(n)!=son_no(p)) { rotate(p);rotate(n); 
		} else                   { rotate(n);rotate(n);
		}
	}
}
nth_s  nth(node *n, int no){
int leftsize=(n->sons[0]) ? n->sons[0]->sum_cnt : 0;
if (no<leftsize)        return nth(n->sons[0],no);
if (no>leftsize+n->cnt) return nth(n->sons[1],no-leftsize-n->cnt);
nth_s ret; ret.n=splay(n); ret.no=no-leftsize;
return ret;
}

node *node_new(){
  node *m=calloc(sizeof(node),1);
  return m;
}


node * add_char(node *root,int pos,char c){
  nth_s _nth = nth(root->sons[0],pos); node *n=_nth.n;int no=_nth.no;
  if (n->ts==root->ts && no-100<n->cnt){
    int i=n->cnt;
    for(i=n->cnt;i>no;i--){
      n->str[i]=n->str[i-1];
    }
    if ((n->cnt&(n->cnt-1)==0&&n->cnt>=16)){
      n->str=realloc(n->str,2*n->cnt);
      if(n->memos) n->memos=realloc(n->memos,2*n->cnt*sizeof(memo*));
    }
    n->str[no]=c;
    n->cnt++;
    return splay(n);
  }else{
    node *left=node_new(),*mdle=node_new(),*rght=node_new();
    left->parent=     rght; left->sons[0]=n->sons[0]; left->sons[1]=mdle;        
    mdle->parent=     left; mdle->sons[0]=NULL;       mdle->sons[1]=NULL;
    rght->parent=n->parent; rght->sons[0]=left;       rght->sons[1]=n->sons[1];  
    n->parent->sons[son_no(n)]=rght;
    if (n->sons[0]) n->sons[0]->parent=left;
    if (n->sons[1]) n->sons[1]->parent=rght;

    left->ts=n->ts;   left->str=n->str;       left->cnt=no;          if (n->memos) left->memos=n->memos;
    mdle->ts=root->ts;mdle->str=calloc(16,1); mdle->cnt=1;          
    rght->ts=n->ts;   rght->str=n->str+no;    rght->cnt=n->cnt-no;   if (n->memos) rght->memos=n->memos+no;
    mdle->str[0]=c;
    free(n);
    return splay(mdle);
  }
}


node* del_char(node *root,int pos){
  nth_s _nth = nth(root->sons[0],pos); node *n=_nth.n;int no=_nth.no;
  if (n->ts==root->ts && no-100<n->cnt){
    int i;

    for(i=no;i<n->cnt;i++){
      n->str[i]=n->str[i+1];
    }
    n->cnt--;
    return splay(n);
  }else{
    node *left=node_new(),*mdle=node_new(),*rght=node_new();
    left->parent=     rght; left->sons[0]=n->sons[0]; left->sons[1]=mdle;
    mdle->parent=     left; mdle->sons[0]=NULL;       mdle->sons[1]=NULL;
    rght->parent=n->parent; rght->sons[0]=left;       rght->sons[1]=n->sons[1];
    n->parent->sons[son_no(n)]=rght;
    if (n->sons[0]) n->sons[0]->parent=left;
    if (n->sons[1]) n->sons[1]->parent=rght;

    left->ts=n->ts;   left->str=n->str;       left->cnt=no;        if (n->memos) left->memos=n->memos;
    mdle->ts=root->ts;mdle->str=calloc(16,1); mdle->cnt=0;         
    rght->ts=n->ts;   rght->str=n->str+no;    rght->cnt=n->cnt-no; if (n->memos) rght->memos=n->memos+no;
    free(n);
    if (left->cnt){ left->cnt--;             if (n->memos) left->memos--; }
    else          { rght->str++;rght->cnt--; if (n->memos) rght->memos++;}
    return splay(mdle);
  }

};
node *delete(node *n){
}

int ts_between(node *root,int from,int to){
  nth_s _nth = nth(root->sons[0],from); node *left=_nth.n;
        _nth = nth(root->sons[0],to  ); node *rght=_nth.n;
  if (left==rght) return left->ts;
  else {
    splay(left);splay(rght);
    int mid_ts=0;
    if (left->sons[1]) mid_ts=left->sons[1]->max_ts;
    return max(left->ts,max(mid_ts,rght->ts));
  }
}
VALUE get_id(node *root,void* rule,int pos){
  nth_s _nth = nth(root->sons[0],pos); node *n=_nth.n;int no=_nth.no;
  if (!n->memos) 
    n->memos=calloc(2*n->cnt,sizeof(memo*));
  memo *p;
  for(p=n->memos[no];p;p=p->next){
    if (p->rule==rule) {//TODO put p to top.
      if (ts_between(root,pos,pos+p->rm_advance) > p->ts) p->result=stale_memo;
      return memo_wrap(p);
    }
  }
  p=calloc(sizeof(memo),1);
  p->rule=rule;p->result=stale_memo;
  p->next=n->memos[no];n->memos[no]=p;
  return memo_wrap(p);
}
VALUE save_id(node *root,void* rule,int pos,int newpos,int rm_pos,VALUE result){
  nth_s _nth = nth(root->sons[0],pos); node *n=_nth.n;int no=_nth.no;
  memo *p;
  for(p=n->memos[no];p->rule!=rule;p=p->next){ }
  p->advance   = newpos -pos;
  p->rm_advance= rm_pos -pos;
  p->result    = result;
  p->ts=ts_between(root,pos,rm_pos);    
}

VALUE tree_inspect(VALUE self){
  node *root;Data_Get_Struct(self,node,root);
  visit(root);printf("\n");
  return Qnil;
}

void tree_mark(node *ptr){ if (!ptr) return;tree_mark(ptr->sons[0]);tree_mark(ptr->sons[1]); }
void tree_free(node *ptr){ free(ptr);}

VALUE tree_new(VALUE cls){
  node *root=node_new();
  root2=root;
  root->sons[0]=node_new();root->sons[0]->parent=root;
  root->sons[0]->str=calloc(16,1);
  VALUE o=Data_Wrap_Struct(cls,tree_mark,tree_free,root);
  VALUE argv[0]; rb_obj_call_init(o,0,argv);
  return o;
}
VALUE tree_add(VALUE self,VALUE rb_pos,VALUE str){
  node *root;Data_Get_Struct(self,node,root);
  int pos=FIX2INT(rb_pos) ;char c=RSTRING_PTR(str)[0];
  add_char(root,pos,c);  
  return self;
}
VALUE tree_del(VALUE self,VALUE rb_pos){
  node *root;Data_Get_Struct(self,node,root);
  del_char(root,FIX2INT(rb_pos));
  return self;
}
VALUE tree_ts_inc(VALUE self){
  node *root;Data_Get_Struct(self,node,root);
  root->ts++;
  return INT2FIX(root->ts);
}
VALUE tree_last_change(VALUE self,VALUE rb_l,VALUE rb_r){
  node *root;Data_Get_Struct(self,node,root);
  return INT2FIX(ts_between(root,FIX2INT(rb_l),FIX2INT(rb_r)));
}
VALUE tree_get_id(VALUE self,VALUE rule,VALUE pos){
  node *root;Data_Get_Struct(self,node,root);
  return get_id(root,(void*)rule,FIX2INT(pos));
}
VALUE tree_save_id(VALUE self,VALUE rule,VALUE pos,VALUE newpos,VALUE rm_pos,VALUE result){
  node *root;Data_Get_Struct(self,node,root);
  save_id(root,(void*)rule,FIX2INT(pos),FIX2INT(newpos),FIX2INT(rm_pos),result);
  return self;
}

VALUE memo_advance(VALUE self){
  memo *m; Data_Get_Struct(self,memo,m);
  return INT2FIX(m->advance);
}
VALUE memo_rm_advance(VALUE self){
  memo *m; Data_Get_Struct(self,memo,m);
  return INT2FIX(m->rm_advance);
}
VALUE memo_result(VALUE self){
   memo *m; Data_Get_Struct(self,memo,m);
   return m->result;
}


void Init_Dynamic_Memo(){
  tree=rb_define_class("Dynamic_Memo",rb_cObject);

  rb_define_singleton_method(tree,"new",tree_new,0);
  rb_define_method(tree,"inspect",tree_inspect,0);
  rb_define_method(tree,"add",tree_add,2);
  rb_define_method(tree,"del",tree_del,1);

  rb_define_method(tree,"timestamp_inc",tree_ts_inc,0);
  rb_define_method(tree,"last_change",tree_last_change,2);
  rb_define_method(tree,"get_id",tree_get_id,2);
  rb_define_method(tree,"save_id",tree_save_id,5);

  memo_cls=rb_define_class("Memo_cls",rb_cObject);
  stale_memo=rb_const_get(rb_cObject,rb_intern("STALE"));
  rb_define_method(memo_cls,"advance",memo_advance,0);
  rb_define_method(memo_cls,"rm_advance",memo_rm_advance,0);
  rb_define_method(memo_cls,"result",memo_result,0);

} 
