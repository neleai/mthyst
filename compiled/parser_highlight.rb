#@Or_AST and @Seq are necessary for collect
#
class AmethystParser_Highligth < Amethyst
	def local(x)
		x.is_a?(String) ? (l=Local[x,@bnding];@locals<<l;l) : x
	end
end
$gno=0
def group_new
  $gno+=1
end

def map_colors(str,src,offset)
  $colors[str].each_with_index{|v,i| $colors[src][i+offset]=v}
  $group_mark[str].each_with_index{|v,i| $group_mark[src][i+offset]=v}
  $group_start[str].each{|i,a| $group_start[src][i+offset]+= a}
  $group_end[str].each{|i,a| $group_end[src][i+offset]+=a}
end

require 'compiled/AmethystParser_Highligth.rb'


def parser_highlight_compiled_by
'6836af5fdb0d1e998e37f567683dec2f'
end
def parser_highlight_source_hash
'777d6295b859b3ef62e7f87c92aee08d'
end
def testversionparser_highlight(r)
 raise "invalid version" if r!=parser_highlight_version
end
def parser_highlight_version
'903fa36149d6011961776a68cc04c34a'
end
