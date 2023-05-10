
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
    char texto1[100];
    char *ptexto1;
    ptexto1 = texto1;

    ///texto1 recebe a frase
    cout << "Informe o texto: ";
    cin.getline(ptexto1, 100);

    tamanho = strlen(ptexto1);

    cout << endl;

    cout << "Normal: " << ptexto1 << endl;


    ///Transforma em maiúsculo
    while(*ptexto1){
        *ptexto1 = toupper(*ptexto1);

        if(isspace(*ptexto1))
            cont++;

        ptexto1++;
        i++;
    }

    ptexto1 -= i;
    i = 0;

    tamanho = tamanho - cont;

    ///Cria o char texto2, com tamanho da 1ª sem os espaços
    char texto2[tamanho];
    char *ptexto2;
    ptexto2 = texto2;

    cout << "Maiúsculo: " << ptexto1 << endl;

    ///Passa somente os caracteres, se for espaço pula 1
     while(*ptexto1){
        if(!isspace(*ptexto1)){
            *ptexto2 = *ptexto1;
            ptexto1++;
            ptexto2++;
            i++;

        } else if(isspace(*ptexto1)){
            ptexto1++;
            cont++;
        }

    }

    *ptexto2 = '\0';
    ptexto2 -= i;
    i = 0;

    cout << "Sem espaços: " << ptexto2 << endl;
    cout << "Contador de espaços: " << cont << endl;

}
