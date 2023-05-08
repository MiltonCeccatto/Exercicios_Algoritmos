#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

struct cliente {
    string nome;
    string cpf;
    int anoNacimento;
};

void CadastrarCliente(cliente **vClientes, int &i);
void MostrarClientes(cliente **vClientes, int qtd);

main()
{
    setlocale (LC_ALL, "Portuguese");

    cliente *Clientes = NULL;
    int quantidadeClientes;

    cout << "Informe a quantidade de clientes a serem cadastrados : ";
    cin >> quantidadeClientes;
    fflush(stdin);

    Clientes = new cliente[quantidadeClientes];
    int index = 0;
    bool continua = true;
    int menu;


    cout << "######## MENU ###########" << endl;
    cout << "#                       #" << endl;
    cout << "# 1 - Cadastrar cliente #" << endl;
    cout << "# 2 - Mostrar clientes  #" << endl;
    cout << "# 0 - Sair              #" << endl;
    cout << "#                       #" << endl;
    cout << "#########################" << endl;

    do {
        cout << "MENU:";
        cin >> menu;
        fflush(stdin);

        switch(menu){
            case 0 :
                continua = false;
                delete[] Clientes;
                break;
            case 1 :
                {
                    if(index >= quantidadeClientes){
                        cout << "Não podem ser cadastrados mais clientes " << endl;
                        break;
                    }else{
                        CadastrarCliente(&Clientes, index);
                        break;
                    }
                }
            case 2 :
                MostrarClientes(&Clientes, index);
                break;
            default :
                cout << "Menu inválido !" << endl;
                break;
        }
    }while(continua == true);

}

void CadastrarCliente(cliente **vClientes, int &i){

    cout << endl;
    cout << " ==== Cadastrar clientes === " << endl;
    cout << "Insira um nome : ";
    getline(cin, (*vClientes + i)->nome);
    fflush(stdin);
    cout << endl;

    cout << "Insira o ano de nacimento : ";
    cin >> (*vClientes + i)->anoNacimento;
    fflush(stdin);
    cout << endl;

    cout << "Informe o CPF do cliente : ";
    getline(cin,(*vClientes + i)->cpf);
    fflush(stdin);
    cout << endl;

    cout << "Cliente Cadastrado com sucesso ! " << endl;
    cout << endl;
    i++;
}

void MostrarClientes(cliente **vClientes, int qtd){

    for(int i = 0; i < qtd; i++){
        cout << "NOME: " << (*vClientes +i)->nome << endl;
        cout << "CPF: " << (*vClientes + i)->cpf << endl;
        cout << "ANO DE NACIMENTO : " << (*vClientes + i) -> anoNacimento << endl;
        cout << endl;
    }
}
