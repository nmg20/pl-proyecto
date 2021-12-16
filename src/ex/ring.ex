defmodule Ring do
  @moduledoc "
  Anel de procesos que transmiten unha mensaxe.
  "
  @doc """
  Emprégase o método de proceso distinguido, o propio proceso que chama á
  función de start/3 encárgase de crear todos os procesos do anel e enviar 
  a primeira mensaxe.
  ##Examples:
  iex> Ring.start(3,5,"holi")
  :ok
  """
  ## Caso especial de que só sexa un proceso (o 1..1 do Enum.reduce funciona raro)
  def start(1,m,msg) do
    #IO.puts("From #{inspect(self())} to #{inspect(self())}, [#{m} sends left]")
    send(self(),{m-1,msg})
    work(self(),1)
  end

  ## Función que crea os procesos comunicando a cada un a quen lle ten
  # que mandar a mensaxe e cantos procs. son en total (para saber se esperar
  # á seguinte mensaxe)
  def start(n,m,msg) do
    last = Enum.reduce 1..n, self(),
                fn(_n, next_pid) ->
                  spawn(Ring, :work, [next_pid,n+1])
                end
    #IO.puts("\nCreating #{n} processes to send msg #{m} times!")
    #IO.puts("From #{inspect(self())} to #{inspect(last)}, [#{m-1} sends left]")
    send(last,{m-1, msg})
    work(last,n)
    :ok
  end

  ## Función do traballo que realiza cada proceso.
  #   
  def work(next,n) do
    receive do
      {0,_} ->  #cando non quedan mensaxes que enviar faise unha última ronda
                #de sends para que os procesos deixen de traballar
        #IO.puts("Okay, bye! I'm #{inspect(self())}, btw")
        send(next,{0,:stop})
        :ok
      {m, msg} ->
        #IO.puts("From #{inspect(self())} to #{inspect(next)}, [#{m-1} sends left]")
        send(next,{m-1,msg})
        if((m-n)>=0) do
          work(next,n)
        end
    end
  end
end