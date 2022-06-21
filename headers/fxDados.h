#ifndef FXDADOS_H_INCLUDED
#define FXDADOS_H_INCLUDED
#include <time.h>

//PROTOTIPOS:
int numeroRandom(int vectorDados[]);
void primerTiro(int cantDados, int vectorDados[]);
void cambioDado(int cantDados, int vectorDados[]);

int turnoUnJugador(int vectorDados[]); //int porque devuelve el puntaje final

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

int turno(int vectorDados[]){ //Realiza un turno en SinglePlayer
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

    //fx leerVector de 'vectores.h'

}


#endif // FXDADOS_H_INCLUDED
