#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
#include "headers/fxDados.h"
#include "headers/vectores.h"
#include "headers/jugadas.h"
#include "headers/finalPartida.h"
#include "headers/dibujosDados.h"

int main(){
    bool jugar = true;
    while(jugar){
        system("cls");
        //MENU PRINCIPAL
        cout<<"Presione: "<<endl;
        cout<<"1 - Modo un jugador"<<endl;
        cout<<"2 - Modo profesor"<<endl;
        cout<<"Otro - Salir"<<endl;

        int menu;
        cin>>menu;

        string vectorCategorias[] = {"   TURNO","       1","       2","       3","       4",
                                     "       5","       6","Escalera","    Full","   Poker","Generala"};
        string vectorCategorias2[] = {"TURNO","1","2","3","4","5","6","Escalera","Full","Poker","Generala"};
        //JUEGO
        switch(menu){
         /* -------------- 1 JUGADOR ----------------  */
        case 1:
        case 2:{
            int turnos;
            if(menu==1){
                turnos=10;
            } else if (menu==2){
                turnos=2;
            }
            system("cls");
            string nombre;
            cout<<"Ingrese su nombre: "<<endl;
            cin>>nombre;
            int vectorDados[5];
            int vectorJugador[]={0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
            int vectorPuntajesValidos[10]; //[0] cuenta turnos, no cuenta
            int vectorOpciones[10];
            int puntajeFinal;
            int tamano=11;
            int cantDados=5;
            bool servida=false;
            int acumTiradas=0;
            for (int i=0;i<turnos;i++){
                //Inicia turno
                int tiradas = 0;
                system("cls");
                infoRonda(nombre,vectorJugador,puntajeFinal,tiradas,acumTiradas);
                system("pause");
                primerTiro(cantDados,vectorDados);
                system("cls");
                leerDados(vectorDados);
                tiradas++;
                turno1P(vectorDados,cantDados,tiradas);
                vectorJugador[0]++;

                //Evalua generala servida
                /* CODIGO PARA EVALUAR FUNCION DE GENERALA SERVIDA
                vectorDados[0]=5;
                vectorDados[1]=5;
                vectorDados[2]=5;
                vectorDados[3]=5;
                vectorDados[4]=5;*/
                servida=generalaServida(vectorDados,tiradas);
                if (servida==true){
                    break;
                }
                //Evalua posibles jugadas
                evaluacionJugadas(vectorDados,vectorPuntajesValidos);
                jugadasValidas(vectorPuntajesValidos,vectorCategorias2,vectorJugador,vectorOpciones);
                acumTiradas+=tiradas;
                system("cls");
                infoRonda(nombre,vectorJugador,puntajeFinal,tiradas,acumTiradas);
                system("pause");

                cout<<"                                      "<<endl<<endl;
                leerVector(nombre,vectorCategorias,vectorJugador, tamano);
                puntajeFinal=sumarPuntajes(vectorJugador,tamano);
                cout<<"PUNTAJE ACTUAL: "<<puntajeFinal<<" PUNTOS"<<endl;
                cout<<"LANZAMIENTOS: "<<acumTiradas<<endl;
                system("pause");
            }
            system("cls");
            if(servida==true){
                diaDeSuerte();
                break;
            } else {
            leerVector(nombre,vectorCategorias,vectorJugador,tamano);
            imprimirResultados(vectorJugador,nombre,acumTiradas,puntajeFinal);
            system("pause");
            }
            break;

        }
        default:{
            jugar=false;
            break;
        }
        }
    }
    cout<<"---------------------- Vuelva a jugar pronto! ----------------------"<<endl;
    system("pause");
    exit(0);
    return 0;

}
