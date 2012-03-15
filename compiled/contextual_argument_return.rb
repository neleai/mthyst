require File.expand_path(File.dirname(__FILE__))+'/Add_Contextual_Arguments.rb'

require File.expand_path(File.dirname(__FILE__))+'/Add_Contextual_Returns.rb'

# We do following optimalizations
# Pass contextual arguments only to rules that use them. When none uses we delete relevant definitions.

# With contextual returns situation is similar. We can delete definitions that are not used. We dont have to merge first contextual return.

class Context_Graph
end

require File.expand_path(File.dirname(__FILE__))+'/Detect_Contextual_Arguments.rb'

def contextual_argument_return_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def contextual_argument_return_source_hash
'ef9aae4fa1826d0ea9aab1f42210fb57'
end
def testversioncontextual_argument_return(r)
 raise "invalid version" if r!=contextual_argument_return_version
end
def contextual_argument_return_version
''
end
