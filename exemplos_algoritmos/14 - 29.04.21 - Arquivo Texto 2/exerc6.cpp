#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <stdlib.h>
#include <ctime>

using namespace std;


void geraM(int (*matriz)[5]);
void dadosM(int (*matriz)[5]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int(*matriz)[5];
    matriz = new int[5][5];

    int *leu = new int(0);

    int menu;

    do {
        system("cls");

        cout << "************MENU************" << endl;
        cout << "*                          *" << endl;
        cout << "* 0 - Sair                 *" << endl;
        cout << "* 1 - Gera matriz          *" << endl;
        cout << "* 2 - Mostra os dados      *" << endl;
        cout << "*                          *" << endl;
        cout << "****************************" << endl;
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
                geraM(matriz);
                *leu = 1;
                cout << endl;
                break;

            case 2:
                system("cls");
                if(*leu == 0)
                    cout << "É necessário rodar a opção 1 primeiro!" << endl;
                else
                    dadosM(matriz);
                cout << endl;
                break;

            default:
                system("cls");
                cout << "Opção iválida." << endl << endl;
                break;
        }

        system("pause");
        system("cls");

    } while(menu != 0);

    cout << endl;

}

void geraM(int (*matriz)[5]){
    srand(time(NULL));

    cout << "OPÇÃO 1 - GERAR MATRIZ" << endl;

    int *i = new int;
    int *j = new int;

    ///Gera matriz
    for(*i = 0; *i < 5; (*i)++){
        for(*j = 0; *j < 5; (*j)++) {
            matriz[*i][*j] = rand() % 50;
        }
    }

    ///Passa pro arquivo
    ofstream escreve;

    escreve.open("matriz6.txt", ios::out);

    if(escreve.is_open()) {
        cout << "\nArquivo aberto." << endl << endl;

        cout << "Valores passados para o arquivo." << endl;

        for(*i = 0; *i < 5; (*i)++){
            for(*j = 0; *j < 5; (*j)++) {
                escreve << matriz[*i][*j] << " ";
            }
            escreve << "\n";
        }

        escreve.close();
    } else
        cout << "Erro ao abrir o arquivo." << endl;

    delete i;
    delete j;
}

void dadosM(int (*matriz)[5]){
    int *linha = new int;
    int *coluna = new int;

    int *somaB = new int(0);
    int *somaA = new int(0);

    cout << "OPÇÃO 2 - DADOS DA MATRIZ" << endl << endl;

    ///Exibe a diagonal principal
    cout << "Diagonal principal: ";

    for(*coluna = 0; *coluna < 5; (*coluna)++) {
        cout << matriz[*coluna][*coluna] << " ";
    }

    cout << endl;

    ///Exibe a diagonal secundária
    cout << "Diagonal secundária: ";

    for(*coluna = 0; *coluna < 5; (*coluna)++) {
        cout << matriz[*coluna][5-1-*coluna] << " ";
    }

    cout << endl;
    cout << endl;

    ///Soma abaixo e acima da diagonal principal
    cout << "Matriz: " << endl;
    for(*linha = 0; *linha < 5; (*linha)++){
        for(*coluna = 0; *coluna < 5; (*coluna)++){
            cout << matriz[*linha][*coluna] << "\t";
        }

        cout << endl;
    }

    for(*linha = 0; *linha < 5; (*linha)++){
        for(*coluna = 0; *coluna < 5; (*coluna)++){
            if(*linha > *coluna)
                *somaB += matriz[*linha][*coluna];
            else if(*linha < *coluna)
                *somaA += matriz[*linha][*coluna];
        }
    }

    cout << endl;

    cout << "Soma abaixo da diagonal principal: " << *somaB << endl;
    cout << "Soma acima da diagonal principal: " << *somaA << endl;

    delete linha;
    delete coluna;
    delete somaA;
    delete somaB;
}
