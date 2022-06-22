#ifndef FINALPARTIDA_H_INCLUDED
#define FINALPARTIDA_H_INCLUDED

//PROTOTIPOS:
void imprimirResultados(int vectorJugador[], string nombreJugador, int tiradas)



//DESARROLLOS:
void imprimirGanador(int vectorJugador[], string nombreJugador, int tiradas){
    int puntajeFinal = sumarVector(vectorJugador);

    cout<<"El puntaje conseguid por: "<<nombreJugador<<endl;
    cout<<"Fue de : "<<puntajeFinal<<" puntos!!!!"<<endl;
    cout<<"Conseguidos tirando los dados "<<tiradas<<" veces"<<endl;
}

void imprimirGanador(int vectorJugador[], string nombreJugador, int tiradas){
    int puntajeFinal = sumarVector(vectorJugador);

    cout<<"El puntaje mas alto fue conseguido por: "<<nombreJugador<<"."<<endl;
    cout<<"Obtuvo: "<<puntajeFinal<<" puntos!!!!"<<endl;
    cout<<"Conseguidos tirando los dados "<<tiradas<<" veces"<<endl;
}

#endif // FINALPARTIDA_H_INCLUDED
