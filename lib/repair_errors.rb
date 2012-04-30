def rm_matching_pairs(parens)
  begin
    lastsize=parens.size
    parens=Error_Recovery.rm_matching_pairs(parens)
  end while parens.size<lastsize
  parens
end
def paren(src,par)
  start=par[1][0]-par[1][2]
  en=start
  en+=1 while src[en] && src[en]!=?\r && src[en]!=?\n
  puts src[start..en]
  puts " "*(par[1][2]-1)+"^"
end
def repair_errors(file,source)
  puts "parsing #{file} failed."
  parens=Error_Recovery.parenthness(source)
  parens=rm_matching_pairs(parens)
  while parens.size>0
    type=nil
    newp=nil
    min_i=0 
    min_s=1.0/0.0
    parens.size.times{|i|
      p2=parens.clone
      p2.delete_at(i)
      p2=rm_matching_pairs(p2)
      if p2.size<min_s
        type="delete"
        newp=p2
        min_i=i
        min_s=p2.size
      end
    }
    (parens.size-1).times{|i|
      p2=parens.clone
      p2[i,2]=p2[i,2].reverse
      p2=rm_matching_pairs(p2)
      if p2.size<min_s
        type="swap"
        newp=p2
        min_i=i
        min_s=p2.size
      end
    }
    case type
    when "delete"
      puts "superflows #{parens[min_i][0]}"
      paren(source,parens[min_i])
    when "swap"
      puts "swapped #{parens[min_i][0]} and #{parens[min_i+1][0]}"
      paren(source,parens[min_i])
      paren(source,parens[min_i]+1)
    end
    parens=newp
  end
  exit
end
