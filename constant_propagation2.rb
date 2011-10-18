class Constant_Propagator < Amethyst
  attr_accessor :vals,:active,:activea,:depend
	def initialize()
		@vals={}
    @active={}
    @activea=[]
	end

	def analyze
    while e=activea.pop
      active.delete(e)
      val=step(e)
      if val!=valof(e)
        setval(e,val)
        depend.edges[e].each{|d| addactive(d)}
      end
    end
		@vals.clone.each{|k,v| @vals[k]=v.val}
		#puts @vals.inspect
  end
  def addactive(e)
    if !@active[e]
      @active[e]=true
      @activea<<e
    end
  end

	def analyze2
		@depend.topo_order.each{|e| addactive(e);@vals[e]=ConstantLattice[Bottom]}
		analyze
		@vals
	end
	def setval(e,x)
		return vals[e.ssaname]=x if e.is_a?(Local)
    return vals[e]=x
	end
	def valof(e)
		return vals[e.ssaname] if e.is_a?(Local)
		return vals[e]
	end
end


