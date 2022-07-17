#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
#include "headers/fxDados.h"
#include "headers/vectores.h"
#include "headers/jugadas.h"
#include "headers/finalPartida.h"
#include "headers/dibujosDados.h"

/*
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
        cout<<"Presione: "<<endl;
        cout<<"1 - Modo un jugador"<<endl;
        cout<<"2 - Ver puntajes maximos"<<endl;
        cout<<"Otra tecla para salir"<<endl;

        int jugadores;
        cin>>jugadores;
        string vectorCategorias[] = {"   TURNO","       1","       2","       3","       4",
                                     "       5","       6","Escalera","    Full","   Poker","Generala"};

        switch(jugadores){
         /* -------------- 1 JUGADOR ----------------  */
        case 1:{
            string nombre;
            cout<<"Ingrese su nombre: "<<endl;
            cin>>nombre;
            int vectorDados[5];
            int vectorJugador[]={0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
            int vectorPuntajesValidos[10]; //turnos no cuenta
            int vectorOpciones[10];
            int tiradas = 0;
            int const turnos=10;
            int puntajeFinal;
            int tamano=sizeof(vectorJugador);
            int cantDados=5;
            bool servida=false;

            cout<<"Sus dados son: "<<endl;
            primerTiro(cantDados,vectorDados);

            for (int i=0;i<turnos;i++){
                turno1P(vectorDados,cantDados);
                vectorJugador[0]++;
                //EVALUACIONES
                servida=generalaServida(vectorJugador,tiradas);
                if (servida==true){
                    diaDeSuerte();
                    break;
                }
                evaluacionJugadas(vectorDados,vectorPuntajesValidos);
                jugadasValidas(vectorPuntajesValidos,vectorCategorias,vectorJugador,vectorOpciones);
                cout<<"Asi quedo tu puntaje:"<<endl;
                leerVector(nombre,vectorCategorias,vectorJugador, 11);
                puntajeFinal=sumarPuntajes(vectorJugador,tamano);
                cout<<"Su puntaje actual es: "<<puntajeFinal<<endl;

            }
            imprimirResultados(vectorJugador,nombre,tiradas);
            break;

        }

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
