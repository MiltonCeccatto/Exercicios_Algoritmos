//1. Dada uma fila dinâmica F, implemente uma função para inverter a ordem dos elementos F. Para inverter a ordem
//dos elementos, faça uso de uma pilha dinâmica P.
//O menu deve conter as seguintes opções:
//Incluir na fila
// Remover da fila
// Mostrar fila
// Inverter fila


#include <iostream>
using namespace std;

#include "fila-dinamica.hpp"
#include "pilha-dinamica.hpp"

void Inverter(Fila *fila);
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    Fila f1;
    int valor;
    bool resultado;
    int menu;

    do {
    system("cls");
    cout << "########## MENU ###########" << endl;
    cout << "# 0 - sair                #" << endl;
    cout << "# 1 - Incluir na fila     #" << endl;
    cout << "# 2 - Remover da fila     #" << endl;
    cout << "# 3 - Mostrar Fila        #" << endl;
    cout << "# 4 - Inverter Fila       #" << endl;
    cout << "###########################" << endl;
    cout << "MENU: ";
    cin >> menu;
    fflush(stdin);

    switch(menu){
    case 1 :
        cout << "Informe um valor: ";
        cin >> valor;
        fflush(stdin);
        if(enfileiraF(&f1, valor)){
            cout << "Valor adicionado com sucesso " << endl;
        } else{
            cout << "Erro ao adicionar valor " << endl;
        }
        break;
    case 2:
        if(!vaziaF(&f1)){
        if(desenfileiraF(&f1)){
            cout << "O primeiro elemento foi desenfileirado " << endl;
        } else {
            cout << "Erro ao desenfileirar " << endl;
        }
        } else {
            cout << "A fila está vazia " << endl;
        }
        break;
    case 3 :
        mostraF(&f1);
        cout << endl;
        break;
    case 4 :
        Inverter(&f1);
        cout << "A fila foi invertida " << endl;
        break;
    }


    system("pause");
    }while(menu != 0 );

    destroiF(&f1);

    return EXIT_SUCCESS;

}

void Inverter(Fila *fila){
    Pilha pilha;
    while(!vaziaF(fila)){
        empilhaP(&pilha, espiaF(fila));
        desenfileiraF(fila);
    }

    while(!vaziaP(&pilha)){
        enfileiraF(fila, espiaP(&pilha));
        desempilhaP(&pilha);
    }

    destroiP(&pilha);
}

