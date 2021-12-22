defmodule Effects do
  @moduledoc """
  Funcións que provocan efectos colaterais.
  """
  use GenServer
  import Alias
  import A
  alias Foo.Bar, as: Bar

  def a(true,1) do
    1+Enum.algo()
  end
end