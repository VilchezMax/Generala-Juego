#ifndef JUGADAS_H_INCLUDED
#define JUGADAS_H_INCLUDED

#include "vectores.h"

//PROTOTIPOS DE JUGADAS:
int jugadas(int vectorDados[]); //Aca van todas las funciones de jugadas:

int generala(int vectorJugador[], int tirada);
int poker();
int full();
int escalera(int vectorJugador[], int vectorDados[]);
int puntajeNumero();


//DESARROLLO:
int jugadas(int vectorDados[], int vectorJugador[], int tirada){
    int puntaje;
    int coincidencias= -5; //Tiene en cuenta las coincidencias consigo mismo que ocurriran aunque no se repita con otro dado.
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if (vectorDados[i]==vectorDados[j]){
                coincidencias++;
            }
        }
    }
    switch(coincidencias){
    case 5:
        generala(vectorJugador, tirada);
        break;
    case 4:
        poker();
        break;
    case 3:
        full();
        break;
    default: ;
            int puntajeEscalera=escalera(vectorJugador,vectorDados);
             if (puntajeEscalera!=0){

             } else {
             puntajeNumero();
             }
             break;
    }
    return puntaje;
}


int generala(int vectorJugador[], int tirada){
    int puntos;
    if(tirada=1){
        //Funcion GANO_EL_JUEGO_QUE_OJETE();
        // vectorJugador[12] = 1;
        // puntos = ??; fijarse en el apunte.
    } else if ((vectorJugador[10]==0) && (tirada==2 || tirada==3)){
        puntos=50;
    } else if (vectorJugador[10]!=0 && vectorJugador[10]){
        puntos=50;
    } else {
        puntos=0;
    }
    return puntos;
}

int poker(){
}

int full(){

}
int escalera(int vectorJugador[], int vectorDados[]){
    int puntaje;
    ordenarVector(vectorDados,5)
    /*for (i=0;i<5;i++){
        if(vectorDados[i]==vectorDados[i+1]){
            puntos:
        }
    }
            ESTE FOR ES SOLO PARA HACER MAS ELEGANTE EL ANIDADO DE IFS*/
    if (vectorDados[0]==vectorDados[1]-1){
        if (vectorDados[1]==vectorDados[2]-1){
            if (vectorDados[2]==vectorDados[3]-1){
                if (vectorDados[3]==vectorDados[4]-1){
                }
            }
        }

    }
    return puntaje;
}
int puntajeNumero(){

}


#endif // JUGADAS_H_INCLUDED
