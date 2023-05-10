#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <ctime>

using namespace std;

void Matriz();

int main() {
    setlocale(LC_ALL, "Portuguese");

    Matriz();
}

void Matriz() {
    ofstream escreve("matriz.txt");

    int *l = new int;
    int *c = new int;

    int *linha = new int;
    int *coluna = new int;

    int *qtdZerada = new int;

    int *posx = new int(0);
    int *posy = new int(0);

    int *cont = new int(0);

    srand(time(NULL));

    cout << "Qtd de linhas da matriz: ";
    cin >> *linha;

    cout << "Qtd de colunas da matriz: ";
    cin >> *coluna;

    ///Gera a matriz toda com 1
    int matriz[*linha][*coluna];

    for(*l = 0; *l < *linha; (*l)++) {
        for(*c = 0; *c < *coluna; (*c)++) {
            matriz[*l][*c] = 1;
        }
    }

    ///Quantas serão zeradas
    cout << "\nQuantidade de posições zeradas: ";
    cin >> *qtdZerada;

    cout << endl;

    if(escreve.is_open()) {
        ///Pega a posição e coloca substitui por 0
        while(*cont < *qtdZerada) {
            cout << *cont + 1 << " - PosX a ser zerada: ";
            cin >> *posx;
            fflush(stdin);

            cout << *cont + 1 << " - PosY a ser zerada: ";
            cin >> *posy;
            fflush(stdin);

            for(*l = 0; *l < *linha; (*l)++) {
                for(*c = 0; *c < *coluna; (*c)++) {
                    if(*l == *posx && *c == *posy)
                        matriz[*l][*c] = 0;
                }
            }

            (*cont)++;

            cout << endl;
        }

    } else {
            cout << "Falha ao abrir o arquivo.";
    }

    for(*l = 0; *l < *linha; (*l)++) {
        for(*c = 0; *c < *coluna; (*c)++) {
            escreve << matriz[*l][*c] << "\t";
        }

        escreve << "\n";
    }

    system("pause");

    delete l;
    delete c;

    escreve.close();
}
