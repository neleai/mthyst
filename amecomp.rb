require 'compiler'

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
     
