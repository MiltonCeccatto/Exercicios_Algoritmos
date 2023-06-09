#ifndef _HPP_LISTA_DINAMICA
#define _HPP_LISTA_DINAMICA

typedef string DadoNoLista;

struct No
{
    DadoNoLista dado;
    No *prox;
    No *ant;
    No()
    {
        prox = nullptr;
        ant = nullptr;
    }

};


void inicializaL(No **lista)
{
    *lista = NULL;
}

bool vaziaL(No **lista)
{
    if( (*lista) == NULL )
        return true;
    else
        return false;
}

/// excluir todos os elementos da lista
void destroiL(No **lista)
{
    No *n = *lista;
    while (n != NULL)
    {
        No *aux  = n;
        n = n->prox;
        delete aux;
    }
    *lista = NULL;
}

void mostraL(No **lista)
{
    No *n = *lista;

    cout << "L:{";
    while(n != NULL ) /// enquanto n n�o for NULL fica no la�o
    {
        cout << n->dado;
        n = n->prox;

        if(n != NULL)
            cout << ", ";
    }
    cout << "}\n";
}

//insere no in�cio da lista
bool insereInicioL(No **lista, DadoNoLista valor)
{

    No *novo = new No(); // aloca mem�ria para o n�
    if (novo == NULL)
        return false;

    novo->dado = valor; // novo n� recebe o valor
    novo->prox = *lista;
    *lista = novo;

    return true;
}

//retorna o valor do primeiro elemento da lista SEM remov�-lo
DadoNoLista leInicioL(No **lista)
{
    DadoNoLista dado;
    dado = "";//se DadoNoLista for uma struct, inicializar os atributos!

    if(vaziaL(lista) == false)
        dado = (*lista)->dado; //atribui o dado do in�cio da lista para a vari�vel dado

    return dado;
}

//retorna o valor do primeiro elemento da lista e REMOVE o elemento
DadoNoLista removeInicioL(No **lista)
{
    No* aux;
    DadoNoLista dado;
    dado = "";//se DadoNoLista for uma struct, inicializar os atributos!

    if(vaziaL(lista) == false)
    {
        dado = (*lista)->dado; //atribui o dado do in�cio da lista para a vari�vel dado
        aux = *lista; //pega a referenccia do primeiro n�, o qual ser� removido

        *lista = (*lista)->prox; //atualiza o in�cio da lista para o pr�ximo elemento

        delete aux;
    }

    return dado;
}




///remover um n� da lista com um valor espec�fico
bool removeL(No **lista, DadoNoLista valor)
{
    No *anterior = NULL;
    No *atual = *lista;
    ///fica no la�o enquanto tiver elementos na lista
    /// e n�o encontrar o valor procurado
    while(atual!=NULL && atual->dado != valor)
    {
        anterior = atual;
        atual = atual->prox;
    }
    /// pode sair do la�o sem encontrar o valor (atual==NULL)
    /// se encontrar -> atual tem o endere�o do elemento para excluir
    if(atual == NULL) /// se atual � NULL -> n�o encontrou
        return false;

    if (anterior == NULL)
    {
        /// o elemento a ser exclu�do est� no in�cio da lista
        *lista = atual->prox;
    }
    else   /// elemento est� no meio ou no fim
    {
        anterior->prox = atual->prox;
    }

    /// libera a mem�ria do elemento
    delete(atual);
    return true;
}


No* buscaL(No **lista, DadoNoLista valor)
{
    No *n = *lista;
    while (n != NULL)
    {
        if (n->dado == valor)
            return n;

        n = n->prox;
    }

    return NULL;
}

#endif // _HPP_LISTA_DINAMICA









