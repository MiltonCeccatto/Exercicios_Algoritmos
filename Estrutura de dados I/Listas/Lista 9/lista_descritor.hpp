#ifndef _HPP_LISTA_DESCRITOR
#define _HPP_LISTA_DESCRITOR




struct funcionario
{
    int codigo;
    string nome;
    int idade;
    float salario;

    funcionario()
    {
        codigo = 0;
        nome = "";
        idade = 0;
        salario = 0;
    }
};

typedef funcionario DadoNoLista;

struct No
{
    DadoNoLista dado;
    struct No *prox;
    No() // construtor
    {
        prox = nullptr;
    }
};

struct Lista
{
    No *inicio;
    No *fim;
    int tamanho;
    Lista() /// construtor
    {
        //cout << "\n executando o construtor...\n";
        inicio = nullptr;
        fim = nullptr;
        tamanho =0;
    }
    ~Lista() /// desconstrutor /// quando chame delete(ponteiro)
    {
        cout << "\n executando o desconstrutor....\n";
        No *n = inicio;
        while(n != nullptr)
        {
            No *aux = n;
            n = n->prox;
            delete aux;
        }
    }
};


/// quando cout receber uma struct No
ostream& operator<<(ostream& os, const No *n)
{
    /// cout << n
    return os << n->dado.codigo;
}

/// quanto cout receber uma struct Lista
ostream& operator << (ostream& os, const Lista *l)
{
    No *n = l->inicio;
    while(n)
    {
    os << "{ ";
    os << n->dado.codigo;
    os << ", ";
    os << n->dado.nome;
    os << ", ";
    os << n->dado.idade;
    os << ", ";
    os << n->dado.salario;
    os << " }";
    os << endl;
    n = n->prox;
    }
    return os;
}

void mostraL(Lista *lista)
{
    No *n = lista->inicio;

    while(n != NULL ) /// enquanto n não for NULL fica no laço
    {
        cout << "---------------------------------------------------" << endl;
        cout << "CÓDIGO: " << n->dado.codigo << endl;
        cout << "NOME: " << n->dado.nome << endl;
        cout << "IDADE: " << n->dado.idade << endl;
        cout << "SÁLARIO: R$ " << n->dado.salario << endl;
        cout << "---------------------------------------------------"<< endl;
        n = n->prox;

        if(n != NULL)
            cout << ", ";
    }
}


bool vaziaL(Lista *lista)
{
    if(lista->inicio == NULL )
        return true;
    else
        return false;
}

///insere no início da lista
bool insereInicioL(Lista *lista, DadoNoLista valor)
{

    No *novo = new No();
    if (novo == nullptr)
        return false;

    novo->dado = valor;
    novo->prox = lista->inicio;
    lista->inicio = novo;
    lista->tamanho++;
    if (!lista->fim)
        lista->fim = lista->inicio;

    return true;
}

bool insereFinalL(Lista *lista, DadoNoLista valor){
    No *novo = new No();
    No *fim = new No();
    fim = lista->fim;
    if (fim == nullptr)
        return false;

    novo->dado = valor;
    fim->prox = novo;
    lista->fim = fim->prox;
    lista->tamanho++;
    if (!lista->fim)
        lista->fim = lista->inicio;

    return true;
}

bool removeL(Lista *lista, DadoNoLista valor)
{
    No *anterior = nullptr;
    No *atual = lista->inicio;
    ///fica no laço enquanto tiver elementos na lista
    /// e não encontrar o valor procurado
    while(atual && atual->dado.codigo != valor.codigo)
    {
        anterior = atual;
        atual = atual->prox;
    }
    /// pode sair do laço sem encontrar o valor (atual==NULL)
    /// se encontrar >>> atual tem o endereço do elemento para excluir
    /// NULL == false    >>> !false == true
    if(!atual) /// se atual é NULL >> não encontrou
        return false;
    if (!anterior) /// se anterior é igual a NULL
    {
        /// o elemento a ser excluído está no início da lista
        lista->inicio = atual->prox;
        if (!lista->inicio) ///lista ficou vazia ?
            lista->fim = lista->inicio;
    }
    else   /// elemento está no meio ou no fim
    {
        anterior->prox = atual->prox;
        if (!atual->prox)/// se for retirado último da lista
            lista->fim = anterior;
    }
    /// libera a memória do elemento
    lista->tamanho--;

    delete(atual);
    return true;

}

bool removeInicio(Lista *lista){
     No *aux = nullptr;
     aux = lista->inicio;
     if(vaziaL(lista)){
         cout << "lista vazia " << endl;
        return false;
     } else{
        lista->inicio = aux->prox;
        lista->tamanho--;
        delete(aux);
        return true;
     }

}

No* buscaL(Lista *lista, DadoNoLista valor)
{
    No *n = lista->inicio;
    while (n)
    {
        if (n->dado.codigo == valor.codigo)
            return n;

        n = n->prox;
    }

    return nullptr;
}

bool inserePosicaoL(Lista *lista, DadoNoLista valor, int posicao)
{
    No *anterior = NULL;
    No *atual = lista->inicio;
    int p = 0;
    while (atual && p!=posicao)
    {
        anterior = atual;
        atual = atual->prox;
        p++;
    }
    if (p != posicao)
        return false; ///significa q não encontrou a posição

    No *novo = new No();
    novo->dado = valor;
    if(!anterior)/// inclusão no início da lista
    {
        novo->prox = lista->inicio;
        lista->inicio = novo;

        if (!lista->fim)
            lista->fim = lista->inicio;
    }
    else
    {
        novo->prox = anterior->prox;
        anterior->prox = novo;

        if (!novo->prox) //o nó adicionado está no final da lista?
            lista->fim = novo;
    }

    lista->tamanho++;

    return true;
}

DadoNoLista leInicio(Lista *lista){
    return lista->inicio->dado;
}

DadoNoLista leFinal(Lista *lista){
    return lista->fim->dado;
}


#endif // _HPP_LISTA_DESCRITOR



