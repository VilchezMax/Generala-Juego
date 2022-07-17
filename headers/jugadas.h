#ifndef JUGADAS_H_INCLUDED
#define JUGADAS_H_INCLUDED

#include "vectores.h"
<<<<<<< HEAD
#include "finalpartida.h"
=======
#include "finalPartida.h"
>>>>>>> 445446ea7885bd2f84b8efc80f75ba081a4d7bcb

//PROTOTIPOS DE JUGADAS
int generala(int vectorDados[]);
bool generalaServida(int vectorDados[], int tirada);
int poker(int vectorDados[]);
int full(int vectorDados[]);
int escalera(int vectorDados[]);
int puntajeNumero (int vectorDados[], int numeroPuntaje);
void evaluacionJugadas(int vectorDados[],int vectorIndiceJugadas[]);
void jugadasValidas (int vectorIndiceJugadas[], string vectorCategorias[], int vectorJugador[]);


//DESARROLLO:
<<<<<<< HEAD
bool generalaServida(int vectorDados[], int tirada){
    if ( tirada==1 && generala(vectorDados)!=0 ){
        return true;
=======
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
            finalPartida();
        //Funcion GANO_EL_JUEGO_QUE_OJETE();
        // vectorJugador[12] = 1;
        // puntos = ??; fijarse en el apunte.
>>>>>>> 445446ea7885bd2f84b8efc80f75ba081a4d7bcb
    } else {
    return false;
    }
}

int generala(int vectorDados[]){
    int puntaje = 50;
    bool repeticiones5=false;
    int contRepeticiones;

    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if (vectorDados[i] != vectorDados[j]){
                puntaje=0;}
        }
    }
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
    int puntaje = 0, contador = 0;
    ordenarVector(vectorDados,5);
    for (int i=0;i<5;i++){
        if(vectorDados[i]+1 == vectorDados[i+1]){
            contador++;
        }
    }
    if(contador==4){
        puntaje=25;
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

void evaluacionJugadas(int vectorDados[],int vectorIndiceJugadas[]){
    vectorIndiceJugadas[10]=generala(vectorDados);
    vectorIndiceJugadas[9]=poker(vectorDados);
    vectorIndiceJugadas[8]=full(vectorDados);
    vectorIndiceJugadas[7]=escalera(vectorDados);
    vectorIndiceJugadas[6]=puntajeNumero(vectorDados,6);
    vectorIndiceJugadas[5]=puntajeNumero(vectorDados,5);
    vectorIndiceJugadas[4]=puntajeNumero(vectorDados,4);
    vectorIndiceJugadas[3]=puntajeNumero(vectorDados,3);
    vectorIndiceJugadas[2]=puntajeNumero(vectorDados,2);
    vectorIndiceJugadas[1]=puntajeNumero(vectorDados,1);
}

void jugadasValidas (int vectorIndiceJugadas[],string vectorCategorias[], int vectorJugador[], int vectorOpciones[]){
    int opcion=0;
    int eleccion;
    cout<<"Usted puede elegir entre las siguientes jugadas:"<<endl;
    for (int i=10;i<=1;i++){
        if (vectorIndiceJugadas[i]!=0 && vectorJugador[i]!= -1 ){
            cout<<opcion+1<<")"<<vectorCategorias[vectorIndiceJugadas[i]]<<" - puntos: "<<vectorIndiceJugadas[i]<<endl;
            vectorOpciones[opcion]=i;
            opcion++;
            //TERMINAR
        }
    }
    cout<<"Elija la jugada:"<<endl;
    cin>>eleccion;
    vectorJugador[vectorOpciones[eleccion]]=vectorIndiceJugadas[vectorOpciones[eleccion]];

    if(opcion==0){
        cout<<"No hay jugadas disponibles,tiene que elegir entre las siguientes jugadas para invalidar:"<<endl;
        for (int i=10;i<=1;i++){
            if (vectorJugador[i]==-1){
                cout<<opcion+1<<")"<<vectorCategorias[i]<<endl;
                vectorOpciones[opcion]=i;
                opcion++;
            }
        }
    }
    //COPIAR Y PEGAR LA RESOLUCION ANTERIOR (ELECCIOND E JUGADA A INVALIDAR)
    //CHEQUEAR QUE ESTE BIEN LA LOGICA DE LA LINEA 138 SOBRE LOS INDICES
    //REFACTORIZAR  NOMBRE DE vectorIndiceJugadas A vectorPuntajesValidos
    //

}

#endif // JUGADAS_H_INCLUDED
