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

    float V[TAM];

    for (int i=0; i<TAM; i++)
        V[i] = (rand()%100 / 100.0) * 200.0;

    for (int i = 0; i < TAM; i++)
    {
        cout << V[i];
        if(i<TAM -1)
            cout << ", ";
    }
    cout << endl;
    return EXIT_SUCCESS ;
}
