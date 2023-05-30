#include <iostream>
using namespace std;

#include <cstring>


#include "lista_descritor.hpp"
void inserirFuncionario(Lista **lista);
void funcionarioInicio(Lista **lista);
void funcionarioFinal(Lista **lista);
int main(void)
{
    setlocale(LC_ALL, "Portuguese");


    int valor, pos;
    No* aux = nullptr;
    Lista *listaFuncionarios = new Lista();//executa o construtor (inicializa a lista)....

    inserirFuncionario(&listaFuncionarios);
    inserirFuncionario(&listaFuncionarios);
    funcionarioFinal(&listaFuncionarios);

    cout << listaFuncionarios;




    delete(listaFuncionarios); //executa desconstrutor (apaga todos os n�s)
    return EXIT_SUCCESS;
}

void inserirFuncionario(Lista **lista)
{

    int escolha;
    DadoNoLista funcionario;
    cout << "-> Inserir funcion�rio <- " << endl;
    cout << "Informe um c�digo para o funcionario: ";
    cin >> funcionario.codigo;
    fflush(stdin);

    cout << "Informe o nome do funcion�rio: ";
    cin >> funcionario.nome;
    fflush(stdin);

    cout << "Informe a idade do funcion�rio: ";
    cin >> funcionario.idade;
    fflush(stdin);

    cout << "Informe o s�lario do funcion�rio: ";
    cin >> funcionario.salario;
    fflush(stdin);

    cout << "1 - para inserir no in�cio " << endl;
    cout << "2 - para inserir no fim " << endl;
    cin >> escolha;
    fflush(stdin);

    switch(escolha)
    {
    case 1 :
    {
        if(insereInicioL(*lista, funcionario))
        {
            cout << "Funcion�rio adicionado com sucesso ! " << endl;
        }
        else
        {
            cout << "Erro ao adicionar funcion�rio !" << endl;
        }
    }
    break;
    case 2 :
        {
           if(insereFinalL(*lista, funcionario))
        {
            cout << "Funcion�rio adicionado com sucesso ! " << endl;
        }
        else
        {
            cout << "Erro ao adicionar funcion�rio !" << endl;
        }
        }
    break;
    default:
        cout << "Escolha inv�lida !" << endl;
    }



}

void funcionarioInicio(Lista **lista)
{
    DadoNoLista funcionario;
    funcionario = leInicio(*lista);
    cout << "Funcion�rio no in�cio da lista " << endl;
    cout << "C�DIGO: " << funcionario.codigo << endl;
    cout << "NOME: " << funcionario.nome << endl;
    cout << "IDADE: " << funcionario.idade << endl;
    cout << "SAL�RIO: R$ " << funcionario.salario << endl;
}

void funcionarioFinal(Lista **lista)
{
    DadoNoLista funcionario;
    funcionario = leFinal(*lista);
    cout << "Funcion�rio no fim da lista " << endl;
    cout << "C�DIGO: " << funcionario.codigo << endl;
    cout << "NOME: " << funcionario.nome << endl;
    cout << "IDADE: " << funcionario.idade << endl;
    cout << "SAL�RIO: R$ " << funcionario.salario << endl;
}

float mediaSalarios(Lista *lista){
      No *aux = new No();
      aux = lista->inicio;

      while(aux){
        atual = atual->prox;
      }

}

/*
void ordenaL()
{
    bool trocou;

    do
    {
        trocou = false;

        while(n) ///percorrer todos os nos e trocar quando ness�rio
        {
            if(precisa_trocar)
            {
                //fazer a troca
                trocou = true;
            }

        }

    }while(trucou);
}*/

