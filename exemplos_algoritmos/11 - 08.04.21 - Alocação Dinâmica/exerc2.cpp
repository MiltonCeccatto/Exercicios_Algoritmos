#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <time.h>

using namespace std;

void vet12(int *px1, int *px2, int *t1, int *t2);
void vet3(int *px1, int *px2, int *px3, int *t1, int *t2, int *t3);
void paresImpares(int *px3, int *t3);
void crescente(int *px3, int *t3);
void soma(int *px3, int *t3);


main(){
    setlocale(LC_ALL, "Portuguese");

    int *tam1 = new int;
    int *tam2 = new int;

    cout << "Informe o tamanho do vetor x1: ";
    cin >> *tam1;
    fflush(stdin);

    cout << "Informe o tamanho do vetor x2: ";
    cin >> *tam2;
    fflush(stdin);

    cout << endl;

    int *x1 = new int[*tam1];
    int *x2 = new int[*tam2];

    int *tam3 = new int(*tam1 + *tam2);

    int *x3 = new int[*tam3];

    vet12(x1, x2, tam1, tam2);
    vet3(x1, x2, x3, tam1, tam2, tam3);
    paresImpares(x3, tam3);
    crescente(x3, tam3);
    soma(x3, tam3);

    delete tam1;
    delete tam2;
    delete tam3;
    delete []x1;
    delete []x2;
    delete []x3;
}

void vet12(int *px1, int *px2, int *t1, int *t2){
    srand(time(NULL));

    int *i = new int;

    //GERA X1
    cout << "x1 [ ";
    for(*i = 0; *i < *t1; (*i)++){
        *px1 = rand() % 100;
        cout << *px1 << " ";
        px1++;
    }
    cout << "]" << endl;

    px1 -= *t1;

    delete i;

    //GERA X2
    cout << "x2: [ ";
    for(*i = 0; *i < *t2; (*i)++) {
        *px2 = rand() % 100;
        cout << *px2 << " ";
        px2++;
    }
    cout << "]" << endl;

    px2 -= *t2;

    delete i;
}

void vet3(int *px1, int *px2, int *px3, int *t1, int *t2, int *t3){
    int *i = new int;

    //PASSA X1 E X2 PRA X3
    cout << "x3: [ ";
    for(*i = 0; *i < *t1; (*i)++){
        *px3 = *px1;
        px3++;
        px1++;
    }

    for(*i = 0; *i < *t2; (*i)++){
        *px3 = *px2;
        px3++;
        px2++;
    }

    px3 -= *t3;



    for(*i = 0; *i < *t3; (*i)++) {
        cout << *px3 << " ";

        px3++;
    }
    cout << "]" << endl << endl;

    px3 -= *t3;

    delete i;
}

void paresImpares(int *px3, int *t3){
    int *i = new int;

    //PARES
    cout << "Pares x3 [ ";
    for(*i = 0; *i < *t3; (*i)++) {
        if(*px3 % 2 == 0)
            cout << *px3 << " ";

        px3++;
    }
    cout << "]" << endl;

    px3 -= *t3;

    delete i;

    //IMPARES
    cout << "ímpares x3 [ ";
    for(*i = 0; *i < *t3; (*i)++) {
        if(*px3 % 2 != 0)
            cout << *px3 << " ";

        px3++;
    }
    cout << "]" << endl;

    px3 -= *t3;

    delete i;
}

void crescente(int *px3, int *t3){
    int *i = new int;

    //CRESCENTE
    int aux;
    for (int i = 0; i < *t3; i++){
        for (int j = i + 1; j < *t3; j++){
            if (*(px3 + i) > *(px3 + j)){
                aux = *(px3 + i);
                *(px3 + i) = *(px3 + j);
                *(px3 + j) = aux;
            }
        }
    }

    cout << "Crescente x3 [ ";
    for(*i = 0; *i < *t3; (*i)++) {
        cout << *px3 << " ";
        px3++;
    }
    cout << "]" << endl;

    px3 -= *t3;

    delete i;
}

void soma(int *px3, int *t3){
    int *soma = new int(0);
    int *i = new int;

    for(*i = 0; *i < *t3; (*i)++) {
        *soma += *px3;

        px3++;
    }

    px3 -= *t3;

    cout << "Soma x3: " << *soma << endl;

    delete soma;
}
