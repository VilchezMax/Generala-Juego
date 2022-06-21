#ifndef VECTORES_H_INCLUDED
#define VECTORES_H_INCLUDED
#include "fxDados.h"

//PROTOTIPOS:
void cargarVector(int vect[], int size);
void leerVector(int vect[], int size);
int sumarVector(int vect[],int size);
void ordenarVector(int vect[],int size])


//DESARROLLO:
void cargarVector(int vect[], int size){
    for (int i=0;i<size;i++){
        vect[i]=randomDados();
    }
    return 0
}

void leerVector(int vect[], int size){
    for (int i=0;i<size;i++){
        cout>>vect[i]
    }
    return 0
}

int sumarVector(int vect[],int size){   //Fx para sumar puntajes finales
    int suma=0;
    for (int i=0;i<size;i++){
        suma+=vect[i];
    }
    return suma;
}

void ordenarVector(int vect[],int size]){
    while(!(vect[0]<vect[1] && vect[1]<vect[2] && vect[2]<vect[3] && vect[3]<vect[4]){
       for(int i=0;i<size;i++){

        }
    }
}



#endif // VECTORES_H_INCLUDED
