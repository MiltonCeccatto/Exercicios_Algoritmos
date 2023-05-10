#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>

using namespace std;

void ordem(int *V);

main(){
    setlocale(LC_ALL, "Portuguese");

    int menu = -1, leu = 0;
    int V[10];

    srand(time(NULL));

    for (int i=0; i<10; i++) {
        V[i] = rand()%100;
    }

    cout << "V [";
    for (int i=0; i<10; i++) {
        cout << V[i];
        if(i<10-1)
            cout << ", ";
        else
            cout << "]" << endl;
    }

    ordem(V);

}

void ordem(int *V){
    int trocou, aux;

    do{
        trocou = 0;
        for (int j=0; j<10-1; j++){
            if (V[j] > V[j+1]){
                aux = V[j];
                V[j] = V[j+1];
                V[j+1] = aux;
                trocou = 1;
            }
        }
    }while(trocou == 1);

    cout << "V [";
    for (int i=0; i<10; i++) {
        cout << V[i];
        if(i<10-1)
            cout << ", ";
        else
            cout << "]" << endl;
    }
}

