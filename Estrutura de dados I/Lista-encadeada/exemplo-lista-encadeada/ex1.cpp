#include <iostream>
#include <string>
using namespace std;

#include "lista.hpp"

int totalL(No **lista);
bool igualL(No **lista1, No **lista2);
bool insereFinalL(No **lista, string valor);
DadoNoLista leFinal(No **lista);
DadoNoLista removeFinalL(No **lista);
DadoNoLista removeFinalL(No **lista);
DadoNoLista lePosicao(No **lista, int posicao);
void uniao(No **lista1, No **lista2, No **listaSaida);
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int menu;
    int posicao;
    string nome; //valor deve ser do mesmo tipo de DadoNoLista (lista.hpp)
    No* lista2; //usado na busca
    No* lista1; //evite usar "list", pois é uma palavra reservada
    No* listaUniao;

    inicializaL(&lista1);
    inicializaL(&lista2);
    inicializaL(&listaUniao);

    insereInicioL(&lista1, "milton");
    insereInicioL(&lista1, "maria");
    insereInicioL(&lista1, "joao");
    insereInicioL(&lista1, "nathan");
    insereInicioL(&lista1, "veronica");
    insereInicioL(&lista1, "rodrigo");

    insereInicioL(&lista2, "milton");
    insereInicioL(&lista2, "maria");
    insereInicioL(&lista2, "joao");
    insereInicioL(&lista2, "nathan");
    insereInicioL(&lista2, "veronica");
    insereInicioL(&lista2, "rodrigo");

    do
    {
        system("cls");
        cout << "################## MENU ####################" << endl;
        cout << "# 0 - Sair                                 #" << endl;
        cout << "# 1 - Total de elementos da lista          #" << endl;
        cout << "# 2 - Verifica se duas listas são iguais   #" << endl;
        cout << "# 3 - Insere no final da lista             #" << endl;
        cout << "# 4 - Lê o valor do último elemento        #" << endl;
        cout << "# 5 - Remove o último elemento             #" << endl;
        cout << "# 6 - Retorna o valor da posição informada #" << endl;
        cout << "# 7 - Unir duas listas                     #" << endl;
        cout << "# 8 - Mostrar listas                       #" << endl;
        cout << "############################################" << endl;
        cout << "MENU:";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0 :
            cout << "Programa finalizado " << endl;
            break;
        case 1 :
            cout << "Total de elementos da lista: " << totalL(&lista1) << endl;
            break;
        case 2 :
            {
                if(igualL(&lista1, &lista2)){
                    cout << "As listas são iguais " << endl;
                } else {
                    cout << "As listas são diferentes " << endl;
                }
            }
            break;
        case 3 :
            {
                cout << "Informe um nome para inserir na lista: ";
                getline(cin, nome);
                fflush(stdin);
                if(insereFinalL(&lista1, nome)){
                    cout << "Nome adicionado a lista ! " << endl;
                } else {
                    cout << "Erro ao adicionar nome na lista " << endl;
                }
            }
            break;
        case 4 :
            cout << "Último valor da fila: " << leFinal(&lista1) << endl;
            break;
        case 5 :
             cout << "Último elemento da lista foi removido: " << removeFinalL(&lista1) << endl;
             break;
        case 6 :
            {
                cout << "Informe a posição do valor desejado: ";
                cin >> posicao;
                fflush(stdin);

                cout << "O valor da posição " << posicao << " é: " << lePosicao(&lista1, posicao) << endl;
            }
            break;
        case 7 :
            uniao(&lista1, &lista2, &listaUniao);
            break;
        case 8 :
            mostraL(&lista1);
            cout << endl;
            mostraL(&lista2);
            cout << endl;
            mostraL(&listaUniao);
            break;
        default :
            cout << "Menu inválido" << endl;
        }
        system("pause");
    }while(menu != 0);

    destroiL(&lista1);
    destroiL(&lista2);
    destroiL(&listaUniao);
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

DadoNoLista leFinal(No **lista) //Retorna o valor do último elemento da lista
{

    No *novo = new No();
    No *n = *lista;

    while(n != NULL)
    {
        if(n->prox == NULL)
        {
            novo->dado = n->dado;
            break;
        }
        n = n->prox;
    }
    return novo->dado;
}

DadoNoLista removeFinalL(No **lista)
{
    No *atual = *lista;
    No *proximo = new No();
    No *retorno = new No();
    proximo = atual->prox;
    while(atual != NULL && proximo != NULL)
    {
        if(proximo->prox == NULL)
        {
            retorno->dado = proximo->dado;
            proximo = NULL;
        }
        if(proximo == NULL)
        {
            atual->prox = proximo;
        }
        else
        {
            atual = atual->prox;
        }
        proximo = atual->prox;
    }
    return retorno->dado;
}

//retorna o valor do dado armazenado em um nó da lista, com base na posição passada por parâmetro
//se posição=0, a função deve retornar o valor do primeiro nó da lista
//se posição=1, a função deve retornar o valor do segundo nó da lista
DadoNoLista lePosicao(No **lista, int posicao)
{
    int cont = 0;
    No *atual = *lista;
    No *retorno = new No();
    while(atual != NULL)
    {
        if(cont == posicao)
        {
            retorno->dado = atual->dado;
        }
        cont++;
        atual = atual->prox;
    }
    return retorno->dado;

}

void uniao(No **lista1, No **lista2, No **listaSaida)
{
    // Verifica se alguma das listas de entrada é vazia
    if (*lista1 == NULL) {
        *listaSaida = *lista2;
        return;
    }
    if (*lista2 == NULL) {
        *listaSaida = *lista1;
        return;
    }

    // A lista de saída é a primeira lista
    *listaSaida = *lista1;

    // Encontra o último nó da primeira lista
    No* ultimo =  *listaSaida;
    while (ultimo->prox != NULL) {
        ultimo = ultimo->prox;
    }

    // Concatena a segunda lista no final da primeira
    ultimo->prox = *lista2;


}

