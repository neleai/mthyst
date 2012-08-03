# Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012

require File.expand_path(File.dirname(__FILE__))+'/Detect_Implicit_Variables.rb'

require File.expand_path(File.dirname(__FILE__))+'/Add_Implicit_Variables.rb'

def implicit_variables_compiled_by
'd41d8cd98f00b204e9800998ecf8427e'
end
def implicit_variables_source_hash
'83a9ccbffa77475d578e4e1847a11bb4'
end
def testversionimplicit_variables(r)
 raise "invalid version" if r!=implicit_variables_version
end
def implicit_variables_version
''
end
