makeclasses(AmethystAST,
    [:Grammar,:name,:parent,:rules],
    [:Rule,:name,:args,:locals,:body,:cfg,:reachable,:bnding,:consts],
    [:Apply,:name,:clas],
    [:Bind,:name],
    [:Many],
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
		[:Switch_Char,:act,:defs,:first,:header,:init],
		[:Switch_Clas,:act,:defs,:first,:header,:init]

)
class SeqOr<AmethystAST;end
makeclasses(SeqOr,:Seq,:Or)


def equalize_by(clas,args)
  eval("$hash_#{clas}={}
    class #{clas}\n
          def normalize
            return $hash_#{clas}[#{args}] if $hash_#{clas}[#{args}]
            $hash_#{clas}[#{args}]=normalize2
          end
					alias_method :hash,:object_id
					alias_method :eql?,:equal?
					alias_method :==,:equal?
					def self.[](*args)
						#{clas}.create(*args).normalize
					end
    end")
end
[Act,Apply,Args,Bind,Bnding,CAct,Comment,Cut,Lambda,Global,Key,Local,Lookahead,Many,Or,Pass,Result,Seq,Stop,Strin,Switch_Char,Switch_Clas].each{|e| 
by="[#{e.instance_variable_get(:@attrs)*","}]"
by="ary" if by=="[ary]"
equalize_by(e,by)
}



Placeholder=Consts.new("Placeholder")
FAIL=Consts.new("FAIL")

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

$hash_Bnding={}
class Bnding
	def self.[]
		@bno=(@bno||0)+1
		Bnding.create({:ary=>[@bno]}).normalize
	end
end
def quote(s)
	s||=""
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
		Seq[_Bind(a,from), Pass.create({:to=>Seq[_Bind(r,to),Apply["eof"]],:var=>a,:enter=>enter}).normalize,r]
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
		# Apply[ ["fails"] {@self} ]
		# Switch_Char[ [.:p .:a {[p,_Bind[name,a]]} ]*:ary ] @Switch_Char
		# Switch_Clas[ [.:p .:a {[p,_Bind[name,a]]} ]*:ary ] @Switch_Char
		# Or[ (.:{Bind[name,it])*:ary ] @Or
		# Seq[ .*:a (Cut|Stop):last ] -> Seq[Bind[name,Seq[a]],e]
		# Seq[ .*:a .:last          ] -> Seq[a,Bind[name,last]]
		return expr if expr.is_a?(Apply) && expr[0]=="fails"
		return Switch_Char[{:ary=>expr.ary.map{|h,k| [h,_Bind(name,k)]}}] if expr.is_a?(Switch_Char)
		return Switch_Clas[{:ary=>expr.ary.map{|h,k| [h,_Bind(name,k)]}}] if expr.is_a?(Switch_Clas)

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
		#	seqor[ seqor[.*:ary[] ] | Placeholder | .:ary[] ]
		# {ary}=>( 0 -> Placeholder
		#        | 1 -> ary[0]
		#        | . -> seqor[ary]
    @ary=@ary.map{|i| (i.is_a?(self.class)) ? i.ary : i}.flatten
    @ary=@ary.select{|e| !(e==Placeholder)}
    return Placeholder if @ary.size==0
    return @ary[0] if (@ary.size==1)
		self
  end
end
class Seq
	def self.[](*args)
		args=args[0][:ary] if args.size==1 && args[0].is_a?(Hash)
		Seq.create({:ary=>args}).normalize
	end
	def normalize2
		s=super
		# ( Apply[ ["fails"] ] .* -> Apply["fails"]
		# | . ):ary
		# {ary.size}=>( 0 -> Placeholder
		# 						| 1 -> ary[0]
		# 						| . -> Seq[ary]
		return s if s==Placeholder
		s.ary.each_index{|i|if i!=s.ary.size-1
			return Seq[*s.ary[0..i]] if s.ary[i].is_a?(Apply) && s.ary[i][0]=="fails"
		end}
		s.ary.freeze
		s.freeze
	end
end
class Or
	def self.[](*args)
		args=args[0][:ary] if args.size==1 && args[0].is_a?(Hash)
		args=args.select{|e| !(e.is_a?(Apply)&& e.ary[0]=="fails")}
		return Apply["fails"] if args.size==0
		Or.create({:ary=>args}).normalize
	end
	def normalize2
		# TODO dont consider alternatives after
		#  Seq[cant_fail* Cut .*]
		# |Seq[cant_fail*       ]
		s=super
		# Or[ (Apply[ ["fails"] ] | .:ary[])*
		#	{ary.size}=>( 0 -> Apply["fails"]
		#	            | 1 -> ary[0]
		#	            | . -> Or[ary]
		return s unless s.is_a?(Or)
		s.ary=$normalize.parse(:or,[s])
		return Apply["fails"] if s.ary.size==0
		return s.ary[0]       if s.ary.size==1
		s.ary.freeze
		s.freeze
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
			return cact_add_global(sig,"rb_str_new2(#{ary[0].inspect})","rb_obj_clone(#{sig})")
		end
		[nil,nil,ary[0]]
	end
end
class Act
	def self.[](expr=nil,pred=nil,pure=nil)
		expr=expr[0] if expr.is_a?(Array) && expr.size<=1
		expr=expr[0] if expr.is_a?(Act) && expr.size<=1
		return expr if expr.is_a?(CAct) || expr.is_a?(Local)
		return Act.create({:pred=>pred}) if expr==nil
		expr=[expr] unless expr.is_a?(Array)
		Act.create({:ary=>expr,:pred=>pred,:pure=>pure}).normalize
	end
	def normalize2
		#
		#   ["[]"]        -> CAct[[]]
		#   [number:n]    -> CAct[n]
		#   [className:n] -> CAct[eval(n)]
		#		["true"|"false"|"nil"]:x -> CAct[eval(x)]
		#		[( '"' .* '"' )[]]:x     -> CAct[eval(x.join)]
		return self if !@ary
		if @ary.size==1 
			exp=@ary[0]
			return exp if exp.is_a?(Act)
			if  !@pred
				exp = exp.strip if exp.is_a?(String) 
				return Act.create(exp,{:pure=>true}).freeze if exp.is_a?(Lambda)
				return CAct[[]] if exp=="[]"
				return CAct[exp.to_i] if exp.is_a?(String) && exp==exp.to_i.to_s
				return CAct[eval(exp)] if exp=~/^[A-Z][a-zA-Z0-9_]*$/ && eval(exp).is_a?(Class)
				return CAct[eval(exp)] if ["true","false","nil"].include?(exp)
				return CAct[eval(exp)] if exp.is_a?(String) && ((exp[0]==?\" && exp[-1]==?\")|| (exp[0]==?' && exp[-1]==?')) && !(exp=~/\#/)
			end
		end
		@pure=true if exp.is_a?(Lambda)
		@ary=nil if @ary.size==0
		self.freeze
	end
end
class Pred
def self.[](e,neg=false)
	return Pred[Args["!(",e,")"]] if neg
	Act[e,true]
end
end
def _body(body)
	Seq[_Bind("_result",body)]
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
		#	  ["apply" | "_seq"] Lambda[.:x] -> x
		# | ["apply"] CAct[.:name] -> Apply[name] #TODO resolve
		# | ["_seq"] CAct[[ "" ]]  -> Placeholder
		# | @self
		if name=="apply"
			return @ary[1][0][0] if @ary[1].is_a?(Act) && @ary[1][0].is_a?(Lambda)
			if @ary[1].is_a?(CAct)
				raise "TODO resolve" 
				return Apply[@ary[1][0]] 
			end
		end
		if name=="_seq"
			return @ary[1][0][0] if @ary[1].is_a?(Act) && @ary[1][0].is_a?(Lambda)
			return Placeholder if @ary[1].is_a?(CAct) && @ary[1][0]==""
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

class Apply;					def inspect;	"#{@clas ? "#{@clas}::":""}#{ary[0]}(#{ary[1..-1].map{|a|a.inspect}*","})"							;end;end
class Local;					def inspect;	"L[#{ary[0]}#{ary[1].is_a?(Bnding) ? "" : ary[1]}_#{ssano}]"	;end;end
class Key;						def inspect;	"@#{ary[0]}"																									;end;end
class Global;					def inspect;	"@@#{ary[0]}"																									;end;end
class Bind;						def inspect;	"#{ary[0].inspect}:#{name.inspect}"														;end;end
class Switch_Char; 				def inspect;  "Switch_Char[#{ary.map{|d,k|  "#{d.inspect}: #{k.inspect}\n"}*""}]";end;end
class Switch_Clas; 				def inspect;  "Switch_Clas[#{ary.map{|d,k|  "#{d.inspect}: #{k.inspect}\n"}*""}]";end;end
