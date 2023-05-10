#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
void mostra(int *p);
void calcula(int **p2);
main()
{
    int vet[5], *pvet;
    pvet = vet;
    srand(time(NULL));
    for(int i = 0; i < 5; i++)
    {
        *(pvet + i) = rand() % 10;
        //pvet[i] = rand() % 10;
    }
    mostra(pvet);
}
void mostra(int *p)
{
    for(int i = 0; i < 5; i++)
        cout << p[i] << ", ";
    calcula(&p);
}
void calcula(int **p2)
{
    int soma = 0;
    for(int i = 0; i < 5; i++)
        soma += (*((*p2)+i));
        //soma += (*p2)[i];
    cout << "\n\nSoma: " << soma;
}

