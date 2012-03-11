require './lib/amethyst'
#Amethyst::Settings.debug=2
#def parser_highlight_compiled_by; "42";end
["amethyst","parser_highlight"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)

require "./compiled/#{f}"
}

Dir["amethyst/*.ame"].sort.each{|fi|
puts fi

wrap=File.new(fi).read
$colors=Hash.new{|h,k| h[k]=[]}

$group_mark=Hash.new{|h,k| h[k]=[]}
$group_start=Hash.new{|h,k| h[k]=Hash.new{|h2,k2| h2[k2]=[]}}
$group_end =Hash.new{|h,k| h[k]=Hash.new{|h2,k2| h2[k2]=[]}}

AmethystParser_Highligth.new.parse(:file,wrap)
r=""
wrap.size.times{|i|
  c=wrap[i]
  case c
  when "<"
    c="&lt;"
  when ">"
    c="&gt;"
  when "&"
    c="&amp;"
  end
  c="<span style=\"color:#{$colors[wrap][i]}\">#{c}</span>" if $colors[wrap][i]
  c="<span onmouseover='document.getElementById(\"id#{$group_mark[wrap][i]}\").style.background=\"#002020\";'
         onmouseout ='document.getElementById(\"id#{$group_mark[wrap][i]}\").style.background=\"none\";'>#{c}</span>" if $group_mark[wrap][i]
  $group_start[wrap][i].each{|el| c="<span id=\"id#{el}\">#{c}"}
  $group_end  [wrap][i].each{|el| c="</span>#{c}"}

  r<<c
}
f=File.new("highligthed/#{File.basename(fi)}.html","w")
f.print "<body bgcolor=black> <pre><div style=\"color:white\">"
f.puts(r)
f.puts "</pre></div></body>"

}
