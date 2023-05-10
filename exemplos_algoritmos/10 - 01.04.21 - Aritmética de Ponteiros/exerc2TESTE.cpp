#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <time.h>
#include <stdlib.h>


using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    int i = 0, valor, posicao = 0;
    bool presente = false;
    int v[10];
    int *vet;
    vet = &v[0];

    cout << "Vetor gerado: ";
    while(*vet){
        *vet = rand() % 100;

        cout << *vet << " ";

        vet++;
        i++;
    }

    vet -= i;
    i = 0;

    /*cout << endl << endl;

    cout << "Informe um valor: ";
    cin >> valor;

    while(i < 10){
        if(*vet == valor){
            presente = true;
            posicao = i + 1;
        }
        vet++;
        i++;
    }

    cout << endl;

    if(presente == true)
        cout << "O valor está contido no vetor! Localizado na posição " << posicao << endl;
    else
        cout << "O valor não está contido no vetor" << endl;*/
}
