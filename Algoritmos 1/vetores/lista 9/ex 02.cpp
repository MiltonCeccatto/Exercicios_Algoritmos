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

    float V[TAM], maior = 0,position ;

    for (int i=0; i<TAM; i++)
        V[i] = rand()%60 + 21;

    for (int i = 0; i < TAM; i++)
    {
        cout << V[i];
        if(i<TAM -1)
            cout << ", ";
    }
    for (int i = 0; i < TAM; i++)
    {
        if (i == 0)
        {
            V[i] = maior;
        }
        if (V[i] > maior)
        {
            maior = V[i];
            position = i +1;
        }
    }
    cout << "\nO maior valor é: " << maior;
    cout << "\nA posição é: " << position;


    cout << endl;
    return EXIT_SUCCESS ;
}
