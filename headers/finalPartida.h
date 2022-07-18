#ifndef FINALPARTIDA_H_INCLUDED
#define FINALPARTIDA_H_INCLUDED



//PROTOTIPOS:
void imprimirResultados(int vectorJugador[], string nombreJugador, int acumTiradas, int puntajeFinal);
bool diaDeSuerte(void); //Funcion que se ejecuta cuando hay generala servida;
void infoRonda(string nombreJugador,int vectorJugador[0],int puntajeFinal,int tirada,int acumTiradas);



//DESARROLLOS:
void imprimirResultados(int vectorJugador[], string nombreJugador, int acumTiradas, int puntajeFinal){
    cout<<"EL PUNTAJE CONSEGUIDO POR : "<<nombreJugador<<endl;
    cout<<"FUE DE : "<<puntajeFinal<<" PUNTOS!"<<endl;
    cout<<"CONSEGUIDOS LANZANDO LOS DADOS UN TOTAL DE "<<acumTiradas<<" VECES"<<endl;
}

bool diaDeSuerte(void){
    system("cls");
    cout<<"************************************"<<endl;
    cout<<"****  SACASTE GENERALA SERVIDA  ****"<<endl;
    cout<<"************************************"<<endl;
    cout<<"******** GANASTE EL JUEGO **********"<<endl;
    cout<<"************************************"<<endl;
    system("pause");
    return true;
}

void infoRonda(string nombreJugador,int vectorJugador[],int puntajeFinal,int tirada,int acumTiradas){
    cout<<" Turno de "<<nombreJugador<<" |  Turno "<<vectorJugador[0]<<"  |  Puntaje Total: "<<puntajeFinal<<endl;
    cout<<" ------------------------------------------------------------------------- "<<endl;
    cout<<" Lanzamiento N  "<<tirada<<" - "<<" Lanzamientos Totales: "<<acumTiradas<<endl;
    cout<<" ------------------------------------------------------------------------- "<<endl;
}
#endif // FINALPARTIDA_H_INCLUDED

