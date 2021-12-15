defmodule Boolean do
  @moduledoc """
  Funcións booleanas implementadas mediante pattern-matching.
  """
  @doc """
  Función booleana de negación.
  """

  def b_not(true), do: false
  def b_not(false), do: true

  @doc """
  Función booleana de intersección.
  """
  def b_and(true, true), do: true
  def b_and(true, false), do: false
  def b_and(false, _), do: false

  @doc """
  Función booleana de intersección.
  """
  def b_or(true, _), do: true
  def b_or(_, true), do: true
  def b_or(false, false), do: false
end
