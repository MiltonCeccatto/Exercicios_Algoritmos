#include <iostream>
using namespace std;

#include "pilha-dinamica.hpp"


int main(void)
{
    setlocale(LC_ALL, "Portuguese");


    Pilha p1;
    int valor;
    bool resultado;

    string expressao = "[{(}]";

    for(int i = 0; i < expressao.size(); i++){
        if(expressao[i] == '[' || expressao[i] == '{' || expressao[i] == '(')
            empilhaP(&p1, expressao[i]);

        if(expressao[i] == ']' || expressao[i] == '}' || expressao[i] == ')')
            desempilhaP(&p1);
    }


    if(vaziaP(&p1))
        cout << "Express�o balanceada" << endl;
        else
        cout << "Express�o n�o balanceada" << endl;

    //desalocar mem�ria
    destroiP(&p1);


    return EXIT_SUCCESS;

}//final do main

