defmodule Effects do
  @moduledoc """
  Funcións que provocan efectos colaterais.
  """
  def fun?(p1) do
    fn x!,_ -> IO.puts(x<>"a") end
    [1]++[a|b]
    "a"<>"b"
    [a: 1,b: 2, a: 3]
  end
  defp create_list(n, l), do: create_list(n - 1, [n | l])
end
