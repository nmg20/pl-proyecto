defmodule Boolean do
  @moduledoc """
    Funcións booleanas implementadas mediante pattern-matching.
  """
  @doc """
    a.
  """
  def fun(var) do
    {1,2,3}
    [1,2,3]
    "aaa"
    1.2
    1
    :a
    true
    false
  end

  @doc """
    d.
  """
  def fun(1), do: 1
  
  @doc """
  Funcións sobre listas usando recursividade.
  """
  def fun(var) do
    if a do
      b
    end
  end

  def fun(var) do
    cond do
      a -> true
      a -> false
    end
  end

  def fun(var) do
    case a do
      1 -> :found
      _ -> :not_found
    end
  end
end