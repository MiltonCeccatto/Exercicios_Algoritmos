#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

struct banco{
    int conta;
    char nome[50];
    float saldo;
};

void cadastrar(banco x[], int i);
void mostrar(banco x[], int i);
void depositar(banco x[], int i);
void sacar(banco x[], int i);

int main() {
    setlocale(LC_ALL, "Portuguese");

    banco x[10];
    int indice = -1;
    int n1, lido = 0;

    while(n1 != 5) {
        cout << "***************************************************" << endl;
        cout << "* Banco -> Opções possíveis:                      *" << endl;
        cout << "*                                                 *" << endl;
        cout << "* 1. Cadastrar Conta                              *" << endl;
        cout << "* 2. Visualizar Dados da Conta                    *" << endl;
        cout << "* 3. Depositar                                    *" << endl;
        cout << "* 4. Sacar                                        *" << endl;
        cout << "* 5. Sair                                         *" << endl;
        cout << "*                                                 *" << endl;
        cout << "***************************************************" << endl;

        cout << endl;

        cin >> n1;
        fflush(stdin);

        cout << endl;

        switch(n1) {
            case 1:
                indice++;
                if(indice == 10)
                    cout << "O limite de contas cadastradas foi atingido!" << endl;
                else
                    cadastrar(x, indice);
                break;

            case 2:
                if(indice < 0) {
                    system("cls");
                    cout << "Escolha a opção 1 antes de continuar!" << endl << endl;
                } else
                    mostrar(x, indice);
                break;

            case 3:
                if(indice < 0) {
                    system("cls");
                    cout << "Escolha a opção 1 antes de continuar!" << endl << endl;
                } else
                    depositar(x, indice);
                break;

            case 4:
                if(indice < 0) {
                    system("cls");
                    cout << "Escolha a opção 1 antes de continuar!" << endl << endl;
                } else
                    sacar(x, indice);
                break;

            case 5:
                system("cls");
                cout << "Programa encerrado." << endl << endl;
                break;

            default:
                system("cls");
                cout << "Opção inválida!" << endl << endl;
        }

        system("pause");
        system("cls");
    }
}

void cadastrar(banco x[], int i) {
    system("cls");

    cout << "CADASTRO DAS CONTAS" << endl << endl;

    cout << "Informe a conta: ";
    cin >> x[i].conta;
    fflush(stdin);

    cout << "Informe o nome: ";
    gets(x[i].nome);
    fflush(stdin);

    cout << "Informe o saldo: ";
    cin >> x[i].saldo;
    fflush(stdin);

    cout << endl;
}

void mostrar(banco x[], int i) {
    system("cls");

    cout << "CONTAS CADASTRADAS" << endl << endl;

    for(int j = 0; j <= i; j++) {
        cout << "Conta: " << x[j].conta << endl;
        cout << "Nome: " << x[j].nome << endl;
        cout << "Saldo: " << x[j].saldo << endl << endl;
    }
}

void depositar(banco x[], int i) {
    system("cls");

    int code;
    int posicao, presente;
    float deposito;

    cout << "DEPOSITAR" << endl << endl;

    cout << "Insira o número da conta: ";
    cin >> code;
    fflush(stdin);

    for(int j = 0; j <= i; j++){
        if(x[j].conta == code) {
            posicao = j;
            presente = 1;
        }
    }

    if(presente == 1){
        cout << endl;
        cout << "Conta: " << x[posicao].conta << endl;
        cout << "Nome: " << x[posicao].nome << endl;
        cout << "Saldo: " << x[posicao].saldo << endl << endl;

        cout << "Informe o valor de depósito: ";
        cin >> deposito;

        if(deposito >= 0){
            x[posicao].saldo = x[posicao].saldo + deposito;
            cout << endl;
            cout << "SALDO ATUALIZADO!" << endl << endl;
        } else
            cout << "Valor de depósito inválido!" << endl;

    } else {
        cout << endl;
        cout << "Número de conta informado não existe!" << endl << endl;
        }
}

void sacar(banco x[], int i){
    system("cls");

    int posicao, presente;
    int code;
    float saque;

    cout << "Insira o número da conta: ";
    cin >> code;
    fflush(stdin);

    for(int j = 0; j <= i; j++){
        if(x[j].conta == code) {
            posicao = j;
            presente = 1;
        }
    }

    if(presente == 1){
        cout << endl;
        cout << "Conta: " << x[posicao].conta << endl;
        cout << "Nome: " << x[posicao].nome << endl;
        cout << "Saldo: " << x[posicao].saldo << endl << endl;

        cout << "Informe a quantida a ser sacada: ";
        cin >> saque;
        fflush(stdin);

        if(saque >=0){
            if(x[posicao].saldo < saque)
                cout << "A quantidade de saque não é disponível!" << endl << endl;
            else if(x[posicao].saldo >= saque){
                    x[posicao].saldo = x[posicao].saldo - saque;
                    cout << endl;
                    cout << "SALDO ATUALIZADO!" << endl << endl;
                }
        } else {
            cout << endl;
            cout << "Quantidade Inválida!" << endl << endl;
            }

    }
}
