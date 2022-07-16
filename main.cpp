#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
#include "headers/fxDados.h"
#include "headers/vectores.h"
#include "headers/jugadas.h"
#include "headers/finalPartida.h"

/* VECTOR PUNTAJES: 13 espacios ([12])
   vectorPuntajes[]={"Turno","1","2","3","4","5","6","Escalera","Full","Poker","Generala","Generala Servida"}
   VECTOR JUGADOR[13];

   PUNTAJES
   ESCALERA:25
   FULL:30
   POKER:40
   GENERALA:50
*/

int main(){
    bool jugar = true;
    while(jugar){
        system("cls");
        cout<<"Presione 1 si es un jugador, 2 si son 2 jugadores u otra tecla para salir"<<endl; //PROVISORIO: ESTE MENU SE HARA CON <RLUTIL>
        int jugadores;
        cin>>jugadores;
        string vectorPuntajes[] = {"Turno","1","2","3","4","5","6","Escalera","Full","Poker","Generala","Generala Doble","Generala Servida"};

        switch(jugadores){
         /* -------------- 1 JUGADOR ----------------  */
        case 1:{
            string nombre;
            cout<<"Ingrese su nombre: "<<endl;
            cin>>nombre;
            int vectorDados[5];
            int vectorJugador[12];
            int tiradas = 0;
            int turno,puntajeFinal;

            for (int i=0;i<10;i++){
                ronda(vectorDados[],vectorJugador[]);
                vectorJugador[0]++;
            }
            imprimirResultados(vectorJugador,nombre,tiradas);
            break;
        }
      /* -------------- 2 JUGADORES ----------------  */

/* 2PLAYERS
        case 2:{
            string nombre1,nombre2;
            cout<<"Ingrese el nombre del jugador 1: "<<endl;
            cin>>nombre1;
            cout<<"Ingrese el nombre del jugador 2: "<<endl;
            cin>>nombre2;
            int tiradasJ1 = 0;
            int tiradasJ2 = 0;
            int vectorDados[5];

            //ESTO HAY QUE REVISARLO PORQUE ASI NO FUNCIONAN LOS ARRAYS DE STRINGS.
            int vectorJugador1[12];
            int vectorJugador2[12];
            int tirada,turno,puntajeFinal;
            for (int i=0;i<10;i++){
                ronda(vectorDados,vectorJugador1);
                vectorJugador1[0]++;
                ronda(vectorDados,vectorJugador2);
                vectorJugador2[0]++;
            }
            //PROCESO 2 JUGADORES.
            // aca iria un for con 2 secuencias adentro, osea 1 para player 1 y otra para player2 intercalados.
            int * ganador;
            if(sumarVector(vectorJugador1,13)>sumarVector(vectorJugador2,13)){
                ganador=vectorJugador1;
            } else if (sumarVector(vectorJugador2,13)>sumarVector(vectorJugador1,13)){
                ganador=vectorJugador2;
            } else {
                //ganador=vectorPuntajes;??? hacer algo con esto para marcar que es EMPATE algo con que gane el que menos tiradas hizo
            }
            imprimirGanador(ganador,nombre1,tiradasJ1);
            break;
}*/
        /*case 3:{

        }*/
        default:{
            cout<<"---------------------- Vuelva a jugar pronto! ----------------------"<<endl;
            system("pause");
            exit(0);
        }
        }
    }
    return 0;

}
