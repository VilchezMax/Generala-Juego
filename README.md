# Generala-Juego
Juego "Generala" presentado como proyecto integrador de materia Programacion 1 de la Universidad Tecnologica Nacional.
Jugabilidad: Aplicacion de terminal.
Para uno o dos jugadores.

Archivos:
SOURCES:
  main.cpp:
    Aqui se ejecuta el hilo principal del juego y se llaman las funciones accesorias.
    
HEADERS:
  # jugadas.h:
    Aqui se declaran y definen todas las funciones que representan las jugadas posibles con sus puntajes correspondientes.
    Estas evaluan si existe esa jugada o no. Si existe, devuelve el puntaje. Si no existe, devuelve 0. Eso se usara para validar desde el main.

  # vectores.h:
    Aqui se declaran y definen las funciones utiles para el manejo de los vectores y matrices que se usan en el juego. Desde la carga hasta la lectura de los mismos.

  # fxDados.h:
    En este archivo se incluyen procesos utiles para las caracteristicas del juego, como dados randomizados, cambio de dados y procesos de rondas.

  # finalPartida.h:
   Este apartado contiene funciones que solamente se van a usar cuando se presente una sitiacion de final de partida, como impresion de puntajes y anuncio de ganador.
   
   #Los headers con funciones para la estetica del menu no fueron implementados. (TODAVIA)
