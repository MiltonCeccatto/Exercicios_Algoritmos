//1. Empregando pilha, implemente um programa para inverter a ordem das letras nas palavras em uma frase. Por
//   exemplo, na frase “teste de pilha”, o programa deverá exibir “etset ed ahlip”.


#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#include "pilha-dinamica.hpp"


int main(void)
{
    setlocale(LC_ALL, "Portuguese");


    Pilha p1;
    string palavra;
    bool resultado;

    cout << "Informe uma palavra: ";
    getline(cin, palavra);

    cout << "Palavra: " << palavra << endl;

    for(int i = 0; i < palavra.size(); i++){
        if(palavra[i] != ' '){
            empilhaP(&p1, palavra[i]);
        }
        if( palavra[i] == ' ' || i == palavra.size()-1 ){
            while(!vaziaP(&p1)){
                char c = desempilhaP(&p1);
                cout << c;
            }
            cout << " ";
        }


    }

    //desalocar memória
    destroiP(&p1);


    return EXIT_SUCCESS;

}//final do main

