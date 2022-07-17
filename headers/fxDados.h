#ifndef FXDADOS_H_INCLUDED
#define FXDADOS_H_INCLUDED
#include <time.h>

#include "vectores.h"
#include "jugadas.h"

//PROTOTIPOS:

int numeroRandom(void); //Genera un numero aleatorio del 1 al 6. Devuelve el numero generado.
void primerTiro(int cantDados, int vectorDados[]); //Genera un vector de 5 numeros aleatorios para iniciar el turno. No devuelve, modifica el vectorDados afuera.
void cambioDado(int cantDados, int vectorDados[]); //Cambia un dado del vector por uno aleatorio. No devuelve, modifica el vectorDados afuera
void turno1P(int vectorDados[],int cantDados, int &tiradas); //Proceso de 1 ronda para 1 jugador. Devuelve int porque devuelve el puntaje final

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
    }
        leerDados(vectorDados); //Quizas esto deberia leerse con una fx especifica?
}

void cambioDado(int cantDados, int vectorDados[]){
    int aCambiar;
    for (int i=0;i<cantDados;i++){
        cout<<"En que posicion esta el dado "<<(i+1)<<" que quiera cambiar: "<<endl;
        cin>>aCambiar;
        vectorDados[aCambiar-1]=numeroRandom();
    }
}

void turno1P(int vectorDados[],int cantDados, int &tiradas){
    int opcion;
    bool salir=false;
    for(int i=0;i<2;i++){
        if(salir==true){
            break;
        }
        cout<<"Queres cambiar algun dado? 1-SI / 2-NO"<<endl;
        cin>>opcion;
        switch (opcion){
            case 1:
                cout<<"Cuantos quiere cambiar?"<<endl;
                cin>>cantDados;
                cambioDado(cantDados,vectorDados);
                system("cls");
                cout<<"Sus dados actuales son: "<<endl;
                leerDados(vectorDados);
                tiradas++;
                break;
            case 2:
                salir=true;
                break;
            default:
                cout<<"Ingrese un numero valido"<<endl;
                i--;
                break;
        }
    }
}


#endif // FXDADOS_H_INCLUDED
