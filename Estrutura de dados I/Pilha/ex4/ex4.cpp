#include <iostream>
using namespace std;

#include "pilha.hpp"


int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    Pilha p1;
    int tamPilha;
    int menu;
    string valor;
    bool continua = true;



    cout << "Informe o tamanho da pilha: ";
    cin >> tamPilha;
    fflush(stdin);

    inicializaP(&p1, tamPilha);

    cout << "######## MENU #########" << endl;
    cout << "# 0 - Sair            #" << endl;
    cout << "# 1 - Empilhar        #" << endl;
    cout << "# 2 - Desempilhar     #" << endl;
    cout << "# 3 - Espiar          #" << endl;
    cout << "# 4 - Destruir        #" << endl;
    cout << "# 5 - Mostrar         #" << endl;
    cout << "#######################" << endl;

    while(continua == true){
    cout << "MENU: ";
    cin >> menu;
    fflush(stdin);


    switch(menu){
        case 0 :
            cout << "Programa Finalizado " << endl;
            continua = false;
            break;
        case 1 :
            cout << "Informe a palavra que deseja empilhar: ";
            getline(cin, valor);
            fflush(stdin);
            empilhaP(&p1, valor);
            break;
        case 2 :
            desempilhaP(&p1);
            break;
        case 3 :
            cout << espiaP(&p1) << endl;
            break;
        case 4 :
            destroiP(&p1);
            break;
        case 5 :
            mostraP(&p1);
            break;
        default :
            cout << "Menu inválido " << endl;
            break;

    }
    }


    return EXIT_SUCCESS;

}//final do main

