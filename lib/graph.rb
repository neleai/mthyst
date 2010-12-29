class Oriented_Graph
	def initialize
		@edges=Hash.new{|h,k| h[k]=[]}
	end
	def add(from,to)
		@edges[from]<<to
	end
	def dfs(v,visited)
		return if visited[v]
		visited[v]=true
		@edges[v].each{|w| dfs(w,visited) }
	end
	def reachable(ary)
#		pp self
		reach={}
		ary.each{|i|
			dfs(i,reach)
		}
		reach
	end
end
