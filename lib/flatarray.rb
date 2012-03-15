class FlatArray < Array
	def <<(a)
		if a.is_a?(FlatArray)
			self.concat(a)
		else
			super(a)
		end
	end
end
