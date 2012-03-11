require './lib/amethyst'
expr= '"a"|"b"'
wrap= "amethyst Foo { exp = #{expr} }"
puts AmethystParser.new._file(wrap)[0].rules[0].body.inspect
