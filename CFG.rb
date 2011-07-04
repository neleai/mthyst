#representing tree as control flow graph
$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'

class CFGNode
	attr_accessor :from,:to,:el
	def initialize(el)
		@el=el
		@from=[]
		@to=[]
	end
	def fromto(a)
		to<<a
		a.from<<self
	end
end
class Or
	def cfgnodes
		beg=CFGNode.new(self)
		en=CFGNode.new(self)
		mid=ary.map{|e| e.cfgnodes}
		mid.map{|s,e| beg.fromto(s);e.fromto(en)}
		[beg,en]
	end
end
class Seq
	def cfgnodes
    beg=CFGNode.new(self)
    en=CFGNode.new(self)
    mid=ary.map{|e| e.cfgnodes}
		ar=[[nil,beg]]+mid+[[en,nil]]
		(ar.size-1).times{|i| ar[i][1].fromto(ar[i+1][0]) }
		[beg,en]
	end
end
class Apply
	def cfgnodes
		nod=CFGNode.new(self)
		[nod,nod]
	end
end
class Many
	def cfgnodes
	end
end
x=Or[Seq[Apply["a"],Apply["b"]],Seq[Apply["c"],Apply["d"]]]
y= x.cfgnodes
puts y.inspect
