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
'6836af5fdb0d1e998e37f567683dec2f'
end
def parser_source_hash
'040b7fca97c439c3a5c591eb9d0baf0b'
end
def testversionparser(r)
 raise "invalid version" if r!=parser_version
end
def parser_version
'a29bb43c652a868ecf25c0789863f218'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/parser_c"
