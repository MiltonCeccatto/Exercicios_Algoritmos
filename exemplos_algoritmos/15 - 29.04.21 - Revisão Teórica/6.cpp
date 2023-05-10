#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    int *py, *x;
    py = new int;
    x = new int[10];
    cout << "Informe um número: ";
    cin >> *py;
    fflush(stdin);

    *x = (*py - 5);
    while(*x <= (*py + 5)){
        if(*x != *py)
            cout << *x << ", ";
        *x = *x + 1;
    }

    delete (py);
    delete (x);
    getchar();

}

