def cc_compile_file(file)
      `astyle #{Amethyst_path}/compiled/#{file}_c.c`
      `cd #{Amethyst_path}/compiled;gcc -I. -I/usr/include/ruby-1.9.1/x86_64-linux -I/usr/include/ruby-1.9.1/ruby/backward -I/usr/include/ruby-1.9.1 -I. -fPIC -fno-strict-aliasing -g -g #{Amethyst::Settings.cflags} -fPIC -c #{file}_c.c -o #{file}_c.o`
      `cd #{Amethyst_path}/compiled;gcc -shared -o 1.9.3/#{file}_c.so #{file}_c.o -L. -L/usr/lib -L. -rdynamic -Wl,-export-dynamic -lruby-1.9.1 -lpthread -lrt -ldl -lcrypt -lm -lc`
      `rm #{Amethyst_path}/compiled/#{file}_c.o` 
end
class AmethystCore;end
class Amethyst < AmethystCore	
	class Settings;
	end;	class <<Settings
		attr_accessor :profiling,:compile_for,:cflags,:debug
	end
end


#settings related function and default settings
class Class
  def memoize(*a);               CurrentParser[:memoize]=a;                end
  # choose which rules we memoize
  def memoize_all;               CurrentParser[:memoize]=:all;             end
  # memoize all rules in parser
  def use_global_memo;           CurrentParser[:global_memo       ]=true;  end
  # keep memoized values globaly
  def use_implicit_variables;    CurrentParser[:implicit_variables]=true;  end  
  def use_contextual_returns;    CurrentParser[:contextual_returns]=true;  end
end



Amethyst::Settings.profiling=false
Amethyst::Settings.compile_for=["1_9_3"]
Amethyst::Settings.cflags="-march=core2 "
Amethyst::Settings.debug=1

