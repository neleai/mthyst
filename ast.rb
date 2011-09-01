makeclasses(AmethystAST,
    [:Key,:name,:expr,:args],
    [:Result,:name,:args,:vars],
    :Apply,:Char,
    :Nested,
    :Exp,
    [:Bind,:name,:expr,:append],
    [:Many],
    :Comment,
    [:Args],
    [:Act,:pred,:pure],
		[:CAct,:pred,:pure],
    [:Lookahead,:neg],
    :And,
    :Or,
    :Seq,
		[:Strin],
		[:Local,:ssano],
		[:Pass,:var,:to,:enter],
    [:Rule,:name,:args,:locals,:body,:cfg,:reachable,:bnding,:consts],
    [:Grammar,:name,:parent,:rules],
		:Global,
		:Memo,
		:Break,
		:Cut,
		:Stop,
		:Bnding,
		[:Phi,:merges,:result],
		[:Switch,:act,:defs]
)

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

class <<Bnding
	def []
		@bno||=0
		@bno+=1
		Bnding.create({:ary=>[@bno]})
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

class Enter;end
class <<Enter
	def [](from,to)
		Pass[from,to,true]
	end
end

class <<Pass
	def [](from,to,enter=nil)
		a=autovar
		r=autovar
		Seq[_Bind(a,from), (enter ? PureAct[] : Act[Args[a,"=[",a,"]"]]) , Pass.create({:to=>Seq[_Bind(r,to),Apply["eof"]],:enter=>true,:var=>a}),r]
	end
end
def _Bind(name,expr,append=nil)
	if append
		a=autovar
		$appends<<name if $appends
	  return Seq[_Bind(a,expr),PureAct[Args["_append(",_Local(name),",",a,")"]]]
	end	
	if name.is_a?(Local) || name.is_a?(String)
		Bind.create({:name=>_Local(name),:expr=>expr})
	else
		a=autovar
		Seq[_Bind(a,expr),PureAct[Args[name,'=',a]]]
	end
end
class Append;end
class <<Append
	def [](name,expr)
		_Bind(name,expr,true)
	end
end

class <<Many
	def [](expr,many1=nil)
	  a=autovar
		Seq[{:ary=>( [_Bind(a, PureAct["[]"])]+(many1 ? [Append[a,expr]] : [])+[Many.create({:ary=>[Append[a,expr]]}),PureAct[a]])}]
	end
end

class <<Seq
	def [](*args)
		args=args[0][:ary] if args.size==1 && args[0].is_a?(Hash)
		return Seq.create(*args) if args[-1].is_a?(Hash)
		s=Seq.create({:ary=>args}).normalize
		(s.size==1) ? s.ary[0] : s
	end
end
class Seq
	def normalize
		@ary=@ary.map{|i| (i.is_a?(Seq)) ? i.ary : i}.flatten
		@ary=@ary.select{|e| !(e.is_a?(Act) && e.ary.size==0)}
		self
	end
end

class <<Or
	def [](*args)
		args=args[0][:ary] if args.size==1 && args[0].is_a?(Hash)
		return Or.create(*args) if args[-1].is_a?(Hash)
		s=Or.create({:ary=>args}).normalize
		(s.size==1) ? s.ary[0] : s
	end
end
class Or
	def normalize
		@ary=@ary.map{|i| (i.is_a?(Or)) ? i.ary : i}.flatten
		@ary=@ary.select{|e| !(e.is_a?(Act) && e.ary.size==0)}
		(@ary.size==1) ? @ary[0] : self
		self
	end
end



[Apply,Bnding,Global,Local,Act,CAct].each{|c| eval("class #{c} 
 def hash
	ary.hash
 end
 def ==(a)
    return false unless a.is_a? #{c}
    return self.ary==a.ary
  end
	alias_method :eql?,:==
end")}

class Key
	def hash
		name.hash
	end
	def ==(a)
		return false unless a.is_a? Key
		return self.name==a.name
	end
	alias_method :eql?,:==
end


class PureAct
end
class <<PureAct
	def [](expr=nil)
		a=Act[expr]
		a.pure=true
		a
	end
end
class Act
	def self.[](expr=nil,pred=nil)
		expr=expr[0] if expr.is_a?(Array) && expr.size<=1
		return Act.create({:pred=>pred}) if expr==nil
		r=Act.create(expr,{:pred=>pred}).normalize
		puts "ret #{r.inspect}"
		r
	end
	def normalize
		return self if !@ary
		#@ary=[@ary[0][0]] if @ary[0].is_a?(Args) && @ary[0].size==1
		if @ary.size==1 && !@pred
			exp=@ary[0]
			exp=exp[0] if exp.is_a?(Args) && exp.size==1
			puts exp.inspect
			puts exp.inspect
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
		self
	end
end
class Pred;end
class <<Pred
def [](e)
	Act[e,true]
end
end
def _body(body)
	Seq[_Bind("_result",body), PureAct[Args["_result"]]]
end
class <<Apply
  def [](name,*args)
		args=args.flatten
	  args=args.map{|a| Act[a]}
		 ar=[name]+args
     a=Apply.create({:ary=>ar})
		 a
  end
end
         
class <<Lookahead
  def [](e,neg=nil)
		if neg
			Or[Seq[e,Cut[],Apply["fails"]],Seq[Apply["empty"]]]
		else
    	Lookahead.create(e)
		end
  end
end

class <<Local
	def [](*a)
    r=super
    r.instance_variable_set(:@hash,r.ary.hash)
    r
  end
end
class Local
	def inspect
		"Local[#{ary[0]}#{ary[1].is_a?(Bnding) ? "" : ary[1]}_#{ssano}]"
	end
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


