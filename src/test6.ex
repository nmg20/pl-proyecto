defmodule Mi6 do
  use GenServer
  use Agent

  def get_keys([],a,_), do: a
  def get_keys(l,a,0) do
    Enum.at(l,0)
    [k|a]
  end
  def get_keys(l,a,n) do
    Enum.at(l,n)
    get_keys(l,[k|a],n-1)
  end
  def get_keys(l), do:
    get_keys(l,[],(length l)-1)
  
  def cleanup([]), do: :ok
  def cleanup([h|t]) do
    Agent.stop h
    cleanup(t)
  end


  # Funcións do cliente

  def fundar(), do: GenServer.start_link(Mi6, [], name: :mi6)

  def recrutar(axente, destino), do: GenServer.cast(:mi6, {:rec, axente, destino})

  def asignar_mision(axente, mision), do: GenServer.cast(:mi6, {:asig, axente, mision})

  def consultar_estado(axente), do: GenServer.call(:mi6, {:cons, axente})

  def disolver(), do:
   GenServer.stop(:mi6)



  # Funcións do Servidor

  def init(_) do
    {:ok, Db.new()}
  end

  def terminate(_reason, state) do
    cleanup(get_keys(state))
    :normal
  end

  def handle_cast({:rec, ax, dest}, state) do
    Create.create(String.length(dest))
    Agent.start_link(fn -> Enum.shuffle(l) end, name: ax)
    {:noreply, Db.write(state, ax, dest)}
  end

  def handle_cast({:asig, ax, :espiar}, state) do
    if (Process.whereis(ax)==nil) do
      Agent.update(ax, fn state -> Manipulating.filter(state, hd(state)) end)
      {:noreply, Agent.get(ax, fn l -> l end)}
    else
      {:noreply, state}
    end
  end

  def handle_cast({:asig, ax, :contrainformar}, state) do
    if (Process.whereis(ax)==nil) do
      Agent.update(ax, fn state -> Manipulating.reverse(state) end)
      {:noreply, Agent.get(ax, fn l -> l end)}
    else
      {:noreply, state}
    end
  end

  def handle_call({:cons, ax}, _from, state) do
    if Process.whereis(ax) == nil do
      {:reply, :you_are_here_we_are_not, state}
    else
      Agent.get(ax,fn s -> s end)    
      {:reply, l, state}
    end
  end
end
