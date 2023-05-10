#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void geraMatriz(int (*matriz)[8]);
void mostraMatriz(int (*matriz)[8]);
void mostraArquivo(int (*matriz)[8]);
void passaMatriz(int (*matriz)[8]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int menu;
    int *leu = new int(0);

    int(*matriz)[8];

    matriz = new int[8][8];

    do {
        system("cls");

        cout << "**********************MENU**********************" << endl;
        cout << "*                                              *" << endl;
        cout << "* 0 - Sair                                     *" << endl;
        cout << "* 1 - Gerar matriz                             *" << endl;
        cout << "* 2 - Escrever valores no arquivo texto        *" << endl;
        cout << "* 3 - Ler valores do arquivo e mostrar na tela *" << endl;
        cout << "* 4 - Mostrar matriz (para verificar)          *" << endl;
        cout << "*                                              *" << endl;
        cout << "************************************************" << endl;
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
                geraMatriz(matriz);
                cout << endl;
                *leu = 1;
                break;

            case 2:
                system("cls");
                if(*leu == 0)
                    cout << "É necessário gerar os valores primeiro" << endl << endl;
                else {
                    passaMatriz(matriz);
                    cout << endl;
                }
                break;

            case 3:
                system("cls");
                if(*leu == 0)
                    cout << "É necessário gerar os valores primeiro" << endl << endl;
                else {
                    mostraArquivo(matriz);
                    cout << endl;
                }
                break;

            case 4:
                system("cls");
                if(*leu == 0)
                    cout << "É necessário gerar os valores primeiro" << endl << endl;
                else {
                    mostraMatriz(matriz);
                    cout << endl;
                }
                break;

            default:
                system("cls");
                cout << "Opção iválida." << endl << endl;
                break;
        }

        system("pause");
        system("cls");

    } while(menu != 0);
}

void geraMatriz(int (*matriz)[8]) {
    int *l = new int;
    int *c = new int;

    ///Gera matriz
    cout << "Matriz gerada." << endl;

    srand(time(NULL));

    for(*l = 0; *l < 8; (*l)++){
        for(*c = 0; *c < 8; (*c)++){
            matriz[*l][*c] = rand() % 101;
        }
    }

    delete l;
    delete c;
}

void passaMatriz(int (*matriz)[8]) {
    int *l = new int;
    int *c = new int;


    ///Passa matriz para o arquivo
    ofstream escreve;

    escreve.open("matriz.txt", ios::out);

    if(escreve.is_open()) {
        cout << "Arquivo aberto." << endl;

        for(*l = 0; *l < 8; (*l)++){
            for(*c = 0; *c < 8; (*c)++){
                escreve << matriz[*l][*c] << " ";
            }

            escreve << ", ";
        }
    } else
        cout << "Erro ao abrir o arquivo." << endl;

    escreve.close();

    delete l;
    delete c;
}

void mostraArquivo(int (*matriz)[8]) {
    int *l = new int;
    int *c = new int;
    int *i = new int(0);

    char *x = new char[100];

    ///Mostra o arquivo no formato de matriz
    ifstream ler;

    ler.open("matriz.txt", ios::in);

    if(ler.is_open()) {
        cout << "Arquivo aberto." << endl;

        while(ler.getline(x, sizeof(x), ' , ')) {
            if(x != ",")
                cout << x << "\t";

            if(*i == 8) {
                cout << endl;

                *i = -1;
            }

            (*i)++;
        }

        cout << endl;
    } else
        cout << "Erro ao abrir o arquivo." << endl;

    ler.close();

    delete l;
    delete c;
}

///Função apenas para visualizar a matriz
void mostraMatriz(int (*matriz)[8]) {
    int *l = new int;
    int *c = new int;

    cout << "MATRIZ: " << endl;

    for(*l = 0; *l < 8; (*l)++){
        for(*c = 0; *c < 8; (*c)++){
            cout << matriz[*l][*c] << "\t";
        }

        cout << endl;
    }

    delete l;
    delete c;
}
