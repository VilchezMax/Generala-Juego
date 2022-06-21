#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
#include "headers/fxDados.h"
#include "headers/vectores.h"
int main(){
    while(true){ //Esto se cambia cuando sepamos como se frena. Por ahora esta infinito
        system("cls");
        cout<<"Presione 1 si es un jugador, 2 si son 2 jugadores u otra tecla para salir"<<endl; //PROVISORIO: ESTO SE HARA CON <RLUTIL>
        int jugadores;
        cin>>jugadores;
        switch(jugadores){
        case1:
            int vectorDados[5];
            for (int i=0;i<10;i++){
                turno(vectorDados);
            }
            break;
        case2:
            //PROCESO 2 JUGADORES.
            break;
        default:
            cout<<"---------------------- Vuelva a jugar pronto! ----------------------"<<endl;
            system("pause");
            exit(0);
        }
    }
    return 0;

}
