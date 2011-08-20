$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'compiler'
Top=Object.new
Bottom=Object.new
class <<Top
  def inspect
    "Top"
  end
end
class <<Bottom
  def inspect
    "Bottom"
  end
end



t=translate("amethyst Foo { bar = {1}:x ({x}:y {y}:x)* }")
puts t.inspect
r=t[0].rules[0]
r=Dataflow.new.parse(:root,r)
class Constant_Propagator
  attr_accessor :vals,:active,:activea,:depend
	def initialize(depend)
		@depend=depend
		@vals={}
    @active={}
    @activea=[]

	end
	
	def analyze
    while e=activea.pop
      active.delete(e)
			puts e.inspect
      val=step(e)
			puts val.inspect
      if val!=vals[e]
        vals[e]=val
        depend.edges[e].each{|d| addactive(d)}
      end
    end
  end
  def addactive(e)
    if !@active[e]
      @active[e]=true
      @activea<<e
    end
  end

	def analyze2
		@depend.topo_order.each{|e| addactive(e);@vals[e]=Bottom}
		analyze
		@vals
	end
	def valof(e)
		return vals[e.ssaname] if e.is_a?(Local)
		return vals[e]
	end
 	def step(el)
		puts el.inspect
    case el
      when Array
        a=Bottom
        depend.reverse.edges[el].each{|e|
					puts " #{e.inspect} #{valof(e).inspect} #{a.inspect}"
					if valof(e)!=Bottom
          	a=valof(e) if a==Bottom
          	a=Top if a!=valof(e)
					end
        }
        return a
      when Bind
 	      return valof(el.expr)
			when Act
				return valof(el[0]) if el[0].is_a? Local
				return Top
			when CAct
				return el[0]
    end
		return Top
  end
	
end
c=Constant_Propagator.new(r.cfg)
puts c.inspect
puts c.analyze2.inspect
