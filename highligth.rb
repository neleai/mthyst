require './lib/amethyst'
#Amethyst::Settings.debug=2
["amethyst","parser_highlight"].each{|f|
Compiler::compile("amethyst/#{f}.ame")
}

Dir["amethyst/*.ame"].sort.each{|fi|
puts fi

wrap=File.new(fi).read.gsub("\t","  ")
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
         onmouseout ='document.getElementById(\"id#{$group_mark[wrap][i]}\").style.background=\"none\";' onclick='fnSelect(\"id#{$group_mark[wrap][i]}\")'>#{c}</span>" if $group_mark[wrap][i]
  $group_start[wrap][i].each{|el| c="<span id=\"id#{el}\">#{c}"}
  $group_end  [wrap][i].each{|el| c="</span>#{c}"}

  r<<c
}
f=File.new("highligthed/#{File.basename(fi)}.html","w")
f.print "<body bgcolor=black> <pre><div style=\"color:white\">"
f.print "
<script type=\"text/javascript\">
  function fnSelect(objId) {
    fnDeSelect();
    if (document.selection) {
    var range = document.body.createTextRange();
          range.moveToElementText(document.getElementById(objId));
    range.select();
    }
    else if (window.getSelection) {
    var range = document.createRange();
    range.selectNode(document.getElementById(objId));
    window.getSelection().addRange(range);
    }
  }

  function fnDeSelect() {
    if (document.selection) document.selection.empty(); 
    else if (window.getSelection)
                window.getSelection().removeAllRanges();
  }
  </script>
"
f.puts(r)
f.puts "</pre></div></body>"

}
