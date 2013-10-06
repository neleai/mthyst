# Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012 

CurrentParser={}
require 'digest'
require 'set'
COMPILED=["amethyst","tests","traverser","detect_variables2","parser","dataflow_ssa","inliner2","normalize","error_recovery",
"detect_switch","left_factor","constant_propagation","ctranslator2","implicit_variables","remove_left_rigth_recursion","contextual_argument_return"]
def debug_print(t)
	puts t.inspect if Amethyst::Settings.debug>1
end

dataflow_def("min_size","Minsize_Dataflow","@df.size")
dataflow_def("max_size","Maxsize_Dataflow","@df.size")
dataflow_def("first_char","Switch_Char_Dataflow","@df")
dataflow_def("first_clas","Switch_Clas_Dataflow","@df")


dataflow_def("can_empty?","Minsize_Dataflow","@df.size==0")
dataflow_def("must_empty?","Maxsize_Dataflow","@df.size==0")
dataflow_def("cant_fail?","Cant_Fail_Dataflow","@df.value")



class Gram
	attr_accessor :rules,:calls,:callgraph
	def initialize(grammar)
    @gram=eval(grammar.name)
		@name,@parent=grammar.name,grammar.parent
		@rules={}
		@calls={}
		grammar.rules.each{|r| 
			@rules[r.name]=r
		}
	end
  def name;    @gram.to_s           ;  end
  def parent;  @gram.ancestors[1].to_s;  end
	def opt(r)
		debug_print(r)
		dce=[ Make_SSA, Dead_Code_Deleter3,Forget_SSA]
		[dce].flatten.each{|o|
     	r=o.root(r)
			debug_print(r)
		}
		
		[Make_SSA].each{|p| r=p.root(r)}
		withtime(Constant_Propagator){
      r=r.dup
			c=Constant_Propagator.new
			c.parse(:root,[r.cfg])
			r.consts=c.analyze2
      r.freeze
      debug_print(r)
		}
		[Constant_Traverser,Forget_SSA].each{|p| 
			r=p.root(r)
			debug_print(r)			
		}
		
 		[ dce,	 Left_Factor,	 dce].flatten.each{|o|
			r=o.root(r)
			debug_print(r)
		}
    @rules[r.name]=r 
	end
	def getrule(name)
		grammar=resolvegrammar(self.name,name)
		return Compiler.grammars[grammar].rules[name] if grammar
		return nil
	end
end
def resolvegrammar(grammar,name)
  eval(grammar).ancestors.each{|g|grammar=g.to_s
		return grammar if Compiler.grammars[grammar] && Compiler.grammars[grammar].rules.key?(name)
  }
  return nil
end
class Compiler
end
class <<Compiler
	attr_accessor :grammars
	def init
		@grammars={}
	end
  def add_foreign_grammar(name,rules)
    g=Gram.new(Grammar[{:name=>name,:rules=>[]}])
    g.callgraph=callg=Oriented_Graph.new
    g.rules=Hash[*rules.map{|k| [k,nil]}.flatten]
    @grammars[name]=g
  end
	def complexity(r) # TODO compute
		return 1000000 if r.args.size>0  && (! ["regch","clas"].include?(r.name))
		return 100 if  ["char","space"].include?(r.name)
		return 0
	end
	def add_grammar(grammar)
		$current_grammar_name=grammar.name #TODO hack for resolving apply. think of better way of supplying context
		g=@grammars[grammar.name]=Gram.new(grammar)
		g.callgraph=callg=Oriented_Graph.new
		g.callgraph=callg=@grammars[grammar.parent].callgraph.clone if @grammars[grammar.parent]
		names=g.rules.map{|name,code| name}
		names.each{|name|
			if CurrentParser[:implicit_variables]
        freq=Detect_Implicit_Variables.root(g.rules[name])
        g.rules[name]=Add_Implicit_Variables.root([freq,g.rules[name]])
      end
      g.rules[name]=Analyze_Variables2.root(g.rules[name])
	  	g.rules[name]=Resolve_Calls.root([g,g.rules[name]])
		}
		names.dup.each{|name| #update callgraph
			g.calls[name]=DetectCalls.root([g.rules[name]])
			g.calls[name].each{|c,t| callg.add(name,c)}
		}
    det_add={Detect_Contextual_Arguments=>Add_Contextual_Arguments,Detect_Contextual_Return=>Add_Contextual_Returns}
    [Detect_Contextual_Arguments,Detect_Contextual_Return].each{|d|
      cargs=names.dup.select{|name|  d.root(g.rules[name])!=[] }
      cargs=callg.reachable(cargs).map{|k,v| k} & callg.reverse.reachable(cargs).map{|k,v| k}  if d==Detect_Contextual_Return
      cargs.each{|name| 
        aca=det_add[d].new ;aca.instance_variable_set(:@cargs, callg.reverse.reachable(cargs))
        puts cargs.inspect
        puts g.rules[name].inspect
        g.rules[name]=aca.parse(:root,g.rules[name])
        puts g.rules[name].inspect
      }
    }

		topo= callg.topo_order
		#TODO resolve name clashes
    #TODO recursive 
		called=callg.reverse.reachable(names)
		called.each{|name,v| g.rules[name]=g.getrule(name)}
		puts called.inspect;
	  switches=[Detect_Switch_Char,Detect_Switch_Clas].map{|sw2|
      sw=sw2.new;sw.instance_variable_set(:@name,grammar.name);sw
    } 
		$rules=g.rules
		topo.each{|name|if g.rules[name] && called[name]
				if g.calls[name] && g.calls[name].include?(name)
					g.rules[name]=Remove_Left_Recursion.root([g.rules[name]])
				end
				g.opt(g.rules[name])
		end}
    #TODO compute by dataflow resolving parameters
    #      - seq and apply parameter is resolving
    #      - parameter of rule is resolving if
    #        it influences argument of application that is 
    #        resolving or influences semantic predicate.
    #
    #      We want all parametrizations that are resolving
		topo.each{|name|if g.rules[name] && called[name] 
        repeat=true                                  
        while repeat
				  inlined=false
          g.calls[name]=DetectCalls.root([g.rules[name]])
			  	g.calls[name].each{|nm,v|
				  	r=g.getrule(nm)
			  		if r && nm!=name
					  	if complexity(r)>10
                puts "inlined #{nm} in #{name}"
		            g.rules[name]=Inliner2.root([r, g.rules[name]])
			  				inlined=true
		  				end
	  				end
  				}
				  g.opt(g.rules[name]) if inlined
          repeat=false if !inlined || (!["Lam","AmethystParser_Highligth"].include?(g.name))#we want turn it to on where we can resolve lambdas.
        end
				DetectCalls.root([g.rules[name]]).each{|nm,t| r=g.getrule(nm)
					 if r && (nm=="seq" || nm=="token")
            g.rules[name]=Inliner2.root([r, g.rules[name]])
           end
				}
		end}

    called.each{|name,v| g.rules[name]=Resolve_Calls.root([g,g.rules[name]])}
		topo.each{|name|if g.rules[name] && called[name]
				#TODO optimize separately as in inherited it dont have to be true
		    switches.each{|o| g.rules[name]=o.parse(:root,g.rules[name])}
				g.opt(g.rules[name])	
		end}
    grammar.rules=g.rules.map{|h,k| k}
    c,init,rb=AmethystCTranslator.new.parse(:itrans,[grammar])
    CurrentParser.clear
    hex_digest=Digest::MD5.hexdigest(c*"")
    File.open(Amethyst_path+"/compiled/#{g.name}.rb" ,"w"){|f| 
      f.puts rb
      f.puts "require File.expand_path(File.dirname(__FILE__))+\"/\#{RUBY_VERSION}/#{g.name}_c\""
    }
    code = "#include \"cthyst.h\"
#include \"memo.c\"
#{c*""}
void Init_#{g.name}_c(){ #{init*""} }\n"
    c_filename = Amethyst_path+"/compiled/#{g.name}_c.c"
    if File.exists?(c_filename)
      f=File.open(c_filename,"r"); oldcode=f.read; f.close
    else
      oldcode=""
    end
if code!=oldcode
    puts "code",code.size,oldcode.size
      File.open(c_filename,"w"){|f| f.print(code) }
  	  withtime("c"){ cc_compile_file(g.name) }
    end
    if !@bootstrapping_amethyst
      require Amethyst_path+"/compiled/#{g.name}.rb" 
    end
	end
	def compile(file,bootstrap=false)
    @bootstrapping_amethyst=bootstrap
    file2=File.basename(file)[0..-5]
    GC::disable # Doing GC took 30% time
		source=File.new(file).read
		source_hash=Digest::MD5.hexdigest(source)
		if !@bootstrapping_amethyst #at bootstrap we compare if compilation by new and old compiler give same result. 
      if file2!="amethyst" && file2!="traverser"
      #TODO we need ast of parent grammars. 
      #Saving by YAML is to slow so for now we use this hack
        if Dir[Amethyst_path+"/compiled/#{file2}.rb"]!=[]
          fil=File.new(Amethyst_path+"/compiled/#{file2}.rb").read
          compiled_by=/compiled_by\n.*'([0-9a-f]*)'/.match(fil)[1]
          shash=/source_hash\n.*'([0-9a-f]*)'/.match(fil)[1]
          if compiled_by==$compiled_by && shash==source_hash
            require Amethyst_path+"/compiled/#{file2}.rb" 
            return
          end
        end
      end
 		end
		tree=AmethystParser.file(source)
    if tree==FAIL
      repair_errors(file,source)
    end
		CurrentParser.clear

		$gr={}
		pre =tree.map{|e| #TODO When not bootstraping we want this be rb file we output
		if e.is_a? Grammar
			$gr[e.name]=e
      Object.class_eval("class #{e.name} < #{e.parent};end")
			"Compiler.add_grammar($gr[#{e.name.inspect}])\n"
		else
		e
		end}.join
    pre="module Foo\n#{pre}\nend" if @bootstrapping_amethyst
    puts pre.inspect
    tev="/tmp/#{file}_tmp.rb"
    f=File.new(tev,"w")
    f.puts(pre)
    f.close
    require tev
    File.unlink(tev)
    
		debug_print tree
    c,init,rb=[],[],[]
    tree.map{|e|
      if e.is_a? Grammar
        rb<<"require File.expand_path(File.dirname(__FILE__))+'/#{e.name}.rb'"
      else
        rb<< e
      end
    }
    rb=rb*""
    GC::enable
		hex_digest=""#Digest::MD5.hexdigest(c)
    File.open("#{Amethyst_path}/compiled/#{file2}.rb","w"){|f| f.puts rb; 
      f.puts "\ndef #{file2}_compiled_by\n'#{$compiled_by}'\nend\ndef #{file2}_source_hash\n'#{source_hash}'\nend\ndef testversion#{file2}(r)\n raise \"invalid version\" if r!=#{file2}_version\nend\ndef #{file2}_version\n'#{hex_digest}'\nend"}
	end
end
Compiler::init
$compiled_by=""
COMPILED.each{|opt|
if Dir[Amethyst_path+"/compiled/#{opt}.rb"]!=[] #new grammars
	require Amethyst_path+"/compiled/#{opt}"
	$compiled_by<< eval("#{opt}_version")
end
}
$compiled_by=Digest::MD5.hexdigest($compiled_by)
$normalize=Normalize.new;
class Amethyst
	alias_method :parse2,:parse
	def parse(rule,obj,*args)
		withtime(self.class){	parse2(rule,obj,args) }
	end
end

Compiler.add_foreign_grammar("AmethystCore",["_seq","anything"])
