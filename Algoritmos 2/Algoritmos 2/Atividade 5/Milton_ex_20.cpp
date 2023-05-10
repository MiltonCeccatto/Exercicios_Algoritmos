#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include <stdio.h>

using namespace std;

int potenciacao(int base, int expoente);

int main()
{
    int b, e;
    setlocale(LC_ALL, "Portuguese");
    cout << "Informe um valor para ser a base : ";
    cin >> b;
    cout << "Informe um valor para ser o expoente : ";
    cin >> e;

    cout << potenciacao(b,e);

}

int potenciacao(int base, int expoente){
    if (expoente == 0)
        return 1;
    else if (expoente == 1)
        return base;
    else
       return (base*potenciacao(base, expoente-1));
}








