 //Implemente uma fun��o para dividir uma fila din�mica de valoresinteiros. A fun��o deve receber como par�metro
//uma fila F1 com os valores inteiros, uma fila vazia F2 e um valor inteiro N. A fun��o deve dividir a fila F1 em duas,
//de tal forma que F2 comece no primeiro n� (elemento) logo ap�s a primeira ocorr�ncia de N na fila original.
//a) Exemplo de declara��o da fun��o:
//void separaF (int N, Fila *F1, Fila *F2);
//a) Exemplo de separa��o:
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
