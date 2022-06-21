#ifndef FXDADOS_H_INCLUDED
#define FXDADOS_H_INCLUDED
#include <time.h>

int randomDados(void) //Para randomizado
{
    int outcome;
    int l_limit = 1;  // floor or lower limit of a die
    int h_limit = 7; //ceiling or higher limit of a die

    outcome = rand() % (h_limit - l_limit) + l_limit;

    return outcome;

}
int tirada(int cantDados, int vectorDados[]){  //Realiza un tiro. 5 dados si es 1era tirada, diferente si es por cambio.
    srand(time(0));
    for(int i=0;i<cantDados;i++){
        std::cout << randomDados() << std::endl;
    }
    return vectorDados;
}

int turno(void){ //Realiza un turno en SinglePlayer
    int cantDados=5;
    int opcion;
    tirada(cantDados);
    cout<<"Queres cambiar algun dado?"<<endl;
    cin>>opcion;
    cout<<"Cuantos quiere cambiar"?<<endl;
    cin>>cantDados;
    for (int i=0;i<cantDados;i++){
        cout<<"Dado "<<(i+1)<<" sera:"
        cin>>aCambiar;
        vectorDados[aCambiar-1]=randomDados();
    }
    //fx leerVector de 'vectores.h'

}


#endif // FXDADOS_H_INCLUDED
