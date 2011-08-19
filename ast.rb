makeclasses(Object,
    [:Key,:name,:expr,:args],
    [:Result,:name,:expr,:args,:vars],
    :Apply,:Char,
    :Nested,
    :Exp,
    [:Bind,:name,:expr,:append],
    [:Bind,:name,:expr,:append],

    [:Many,:o],
    :Comment,
    [:Args,:o,:c,:r,:actno],
    [:Act,:uses,:pred,:actno,:pure],
		[:CAct,:pred,:pure],
    [:Lookahead,:neg],
    :And,
    :Or,
    :Seq,
		[:Strin],
		[:Local,:number,:no,:bind,:ssano],
		[:Pass,:var,:to,:enter],
    [:Rule,:name,:args,:locals,:body,:cfg,:reachable,:bnding],
    [:Grammar,:name,:parent,:rules,:rbcode,:rbno],
		:Global,
		:Memo,
		:Break,
		:Cut,
		:Stop,
		[:Variable,:bind,:global,:key],
		:Bnding,
		[:Phi,:merges,:result],
		[:Switch,:fn,:variants]
)

class <<Bnding
	def []
		@bno||=0
		@bno+=1
		Bnding.create({:ary=>[@bno]})
	end
end
class <<Variable
	def [](name,bind)
		Variable.create({:name=>name,:bind=>bind})
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
		Seq[_Bind(a,from), (enter ? PureAct[] : Act[Args[a,"=[",a,"]"]]) , Pass.create({:to=>to,:enter=>true,:var=>a})]
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

class PureAct
end
class <<PureAct
	def [](expr=nil)
		a=Act[expr]
		a.pure=true
		a
	end
end
class <<Act
	def [](expr=nil,pred=nil)
	#puts expr.inspect
		exp=expr
		exp=exp[0] if exp.is_a?(Args) && exp.size==1
		return CAct["rb_ary_new3(0)"] if exp=="[]" 
		return Act.create({:pred=>pred}) if expr==nil
		Act.create(expr,{:pred=>pred})
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
#  args=args.map{|a| Act[a]}
		 ar=[name]+args.flatten
     a=Apply.create({:ary=>ar})
		 puts a.inspect
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
class Global
	def hash
		ary.hash
	end
	def ==(a)
		return false unless a.is_a? Global
    return self.ary==a.ary
	end
	alias_method :eql?,:==
end
class Key
	def hash
		ary.hash
	end
	def ==(a)
		return false unless a.is_a? Key
    return self.name==a.name
	end
	alias_method :eql?,:==
end
class Local
	def inspect
		"Local[#{ary[0]}#{ary[1].is_a?(Bnding) ? "" : ary[1]}_#{ssano}]"
	end
	def hash
		ary.hash
	end
	def ==(a)	
		return false unless a.is_a? Local
		return self.ary==a.ary
	end
	def desc
		return @@numb[ary[0]][self] if @@numb[ary[0]][self]
		 @@numb[ary[0]][self]="#{ary[0]}_#{@@numb[ary[0]].size+1}"
	end
	def self.resetnumbering
    @@numb=Hash.new{|h,k|h[k]={}}
	end
	alias_method :eql?,:==
end
$varhash={}
def _Local(name)
		return name if !name.is_a?(String)
		bnding=instance_eval{@bnding}
		l=Local[name,bnding]
		#return $varhash[l] if $varhash[l]
		$varhash[l]=l
		instance_eval{@locals << $varhash[l] if @locals}
		$varhash[l]
end


