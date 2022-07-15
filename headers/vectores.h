#ifndef VECTORES_H_INCLUDED
#define VECTORES_H_INCLUDED
#include "fxDados.h"

//PROTOTIPOS:
void cargarVector(int vect[], int size);
void leerVector(int vect[], int size);
int sumarVector(int vect[], int size);
void ordenarVector(int vect[], int size);


//DESARROLLO:
void cargarVector(int vect[], int size){
    for (int i=0;i<size;i++){
        vect[i]=numeroRandom();
    }
}

void leerVector(int vect[], int size){
    for (int i=0;i<size;i++){
        cout<<vect[i]<<"\t";
    }
}

int sumarVector(int vect[], int size){   //Fx para sumar puntajes finales
    int suma=0;
    for (int i=0;i<size;i++){
        suma+=vect[i];
    }
    return suma;
}


//ordenar vector
void ordenarVector(int vect[],int size){
    int aux;
    for (int i=0;i<size;i++){
        for (int j=0;j<size-1;j++){
            if (vect[j]>vect[j+1]){
                aux=vect[j];
                vect[j]=vect[j+1];
                vect[j+1]=aux;
            }
        }
    }
}
void ordenarVectorr(int vect[], int size){
    while(!(vect[0]<vect[1] && vect[1]<vect[2] && vect[2]<vect[3] && vect[3]<vect[4])){
        for(int i=0;i<size;i++){
            if(vect[i]>vect[i+1]){
                int temp = vect[i];
                vect[i+1]= vect[i];
                vect[i+1]= temp;
            }
        }
    }
}

#endif // VECTORES_H_INCLUDED
