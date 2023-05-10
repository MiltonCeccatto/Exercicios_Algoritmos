#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    int n,soma,contador;
    float resto;

    do {
        cout << "digite um numero: ";
        cin>> n;

        if(n<=2 || n>=20)
            cout << "O valor digitado e invalido! Digite novamente!\n\n";
    } while(n<=2 || n>=20);

    contador=2;
    soma=0;
    resto=contador%2;

    while(contador<=n) {

        if(contador % 2 ==0){
            cout << contador << endl;
            soma=soma+contador;
        }
        contador++;
    }

    cout<< "soma e: "<< soma<< endl;


}

