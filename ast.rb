makeclasses(AmethystAST,
    [:Key],
    [:Result,:name,:vars],
    :Apply,:Char,
    :Nested,
    :Exp,
    [:Bind,:name,:expr],
    [:Many],
    :Comment,
    [:Args],
    [:Act,:pred,:pure],
		[:CAct,:pred],
    [:Lookahead],
    :And,
		[:Strin],
		[:Local,:ssano],
		[:Pass,:var,:to],
    [:Rule,:name,:args,:locals,:body,:cfg,:reachable,:bnding,:consts],
    [:Grammar,:name,:parent,:rules],
		:Global,
		:Memo,
		:Break,
		:Cut,
		:Stop,
		:Bnding,
		[:Phi,:merges,:result],
		[:Switch,:act,:defs,:first]
)

class SeqOr<AmethystAST;end
makeclasses(SeqOr,:Seq,:Or)
Placeholder=Object.new
class Array
	def normalize;	self;	end
end
class AmethystAST
	def normalize;	self;	end
end

$hash_Bnding={}
class Bnding
	def self.[]
		@bno||=0
		@bno+=1
		Bnding.create({:ary=>[@bno]}).normalize
	end
	def normalize2
		self.freeze
	end
end
def quote(s)
	s=[] if s==nil
  s=s*""
  '"'+s.gsub('\\"','"').gsub('"','\\"')+'"'
end

$av=0
def autovar
	$av+=1
	a=Local["autovar",$av]
	a
end

class Enter
	def self.[](from,to)
		Pass[from,to,true]
	end
end

class Pass
	def self.[](from,to,enter=nil)
		a=autovar
		r=autovar
		Seq[_Bind(a,from), (enter ? Placeholder : Act[Args[a,"=[",a,"]"]]) , Pass.create({:to=>Seq[_Bind(r,to),Apply["eof"]],:var=>a}).normalize,r]
	end
	def normalize
		self.freeze
	end
end
def _Bind(name,expr,append=nil)
	if append
		a=autovar.normalize
		$appends<<name if $appends
	  return Seq[_Bind(a,expr),PureAct[Args["_append(",_Local(name),",",a,")"]]]
	end	
	if name.is_a?(Local) || name.is_a?(String)
		Bind.create({:name=>_Local(name),:expr=>expr}).normalize
	else
		a=autovar.normalize
		Seq[_Bind(a,expr),PureAct[Args[name,'=',a]]]
	end
end
class Bind
	def normalize
		return Or[*expr.ary.map{|a|_Bind(name,a)}] if @expr.is_a?(Or)
    return Seq[*(expr.ary[0...-1]+[_Bind(name,expr.ary[-1])])] if @expr.is_a?(Seq) && @expr.ary.size>0

		self.freeze
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
	def normalize
		self.freeze
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

#better rewrite by writing equalize_by generator
def equalize_by(klas,args)
  eval("$hash_#{klas}={}
    class #{klas}\n
          def normalize
            return $hash_#{klas}[#{args}] if $hash_#{klas}[#{args}]
            $hash_#{klas}[#{args}]=normalize2
          end
    end")
end
[Apply,Bnding,Seq,Or].each{|e| equalize_by(e,"ary")}
[Apply,Bnding,Act,Seq,Or].each{|c| eval("class #{c}\n alias_method :hash,:object_id\nend\n")}

[Result,Switch,Cut,Stop,Args,Strin,Exp
].each{|c| eval("class #{c} 
	def self.[](*a)
		create(*a).normalize
	end
	def normalize
		freeze
	end
end")}



class PureAct
	def self.[](expr=nil)
		a=Act[expr].dup
		if a.is_a?(Act)
			a.pure=true 
			a.freeze 
		else 
			a
		end
	end
end
class CAct
	def pure;	true;	end
	def ccode	#rewrite in amethyst
		return "rb_const_get(rb_cObject, rb_intern(\"#{ary[0].inspect}\"))" if ary[0].is_a?(Class)
		return "rb_ary_new3(0)" if ary[0].is_a?(Array)
		return "Q#{ary[0].inspect}" if [true,false,nil].include?(ary[0])
		#ugly but needed for arbitrary precision(alternatively emit int2fix when fits fixnum range)
		return "rb_funcall(rb_str_new2(\"#{ary[0]}\"),rb_intern(\"to_i\"),0)" if ary[0].is_a? Integer
		return "rb_str_new2(#{ary[0].inspect})" if ary[0].is_a?(String)
		ary[0]
	end
end
class Act
	def self.[](expr=nil,pred=nil)
		expr=expr[0] if expr.is_a?(Array) && expr.size<=1
		expr=expr[0] if expr.is_a?(Act) && expr.size<=1
		return expr if expr.is_a?(CAct) || expr.is_a?(Local)
		return Act.create({:pred=>pred}) if expr==nil
		r=Act.create(expr,{:pred=>pred}).normalize
		r
	end
	def normalize2
		return self if !@ary
		if @ary.size==1 && !@pred
			exp=@ary[0]
			exp=exp[0] if exp.is_a?(Args) && exp.size==1
		  return Act.create(exp,{:pure=>true}).freeze if exp.is_a?(Exp)
			return CAct[[]] if exp=="[]"
			return CAct[exp.to_i] if exp.is_a?(String) && exp==exp.to_i.to_s
			return CAct[eval(exp)] if exp=~/^[A-Z][a-zA-Z0-9_]*$/ && eval(exp).is_a?(Class)
			return CAct[eval(exp)] if ["true","false","nil"].include?(exp)
			return CAct[eval('"'+exp[1...-1]+'"')] if exp.is_a?(String) && ((exp[0]==?\" && exp[-1]==?\")|| (exp[0]==?' && exp[-1]==?')) && !(exp=~/\#/)
		end
		@pure=true if exp.is_a?(Exp)
		@ary=nil if @ary.size==0
		self.freeze
	end
end
equalize_by(Act,"[pred,ary,pure]")
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
	def normalize
		freeze
	end
end
[CAct,Global,Key,
Cut,Stop,Exp,Strin,Args,
Comment
#Result
].each{|cls|
eval("class #{cls}
	def self.[](*args)
		#{cls}.create(*args).normalize
	end
	def normalize2
		self.freeze
	end
end")
equalize_by(cls,"ary")
}

$hash_Local={}
class Local
	def self.[](name,bnd,ssano=nil)
    Local.create({:ary=>[name,bnd],:ssano=>ssano}).normalize
  end
	def normalize2
		self.freeze
	end
end
equalize_by("Local","[ary[0],ary[1],ssano]")
class Local
	def desc
		return @@numb[ary[0]][ary[1]] if @@numb[ary[0]][ary[1]]
		 @@numb[ary[0]][ary[1]]="#{ary[0]}_#{@@numb[ary[0]].size+1}"
	end
	alias_method :==,:equal?
	alias_method :eql?,:==
	def self.resetnumbering
    @@numb=Hash.new{|h,k|h[k]={}}
	end

end
def _Local(name)
		return name if !name.is_a?(String)
		bnding=instance_eval{@bnding}
		l=Local[name,bnding]
		instance_eval{@locals << l if @locals}
		l
end




class Apply
	def inspect;	"#{ary[0]}(#{ary[1..-1].map{|a|a.inspect}*","})";	end
end
class Local
	def inspect;	"L[#{ary[0]}#{ary[1].is_a?(Bnding) ? "" : ary[1]}_#{ssano}]";	end
end
class Key
	def inspect;	"@#{ary[0]}";	end
end
class Global
	def inspect;	"@#{ary[0]}";	end
end
class <<Placeholder
	def inspect;	"Placeholder";	end
end
