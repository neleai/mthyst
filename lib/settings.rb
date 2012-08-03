

def cc_compile_file(file)

#      `astyle #{Amethyst_path}/compiled/#{file}_c.c`
      `cd #{Amethyst_path}/compiled;#{Amethyst::Settings.compile} -c #{file}_c.c -o #{file}_c.o`
      `cd #{Amethyst_path}/compiled;#{Amethyst::Settings.link} -o #{RUBY_VERSION}/#{file}_c.so #{file}_c.o`
      `rm #{Amethyst_path}/compiled/#{file}_c.o` 
end


class AmethystCore;end
class Amethyst < AmethystCore	
	class Settings;
	end;	class <<Settings
		attr_accessor :profiling,:compile_for,:cflags,:debug,:compile,:link
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


