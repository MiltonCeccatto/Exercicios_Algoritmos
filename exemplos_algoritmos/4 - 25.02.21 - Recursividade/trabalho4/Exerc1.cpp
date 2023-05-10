#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int mdc(int valor1, int valor2);

main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;
    cout << "Informe o valor n1: ";
    cin >> n1;

    cout << "Informe o valor n2: ";
    cin >> n2;

    cout << endl;

    cout << "O máximo divisor comum entre " << n1 << " e " << n2 << " é: " << mdc(n1,n2);
}

int mdc(int valor1, int valor2){

    if(valor2 == 0)
        return valor2;
    else
        return mdc(valor2, valor1 % valor2);
}
