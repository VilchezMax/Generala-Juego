#ifndef FXDADOS_H_INCLUDED
#define FXDADOS_H_INCLUDED
#include <time.h>
#include "vectores.h"

//PROTOTIPOS:
int numeroRandom(int vectorDados[]); //Genera un numero aleatorio del 1 al 6. Devuelve el numero generado.
void primerTiro(int cantDados, int vectorDados[]); //Genera un vector de 5 numeros aleatorios para iniciar el turno. No devuelve, modifica el vectorDados afuera.
void cambioDado(int cantDados, int vectorDados[]); //Cambia un dado del vector por uno aleatorio. No devuelve, modifica el vectorDados afuera
int turnoUnJugador(int vectorDados[]); //Proceso de 1 ronda para 1 jugador. Devuelve int porque devuelve el puntaje final

//DESARROLLO:
int numeroRandom(void){ //Para randomizado
    int nRandom;
    int minimo = 1;
    int maximo = 7;
    nRandom = rand() % (maximo - minimo) + minimo;
    if(nRandom==7){nRandom=6;}

    return nRandom;
}

void primerTiro(int cantDados, int vectorDados[]){
    srand(time(0));
    for(int i=0;i<cantDados;i++){
        cout<<numeroRandom()<<endl;
    }
}

void cambioDado(int cantDados, int vectorDados[]){
    int aCambiar;
    for (int i=0;i<cantDados;i++){
        cout<<"Dado "<<(i+1)<<" sera:"<<endl;
        cin>>aCambiar;
        vectorDados[aCambiar-1]=numeroRandom();
    }
}

void ronda(int vectorDados[], int vectorJugador[]){
    int cantDados=5;
    int opcion;
    primerTiro(cantDados,vectorDados);
    cout<<"Queres cambiar algun dado? 1-SI / 2-NO"<<endl;
    cin>>opcion;
    switch (opcion){
        case 1:
            cout<<"Cuantos quiere cambiar?"<<endl;
            cin>>cantDados;
            cambioDado(cantDados,vectorDados);
            break;
        case 2:
            break;
        default:
            cout<<"Ingrese un numero valido"<<endl;
            break;
    }
    cout<<"Asi quedo tu puntaje:"<<endl;
    leerVector(vectorJugador, 12);
}


#endif // FXDADOS_H_INCLUDED
