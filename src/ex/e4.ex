defmodule Manipulating do
  @moduledoc "
  Funcións que manipulan listas. Non implementa recursividade terminal en filter e flatten (++).
  "
  @doc """
  Filtrado dos elementos dunha lista menores que outro dado.
  ##Examples:
  iex> Manipulating.filter([1,2,3,4,5],3)
  [1, 2, 3]
  """
  
  def filter(l, n), do: filter_aux(l, n, [])
  def filter_aux([], _, l), do: reverse(l)

  def filter_aux([h | t], n, c) when h <= n do
    filter_aux(t, n, [h | c])
  end

  def filter_aux([_ | t], n, c), do:
    filter_aux(t, n, c)

  @doc """
  Función que reordena a lista ao revés.
  ##Examples:
  iex> Manipulating.reverse([1,"two",:a])
  [:a, "two", 1]
  """

  def reverse(l), do: rev_aux(l, [])
  def rev_aux([], c), do: c

  def rev_aux([h | t], c) do
    rev_aux(t, [h | c])
  end

  @doc """
  Concatenación de listas anidadas.
  ##Examples:
  iex> Manipulating.concatenate([[1,"two",3],[],[4,:five]])
  [1, "two", 3, 4, :five]
  """

  def concatenate(l), do: conc_aux(l, [])
  def conc_aux([], c), do: c

  def conc_aux([h | t], c) do
    conc_aux(t, c++h)
  end

  @doc """
  Aplicación de flatten.
  ##Examples:
  iex> Manipulating.flatten([[1,["two",[3],[]]], [[[4]]], [:five,6]])
  [1, "two", 3, 4, :five, 6]
  """

  def flatten([h | t]), do: flatten(h)++flatten(t)
  def flatten([]), do: []
  def flatten(l), do: [l]
end
