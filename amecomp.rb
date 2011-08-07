require 'c/amethyst'
require 'c/parser'
require 'c/optimizer_null'
require 'c/optimizer_and_or'
require 'c/detect_variables2'
require 'c/dead_code_elimination'
require 'c/traverser'
require 'c/translator'

def a2ruby(s)
  par=AmethystParser.new.parse(:igrammar,s)
  [AmethystOptimizer2,Analyze_Variables2,Move_Assignments,
    Dead_Code_Detector,Dead_Code_Deleter,
    AmethystOptimizer2,AmethystTranslator].each{|p|
   par=p.new.parse(:itrans,par)
# puts par.inspect
   }
   par
end
     
