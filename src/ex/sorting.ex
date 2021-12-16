defmodule Sorting do
  @moduledoc "
  Funcións que ordenan listas de elementos.
  Non implementan recursividade terminal polo que a súa execución
  pode demorarse un pouco.
  "

  def pr_list([]), do: IO.puts("")
  def pr_list([h]), do: IO.puts("#{h} \n")

  def pr_list([h | t]) do
    IO.puts("#{h} ")
    pr_list(t)
  end

  @doc """
  Aplicacións de quicksort a lista aleatoria e ordenada inversamente.
  ##Examples:
  iex> Sorting.quicksort([9,8,7,6,5,4,3,2,1])
  [1,2,3,4,5,6,7,8,9]

  iex> Sorting.quicksort([9,1,8,2,7,3,6,4,5])
  [1,2,3,4,5,6,7,8,9]
  """
  def quicksort([]), do: []

  def quicksort([p | t]) do
    l = for x <- t, x < p, do: x
    r = for x <- t, x >= p, do: x
    quicksort(l) ++ [p] ++ quicksort(r)
  end

  # Funcións auxiliares que usa mergesort.
  defp merge(l1, l2), do: merge(l1, l2, [])
  defp merge(l, [], c), do: c ++ l
  defp merge([], l, c), do: c ++ l

  defp merge([h1 | t1], [h2 | t2], c) when h1 < h2 do
    merge(t1, [h2 | t2], c ++ [h1])
  end

  defp merge([h1 | t1], [h2 | t2], c), do: merge([h1 | t1], t2, c ++ [h2])

  # Comproba se fai falta dividir a lista
  def merge_aux(l,0), do: l
  def merge_aux(list,n) do
    {l, r} = Enum.split(list, n)
    merge(mergesort(l), mergesort(r))
  end

  @doc """
  Aplicacións de mergesort a lista aleatoria e ordenada inversamente.
  ##Examples:
  iex> Sorting.mergesort([9,8,7,6,5,4,3,2,1])
  [1,2,3,4,5,6,7,8,9]

  iex> Sorting.mergesort([9,1,8,2,7,3,6,4,5]) 
  [1,2,3,4,5,6,7,8,9]
  """
  def mergesort([l]), do: [l]

  def mergesort(list), do: merge_aux(list,div(length(list), 2))
end
