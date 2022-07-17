#ifndef DIBUJOSDADOS_H_INCLUDED
#define DIBUJOSDADOS_H_INCLUDED

//PROTOTIPOS:
void dibujoDados(int dado); //Dibuja los dados en funcion del numero que recibe del vectorDados

void uno(void); //Dibujos para cada dado
void dos(void);
void tres(void);
void cuatro(void);
void cinco(void);
void seis(void);

void vaso1(void); //Vasos para animacion

//DEFINICIONES:
void dibujosDados(int dado){
    switch (dado){
    case 1:
        uno();
        break;
    case 2:
        dos();
        break;
    case 3:
        tres();
        break;
    case 4:
        cuatro();
        break;
    case 5:
        cinco();
        break;
    case 6:
        seis();
        break;
    }
}

void uno(void){
    cout<<"    __________ "<<endl;
    cout<<"   |          |"<<endl;
    cout<<"   |          |"<<endl;
    cout<<"   |     *    |"<<endl;
    cout<<"   |          |"<<endl;
    cout<<"   |__________|"<<endl;

}
void dos(void){
    cout<<"  __________ "<<endl;
    cout<<" |          |"<<endl;
    cout<<" |  *       |"<<endl;
    cout<<" |          |"<<endl;
    cout<<" |       *  |"<<endl;
    cout<<" |__________|"<<endl;

}

void tres(void){
    cout<<" __________ "<<endl;
    cout<<"|          |"<<endl;
    cout<<"|  *       |"<<endl;
    cout<<"|     *    |"<<endl;
    cout<<"|        * |"<<endl;
    cout<<"|__________|"<<endl;

}

void cuatro(void){
    cout<<" __________ "<<endl;
    cout<<"|          |"<<endl;
    cout<<"|  *    *  |"<<endl;
    cout<<"|          |"<<endl;
    cout<<"|  *    *  |"<<endl;
    cout<<"|__________|"<<endl;

}

void cincos(void){
    cout<<"    __________ "<<endl;
    cout<<"   |          |"<<endl;
    cout<<"   |  *    *  |"<<endl;
    cout<<"   |     *    |"<<endl;
    cout<<"   |  *    *  |"<<endl;
    cout<<"   |__________|"<<endl;

}

void seis(void){
    cout<<"  __________ "<<endl;
    cout<<" |          |"<<endl;
    cout<<" |  *    *  |"<<endl;
    cout<<" |  *    *  |"<<endl;
    cout<<" |  *    *  |"<<endl;
    cout<<" |__________|"<<endl;

}

void vaso1(void){
    cout <<"            ________________         "<< endl;
    cout <<"           (________________)        "<< endl;
    cout <<"           \\               /        "<< endl;
    cout <<"       (((  \\             /         "<< endl;
    cout <<"             \\           /          "<< endl;
    cout <<"              \\         /  )))      "<< endl;
    cout <<"               \\_______/            "<< endl;
}
void vaso2(void){
    cout <<"                ________________       "<< endl;
    cout <<"               (________________)      "<< endl;
    cout <<"               \\               /      "<< endl;
    cout <<"                \\             /   ))) "<< endl;
    cout <<"            (((  \\           /        "<< endl;
    cout <<"                  \\         /         "<< endl;
    cout <<"                   \\_______/          "<< endl;
}


#endif // DIBUJOSDADOS_H_INCLUDED
