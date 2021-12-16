defmodule Effects do
  @moduledoc """
  Funcións que provocan efectos colaterais.
  """
  def fun(p1) do
    fn x,_ -> IO.puts(x) end
  end
end
