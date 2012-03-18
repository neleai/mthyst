

require File.expand_path(File.dirname(__FILE__))+'/AmethystParser_Highligth.rb'

class AmethystParser_Highligth < Amethyst
  def local(x);    x.is_a?(String) ? (l=Local[x,@bnding];@locals<<l;l) : x;  end
end
$gno=0
def group_new;  $gno+=1; end

def map_colors(str,src,offset)
  $colors[str].each_with_index{|v,i| $colors[src][i+offset]=v}
  $group_mark[str].each_with_index{|v,i| $group_mark[src][i+offset]=v}
  $group_start[str].each{|i,a| $group_start[src][i+offset]+= a}
  $group_end[str].each{|i,a| $group_end[src][i+offset]+=a}
end

def parser_highlight_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def parser_highlight_source_hash
'fddadbeae97a9d6fd470c9d3f9f6ab5b'
end
def testversionparser_highlight(r)
 raise "invalid version" if r!=parser_highlight_version
end
def parser_highlight_version
''
end
