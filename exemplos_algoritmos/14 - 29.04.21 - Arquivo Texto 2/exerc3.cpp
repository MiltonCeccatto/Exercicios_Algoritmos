#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>

///N�o consegui finalizar

using namespace std;

struct estoque {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
};

void incluir(int i, int *f);
void vender(estoque produto[], int *i);
void listar(estoque produto[], int *i, int *f);

int main() {
    setlocale(LC_ALL, "Portuguese");

    estoque produto[20];

    int *flag = new int(0);
    int menu, indice = -1;

    do {
        system("cls");

        cout << "*******************MENU******************" << endl;
        cout << "*                                       *" << endl;
        cout << "* 0 - Sair                              *" << endl;
        cout << "* 1 - Incluir produto                   *" << endl;
        cout << "* 2 - Vender produto                    *" << endl;
        cout << "* 3 - Listar produto com estoque zerado *" << endl;
        cout << "* 4 - Consultar produto pelo nome       *" << endl;
        cout << "* 5 - Listar todos os produtos          *" << endl;
        cout << "*                                       *" << endl;
        cout << "*****************************************" << endl << endl;

        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu) {
            case 0:
                system("cls");
                cout << "Programa encerrado." << endl << endl;
                break;

            case 1:
                system("cls");
                incluir(indice, flag);
                break;

            case 2:
                system("cls");
                vender(produto, &indice);
                break;

            /*case 3:
                system("cls");
                consultar();
                break;*/

            case 5:
                system("cls");
                listar(produto, &indice, flag);

                cout << "OP��O 5 - EXIBIR PRODUTOS" << endl << endl;
                for(int j = 0; j <= indice; j++) {
                   cout << "C�digo: " << produto[j].codigo << endl;
                   cout << "Nome: " << produto[j].nome<< endl;
                   cout << "Pre�o: " << produto[j].preco << endl;
                   cout << "Quantidade: " << produto[j].quantidade << endl;
                   cout << "----------------------------------------------" << endl;
               }
                cout << endl;
                break;

            default:
                system("cls");
                cout << "Op��o iv�lida." << endl << endl;
                break;
        }

        system("pause");
        system("cls");

    } while(menu != 0);
}

void incluir(int i, int *f) {
    cout << "OP��O 1 - INCLUIR PRODUTO" << endl << endl;

    estoque produto;

    ofstream escreve("produtos.txt", ios::app);

    if(escreve.is_open()) {
        cout << "Informe o c�digo: ";
        cin >> produto.codigo;
        fflush(stdin);

        cout << "Informe o nome: ";
        gets(produto.nome);
        fflush(stdin);

        cout << "Informe o pre�o: ";
        cin >> produto.preco;
        fflush(stdin);

        cout << "Informe o quantidade: ";
        cin >> produto.quantidade;
        fflush(stdin);

        if(*f == 0){
            escreve << produto.codigo << "#";
            escreve << produto.nome << "#";
            escreve << produto.preco << "#";
            escreve << produto.quantidade;
            (*f)++;
        } else {
            escreve << "\n" << produto.codigo << "#";
            escreve << produto.nome << "#";
            escreve << produto.preco << "#";
            escreve << produto.quantidade;
        }

        escreve.close();
    }
    else {
        cout << "Falha ao abrir o arquivo." << endl;
    }

    cout << endl;
}

void listar(estoque produto[], int *i, int *f) {
    ifstream ler("produtos.txt", ios::in);

    ler.clear();

    *i = -1;

    char aux[100];
    char aux2[100];
    char aux3[100];

    if(ler.is_open()) {
        while(!ler.eof()) {
            (*i)++;

            ler.getline(aux, 10, '#');
            produto[*i].codigo = atoi(aux);

            ler.getline(produto[*i].nome, 100, '#');

            ler.getline(aux2, 10, '#');
            produto[*i].preco = atof(aux2);

            ler.getline(aux3, 10);
            produto[*i].quantidade = atoi(aux3);
        }

        ler.close();
    }
    else {
        cout << "Falha ao abrir o arquivo.";
    }
}

void vender(estoque produto[], int *i) {
    system("cls");

    cout << "OP��O 2 - VENDER PRODUTO" << endl << endl;

    int code, posicao, qtd;
    bool contem;

    cout << "Insira o c�digo do produto: ";
    cin >> code;

    for(int j = 0; j <= *i; j++) {
        if(produto[j].codigo == code) {
            posicao = j;
            contem = true;
        }
    }

    if(contem == true) {
        cout << "\nC�digo: " << produto[posicao].codigo << endl;
        cout << "Nome: " << produto[posicao].nome << endl;
        cout << "Pre�o (R$): " << produto[posicao].preco << endl;
        cout << "Quantidade: " << produto[posicao].quantidade << endl << endl;

        cout << "Quantidade de venda: ";
        cin >> qtd;

        cout << endl;

        if(qtd > 0) {
            if(produto[posicao].quantidade < qtd) {
                cout << "Quantidade n�o dispon�vel em estoque!" << endl << endl;

            } else if(produto[posicao].quantidade >= qtd) {
                produto[posicao].quantidade = produto[posicao].quantidade - qtd;

                cout << "Venda efetuada!" << endl << endl;
                cout << "Quantidade atualizada no estoque: " << produto[posicao].quantidade << endl << endl;
            }
        } else
            cout << "Insira um n�mero maior que 0 para efetuar a venda." << endl << endl;
    } else {
        system("cls");

        cout << "Insira uma conta v�lida!" << endl << endl;
    }
}
