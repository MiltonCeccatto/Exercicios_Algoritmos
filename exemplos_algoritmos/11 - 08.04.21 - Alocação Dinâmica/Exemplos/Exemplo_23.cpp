#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
void gerar_vetor(int *pv, int *t);
void mostra_vetor(int *pv, int *t);

main()
{
    int *tam = new int;
    cout << "Informe o tamanho do vetor: ";
    cin >> *tam;
    fflush(stdin);

    int *pvet = new int[*tam];

    gerar_vetor(pvet, tam);

    mostra_vetor(pvet, tam);
}

void gerar_vetor(int *pv, int *t)
{
    int *x = new int;
    srand(time(NULL));
    for(*x = 0; *x < *t; (*x)++)
    {
        *pv = rand() % 40;
        pv++;
    }
    delete x;
}

void mostra_vetor(int *pv, int *t)
{
    int *x = new int;
    for(*x = 0; *x < *t; (*x)++)
    {
        cout << *pv << ", ";
        pv++;
    }
}
