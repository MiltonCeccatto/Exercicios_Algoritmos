#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
    char texto[100];
    char *ptexto;
    ptexto = texto;
    cout << "Digite um texto qualquer: ";
    gets(texto);
    while(*ptexto)
    {
        cout << ptexto << endl;
        cout << *ptexto << ", ";
        ptexto++;
    }
}
