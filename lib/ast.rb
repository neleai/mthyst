
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
		:Char,
    :Comment,
    :Nested,
		:Switch,
		:Seq,
		:Relabel,
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
} normalize_cache;"
[Act,Apply,Args,Bind,Bnding,CAct,Comment,Cut,Lambda,Global,Key,Local,Lookahead,Many,Or,Pass,Result,Seq,Stop,Strin,Switch_Char,Switch_Clas,Switch_Or].each{|e| 
by="[#{e.instance_variable_get(:@attrs)*","}]"
by="ary" if by=="[ary]"
equalize_by(e,by)
norm.puts "int hits_#{e}=0;int miss_#{e}=0; normalize_cache *cache_#{e};
VALUE normalize_#{e}(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,\"@ary\");
	if (ary!=Qnil){
		len=RARRAY_LEN(ary);
	  els=RARRAY_PTR(ary);
		for (i=0;i<len;i++) hash=((int) els[i])+11*hash;
	}
	#{(e.instance_variable_get(:@attrs)-[:ary]).map{|e| "hash=11*hash+rb_iv_get(obj,\"@#{e.to_s}\");"}*""}
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_#{e}->ary[hash];
	if((int)obj2){
		#{(e.instance_variable_get(:@attrs)-[:ary]).map{|e| "if (rb_iv_get(obj,\"@#{e.to_s}\")!=rb_iv_get(obj2,\"@#{e.to_s}\")) goto next;"}*""}
		VALUE ary2=rb_iv_get(obj,\"@ary\");
		if (ary2==Qnil) goto next;
		len2=RARRAY_LEN(ary2);
	  els2=RARRAY_PTR(ary2);
		if (len!=len2) goto next;
		for(i=0;i<len;i++) if(els[i]!=els2[i]) goto next;
		hits_#{e}++;
		return cache_#{e}->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern(\"normalize2\"),0);
	miss_#{e}++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj,\"@ary\");
		if (ary3!=Qnil){
		  len3=RARRAY_LEN(ary3);
		  els3=RARRAY_PTR(ary3);
		  for (i=0;i<len3;i++) hash3=((int) els3[i])+11*hash3;
		}
		#{(e.instance_variable_get(:@attrs)-[:ary]).map{|e| "hash3=11*hash3+rb_iv_get(obj,\"@#{e.to_s}\");"}*""}
		hash3=hash3&((1<<20)-1);
		cache_#{e}->ary[hash3]=obj3;
  	cache_#{e}->ret[hash3]=obj3;
	}
	cache_#{e}->ary[hash]=obj;
	cache_#{e}->ret[hash]=obj3;
	return obj3;
}"
}
class Bind
	def normalize
		AmethystCore::bind_normalize(self)
	end
end
class Seq
	def normalize
		AmethystCore::seq_normalize(self);
	end
end
class Or
	def normalize
		AmethystCore::or_normalize(self);
	end
end
#class Apply
#	def normalize
#		r=AmethystCore::normalize_Apply(self);
		#puts self.ary.inspect
		#puts self.inspect
		#puts r.inspect
#		r
#	end
#end

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
	Bnding.create({:ary=>[@bno]}).normalize
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
			#AmethystCore::bind_create2(name,[expr])
			Bind.create({:name=>name,:ary=>[expr]}).normalize
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
		#puts args.inspect
		#Seq.create({:ary=>args.flatten}).normalize
		Amethyst::seq_create2(args.flatten)
	end
	def normalize2
		$normalize.parse(:seq2,[self])
	end
end
class Or
	def self.[](*args)
		args=args[0][:ary] if args.size==1 && args[0].is_a?(Hash)
		#Or.create({:ary=>args.flatten}).normalize
		Amethyst::or_create2(args.flatten)
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
		@ary=nary.sort_by{|k,a| k.inspect}
		super
	end
end
class Switch_Clas
	def normalize2
		h=Hash.new{|h,k| h[k]=[]}
		@ary.each{|k,v| h[v]<<k}
		nary=[]
		h.each{|v,ks| nary<<[ks.inject(:|),v]}
		#TODO in ctranslator sort by class lattice
		@ary=nary.sort_by{|k,a| k.ary.include?(Object) ? "zzz" : k.inspect}
		super
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
		$hash_Local[[nil,ary]]
	end
end
def _Local(name)
		return name if !name.is_a?(String)
		bnding=instance_eval{@bnding}
		l=Local[name,bnding]
		instance_eval{@locals << l if @locals}
		l
end

class Apply;					def inspect;	"#{@clas ? "#{@clas}::":""}#{ary[0]}(#{ary[1..-1].map{|a|a.inspect}*","})"							;end;end
class Local;					def inspect;	"L[#{ary[0]}#{ary[1].is_a?(Bnding) ? "" : ary[1]}_#{ssano}]"	;end;end
class Key;						def inspect;	"@#{ary[0]}"																									;end;end
class Global;					def inspect;	"@@#{ary[0]}"																									;end;end
class Bind;						def inspect;	"#{ary[0].inspect}:#{name.inspect}"														;end;end
class Switch; 				def inspect;  "#{self.class}[#{ary.map{|d,k|  "#{d.inspect}: #{k.inspect}\n"}*""}]";end;end


