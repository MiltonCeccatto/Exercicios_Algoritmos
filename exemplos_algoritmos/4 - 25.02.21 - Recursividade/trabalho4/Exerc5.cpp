#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include <math.h>

#define lin 5
#define col 5

using namespace std;

void leitura(float M[][col]);
void mostra(float M[][col]);
void arredondar(float M[][col]);
void troca(float M[][col]);

main(){
    setlocale(LC_ALL, "Portuguese");

    int menu = -1, leu = 0;
    float Mat[lin][col];

    leitura(Mat);
    cout << endl;
    mostra(Mat);
    cout << endl;
    arredondar(Mat);
    cout << endl;
    troca(Mat);

}

void leitura(float M[][col]){
    srand(time(NULL));

    cout << "Informe os números: ";

    for(int linha = 0; linha < lin; linha++){
        for(int coluna = 0; coluna < col; coluna++){
            cin >> M[linha][coluna];
        }
    }
}

void mostra(float M[][col]){
    cout << "Matriz normal: " << endl;
    for(int linha = 0; linha < lin; linha++){
        for(int coluna = 0; coluna < col; coluna++){
            cout << M[linha][coluna] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void arredondar(float M[][col]){

    float A[lin][col];
    int aux;

    for(int linha = 0; linha < lin; linha++){
        for(int coluna = 0; coluna < col; coluna++){
            aux = M[linha][coluna];
            if(aux %2 == 0)
                M[linha][coluna] = ceil(M[linha][coluna]);
            else
                M[linha][coluna] = floor(M[linha][coluna]);
        }
    }

    cout << "Matriz arredondada: " << endl;
    for(int linha = 0; linha < lin; linha++){
        for(int coluna = 0; coluna < col; coluna++){
            cout << M[linha][coluna] << "\t";
        }
        cout << endl;
    }
    cout << endl;

}

void troca(float M[][col]){

    int maior, posX, posY, aux;

    for(int linha = 0; linha < lin; linha++){
        maior = M[linha][0];
        for(int coluna = 0; coluna < col; coluna++){
            if(M[linha][coluna] > maior){
                maior = M[linha][coluna];
                posX = linha;
                posY = coluna;
            }
        }
        aux = M[linha][linha];
        M[linha][linha] = M[posX][posY];
        M[posX][posY] = aux;
    }


    cout << "Matriz trocada (diagonal principal com o maior elemento de cada linha): " << endl;
    for(int linha = 0; linha < lin; linha++){
        for(int coluna = 0; coluna < col; coluna++){
            cout << M[linha][coluna] << "\t";
        }
        cout << endl;
    }
    cout << endl;

}

