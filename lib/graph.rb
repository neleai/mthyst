class Oriented_Graph
	attr_accessor :edges,:redges
	def initialize
		@edges=Hash.new{|h,k| h[k]=[]}
		@redges=Hash.new{|h,k| h[k]=[]}
	end
	def add(from,to)
		@edges[from]<<to
		@redges[to]<<from
	end
	def dfs(v,visited)
		return if visited[v]
		visited[v]=true
		@edges[v].each{|w| dfs(w,visited) }
	end
	def [](from)
		@edges[from]
	end
	def reachable(ary)
#		pp self
		reach={}
		ary.each{|i|
			dfs(i,reach)
		}
		reach
	end
	def reverse
		g=Oriented_Graph.new
		g.edges,g.redges=redges,edges
		g
	end
	def topo_order2(v,visited,order)
		return if visited[v]
    visited[v]=true
    @edges[v].each{|w| topo_order2(w,visited,order) }
		order<<v
	end
	def topo_order
		o=[]
		r={}
			@edges.clone.each{|v,a| topo_order2(v,r,o)}
		o
	end
end
