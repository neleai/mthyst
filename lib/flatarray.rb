# Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012 

class FlatArray < Array
	def <<(a)
		if a.is_a?(FlatArray)
			self.concat(a)
		else
			super(a)
		end
	end
end
