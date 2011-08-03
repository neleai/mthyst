makeclasses(Object,
    [:Key,:name,:expr,:args],
    [:Result,:name,:expr,:args,:vars],
    :Apply,:Char,
    :Nested,
    :Exp,
    [:Set,:name,:expr,:append],
    [:Many,:o],
    :Comment,
    [:Args,:o,:c,:r,:actno],
    [:Act,:uses,:pred,:actno],
    [:Lookahead,:neg],
    :And,
    :Or,
    :Seq,
		[:Strin],
		[:Local,:number,:no,:bind],
		[:Pass,:var,:to,:enter],
    [:Rule,:name,:args,:locals,:body,:reachable,:bnding],
    [:Grammar,:name,:parent,:rules,:rbcode,:rbno],
		:Global,
		:Memo,
		:Break,
		:Cut,
		:Stop,
		[:Variable,:bind,:global,:key],
		:Bnding,
		[:Phi,:merges,:result]
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
class Local
	def inspect
		"Local[#{ary[0]}_#{number}]"
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
		Seq[_Set(a,from), Pass.create({:to=>to,:enter=>enter,:var=>a})]
	end
end
def _Set(name,expr,append=nil)
	if append
		a=autovar
	  return Seq[_Set(a,expr),Act[Args[_Local(name),"||=[];_append(",_Local(name),",",a,")"]]]
	end	
	if name.is_a?(Local) || name.is_a?(String)
		Set.create({:name=>_Local(name),:expr=>expr})
	else
		a=autovar
		Seq[_Set(a,expr),Act[Args[_Local(name),'=',_Local(a)]]]
	end
end
class Append;end
class <<Append
	def [](name,expr)
		_Set(name,expr,true)
	end
end

class <<Many
	def [](expr,many1=nil)
	  a=autovar
		Seq[{:ary=>( [_Set(a, Act["[]"])]+(many1 ? [Append[a,expr]] : [])+[Many.create({:ary=>[Append[a,expr]],:o=>autovar}),Act[a]])}]
	end
end

class <<Act
	def [](expr=nil,pred=nil)
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
	Seq[_Set("_result",body), Act[Args["_result"]]]
end

class <<Lookahead
  def [](e,neg=nil)
    l=Lookahead.create(e)
    l.neg=neg
    l
  end
end
class Local
	def hash
		ary.hash
	end
	def ==(a)	
		return false unless a.is_a? Local
		return self.ary==a.ary
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


