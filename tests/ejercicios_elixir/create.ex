defmodule Create do
  @moduledoc """
  Funcións sobre listas usando recursividade.
  """
  @doc """
  Aplicacións das funcións.
  ##Examples:
  > Create.create(0)
  []
  
  > Create.create(5)
  [1, 2, 3, 4, 5]
  """
  def create(n), do: create_list(n, [])
  defp create_list(0, l), do: l
  defp create_list(n, l), do: create_list(n - 1, [n | l])

  @doc """
  Aplicacións das funcións.
  ##Examples:
  iex> Create.reverse_create(0)
  []
  
  iex> Create.reverse_create(6)
  [6, 5, 4, 3, 2, 1]
  """
  def reverse_create(n), do: reverse_list(n, [])
  defp reverse_list(0, l), do: l
  defp reverse_list(n, l), do: reverse_list(n - 1, l ++ [n])
end
