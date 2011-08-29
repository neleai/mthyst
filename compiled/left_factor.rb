class Left_Factor
	def first(s)
		s[0] if s.is_a? Seq
		s
	end
	def rest(s)
		Seq[s[1..(-1)]] if s.is_a? Seq
		Act[]
	end
end


def testversion(r)
 raise "invalid version" if r!='d41d8cd98f00b204e9800998ecf8427e'
end
  require 'compiled/left_factor_c'
