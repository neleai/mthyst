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
		[:Local,:number,:no],
		[:Pass,:var,:to,:enter],
    [:Rule,:name,:args,:locals,:body,:reachable],
    [:Grammar,:name,:parent,:rules,:rbcode,:rbno],
		:Local,:Global,
		:Memo,
		:Break,
		:Cut,
		:Stop
)
class Local
	def inspect
		"Local[#{ary[0]}_#{number}]"
	end
end
def quote(s)
  s=s*""
  '"'+s.gsub('\\"','"').gsub('"','\\"')+'"'
end

$av=0
def autovar
	$av+=1
	_Local("autovar",$av)
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
def _Pass(from,to,enter=false)
	a=autovar
	Seq[_Set(a,from), Pass[{:to=>to,:enter=>enter,:var=>a}]]
end

def _Set(name,expr,append=false)
  Set[{:name=>_Local(name),:expr=>expr,:append=>append}]
end
class Append;end
class <<Append
	def [](name,expr)
		_Set(name,expr,true)
	end
end
def _Append(name,expr)
  _Set(name,expr,true)
end

def _Many(expr,many1=false)
  a=autovar
  Seq[{:ary=>( [_Set(a, _Act("[]"))]+(many1 ? [_Append(a,expr)] : [])+[Many[{:ary=>[_Append(a,expr)],:o=>autovar}],_Act(a)])}]
end
def _Many1(expr)
  _Many(expr,true)
end

def _Act(expr,pred=false)
  Act[{:ary=>[expr],:pred=>pred}]
end
def _Pred(expr)
  _Act(expr,true)
end
def _body(body)
	Seq[_Set("_result",body), _Act(_Local("_result"))]
end
def _Lookahead(e,neg=false)
	l=Lookahead[e]
	l.neg=neg
	l
end
def _Not(e)
	_Lookahead(e,true)
end

$varhash=Hash.new{|h,k| h[k]={}}
def _Local(name,number=1)
	return name if name.is_a? Local
	if var=$varhash[name][number]
		instance_eval{	@locals << var if @locals}
		var
	else
		$varhash[name][number]=Local[{:ary=>[name],:number=>number}]
		_Local(name,number)
	end
end


