#ifndef FXDADOS_H_INCLUDED
#define FXDADOS_H_INCLUDED
#include <time.h>
#include "vectores.h"

//PROTOTIPOS:

int numeroRandom(void); //Genera un numero aleatorio del 1 al 6. Devuelve el numero generado.
void primerTiro(int cantDados, int vectorDados[]); //Genera un vector de 5 numeros aleatorios para iniciar el turno. No devuelve, modifica el vectorDados afuera.
void cambioDado(int cantDados, int vectorDados[]); //Cambia un dado del vector por uno aleatorio. No devuelve, modifica el vectorDados afuera
int turno1P(int vectorDados[],int vectorJugador[]); //Proceso de 1 ronda para 1 jugador. Devuelve int porque devuelve el puntaje final

//DESARROLLO:
int numeroRandom(void){ //Para randomizado
    int minimo = 1;
    int maximo = 7;
    int nRandom = rand() % (maximo - minimo) + minimo;
    if(nRandom==7){ nRandom=6; }

    return nRandom;
}

void primerTiro(int cantDados, int vectorDados[]){
    srand(time(0));
    for(int i=0;i<cantDados;i++){
        vectorDados[i]=numeroRandom();
        cout<<vectorDados[i]<<endl; //Quizas esto deberia leerse con una fx especifica?
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

void turno1P(int vectorDados, int vectorJugador){
    int opcion, cantDados;
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

}


#endif // FXDADOS_H_INCLUDED
