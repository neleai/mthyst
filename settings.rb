#settings related function and default settings
class Class
  def memoize(*a);               CurrentParser[:memoize]=a;                end
  def memoize_all;               CurrentParser[:memoize]=:all;             end
  def use_global_memo;           CurrentParser[:global_memo       ]=true;  end
  def use_implicit_variables;    CurrentParser[:implicit_variables]=true;  end  
  def use_contextual_returns;    CurrentParser[:contextual_returns]=true;  end
end



Amethyst::Settings.profiling=false
Amethyst::Settings.compile_for=["1_9_3"]
Amethyst::Settings.cflags="-march=core2 "
Amethyst::Settings.debug=1

