$:.unshift 'lib'
require 'amethyst'
class Ame <AmethystCore
	def rule
		p _or(proc {seq("aa")},proc{seq("a")})
		p seq("aa")
		p	seq("a")
		p seq("a")
	end
	def space
		seq(" ")
	end
	def spaces
    _many{space}
	end
	def token(t)
		spaces
		seq(t)
	end
	def regch(regex)
		c=anything
		if Regexp.new("[#{regex}]").match(c)
			c
		else
			FAIL
		end
	end
	def _many1()
		a=yield
		return FAIL if a==FAIL
		m=_many{ yield }
		m.unshift a
	end	

end

class AmethystParser < Ame
	def grammar
		token("amethyst")
		space
		name=apply :name
		parent=nil
		_or( proc{ 
			it=token("<")
			break FAIL if it==FAIL
			parent=apply :name
		},proc{
			parent="Object"
		})
		token("{")
		rules=_many{rule}
		token("}")
		Grammar[{:name=>name,:parent=>parent,:rules=>rules}]
	end

	def rule
		n=name
		return FAIL if n==FAIL
		
	end

	def name
		spaces
		it=_many1{regch("A-Za-z_")}
		break FAIL if it==FAIL
		it*""
	end
end
class AmethystTranslator < Ame
	def trans
		_or( proc { _enter(Grammar) {
			name=_key("name"){anything}
			parent = _key("parent"){anything}
			m=_many{trans }
			"class #{name} < #{parent}\n #{m} \nend\n"
		}}, proc { _enter(Rule){
			name=_key("name"){anything}
			args=_key("args"){anything}
			body=_many{trans}
			"def #{name}(#{args})\n #{body*""}\nend\n"
		}},
			proc { _enter(Or){ 
      m=_many{ transfn } 
			"_or(#{m*","} ) "
    }}, proc { _enter(Seq){ 
			m=_many{ trans }
			m*"\n"
		}}, proc { _enter(Apply){
			"(it="+ anything+"();(break FAIL if it==FAIL);it)"
		}},proc { _enter(Enter){
			m=_many{ trans } 
			klas=_key("klas"){anything}
			 "_enter(#{klas}){\n#{m*"\n"} \n} "
		}}, proc { _enter(Key){
			name=_key("name"){anything}
			expr =_key("expr"){trans}
			"_key(#{name}){\n #{expr}\n}"
		}}, proc { _enter(Set){
			var= _key("name"){anything}
			expr =_key("expr"){trans}
			"(#{var} = #{expr})"
		}}, proc { _enter(Act){
			a=anything
			a
		}}, proc { _enter(Many){
			expr=trans
			"_many{#{expr}}"
		}}
		)
	end
	def transfn
		t=trans
		return FAIL if t==FAIL
		"proc{ #{ t } }"
	end
end
a=Ame.new
a.parse("rule","aaa")
b=AmethystTranslator.new
s=Grammar[
Rule[Or[
	Enter[Seq[Set[{:name=>"name",:expr=>Key[{:name=>"name",:expr=>Apply["anything"]}]}],
Set[{:name=>"parent",:expr=>Key[{:name=>"parent",:expr=>Apply["anything"]}]}] ],
Set[{:name=>"m",:expr=>Many[Apply["trans"]]}],
Act['"class #{name} < #{parent}\n #{m} \nend\n"' ],
{:klas=>"Grammar"}]
],
{:name=>"trans"}],
Rule[Seq[Set[{:name=>"t", :expr=>Apply["trans" ]}],Act[ '"proc{ #{t} }"']],
{:name=>"transfn"}],
{:name=>"AmethystTranslator",:parent=>"Ame"}]

p s.inspect
puts b.parse("trans",[s])

p=AmethystParser.new
puts p.parse("grammar","amethyst Ame { }").inspect


