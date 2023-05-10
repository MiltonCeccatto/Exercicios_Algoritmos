#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <stdlib.h>

using namespace std;

void diagonalP(int *vetor, int (*matriz)[5], char *x[25]);
void diagonalS(int *vetor, int (*matriz)[5], char *x[25]);
void mostrarSoma(int *vetor, int (*matriz)[5], char *x[25]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int *linha = new int;
    int *coluna = new int;
    int *i = new int;
    int *k = new int(0);

    int *vetor = new int[25];
    int(*matriz)[5];
    matriz = new int[5][5];
    int soma = 0;

    char *x = new char[25];

    ifstream leitura;

    leitura.open("numeros.txt", ios::in);

    ///Transforma em float e manda pra um vetor
    while(leitura.getline(x, sizeof(x), ';')) {
        *vetor = atoi(x);
        vetor++;
        (*k)++;
    }

    vetor -= *k;

    cout << endl << endl;

    ///Manda o vetor pra uma matriz
    int *j = new int(0);
    for(*linha = 0; *linha < 5; (*linha)++){
        for(*coluna = 0; *coluna < 5; (*coluna)++){
            matriz[*linha][*coluna] = vetor[*j];

            (*x)++;
            (*j)++;
        }

        cout << endl;
    }

    leitura.close();

    int menu;

    do {
        system("cls");

        cout << "************MENU************" << endl;
        cout << "*                          *" << endl;
        cout << "* 0 - Sair                 *" << endl;
        cout << "* 1 - Diagonal principal   *" << endl;
        cout << "* 2 - Diagonal secundária  *" << endl;
        cout << "* 3 - Matriz e somas       *" << endl;
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
                diagonalP(vetor, matriz, &x);
                cout << endl;
                break;

            case 2:
                system("cls");
                diagonalS(vetor, matriz, &x);
                cout << endl;
                break;

            case 3:
                system("cls");
                mostrarSoma(vetor, matriz, &x);
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

    delete linha;
    delete coluna;
    delete j;
}

void diagonalP(int *vetor, int (*matriz)[5], char *x[25]) {
    int *coluna = new int;

    ///Exibe a diagonal principal
    cout << "Diagonal principal: ";

    for(*coluna = 0; *coluna < 5; (*coluna)++) {
        cout << matriz[*coluna][*coluna] << " ";
    }

    cout << endl;

    delete coluna;
}

void diagonalS(int *vetor, int (*matriz)[5], char *x[25]) {
    int *coluna = new int;

    ///Exibe a diagonal secundária
    cout << "Diagonal secundária: ";

    for(*coluna = 0; *coluna < 5; (*coluna)++) {
        cout << matriz[*coluna][5-1-*coluna] << " ";
    }

    cout << endl;

    delete coluna;
}

void mostrarSoma(int *vetor, int (*matriz)[5], char *x[25]) {
    int *linha = new int;
    int *coluna = new int;

    ///Soma abaixo e acima da diagonal principal
    int *somaB = new int(0);
    int *somaA = new int(0);

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
