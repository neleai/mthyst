STALE=Object.new
class <<STALE
  def inspect
    "STALE"
  end
end
require './Dynamic_Memo'
t=Dynamic_Memo.new
s=96
puts "adding"
5.times{|a|
t.inspect
t.add(0,(s+=1).chr)
t.inspect
t.add(0,(s+=1).chr)
t.inspect
t.add(0,(s+=1).chr)
t.inspect
id=t.get_id(:x,1)
puts id.result.inspect
t.save_id(:x,1,1,1,42)
puts id.result.inspect

t.timestamp_inc
}
puts "interval last change"
5.times{|x|
5.times{|y|
  t.inspect
  puts "#{x}-#{x+y} #{t.last_change(x,x+y)}"
  STDOUT.flush
}
}
puts "deleting characters"
4.times{|i|
  t.del(i)
  t.inspect
  id=t.get_id(:x,1)
  puts id.result.inspect
}
