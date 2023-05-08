#include <iostream>
#include <string>
using namespace std;

#include "lista.hpp"

int totalL(No **lista);
bool igualL(No **lista1, No **lista2);
bool insereFinalL(No **lista, string valor);
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    string nome; //valor deve ser do mesmo tipo de DadoNoLista (lista.hpp)
    No* aux; //usado na busca
    No* lista; //evite usar "list", pois é uma palavra reservada

    inicializaL(&lista);
    inicializaL(&aux);

    insereInicioL(&lista, "milton");
    insereInicioL(&lista, "ana");

    insereInicioL(&aux, "milton");
    insereInicioL(&aux, "ana");

   cout << insereFinalL(&aux, "marcos") << endl;

    mostraL(&lista);
    cout << endl;
    mostraL(&aux);


    destroiL(&lista);
    return EXIT_SUCCESS;


}//final do main

int totalL(No **lista)
{
    No *n = *lista;
    int cont = 0;
    while( n != NULL )
    {
        cont++;

        n = n->prox;
    }

    return cont;
}

bool igualL(No **lista1, No **lista2)
{
    No *n1 = *lista1;
    No *n2 = *lista2;
    bool igual = true;

    if(totalL(lista1) != totalL(lista2))
    {
        return false;
    }
    else
    {
        while( n1 != NULL )
        {
            if(n1->dado != n2->dado)
            {
                igual = false;
                break;
            }
            n1 = n1->prox;
            n2 = n2->prox;

        }
    }
    return igual;
}

bool insereFinalL(No **lista, string valor)
{

    No *novo = new No(); // aloca memória para o nó
    No *n = *lista;
    if (novo == NULL)
        return false;

    while(n != NULL)
    {
        if(n->prox == NULL)
        {
            novo->dado = valor; // novo nó recebe o valor
            n->prox = novo;
            novo = *lista;
            return true;
            break;
        }
        n = n->prox;
    }

    return false;
}
