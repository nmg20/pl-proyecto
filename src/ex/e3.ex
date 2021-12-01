defmodule Effects do
  @moduledoc "
  Funcións que provocan efectos colaterais.
  "
  defp aux_print(1, s), do: IO.puts("1" <> s)

  defp aux_print(n, s) do
    n_string = Kernel.inspect(n)
    aux_print(n - 1, "\n" <> n_string <> s)
  end

  @doc """
  Aplicación das funcións.
  ##Examples:
    iex> Effects.print(3)
    1
    2
    3
    :ok
  """
  def print(n) do
    aux_print(n, "")
  end

  defp aux_even(2, s), do: IO.puts("2" <> s)
  defp aux_even(n, s) when rem(n,2)==0 do
      n_str = Kernel.inspect(n)
      aux_even(n - 1, "\n" <> n_str <> s)
  end
  defp aux_even(n, s), do: aux_even(n - 1, s)
  
  @doc """
  Aplicación das funcións.
  ##Examples:  
    iex> Effects.even_print(7)
    2
    4
    6
    :ok
  """
  def even_print(n), do: aux_even(n, "") 
end
