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

    float vetorA[TAM], vetorB[TAM], vetorY[TAM];

    for (int i = 0; i < TAM; i++){
        vetorA[i] = rand()%100;
        vetorB[i] = rand()%100;
        vetorY[i] = vetorA[i] + vetorB[i];
    }

    cout <<"Vetor A: \t" << "vetor B: \t" << "vetor Y" << endl;
    for (int c = 0; c < TAM; c++){

        cout <<"" << vetorA[c] << "\t+\t" << vetorB[c] << "\t=\t" << vetorY[c]  << endl;
    }



    cout << endl;
    return EXIT_SUCCESS ;
}
