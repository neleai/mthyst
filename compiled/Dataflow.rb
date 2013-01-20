class Dataflow < Amethyst
def self.update(*args);self.new.parse(:update,*args);end;def self._selector_update;Dataflow;end
def self.value(*args);self.new.parse(:value,*args);end;def self._selector_value;Dataflow;end
def Dataflow_df_updat_6a97(bind)
df_update(bind[1],bind[2])

end
def Dataflow_df_value_1b52(bind)
df_value(bind[1])

end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Dataflow_c"
