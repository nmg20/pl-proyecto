defmodule Effects do
  @moduledoc """
  Funcións que provocan efectos colaterais.
  """
  def fun?(p1) do
    fn x!,_ -> IO.puts(x<>"a") end
    [1]++[a|b]
    "a"<>"b"
    [a: 1,b: 2, a: 3]
    %{a: 2, b: [1,2], c: "a"}
    [p] ++ quicksort(r)
    Enum.map([1,2,3], fn x -> x*2 end)
    'a'++'b'++[1]
  end
  defp create_list(n, []), do: create_list(n - 1, [n | l])
end
