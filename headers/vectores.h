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
        suma+=vect[i];
    }
    return suma;
}

void ordenarVector(int vect[], int tamano){
    while(!(vect[0]<vect[1] && vect[1]<vect[2] && vect[2]<vect[3] && vect[3]<vect[4])){
        for(int i=0;i<tamano;i++){
            if(vect[i]>vect[i+1]){
                int temp = vect[i+1];
                vect[i+1]= vect[i];
                vect[i]= temp;
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
