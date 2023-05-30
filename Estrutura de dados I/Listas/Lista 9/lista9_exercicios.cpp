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




    delete(listaFuncionarios); //executa desconstrutor (apaga todos os nós)
    return EXIT_SUCCESS;
}

void inserirFuncionario(Lista **lista)
{

    int escolha;
    DadoNoLista funcionario;
    cout << "-> Inserir funcionário <- " << endl;
    cout << "Informe um código para o funcionario: ";
    cin >> funcionario.codigo;
    fflush(stdin);

    cout << "Informe o nome do funcionário: ";
    cin >> funcionario.nome;
    fflush(stdin);

    cout << "Informe a idade do funcionário: ";
    cin >> funcionario.idade;
    fflush(stdin);

    cout << "Informe o sálario do funcionário: ";
    cin >> funcionario.salario;
    fflush(stdin);

    cout << "1 - para inserir no início " << endl;
    cout << "2 - para inserir no fim " << endl;
    cin >> escolha;
    fflush(stdin);

    switch(escolha)
    {
    case 1 :
    {
        if(insereInicioL(*lista, funcionario))
        {
            cout << "Funcionário adicionado com sucesso ! " << endl;
        }
        else
        {
            cout << "Erro ao adicionar funcionário !" << endl;
        }
    }
    break;
    case 2 :
        {
           if(insereFinalL(*lista, funcionario))
        {
            cout << "Funcionário adicionado com sucesso ! " << endl;
        }
        else
        {
            cout << "Erro ao adicionar funcionário !" << endl;
        }
        }
    break;
    default:
        cout << "Escolha inválida !" << endl;
    }



}

void funcionarioInicio(Lista **lista)
{
    DadoNoLista funcionario;
    funcionario = leInicio(*lista);
    cout << "Funcionário no início da lista " << endl;
    cout << "CÓDIGO: " << funcionario.codigo << endl;
    cout << "NOME: " << funcionario.nome << endl;
    cout << "IDADE: " << funcionario.idade << endl;
    cout << "SALÁRIO: R$ " << funcionario.salario << endl;
}

void funcionarioFinal(Lista **lista)
{
    DadoNoLista funcionario;
    funcionario = leFinal(*lista);
    cout << "Funcionário no fim da lista " << endl;
    cout << "CÓDIGO: " << funcionario.codigo << endl;
    cout << "NOME: " << funcionario.nome << endl;
    cout << "IDADE: " << funcionario.idade << endl;
    cout << "SALÁRIO: R$ " << funcionario.salario << endl;
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

        while(n) ///percorrer todos os nos e trocar quando nessário
        {
            if(precisa_trocar)
            {
                //fazer a troca
                trocou = true;
            }

        }

    }while(trucou);
}*/

