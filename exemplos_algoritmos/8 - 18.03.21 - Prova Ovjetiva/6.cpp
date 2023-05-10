#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int fibonacci (int n);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int v;

    cout << "Informe um valor: ";
    cin >> v;
    fflush(stdin);
    cout << fibonacci(v);
}

int fibonacci (int n){
    if(n > 1)
        return (fibonacci(n-1) + fibonacci(n-2));
}

