#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
#include "headers/fxDados.h"
#include "headers/vectores.h"
#include "headers/jugadas.h"
#include "headers/finalPartida.h"

/* VECTOR PUNTAJES: 13 espacios ([13])
   vectorPuntajes[]={"Turno","1","2","3","4","5","6","Escalera","Full","Poker","Generala","Generala Doble","Generala Servida"}
   VECTOR JUGADOR[13];

   PUNTAJES:
   ESCALERA:
   FULL:
   POKER:
   GENERALA:
   GENERALA DOBLE:
*/


int main(){
    bool jugar = true;
    while(jugar){
        system("cls");
        cout<<"Presione 1 si es un jugador, 2 si son 2 jugadores u otra tecla para salir"<<endl; //PROVISORIO: ESTO SE HARA CON <RLUTIL>
        int jugadores;
        cin>>jugadores;

        switch(jugadores){
        case 1:
            string nombre;
            cout<<"Ingrese su nombre: "<<endl;
            cin>>nombre;
            int vectorDados[5];
            int vectorJugador[13];
            int vectorPuntajes[] = {"Turno","1","2","3","4","5","6","Escalera","Full","Poker","Generala","Generala Doble","Generala Servida"}
            int tiradas,turno,puntajeFinal;

            for (int i=0;i<10;i++){
                turno(vectorDados);
                vectorJugador[0]++
            }
            imprimirResultados(vectorJugador,nombre,tiradas);
            break;

        case 2:
            string nombre1,nombre2;
            cout<<"Ingrese el nombre del jugador 1: "<<endl;
            cin>>nombre1;
            cout<<"Ingrese el nombre del jugador 2: "<<endl;
            cin>>nombre2;
            int vectorDados[5];
            string vectorPuntajes[] = {"Turno","1","2","3","4","5","6","Escalera","Full","Poker","Generala","Generala Doble","Generala Servida"}
            //ESTO HAY QUE REVISARLO PORQUE ASI NO FUNCIONAN LOS ARRAYS DE STRINGS.
            int vectorJugador1[13];
            int vectorJugador2[13];
            int tirada,turno,puntajeFinal;
            //PROCESO 2 JUGADORES.
            // aca iria un for con 2 secuencias adentro, osea 1 para player 1 y otra para player2 intercalados.
            int * ganador;
            if(sumarVector(vectorJugador1,13)>sumarVector(vectorJugador2,13)){
                ganador=vectorJugador1;
            } else if (sumarVector(vectorJugador2,13)>sumarVector(vectorJugador1,13)){
                ganador=vectorJugador2;
            } else {
                ganador=vectorPuntajes;
            }
            imprimirGanador(ganador,nombre,tiradas);
            break;

        default:
            cout<<"---------------------- Vuelva a jugar pronto! ----------------------"<<endl;
            system("pause");
            exit(0);
        }
    }
    return 0;

}
