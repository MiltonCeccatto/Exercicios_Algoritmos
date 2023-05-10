#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

struct estoque {
    int codigo;
    char nome[50];
    char unidade[5];
    float valor;
    int quantidade;
};

void cadastra(estoque *pproduto, int *i);
void mostra(estoque *pproduto, int *i);
void consultarPorCodigo(estoque *pproduto, int *i);
void venda(estoque *pproduto, int *i);

int main() {
    setlocale(LC_ALL, "Portuguese");

    estoque *produto;
    produto = new estoque[20];

    int *indice;
    indice = new int(-1);

    int menu;

    do {
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

        cin >> menu;
        fflush(stdin);

        cout << endl;

        switch(menu) {
            case 0:
                system("cls");
                cout << "Programa encerrado." << endl << endl;
                break;

            case 1:
                (*indice)++;
                if(*indice == 20)
                    cout << "O limite de produtos cadastrados foi atingido!" << endl;
                else
                    cadastra(produto, indice);
                break;

            case 2:
                if(*indice < 0) {
                    system("cls");
                    cout << "Escolha a opção 1 antes de continuar!" << endl << endl;
                } else
                    mostra(produto, indice);
                break;

            case 3:
                if(*indice < 0) {
                    system("cls");
                    cout << "Escolha a opção 1 antes de continuar!" << endl << endl;
                } else
                    consultarPorCodigo(produto, indice);
                break;

            case 4:
                if(*indice < 0) {
                    system("cls");
                    cout << "Escolha a opção 1 antes de continuar!" << endl << endl;
                } else
                    venda(produto, indice);
                break;

            default:
                system("cls");

                cout << "Opção inválida!" << endl << endl;

                break;
        }

        system("pause");
        system("cls");
    } while(menu != 0);
}

void cadastra(estoque *pproduto, int *i) {
    system("cls");

    int idx, n;
    bool repetido;

    idx = 0;

    cout << "CADASTRO DOS PRODUTOS" << endl << endl;

    do {
        cout << "Informe o código do produto: ";
        cin >> n;
        fflush(stdin);

        repetido = false;

        for(int j = 0; j < *i; j++) {
            if(pproduto[j].codigo == n) {
                repetido = true;

                system("cls");

                cout << "Este código já foi cadastrado!" << endl << endl;

                system("pause");
                system("cls");

                cout << "CADASTRO DOS PRODUTOS" << endl << endl;
            }
        }

        if(repetido == false) {
            pproduto[*i].codigo = n;
            idx++;
        }
    } while(repetido == true);

    cout << "Informe o nome do produto: ";
    gets(pproduto[*i].nome);
    fflush(stdin);

    cout << "Informe a unidade do produto: ";
    cin >> (pproduto[*i].unidade);
    fflush(stdin);

    cout << "Informe o valor do produto (R$): ";
    cin >> pproduto[*i].valor;
    fflush(stdin);

    cout << "Informe a quantidade em estoque do produto: ";
    cin >> pproduto[*i].quantidade;
    fflush(stdin);

    cout << endl;
}

void mostra(estoque *pproduto, int *i) {
    system("cls");

    cout << "PRODUTOS CADASTRADOS" << endl << endl;

    for(int j = 0; j <= *i; j++) {
        cout << "Código: " << pproduto[j].codigo << endl;
        cout << "Nome: " << pproduto[j].nome << endl;
        cout << "Unidade: " << pproduto[j].unidade << endl;
        cout << "Valor (R$): " << pproduto[j].valor << endl;
        cout << "Quantidade: " << pproduto[j].quantidade << endl << endl;
    }
}

void consultarPorCodigo(estoque *pproduto, int *i) {
    system("cls");

    int *posicao = new int;

    int *code = new int;
    int presente;

    cout << "CONSULTAR PRODUTO POR CÓDIGO" << endl << endl;

    cout << "Insira o código do produto: ";
    cin >> *code;
    fflush(stdin);

    for(int j = 0; j <= *i; j++){
        if(pproduto[j].codigo == *code) {
            *posicao = j;
            presente = 1;
        }
    }

    if(presente == 1){
        cout << "Código: " << pproduto[*posicao].codigo << endl;
        cout << "Nome: " << pproduto[*posicao].nome << endl;
        cout << "Unidade: " << pproduto[*posicao].unidade << endl;
        cout << "Valor (R$): " << pproduto[*posicao].valor << endl;
        cout << "Quantidade: " << pproduto[*posicao].quantidade << endl << endl;
    } else
        cout << "Código informado não existe!" << endl << endl;
}

void venda(estoque *pproduto, int *i){
    system("cls");

    int *j = new int;

    int *posicao = new int;
    int *code = new int;

    int presente;
    int quant;

    cout << "Informe o código: ";
    cin >> *code;
    fflush(stdin);

    for(*j = 0; *j <= *i; (*j)++){
        if(pproduto[*j].codigo == *code) {
            *posicao = *j;
            presente = 1;
        }
    }

    delete j;

    if(presente == 1){
        cout << "Informe a quantidade: ";
        cin >> quant;
        fflush(stdin);

        if(quant >=0){
            if(pproduto[*posicao].quantidade < quant)
                cout << "A quantidade não está presente em estoque!" << endl << endl;
            else if(pproduto[*posicao].quantidade >= quant)
                pproduto[*posicao].quantidade = pproduto[*posicao].quantidade - quant;
        } else
            cout << "Quantidade Inválida!" << endl << endl;

    }
}
