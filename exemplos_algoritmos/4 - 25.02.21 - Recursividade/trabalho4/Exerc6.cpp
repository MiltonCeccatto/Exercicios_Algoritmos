#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

float harmonico(float n);

main(){
    setlocale(LC_ALL, "Portuguese");

    int numero;

    cout << "Informe o n-�simo termo: ";
    cin >> numero;

    cout << endl;

    cout << "O " << numero << " � numero harm�nico �: " << harmonico(numero);

    cout << endl;
}
float harmonico(float n){

    if(n == 1)
        return 1;
    else
        return(1/n + harmonico(n - 1));
}

