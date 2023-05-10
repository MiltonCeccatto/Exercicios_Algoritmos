
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
    char texto2[tamanho], texto3[tamanho], aux[tamanho];
    char *ptexto2, *ptexto3, *paux;
    ptexto2 = texto2;
    ptexto3 = texto3;
    paux = aux;

    ///Passa somente os caracteres, se for espaço pula 1
     while(*ptexto1){
        if(!isspace(*ptexto1)){
            *ptexto2 = *ptexto1;
            *paux = *ptexto2;
            ptexto1++;
            ptexto2++;
            paux++;
            i++;

        } else if(isspace(*ptexto1)){
            ptexto1++;
            cont++;
        }

    }

    *ptexto2 = '\0';
    *paux = '\0';
    paux -= i;
    i = 0;

    ptexto2 += strlen(ptexto2) - 1;

    ///Passa o texto2 para o texto3 de forma invertida
    while(*ptexto2){
        *ptexto3 = *ptexto2;
        ptexto2--;
        ptexto3++;
        i++;
    }

    *ptexto3 = '\0';
    ptexto3 -= i;

    cout << "Invertido: " << ptexto3 << endl << endl;

    if(*ptexto3 == *paux)
        cout << "É um palíndromo!";
    else
        cout << "Não é um palíndromo";
}
