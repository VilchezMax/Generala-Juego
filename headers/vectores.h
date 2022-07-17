#ifndef VECTORES_H_INCLUDED
#define VECTORES_H_INCLUDED

#include "dibujosDados.h"



//PROTOTIPOS:
void cargarVector(int vect[], int tamano); // Carga vector
void leerVector(string nombre,string vectCategorias[],int vectJugador[], int tamano);   // Lee vector
int sumarPuntajes(int vect[], int tamano);   // Suma puntaje de vectores
void ordenarVector(int vect[], int tamano);// Ordena vector de menor a mayor, para evaluar ESCALERA
void leerDados(int vectorDados[]);

#include "fxDados.h"
//DESARROLLO:
void cargarVector(int vect[], int tamano){
    for (int i=0;i<tamano;i++){
        //vect[i]=numeroRandom();
    }
}

void leerVector(string nombre,string vectCategorias[], int vectJugador[], int tamano){
        cout<<" ----------------"<<endl;
        cout<<"|  JUGADOR | "<<nombre<<endl;
        cout<<" ----------------"<<endl;
    for (int i=0;i<tamano;i++){
        cout<<"| "<<vectCategorias[i]<<" | "<<vectJugador[i]<<endl;
        cout<<" ----------------"<<endl;
    }
}

int sumarPuntajes(int vect[], int tamano){   //Fx para sumar puntajes finales
    int suma=0;
    for (int i=1;i<=tamano;i++){
        if(vect[i]>0){
        suma+=vect[i];
        }
    }
    return suma;
}

void ordenarVector(int vect[], int tamano){
    int temp;
    for (int i=0;i<tamano;i++){
        for (int j=0;j<tamano-1;j++){
            if (vect[j]>vect[j+1]){
                temp=vect[j];
                vect[j]=vect[j+1];
                vect[j+1]=temp;
            }
        }
    }
}

void leerDados(int vectorDados[]){
    system("cls");
    vasos();
    system("cls");
    for(int i=0;i<5;i++){
        dibujosDados(vectorDados[i]);
    }
}



#endif // VECTORES_H_INCLUDED
