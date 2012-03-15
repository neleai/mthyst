class Gram
  def memo_no
    if !@memo_no
      if @name=="Amethyst"
        @memo_no=111
      else
        @memo_no=Compiler.grammars[parent].memo_no+2
      end
    else
      @memo_no
    end
  end
  def memo_inc
    @memo_no=memo_no+2
  end
end

class AmethystCTranslator < Amethyst 
  def addcallback2(cb)
    return @rcallbacks[cb] if @rcallbacks[cb]
    n="#{@grammar}_#{signature(cb)}"
    i=1
    i+=1 while @callbacks[n+(i>1 ? i.to_s : "")]
    n=n+i.to_s if i>1
    @rcallbacks[cb]=n
    @callbacks[n]=cb
    n
  end
  def desc(s)
		a=s[0];i=1
		while @locls[a] && @locls[a]!=s
			i+=1;a=s[0]+"_"+i.to_s
		end
		@locls[a]=s
		return a 
  end
  def bget(s)
    cm=s[0]
    s=desc(s)
		return "_#{s}"
  end
  def bset(s,e)
    cm=s[0]
    s=desc(s)
		"_#{s}=#{e};"
  end
  def rbbget(s)
		return "bind[#{@binds[s]}]" if @binds[s]
		@bindno+=1
		@binds[s]=@bindno
		rbbget(s)
  end
  def symb(str)
    str=str.gsub("@","_at_");
    sy="sy_#{str}"
    @header<<"static VALUE #{sy};"
    @init<<"#{sy}=rb_intern(#{str.inspect});"
    sy
  end
  def resetlabels
    @labels=Hash.new(0)
  end
  def label(s)
    @labels[s]+=1
    "#{s}#{@labels[s]}"
  end
  def rbcall(name,args)
    "rb_funcall(self,#{symb(name)},#{args.size}#{args.map{|a| ",#{a}"}*""})"
  end
  def callrule(name,argc)
    margs=argc.times.map{|a| ",arg#{a}"}
    grammar=resolvegrammar(@grammar,name)
    if grammar
      @header<<"VALUE #{grammar}_#{name}(VALUE self #{",VALUE"*argc});"
      "#{grammar}_#{name}(self #{margs*""})"
    else
      rbcall(name,argc.times.map{|a| "arg#{a}"})
    end
  end
  def failwhen(cond)
    "if (#{cond}){it=failobj;goto #{@faillabel};}"
  end
end
def gc_mark_var(v)
	"rb_global_variable(&#{v});"
end
$classlabels=Hash.new(0)
require File.expand_path(File.dirname(__FILE__))+'/AmethystCTranslator.rb'

def ctranslator2_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def ctranslator2_source_hash
'c99796a1ad3958ecf390dd2fb05c2a7a'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
''
end
