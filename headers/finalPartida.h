#ifndef FINALPARTIDA_H_INCLUDED
#define FINALPARTIDA_H_INCLUDED


// HAY QUE ARREGLAR TODO LO QUE SEA STRING/CHAR NOMBRE JUGADOR

//PROTOTIPOS:
void imprimirResultados(int vectorJugador[], char nombreJugador[], int tiradas);
bool diaDeSuerte(string nombre); //Funcion que se ejecuta cuando hay generala servida;



//DESARROLLOS:
void imprimirResultados(int vectorJugador[], string nombreJugador, int tiradas){
    int puntajeFinal = sumarPuntajes(vectorJugador,11);
    // se resta porque el indice 0 es el marcador de TURNOS
    // pero quizas es al pedo q este turno ahi siendo el i del for del main. Pasa que hay que llenar con algo el indice 0 asi
    // los numeros coinciden con su indice de array. quizas apsar "generala servida" al indice 0 sea lo mejor. y evaluar
    //(vector[0]!=0) es porque no hay grala servdia ys e sigue jugando

    cout<<"El puntaje conseguid por: "<<nombreJugador<<endl;
    cout<<"Fue de : "<<puntajeFinal<<" puntos!!!!"<<endl;
    cout<<"Conseguidos tirando los dados "<<tiradas<<" veces"<<endl;
}

bool diaDeSuerte(string nombre){
    system("cls");
    cout<<nombre<<" ..."<<endl;
    cout<<"!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡"<<endl;
    cout<<"!¡!¡  SACASTE GENERALA SERVIDA  ¡!¡!"<<endl;
    cout<<"!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡"<<endl;
    cout<<"!¡!¡!¡!¡ GANASTE EL JUEGO !¡!¡!¡!¡!¡"<<endl;
    cout<<"!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡!¡"<<endl;

    return true;
}

#endif // FINALPARTIDA_H_INCLUDED

