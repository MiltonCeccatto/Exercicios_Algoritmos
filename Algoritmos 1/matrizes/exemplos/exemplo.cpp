
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <ctime>
using namespace std;
#define TAM 10

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));
    int linha, coluna, M[3][3];

    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            M[linha][coluna] = rand()%100;
            fflush(stdin);
        }
    }

    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            cout << M[linha][coluna] << " ";
        }
        cout << endl;
    }

    return EXIT_SUCCESS ;
}
