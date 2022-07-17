#ifndef JUGADAS_H_INCLUDED
#define JUGADAS_H_INCLUDED

#include "vectores.h"
#include "finalPartida.h"

//PROTOTIPOS DE JUGADAS
int generala(int vectorDados[]);
bool generalaServida(int vectorDados[], int tirada);
int poker(int vectorDados[]);
int full(int vectorDados[]);
int escalera(int vectorDados[]);
int puntajeNumero (int vectorDados[], int numeroPuntaje);
void evaluacionJugadas(int vectorDados[],int vectorPuntajesValidos[]);
void jugadasValidas (int vectorPuntajesValidos[], string vectorCategorias[], int vectorJugador[],int vectorOpciones[]);


//DESARROLLO:
int generala(int vectorDados[]){
    int puntaje = 50;
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if (vectorDados[i] != vectorDados[j]){
                puntaje=0;}
        }
    }
    return puntaje;
}

bool generalaServida(int vectorDados[], int tirada){
    if ( tirada==1 && generala(vectorDados)!=0 ){
        return true;
    } else {
        return false;
    }
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
    ordenarVector(vectorDados,5);
    if (vectorDados[0] == 1 || vectorDados[0] == 2){
        for (int i = 1; i < 5; i++){
            if (vectorDados[i] != vectorDados[i - 1] + 1){
                return 0;
            }
        }
    } else{
        return 0;
    }
    return 25;
}

int puntajeNumero(int vectorDados[], int numeroPuntaje){
    int puntaje = 0;
    for(int i=0;i<5;i++){
        if(vectorDados[i]==numeroPuntaje){
            puntaje+=numeroPuntaje;
        }
    }
    return puntaje;
}

void evaluacionJugadas(int vectorDados[],int vectorPuntajesValidos[]){
    vectorPuntajesValidos[10]=generala(vectorDados);
    vectorPuntajesValidos[9]=poker(vectorDados);
    vectorPuntajesValidos[8]=full(vectorDados);
    vectorPuntajesValidos[7]=escalera(vectorDados);
    vectorPuntajesValidos[6]=puntajeNumero(vectorDados,6);
    vectorPuntajesValidos[5]=puntajeNumero(vectorDados,5);
    vectorPuntajesValidos[4]=puntajeNumero(vectorDados,4);
    vectorPuntajesValidos[3]=puntajeNumero(vectorDados,3);
    vectorPuntajesValidos[2]=puntajeNumero(vectorDados,2);
    vectorPuntajesValidos[1]=puntajeNumero(vectorDados,1);
}

void jugadasValidas (int vectorPuntajesValidos[],string vectorCategorias[], int vectorJugador[], int vectorOpciones[]){
    int opcion=0;
    int eleccion;
    cout<<"Usted puede elegir entre las siguientes jugadas:"<<endl;
    for (int i=10;i>=1;i--){
        if (vectorPuntajesValidos[i] !=0 && vectorJugador[i]== -1 ){
            cout<<opcion+1<<")"<<vectorCategorias[i]<<" - puntos: "<<vectorPuntajesValidos[i]<<endl;
            vectorOpciones[opcion]=i;
            opcion++;
        }
    }
    if(opcion==0){
        cout<<"No hay jugadas disponibles, tiene que anular alguna de las siguientes:"<<endl;
        for (int i=10;i>=1;i--){
            if (vectorJugador[i]== -1){
                cout<<opcion+1<<")"<<vectorCategorias[i]<<endl;
                vectorOpciones[opcion]=i;
                opcion++;
            }
        }
    }
        cout<<"Elija la jugada:"<<endl;
        cin>>eleccion;
    if(opcion>0){
        vectorJugador[vectorOpciones[eleccion-1]]=vectorPuntajesValidos[vectorOpciones[eleccion-1]];
    } else{
        vectorJugador[vectorOpciones[eleccion-1]]= 0;
    }
}

#endif // JUGADAS_H_INCLUDED
