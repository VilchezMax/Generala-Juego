#ifndef JUGADAS_H_INCLUDED
#define JUGADAS_H_INCLUDED

#include "vectores.h"

//PROTOTIPOS DE JUGADAS:
int jugadas(int vectorDados[]); //Aca van todas las funciones de jugadas:

int generala(int vectorJugador[], int tirada);
int poker(int vectorDados[]);
int full(int vectorDados[]);
int escalera(int vectorJugador[], int vectorDados[]);
int puntajeNumero (int vectorDados[], int numeroPuntaje);


//DESARROLLO:
/*int jugadas(int vectorDados[], int vectorJugador[], int tirada){
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
        puntaje=generala(vectorJugador, tirada);
        break;
    case 4:
        puntaje=poker(vectorDados);
        break;
    case 3:
        puntaje=full(vectorDados);
        break;
    default:
        puntaje=escalera(vectorJugador,vectorDados);
        if (puntaje==0){
        puntaje=puntajeNumero();
        }
        break;
    }
    return puntaje;
}
TODO */

int generala(int vectorJugador[], int tirada){
    int puntaje = 0;
    if(tirada==1){
        //Funcion GANO_EL_JUEGO_QUE_OJETE();
        // vectorJugador[12] = 1;
        // puntos = ??; fijarse en el apunte.
    } else {
        puntaje=50;
    }
    /*
    } else if ((vectorJugador[10]==0) && (tirada==2 || tirada==3)){
        puntaje=50;
    } else if (vectorJugador[10] !=0 && vectorJugador[11]==0){
        puntaje=50;
    }
    */

    return puntaje;
}

int poker(int vectorDados[]){
    int puntaje = 0;
    bool repeticiones4=false;
    int contRepeticiones;

    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if (vectorDados[i]==vectorDados[j]){
                contRepeticiones++;
            }
        }
        if(contRepeticiones==4){
            repeticiones4=true;
            break;
        }
        contRepeticiones=0;
    }
    if (repeticiones4==true){
        puntaje=40;
    }
    return puntaje;
}

int full(int vectorDados[]){
    int puntaje = 0;
    bool repeticiones3=false;
    bool repeticiones2=false;
    int contRepeticiones;

    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if (vectorDados[i]==vectorDados[j]){
                contRepeticiones++;
            }
        }
        if(contRepeticiones==3){
            repeticiones3=true;
        } else if (contRepeticiones==2){
            repeticiones2=true;
        }
        contRepeticiones=0;
    }
    if (repeticiones3==true && repeticiones2==true){
        puntaje=30;
    }
    return puntaje;
}

int escalera(int vectorDados[]){
    int puntaje = 0;
    ordenarVector(vectorDados,5);
    for (int i=0;i<5;i++){
        if(vectorDados[i]+1 == vectorDados[i+1]){
            puntaje=25;
        }
    }
    return puntaje;
}

int puntajeNumero(int vectorDados[], int numeroPuntaje){
    int puntaje = 0;
    for(int i=0;i<5;i++){
        if(vectorDados[i]==numeroPuntaje){
            puntaje+=vectorDados[i];
        }
    }
    return puntaje;
}


#endif // JUGADAS_H_INCLUDED
