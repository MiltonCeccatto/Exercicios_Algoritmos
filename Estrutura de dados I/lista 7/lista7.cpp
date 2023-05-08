#include <iostream>
#include <string>
using namespace std;
struct Ficha
{
    string cpfCnpj;
    string placaVeiculo;
    char tipoPessoa;
    float valor;
    int numDePecas;
    bool pacoteRevisaoP;

    OrdemDeServico()
    {
        cpfCnpj = "";
        tipoPessoa = ' ';
        placaVeiculo = "";
        numDePecas = 0;
        valor = 0;
    }
};

#include "fila-dinamica.hpp"
Ficha GerarOrdemDeServico();
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    // as pessoas fisicas prioritárias são as que aderiram ao pacote
    Fila pessoaFisicaPrioritaria, pessoaFisica, pessoaJuridica;

    int menu;
    Ficha retorno;


    do
    {
        system("cls");
        cout << "############## MENU ################" << endl;
        cout << "# 1 - Criar uma ordem de Serviço   #" << endl;
        cout << "# 2 - Mostrar Filas                #" << endl;
        cout << "####################################" << endl;
        cout << "MENU: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 1 :
            retorno = GerarOrdemDeServico();
            if(retorno.tipoPessoa == 'f' && retorno.pacoteRevisaoP == true){
                if(enfileiraF(&pessoaFisicaPrioritaria, retorno)){
                    cout << "Cadastro realizado com sucesso ! " << endl;
                } else {
                    cout << "Erro ao realizar Cadstro ! " << endl;
                }
            } else if(retorno.tipoPessoa == 'j'){
                if(enfileiraF(&pessoaJuridica, retorno)){
                    cout << "Cadastro Realizado com sucesso ! " << endl;
                } else {
                    cout << "Erro ao realizar cadastro !" << endl;
                }
            } else {
                if(enfileiraF(&pessoaFisica, retorno)){
                    cout << "Cadastro realizado com sucesso ! " << endl;
                } else {
                    cout << "Erro ao realizar o cadastro ! " << endl;
                }
            }
            break;
        case 2 :
            mostraF(&pessoaFisica);
            mostraF(&pessoaFisicaPrioritaria);
            mostraF(&pessoaJuridica);
            break;
        default :
            cout << "Informe um menu válido ! " << endl;
        }
        system("pause");
    }
    while( menu != 0);


    destroiF(&pessoaFisica);
    desenfileiraF(&pessoaFisicaPrioritaria);
    destroiF(&pessoaJuridica);

    return EXIT_SUCCESS;

}//final do main

Ficha GerarOrdemDeServico()
{
    Ficha cadastro;
    char pessoa;
    bool continua = true;
    char pacote;

    cout << "Informe o CPF ou CNPJ: ";
    getline(cin, cadastro.cpfCnpj);
    fflush(stdin);

    while(continua == true)
    {
        cout << "Informe o Tipo de pessoa: ";
        cout << "F - física  J - jurídica: ";
        cin >> pessoa;
        fflush(stdin);
        tolower(pessoa);
        if(pessoa == 'j' || pessoa == 'f')
        {
            cadastro.tipoPessoa = pessoa;
            continua = false;
        }
        else
        {
            cout << "Informe apenas F ou J ! " << endl;
        }
    }


    cout << "Informe a placa do veículo: ";
    getline(cin, cadastro.placaVeiculo);
    fflush(stdin);

    if(pessoa == 'f'){
    while(continua == false)
    {
        cout << "Pessoa aderiu ao pacote de Revisões programadas: " << endl;
        cout << " S - sim   N - não " << endl;
        cin >> pacote;
        fflush(stdin);
        tolower(pacote);
        switch(pacote)
        {
        case 's':
            cadastro.pacoteRevisaoP = true;
            continua = true;
            break;
        case 'n':
            cadastro.pacoteRevisaoP = false;
            continua = true;
            break;
        default:
            cout << "Informe apenas S ou N ! " << endl;
        }
    }
    }

    return cadastro;
    cout << "Cadastro realizado com sucesso " << endl;
}
