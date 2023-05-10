#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int potencia(int base, int expoente);

main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;
    cout << "Informe a base: ";
    cin >> n1;

    cout << "Informe o expoente: ";
    cin >> n2;

    cout << endl;

    cout << "O resultado da base " << n1 << " e expoente " << n2 << " é: " << potencia(n1,n2);
}

int potencia(int base, int expoente){

    if(expoente == 0)
        return 1;
    else
        return (base * potencia(base, expoente - 1));
}
