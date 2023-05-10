#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string texto;
    char *ptexto;
    ptexto = &texto[0];
    int contMaiusculo = 0, contMinusculo = 0, i = 0, tamanho;

    cout << "Informe o texto: ";
    getline(cin, texto);

    system("cls");

    cout << "Texto informado: " << ptexto << endl << endl;

    while(*ptexto){
        if(islower(*ptexto))
            contMinusculo++;
        else if(isupper(*ptexto))
            contMaiusculo++;

        ptexto++;
        i++;
    }

    ptexto -= i;
    i = 0;

    cout << "Quantia de caracteres maiúsculos: " << contMaiusculo << endl;
    cout << "Quantia de caracteres minúsculos: " << contMinusculo << endl << endl;

    while(*ptexto){
        *ptexto = toupper(*ptexto);

        ptexto++;
        i++;
    }

    cout << "Texto em maiúsculo: " << texto << endl << endl;

    ptexto += strlen(ptexto) - 1;

    cout << "Texto ao contrário: ";
    while(*ptexto){
       cout << *ptexto;
       ptexto--;
    }

    cout << endl << endl;

    system("pause");

}
