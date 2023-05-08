 //Implemente uma função para dividir uma fila dinâmica de valoresinteiros. A função deve receber como parâmetro
//uma fila F1 com os valores inteiros, uma fila vazia F2 e um valor inteiro N. A função deve dividir a fila F1 em duas,
//de tal forma que F2 comece no primeiro nó (elemento) logo após a primeira ocorrência de N na fila original.
//a) Exemplo de declaração da função:
//void separaF (int N, Fila *F1, Fila *F2);
//a) Exemplo de separação:
//F1[1, 2, 3, 4, 5, 6, 7, 8, 9]
//F2[]
//separaF (5, &F1, &F2);
//F1[1, 2, 3, 4, 5]
//F2[6, 7, 8, 9]



#include <iostream>
using namespace std;

#include "fila-dinamica.hpp"

void separarFila(int num, Fila *f1, Fila *f2);
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    Fila fila1, fila2;
    int valor;
    bool resultado;

    for(int i = 0; i < 10; i++){
        enfileiraF(&fila1, i);
    }

    mostraF(&fila1);

    cout << "Informe um valor: ";
    cin >> valor;
    fflush(stdin);

    separarFila(valor, &fila1, &fila2);


    mostraF(&fila1);
    cout << endl;
    mostraF(&fila2);

    destroiF(&fila1);

    return EXIT_SUCCESS;

}//final do main


void separarFila(int num, Fila *f1, Fila *f2){
    Fila aux;
    do{
        enfileiraF(&aux, espiaF(f1));
        desenfileiraF(f1);
    }while(espiaF(f1) != num);

    if(espiaF(f1) == num)
    {
        enfileiraF(&aux, espiaF(f1));
        desenfileiraF(f1);
    }

    while(!vaziaF(f1)){
        enfileiraF(f2,espiaF(f1));
        desenfileiraF(f1);
    }

     while(!vaziaF(&aux)){
        enfileiraF(f1, espiaF(&aux));
        desenfileiraF(&aux);
    }

    destroiF(&aux);

}
