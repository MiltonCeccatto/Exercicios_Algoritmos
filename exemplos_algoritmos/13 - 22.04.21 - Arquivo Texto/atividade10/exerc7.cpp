#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void gerar(int *vetor, int *tamanho, int *n);
void incluir(int *vetor, int *tamanho, int *n);
void mostrar();
void mostrarQTD();
void soma();

int main() {
    setlocale(LC_ALL, "Portuguese");

    int *tam = new int(0);
    int *numero = new int;

    int *vetorMain = new int[50 + *tam + 1];

    gerar(vetorMain, tam, numero);

    int menu;
    int *leu = new int(0);

    do {
        system("cls");

        cout << "************************MENU************************" << endl;
        cout << "*                                                  *" << endl;
        cout << "* 0 - Sair                                         *" << endl;
        cout << "* 1 - Incluir valor                                *" << endl;
        cout << "* 2 - Mostra valores do arquivo                    *" << endl;
        cout << "* 3 - Mostra a quantidade de valores no arquivo    *" << endl;
        cout << "* 4 - Mostrar soma                                 *" << endl;
        cout << "*                                                  *" << endl;
        cout << "****************************************************" << endl;
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
                cout << "   OPÇÃO 1 - INCLUIR VALOR   " << endl << endl;
                cout << "Informe um valor: ";
                cin >> *numero;
                fflush(stdin);

                vetorMain[50 + *tam] = *numero;

                (*tam)++;
                incluir(vetorMain, tam, numero);

                *leu = 1;
                cout << endl;
                break;

            case 2:
                system("cls");
                if(*leu == 0)
                    cout << "É necessário rodar a opção 1 primeiro!" << endl << endl;
                else
                    mostrar();
                cout << endl;
                break;

            case 3:
                system("cls");
                if(*leu == 0)
                    cout << "É necessário rodar a opção 1 primeiro!" << endl << endl;
                else
                    mostrarQTD();
                cout << endl;
                break;

            case 4:
                system("cls");
                if(*leu == 0)
                    cout << "É necessário rodar a opção 1 primeiro!" << endl << endl;
                else
                    soma();
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
}

void gerar(int *vetor, int *tamanho, int *n) {
    int *cont = new int(0);

    srand(time(NULL));

    ///Gera os valores
    while(*cont < 50) {
        *vetor = rand() % 201;

        vetor++;
        (*cont)++;
    }

    vetor -= *cont;
    *cont = 0;

    delete cont;

    cout << "Vetor gerado." << endl;

    ///Crescente
    int *x = new int;
    int *i = new int;

    int *aux = new int;

    for(*i = 0; *i < 50; (*i)++) {
        for(*x = *i; *x < 50; (*x)++) {
            if(*(vetor + *i) > *(vetor + *x)) {
                *aux = *(vetor + *i);
                *(vetor + *i) = *(vetor + *x);
                *(vetor + *x) = *aux;
            }
        }
    }

    ///Passa pro arquivo
    ofstream escreve;

    escreve.open("exer_7.txt", ios::out);

    if(escreve.is_open()) {
        cout << "\nArquivo aberto." << endl << endl;

        cout << "Valores passados para o arquivo." << endl;

        for(*i = 0; *i < 50; (*i)++) {
            escreve << vetor[*i] << "\n";
        }
    } else
        cout << "Erro ao abrir o arquivo." << endl;

    escreve.close();

}


void incluir(int *vetor, int *tamanho, int *n) {
    ///Coloca em ordem crescente
    int *i = new int;
    int *x = new int;
    int *aux = new int;

    for(*i = 0; *i < (50 + *tamanho + 1); (*i)++) {
        for(*x = *i; *x < (50 + *tamanho + 1); (*x)++) {
            if(*(vetor + *i) > *(vetor + *x)) {
                *aux = *(vetor + *i);
                *(vetor + *i) = *(vetor + *x);
                *(vetor + *x) = *aux;
            }
        }
    }

    ///Passa pro arquivo
    ofstream escreve;

    escreve.open("exer_7.txt", ios::out);

    for(int j = 0; j < (50 + *tamanho); j++){
        escreve << vetor[j] << "\n";
    }

    escreve.close();
}

void mostrar(){
    cout << "   OPÇÃO 2 - MOSTRAR VALORES DO ARQUIVO   " << endl << endl;

    ///Mostra o conteúdo do arquivo
    char *x = new char;

    ifstream leitura;

    leitura.open("exer_7.txt", ios::in);

    if(leitura.is_open()) {
        cout << "Arquivo aberto." << endl << endl;

        cout << "Leitura do arquivo: " << endl;
        while(leitura.get(*x)) {
            cout << x;
        }

        cout << endl;
    } else
        cout << "Erro ao abrir o arquivo." << endl;

    leitura.close();
}

void mostrarQTD(){
    cout << "   OPÇÃO 3 - MOSTRAR A QUANTIDADE DE VALORES NO ARQUIVO   " << endl << endl;

    ///Soma a quantidade de valores no arquivo
    char *x = new char;
    int *qtd = new int(0);

    ifstream leitura;

    leitura.open("exer_7.txt", ios::in);

    if(leitura.is_open()) {
        cout << "Arquivo aberto." << endl << endl;

        cout << "Quantidade de números no arquivo: ";
        while(leitura.getline(x, sizeof(x), '\n')) {
            (*qtd)++;
        }

        cout << *qtd;

        cout << endl;
    } else
        cout << "Erro ao abrir o arquivo." << endl;

    leitura.close();
}

void soma(){
    cout << "   OPÇÃO 4 - MOSTRAR SOMA   " << endl << endl;

    ///Faz a soma dos números do arquivo
    char *x = new char;
    int *qtd = new int(0);

    int *resultado = new int(0);

    ifstream leitura;

    leitura.open("exer_7.txt", ios::in);

    if(leitura.is_open()) {
        cout << "Arquivo aberto." << endl << endl;

        cout << "Quantidade de números no arquivo: ";
        while(leitura.getline(x, sizeof(x), '\n')) {
            *resultado += atoi(x);
        }

        cout << *resultado;

        cout << endl;
    } else
        cout << "Erro ao abrir o arquivo." << endl;

    leitura.close();
}
