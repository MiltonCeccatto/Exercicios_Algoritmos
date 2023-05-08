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

    float vetRes[5], res = 1;
    char vetorA[20], aux;


    for(int i = 0; i < 20; i++){
        cout << "Digite um caractere: ";
        cin >> vetorA[i];
    }

    for(int i = 0; i < 10; i++){
        aux = vetorA[i];
        vetorA[i] = vetorA[i + 10];
        vetorA[i + 10] = aux;
    }

    for(int i = 0; i < 20; i++){
        cout << vetorA[i];
        cout << ", ";
    }

    return EXIT_SUCCESS ;
}
