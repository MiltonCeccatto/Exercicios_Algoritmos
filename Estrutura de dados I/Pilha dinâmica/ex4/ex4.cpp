//4. Desenvolva as seguintes fun��es:
//a) Fun��o para testar se duas pilhas P1 e P2 s�o iguais.
//b) Fun��o para retornar o n�mero de elementos da pilha que possuem valor par.

#include <iostream>
#include <ctime>
using namespace std;

#include "pilha-dinamica.hpp"

void PilhasIguais(Pilha *pilha1, Pilha *pilha2);
int QuantidadeDePares(Pilha *pilha);
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    Pilha p1, p2;
    int valor, tamanho;
    bool resultado;

    tamanho = 5;

    for(int i = 0; i < tamanho; i ++){
        valor = rand()% 10;
        empilhaP(&p1,valor);
        //valor = rand()% 10; // comentar ou descomentar para testar o c�digo
        empilhaP(&p2,valor);
    }

    mostraP(&p1);
    mostraP(&p2);

    PilhasIguais(&p1, &p2);

    cout << "A quantidade de pares da p1 �: " << QuantidadeDePares(&p1) << endl;
    cout << "A quantidade de pares da p2 �: " << QuantidadeDePares(&p2) << endl;


    //desalocar mem�ria
    destroiP(&p1);


    return EXIT_SUCCESS;

}//final do main


void PilhasIguais(Pilha *pilha1, Pilha *pilha2){

    bool iguais = true;
    Pilha aux1;
    Pilha aux2;

    while(!vaziaP(pilha1)){
        if(espiaP(pilha1) == espiaP(pilha2)){
            empilhaP(&aux1, espiaP(pilha1));
            desempilhaP(pilha1);
            empilhaP(&aux2, espiaP(pilha2));
            desempilhaP(pilha2);
        } else {
            iguais = false;
            cout << "As pilhas s�o diferentes " << endl;
            break;
        }
    }

    if(iguais == true)
        cout << "As pilhas s�o iguais " << endl;

        while(!vaziaP(&aux1)){
            empilhaP(pilha1, espiaP(&aux1));
            desempilhaP(&aux1);
            empilhaP(pilha2, espiaP(&aux2));
            desempilhaP(&aux2);
        }
        destroiP(&aux1);
        destroiP(&aux2);

}

int QuantidadeDePares(Pilha *pilha){
    int contagem = 0;
    Pilha aux;
    while(!vaziaP(pilha)){
        if( espiaP(pilha)%2 == 0){
            contagem++;
        }

        empilhaP(&aux, espiaP(pilha));
        desempilhaP(pilha);

    }

    while(!vaziaP(&aux)){
        empilhaP(pilha, espiaP(&aux));
        desempilhaP(&aux);
    }
    destroiP(pilha);

    return contagem;
}

