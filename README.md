# Proyecto Final Procesamiento de Lenguajes



# Tasks Proyecto Final PL
  
## *Léxico básico*
  ### Hechos:   [13/12]
    - def, defmodule, do, end, when, and, or, not
    - true, false, nil, fn, ->
    - INT, ATOM, STRING, REAL, LISTAS, TUPLAS
    - admite azucar sintactico (1_000, f. hexadecimal, octal y binario)
    - nombre de módulo y de función
    - identificación de documentaciones
    - condicionales/decisión
    - Cuerpo de funciones
    - Invocación de funciones
    - Operadores 
              -> aritméticos (,-,*,/,div,rem)
              -> lógicos (||,&&,!, not, or)
              -> comparación (==,!=,<=,>=,>,<)
    - Funciones anónimas
    - Maps(!=>) y Kerword lists
    - alias, import, require, use
    - asignación de variables
    - comprobar invocación de fun. existente/Módulo
  ### Pendientes:
    - Tipos soportados: Numéricos, Octal, (*Hexadecimal*), (*Binary*), Átomos, Booleanos, Strings, (*Binarios*), Listas, Tuplas
    - Operadores 
                 -> misc. (String: <>), (Listas: ++, --, in)
                 -> (*(No incluidos) Bitwise*)
    - typespec
    - Binaries
    - guardias
    - registro de funciones y variables
  ### No Contemplados:
    - AST
    - Sigils/String match
    - Data Structures
    - Unicode code point
    - Bitstrings
    - guardias
    - comprensiones
    - typespec
    - binarios

  ### **IMPORTANTE**
    - Diferencia entre variables y valores
    - Mecanismo de comprobación de repetición en funciones y variables

## *Funcionamiento (sintaxis)*
  ### 
    - Lectura correcta desde fichero
    - Comprobación de módulos y funciones simples
    - Lectura y comprobación de documentación
    - La documentación tiene que ir entre tres comillas dobles