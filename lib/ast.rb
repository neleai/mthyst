
makeclasses(AmethystAST,
    [:Grammar,:name,:parent,:rules],
    [:Rule,:name,:args,:locals,:body,:cfg,:reachable,:bnding,:consts],
    [:Apply,:name,:clas],
    [:Bind,:name],
    [:Many,:has_stop],
		[:Pass,:var,:to,:enter],
		[:CAct],
    [:Act,:pred,:pure],
    [:Args],
		[:Strin],
		[:Local,:ssano],:Bnding,:Global,:Key,[:Result,:name,:varnames,:vars],
    :Lambda,
    [:Lookahead],
    :And,
		:Memo,
		:Cut,:Stop,
    :Comment,
    :Nested,
		:Switch,
		:Seq,:Parenthesis,
		:Relabel,
    :Contextual_Argument,:Contextual_Return,
		[:Or,:has_cut],
		:Seq_AST,:Or_AST
)
makeclasses(Switch,:Switch_Char,:Switch_Clas,:Switch_Or)
class Enter;end;class Append;end;class PureAct;end;class Pred;end;

def equalize_by(clas,args)
  eval("$hash_#{clas}={}
    class #{clas}\n
          def normalize
						a=#{args}
            return $hash_#{clas}[a] if $hash_#{clas}[a]
            $hash_#{clas}[a] = $hash_#{clas}[#{args}]=normalize2
          end
					alias_method :hash,:object_id
					alias_method :eql?,:equal?
					alias_method :==,:equal?
					def self.[](*args)
						#{clas}.create(*args).normalize
					end
    end")
end
norm=File.new("lib/c/normalize.c","w");
norm.puts "#include \"ruby.h\""
norm.puts "typedef struct {
  VALUE * ary;
  VALUE * ret;
} normalize_cache;
typedef struct {
  VALUE *ary;
  int no;
} gc_objs; gc_objs* gc_obj;"
norm.puts "
	int els_equal(VALUE el,VALUE el2){
		if (el==el2) return 1;
		if (rb_iv_get(el,\"@hash\")!=rb_iv_get(el2,\"@hash\")) return 0;
		if (TYPE(el)!=TYPE(el2)) return 0;
		if(TYPE(el)==T_ARRAY) {int i;
			int len=RARRAY_LEN(el);
	    VALUE *els=RARRAY_PTR(el);
			int len2=RARRAY_LEN(el2);
  	  VALUE *els2=RARRAY_PTR(el2);
			if (len!=len2) return 0;
			for(i=0;i<len;i++) if(!els_equal(els[i],els2[i])) return 0;
			return 1;
		} else if (TYPE(el)==T_STRING) {
			int len=RSTRING_LEN(el);
			int len2=RSTRING_LEN(el2);
			if (len!=len2) return 0;
			return strncmp(RSTRING_PTR(el),RSTRING_PTR(el2),len)==0;
		} else {
			return 0;
		}
	}
	normalize_cache *cache_Array;  normalize_cache *cache_String;
	VALUE normalize_el(VALUE el){ VALUE el2;int len,len2;VALUE *els,*els2;int i;
		if(TYPE(el)==T_ARRAY){
			if (rb_iv_get(el,\"@hash\")!=Qnil) return el;
			int hash=0;
			len=RARRAY_LEN(el);
	    els=RARRAY_PTR(el);
  	  for (i=0;i<len;i++){ 
				els[i]=normalize_el(els[i]);
					if (TYPE(els[i])==T_ARRAY || TYPE(els[i])==T_STRING)
	        	hash=((int) rb_iv_get(els[i],\"@hash\"))+11*hash;
					else
						hash=els[i]+11*hash;
			}
			rb_iv_set(el,\"@hash\",LONG2FIX(hash/2));
			hash=hash&((1<<20)-1);
			while (el2=cache_Array->ret[hash]) {
				if (els_equal(el,el2)) return el2;
				hash=(hash+1)&((1<<20)-1);
			}
			cache_Array->ret[hash]=el;
      gc_obj->ary[gc_obj->no++]=el;
			return el;
		} else if (TYPE(el)==T_STRING){
      if (rb_iv_get(el,\"@hash\")!=Qnil) return el;
      int hash=0;
      len=RSTRING_LEN(el);
      char *chrs=RSTRING_PTR(el);
      for (i=0;i<len;i++) hash=((int) chrs[i])+11*hash;//TODO use long
			rb_iv_set(el,\"@hash\",LONG2FIX(hash/2));
      hash=hash&((1<<20)-1);
			el2=cache_String->ret[hash];
			while (el2=cache_String->ret[hash]) {
				if (els_equal(el,el2)) return el2;
				hash=(hash+1)&((1<<20)-1);
			}
      cache_String->ret[hash]=el;
      gc_obj->ary[gc_obj->no++]=el;
      return el;
		} else {
			return el;
		}
	}
"
[Act,Apply,Args,Bind,Bnding,CAct,Comment,Cut,Lambda,Global,Key,Local,Lookahead,Many,Or,Pass,Result,Rule,Seq,Stop,Strin,Switch_Char,Switch_Clas,Switch_Or].each{|e| 
by="[#{e.instance_variable_get(:@attrs)*","}]"
by="ary" if by=="[ary]"
equalize_by(e,by)
norm.puts "int hits_#{e}=0;int miss_#{e}=0; normalize_cache *cache_#{e};
VALUE normalize_#{e}(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,\"@ary\");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	#{e.instance_variable_get(:@attrs).map{|e| "rb_iv_set(obj,\"@#{e.to_s}\",normalize_el(rb_iv_get(obj,\"@#{e.to_s}\")));hash=11*hash+rb_iv_get(obj,\"@#{e.to_s}\");"}*""}
	rb_iv_set(obj,\"@hash\",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_#{e}->ary[hash]){
	 	#{e.instance_variable_get(:@attrs).map{|e| "if (!els_equal(rb_iv_get(obj,\"@#{e.to_s}\"),rb_iv_get(obj2,\"@#{e.to_s}\"))) goto next;"}*""}
	 	hits_#{e}++;
	 	return cache_#{e}->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern(\"normalize2\"),0);
	miss_#{e}++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  #{e.instance_variable_get(:@attrs).map{|e| "rb_iv_set(obj3,\"@#{e.to_s}\",normalize_el(rb_iv_get(obj3,\"@#{e.to_s}\")));hash3=11*hash3+rb_iv_get(obj3,\"@#{e.to_s}\");"}*""}
  	rb_iv_set(obj3,\"@hash\",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_#{e}->ary[hash3]){
	   	#{e.instance_variable_get(:@attrs).map{|e| "if (!els_equal(rb_iv_get(obj3,\"@#{e.to_s}\"),rb_iv_get(obj2,\"@#{e.to_s}\"))) goto next2;"}*""}
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_#{e}->ary[hash3]=obj3;
  	cache_#{e}->ret[hash3]=obj3;
	}
	cache_#{e}->ary[hash]=obj;
	cache_#{e}->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_#{e}(VALUE self #{e.instance_variable_get(:@attrs).map{|el| ",VALUE #{el}"}*""}){
	int hash=0;
	#{e.instance_variable_get(:@attrs).map{|el| "#{el}=normalize_el(#{el});hash=11*hash+#{el};"}*""}
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_#{e}->ary[hash];
  if((int)obj2){
    #{e.instance_variable_get(:@attrs).map{|el| "if (!els_equal(#{el},rb_iv_get(obj2,\"@#{el.to_s}\"))) goto next;"}*""}
    hits_#{e}++;
    return cache_#{e}->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern(\"#{e}\")));
	#{e.instance_variable_get(:@attrs).map{|el| "rb_iv_set(obj3,\"@#{el}\",#{el});"}*""}
	return normalize_#{e}(obj3);
}"
}
cn=[Act,Apply,Args,Bind,Bnding,CAct,Comment,Cut,Lambda,Global,Key,Local,Lookahead,Many,Or,Pass,Result,Rule,Seq,Stop,Strin,Switch_Char,Switch_Clas]
norm.puts "
normalize_cache * normalize_cache_init(){
       normalize_cache *b;
       b=malloc(sizeof(normalize_cache));
       b->ary=calloc(1<<20,sizeof(VALUE));
       b->ret=calloc(1<<20,sizeof(VALUE));

       return b;
}
void normalize_cache_mark(normalize_cache *b){int i;
  for(i=0;i<gc_obj->no;i++) rb_gc_mark(gc_obj->ary[i]);
}
void normalize_cache_free(normalize_cache *b){}
VALUE gc_cache;
void init_normalize(){
#{cn.map{|e| "cache_#{e}=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern(\"#{e}\")),\"normalize\",normalize_#{e},0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern(\"#{e}\")),\"create2\",create2_#{e},#{e.instance_variable_get(:@attrs).size});"

}*""}
  gc_obj=malloc(sizeof(gc_objs));gc_obj->ary=calloc(1<<20,sizeof(VALUE));gc_obj->no=0;
	gc_cache=Data_Wrap_Struct(rb_cObject,normalize_cache_mark,normalize_cache_free,gc_obj);
	rb_global_variable(&gc_cache);

}
void normalize_stats(){
	#{cn.map{|e| "printf(\"#{e} hits: %i miss: %i\\n\",hits_#{e},miss_#{e});"}*""}
}
"


Placeholder=Consts.new("Placeholder");FAIL=Consts.new("FAIL")


class Array
	def normalize;	self;	end
end
class AmethystAST
	def normalize;	self;	end
	def normalize2
		self.freeze
	end
	def [](a)
		@ary[a]
	end
end

def Bnding.[]
	@bno=(@bno||0)+1
  a={:ary=>[@bno]}
	Bnding.create(a).normalize
end

def quote(s)
	s||=""
  '"'+s.gsub('\\"','"').gsub('"','\\"')+'"'
end

def autovar
	$av=($av||0)+1
	Local["autovar",$av]
end

def Enter.[](from,to)
	Pass[from,to,true]
end

def Pass.[](from,to,enter=nil)
	a,r=autovar,autovar
	Seq[Bind[a,from], Pass.create({:to=>Seq[Bind[r,to],Apply["eof"]],:var=>a,:enter=>enter}).normalize,r]
end

class Bind
	def self.[](name,expr,append=nil)
		if append
	    a=autovar
    	return Seq[Bind[a,expr],PureAct[Args["_append(",name,",",a,")"]],a]
	  end
		if name.is_a?(Local)
			Bind.create2(name,[expr])
		else
			 a=autovar
	    Seq[Bind[a,expr],PureAct[Args[name,'=',a]]]
		end
	end
	def normalize2
		$normalize.parse(:bind,[self])
	end
	def expr
		ary[0]
	end
end
def Append.[](name,expr)
	Bind[name,expr,true]
end

def Many.[](expr,many1=nil)
  a=autovar
	Seq[{:ary=>( [Bind[a, Act["[]"]]]+(many1 ? [Append[a,expr]] : [])+[Many.create({:ary=>[Append[a,expr]]}).normalize,a])}]
end

class Seq
	def self.[](*args)
		args=args[0][:ary] if args.size==1 && args[0].is_a?(Hash)
		Seq.create2(args.flatten)
	end
	def normalize2
		$normalize.parse(:seq2,[self])
	end
end
class Or
	def self.[](*args)
		args=args[0][:ary] if args.size==1 && args[0].is_a?(Hash)
		Or.create2(nil,args.flatten)
	end
	def normalize2
		$normalize.parse(:or,[self])
	end
end
class Switch_Char
	def normalize2
		h=Hash.new{|h,k| h[k]=[]}
		@ary.each{|k,v| h[v]<<k}
		nary=[]
		h.each{|v,ks| nary<<[ks.inject(:|),v]}
    s=self.dup
		s.ary=nary.sort_by{|k,a| k.inspect}
    s
	end
end
class Switch_Clas
	def normalize2
		h=Hash.new{|h,k| h[k]=[]}
		@ary.each{|k,v| h[v]<<k}
		nary=[]
		h.each{|v,ks| nary<<[ks.inject(:|),v]}
		#TODO in ctranslator sort by class lattice
		s=self.dup
		s.ary=nary.sort_by{|k,a| k.ary.include?(Object) ? "zzz" : k.inspect}
    s
	end
end

def PureAct.[](expr=nil)
	a=Act[expr].dup
	if a.is_a?(Act)
		a.pure=true 
	end
	a.normalize
end

$constno=0
def cact_add_global(name,expr,wrap)
	["static VALUE #{name};","#{name}=#{expr};#{gc_mark_var(name)}",wrap]
end
[CAct,Result].each{|c|
	eval("class #{c}
					def pure;true;end
	      end")
}
$cstr={}
class CAct
	def ccode 
		$constno+=1
		return [nil,nil,"rb_ary_new3(0)"] if ary[0].is_a?(Array)
    return [nil,nil,"Q#{ary[0].inspect}"] if [true,false,nil].include?(ary[0])
		return cact_add_global("c_#{ary[0].inspect}","rb_const_get(rb_cObject, rb_intern(\"#{ary[0].inspect}\"))","c_#{ary[0].inspect}") if ary[0].is_a?(Class)
		#ugly but needed for arbitrary precision(alternatively emit int2fix when fits fixnum range)
		return cact_add_global("i_#{ary[0]}","rb_funcall(rb_str_new2(\"#{ary[0]}\"),rb_intern(\"to_i\"),0)","i_#{ary[0]}") if ary[0].is_a? Integer
		if ary[0].is_a?(String)
			sig="s_#{signature(ary[0].inspect[1...-1])}"
			i=1
			i+=1 while ($cstr[sig+i.to_s] || ary[0].inspect) !=  ary[0].inspect
			$cstr[sig+i.to_s]=ary[0].inspect
			sig=sig+i.to_s if i>1
			return cact_add_global(sig,"rb_str_new2(#{ary[0].inspect.gsub("\\#","#")})","rb_obj_clone(#{sig})")
		end
		[nil,nil,ary[0]]
	end
end
class Act
	def self.[](expr=nil,pred=nil,pure=nil)
		expr=[expr] unless expr.is_a?(Array)
		Act.create({:ary=>expr,:pred=>pred,:pure=>pure}).normalize
	end
	def normalize2
		if @ary.size==1 
			if  !@pred
				r=$normalize.parse(:act,[self])
				return r if r!=FAIL
			end
		end
		self.freeze
	end
end
def Pred.[](e,neg=false)
	return Pred[Args["!(",e,")"]] if neg
	Act[e,true]
end

class Apply
  def self.[](name,*args)
		h={}
		h=args.pop if args[-1].is_a?(Hash)
		args=args.flatten
	  args=args.map{|a| Act[a]}
		 ar=[name]+args
     Apply.create({:ary=>ar}.merge(h)).normalize
  end
	def name
		@ary[0]
	end
	def normalize2
		$normalize.parse(:apply2,[self])
	end
end
         
def Lookahead.[](e,neg=nil)
		if neg
			Or[Seq[e,Cut[],Apply["fails"]],Seq[Apply["empty"]]]
		else
    	Lookahead.create(e).normalize
		end
end
def Local.[](name,bnd,ssano=nil)
    Local.create({:ary=>[name,bnd],:ssano=>ssano}).normalize
end
class Local
	def desc
		return @@numb[ary[0]][ary[1]] if @@numb[ary[0]][ary[1]]
		 @@numb[ary[0]][ary[1]]="#{ary[0]}_#{@@numb[ary[0]].size+1}"
	end
	def self.resetnumbering
    @@numb=Hash.new{|h,k|h[k]={}}
	end
	def unssa
		Local.create2(nil,@ary)
	end
end
class Apply;					def inspect;	"#{@clas ? "#{@clas}::":""}#{ary[0]}(#{ary[1..-1].map{|a|a.inspect}*","})"							;end;end
class Local;					def inspect;	"L[#{ary[0]}#{ary[1].is_a?(Bnding) ? "" : ary[1]}_#{ssano}]"	;end;end
class Key;						def inspect;	"@#{ary[0]}"																									;end;end
class Global;					def inspect;	"@@#{ary[0]}"																									;end;end
class Bind;						def inspect;	"#{ary[0].inspect}:#{name.inspect}"														;end;end
class Switch; 				def inspect;  "#{self.class}[#{ary.map{|d,k|  "#{d.inspect}: #{k.inspect}\n"}*""}]";end;end


