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
require File.expand_path(File.dirname(__FILE__))+'/Detect_Locals.rb'

require File.expand_path(File.dirname(__FILE__))+'/Normalize.rb'

def normalize_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def normalize_source_hash
'de56fa36ed790082afab134ca495b925'
end
def testversionnormalize(r)
 raise "invalid version" if r!=normalize_version
end
def normalize_version
''
end
