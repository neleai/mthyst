#@Or_AST and @Seq_AST are necessary for collect
$agram=0
class AmethystParser < Amethyst
  memoize "name","argsOpt"
  #use_implicit_variables
end
require 'compiled/AmethystParser.rb'

class AmethystParser < Amethyst
	def local(x)
    return Args[*x] if x.is_a?(Array)
		x.is_a?(String) ? (l=Local[x,@bnding];@locals<<l;l) : x
	end
end

def parser_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def parser_source_hash
'8ac2b556d2732766f8bd26fefe6562de'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
''
end
