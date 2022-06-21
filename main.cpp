#include <iostream>

using namespace std;

int main(){
    while(true){ //Esto se cambia cuando sepamos como se frena. Por ahora esta infinito
        cout<<"Presione 1 si es un jugador, 2 si son 2 jugadores u otra tecla para salir"<<endl //PROVISORIO: ESTO SE HARA CON <RLUTIL>
        int jugadores;
        switch(jugadores){
        case1:
            for (int i=0;i<10;i++){
                turno();
            }
            break;
        case2:
            break;
        default:
            cout<<"Vuelva a jugar pronto!"<<endl;
            system("pause");
            exit(0);
        }
    }
    return 0;

}
