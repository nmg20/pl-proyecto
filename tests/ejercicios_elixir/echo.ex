defmodule Echo do
  @moduledoc """
  Servidor que recibe e reenvía mensaxes.
  """
  @doc """
  Activa o servidor (crea o proceso e o rexistra como :echo).
  ##Examples:
  iex> Echo.start()
  :ok
  iex> Echo.start() 
  :ok
  iex> Process.whereis(:echo) |> is_nil
  false
  """
  def start() do
    pid = spawn(fn -> loop() end)
    if Process.whereis(:echo) == nil do
      Process.register(pid, :echo)
      :ok
    else
      :ok
    end
  end

  @doc """
  Ordena ao servidor pararse.
  ##Examples:
  iex> Echo.start()
  :ok
  iex> Echo.stop()
  :ok
  iex> Echo.stop()
  :ok
  iex> Process.whereis(:echo) |> is_nil 
  true
  """
  def stop() do
    if Process.whereis(:echo) != nil do
      send(:echo,:stop)
    end
    :ok
  end

  @doc """
  Envía unha mensaxe para que o servidor o imprima.
  ##Examples:
  iex> Echo.print("term")
  :ok
  iex> Echo.print(:stop)
  :ok
  iex> Echo.stop()
  :ok
  """
  def print(term) do
    if Process.whereis(:echo) != nil do
      send(:echo,{:print, term})
    end
    :ok
  end

  defp loop() do
    receive do
      {:print, msg} ->
        IO.puts(msg)
        loop()

      :stop ->
        Process.unregister(:echo)

      _else ->
        loop()
    end
  end
end
