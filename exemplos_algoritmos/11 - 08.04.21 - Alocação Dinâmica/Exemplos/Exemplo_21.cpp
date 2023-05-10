#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    int *tam = new int;
    cout << "Informe o tamanho do vetor: ";
    cin >> *tam;
    fflush(stdin);

    int *x = new int;

    int *pvet = new int[*tam];

    srand(time(NULL));
    for(*x = 0; *x < *tam; (*x)++)
    {
        pvet[*x] = rand() % 40;
    }

    for(*x = 0; *x < *tam; (*x)++)
    {
        cout << pvet[*x] << ", ";
    }
}
