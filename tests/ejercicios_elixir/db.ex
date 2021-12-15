defmodule Db do
  @moduledoc """
  Funcións básicas que traballan con almacéns chave-valor.
  """
  @doc """
  Creación do almacén.
  ##Examples:
  iex> l=Db.new()
  []
  """
  def new(), do: []

  @doc """
  Escritura dun par chave-valor no almacén.
  ##Examples:
  iex> l=Db.write([],:a,1);l=Db.write(l,:b,2);l=Db.write(l,:c,4)
  [c: 4, b: 2, a: 1]
  """
  def write(r, k, e), do: [{k, e} | r]

  @doc """
  Borrado dun elemento indetificado por unha chave.
  ##Examples:
  iex> l=Db.write([],:a,1);l=Db.write(l,:b,2);l=Db.delete(l,:b)
  [a: 1]
  """
  def delete_aux([h | t], k, c) when elem(h, 0) == k, do: c ++ t
  def delete_aux([h | t], k, c), do: delete_aux(t, k, [h | c])

  def delete(r, k), do: delete_aux(r, k, [])

  @doc """
  Lectura dun valor indetificado por unha chave existente e non existente.
  ##Examples:
  iex>l=Db.write([],:a,1);l=Db.write(l,:b,2);l=Db.write(l,:c,4);Db.read(l,:c)
  {:ok, 4}

  iex>l=Db.write([],:a,1);l=Db.write(l,:b,2);l=Db.write(l,:c,1);Db.read(l,:z)
  {:error, :not_found}
  """
  def read([], _), do: {:error, :not_found}
  def read([h | _], k) when elem(h, 0) == k, do:
    {:ok, elem(h, 1)}
  def read([_ | t], k), do: read(t, k)

  @doc """
  Recopilación de chaves co mesmo valor asociado.
  ##Examples:
  iex>l=Db.write([],:a,1);l=Db.write(l,:b,2);l=Db.write(l,:c,1);Db.match(l,1)
  [:a, :c]

  iex>l=Db.write([],:a,1);l=Db.write(l,:b,2);l=Db.write(l,:c,1);Db.match(l,10)
  []
  """
  def match_aux([], _, c), do: c

  def match_aux([h | t], e, c) when elem(h, 1) == e, do: match_aux(t, e, [elem(h, 0) | c])
  def match_aux([_ | t], e, c), do: match_aux(t, e, c)

  def match(r, e), do: match_aux(r, e, [])

  @doc """
  Eliminación do almacén enteiro.
  ##Examples:
  iex>l=Db.write([],:a,1);l=Db.write(l,:b,2);l=Db.write(l,:c,1);Db.destroy(l)
  []
  """
  def destroy(_), do: []
end
