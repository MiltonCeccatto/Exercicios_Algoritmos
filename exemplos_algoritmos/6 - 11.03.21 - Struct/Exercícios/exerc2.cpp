#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

struct estoque {
    int codigo;
    char nome[50];
    char unidade[4];
    float valor;
    int quantidade;
};

void cadastra(estoque x[], int i);
void mostra(estoque x[], int i);
void consultarPorCodigo(estoque x[], int i);
void venda(estoque x[], int i);

int main() {
    setlocale(LC_ALL, "Portuguese");

    estoque x[50];
    int indice = -1;

    int n1, lido = 0;

    while(n1 != 0) {
        cout << "***************************************************" << endl;
        cout << "* Estoque -> Opções possíveis:                    *" << endl;
        cout << "*                                                 *" << endl;
        cout << "* 0. Sair do programa                             *" << endl;
        cout << "* 1. Cadastrar produto                            *" << endl;
        cout << "* 2. Listar produtos cadastrados                  *" << endl;
        cout << "* 3. Consultar produto pelo código                *" << endl;
        cout << "* 4. Vender produto                               *" << endl;
        cout << "*                                                 *" << endl;
        cout << "***************************************************" << endl;

        cout << endl;

        cin >> n1;
        fflush(stdin);

        cout << endl;

        switch(n1) {
            case 0:
                system("cls");
                cout << "Programa encerrado." << endl << endl;
                break;

            case 1:
                indice++;
                if(indice == 50)
                    cout << "O limite de produtos cadastrados foi atingido!" << endl;
                else
                    cadastra(x, indice);
                break;

            case 2:
                if(indice < 0) {
                    system("cls");
                    cout << "Escolha a opção 1 antes de continuar!" << endl << endl;
                } else
                    mostra(x, indice);
                break;

            case 3:
                if(indice < 0) {
                    system("cls");
                    cout << "Escolha a opção 1 antes de continuar!" << endl << endl;
                } else
                    consultarPorCodigo(x, indice);
                break;

            case 4:
                if(indice < 0) {
                    system("cls");
                    cout << "Escolha a opção 1 antes de continuar!" << endl << endl;
                } else
                    venda(x, indice);
                break;

            default:
                system("cls");

                cout << "Opção inválida!" << endl << endl;

                break;
        }

        system("pause");
        system("cls");
    }
}

void cadastra(estoque x[], int i) {
    system("cls");

    int posicao, presente;

    cout << "CADASTRO DOS PRODUTOS" << endl << endl;

    cout << "Informe o código do produto: ";
    cin >> x[i].codigo;
    fflush(stdin);

    /*for(int j = 0; j <= i; j++){
            if(x[j].codigo == code) {
                posicao = j;
                presente = 1;
            }
        }*/

    cout << "Informe o nome do produto: ";
    gets(x[i].nome);
    fflush(stdin);

    cout << "Informe a unidade do produto: ";
    gets(x[i].unidade);
    fflush(stdin);

    cout << "Informe o valor do produto (R$): ";
    cin >> x[i].valor;
    fflush(stdin);

    cout << "Informe a quantidade em estoque do produto: ";
    cin >> x[i].quantidade;
    fflush(stdin);

    cout << endl;
}

void mostra(estoque x[], int i) {
    system("cls");

    cout << "PRODUTOS CADASTRADOS" << endl << endl;

    for(int j = 0; j <= i; j++) {
        cout << "Código: " << x[j].codigo << endl;
        cout << "Nome: " << x[j].nome << endl;
        cout << "Unidade: " << x[j].unidade << endl;
        cout << "Valor (R$): " << x[j].valor << endl;
        cout << "Quantidade: " << x[j].quantidade << endl << endl;
    }
}

void consultarPorCodigo(estoque x[], int i) {
    system("cls");

    int code;
    int posicao, presente;

    cout << "CONSULTAR PRODUTO POR CÓDIGO" << endl << endl;

    cout << "Insira o código do produto: ";
    cin >> code;
    fflush(stdin);

    for(int j = 0; j <= i; j++){
        if(x[j].codigo == code) {
            posicao = j;
            presente = 1;
        }
    }

    if(presente == 1){
        cout << "Código: " << x[posicao].codigo << endl;
        cout << "Nome: " << x[posicao].nome << endl;
        cout << "Unidade: " << x[posicao].unidade << endl;
        cout << "Valor (R$): " << x[posicao].valor << endl;
        cout << "Quantidade: " << x[posicao].quantidade << endl << endl;
    } else
        cout << "Código informado não existe!" << endl << endl;
}

void venda(estoque x[], int i){
    system("cls");

    int posicao, presente;
    int code, quant;

    cout << "Informe o código: ";
    cin >> code;
    fflush(stdin);

    for(int j = 0; j <= i; j++){
        if(x[j].codigo == code) {
            posicao = j;
            presente = 1;
        }
    }

    if(presente == 1){
        cout << "Informe a quantidade: ";
        cin >> quant;
        fflush(stdin);

        if(quant >=0){
            if(x[posicao].quantidade < quant)
                cout << "A quantidade não está presente em estoque!" << endl << endl;
            else if(x[posicao].quantidade >= quant)
                x[posicao].quantidade = x[posicao].quantidade - quant;
        } else
            cout << "Quantidade Inválida!" << endl << endl;

    }
}
