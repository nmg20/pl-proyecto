defmodule Boolean do
  @moduledoc """
  a.
  """
  @doc """
  a.
  """

  def b_not(true), do: false
  def b_not(false), do: true

  @doc """
  s.
  """
  def b_and(true, true), do: true
  def b_and(true, false), do: false
  def b_and(false, _), do: false

  @doc """
  s.
  """
  def b_or(true, _), do: true
  def b_or(_, true), do: true
  def b_or(false, false), do: false
end
