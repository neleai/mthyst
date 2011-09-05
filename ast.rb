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
		[:CAct,:pred,:pure],
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

class Array
	def normalize
		self
	end
end
class AmethystAST
	def normalize
		self
	end
end

class Bnding
	def self.[]
		@bno||=0
		@bno+=1
		Bnding.create({:ary=>[@bno]}).normalize
	end
	def normalize
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
	Local["autovar",$av]
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
		Seq[_Bind(a,from), (enter ? PureAct[] : Act[Args[a,"=[",a,"]"]]) , Pass.create({:to=>Seq[_Bind(r,to),Apply["eof"]],:var=>a}),r]
	end
	def normalize
		self.freeze
	end
end
def _Bind(name,expr,append=nil)
	if append
		a=autovar
		$appends<<name if $appends
	  return Seq[_Bind(a,expr),PureAct[Args["_append(",_Local(name),",",a,")"]]]
	end	
	if name.is_a?(Local) || name.is_a?(String)
		Bind.create({:name=>_Local(name),:expr=>expr}).normalize
	else
		a=autovar
		Seq[_Bind(a,expr),PureAct[Args[name,'=',a]]]
	end
end
class Bind
	def normalize
		return Or[*expr.ary.map{|a|_Bind(name,a)}] if @expr.is_a?(Or)
    return Seq[*(expr.ary[0...-1]+[_Bind(name,expr.ary[-1])])] if @expr.is_a?(Seq) && @expr.ary.size>0

		self#.freeze
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
		Seq[{:ary=>( [_Bind(a, Act["[]"])]+(many1 ? [Append[a,expr]] : [])+[Many.create({:ary=>[Append[a,expr]]}),PureAct[a]])}]
	end
	def normalize
		self.freeze
	end
end

class SeqOr
	 def normalize
    @ary=@ary.map{|i| (i.is_a?(self.class)) ? i.ary : i}.flatten
    @ary=@ary.select{|e| !(e.is_a?(Act) && e.ary.size==0)}
    return Act[] if @ary.size==0
    return @ary[0] if (@ary.size==1)
    @ary.freeze
    self.freeze
  end
end
class Seq
	def self.[](*args)
		args=args[0][:ary] if args.size==1 && args[0].is_a?(Hash)
		return Seq.create(*args) if args[-1].is_a?(Hash)
		Seq.create({:ary=>args}).normalize
	end
end

class Or
	def self.[](*args)
		args=args[0][:ary] if args.size==1 && args[0].is_a?(Hash)
		return Or.create(*args) if args[-1].is_a?(Hash)
		return Apply["fails"] if args.size==0
		Or.create({:ary=>args}).normalize
	end
end



[Apply,Bnding,Global,Key,Local,Act,CAct,Seq,Or].each{|c| eval("class #{c} 
 def hash
	ary.hash
 end
 def ==(a)
    return false unless a.is_a? #{c}
    return self.ary==a.ary
  end
	alias_method :eql?,:==
end")}

[Global,Key,Result,Switch
].each{|c| eval("class #{c} 
	def self.[](*a)
		create(*a).freeze
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
	def self.[](*a)
		c=CAct.create({:ary=>a})
		c.freeze
	end
	def pure
		true
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
	def normalize
		return self if !@ary
		#@ary=[@ary[0][0]] if @ary[0].is_a?(Args) && @ary[0].size==1
		if @ary.size==1 && !@pred
			exp=@ary[0]
			exp=exp[0] if exp.is_a?(Args) && exp.size==1
		  return Act.create(exp,{:pure=>true}) if exp.is_a?(Exp)
			return CAct["rb_ary_new3(0)"] if exp=="[]"
			return CAct["Qtrue"] if exp=="true"
			return CAct["Qfalse"] if exp=="false"
			return CAct["Qnil"] if exp=="nil"
			return CAct["INT2FIX(#{exp})"] if exp.is_a?(String) && exp==exp.to_i.to_s && exp.to_i>-1000000000&&exp.to_i<1000000000
			return CAct["rb_str_new2(\"#{exp[1...-1]}\")"] if exp.is_a?(String) && ((exp[0]==?\" && exp[-1]==?\")|| (exp[0]==?' && exp[-1]==?')) && !(exp=~/\#/)
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
	def normalize
		if @ary[0]=="apply"
			return Apply[@ary[1][0][13...-2]] if @ary[1].is_a?(CAct)
			return @ary[1][0][0] if @ary[1].is_a?(Act) && @ary[1][0].is_a?(Exp)
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

class Local
	def self.[](*a)
    r=super
    r.instance_variable_set(:@hash,r.ary.hash)
    r
  end
end
class Local
	def hash
		@hash
	end
	def desc
		return @@numb[ary[0]][self] if @@numb[ary[0]][self]
		 @@numb[ary[0]][self]="#{ary[0]}_#{@@numb[ary[0]].size+1}"
	end
	def self.resetnumbering
    @@numb=Hash.new{|h,k|h[k]={}}
	end

end
$varhash={}
def _Local(name)
		return name if !name.is_a?(String)
		bnding=instance_eval{@bnding}
		l=Local[name,bnding]
		#return $varhash[l] if $varhash[l]
		puts l.inspect
		$varhash[l]=l
		instance_eval{@locals << $varhash[l] if @locals}
		$varhash[l]
end




class Apply
	def inspect
		"#{ary[0]}(#{ary[1..-1].map{|a|a.inspect}*","})"
	end
end
class Local
	def inspect
		"L[#{ary[0]}#{ary[1].is_a?(Bnding) ? "" : ary[1]}_#{ssano}]"
	end
end
class Key
	def inspect
		"@#{ary[0]}"
	end
end
class Global
	def inspect
		"@#{ary[0]}"
	end
end
