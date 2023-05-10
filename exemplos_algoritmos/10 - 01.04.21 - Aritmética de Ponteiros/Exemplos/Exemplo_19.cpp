#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

void leitura(int *pv);
void mostra(int **p);
main()
{
    int valor;
    leitura(&valor);
    cout << "\nValor no main: " << valor;
}
void leitura(int *pv)
{
    cout << "Informe um valor: ";
    cin >> *pv;
    fflush(stdin);
    mostra(&pv);
}
void mostra(int **p)
{
    cout << "Valor digitado: " << **p;
    **p += 3;
    //**p = **p + 3;
}

