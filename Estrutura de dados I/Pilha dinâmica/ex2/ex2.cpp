#include <iostream>
using namespace std;

#include "pilha-dinamica.hpp"

void ordenar(Pilha *p, int valor);
int main(void)
{
    setlocale(LC_ALL, "Portuguese");


    Pilha ordenado, aux;
    int valor, menu;
    bool continua = true;

    while(continua){
      cout << "Informe um número: ";
      cin >> valor;
      fflush(stdin);
      ordenar(&ordenado, valor);
      cout << "Deseja informar mais números ? " << endl;
      cout << "1 - Sim     2 - Não" << endl;
      cin >> menu;
      fflush(stdin);

        switch(menu){
            case 1 :
                continua = true;
                break;
            case 2 :
                continua = false;
                break;
            default:
                cout << "Opção inválida !" << endl;
        }
    }

    mostraP(&ordenado);


    //desalocar memória
    destroiP(&ordenado);


    return EXIT_SUCCESS;

}//final do main

void ordenar(Pilha *p, int valor){
    Pilha aux;
    bool continua;


    while(!vaziaP(p) && espiaP(p) < valor ){
            empilhaP(&aux, espiaP(p));
            desempilhaP(p);
        }

    empilhaP(p, valor);

    while(!vaziaP(&aux)){
        empilhaP(p,espiaP(&aux));
        desempilhaP(&aux);
    }


}

