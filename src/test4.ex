defmodule Fib do
  def x(0), do: 1
  def x(1), do: 1
  def x(n), do: x(n,0)
  def x(0,c), do: c
  def x(n,c), do: x(n-1,c+n)
end