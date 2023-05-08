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

    int num, sair;
    float vetor[TAM];
    do
    {
        system("cls");
        cout << "Informe 0 para sair e 1 para continuar: " << endl;
        cin >> sair;
        cout << "Informe um nùmero de 1 a 10: " << endl;
        cin >> num;
        for (int i=0; i<=TAM; i++)
            vetor[i] = i;

        for (int i = 0; i <= TAM; i++)
        {
            cout << vetor[i] * num;
            cout << ", ";


        }
        cout << endl;
    system("pause");

    }
    while (sair != 0 );
    return EXIT_SUCCESS ;
}
