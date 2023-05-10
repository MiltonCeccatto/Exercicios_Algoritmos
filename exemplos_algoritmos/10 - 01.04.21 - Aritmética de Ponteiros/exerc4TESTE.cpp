
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <time.h>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    int i = 0, tamanho, cont = 0;
    string texto1, texto2;
    char *ptexto1, *ptexto2;
    ptexto1 = &texto1[0];
    ptexto2 = &texto2[0];

    cout << "Informe o texto: ";
    getline(cin, texto1);

    //tamanho = strlen(ptexto1);

    cout << ptexto1 << endl;


    while(*ptexto1){
        *ptexto1 = toupper(*ptexto1);

        if(isspace(*ptexto1))
            cont++;

        ptexto1++;
        i++;
    }

    ptexto1 -= i;
    ptexto2 -= i;
    i = 0;

    while(*ptexto1){
        if(!isspace(*ptexto1)){
            *ptexto2 = *ptexto1;
            ptexto1++;
            ptexto2++;
            i++;

        } else if(isspace(*ptexto1)){
            ptexto1++;
        }

    }

    ptexto1 -= i;
    ptexto2 -= i;
    i = 0;

    cout << ptexto2 << endl;
    cout << cont << endl;

}
