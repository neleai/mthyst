Top=Object.new
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
	def constant_propagation(consts)
		cnst={}
		consts.each{|c| cnst[c]=c}
		changed=true
		while changed
			changed=false
			@edges.each{||v,ary|
				if !consts[v]
					ary.each{|c| 
						if consts[c]
							consts[v]=consts[c] 
							changed=true
						end
					}
				end
			}
			@edges.each{||v,ary|
        if consts[v]
          ary.each{|c| 
            if consts[c]!=consts[v]
              consts[v]=Top
              changed=true
            end
          }
        end
			}
		end
	end
end
