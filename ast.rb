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
		:Bnding
)
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

def _Enter(from,to)
	_Pass(from,to,true)
end
class Enter;end
class <<Enter
	def [](from,to)
		_Pass(from,to,true)
	end
end
def _Pass(from,to,enter=nil)
	a=autovar
	Seq[_Set(a,from), Pass[{:to=>to,:enter=>enter,:var=>a}]]
end

def _Set(name,expr,append=nil)
  Set[{:name=>_Local(name),:expr=>expr,:append=>append}]
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

$varhash=Hash.new{|h,k| h[k]={}}
def _Local(name)
		return name if !name.is_a?(String)
		bnding=instance_eval{@bnding}
		return $varhash[name][bnding] if $varhash[name][bnding]
		$varhash[name][bnding]=Local[name,bnding]
		instance_eval{	@locals << $varhash[name][bnding] if @locals}
		$varhash[name][bnding]
end


