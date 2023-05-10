#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

main(){
    char texto[100];
    char *ptexto;
    ptexto = texto;
    cout << "Informe um texto: ";
    gets(texto);
    //fflush(stdin);
    //cout << "\nTexto lido: \n";
    while(*ptexto)
    {
        cout << ptexto << endl;
        ptexto++;
    }
    /*cout << "\nTexto invertido: \n";
    while(*ptexto)
    {
        ptexto--;
        cout << *ptexto;
    }*/
}
