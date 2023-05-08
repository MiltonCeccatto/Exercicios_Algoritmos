//2. Considerando duas filas dinâmicas, implemente uma função para concatenar duas filas, as quais devem ser
//recebidas por parâmetro. Exemplos de declaração da função:
//Fila concatenaF (Fila *f1, Fila *f2);
//void concatenaF (Fila *f1, Fila *f2, Fila *fConcatenada);


#include <iostream>
#include <ctime>
using namespace std;

#include "fila-dinamica.hpp"

Fila Concatenar(Fila *f1, Fila *f2);
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    Fila f1, f2, retorno;
    int valor;
    bool resultado;

    for(int i = 0; i < 5; i++){
        valor = rand()%10;
        enfileiraF(&f1, valor);
        valor = rand()%10;
        enfileiraF(&f2, valor);
    }

    mostraF(&f1);
    mostraF(&f2);

    retorno = Concatenar(&f1, &f2);
    mostraF(&retorno);

    destroiF(&f1);

    return EXIT_SUCCESS;

}//final do main

Fila Concatenar(Fila *f1, Fila *f2){

    Fila resultado;

    while(!vaziaF(f1)){
        enfileiraF(&resultado, espiaF(f1));
        desenfileiraF(f1);
    }

    while(!vaziaF(f2)){
        enfileiraF(&resultado, espiaF(f2));
        desenfileiraF(f2);
    }

    return resultado;
}
