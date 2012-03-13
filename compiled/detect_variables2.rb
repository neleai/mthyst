#This converts syntax tree to our immediate reprezentation. It
#
# - finds local variables
# - finds what result binds
# - removes comments
# - binds break to many and or

def connectstring(ary)
  r=[]
  s=nil
  ary.each{|a|
    if a.is_a? String
      s||=""
      s+=a
    else
      r<<s if s
      s=nil
      r<<a
    end
  }
  r<<s if s
  r
end

require 'compiled/Analyze_Variables2.rb'

require 'compiled/Resolve_Calls.rb'

def detect_variables2_compiled_by
'6836af5fdb0d1e998e37f567683dec2f'
end
def detect_variables2_source_hash
'57c4d3a2eeedf4c240f0cc862e9d51d2'
end
def testversiondetect_variables2(r)
 raise "invalid version" if r!=detect_variables2_version
end
def detect_variables2_version
''
end
