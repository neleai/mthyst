$:.unshift '../lib'
$:.unshift '..'

require 'amethyst'
require 'Foo'
class Foo
	def bar
	end
	def x
		42
	end
	def callback(x)
		puts x.inspect
3
	end
end
#puts Foo.new.foo
puts Foo.new.parse(:foo,"")
puts Foo.new.parse(:t,"   ").inspect
puts Foo.new.parse(:t,"   x").inspect
