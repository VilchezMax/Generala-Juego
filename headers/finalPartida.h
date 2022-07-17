#ifndef FINALPARTIDA_H_INCLUDED
#define FINALPARTIDA_H_INCLUDED



//PROTOTIPOS:
void imprimirResultados(int vectorJugador[], string nombreJugador, int acumTiradas);
bool diaDeSuerte(void); //Funcion que se ejecuta cuando hay generala servida;



//DESARROLLOS:
void imprimirResultados(int vectorJugador[], string nombreJugador, int acumTiradas){
    int puntajeFinal = sumarPuntajes(vectorJugador,11);
    cout<<"El puntaje conseguid por: "<<nombreJugador<<endl;
    cout<<"Fue de : "<<puntajeFinal<<" puntos!!!!"<<endl;
    cout<<"Conseguidos tirando los dados "<<acumTiradas<<" veces"<<endl;
}

bool diaDeSuerte(void){
    system("cls");
    cout<<"!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡"<<endl;
    cout<<"!¡!¡  SACASTE GENERALA SERVIDA  ¡!¡!"<<endl;
    cout<<"!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡"<<endl;
    cout<<"!¡!¡!¡!¡ GANASTE EL JUEGO !¡!¡!¡!¡!¡"<<endl;
    cout<<"!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡"<<endl;

    return true;
}

#endif // FINALPARTIDA_H_INCLUDED

