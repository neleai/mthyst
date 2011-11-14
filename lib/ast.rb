makeclasses(AmethystAST,
    [:Grammar,:name,:parent,:rules],
    [:Rule,:name,:args,:locals,:body,:cfg,:reachable,:bnding,:consts],
    :Apply,
    [:Bind,:name],
    [:Many],
		[:Pass,:var,:to],
		[:CAct],
    [:Act,:pred,:pure],
    [:Args],
		[:Strin],
		[:Local,:ssano],:Bnding,:Global,:Key,[:Result,:name,:varnames,:vars],
    :Exp,
    [:Lookahead],
    :And,
		:Memo,
		:Cut,:Stop,
		:Char,
    :Comment,
    :Nested,
		[:Switch,:act,:defs,:first,:header,:init]
)
class SeqOr<AmethystAST;end
makeclasses(SeqOr,:Seq,:Or)
Placeholder=Object.new

class Array
	def normalize;	self;	end
end
class AmethystAST
	def normalize;	self;	end
	def normalize2
		self.freeze
	end
end

$hash_Bnding={}
class Bnding
	def self.[]
		@bno=(@bno||0)+1
		Bnding.create({:ary=>[@bno]}).normalize
	end
end
def quote(s)
	s=[] if s==nil
  s=s*""
  '"'+s.gsub('\\"','"').gsub('"','\\"')+'"'
end

def autovar
	$av=($av||0)+1
	Local["autovar",$av]
end

class Enter
	def self.[](from,to)
		Pass[from,to,true]
	end
end

class Pass
	def self.[](from,to,enter=nil)
		a,r=autovar,autovar
		Seq[_Bind(a,from), (enter ? Placeholder : Act[Args[a,"=[",a,"]"]]) , Pass.create({:to=>Seq[_Bind(r,to),Apply["eof"]],:var=>a}).normalize,r]
	end
end
def _Bind(name,expr,append=nil)
	if append
		a=autovar
		$appends<<name if $appends
	  return Seq[_Bind(a,expr),PureAct[Args["_append(",_Local(name),",",a,")"]],a]
	end	
	if name.is_a?(Local) || name.is_a?(String)
		Bind.create({:name=>_Local(name),:ary=>[expr]}).normalize
	else
		a=autovar
		Seq[_Bind(a,expr),PureAct[Args[name,'=',a]]]
	end
end
class Bind
	def self.[](name,expr)
		Bind.create({:name=>name,:ary=>[expr]}).normalize
	end
	def normalize2
		return Or[*expr.ary.map{|a|_Bind(name,a)}] if expr.is_a?(Or)
		return Seq[Bind[name,Seq[*expr.ary[0...-1]]],expr.ary[-1]] if expr.is_a?(Seq) && expr.ary.size>0 && [Comment,Cut,Stop].include?(expr.ary[-1].class)
    return Seq[*(expr.ary[0...-1]+[_Bind(name,expr.ary[-1])])] if expr.is_a?(Seq) && expr.ary.size>0
		self.freeze
	end
	def expr
		ary[0]
	end
end
class Append
	def self.[](name,expr)
		_Bind(name,expr,true)
	end
end

class Many
	def self.[](expr,many1=nil)
	  a=autovar
		Seq[{:ary=>( [_Bind(a, Act["[]"])]+(many1 ? [Append[a,expr]] : [])+[Many.create({:ary=>[Append[a,expr]]}).normalize,a])}]
	end
end

class SeqOr
	 def normalize2
    @ary=@ary.map{|i| (i.is_a?(self.class)) ? i.ary : i}.flatten
    @ary=@ary.select{|e| !(e==Placeholder)}
    return Placeholder if @ary.size==0
    return @ary[0] if (@ary.size==1)
    @ary.freeze
    self.freeze
  end
end
class Seq
	def self.[](*args)
		args=args[0][:ary] if args.size==1 && args[0].is_a?(Hash)
		return Seq.create(*args).normalize if args[-1].is_a?(Hash)
		Seq.create({:ary=>args}).normalize
	end
	def normalize2
		s=super
		return s if s==Placeholder
		s.ary.each_index{|i|if i!=s.ary.size-1
			return Seq[*s.ary[0..i]] if s.ary[i].is_a?(Apply) && s.ary[i][0]=="fails"
		end}
		s
	end
end
class Or
	def self.[](*args)
		args=args[0][:ary] if args.size==1 && args[0].is_a?(Hash)
		return Or.create(*args).normalize if args[-1].is_a?(Hash)
		return Apply["fails"] if args.size==0
		Or.create({:ary=>args}).normalize
	end
end

class PureAct
	def self.[](expr=nil)
		a=Act[expr].dup
		if a.is_a?(Act)
			a.pure=true 
		end
		a.normalize
	end
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

class CAct
	def ccode #rewrite in amethyst
		$constno+=1
		return [nil,nil,"rb_ary_new3(0)"] if ary[0].is_a?(Array)
    return [nil,nil,"Q#{ary[0].inspect}"] if [true,false,nil].include?(ary[0])
		return cact_add_global("c_#{$constno}","rb_const_get(rb_cObject, rb_intern(\"#{ary[0].inspect}\"))","c_#{$constno}") if ary[0].is_a?(Class)
		#ugly but needed for arbitrary precision(alternatively emit int2fix when fits fixnum range)
		return cact_add_global("c_#{$constno}","rb_funcall(rb_str_new2(\"#{ary[0]}\"),rb_intern(\"to_i\"),0)","c_#{$constno}") if ary[0].is_a? Integer
		return cact_add_global("c_#{$constno}","rb_str_new2(#{ary[0].inspect})","rb_obj_clone(c_#{$constno})") if ary[0].is_a?(String)
		[nil,nil,ary[0]]
	end
end
class Act
	def self.[](expr=nil,pred=nil)
		expr=expr[0] if expr.is_a?(Array) && expr.size<=1
		expr=expr[0] if expr.is_a?(Act) && expr.size<=1
		return expr if expr.is_a?(CAct) || expr.is_a?(Local)
		return Act.create({:pred=>pred}) if expr==nil
		expr=[expr] unless expr.is_a?(Array)
		Act.create({:ary=>expr,:pred=>pred}).normalize
	end
	def normalize2
		return self if !@ary
		if @ary.size==1 
			exp=@ary[0]
			return exp if exp.is_a?(Act)
			if  !@pred
			  return Act.create(exp,{:pure=>true}).freeze if exp.is_a?(Exp)
				return CAct[[]] if exp=="[]"
				return CAct[exp.to_i] if exp.is_a?(String) && exp==exp.to_i.to_s
				return CAct[eval(exp)] if exp=~/^[A-Z][a-zA-Z0-9_]*$/ && eval(exp).is_a?(Class)
				return CAct[eval(exp)] if ["true","false","nil"].include?(exp)
				return CAct[eval('"'+exp[1...-1]+'"')] if exp.is_a?(String) && ((exp[0]==?\" && exp[-1]==?\")|| (exp[0]==?' && exp[-1]==?')) && !(exp=~/\#/)
			end
		end
		@pure=true if exp.is_a?(Exp)
		@ary=nil if @ary.size==0
		self.freeze
	end
end
class Pred
def self.[](e)
	Act[e,true]
end
end
def _body(body)
	Seq[_Bind("_result",body), PureAct[Args["_result"]]]
end

class Apply
  def self.[](name,*args)
		args=args.flatten
	  args=args.map{|a| Act[a]}
		 ar=[name]+args
     Apply.create({:ary=>ar}).normalize
  end
	def normalize2
		if @ary[0]=="apply"
			return Apply[@ary[1][0]] if @ary[1].is_a?(CAct)
			return @ary[1][0][0] if @ary[1].is_a?(Act) && @ary[1][0].is_a?(Exp)
		end
		if @ary[0]=="_seq"
			return Placeholder if @ary[1].is_a?(CAct) && @ary[1][0].size==15
		end 
		self.freeze
	end
end
         
class Lookahead
  def self.[](e,neg=nil)
		if neg
			Or[Seq[e,Cut[],Apply["fails"]],Seq[Apply["empty"]]]
		else
    	Lookahead.create(e).normalize
		end
  end
end
class Local
	def self.[](name,bnd,ssano=nil)
    Local.create({:ary=>[name,bnd],:ssano=>ssano}).normalize
  end
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

def equalize_by(klas,args)
  eval("$hash_#{klas}={}
    class #{klas}\n
          def normalize
            return $hash_#{klas}[#{args}] if $hash_#{klas}[#{args}]
            $hash_#{klas}[#{args}]=normalize2
          end
					alias_method :hash,:object_id
					alias_method :eql?,:equal?
					alias_method :==,:equal?
    end")
end
[Act,Apply,Args,Bind,Bnding,CAct,Comment,Cut,Exp,Global,Key,Local,Lookahead,Many,Or,Pass,Result,Seq,Stop,Strin,Switch].each{|e| 
by="[#{e.instance_variable_get(:@attrs)*","}]"
by="ary" if by=="[ary]"
equalize_by(e,by)
}
[CAct,Global,Key,Cut,Stop,Exp,Strin,Args,Comment,Result,Switch].each{|cls|
	eval("class #{cls}
		def self.[](*args)
			#{cls}.create(*args).normalize
		end
	end")
}


class Apply;					def inspect;	"#{ary[0]}(#{ary[1..-1].map{|a|a.inspect}*","})"							;end;end
class Local;					def inspect;	"L[#{ary[0]}#{ary[1].is_a?(Bnding) ? "" : ary[1]}_#{ssano}]"	;end;end
class Key;						def inspect;	"@#{ary[0]}"																									;end;end
class Global;					def inspect;	"@@#{ary[0]}"																									;end;end
class <<Placeholder;	def inspect;	"Placeholder"																									;end;end
class Bind;						def inspect;	"#{ary[0].inspect}:#{name.inspect}"														;end;end
