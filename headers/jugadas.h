#ifndef JUGADAS_H_INCLUDED
#define JUGADAS_H_INCLUDED

//PROTOTIPOS DE JUGADAS:
int jugadas(vectorDados[]); //Aca van todas las funciones de jugadas:

int generala();
int poker();
int full();
int boolescalera();
int puntajeNumero();


//DESARROLLO:
int jugadas(vectorDados[]){
    int coincidencias=-5; //Tiene en cuenta las coincidencias consigo mismo
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if (vect[i]==vect[j]){
                coincidencias++;
            }
        }
    }

    switch(coincidencias){
    case 5:
        generala();
        break;
    case 4:
        poker();
        break;
    case 3:
        full();
        break;
    default: // ordenarVector();
             // escalera();
             // if (escalera==false){puntajeNumero();}


    }
}


int generala(){

        if(tirada=1){
            //FX GANO_EL_JUEGO_QUE_OJETE();
        } else if (tirada==2 || tirada==3){
        return true;
        }
    }
}


#endif // JUGADAS_H_INCLUDED
