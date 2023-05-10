#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

main(){
    int vetor[10], x = 21;
    int *px = new int();
    int *pvet;
    pvet = vetor;

    cout << sizeof(x)<< endl;
    cout << sizeof(*pvet)<< endl;
    cout << sizeof(vetor)<< endl;
    cout << sizeof(char) << endl;
    cout << sizeof(*px)<< endl;
    cout << sizeof(double)<< endl;
}
