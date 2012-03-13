def locals_in(e)
  if !$localsdf
    $localsdf = Detect_Locals.new
  end
  $localsdf.parse(:analyze,[e])
end

class Detect_Locals < Traverser_Clone2
  memoize "analyze"
  use_global_memo
end
require 'compiled/Detect_Locals.rb'

require 'compiled/Normalize.rb'

def normalize_compiled_by
'6836af5fdb0d1e998e37f567683dec2f'
end
def normalize_source_hash
'de56fa36ed790082afab134ca495b925'
end
def testversionnormalize(r)
 raise "invalid version" if r!=normalize_version
end
def normalize_version
'0d4a51a6e4928409a8461f4ddf43d337'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/normalize_c"
